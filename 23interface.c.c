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
extern char* gCallerSName;
extern char* gCallerSName2;
extern char* gCallerSName3;
extern char* gCallerSName4;
extern char* gCallerSName5;
extern char* gCallerSName6;
extern char* gCallerSName7;
extern char* gCallerSName8;
extern char* gCallerSName9;
extern char* gCallerSName10;
extern int gCallerSLine;
extern int gCallerSLine2;
extern int gCallerSLine3;
extern int gCallerSLine4;
extern int gCallerSLine5;
extern int gCallerSLine6;
extern int gCallerSLine7;
extern int gCallerSLine8;
extern int gCallerSLine9;
extern int gCallerSLine10;
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
struct sInterfaceNode
{
    char* name;
    struct sClass* klass;
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

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
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

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info);

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info);

_Bool sInterfaceNode_terminated();

char* sInterfaceNode_kind();

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static void sInterfaceNode_finalize(struct sInterfaceNode* self);
static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self);
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned short int __result1__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result1__ = ((unsigned short int)((((__bsx)>>8)&255)|(((__bsx)&255)<<8)));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result1__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int __bswap_32(unsigned int __bsx){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result2__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result2__ = ((((__bsx)&4278190080)>>24)|(((__bsx)&16711680)>>8)|(((__bsx)&65280)<<8)|(((__bsx)&255)<<24));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result2__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned long int __bswap_64(unsigned long int __bsx){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned long int __result3__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result3__ = ((((__bsx)&18374686479671623680)>>56)|(((__bsx)&71776119061217280)>>40)|(((__bsx)&280375465082880)>>24)|(((__bsx)&1095216660480)>>8)|(((__bsx)&4278190080)<<8)|(((__bsx)&16711680)<<24)|(((__bsx)&65280)<<40)|(((__bsx)&255)<<56));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result3__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned short int __uint16_identity(unsigned short int __x){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned short int __result4__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result4__ = __x;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result4__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned int __uint32_identity(unsigned int __x){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int __result5__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result5__ = __x;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result5__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline unsigned long int __uint64_identity(unsigned long int __x){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned long int __result6__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result6__ = __x;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result6__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline void die(char* msg){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    (gCallerSName = "./comelang2.h", gCallerSLine = 106,perror(msg));
    __freed_obj__ = 0;
    (gCallerSName = "./comelang2.h", gCallerSLine = 107,exit(4));
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value0;
struct smart_pointer$1char* result_0;
void* right_value1;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2008))));
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2010))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2010))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2011))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 2011))->memory, "./comelang2.h", 2011))->buf;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result7__;
    __freed_obj__ = 0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value2;
struct smart_pointer$1char* result_1;
void* right_value3;
struct buffer* __dec_obj2;
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2018))));
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2020))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2020))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2021))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2021))->memory, "./comelang2.h", 2021))->buf;
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result8__;
    __freed_obj__ = 0;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value4;
struct smart_pointer$1short* result_2;
void* right_value5;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2028))));
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2030))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2030))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2031))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2031))->memory, "./comelang2.h", 2031))->buf;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result9__;
    __freed_obj__ = 0;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value6;
struct smart_pointer$1int* result_3;
void* right_value7;
struct buffer* __dec_obj4;
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2038))));
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2040))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2040))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2041))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2041))->memory, "./comelang2.h", 2041))->buf;
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result10__;
    __freed_obj__ = 0;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value8;
struct smart_pointer$1long* result_4;
void* right_value9;
struct buffer* __dec_obj5;
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2048))));
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2050))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2050))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2051))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2051))->memory, "./comelang2.h", 2051))->buf;
    __freed_obj__ = 0;
    __result11__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result11__;
    __freed_obj__ = 0;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional1) {
            if(((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            if(((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            if(((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

struct sInterfaceNode* sInterfaceNode_initialize(struct sInterfaceNode* self, char* name, struct sClass* klass, struct sInfo* info){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value10;
char* __dec_obj6;
void* right_value62;
struct sClass* __dec_obj39;
void* right_value63;
char* __dec_obj40;
struct sInterfaceNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __dec_obj6=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 13))->name;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 13))->name=(char*)come_increment_ref_count(((char*)(right_value10=(gCallerSName = "23interface.c", gCallerSLine = 13,__builtin_string(name)))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj39=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 14))->klass;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 14))->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value62=sClass_clone(klass))));
    if(__dec_obj39) { come_call_finalizer(sClass_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 16))->sline=((struct sInfo*)come_null_check(info, "23interface.c", 16))->sline;
    __freed_obj__ = 0;
    __dec_obj40=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 17))->sname;
    ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 17))->sname=(char*)come_increment_ref_count(((char*)(right_value63=(gCallerSName = "23interface.c", gCallerSLine = 17,__builtin_string(((struct sInfo*)come_null_check(info, "23interface.c", 17))->sname)))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result42__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result42__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

static struct sClass* sClass_clone(struct sClass* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional5;
struct sClass* __result12__;
void* right_value11;
struct sClass* result_5;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* right_value12;
char* __dec_obj7;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value60;
struct list$1tuple2$2charphsTypephph* __dec_obj37;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value61;
char* __dec_obj38;
struct sClass* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sClass*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional5=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional5) {
            __result12__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result12__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_5=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value11=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3))));
        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional28=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 4))->mStruct=((struct sClass*)come_null_check(self, "sClass_clone", 4))->mStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 5))->mFloat=((struct sClass*)come_null_check(self, "sClass_clone", 5))->mFloat;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional30=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional30) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 6))->mUnion=((struct sClass*)come_null_check(self, "sClass_clone", 6))->mUnion;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional31=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional31) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 7))->mGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 7))->mGenerics;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional32=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional32) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 8))->mMethodGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 8))->mMethodGenerics;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional33) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 9))->mEnum=((struct sClass*)come_null_check(self, "sClass_clone", 9))->mEnum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional34=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional34) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 10))->mProtocol=((struct sClass*)come_null_check(self, "sClass_clone", 10))->mProtocol;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional35=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional35) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 11))->mNumber=((struct sClass*)come_null_check(self, "sClass_clone", 11))->mNumber;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional36=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 13))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional36) {
            __dec_obj7=((struct sClass*)come_null_check(result_5, "sClass_clone", 12))->mName;
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 12))->mName=(char*)come_increment_ref_count(((char*)(right_value12=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName))));
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional37=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional37) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 13))->mGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 13))->mGenericsNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional38=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional38) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 14))->mMethodGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 14))->mMethodGenericsNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional39=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 16))->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional39) {
            __dec_obj37=((struct sClass*)come_null_check(result_5, "sClass_clone", 15))->mFields;
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 15))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value60=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields))));
            if(__dec_obj37) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional122=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 16))->mOutputed=((struct sClass*)come_null_check(self, "sClass_clone", 16))->mOutputed;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 18))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            __dec_obj38=((struct sClass*)come_null_check(result_5, "sClass_clone", 17))->mDeclareSName;
            ((struct sClass*)come_null_check(result_5, "sClass_clone", 17))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result41__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result41__;
        __freed_obj__ = 0;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void sClass_finalize(struct sClass* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional6=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional7=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional7) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional27=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional27) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1tuple2$2charphsTypephph* it_6;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                __caller_sname10__ = gCallerSName10;
                __caller_sname9__ = gCallerSName9;
                __caller_sname8__ = gCallerSName8;
                __caller_sname7__ = gCallerSName7;
                __caller_sname6__ = gCallerSName6;
                __caller_sname5__ = gCallerSName5;
                __caller_sname4__ = gCallerSName4;
                __caller_sname3__ = gCallerSName3;
                __caller_sname2__ = gCallerSName2;
                __caller_sname__ = gCallerSName;
                __caller_sline10__ = gCallerSLine10;
                __caller_sline9__ = gCallerSLine9;
                __caller_sline8__ = gCallerSLine8;
                __caller_sline7__ = gCallerSLine7;
                __caller_sline6__ = gCallerSLine6;
                __caller_sline5__ = gCallerSLine5;
                __caller_sline4__ = gCallerSLine4;
                __caller_sline3__ = gCallerSLine3;
                __caller_sline2__ = gCallerSLine2;
                __caller_sline__ = gCallerSLine;
                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                    it_6=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_6!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_7=it_6;
                        __freed_obj__ = 0;
                        it_6=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_6, "./comelang2.h", 193))->next;
                        __freed_obj__ = 0;
                        if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __caller_sname10__ = gCallerSName10;
                        __caller_sname9__ = gCallerSName9;
                        __caller_sname8__ = gCallerSName8;
                        __caller_sname7__ = gCallerSName7;
                        __caller_sname6__ = gCallerSName6;
                        __caller_sname5__ = gCallerSName5;
                        __caller_sname4__ = gCallerSName4;
                        __caller_sname3__ = gCallerSName3;
                        __caller_sname2__ = gCallerSName2;
                        __caller_sname__ = gCallerSName;
                        __caller_sline10__ = gCallerSLine10;
                        __caller_sline9__ = gCallerSLine9;
                        __caller_sline8__ = gCallerSLine8;
                        __caller_sline7__ = gCallerSLine7;
                        __caller_sline6__ = gCallerSLine6;
                        __caller_sline5__ = gCallerSLine5;
                        __caller_sline4__ = gCallerSLine4;
                        __caller_sline3__ = gCallerSLine3;
                        __caller_sline2__ = gCallerSLine2;
                        __caller_sline__ = gCallerSLine;
                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                            if(_if_conditional8=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional8) {
                                if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __caller_sname10__ = gCallerSName10;
                                __caller_sname9__ = gCallerSName9;
                                __caller_sname8__ = gCallerSName8;
                                __caller_sname7__ = gCallerSName7;
                                __caller_sname6__ = gCallerSName6;
                                __caller_sname5__ = gCallerSName5;
                                __caller_sname4__ = gCallerSName4;
                                __caller_sname3__ = gCallerSName3;
                                __caller_sname2__ = gCallerSName2;
                                __caller_sname__ = gCallerSName;
                                __caller_sline10__ = gCallerSLine10;
                                __caller_sline9__ = gCallerSLine9;
                                __caller_sline8__ = gCallerSLine8;
                                __caller_sline7__ = gCallerSLine7;
                                __caller_sline6__ = gCallerSLine6;
                                __caller_sline5__ = gCallerSLine5;
                                __caller_sline4__ = gCallerSLine4;
                                __caller_sline3__ = gCallerSLine3;
                                __caller_sline2__ = gCallerSLine2;
                                __caller_sline__ = gCallerSLine;
                                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                    if(_if_conditional9=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional9) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional10=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional10) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                gCallerSName10 = __caller_sname10__;
                                gCallerSName9 = __caller_sname9__;
                                gCallerSName8 = __caller_sname8__;
                                gCallerSName7 = __caller_sname7__;
                                gCallerSName6 = __caller_sname6__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName4 = __caller_sname4__;
                                gCallerSName3 = __caller_sname3__;
                                gCallerSName2 = __caller_sname2__;
                                gCallerSName = __caller_sname__;
                                gCallerSLine10 = __caller_sline10__;
                                gCallerSLine9 = __caller_sline9__;
                                gCallerSLine8 = __caller_sline8__;
                                gCallerSLine7 = __caller_sline7__;
                                gCallerSLine6 = __caller_sline6__;
                                gCallerSLine5 = __caller_sline5__;
                                gCallerSLine4 = __caller_sline4__;
                                gCallerSLine3 = __caller_sline3__;
                                gCallerSLine2 = __caller_sline2__;
                                gCallerSLine = __caller_sline__;
}

static void sType_finalize(struct sType* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __caller_sname10__ = gCallerSName10;
                                        __caller_sname9__ = gCallerSName9;
                                        __caller_sname8__ = gCallerSName8;
                                        __caller_sname7__ = gCallerSName7;
                                        __caller_sname6__ = gCallerSName6;
                                        __caller_sname5__ = gCallerSName5;
                                        __caller_sname4__ = gCallerSName4;
                                        __caller_sname3__ = gCallerSName3;
                                        __caller_sname2__ = gCallerSName2;
                                        __caller_sname__ = gCallerSName;
                                        __caller_sline10__ = gCallerSLine10;
                                        __caller_sline9__ = gCallerSLine9;
                                        __caller_sline8__ = gCallerSLine8;
                                        __caller_sline7__ = gCallerSLine7;
                                        __caller_sline6__ = gCallerSLine6;
                                        __caller_sline5__ = gCallerSLine5;
                                        __caller_sline4__ = gCallerSLine4;
                                        __caller_sline3__ = gCallerSLine3;
                                        __caller_sline2__ = gCallerSLine2;
                                        __caller_sline__ = gCallerSLine;
                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                            if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional11) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional13) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional14) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional15) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional17) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional19) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional20) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional22) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional23) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional24) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional25) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional26) {
                                                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __caller_sname10__ = gCallerSName10;
                                                __caller_sname9__ = gCallerSName9;
                                                __caller_sname8__ = gCallerSName8;
                                                __caller_sname7__ = gCallerSName7;
                                                __caller_sname6__ = gCallerSName6;
                                                __caller_sname5__ = gCallerSName5;
                                                __caller_sname4__ = gCallerSName4;
                                                __caller_sname3__ = gCallerSName3;
                                                __caller_sname2__ = gCallerSName2;
                                                __caller_sname__ = gCallerSName;
                                                __caller_sline10__ = gCallerSLine10;
                                                __caller_sline9__ = gCallerSLine9;
                                                __caller_sline8__ = gCallerSLine8;
                                                __caller_sline7__ = gCallerSLine7;
                                                __caller_sline6__ = gCallerSLine6;
                                                __caller_sline5__ = gCallerSLine5;
                                                __caller_sline4__ = gCallerSLine4;
                                                __caller_sline3__ = gCallerSLine3;
                                                __caller_sline2__ = gCallerSLine2;
                                                __caller_sline__ = gCallerSLine;
                                                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                    if(_if_conditional12=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional12) {
                                                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_8;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                                                __caller_sname10__ = gCallerSName10;
                                                __caller_sname9__ = gCallerSName9;
                                                __caller_sname8__ = gCallerSName8;
                                                __caller_sname7__ = gCallerSName7;
                                                __caller_sname6__ = gCallerSName6;
                                                __caller_sname5__ = gCallerSName5;
                                                __caller_sname4__ = gCallerSName4;
                                                __caller_sname3__ = gCallerSName3;
                                                __caller_sname2__ = gCallerSName2;
                                                __caller_sname__ = gCallerSName;
                                                __caller_sline10__ = gCallerSLine10;
                                                __caller_sline9__ = gCallerSLine9;
                                                __caller_sline8__ = gCallerSLine8;
                                                __caller_sline7__ = gCallerSLine7;
                                                __caller_sline6__ = gCallerSLine6;
                                                __caller_sline5__ = gCallerSLine5;
                                                __caller_sline4__ = gCallerSLine4;
                                                __caller_sline3__ = gCallerSLine3;
                                                __caller_sline2__ = gCallerSLine2;
                                                __caller_sline__ = gCallerSLine;
                                                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                    it_8=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional2=it_8!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional2) {
                                                        prev_it_9=it_8;
                                                        __freed_obj__ = 0;
                                                        it_8=((struct list_item$1sTypeph*)come_null_check(it_8, "./comelang2.h", 193))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __caller_sname10__ = gCallerSName10;
                                                        __caller_sname9__ = gCallerSName9;
                                                        __caller_sname8__ = gCallerSName8;
                                                        __caller_sname7__ = gCallerSName7;
                                                        __caller_sname6__ = gCallerSName6;
                                                        __caller_sname5__ = gCallerSName5;
                                                        __caller_sname4__ = gCallerSName4;
                                                        __caller_sname3__ = gCallerSName3;
                                                        __caller_sname2__ = gCallerSName2;
                                                        __caller_sname__ = gCallerSName;
                                                        __caller_sline10__ = gCallerSLine10;
                                                        __caller_sline9__ = gCallerSLine9;
                                                        __caller_sline8__ = gCallerSLine8;
                                                        __caller_sline7__ = gCallerSLine7;
                                                        __caller_sline6__ = gCallerSLine6;
                                                        __caller_sline5__ = gCallerSLine5;
                                                        __caller_sline4__ = gCallerSLine4;
                                                        __caller_sline3__ = gCallerSLine3;
                                                        __caller_sline2__ = gCallerSLine2;
                                                        __caller_sline__ = gCallerSLine;
                                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                            if(_if_conditional16=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional16) {
                                                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        gCallerSName10 = __caller_sname10__;
                                                        gCallerSName9 = __caller_sname9__;
                                                        gCallerSName8 = __caller_sname8__;
                                                        gCallerSName7 = __caller_sname7__;
                                                        gCallerSName6 = __caller_sname6__;
                                                        gCallerSName5 = __caller_sname5__;
                                                        gCallerSName5 = __caller_sname5__;
                                                        gCallerSName4 = __caller_sname4__;
                                                        gCallerSName3 = __caller_sname3__;
                                                        gCallerSName2 = __caller_sname2__;
                                                        gCallerSName = __caller_sname__;
                                                        gCallerSLine10 = __caller_sline10__;
                                                        gCallerSLine9 = __caller_sline9__;
                                                        gCallerSLine8 = __caller_sline8__;
                                                        gCallerSLine7 = __caller_sline7__;
                                                        gCallerSLine6 = __caller_sline6__;
                                                        gCallerSLine5 = __caller_sline5__;
                                                        gCallerSLine4 = __caller_sline4__;
                                                        gCallerSLine3 = __caller_sline3__;
                                                        gCallerSLine2 = __caller_sline2__;
                                                        gCallerSLine = __caller_sline__;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                                                __caller_sname10__ = gCallerSName10;
                                                __caller_sname9__ = gCallerSName9;
                                                __caller_sname8__ = gCallerSName8;
                                                __caller_sname7__ = gCallerSName7;
                                                __caller_sname6__ = gCallerSName6;
                                                __caller_sname5__ = gCallerSName5;
                                                __caller_sname4__ = gCallerSName4;
                                                __caller_sname3__ = gCallerSName3;
                                                __caller_sname2__ = gCallerSName2;
                                                __caller_sname__ = gCallerSName;
                                                __caller_sline10__ = gCallerSLine10;
                                                __caller_sline9__ = gCallerSLine9;
                                                __caller_sline8__ = gCallerSLine8;
                                                __caller_sline7__ = gCallerSLine7;
                                                __caller_sline6__ = gCallerSLine6;
                                                __caller_sline5__ = gCallerSLine5;
                                                __caller_sline4__ = gCallerSLine4;
                                                __caller_sline3__ = gCallerSLine3;
                                                __caller_sline2__ = gCallerSLine2;
                                                __caller_sline__ = gCallerSLine;
                                                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                    it_10=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional3=it_10!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional3) {
                                                        prev_it_11=it_10;
                                                        __freed_obj__ = 0;
                                                        it_10=((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 193))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __caller_sname10__ = gCallerSName10;
                                                        __caller_sname9__ = gCallerSName9;
                                                        __caller_sname8__ = gCallerSName8;
                                                        __caller_sname7__ = gCallerSName7;
                                                        __caller_sname6__ = gCallerSName6;
                                                        __caller_sname5__ = gCallerSName5;
                                                        __caller_sname4__ = gCallerSName4;
                                                        __caller_sname3__ = gCallerSName3;
                                                        __caller_sname2__ = gCallerSName2;
                                                        __caller_sname__ = gCallerSName;
                                                        __caller_sline10__ = gCallerSLine10;
                                                        __caller_sline9__ = gCallerSLine9;
                                                        __caller_sline8__ = gCallerSLine8;
                                                        __caller_sline7__ = gCallerSLine7;
                                                        __caller_sline6__ = gCallerSLine6;
                                                        __caller_sline5__ = gCallerSLine5;
                                                        __caller_sline4__ = gCallerSLine4;
                                                        __caller_sline3__ = gCallerSLine3;
                                                        __caller_sline2__ = gCallerSLine2;
                                                        __caller_sline__ = gCallerSLine;
                                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                            if(_if_conditional18=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional18) {
                                                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        gCallerSName10 = __caller_sname10__;
                                                        gCallerSName9 = __caller_sname9__;
                                                        gCallerSName8 = __caller_sname8__;
                                                        gCallerSName7 = __caller_sname7__;
                                                        gCallerSName6 = __caller_sname6__;
                                                        gCallerSName5 = __caller_sname5__;
                                                        gCallerSName5 = __caller_sname5__;
                                                        gCallerSName4 = __caller_sname4__;
                                                        gCallerSName3 = __caller_sname3__;
                                                        gCallerSName2 = __caller_sname2__;
                                                        gCallerSName = __caller_sname__;
                                                        gCallerSLine10 = __caller_sline10__;
                                                        gCallerSLine9 = __caller_sline9__;
                                                        gCallerSLine8 = __caller_sline8__;
                                                        gCallerSLine7 = __caller_sline7__;
                                                        gCallerSLine6 = __caller_sline6__;
                                                        gCallerSLine5 = __caller_sline5__;
                                                        gCallerSLine4 = __caller_sline4__;
                                                        gCallerSLine3 = __caller_sline3__;
                                                        gCallerSLine2 = __caller_sline2__;
                                                        gCallerSLine = __caller_sline__;
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_12;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                                                __caller_sname10__ = gCallerSName10;
                                                __caller_sname9__ = gCallerSName9;
                                                __caller_sname8__ = gCallerSName8;
                                                __caller_sname7__ = gCallerSName7;
                                                __caller_sname6__ = gCallerSName6;
                                                __caller_sname5__ = gCallerSName5;
                                                __caller_sname4__ = gCallerSName4;
                                                __caller_sname3__ = gCallerSName3;
                                                __caller_sname2__ = gCallerSName2;
                                                __caller_sname__ = gCallerSName;
                                                __caller_sline10__ = gCallerSLine10;
                                                __caller_sline9__ = gCallerSLine9;
                                                __caller_sline8__ = gCallerSLine8;
                                                __caller_sline7__ = gCallerSLine7;
                                                __caller_sline6__ = gCallerSLine6;
                                                __caller_sline5__ = gCallerSLine5;
                                                __caller_sline4__ = gCallerSLine4;
                                                __caller_sline3__ = gCallerSLine3;
                                                __caller_sline2__ = gCallerSLine2;
                                                __caller_sline__ = gCallerSLine;
                                                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                    it_12=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional4=it_12!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional4) {
                                                        prev_it_13=it_12;
                                                        __freed_obj__ = 0;
                                                        it_12=((struct list_item$1charph*)come_null_check(it_12, "./comelang2.h", 193))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __caller_sname10__ = gCallerSName10;
                                                        __caller_sname9__ = gCallerSName9;
                                                        __caller_sname8__ = gCallerSName8;
                                                        __caller_sname7__ = gCallerSName7;
                                                        __caller_sname6__ = gCallerSName6;
                                                        __caller_sname5__ = gCallerSName5;
                                                        __caller_sname4__ = gCallerSName4;
                                                        __caller_sname3__ = gCallerSName3;
                                                        __caller_sname2__ = gCallerSName2;
                                                        __caller_sname__ = gCallerSName;
                                                        __caller_sline10__ = gCallerSLine10;
                                                        __caller_sline9__ = gCallerSLine9;
                                                        __caller_sline8__ = gCallerSLine8;
                                                        __caller_sline7__ = gCallerSLine7;
                                                        __caller_sline6__ = gCallerSLine6;
                                                        __caller_sline5__ = gCallerSLine5;
                                                        __caller_sline4__ = gCallerSLine4;
                                                        __caller_sline3__ = gCallerSLine3;
                                                        __caller_sline2__ = gCallerSLine2;
                                                        __caller_sline__ = gCallerSLine;
                                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                            if(_if_conditional21=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional21) {
                                                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        gCallerSName10 = __caller_sname10__;
                                                        gCallerSName9 = __caller_sname9__;
                                                        gCallerSName8 = __caller_sname8__;
                                                        gCallerSName7 = __caller_sname7__;
                                                        gCallerSName6 = __caller_sname6__;
                                                        gCallerSName5 = __caller_sname5__;
                                                        gCallerSName5 = __caller_sname5__;
                                                        gCallerSName4 = __caller_sname4__;
                                                        gCallerSName3 = __caller_sname3__;
                                                        gCallerSName2 = __caller_sname2__;
                                                        gCallerSName = __caller_sname__;
                                                        gCallerSLine10 = __caller_sline10__;
                                                        gCallerSLine9 = __caller_sline9__;
                                                        gCallerSLine8 = __caller_sline8__;
                                                        gCallerSLine7 = __caller_sline7__;
                                                        gCallerSLine6 = __caller_sline6__;
                                                        gCallerSLine5 = __caller_sline5__;
                                                        gCallerSLine4 = __caller_sline4__;
                                                        gCallerSLine3 = __caller_sline3__;
                                                        gCallerSLine2 = __caller_sline2__;
                                                        gCallerSLine = __caller_sline__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional40;
struct list$1tuple2$2charphsTypephph* __result13__;
void* right_value13;
void* right_value14;
struct list$1tuple2$2charphsTypephph* result_14;
struct list_item$1tuple2$2charphsTypephph* it_15;
_Bool _while_condtional5;
void* right_value59;
struct list$1tuple2$2charphsTypephph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_15, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value59, 0, sizeof(void*));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                if(_if_conditional40=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional40) {
                    __result13__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result13__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_14=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value14=(gCallerSName = "./comelang2.h", gCallerSLine = 209,list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value13=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 209))), "./comelang2.h", 209))))))));
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_15=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 211))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_15!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    (gCallerSName = "./comelang2.h", gCallerSLine = 213,list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_14, "./comelang2.h", 213)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value59=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_15, "./comelang2.h", 213))->item))))));
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_15=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_15, "./comelang2.h", 215))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result40__ = __result_obj__ = result_14;
                if(result_14 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result40__;
                __freed_obj__ = 0;
                if(result_14 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0); }
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list$1tuple2$2charphsTypephph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __caller_sname10__ = gCallerSName10;
                __caller_sname9__ = gCallerSName9;
                __caller_sname8__ = gCallerSName8;
                __caller_sname7__ = gCallerSName7;
                __caller_sname6__ = gCallerSName6;
                __caller_sname5__ = gCallerSName5;
                __caller_sname4__ = gCallerSName4;
                __caller_sname3__ = gCallerSName3;
                __caller_sname2__ = gCallerSName2;
                __caller_sname__ = gCallerSName;
                __caller_sline10__ = gCallerSLine10;
                __caller_sline9__ = gCallerSLine9;
                __caller_sline8__ = gCallerSLine8;
                __caller_sline7__ = gCallerSLine7;
                __caller_sline6__ = gCallerSLine6;
                __caller_sline5__ = gCallerSLine5;
                __caller_sline4__ = gCallerSLine4;
                __caller_sline3__ = gCallerSLine3;
                __caller_sline2__ = gCallerSLine2;
                __caller_sline__ = gCallerSLine;
                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 171))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 172))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 173))->len=0;
                    __freed_obj__ = 0;
                    __result14__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result14__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional41;
void* right_value15;
struct list_item$1tuple2$2charphsTypephph* litem_16;
struct tuple2$2charphsTypeph* __dec_obj8;
_Bool _if_conditional44;
void* right_value16;
struct list_item$1tuple2$2charphsTypephph* litem_17;
struct tuple2$2charphsTypeph* __dec_obj9;
void* right_value17;
struct list_item$1tuple2$2charphsTypephph* litem_18;
struct tuple2$2charphsTypeph* __dec_obj10;
struct list$1tuple2$2charphsTypephph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_18, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                    __caller_sname10__ = gCallerSName10;
                    __caller_sname9__ = gCallerSName9;
                    __caller_sname8__ = gCallerSName8;
                    __caller_sname7__ = gCallerSName7;
                    __caller_sname6__ = gCallerSName6;
                    __caller_sname5__ = gCallerSName5;
                    __caller_sname4__ = gCallerSName4;
                    __caller_sname3__ = gCallerSName3;
                    __caller_sname2__ = gCallerSName2;
                    __caller_sname__ = gCallerSName;
                    __caller_sline10__ = gCallerSLine10;
                    __caller_sline9__ = gCallerSLine9;
                    __caller_sline8__ = gCallerSLine8;
                    __caller_sline7__ = gCallerSLine7;
                    __caller_sline6__ = gCallerSLine6;
                    __caller_sline5__ = gCallerSLine5;
                    __caller_sline4__ = gCallerSLine4;
                    __caller_sline3__ = gCallerSLine3;
                    __caller_sline2__ = gCallerSLine2;
                    __caller_sline__ = gCallerSLine;
                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                        if(_if_conditional41=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 253))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            litem_16=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value15=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 223))));
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_16, "./comelang2.h", 225))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_16, "./comelang2.h", 226))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj8=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_16, "./comelang2.h", 227))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_16, "./comelang2.h", 227))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj8) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_16;
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 230))->head=litem_16;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional44=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 253))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional44) {
                                litem_17=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value16=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 233))));
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_17, "./comelang2.h", 235))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 235))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_17, "./comelang2.h", 236))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj9=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_17, "./comelang2.h", 237))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_17, "./comelang2.h", 237))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj9) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 239))->tail=litem_17;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 240))->head, "./comelang2.h", 240))->next=litem_17;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_18=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value17=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 243))));
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_18, "./comelang2.h", 245))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 245))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_18, "./comelang2.h", 246))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_18, "./comelang2.h", 247))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_18, "./comelang2.h", 247))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj10) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 249))->tail, "./comelang2.h", 249))->next=litem_18;
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 250))->tail=litem_18;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 253))->len++;
                        __freed_obj__ = 0;
                        __result15__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
                        return __result15__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __caller_sname10__ = gCallerSName10;
                            __caller_sname9__ = gCallerSName9;
                            __caller_sname8__ = gCallerSName8;
                            __caller_sname7__ = gCallerSName7;
                            __caller_sname6__ = gCallerSName6;
                            __caller_sname5__ = gCallerSName5;
                            __caller_sname4__ = gCallerSName4;
                            __caller_sname3__ = gCallerSName3;
                            __caller_sname2__ = gCallerSName2;
                            __caller_sname__ = gCallerSName;
                            __caller_sline10__ = gCallerSLine10;
                            __caller_sline9__ = gCallerSLine9;
                            __caller_sline8__ = gCallerSLine8;
                            __caller_sline7__ = gCallerSLine7;
                            __caller_sline6__ = gCallerSLine6;
                            __caller_sline5__ = gCallerSLine5;
                            __caller_sline4__ = gCallerSLine4;
                            __caller_sline3__ = gCallerSLine3;
                            __caller_sline2__ = gCallerSLine2;
                            __caller_sline__ = gCallerSLine;
                            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                if(_if_conditional42=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional42) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional43=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional43) {
                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            gCallerSName10 = __caller_sname10__;
                            gCallerSName9 = __caller_sname9__;
                            gCallerSName8 = __caller_sname8__;
                            gCallerSName7 = __caller_sname7__;
                            gCallerSName6 = __caller_sname6__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName4 = __caller_sname4__;
                            gCallerSName3 = __caller_sname3__;
                            gCallerSName2 = __caller_sname2__;
                            gCallerSName = __caller_sname__;
                            gCallerSLine10 = __caller_sline10__;
                            gCallerSLine9 = __caller_sline9__;
                            gCallerSLine8 = __caller_sline8__;
                            gCallerSLine7 = __caller_sline7__;
                            gCallerSLine6 = __caller_sline6__;
                            gCallerSLine5 = __caller_sline5__;
                            gCallerSLine4 = __caller_sline4__;
                            gCallerSLine3 = __caller_sline3__;
                            gCallerSLine2 = __caller_sline2__;
                            gCallerSLine = __caller_sline__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional45;
struct tuple2$2charphsTypeph* __result16__;
void* right_value18;
struct tuple2$2charphsTypeph* result_19;
_Bool _if_conditional46;
void* right_value19;
char* __dec_obj11;
_Bool _if_conditional47;
void* right_value58;
struct sType* __dec_obj36;
struct tuple2$2charphsTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
                    __caller_sname10__ = gCallerSName10;
                    __caller_sname9__ = gCallerSName9;
                    __caller_sname8__ = gCallerSName8;
                    __caller_sname7__ = gCallerSName7;
                    __caller_sname6__ = gCallerSName6;
                    __caller_sname5__ = gCallerSName5;
                    __caller_sname4__ = gCallerSName4;
                    __caller_sname3__ = gCallerSName3;
                    __caller_sname2__ = gCallerSName2;
                    __caller_sname__ = gCallerSName;
                    __caller_sline10__ = gCallerSLine10;
                    __caller_sline9__ = gCallerSLine9;
                    __caller_sline8__ = gCallerSLine8;
                    __caller_sline7__ = gCallerSLine7;
                    __caller_sline6__ = gCallerSLine6;
                    __caller_sline5__ = gCallerSLine5;
                    __caller_sline4__ = gCallerSLine4;
                    __caller_sline3__ = gCallerSLine3;
                    __caller_sline2__ = gCallerSLine2;
                    __caller_sline__ = gCallerSLine;
                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                        if(_if_conditional45=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional45) {
                            __result16__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            gCallerSName10 = __caller_sname10__;
                            gCallerSName9 = __caller_sname9__;
                            gCallerSName8 = __caller_sname8__;
                            gCallerSName7 = __caller_sname7__;
                            gCallerSName6 = __caller_sname6__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName4 = __caller_sname4__;
                            gCallerSName3 = __caller_sname3__;
                            gCallerSName2 = __caller_sname2__;
                            gCallerSName = __caller_sname__;
                            gCallerSLine10 = __caller_sline10__;
                            gCallerSLine9 = __caller_sline9__;
                            gCallerSLine8 = __caller_sline8__;
                            gCallerSLine7 = __caller_sline7__;
                            gCallerSLine6 = __caller_sline6__;
                            gCallerSLine5 = __caller_sline5__;
                            gCallerSLine4 = __caller_sline4__;
                            gCallerSLine3 = __caller_sline3__;
                            gCallerSLine2 = __caller_sline2__;
                            gCallerSLine = __caller_sline__;
                            return __result16__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_19=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value18=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional46=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional46) {
                            __dec_obj11=((struct tuple2$2charphsTypeph*)come_null_check(result_19, "tuple2$2charphsTypephp_clone", 4))->v1;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_19, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value19=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
                            if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional47=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 6))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional47) {
                            __dec_obj36=((struct tuple2$2charphsTypeph*)come_null_check(result_19, "tuple2$2charphsTypephp_clone", 5))->v2;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_19, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
                            if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result39__ = __result_obj__ = result_19;
                        if(result_19 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
                        return __result39__;
                        __freed_obj__ = 0;
                        if(result_19 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional48;
struct sType* __result17__;
void* right_value20;
struct sType* result_20;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value23;
struct tuple1$1sTypeph* __dec_obj13;
_Bool _if_conditional54;
void* right_value26;
struct tuple1$1sTypeph* __dec_obj15;
_Bool _if_conditional57;
void* right_value27;
char* __dec_obj16;
_Bool _if_conditional58;
void* right_value34;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional62;
void* right_value42;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value43;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional77;
void* right_value50;
struct list$1charph* __dec_obj29;
_Bool _if_conditional81;
void* right_value53;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value54;
struct sNode* __dec_obj32;
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
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value55;
struct sNode* __dec_obj33;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value56;
char* __dec_obj34;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
void* right_value57;
char* __dec_obj35;
struct sType* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct sType*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
                            __caller_sname10__ = gCallerSName10;
                            __caller_sname9__ = gCallerSName9;
                            __caller_sname8__ = gCallerSName8;
                            __caller_sname7__ = gCallerSName7;
                            __caller_sname6__ = gCallerSName6;
                            __caller_sname5__ = gCallerSName5;
                            __caller_sname4__ = gCallerSName4;
                            __caller_sname3__ = gCallerSName3;
                            __caller_sname2__ = gCallerSName2;
                            __caller_sname__ = gCallerSName;
                            __caller_sline10__ = gCallerSLine10;
                            __caller_sline9__ = gCallerSLine9;
                            __caller_sline8__ = gCallerSLine8;
                            __caller_sline7__ = gCallerSLine7;
                            __caller_sline6__ = gCallerSLine6;
                            __caller_sline5__ = gCallerSLine5;
                            __caller_sline4__ = gCallerSLine4;
                            __caller_sline3__ = gCallerSLine3;
                            __caller_sline2__ = gCallerSLine2;
                            __caller_sline__ = gCallerSLine;
                            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                if(_if_conditional48=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional48) {
                                    __result17__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
                                    return __result17__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_20=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional49=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional49) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional50) {
                                    __dec_obj13=((struct sType*)come_null_check(result_20, "sType_clone", 5))->mNoSolvedGenericsType;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                                    if(__dec_obj13) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional54) {
                                    __dec_obj15=((struct sType*)come_null_check(result_20, "sType_clone", 6))->mOriginalLoadVarType;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value26=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                                    if(__dec_obj15) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional57=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional57) {
                                    __dec_obj16=((struct sType*)come_null_check(result_20, "sType_clone", 7))->mGenericsName;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value27=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional58=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional58) {
                                    __dec_obj20=((struct sType*)come_null_check(result_20, "sType_clone", 8))->mGenericsTypes;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                                    if(__dec_obj20) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional62=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional62) {
                                    __dec_obj24=((struct sType*)come_null_check(result_20, "sType_clone", 9))->mArrayNum;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value42=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                                    if(__dec_obj24) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional75=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional75) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional76) {
                                    __dec_obj25=((struct sType*)come_null_check(result_20, "sType_clone", 11))->mParamTypes;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value43=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                                    if(__dec_obj25) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional77) {
                                    __dec_obj29=((struct sType*)come_null_check(result_20, "sType_clone", 12))->mParamNames;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value50=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                                    if(__dec_obj29) { come_call_finalizer(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional81) {
                                    __dec_obj31=((struct sType*)come_null_check(result_20, "sType_clone", 13))->mResultType;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value53=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                                    if(__dec_obj31) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional84=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional84) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional85=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional85) {
                                    __dec_obj32=((struct sType*)come_null_check(result_20, "sType_clone", 15))->mAlignas;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional86=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional86) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional87=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional87) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional88=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional88) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional89=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional89) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional90=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional90) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional91=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional91) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional92=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional92) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional93=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional93) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional94=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional94) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional95=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional95) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional96=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional96) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional97=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional97) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional98=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional98) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional99=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional99) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional100=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional100) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional101=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional101) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional102=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional102) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional103=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional103) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional104=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional104) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional105=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional105) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional106=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional106) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional107=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional107) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional108=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional108) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional109=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional109) {
                                    __dec_obj33=((struct sType*)come_null_check(result_20, "sType_clone", 39))->mSizeNum;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
                                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional110=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional110) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional111=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional111) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional112=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional112) {
                                    __dec_obj34=((struct sType*)come_null_check(result_20, "sType_clone", 42))->mOriginalTypeName;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value56=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                                    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional113=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional113) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional114=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional114) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional115=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional115) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional116=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional116) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional117=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional117) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional118=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional118) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional119=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional119) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional120=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional120) {
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional121=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional121) {
                                    __dec_obj35=((struct sType*)come_null_check(result_20, "sType_clone", 51))->mAsmName;
                                    ((struct sType*)come_null_check(result_20, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result38__ = __result_obj__ = result_20;
                                if(result_20 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                gCallerSName10 = __caller_sname10__;
                                gCallerSName9 = __caller_sname9__;
                                gCallerSName8 = __caller_sname8__;
                                gCallerSName7 = __caller_sname7__;
                                gCallerSName6 = __caller_sname6__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName4 = __caller_sname4__;
                                gCallerSName3 = __caller_sname3__;
                                gCallerSName2 = __caller_sname2__;
                                gCallerSName = __caller_sname__;
                                gCallerSLine10 = __caller_sline10__;
                                gCallerSLine9 = __caller_sline9__;
                                gCallerSLine8 = __caller_sline8__;
                                gCallerSLine7 = __caller_sline7__;
                                gCallerSLine6 = __caller_sline6__;
                                gCallerSLine5 = __caller_sline5__;
                                gCallerSLine4 = __caller_sline4__;
                                gCallerSLine3 = __caller_sline3__;
                                gCallerSLine2 = __caller_sline2__;
                                gCallerSLine = __caller_sline__;
                                return __result38__;
                                __freed_obj__ = 0;
                                if(result_20 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0); }
                            gCallerSName10 = __caller_sname10__;
                            gCallerSName9 = __caller_sname9__;
                            gCallerSName8 = __caller_sname8__;
                            gCallerSName7 = __caller_sname7__;
                            gCallerSName6 = __caller_sname6__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName4 = __caller_sname4__;
                            gCallerSName3 = __caller_sname3__;
                            gCallerSName2 = __caller_sname2__;
                            gCallerSName = __caller_sname__;
                            gCallerSLine10 = __caller_sline10__;
                            gCallerSLine9 = __caller_sline9__;
                            gCallerSLine8 = __caller_sline8__;
                            gCallerSLine7 = __caller_sline7__;
                            gCallerSLine6 = __caller_sline6__;
                            gCallerSLine5 = __caller_sline5__;
                            gCallerSLine4 = __caller_sline4__;
                            gCallerSLine3 = __caller_sline3__;
                            gCallerSLine2 = __caller_sline2__;
                            gCallerSLine = __caller_sline__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional52;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __caller_sname10__ = gCallerSName10;
                                        __caller_sname9__ = gCallerSName9;
                                        __caller_sname8__ = gCallerSName8;
                                        __caller_sname7__ = gCallerSName7;
                                        __caller_sname6__ = gCallerSName6;
                                        __caller_sname5__ = gCallerSName5;
                                        __caller_sname4__ = gCallerSName4;
                                        __caller_sname3__ = gCallerSName3;
                                        __caller_sname2__ = gCallerSName2;
                                        __caller_sname__ = gCallerSName;
                                        __caller_sline10__ = gCallerSLine10;
                                        __caller_sline9__ = gCallerSLine9;
                                        __caller_sline8__ = gCallerSLine8;
                                        __caller_sline7__ = gCallerSLine7;
                                        __caller_sline6__ = gCallerSLine6;
                                        __caller_sline5__ = gCallerSLine5;
                                        __caller_sline4__ = gCallerSLine4;
                                        __caller_sline3__ = gCallerSLine3;
                                        __caller_sline2__ = gCallerSLine2;
                                        __caller_sline__ = gCallerSLine;
                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                            if(_if_conditional52=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional52) {
                                                if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional59;
struct list$1sTypeph* __result22__;
void* right_value28;
void* right_value29;
struct list$1sTypeph* result_23;
struct list_item$1sTypeph* it_24;
_Bool _while_condtional6;
void* right_value33;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct list$1sTypeph*));
memset(&it_24, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value33, 0, sizeof(void*));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                        if(_if_conditional59=self==((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional59) {
                                            __result22__ = __result_obj__ = ((void*)0);
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result22__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_23=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=(gCallerSName = "./comelang2.h", gCallerSLine = 209,list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value28=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 209))), "./comelang2.h", 209))))))));
                                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        it_24=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 211))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional6=it_24!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional6) {
                                            (gCallerSName = "./comelang2.h", gCallerSLine = 213,list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_23, "./comelang2.h", 213)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value33=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_24, "./comelang2.h", 213))->item))))));
                                            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            it_24=((struct list_item$1sTypeph*)come_null_check(it_24, "./comelang2.h", 215))->next;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result25__ = __result_obj__ = result_23;
                                        if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result25__;
                                        __freed_obj__ = 0;
                                        if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __caller_sname10__ = gCallerSName10;
                                        __caller_sname9__ = gCallerSName9;
                                        __caller_sname8__ = gCallerSName8;
                                        __caller_sname7__ = gCallerSName7;
                                        __caller_sname6__ = gCallerSName6;
                                        __caller_sname5__ = gCallerSName5;
                                        __caller_sname4__ = gCallerSName4;
                                        __caller_sname3__ = gCallerSName3;
                                        __caller_sname2__ = gCallerSName2;
                                        __caller_sname__ = gCallerSName;
                                        __caller_sline10__ = gCallerSLine10;
                                        __caller_sline9__ = gCallerSLine9;
                                        __caller_sline8__ = gCallerSLine8;
                                        __caller_sline7__ = gCallerSLine7;
                                        __caller_sline6__ = gCallerSLine6;
                                        __caller_sline5__ = gCallerSLine5;
                                        __caller_sline4__ = gCallerSLine4;
                                        __caller_sline3__ = gCallerSLine3;
                                        __caller_sline2__ = gCallerSLine2;
                                        __caller_sline__ = gCallerSLine;
                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 171))->head=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 172))->tail=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 173))->len=0;
                                            __freed_obj__ = 0;
                                            __result23__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result23__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional60;
void* right_value30;
struct list_item$1sTypeph* litem_25;
struct sType* __dec_obj17;
_Bool _if_conditional61;
void* right_value31;
struct list_item$1sTypeph* litem_26;
struct sType* __dec_obj18;
void* right_value32;
struct list_item$1sTypeph* litem_27;
struct sType* __dec_obj19;
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sTypeph*));
                                            __caller_sname10__ = gCallerSName10;
                                            __caller_sname9__ = gCallerSName9;
                                            __caller_sname8__ = gCallerSName8;
                                            __caller_sname7__ = gCallerSName7;
                                            __caller_sname6__ = gCallerSName6;
                                            __caller_sname5__ = gCallerSName5;
                                            __caller_sname4__ = gCallerSName4;
                                            __caller_sname3__ = gCallerSName3;
                                            __caller_sname2__ = gCallerSName2;
                                            __caller_sname__ = gCallerSName;
                                            __caller_sline10__ = gCallerSLine10;
                                            __caller_sline9__ = gCallerSLine9;
                                            __caller_sline8__ = gCallerSLine8;
                                            __caller_sline7__ = gCallerSLine7;
                                            __caller_sline6__ = gCallerSLine6;
                                            __caller_sline5__ = gCallerSLine5;
                                            __caller_sline4__ = gCallerSLine4;
                                            __caller_sline3__ = gCallerSLine3;
                                            __caller_sline2__ = gCallerSLine2;
                                            __caller_sline__ = gCallerSLine;
                                            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                if(_if_conditional60=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 253))->len==0,                                                __freed_obj__ = 0, 
                                                _if_conditional60) {
                                                    litem_25=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 223))));
                                                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 225))->prev=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 226))->next=((void*)0);
                                                    __freed_obj__ = 0;
                                                    __dec_obj17=((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 227))->item;
                                                    ((struct list_item$1sTypeph*)come_null_check(litem_25, "./comelang2.h", 227))->item=(struct sType*)come_increment_ref_count(item);
                                                    if(__dec_obj17) { come_call_finalizer(sType_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_25;
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 230))->head=litem_25;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional61=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 253))->len==1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional61) {
                                                        litem_26=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 233))));
                                                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_26, "./comelang2.h", 235))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 235))->head;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_26, "./comelang2.h", 236))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj18=((struct list_item$1sTypeph*)come_null_check(litem_26, "./comelang2.h", 237))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_26, "./comelang2.h", 237))->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj18) { come_call_finalizer(sType_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 239))->tail=litem_26;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 240))->head, "./comelang2.h", 240))->next=litem_26;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        litem_27=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 243))));
                                                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_27, "./comelang2.h", 245))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 245))->tail;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_27, "./comelang2.h", 246))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj19=((struct list_item$1sTypeph*)come_null_check(litem_27, "./comelang2.h", 247))->item;
                                                        ((struct list_item$1sTypeph*)come_null_check(litem_27, "./comelang2.h", 247))->item=(struct sType*)come_increment_ref_count(item);
                                                        if(__dec_obj19) { come_call_finalizer(sType_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 249))->tail, "./comelang2.h", 249))->next=litem_27;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 250))->tail=litem_27;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 253))->len++;
                                                __freed_obj__ = 0;
                                                __result24__ = __result_obj__ = self;
                                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
                                                return __result24__;
                                                __freed_obj__ = 0;
                                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional63;
struct list$1sNodeph* __result26__;
void* right_value35;
void* right_value36;
struct list$1sNodeph* result_28;
struct list_item$1sNodeph* it_29;
_Bool _while_condtional7;
void* right_value41;
struct list$1sNodeph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&result_28, 0, sizeof(struct list$1sNodeph*));
memset(&it_29, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value41, 0, sizeof(void*));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                        if(_if_conditional63=self==((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional63) {
                                            __result26__ = __result_obj__ = ((void*)0);
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result26__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_28=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=(gCallerSName = "./comelang2.h", gCallerSLine = 209,list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value35=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 209))), "./comelang2.h", 209))))))));
                                        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        it_29=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 211))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional7=it_29!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional7) {
                                            (gCallerSName = "./comelang2.h", gCallerSLine = 213,list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_28, "./comelang2.h", 213)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_29, "./comelang2.h", 213))->item))))));
                                            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                            it_29=((struct list_item$1sNodeph*)come_null_check(it_29, "./comelang2.h", 215))->next;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result31__ = __result_obj__ = result_28;
                                        if(result_28 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_28, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result31__;
                                        __freed_obj__ = 0;
                                        if(result_28 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __caller_sname10__ = gCallerSName10;
                                        __caller_sname9__ = gCallerSName9;
                                        __caller_sname8__ = gCallerSName8;
                                        __caller_sname7__ = gCallerSName7;
                                        __caller_sname6__ = gCallerSName6;
                                        __caller_sname5__ = gCallerSName5;
                                        __caller_sname4__ = gCallerSName4;
                                        __caller_sname3__ = gCallerSName3;
                                        __caller_sname2__ = gCallerSName2;
                                        __caller_sname__ = gCallerSName;
                                        __caller_sline10__ = gCallerSLine10;
                                        __caller_sline9__ = gCallerSLine9;
                                        __caller_sline8__ = gCallerSLine8;
                                        __caller_sline7__ = gCallerSLine7;
                                        __caller_sline6__ = gCallerSLine6;
                                        __caller_sline5__ = gCallerSLine5;
                                        __caller_sline4__ = gCallerSLine4;
                                        __caller_sline3__ = gCallerSLine3;
                                        __caller_sline2__ = gCallerSLine2;
                                        __caller_sline__ = gCallerSLine;
                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 171))->head=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 172))->tail=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 173))->len=0;
                                            __freed_obj__ = 0;
                                            __result27__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result27__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional64;
void* right_value37;
struct list_item$1sNodeph* litem_30;
struct sNode* __dec_obj21;
_Bool _if_conditional65;
void* right_value38;
struct list_item$1sNodeph* litem_31;
struct sNode* __dec_obj22;
void* right_value39;
struct list_item$1sNodeph* litem_32;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_30, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1sNodeph*));
                                            __caller_sname10__ = gCallerSName10;
                                            __caller_sname9__ = gCallerSName9;
                                            __caller_sname8__ = gCallerSName8;
                                            __caller_sname7__ = gCallerSName7;
                                            __caller_sname6__ = gCallerSName6;
                                            __caller_sname5__ = gCallerSName5;
                                            __caller_sname4__ = gCallerSName4;
                                            __caller_sname3__ = gCallerSName3;
                                            __caller_sname2__ = gCallerSName2;
                                            __caller_sname__ = gCallerSName;
                                            __caller_sline10__ = gCallerSLine10;
                                            __caller_sline9__ = gCallerSLine9;
                                            __caller_sline8__ = gCallerSLine8;
                                            __caller_sline7__ = gCallerSLine7;
                                            __caller_sline6__ = gCallerSLine6;
                                            __caller_sline5__ = gCallerSLine5;
                                            __caller_sline4__ = gCallerSLine4;
                                            __caller_sline3__ = gCallerSLine3;
                                            __caller_sline2__ = gCallerSLine2;
                                            __caller_sline__ = gCallerSLine;
                                            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                if(_if_conditional64=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 253))->len==0,                                                __freed_obj__ = 0, 
                                                _if_conditional64) {
                                                    litem_30=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value37=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 223))));
                                                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 225))->prev=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 226))->next=((void*)0);
                                                    __freed_obj__ = 0;
                                                    __dec_obj21=((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 227))->item;
                                                    ((struct list_item$1sNodeph*)come_null_check(litem_30, "./comelang2.h", 227))->item=(struct sNode*)come_increment_ref_count(item);
                                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_30;
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 230))->head=litem_30;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional65=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 253))->len==1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional65) {
                                                        litem_31=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 233))));
                                                        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_31, "./comelang2.h", 235))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 235))->head;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_31, "./comelang2.h", 236))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj22=((struct list_item$1sNodeph*)come_null_check(litem_31, "./comelang2.h", 237))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_31, "./comelang2.h", 237))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 239))->tail=litem_31;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 240))->head, "./comelang2.h", 240))->next=litem_31;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        litem_32=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 243))));
                                                        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_32, "./comelang2.h", 245))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 245))->tail;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_32, "./comelang2.h", 246))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj23=((struct list_item$1sNodeph*)come_null_check(litem_32, "./comelang2.h", 247))->item;
                                                        ((struct list_item$1sNodeph*)come_null_check(litem_32, "./comelang2.h", 247))->item=(struct sNode*)come_increment_ref_count(item);
                                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 249))->tail, "./comelang2.h", 249))->next=litem_32;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 250))->tail=litem_32;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 253))->len++;
                                                __freed_obj__ = 0;
                                                __result28__ = __result_obj__ = self;
                                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                                __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
                                                return __result28__;
                                                __freed_obj__ = 0;
                                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional66;
struct sNode* __result29__;
void* right_value40;
struct sNode* result_33;
_Bool _if_conditional67;
_Bool _if_conditional68;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
_Bool _if_conditional72;
_Bool _if_conditional73;
_Bool _if_conditional74;
struct sNode* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
memset(&result_33, 0, sizeof(struct sNode*));
                                            __caller_sname10__ = gCallerSName10;
                                            __caller_sname9__ = gCallerSName9;
                                            __caller_sname8__ = gCallerSName8;
                                            __caller_sname7__ = gCallerSName7;
                                            __caller_sname6__ = gCallerSName6;
                                            __caller_sname5__ = gCallerSName5;
                                            __caller_sname4__ = gCallerSName4;
                                            __caller_sname3__ = gCallerSName3;
                                            __caller_sname2__ = gCallerSName2;
                                            __caller_sname__ = gCallerSName;
                                            __caller_sline10__ = gCallerSLine10;
                                            __caller_sline9__ = gCallerSLine9;
                                            __caller_sline8__ = gCallerSLine8;
                                            __caller_sline7__ = gCallerSLine7;
                                            __caller_sline6__ = gCallerSLine6;
                                            __caller_sline5__ = gCallerSLine5;
                                            __caller_sline4__ = gCallerSLine4;
                                            __caller_sline3__ = gCallerSLine3;
                                            __caller_sline2__ = gCallerSLine2;
                                            __caller_sline__ = gCallerSLine;
                                            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                if(_if_conditional66=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional66) {
                                                    __result29__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    gCallerSName10 = __caller_sname10__;
                                                    gCallerSName9 = __caller_sname9__;
                                                    gCallerSName8 = __caller_sname8__;
                                                    gCallerSName7 = __caller_sname7__;
                                                    gCallerSName6 = __caller_sname6__;
                                                    gCallerSName5 = __caller_sname5__;
                                                    gCallerSName5 = __caller_sname5__;
                                                    gCallerSName4 = __caller_sname4__;
                                                    gCallerSName3 = __caller_sname3__;
                                                    gCallerSName2 = __caller_sname2__;
                                                    gCallerSName = __caller_sname__;
                                                    gCallerSLine10 = __caller_sline10__;
                                                    gCallerSLine9 = __caller_sline9__;
                                                    gCallerSLine8 = __caller_sline8__;
                                                    gCallerSLine7 = __caller_sline7__;
                                                    gCallerSLine6 = __caller_sline6__;
                                                    gCallerSLine5 = __caller_sline5__;
                                                    gCallerSLine4 = __caller_sline4__;
                                                    gCallerSLine3 = __caller_sline3__;
                                                    gCallerSLine2 = __caller_sline2__;
                                                    gCallerSLine = __caller_sline__;
                                                    return __result29__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_33=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                                if(_if_conditional67=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional67) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional68=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional68) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional69=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional69) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional70=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional70) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional71=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional71) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional72=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional72) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional73=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional73) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional74=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional74) {
                                                    ((struct sNode*)come_null_check(result_33, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result30__ = __result_obj__ = result_33;
                                                if(result_33 && !__freed_obj__) { result_33 = come_decrement_ref_count(result_33, ((struct sNode*)result_33)->finalize, ((struct sNode*)result_33)->_protocol_obj, 0, 1, 0); } 
                                                __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
                                                return __result30__;
                                                __freed_obj__ = 0;
                                                if(result_33 && !__freed_obj__) { result_33 = come_decrement_ref_count(result_33, ((struct sNode*)result_33)->finalize, ((struct sNode*)result_33)->_protocol_obj, 0, 0, 0); } 
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional78;
struct list$1charph* __result32__;
void* right_value44;
void* right_value45;
struct list$1charph* result_34;
struct list_item$1charph* it_35;
_Bool _while_condtional8;
void* right_value49;
struct list$1charph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct list$1charph*));
memset(&it_35, 0, sizeof(struct list_item$1charph*));
memset(&right_value49, 0, sizeof(void*));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                        if(_if_conditional78=self==((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional78) {
                                            __result32__ = __result_obj__ = ((void*)0);
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result32__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_34=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=(gCallerSName = "./comelang2.h", gCallerSLine = 209,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value44=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 209))), "./comelang2.h", 209))))))));
                                        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        it_35=((struct list$1charph*)come_null_check(self, "./comelang2.h", 211))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional8=it_35!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional8) {
                                            (gCallerSName = "./comelang2.h", gCallerSLine = 213,list$1charph_add(((struct list$1charph*)come_null_check(result_34, "./comelang2.h", 213)),(char*)come_increment_ref_count(((char*)(right_value49=string_clone(((struct list_item$1charph*)come_null_check(it_35, "./comelang2.h", 213))->item))))));
                                            if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            it_35=((struct list_item$1charph*)come_null_check(it_35, "./comelang2.h", 215))->next;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result35__ = __result_obj__ = result_34;
                                        if(result_34 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result35__;
                                        __freed_obj__ = 0;
                                        if(result_34 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __caller_sname10__ = gCallerSName10;
                                        __caller_sname9__ = gCallerSName9;
                                        __caller_sname8__ = gCallerSName8;
                                        __caller_sname7__ = gCallerSName7;
                                        __caller_sname6__ = gCallerSName6;
                                        __caller_sname5__ = gCallerSName5;
                                        __caller_sname4__ = gCallerSName4;
                                        __caller_sname3__ = gCallerSName3;
                                        __caller_sname2__ = gCallerSName2;
                                        __caller_sname__ = gCallerSName;
                                        __caller_sline10__ = gCallerSLine10;
                                        __caller_sline9__ = gCallerSLine9;
                                        __caller_sline8__ = gCallerSLine8;
                                        __caller_sline7__ = gCallerSLine7;
                                        __caller_sline6__ = gCallerSLine6;
                                        __caller_sline5__ = gCallerSLine5;
                                        __caller_sline4__ = gCallerSLine4;
                                        __caller_sline3__ = gCallerSLine3;
                                        __caller_sline2__ = gCallerSLine2;
                                        __caller_sline__ = gCallerSLine;
                                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 171))->head=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 172))->tail=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 173))->len=0;
                                            __freed_obj__ = 0;
                                            __result33__ = __result_obj__ = self;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result33__;
                                            __freed_obj__ = 0;
                                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional79;
void* right_value46;
struct list_item$1charph* litem_36;
char* __dec_obj26;
_Bool _if_conditional80;
void* right_value47;
struct list_item$1charph* litem_37;
char* __dec_obj27;
void* right_value48;
struct list_item$1charph* litem_38;
char* __dec_obj28;
struct list$1charph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value46, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1charph*));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1charph*));
                                            __caller_sname10__ = gCallerSName10;
                                            __caller_sname9__ = gCallerSName9;
                                            __caller_sname8__ = gCallerSName8;
                                            __caller_sname7__ = gCallerSName7;
                                            __caller_sname6__ = gCallerSName6;
                                            __caller_sname5__ = gCallerSName5;
                                            __caller_sname4__ = gCallerSName4;
                                            __caller_sname3__ = gCallerSName3;
                                            __caller_sname2__ = gCallerSName2;
                                            __caller_sname__ = gCallerSName;
                                            __caller_sline10__ = gCallerSLine10;
                                            __caller_sline9__ = gCallerSLine9;
                                            __caller_sline8__ = gCallerSLine8;
                                            __caller_sline7__ = gCallerSLine7;
                                            __caller_sline6__ = gCallerSLine6;
                                            __caller_sline5__ = gCallerSLine5;
                                            __caller_sline4__ = gCallerSLine4;
                                            __caller_sline3__ = gCallerSLine3;
                                            __caller_sline2__ = gCallerSLine2;
                                            __caller_sline__ = gCallerSLine;
                                            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                if(_if_conditional79=((struct list$1charph*)come_null_check(self, "./comelang2.h", 253))->len==0,                                                __freed_obj__ = 0, 
                                                _if_conditional79) {
                                                    litem_36=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value46=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 223))));
                                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 225))->prev=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 226))->next=((void*)0);
                                                    __freed_obj__ = 0;
                                                    __dec_obj26=((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 227))->item;
                                                    ((struct list_item$1charph*)come_null_check(litem_36, "./comelang2.h", 227))->item=(char*)come_increment_ref_count(item);
                                                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_36;
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 230))->head=litem_36;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional80=((struct list$1charph*)come_null_check(self, "./comelang2.h", 253))->len==1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional80) {
                                                        litem_37=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 233))));
                                                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_37, "./comelang2.h", 235))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 235))->head;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_37, "./comelang2.h", 236))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj27=((struct list_item$1charph*)come_null_check(litem_37, "./comelang2.h", 237))->item;
                                                        ((struct list_item$1charph*)come_null_check(litem_37, "./comelang2.h", 237))->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 239))->tail=litem_37;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 240))->head, "./comelang2.h", 240))->next=litem_37;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        litem_38=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 243))));
                                                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_38, "./comelang2.h", 245))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 245))->tail;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(litem_38, "./comelang2.h", 246))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        __dec_obj28=((struct list_item$1charph*)come_null_check(litem_38, "./comelang2.h", 247))->item;
                                                        ((struct list_item$1charph*)come_null_check(litem_38, "./comelang2.h", 247))->item=(char*)come_increment_ref_count(item);
                                                        if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 249))->tail, "./comelang2.h", 249))->next=litem_38;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 250))->tail=litem_38;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 253))->len++;
                                                __freed_obj__ = 0;
                                                __result34__ = __result_obj__ = self;
                                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
                                                return __result34__;
                                                __freed_obj__ = 0;
                                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
}

static void list$1charph_finalize(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional82;
struct tuple1$1sTypeph* __result36__;
void* right_value51;
struct tuple1$1sTypeph* result_39;
_Bool _if_conditional83;
void* right_value52;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value52, 0, sizeof(void*));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                        if(_if_conditional82=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional82) {
                                            __result36__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result36__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_39=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                                        if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        if(_if_conditional83=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional83) {
                                            __dec_obj30=((struct tuple1$1sTypeph*)come_null_check(result_39, "tuple1$1sTypephp_clone", 4))->v1;
                                            ((struct tuple1$1sTypeph*)come_null_check(result_39, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value52=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                                            if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result37__ = __result_obj__ = result_39;
                                        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result37__;
                                        __freed_obj__ = 0;
                                        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

int sInterfaceNode_sline(struct sInterfaceNode* self, struct sInfo* info){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result43__ = ((struct sInterfaceNode*)come_null_check(self, "23interface.c", 24))->sline;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result43__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* sInterfaceNode_sname(struct sInterfaceNode* self, struct sInfo* info){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value64;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result44__ = __result_obj__ = ((char*)(right_value64=(gCallerSName = "23interface.c", gCallerSLine = 29,__builtin_string(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 29))->sname))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result44__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool sInterfaceNode_terminated(){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result45__ = (_Bool)0;
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result45__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

char* sInterfaceNode_kind(){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value65;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    __result46__ = __result_obj__ = ((char*)(right_value65=(gCallerSName = "23interface.c", gCallerSLine = 39,__builtin_string("sInterfaceNode"))));
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result46__;
    __freed_obj__ = 0;
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

_Bool sInterfaceNode_compile(struct sInterfaceNode* self, struct sInfo* info){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value66;
char* name_40;
struct sClass* klass_41;
void* right_value67;
void* right_value68;
struct buffer* buf_42;
void* right_value69;
struct list$1tuple2$2charphsTypephph* o2_saved_43;
struct tuple2$2charphsTypeph* it_46;
_Bool _for_condtionalA1;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_49;
struct sType* type_50;
void* right_value70;
void* right_value71;
void* right_value84;
void* right_value85;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&name_40, 0, sizeof(char*));
memset(&klass_41, 0, sizeof(struct sClass*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&buf_42, 0, sizeof(struct buffer*));
memset(&right_value69, 0, sizeof(void*));
memset(&o2_saved_43, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_46, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_49, 0, sizeof(char*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&name_49, 0, sizeof(char*));
memset(&type_50, 0, sizeof(struct sType*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    name_40=(char*)come_increment_ref_count(((char*)(right_value66=(gCallerSName = "23interface.c", gCallerSLine = 44,__builtin_string(((struct sInterfaceNode*)come_null_check(self, "23interface.c", 44))->name)))));
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    klass_41=((struct sInterfaceNode*)come_null_check(self, "23interface.c", 45))->klass;
    __freed_obj__ = 0;
    ((struct sClass*)come_null_check(klass_41, "23interface.c", 46))->mProtocol=(_Bool)1;
    __freed_obj__ = 0;
    buf_42=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value68=(gCallerSName = "23interface.c", gCallerSLine = 48,buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value67=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "23interface.c", 48)))))))));
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "23interface.c", gCallerSLine = 50,buffer_append_str(((struct buffer*)come_null_check(buf_42, "23interface.c", 50)),((char*)(right_value69=(gCallerSName = "23interface.c", gCallerSLine = 50,xsprintf("struct %s\n{\n",((struct sClass*)come_null_check(klass_41, "23interface.c", 50))->mName))))));
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    for(
    o2_saved_43=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_41, "23interface.c", 61))->mFields)),it_46=(gCallerSName = "23interface.c", gCallerSLine = 61,list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_43), "23interface.c", 61)))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    !(gCallerSName = "23interface.c", gCallerSLine = 61,list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_43), "23interface.c", 61)))) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    it_46=(gCallerSName = "23interface.c", gCallerSLine = 61,list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_43), "23interface.c", 61)))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=it_46;
        name_49=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        type_50=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        (gCallerSName = "23interface.c", gCallerSLine = 56,buffer_append_str(((struct buffer*)come_null_check(buf_42, "23interface.c", 56)),"    "));
        __freed_obj__ = 0;
        come_clear_stackframe();
        (gCallerSName = "23interface.c", gCallerSLine = 57,buffer_append_str(((struct buffer*)come_null_check(buf_42, "23interface.c", 57)),optional$2charphbool_value((come_push_stackframe("23interface.c", 57),((struct optional$2charphbool*)(right_value70=(gCallerSName = "23interface.c", gCallerSLine = 57,make_define_var(type_50,name_49,(_Bool)0,info))))))));
        come_pop_stackframe();
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        (gCallerSName = "23interface.c", gCallerSLine = 58,buffer_append_str(((struct buffer*)come_null_check(buf_42, "23interface.c", 58)),";\n"));
        __freed_obj__ = 0;
        if(name_49 && !__freed_obj__) { name_49 = come_decrement_ref_count(name_49, (void*)0, (void*)0, 0, 0, 0); }
        if(type_50 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_43 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "23interface.c", gCallerSLine = 61,buffer_append_str(((struct buffer*)come_null_check(buf_42, "23interface.c", 61)),"};\n"));
    __freed_obj__ = 0;
    (gCallerSName = "23interface.c", gCallerSLine = 63,add_come_code_at_source_head(info,"%s",((char*)(right_value71=(gCallerSName = "23interface.c", gCallerSLine = 63,buffer_to_string(((struct buffer*)come_null_check(buf_42, "23interface.c", 63))))))));
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "23interface.c", gCallerSLine = 65,map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 65))->classes, "23interface.c", 65)),(char*)come_increment_ref_count(((char*)(right_value84=(gCallerSName = "23interface.c", gCallerSLine = 65,__builtin_string(name_40))))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value85=sClass_clone(klass_41))))));
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result82__ = (_Bool)1;
    if(name_40 && !__freed_obj__) { name_40 = come_decrement_ref_count(name_40, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_42 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_42, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result82__;
    __freed_obj__ = 0;
    if(name_40 && !__freed_obj__) { name_40 = come_decrement_ref_count(name_40, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_42 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_42, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional127;
struct tuple2$2charphsTypeph* result_44;
struct tuple2$2charphsTypeph* __result47__;
_Bool _if_conditional128;
struct tuple2$2charphsTypeph* __result48__;
struct tuple2$2charphsTypeph* result_45;
struct tuple2$2charphsTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_44, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_45, 0, sizeof(struct tuple2$2charphsTypeph*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional127=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional127) {
            __freed_obj__ = 0;
            (gCallerSName = "./comelang2.h", gCallerSLine = 354,memset(&result_44,0,sizeof(struct tuple2$2charphsTypeph*)));
            __freed_obj__ = 0;
            __result47__ = __result_obj__ = result_44;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result47__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->head;
        __freed_obj__ = 0;
        if(_if_conditional128=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 363))->it,        __freed_obj__ = 0, 
        _if_conditional128) {
            __result48__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it, "./comelang2.h", 360))->item;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result48__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (gCallerSName = "./comelang2.h", gCallerSLine = 364,memset(&result_45,0,sizeof(struct tuple2$2charphsTypeph*)));
        __freed_obj__ = 0;
        __result49__ = __result_obj__ = result_45;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result49__;
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        __result50__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 387))->it==((void*)0);
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result50__;
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional129;
struct tuple2$2charphsTypeph* result_47;
struct tuple2$2charphsTypeph* __result51__;
_Bool _if_conditional130;
struct tuple2$2charphsTypeph* __result52__;
struct tuple2$2charphsTypeph* result_48;
struct tuple2$2charphsTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_47, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_48, 0, sizeof(struct tuple2$2charphsTypeph*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional129=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional129) {
            __freed_obj__ = 0;
            (gCallerSName = "./comelang2.h", gCallerSLine = 371,memset(&result_47,0,sizeof(struct tuple2$2charphsTypeph*)));
            __freed_obj__ = 0;
            __result51__ = __result_obj__ = result_47;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result51__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 375))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 375))->it, "./comelang2.h", 375))->next;
        __freed_obj__ = 0;
        if(_if_conditional130=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 381))->it,        __freed_obj__ = 0, 
        _if_conditional130) {
            __result52__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 378))->it, "./comelang2.h", 378))->item;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result52__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (gCallerSName = "./comelang2.h", gCallerSLine = 382,memset(&result_48,0,sizeof(struct tuple2$2charphsTypeph*)));
        __freed_obj__ = 0;
        __result53__ = __result_obj__ = result_48;
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result53__;
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional131;
char* default_value_51;
char* __result54__;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_51, 0, sizeof(char*));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional131=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional131) {
                __freed_obj__ = 0;
                (gCallerSName = "./comelang2.h", gCallerSLine = 61,memset(&default_value_51,0,sizeof(char*)));
                __freed_obj__ = 0;
                __result54__ = __result_obj__ = default_value_51;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result54__;
                __freed_obj__ = 0;
            }
            else {
                __result55__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result55__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional132=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional132) {
                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional133;
unsigned int hash_70;
unsigned int it_71;
_Bool _while_condtional11;
_Bool _if_conditional146;
void* right_value78;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional147;
_Bool _if_conditional148;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool same_key_exist_88;
char* it2_91;
_Bool _for_condtionalA3;
void* right_value80;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional177;
_Bool _if_conditional178;
struct map$2charphsClassph* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_70, 0, sizeof(unsigned int));
memset(&it_71, 0, sizeof(unsigned int));
memset(&right_value78, 0, sizeof(void*));
memset(&same_key_exist_88, 0, sizeof(_Bool));
memset(&it2_91, 0, sizeof(char*));
memset(&right_value80, 0, sizeof(void*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional133=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1445))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1445))->size,        __freed_obj__ = 0, 
        _if_conditional133) {
            (gCallerSName = "./comelang2.h", gCallerSLine = 1443,map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_70=(gCallerSName = "./comelang2.h", gCallerSLine = 1445,string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1445))))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1445))->size;
        __freed_obj__ = 0;
        it_71=hash_70;
        __freed_obj__ = 0;
        while(_while_condtional11=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional11) {
            if(_if_conditional146=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1501))->item_existance[it_71],            __freed_obj__ = 0, 
            _if_conditional146) {
                if(_if_conditional147=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1472),__exception_result_var_a2=((struct optional$2boolbool*)(right_value78=(gCallerSName = "./comelang2.h", gCallerSLine = 1472,string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1472))->keys[it_71], "./comelang2.h", 1472)),key)))), come_pop_stackframe(), __exception_result_var_a2)),                (right_value78 && right_value78 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __freed_obj__ = 0, 
                _if_conditional147) {
                    if(_if_conditional148=1,                    __freed_obj__ = 0, 
                    _if_conditional148) {
                        (gCallerSName = "./comelang2.h", gCallerSLine = 1454,list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1454))->key_list, "./comelang2.h", 1454)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1454))->keys[it_71]));
                        __freed_obj__ = 0;
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1455))->keys[it_71] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1455))->keys[it_71] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1455))->keys[it_71], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1456))->keys[it_71]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        (gCallerSName = "./comelang2.h", gCallerSLine = 1459,list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1459))->key_list, "./comelang2.h", 1459)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1459))->keys[it_71]));
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->keys[it_71]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional168=1,                    __freed_obj__ = 0, 
                    _if_conditional168) {
                        if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1463))->items[it_71] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1463))->items[it_71], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->items[it_71]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->items[it_71]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_71++;
                __freed_obj__ = 0;
                if(_if_conditional169=it_71>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1481))->size,                __freed_obj__ = 0, 
                _if_conditional169) {
                    it_71=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional170=it_71==hash_70,                    __freed_obj__ = 0, 
                    _if_conditional170) {
                        (gCallerSName = "./comelang2.h", gCallerSLine = 1478,printf("unexpected error in map.insert\n"));
                        __freed_obj__ = 0;
                        (gCallerSName = "./comelang2.h", gCallerSLine = 1479,exit(2));
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1483))->item_existance[it_71]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional171=1,                __freed_obj__ = 0, 
                _if_conditional171) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1485))->keys[it_71]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1488))->keys[it_71]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional172=1,                __freed_obj__ = 0, 
                _if_conditional172) {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->items[it_71]=(struct sClass*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1494))->items[it_71]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1497))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_88=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_91=(gCallerSName = "./comelang2.h", gCallerSLine = 1511,list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1511))->key_list, "./comelang2.h", 1511)))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !(gCallerSName = "./comelang2.h", gCallerSLine = 1511,list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1511))->key_list, "./comelang2.h", 1511)))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        it2_91=(gCallerSName = "./comelang2.h", gCallerSLine = 1511,list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1511))->key_list, "./comelang2.h", 1511)))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional177=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1509),__exception_result_var_a4=((struct optional$2boolbool*)(right_value80=(gCallerSName = "./comelang2.h", gCallerSLine = 1509,string_equals(((char*)come_null_check(it2_91, "./comelang2.h", 1509)),key)))), come_pop_stackframe(), __exception_result_var_a4)),            (right_value80 && right_value80 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional177) {
                same_key_exist_88=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional178=!same_key_exist_88,        __freed_obj__ = 0, 
        _if_conditional178) {
            (gCallerSName = "./comelang2.h", gCallerSLine = 1512,list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1512))->key_list, "./comelang2.h", 1512)),key));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result81__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result81__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int size_52;
void* right_value72;
char** keys_53;
void* right_value73;
struct sClass** items_54;
void* right_value74;
_Bool* item_existance_55;
int len_56;
char* it_59;
_Bool _for_condtionalA2;
struct sClass* default_value_62;
void* right_value76;
struct sClass* it2_66;
unsigned int hash_67;
int n_68;
_Bool _while_condtional10;
_Bool _if_conditional143;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct sClass* default_value_69;
void* right_value77;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_52, 0, sizeof(int));
memset(&right_value72, 0, sizeof(void*));
memset(&keys_53, 0, sizeof(char**));
memset(&right_value73, 0, sizeof(void*));
memset(&items_54, 0, sizeof(struct sClass**));
memset(&right_value74, 0, sizeof(void*));
memset(&item_existance_55, 0, sizeof(_Bool*));
memset(&len_56, 0, sizeof(int));
memset(&it_59, 0, sizeof(char*));
memset(&default_value_62, 0, sizeof(struct sClass*));
memset(&right_value76, 0, sizeof(void*));
memset(&it2_66, 0, sizeof(struct sClass*));
memset(&hash_67, 0, sizeof(unsigned int));
memset(&n_68, 0, sizeof(int));
memset(&default_value_69, 0, sizeof(struct sClass*));
memset(&right_value77, 0, sizeof(void*));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                size_52=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1390))->size*10;
                __freed_obj__ = 0;
                keys_53=(char**)come_increment_ref_count(((char**)(right_value72=(char**)come_calloc(1, sizeof(char*)*(1*(size_52)), "./comelang2.h", 1391))));
                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                items_54=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value73=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_52)), "./comelang2.h", 1392))));
                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                item_existance_55=(_Bool*)come_increment_ref_count(((_Bool*)(right_value74=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_52)), "./comelang2.h", 1393))));
                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                len_56=0;
                __freed_obj__ = 0;
                for(
                it_59=(gCallerSName = "./comelang2.h", gCallerSLine = 1429,map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429)))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA2=                !(gCallerSName = "./comelang2.h", gCallerSLine = 1429,map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429)))) ,                __freed_obj__ = 0, 
                _for_condtionalA2;                it_59=(gCallerSName = "./comelang2.h", gCallerSLine = 1429,map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429)))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    (gCallerSName = "./comelang2.h", gCallerSLine = 1399,memset(&default_value_62,0,sizeof(struct sClass*)));
                    __freed_obj__ = 0;
                    it2_66=((struct sClass*)(right_value76=(gCallerSName = "./comelang2.h", gCallerSLine = 1400,map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_59,default_value_62))));
                    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    hash_67=(gCallerSName = "./comelang2.h", gCallerSLine = 1401,string_get_hash_key(((char*)come_null_check(it_59, "./comelang2.h", 1401))))%size_52;
                    __freed_obj__ = 0;
                    n_68=hash_67;
                    __freed_obj__ = 0;
                    while(_while_condtional10=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        if(_if_conditional143=item_existance_55[n_68],                        __freed_obj__ = 0, 
                        _if_conditional143) {
                            n_68++;
                            __freed_obj__ = 0;
                            if(_if_conditional144=n_68>=size_52,                            __freed_obj__ = 0, 
                            _if_conditional144) {
                                n_68=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional145=n_68==hash_67,                                __freed_obj__ = 0, 
                                _if_conditional145) {
                                    (gCallerSName = "./comelang2.h", gCallerSLine = 1413,printf("unexpected error in map.rehash(1)\n"));
                                    __freed_obj__ = 0;
                                    (gCallerSName = "./comelang2.h", gCallerSLine = 1414,exit(2));
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            item_existance_55[n_68]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_53[n_68]=it_59;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_54[n_68]=((struct sClass*)(right_value77=(gCallerSName = "./comelang2.h", gCallerSLine = 1421,map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1421)),it_59,default_value_69))));
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            len_56++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (gCallerSName = "./comelang2.h", gCallerSLine = 1429,come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->items));
                __freed_obj__ = 0;
                if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1430))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1430))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1430))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                (gCallerSName = "./comelang2.h", gCallerSLine = 1431,come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1431))->keys));
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys=keys_53;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->items=items_54;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->item_existance=item_existance_55;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1437))->size=size_52;
                __freed_obj__ = 0;
                ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->len=len_56;
                __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional134;
char* result_57;
char* __result56__;
_Bool _if_conditional135;
char* __result57__;
char* result_58;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_57, 0, sizeof(char*));
memset(&result_58, 0, sizeof(char*));
                __caller_sname10__ = gCallerSName10;
                __caller_sname9__ = gCallerSName9;
                __caller_sname8__ = gCallerSName8;
                __caller_sname7__ = gCallerSName7;
                __caller_sname6__ = gCallerSName6;
                __caller_sname5__ = gCallerSName5;
                __caller_sname4__ = gCallerSName4;
                __caller_sname3__ = gCallerSName3;
                __caller_sname2__ = gCallerSName2;
                __caller_sname__ = gCallerSName;
                __caller_sline10__ = gCallerSLine10;
                __caller_sline9__ = gCallerSLine9;
                __caller_sline8__ = gCallerSLine8;
                __caller_sline7__ = gCallerSLine7;
                __caller_sline6__ = gCallerSLine6;
                __caller_sline5__ = gCallerSLine5;
                __caller_sline4__ = gCallerSLine4;
                __caller_sline3__ = gCallerSLine3;
                __caller_sline2__ = gCallerSLine2;
                __caller_sline__ = gCallerSLine;
                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                    if(_if_conditional134=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional134) {
                        __freed_obj__ = 0;
                        (gCallerSName = "./comelang2.h", gCallerSLine = 1354,memset(&result_57,0,sizeof(char*)));
                        __freed_obj__ = 0;
                        __result56__ = __result_obj__ = result_57;
                        __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
                        return __result56__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1357))->key_list, "./comelang2.h", 1357))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1357))->key_list, "./comelang2.h", 1357))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional135=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1363))->key_list, "./comelang2.h", 1363))->it,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        __result57__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it, "./comelang2.h", 1360))->item;
                        __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
                        return __result57__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    (gCallerSName = "./comelang2.h", gCallerSLine = 1364,memset(&result_58,0,sizeof(char*)));
                    __freed_obj__ = 0;
                    __result58__ = __result_obj__ = result_58;
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result58__;
                    __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __caller_sname10__ = gCallerSName10;
                __caller_sname9__ = gCallerSName9;
                __caller_sname8__ = gCallerSName8;
                __caller_sname7__ = gCallerSName7;
                __caller_sname6__ = gCallerSName6;
                __caller_sname5__ = gCallerSName5;
                __caller_sname4__ = gCallerSName4;
                __caller_sname3__ = gCallerSName3;
                __caller_sname2__ = gCallerSName2;
                __caller_sname__ = gCallerSName;
                __caller_sline10__ = gCallerSLine10;
                __caller_sline9__ = gCallerSLine9;
                __caller_sline8__ = gCallerSLine8;
                __caller_sline7__ = gCallerSLine7;
                __caller_sline6__ = gCallerSLine6;
                __caller_sline5__ = gCallerSLine5;
                __caller_sline4__ = gCallerSLine4;
                __caller_sline3__ = gCallerSLine3;
                __caller_sline2__ = gCallerSLine2;
                __caller_sline__ = gCallerSLine;
                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                    __result59__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1386))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1386))->key_list, "./comelang2.h", 1386))->it==((void*)0);
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result59__;
                    __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional136;
char* result_60;
char* __result60__;
_Bool _if_conditional137;
char* __result61__;
char* result_61;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_60, 0, sizeof(char*));
memset(&result_61, 0, sizeof(char*));
                __caller_sname10__ = gCallerSName10;
                __caller_sname9__ = gCallerSName9;
                __caller_sname8__ = gCallerSName8;
                __caller_sname7__ = gCallerSName7;
                __caller_sname6__ = gCallerSName6;
                __caller_sname5__ = gCallerSName5;
                __caller_sname4__ = gCallerSName4;
                __caller_sname3__ = gCallerSName3;
                __caller_sname2__ = gCallerSName2;
                __caller_sname__ = gCallerSName;
                __caller_sline10__ = gCallerSLine10;
                __caller_sline9__ = gCallerSLine9;
                __caller_sline8__ = gCallerSLine8;
                __caller_sline7__ = gCallerSLine7;
                __caller_sline6__ = gCallerSLine6;
                __caller_sline5__ = gCallerSLine5;
                __caller_sline4__ = gCallerSLine4;
                __caller_sline3__ = gCallerSLine3;
                __caller_sline2__ = gCallerSLine2;
                __caller_sline__ = gCallerSLine;
                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                    if(_if_conditional136=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional136) {
                        __freed_obj__ = 0;
                        (gCallerSName = "./comelang2.h", gCallerSLine = 1371,memset(&result_60,0,sizeof(char*)));
                        __freed_obj__ = 0;
                        __result60__ = __result_obj__ = result_60;
                        __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
                        return __result60__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1374))->key_list, "./comelang2.h", 1374))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1374))->key_list, "./comelang2.h", 1374))->it, "./comelang2.h", 1374))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional137=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1380))->key_list, "./comelang2.h", 1380))->it,                    __freed_obj__ = 0, 
                    _if_conditional137) {
                        __result61__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1377))->key_list, "./comelang2.h", 1377))->it, "./comelang2.h", 1377))->item;
                        __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
                        return __result61__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    (gCallerSName = "./comelang2.h", gCallerSLine = 1381,memset(&result_61,0,sizeof(char*)));
                    __freed_obj__ = 0;
                    __result62__ = __result_obj__ = result_61;
                    __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
                    return __result62__;
                    __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_63;
unsigned int it_64;
_Bool _while_condtional9;
_Bool _if_conditional138;
void* right_value75;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional140;
struct sClass* __result65__;
_Bool _if_conditional141;
_Bool _if_conditional142;
struct sClass* __result66__;
struct sClass* __result67__;
struct sClass* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_63, 0, sizeof(unsigned int));
memset(&it_64, 0, sizeof(unsigned int));
memset(&right_value75, 0, sizeof(void*));
                    __caller_sname10__ = gCallerSName10;
                    __caller_sname9__ = gCallerSName9;
                    __caller_sname8__ = gCallerSName8;
                    __caller_sname7__ = gCallerSName7;
                    __caller_sname6__ = gCallerSName6;
                    __caller_sname5__ = gCallerSName5;
                    __caller_sname4__ = gCallerSName4;
                    __caller_sname3__ = gCallerSName3;
                    __caller_sname2__ = gCallerSName2;
                    __caller_sname__ = gCallerSName;
                    __caller_sline10__ = gCallerSLine10;
                    __caller_sline9__ = gCallerSLine9;
                    __caller_sline8__ = gCallerSLine8;
                    __caller_sline7__ = gCallerSLine7;
                    __caller_sline6__ = gCallerSLine6;
                    __caller_sline5__ = gCallerSLine5;
                    __caller_sline4__ = gCallerSLine4;
                    __caller_sline3__ = gCallerSLine3;
                    __caller_sline2__ = gCallerSLine2;
                    __caller_sline__ = gCallerSLine;
                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                        hash_63=(gCallerSName = "./comelang2.h", gCallerSLine = 1279,string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1279))))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1279))->size;
                        __freed_obj__ = 0;
                        it_64=hash_63;
                        __freed_obj__ = 0;
                        while(_while_condtional9=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional9) {
                            if(_if_conditional138=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1302))->item_existance[it_64],                            __freed_obj__ = 0, 
                            _if_conditional138) {
                                if(_if_conditional140=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1290),__exception_result_var_a1=((struct optional$2boolbool*)(right_value75=(gCallerSName = "./comelang2.h", gCallerSLine = 1290,string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1290))->keys[it_64], "./comelang2.h", 1290)),key)))), come_pop_stackframe(), __exception_result_var_a1)),                                (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional140) {
                                    __result65__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1287))->items[it_64];
                                    __freed_obj__ = 0;
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
                                    return __result65__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_64++;
                                __freed_obj__ = 0;
                                if(_if_conditional141=it_64>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1298))->size,                                __freed_obj__ = 0, 
                                _if_conditional141) {
                                    it_64=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional142=it_64==hash_63,                                    __freed_obj__ = 0, 
                                    _if_conditional142) {
                                        __result66__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result66__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result67__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                gCallerSName10 = __caller_sname10__;
                                gCallerSName9 = __caller_sname9__;
                                gCallerSName8 = __caller_sname8__;
                                gCallerSName7 = __caller_sname7__;
                                gCallerSName6 = __caller_sname6__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName4 = __caller_sname4__;
                                gCallerSName3 = __caller_sname3__;
                                gCallerSName2 = __caller_sname2__;
                                gCallerSName = __caller_sname__;
                                gCallerSLine10 = __caller_sline10__;
                                gCallerSLine9 = __caller_sline9__;
                                gCallerSLine8 = __caller_sline8__;
                                gCallerSLine7 = __caller_sline7__;
                                gCallerSLine6 = __caller_sline6__;
                                gCallerSLine5 = __caller_sline5__;
                                gCallerSLine4 = __caller_sline4__;
                                gCallerSLine3 = __caller_sline3__;
                                gCallerSLine2 = __caller_sline2__;
                                gCallerSLine = __caller_sline__;
                                return __result67__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result68__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
                        return __result68__;
                        __freed_obj__ = 0;
                    gCallerSName10 = __caller_sname10__;
                    gCallerSName9 = __caller_sname9__;
                    gCallerSName8 = __caller_sname8__;
                    gCallerSName7 = __caller_sname7__;
                    gCallerSName6 = __caller_sname6__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName5 = __caller_sname5__;
                    gCallerSName4 = __caller_sname4__;
                    gCallerSName3 = __caller_sname3__;
                    gCallerSName2 = __caller_sname2__;
                    gCallerSName = __caller_sname__;
                    gCallerSLine10 = __caller_sline10__;
                    gCallerSLine9 = __caller_sline9__;
                    gCallerSLine8 = __caller_sline8__;
                    gCallerSLine7 = __caller_sline7__;
                    gCallerSLine6 = __caller_sline6__;
                    gCallerSLine5 = __caller_sline5__;
                    gCallerSLine4 = __caller_sline4__;
                    gCallerSLine3 = __caller_sline3__;
                    gCallerSLine2 = __caller_sline2__;
                    gCallerSLine = __caller_sline__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional139;
_Bool default_value_65;
_Bool __result63__;
_Bool __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_65, 0, sizeof(_Bool));
                                __caller_sname10__ = gCallerSName10;
                                __caller_sname9__ = gCallerSName9;
                                __caller_sname8__ = gCallerSName8;
                                __caller_sname7__ = gCallerSName7;
                                __caller_sname6__ = gCallerSName6;
                                __caller_sname5__ = gCallerSName5;
                                __caller_sname4__ = gCallerSName4;
                                __caller_sname3__ = gCallerSName3;
                                __caller_sname2__ = gCallerSName2;
                                __caller_sname__ = gCallerSName;
                                __caller_sline10__ = gCallerSLine10;
                                __caller_sline9__ = gCallerSLine9;
                                __caller_sline8__ = gCallerSLine8;
                                __caller_sline7__ = gCallerSLine7;
                                __caller_sline6__ = gCallerSLine6;
                                __caller_sline5__ = gCallerSLine5;
                                __caller_sline4__ = gCallerSLine4;
                                __caller_sline3__ = gCallerSLine3;
                                __caller_sline2__ = gCallerSLine2;
                                __caller_sline__ = gCallerSLine;
                                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                    if(_if_conditional139=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional139) {
                                        __freed_obj__ = 0;
                                        (gCallerSName = "./comelang2.h", gCallerSLine = 61,memset(&default_value_65,0,sizeof(_Bool)));
                                        __freed_obj__ = 0;
                                        __result63__ = default_value_65;
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result63__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result64__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result64__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                gCallerSName10 = __caller_sname10__;
                                gCallerSName9 = __caller_sname9__;
                                gCallerSName8 = __caller_sname8__;
                                gCallerSName7 = __caller_sname7__;
                                gCallerSName6 = __caller_sname6__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName4 = __caller_sname4__;
                                gCallerSName3 = __caller_sname3__;
                                gCallerSName2 = __caller_sname2__;
                                gCallerSName = __caller_sname__;
                                gCallerSLine10 = __caller_sline10__;
                                gCallerSLine9 = __caller_sline9__;
                                gCallerSLine8 = __caller_sline8__;
                                gCallerSLine7 = __caller_sline7__;
                                gCallerSLine6 = __caller_sline6__;
                                gCallerSLine5 = __caller_sline5__;
                                gCallerSLine4 = __caller_sline4__;
                                gCallerSLine3 = __caller_sline3__;
                                gCallerSLine2 = __caller_sline2__;
                                gCallerSLine = __caller_sline__;
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __caller_sname10__ = gCallerSName10;
                                __caller_sname9__ = gCallerSName9;
                                __caller_sname8__ = gCallerSName8;
                                __caller_sname7__ = gCallerSName7;
                                __caller_sname6__ = gCallerSName6;
                                __caller_sname5__ = gCallerSName5;
                                __caller_sname4__ = gCallerSName4;
                                __caller_sname3__ = gCallerSName3;
                                __caller_sname2__ = gCallerSName2;
                                __caller_sname__ = gCallerSName;
                                __caller_sline10__ = gCallerSLine10;
                                __caller_sline9__ = gCallerSLine9;
                                __caller_sline8__ = gCallerSLine8;
                                __caller_sline7__ = gCallerSLine7;
                                __caller_sline6__ = gCallerSLine6;
                                __caller_sline5__ = gCallerSLine5;
                                __caller_sline4__ = gCallerSLine4;
                                __caller_sline3__ = gCallerSLine3;
                                __caller_sline2__ = gCallerSLine2;
                                __caller_sline__ = gCallerSLine;
                                gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                gCallerSName10 = __caller_sname10__;
                                gCallerSName9 = __caller_sname9__;
                                gCallerSName8 = __caller_sname8__;
                                gCallerSName7 = __caller_sname7__;
                                gCallerSName6 = __caller_sname6__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName5 = __caller_sname5__;
                                gCallerSName4 = __caller_sname4__;
                                gCallerSName3 = __caller_sname3__;
                                gCallerSName2 = __caller_sname2__;
                                gCallerSName = __caller_sname__;
                                gCallerSLine10 = __caller_sline10__;
                                gCallerSLine9 = __caller_sline9__;
                                gCallerSLine8 = __caller_sline8__;
                                gCallerSLine7 = __caller_sline7__;
                                gCallerSLine6 = __caller_sline6__;
                                gCallerSLine5 = __caller_sline5__;
                                gCallerSLine4 = __caller_sline4__;
                                gCallerSLine3 = __caller_sline3__;
                                gCallerSLine2 = __caller_sline2__;
                                gCallerSLine = __caller_sline__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int it2_72;
struct list_item$1charp* it_73;
_Bool _while_condtional12;
void* right_value79;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional149;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_72, 0, sizeof(int));
memset(&it_73, 0, sizeof(struct list_item$1charp*));
memset(&right_value79, 0, sizeof(void*));
                        __caller_sname10__ = gCallerSName10;
                        __caller_sname9__ = gCallerSName9;
                        __caller_sname8__ = gCallerSName8;
                        __caller_sname7__ = gCallerSName7;
                        __caller_sname6__ = gCallerSName6;
                        __caller_sname5__ = gCallerSName5;
                        __caller_sname4__ = gCallerSName4;
                        __caller_sname3__ = gCallerSName3;
                        __caller_sname2__ = gCallerSName2;
                        __caller_sname__ = gCallerSName;
                        __caller_sline10__ = gCallerSLine10;
                        __caller_sline9__ = gCallerSLine9;
                        __caller_sline8__ = gCallerSLine8;
                        __caller_sline7__ = gCallerSLine7;
                        __caller_sline6__ = gCallerSLine6;
                        __caller_sline5__ = gCallerSLine5;
                        __caller_sline4__ = gCallerSLine4;
                        __caller_sline3__ = gCallerSLine3;
                        __caller_sline2__ = gCallerSLine2;
                        __caller_sline__ = gCallerSLine;
                        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                            it2_72=0;
                            __freed_obj__ = 0;
                            it_73=((struct list$1charp*)come_null_check(self, "./comelang2.h", 513))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional12=it_73!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional12) {
                                if(_if_conditional149=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 519),__exception_result_var_a3=((struct optional$2boolbool*)(right_value79=(gCallerSName = "./comelang2.h", gCallerSLine = 519,string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_73, "./comelang2.h", 519))->item, "./comelang2.h", 519)),item)))), come_pop_stackframe(), __exception_result_var_a3)),                                (right_value79 && right_value79 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __freed_obj__ = 0, 
                                _if_conditional149) {
                                    (gCallerSName = "./comelang2.h", gCallerSLine = 516,list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 516)),it2_72,it2_72+1));
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_72++;
                                __freed_obj__ = 0;
                                it_73=((struct list_item$1charp*)come_null_check(it_73, "./comelang2.h", 521))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result72__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            gCallerSName10 = __caller_sname10__;
                            gCallerSName9 = __caller_sname9__;
                            gCallerSName8 = __caller_sname8__;
                            gCallerSName7 = __caller_sname7__;
                            gCallerSName6 = __caller_sname6__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName5 = __caller_sname5__;
                            gCallerSName4 = __caller_sname4__;
                            gCallerSName3 = __caller_sname3__;
                            gCallerSName2 = __caller_sname2__;
                            gCallerSName = __caller_sname__;
                            gCallerSLine10 = __caller_sline10__;
                            gCallerSLine9 = __caller_sline9__;
                            gCallerSLine8 = __caller_sline8__;
                            gCallerSLine7 = __caller_sline7__;
                            gCallerSLine6 = __caller_sline6__;
                            gCallerSLine5 = __caller_sline5__;
                            gCallerSLine4 = __caller_sline4__;
                            gCallerSLine3 = __caller_sline3__;
                            gCallerSLine2 = __caller_sline2__;
                            gCallerSLine = __caller_sline__;
                            return __result72__;
                            __freed_obj__ = 0;
                        gCallerSName10 = __caller_sname10__;
                        gCallerSName9 = __caller_sname9__;
                        gCallerSName8 = __caller_sname8__;
                        gCallerSName7 = __caller_sname7__;
                        gCallerSName6 = __caller_sname6__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName5 = __caller_sname5__;
                        gCallerSName4 = __caller_sname4__;
                        gCallerSName3 = __caller_sname3__;
                        gCallerSName2 = __caller_sname2__;
                        gCallerSName = __caller_sname__;
                        gCallerSLine10 = __caller_sline10__;
                        gCallerSLine9 = __caller_sline9__;
                        gCallerSLine8 = __caller_sline8__;
                        gCallerSLine7 = __caller_sline7__;
                        gCallerSLine6 = __caller_sline6__;
                        gCallerSLine5 = __caller_sline5__;
                        gCallerSLine4 = __caller_sline4__;
                        gCallerSLine3 = __caller_sline3__;
                        gCallerSLine2 = __caller_sline2__;
                        gCallerSLine = __caller_sline__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional150;
_Bool _if_conditional151;
_Bool _if_conditional152;
int tmp_74;
_Bool _if_conditional153;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list$1charp* __result69__;
_Bool _if_conditional156;
_Bool _if_conditional157;
struct list_item$1charp* it_77;
int i_78;
_Bool _while_condtional14;
_Bool _if_conditional158;
struct list_item$1charp* prev_it_79;
_Bool _if_conditional159;
_Bool _if_conditional160;
struct list_item$1charp* it_80;
int i_81;
_Bool _while_condtional15;
_Bool _if_conditional161;
_Bool _if_conditional162;
struct list_item$1charp* prev_it_82;
struct list_item$1charp* it_83;
struct list_item$1charp* head_prev_it_84;
struct list_item$1charp* tail_it_85;
int i_86;
_Bool _while_condtional16;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
struct list_item$1charp* prev_it_87;
_Bool _if_conditional166;
_Bool _if_conditional167;
struct list$1charp* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_74, 0, sizeof(int));
memset(&it_77, 0, sizeof(struct list_item$1charp*));
memset(&i_78, 0, sizeof(int));
memset(&prev_it_79, 0, sizeof(struct list_item$1charp*));
memset(&it_80, 0, sizeof(struct list_item$1charp*));
memset(&i_81, 0, sizeof(int));
memset(&prev_it_82, 0, sizeof(struct list_item$1charp*));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_84, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_85, 0, sizeof(struct list_item$1charp*));
memset(&i_86, 0, sizeof(int));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
                                    __caller_sname10__ = gCallerSName10;
                                    __caller_sname9__ = gCallerSName9;
                                    __caller_sname8__ = gCallerSName8;
                                    __caller_sname7__ = gCallerSName7;
                                    __caller_sname6__ = gCallerSName6;
                                    __caller_sname5__ = gCallerSName5;
                                    __caller_sname4__ = gCallerSName4;
                                    __caller_sname3__ = gCallerSName3;
                                    __caller_sname2__ = gCallerSName2;
                                    __caller_sname__ = gCallerSName;
                                    __caller_sline10__ = gCallerSLine10;
                                    __caller_sline9__ = gCallerSLine9;
                                    __caller_sline8__ = gCallerSLine8;
                                    __caller_sline7__ = gCallerSLine7;
                                    __caller_sline6__ = gCallerSLine6;
                                    __caller_sline5__ = gCallerSLine5;
                                    __caller_sline4__ = gCallerSLine4;
                                    __caller_sline3__ = gCallerSLine3;
                                    __caller_sline2__ = gCallerSLine2;
                                    __caller_sline__ = gCallerSLine;
                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                        if(_if_conditional150=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional150) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 529))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional151=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional151) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 532))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional152=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional152) {
                                            tmp_74=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_74;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional153=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional153) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional154=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 549))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional154) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 546))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional155=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional155) {
                                            __result69__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
                                            return __result69__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional156=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 648))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional156) {
                                            (gCallerSName = "./comelang2.h", gCallerSLine = 555,list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 555))));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional157=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional157) {
                                                it_77=((struct list$1charp*)come_null_check(self, "./comelang2.h", 558))->head;
                                                __freed_obj__ = 0;
                                                i_78=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_77!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    if(_if_conditional158=i_78<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional158) {
                                                        prev_it_79=it_77;
                                                        __freed_obj__ = 0;
                                                        it_77=((struct list_item$1charp*)come_null_check(it_77, "./comelang2.h", 564))->next;
                                                        __freed_obj__ = 0;
                                                        i_78++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_79 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_79, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 569))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional159=i_78==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional159) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 572))->head=it_77;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 573))->head, "./comelang2.h", 573))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_77=((struct list_item$1charp*)come_null_check(it_77, "./comelang2.h", 577))->next;
                                                            __freed_obj__ = 0;
                                                            i_78++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional160=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 648))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional160) {
                                                    it_80=((struct list$1charp*)come_null_check(self, "./comelang2.h", 583))->head;
                                                    __freed_obj__ = 0;
                                                    i_81=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional15=it_80!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional15) {
                                                        if(_if_conditional161=i_81==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional161) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->tail=((struct list_item$1charp*)come_null_check(it_80, "./comelang2.h", 587))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 588))->tail, "./comelang2.h", 588))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional162=i_81>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional162) {
                                                            prev_it_82=it_80;
                                                            __freed_obj__ = 0;
                                                            it_80=((struct list_item$1charp*)come_null_check(it_80, "./comelang2.h", 594))->next;
                                                            __freed_obj__ = 0;
                                                            i_81++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_82 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_82, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 599))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_80=((struct list_item$1charp*)come_null_check(it_80, "./comelang2.h", 602))->next;
                                                            __freed_obj__ = 0;
                                                            i_81++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_83=((struct list$1charp*)come_null_check(self, "./comelang2.h", 608))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_84=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_85=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_86=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_83!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        if(_if_conditional163=i_86==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional163) {
                                                            head_prev_it_84=((struct list_item$1charp*)come_null_check(it_83, "./comelang2.h", 617))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional164=i_86==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional164) {
                                                            tail_it_85=it_83;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional165=i_86>=head&&i_86<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional165) {
                                                            prev_it_87=it_83;
                                                            __freed_obj__ = 0;
                                                            it_83=((struct list_item$1charp*)come_null_check(it_83, "./comelang2.h", 627))->next;
                                                            __freed_obj__ = 0;
                                                            i_86++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 632))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_83=((struct list_item$1charp*)come_null_check(it_83, "./comelang2.h", 635))->next;
                                                            __freed_obj__ = 0;
                                                            i_86++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional166=head_prev_it_84!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional166) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_84, "./comelang2.h", 641))->next=tail_it_85;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional167=tail_it_85!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional167) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_85, "./comelang2.h", 644))->prev=head_prev_it_84;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result71__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        gCallerSName10 = __caller_sname10__;
                                        gCallerSName9 = __caller_sname9__;
                                        gCallerSName8 = __caller_sname8__;
                                        gCallerSName7 = __caller_sname7__;
                                        gCallerSName6 = __caller_sname6__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName5 = __caller_sname5__;
                                        gCallerSName4 = __caller_sname4__;
                                        gCallerSName3 = __caller_sname3__;
                                        gCallerSName2 = __caller_sname2__;
                                        gCallerSName = __caller_sname__;
                                        gCallerSLine10 = __caller_sline10__;
                                        gCallerSLine9 = __caller_sline9__;
                                        gCallerSLine8 = __caller_sline8__;
                                        gCallerSLine7 = __caller_sline7__;
                                        gCallerSLine6 = __caller_sline6__;
                                        gCallerSLine5 = __caller_sline5__;
                                        gCallerSLine4 = __caller_sline4__;
                                        gCallerSLine3 = __caller_sline3__;
                                        gCallerSLine2 = __caller_sline2__;
                                        gCallerSLine = __caller_sline__;
                                        return __result71__;
                                        __freed_obj__ = 0;
                                    gCallerSName10 = __caller_sname10__;
                                    gCallerSName9 = __caller_sname9__;
                                    gCallerSName8 = __caller_sname8__;
                                    gCallerSName7 = __caller_sname7__;
                                    gCallerSName6 = __caller_sname6__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName5 = __caller_sname5__;
                                    gCallerSName4 = __caller_sname4__;
                                    gCallerSName3 = __caller_sname3__;
                                    gCallerSName2 = __caller_sname2__;
                                    gCallerSName = __caller_sname__;
                                    gCallerSLine10 = __caller_sline10__;
                                    gCallerSLine9 = __caller_sline9__;
                                    gCallerSLine8 = __caller_sline8__;
                                    gCallerSLine7 = __caller_sline7__;
                                    gCallerSLine6 = __caller_sline6__;
                                    gCallerSLine5 = __caller_sline5__;
                                    gCallerSLine4 = __caller_sline4__;
                                    gCallerSLine3 = __caller_sline3__;
                                    gCallerSLine2 = __caller_sline2__;
                                    gCallerSLine = __caller_sline__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charp* it_75;
_Bool _while_condtional13;
struct list_item$1charp* prev_it_76;
struct list$1charp* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_75, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_76, 0, sizeof(struct list_item$1charp*));
                                            __caller_sname10__ = gCallerSName10;
                                            __caller_sname9__ = gCallerSName9;
                                            __caller_sname8__ = gCallerSName8;
                                            __caller_sname7__ = gCallerSName7;
                                            __caller_sname6__ = gCallerSName6;
                                            __caller_sname5__ = gCallerSName5;
                                            __caller_sname4__ = gCallerSName4;
                                            __caller_sname3__ = gCallerSName3;
                                            __caller_sname2__ = gCallerSName2;
                                            __caller_sname__ = gCallerSName;
                                            __caller_sline10__ = gCallerSLine10;
                                            __caller_sline9__ = gCallerSLine9;
                                            __caller_sline8__ = gCallerSLine8;
                                            __caller_sline7__ = gCallerSLine7;
                                            __caller_sline6__ = gCallerSLine6;
                                            __caller_sline5__ = gCallerSLine5;
                                            __caller_sline4__ = gCallerSLine4;
                                            __caller_sline3__ = gCallerSLine3;
                                            __caller_sline2__ = gCallerSLine2;
                                            __caller_sline__ = gCallerSLine;
                                            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                it_75=((struct list$1charp*)come_null_check(self, "./comelang2.h", 497))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional13=it_75!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional13) {
                                                    prev_it_76=it_75;
                                                    __freed_obj__ = 0;
                                                    it_75=((struct list_item$1charp*)come_null_check(it_75, "./comelang2.h", 500))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_76 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_76, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 504))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 505))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 507))->len=0;
                                                __freed_obj__ = 0;
                                                __result70__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                gCallerSName10 = __caller_sname10__;
                                                gCallerSName9 = __caller_sname9__;
                                                gCallerSName8 = __caller_sname8__;
                                                gCallerSName7 = __caller_sname7__;
                                                gCallerSName6 = __caller_sname6__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName5 = __caller_sname5__;
                                                gCallerSName4 = __caller_sname4__;
                                                gCallerSName3 = __caller_sname3__;
                                                gCallerSName2 = __caller_sname2__;
                                                gCallerSName = __caller_sname__;
                                                gCallerSLine10 = __caller_sline10__;
                                                gCallerSLine9 = __caller_sline9__;
                                                gCallerSLine8 = __caller_sline8__;
                                                gCallerSLine7 = __caller_sline7__;
                                                gCallerSLine6 = __caller_sline6__;
                                                gCallerSLine5 = __caller_sline5__;
                                                gCallerSLine4 = __caller_sline4__;
                                                gCallerSLine3 = __caller_sline3__;
                                                gCallerSLine2 = __caller_sline2__;
                                                gCallerSLine = __caller_sline__;
                                                return __result70__;
                                                __freed_obj__ = 0;
                                            gCallerSName10 = __caller_sname10__;
                                            gCallerSName9 = __caller_sname9__;
                                            gCallerSName8 = __caller_sname8__;
                                            gCallerSName7 = __caller_sname7__;
                                            gCallerSName6 = __caller_sname6__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName5 = __caller_sname5__;
                                            gCallerSName4 = __caller_sname4__;
                                            gCallerSName3 = __caller_sname3__;
                                            gCallerSName2 = __caller_sname2__;
                                            gCallerSName = __caller_sname__;
                                            gCallerSLine10 = __caller_sline10__;
                                            gCallerSLine9 = __caller_sline9__;
                                            gCallerSLine8 = __caller_sline8__;
                                            gCallerSLine7 = __caller_sline7__;
                                            gCallerSLine6 = __caller_sline6__;
                                            gCallerSLine5 = __caller_sline5__;
                                            gCallerSLine4 = __caller_sline4__;
                                            gCallerSLine3 = __caller_sline3__;
                                            gCallerSLine2 = __caller_sline2__;
                                            gCallerSLine = __caller_sline__;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    __caller_sname10__ = gCallerSName10;
                                                    __caller_sname9__ = gCallerSName9;
                                                    __caller_sname8__ = gCallerSName8;
                                                    __caller_sname7__ = gCallerSName7;
                                                    __caller_sname6__ = gCallerSName6;
                                                    __caller_sname5__ = gCallerSName5;
                                                    __caller_sname4__ = gCallerSName4;
                                                    __caller_sname3__ = gCallerSName3;
                                                    __caller_sname2__ = gCallerSName2;
                                                    __caller_sname__ = gCallerSName;
                                                    __caller_sline10__ = gCallerSLine10;
                                                    __caller_sline9__ = gCallerSLine9;
                                                    __caller_sline8__ = gCallerSLine8;
                                                    __caller_sline7__ = gCallerSLine7;
                                                    __caller_sline6__ = gCallerSLine6;
                                                    __caller_sline5__ = gCallerSLine5;
                                                    __caller_sline4__ = gCallerSLine4;
                                                    __caller_sline3__ = gCallerSLine3;
                                                    __caller_sline2__ = gCallerSLine2;
                                                    __caller_sline__ = gCallerSLine;
                                                    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
                                                    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
                                                    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
                                                    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
                                                    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
                                                    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
                                                    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
                                                    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
                                                    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                                                    gCallerSName10 = __caller_sname10__;
                                                    gCallerSName9 = __caller_sname9__;
                                                    gCallerSName8 = __caller_sname8__;
                                                    gCallerSName7 = __caller_sname7__;
                                                    gCallerSName6 = __caller_sname6__;
                                                    gCallerSName5 = __caller_sname5__;
                                                    gCallerSName5 = __caller_sname5__;
                                                    gCallerSName4 = __caller_sname4__;
                                                    gCallerSName3 = __caller_sname3__;
                                                    gCallerSName2 = __caller_sname2__;
                                                    gCallerSName = __caller_sname__;
                                                    gCallerSLine10 = __caller_sline10__;
                                                    gCallerSLine9 = __caller_sline9__;
                                                    gCallerSLine8 = __caller_sline8__;
                                                    gCallerSLine7 = __caller_sline7__;
                                                    gCallerSLine6 = __caller_sline6__;
                                                    gCallerSLine5 = __caller_sline5__;
                                                    gCallerSLine4 = __caller_sline4__;
                                                    gCallerSLine3 = __caller_sline3__;
                                                    gCallerSLine2 = __caller_sline2__;
                                                    gCallerSLine = __caller_sline__;
}

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional173;
char* result_89;
char* __result73__;
_Bool _if_conditional174;
char* __result74__;
char* result_90;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_89, 0, sizeof(char*));
memset(&result_90, 0, sizeof(char*));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional173=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional173) {
                __freed_obj__ = 0;
                (gCallerSName = "./comelang2.h", gCallerSLine = 354,memset(&result_89,0,sizeof(char*)));
                __freed_obj__ = 0;
                __result73__ = __result_obj__ = result_89;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result73__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->head;
            __freed_obj__ = 0;
            if(_if_conditional174=((struct list$1charp*)come_null_check(self, "./comelang2.h", 363))->it,            __freed_obj__ = 0, 
            _if_conditional174) {
                __result74__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it, "./comelang2.h", 360))->item;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result74__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (gCallerSName = "./comelang2.h", gCallerSLine = 364,memset(&result_90,0,sizeof(char*)));
            __freed_obj__ = 0;
            __result75__ = __result_obj__ = result_90;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result75__;
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static _Bool list$1charp_end(struct list$1charp* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            __result76__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 387))->it==((void*)0);
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result76__;
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional175;
char* result_92;
char* __result77__;
_Bool _if_conditional176;
char* __result78__;
char* result_93;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_92, 0, sizeof(char*));
memset(&result_93, 0, sizeof(char*));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional175=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional175) {
                __freed_obj__ = 0;
                (gCallerSName = "./comelang2.h", gCallerSLine = 371,memset(&result_92,0,sizeof(char*)));
                __freed_obj__ = 0;
                __result77__ = __result_obj__ = result_92;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result77__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 375))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 375))->it, "./comelang2.h", 375))->next;
            __freed_obj__ = 0;
            if(_if_conditional176=((struct list$1charp*)come_null_check(self, "./comelang2.h", 381))->it,            __freed_obj__ = 0, 
            _if_conditional176) {
                __result78__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 378))->it, "./comelang2.h", 378))->item;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result78__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (gCallerSName = "./comelang2.h", gCallerSLine = 382,memset(&result_93,0,sizeof(char*)));
            __freed_obj__ = 0;
            __result79__ = __result_obj__ = result_93;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result79__;
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional179;
void* right_value81;
struct list_item$1charp* litem_94;
_Bool _if_conditional180;
void* right_value82;
struct list_item$1charp* litem_95;
void* right_value83;
struct list_item$1charp* litem_96;
struct list$1charp* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_94, 0, sizeof(struct list_item$1charp*));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_95, 0, sizeof(struct list_item$1charp*));
memset(&right_value83, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1charp*));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                if(_if_conditional179=((struct list$1charp*)come_null_check(self, "./comelang2.h", 323))->len==0,                __freed_obj__ = 0, 
                _if_conditional179) {
                    litem_94=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value81=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 293))));
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_94, "./comelang2.h", 295))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_94, "./comelang2.h", 296))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_94, "./comelang2.h", 297))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_94;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 300))->head=litem_94;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional180=((struct list$1charp*)come_null_check(self, "./comelang2.h", 323))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        litem_95=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value82=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 303))));
                        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_95, "./comelang2.h", 305))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 305))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_95, "./comelang2.h", 306))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_95, "./comelang2.h", 307))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 309))->tail=litem_95;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 310))->head, "./comelang2.h", 310))->next=litem_95;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_96=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value83=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 313))));
                        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_96, "./comelang2.h", 315))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 315))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_96, "./comelang2.h", 316))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_96, "./comelang2.h", 317))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 319))->tail, "./comelang2.h", 319))->next=litem_96;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 320))->tail=litem_96;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 323))->len++;
                __freed_obj__ = 0;
                __result80__ = __result_obj__ = self;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result80__;
                __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

struct tuple2$2sTypephcharph* parse_interface_function(struct sInfo* info){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value86;
struct tuple3$3sTypephcharphbool* multiple_assgin_var2;
struct sType* result_type_98;
char* var_name_99;
_Bool err_100;
_Bool _if_conditional185;
void* right_value87;
char* fun_name_101;
void* right_value88;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_103;
struct list$1charph* param_names_104;
struct list$1charph* param_default_parametors_105;
_Bool var_args_106;
void* right_value95;
void* right_value96;
void* right_value103;
void* right_value104;
void* right_value105;
struct sType* type_123;
void* right_value109;
struct list$1sTypeph* __dec_obj53;
void* right_value113;
struct list$1charph* __dec_obj54;
void* right_value114;
void* right_value116;
void* right_value117;
struct tuple1$1sTypeph* __dec_obj56;
void* right_value118;
void* right_value121;
struct tuple2$2sTypephcharph* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value86, 0, sizeof(void*));
memset(&result_type_98, 0, sizeof(struct sType*));
memset(&var_name_99, 0, sizeof(char*));
memset(&err_100, 0, sizeof(_Bool));
memset(&result_type_98, 0, sizeof(struct sType*));
memset(&var_name_99, 0, sizeof(char*));
memset(&err_100, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
memset(&fun_name_101, 0, sizeof(char*));
memset(&right_value88, 0, sizeof(void*));
memset(&param_types_103, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_104, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_105, 0, sizeof(struct list$1charph*));
memset(&var_args_106, 0, sizeof(_Bool));
memset(&param_types_103, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_104, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_105, 0, sizeof(struct list$1charph*));
memset(&var_args_106, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&type_123, 0, sizeof(struct sType*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    come_clear_stackframe();
    multiple_assgin_var2=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("23interface.c", 72),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value86=(gCallerSName = "23interface.c", gCallerSLine = 72,parse_type(info,(_Bool)0,(_Bool)1))))));
    result_type_98=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
    var_name_99=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
    err_100=multiple_assgin_var2->v3;
    come_pop_stackframe();
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional185=!err_100,    __freed_obj__ = 0, 
    _if_conditional185) {
        (gCallerSName = "23interface.c", gCallerSLine = 74,printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "23interface.c", 74))->sname,((struct sInfo*)come_null_check(info, "23interface.c", 74))->sline));
        __freed_obj__ = 0;
        (gCallerSName = "23interface.c", gCallerSLine = 75,exit(2));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    fun_name_101=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("23interface.c", 78),((struct optional$2charphbool*)(right_value87=(gCallerSName = "23interface.c", gCallerSLine = 78,parse_word(info)))))));
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    multiple_assgin_var3=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("23interface.c", 80),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value88=(gCallerSName = "23interface.c", gCallerSLine = 80,parse_params(info))))));
    param_types_103=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
    param_names_104=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
    param_default_parametors_105=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
    var_args_106=multiple_assgin_var3->v4;
    come_pop_stackframe();
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "23interface.c", gCallerSLine = 82,list$1sTypeph_insert(((struct list$1sTypeph*)come_null_check(param_types_103, "23interface.c", 82)),0,(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=(gCallerSName = "23interface.c", gCallerSLine = 82,sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 82)))),"void*",(_Bool)0,info)))))));
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    (gCallerSName = "23interface.c", gCallerSLine = 83,list$1charph_insert(((struct list$1charph*)come_null_check(param_names_104, "23interface.c", 83)),0,(char*)come_increment_ref_count(((char*)(right_value103=(gCallerSName = "23interface.c", gCallerSLine = 83,__builtin_string("self")))))));
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    type_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(gCallerSName = "23interface.c", gCallerSLine = 85,sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value104=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 85)))),"lambda",(_Bool)0,info)))));
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj53=((struct sType*)come_null_check(type_123, "23interface.c", 87))->mParamTypes;
    ((struct sType*)come_null_check(type_123, "23interface.c", 87))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value109=list$1sTypephp_clone(param_types_103))));
    if(__dec_obj53) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj54=((struct sType*)come_null_check(type_123, "23interface.c", 88))->mParamNames;
    ((struct sType*)come_null_check(type_123, "23interface.c", 88))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value113=list$1charphp_clone(param_names_104))));
    if(__dec_obj54) { come_call_finalizer(list$1charph_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_123, "23interface.c", 89))->mVarArgs=var_args_106;
    __freed_obj__ = 0;
    __dec_obj56=((struct sType*)come_null_check(type_123, "23interface.c", 90))->mResultType;
    ((struct sType*)come_null_check(type_123, "23interface.c", 90))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value117=(gCallerSName = "23interface.c", gCallerSLine = 90,tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value114=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 90)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(result_type_98)))))))));
    if(__dec_obj56) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result99__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value121=(gCallerSName = "23interface.c", gCallerSLine = 92,tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value118=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "23interface.c", 92)))),(struct sType*)come_increment_ref_count(type_123),(char*)come_increment_ref_count(fun_name_101)))));
    if(result_type_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_99 && !__freed_obj__) { var_name_99 = come_decrement_ref_count(var_name_99, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_101 && !__freed_obj__) { fun_name_101 = come_decrement_ref_count(fun_name_101, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_103 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_104 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_105 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_123 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result99__;
    __freed_obj__ = 0;
    if(result_type_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_99 && !__freed_obj__) { var_name_99 = come_decrement_ref_count(var_name_99, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name_101 && !__freed_obj__) { fun_name_101 = come_decrement_ref_count(fun_name_101, (void*)0, (void*)0, 0, 0, 0); }
    if(param_types_103 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_104 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_105 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_123 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_123, (void*)0, (void*)0, 0, 0, 0, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional181;
struct tuple3$3sTypephcharphbool* default_value_97;
struct tuple3$3sTypephcharphbool* __result83__;
struct tuple3$3sTypephcharphbool* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_97, 0, sizeof(struct tuple3$3sTypephcharphbool*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional181=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional181) {
            __freed_obj__ = 0;
            (gCallerSName = "./comelang2.h", gCallerSLine = 61,memset(&default_value_97,0,sizeof(struct tuple3$3sTypephcharphbool*)));
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = default_value_97;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result83__;
            __freed_obj__ = 0;
        }
        else {
            __result84__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result84__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional182=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional182) {
            if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                if(_if_conditional183=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional183) {
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional184=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional184) {
                    if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional186;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_102;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result85__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_102, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional186=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional186) {
            __freed_obj__ = 0;
            (gCallerSName = "./comelang2.h", gCallerSLine = 61,memset(&default_value_102,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)));
            __freed_obj__ = 0;
            __result85__ = __result_obj__ = default_value_102;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result85__;
            __freed_obj__ = 0;
        }
        else {
            __result86__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result86__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional187=self!=((void*)0)&&((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional187) {
            if(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize,((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                if(_if_conditional188=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional188) {
                    if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional189=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional189) {
                    if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional190=self!=((void*)0)&&((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 3))->v3!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional190) {
                    if(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize", 2))->v3, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

static struct list$1sTypeph* list$1sTypeph_insert(struct list$1sTypeph* self, int position, struct sType* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional191;
_Bool _if_conditional192;
_Bool _if_conditional193;
struct list$1sTypeph* __result88__;
_Bool _if_conditional196;
void* right_value92;
struct list_item$1sTypeph* litem_110;
struct sType* __dec_obj44;
_Bool _if_conditional197;
void* right_value93;
struct list_item$1sTypeph* litem_111;
struct sType* __dec_obj45;
struct list_item$1sTypeph* it_112;
int i_113;
_Bool _while_condtional17;
_Bool _if_conditional198;
void* right_value94;
struct list_item$1sTypeph* litem_114;
struct sType* __dec_obj46;
struct list$1sTypeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
memset(&litem_110, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value93, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1sTypeph*));
memset(&it_112, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_113, 0, sizeof(int));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_114, 0, sizeof(struct list_item$1sTypeph*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional191=position<0,        __freed_obj__ = 0, 
        _if_conditional191) {
            position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 437))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional192=position<0,        __freed_obj__ = 0, 
        _if_conditional192) {
            position=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional193=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 448))->len==0||position>=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 448))->len,        __freed_obj__ = 0, 
        _if_conditional193) {
            (gCallerSName = "./comelang2.h", gCallerSLine = 444,list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 444)),(struct sType*)come_increment_ref_count(item)));
            __freed_obj__ = 0;
            __result88__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result88__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional196=position==0,        __freed_obj__ = 0, 
        _if_conditional196) {
            litem_110=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value92=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 449))));
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_110, "./comelang2.h", 451))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(litem_110, "./comelang2.h", 452))->next=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 452))->head;
            __freed_obj__ = 0;
            __dec_obj44=((struct list_item$1sTypeph*)come_null_check(litem_110, "./comelang2.h", 453))->item;
            ((struct list_item$1sTypeph*)come_null_check(litem_110, "./comelang2.h", 453))->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 455))->head, "./comelang2.h", 455))->prev=litem_110;
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 456))->head=litem_110;
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 458))->len++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional197=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 494))->len==1,            __freed_obj__ = 0, 
            _if_conditional197) {
                litem_111=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value93=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 461))));
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_111, "./comelang2.h", 463))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 463))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(litem_111, "./comelang2.h", 464))->next=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 464))->tail;
                __freed_obj__ = 0;
                __dec_obj45=((struct list_item$1sTypeph*)come_null_check(litem_111, "./comelang2.h", 465))->item;
                ((struct list_item$1sTypeph*)come_null_check(litem_111, "./comelang2.h", 465))->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 467))->tail, "./comelang2.h", 467))->prev=litem_111;
                __freed_obj__ = 0;
                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 468))->head, "./comelang2.h", 468))->next=litem_111;
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 470))->len++;
                __freed_obj__ = 0;
            }
            else {
                it_112=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 473))->head;
                __freed_obj__ = 0;
                i_113=0;
                __freed_obj__ = 0;
                while(_while_condtional17=it_112!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional17) {
                    if(_if_conditional198=position==i_113,                    __freed_obj__ = 0, 
                    _if_conditional198) {
                        litem_114=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value94=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 477))));
                        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_114, "./comelang2.h", 479))->prev=((struct list_item$1sTypeph*)come_null_check(it_112, "./comelang2.h", 479))->prev;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_114, "./comelang2.h", 480))->next=it_112;
                        __freed_obj__ = 0;
                        __dec_obj46=((struct list_item$1sTypeph*)come_null_check(litem_114, "./comelang2.h", 481))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_114, "./comelang2.h", 481))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list_item$1sTypeph*)come_null_check(it_112, "./comelang2.h", 483))->prev, "./comelang2.h", 483))->next=litem_114;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(it_112, "./comelang2.h", 484))->prev=litem_114;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 486))->len++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_112=((struct list_item$1sTypeph*)come_null_check(it_112, "./comelang2.h", 489))->next;
                    __freed_obj__ = 0;
                    i_113++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result89__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result89__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional194;
void* right_value89;
struct list_item$1sTypeph* litem_107;
struct sType* __dec_obj41;
_Bool _if_conditional195;
void* right_value90;
struct list_item$1sTypeph* litem_108;
struct sType* __dec_obj42;
void* right_value91;
struct list_item$1sTypeph* litem_109;
struct sType* __dec_obj43;
struct list$1sTypeph* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_108, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value91, 0, sizeof(void*));
memset(&litem_109, 0, sizeof(struct list_item$1sTypeph*));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                if(_if_conditional194=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 323))->len==0,                __freed_obj__ = 0, 
                _if_conditional194) {
                    litem_107=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value89=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 293))));
                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_107, "./comelang2.h", 295))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_107, "./comelang2.h", 296))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj41=((struct list_item$1sTypeph*)come_null_check(litem_107, "./comelang2.h", 297))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_107, "./comelang2.h", 297))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_107;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 300))->head=litem_107;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional195=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 323))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional195) {
                        litem_108=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value90=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 303))));
                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_108, "./comelang2.h", 305))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 305))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_108, "./comelang2.h", 306))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj42=((struct list_item$1sTypeph*)come_null_check(litem_108, "./comelang2.h", 307))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_108, "./comelang2.h", 307))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj42) { come_call_finalizer(sType_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 309))->tail=litem_108;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 310))->head, "./comelang2.h", 310))->next=litem_108;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_109=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value91=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 313))));
                        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 315))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 315))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 316))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj43=((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 317))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_109, "./comelang2.h", 317))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 319))->tail, "./comelang2.h", 319))->next=litem_109;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 320))->tail=litem_109;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 323))->len++;
                __freed_obj__ = 0;
                __result87__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result87__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_insert(struct list$1charph* self, int position, char* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional199;
_Bool _if_conditional200;
_Bool _if_conditional201;
struct list$1charph* __result91__;
_Bool _if_conditional204;
void* right_value100;
struct list_item$1charph* litem_118;
char* __dec_obj50;
_Bool _if_conditional205;
void* right_value101;
struct list_item$1charph* litem_119;
char* __dec_obj51;
struct list_item$1charph* it_120;
int i_121;
_Bool _while_condtional18;
_Bool _if_conditional206;
void* right_value102;
struct list_item$1charph* litem_122;
char* __dec_obj52;
struct list$1charph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_118, 0, sizeof(struct list_item$1charph*));
memset(&right_value101, 0, sizeof(void*));
memset(&litem_119, 0, sizeof(struct list_item$1charph*));
memset(&it_120, 0, sizeof(struct list_item$1charph*));
memset(&i_121, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&litem_122, 0, sizeof(struct list_item$1charph*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional199=position<0,        __freed_obj__ = 0, 
        _if_conditional199) {
            position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 437))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional200=position<0,        __freed_obj__ = 0, 
        _if_conditional200) {
            position=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional201=((struct list$1charph*)come_null_check(self, "./comelang2.h", 448))->len==0||position>=((struct list$1charph*)come_null_check(self, "./comelang2.h", 448))->len,        __freed_obj__ = 0, 
        _if_conditional201) {
            (gCallerSName = "./comelang2.h", gCallerSLine = 444,list$1charph_push_back(((struct list$1charph*)come_null_check(self, "./comelang2.h", 444)),(char*)come_increment_ref_count(item)));
            __freed_obj__ = 0;
            __result91__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result91__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional204=position==0,        __freed_obj__ = 0, 
        _if_conditional204) {
            litem_118=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value100=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 449))));
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            ((struct list_item$1charph*)come_null_check(litem_118, "./comelang2.h", 451))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1charph*)come_null_check(litem_118, "./comelang2.h", 452))->next=((struct list$1charph*)come_null_check(self, "./comelang2.h", 452))->head;
            __freed_obj__ = 0;
            __dec_obj50=((struct list_item$1charph*)come_null_check(litem_118, "./comelang2.h", 453))->item;
            ((struct list_item$1charph*)come_null_check(litem_118, "./comelang2.h", 453))->item=(char*)come_increment_ref_count(item);
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 455))->head, "./comelang2.h", 455))->prev=litem_118;
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 456))->head=litem_118;
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 458))->len++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional205=((struct list$1charph*)come_null_check(self, "./comelang2.h", 494))->len==1,            __freed_obj__ = 0, 
            _if_conditional205) {
                litem_119=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value101=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 461))));
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(litem_119, "./comelang2.h", 463))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 463))->head;
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(litem_119, "./comelang2.h", 464))->next=((struct list$1charph*)come_null_check(self, "./comelang2.h", 464))->tail;
                __freed_obj__ = 0;
                __dec_obj51=((struct list_item$1charph*)come_null_check(litem_119, "./comelang2.h", 465))->item;
                ((struct list_item$1charph*)come_null_check(litem_119, "./comelang2.h", 465))->item=(char*)come_increment_ref_count(item);
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 467))->tail, "./comelang2.h", 467))->prev=litem_119;
                __freed_obj__ = 0;
                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 468))->head, "./comelang2.h", 468))->next=litem_119;
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 470))->len++;
                __freed_obj__ = 0;
            }
            else {
                it_120=((struct list$1charph*)come_null_check(self, "./comelang2.h", 473))->head;
                __freed_obj__ = 0;
                i_121=0;
                __freed_obj__ = 0;
                while(_while_condtional18=it_120!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional18) {
                    if(_if_conditional206=position==i_121,                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        litem_122=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value102=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 477))));
                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 479))->prev=((struct list_item$1charph*)come_null_check(it_120, "./comelang2.h", 479))->prev;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 480))->next=it_120;
                        __freed_obj__ = 0;
                        __dec_obj52=((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 481))->item;
                        ((struct list_item$1charph*)come_null_check(litem_122, "./comelang2.h", 481))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list_item$1charph*)come_null_check(it_120, "./comelang2.h", 483))->prev, "./comelang2.h", 483))->next=litem_122;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(it_120, "./comelang2.h", 484))->prev=litem_122;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 486))->len++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_120=((struct list_item$1charph*)come_null_check(it_120, "./comelang2.h", 489))->next;
                    __freed_obj__ = 0;
                    i_121++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result92__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result92__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional202;
void* right_value97;
struct list_item$1charph* litem_115;
char* __dec_obj47;
_Bool _if_conditional203;
void* right_value98;
struct list_item$1charph* litem_116;
char* __dec_obj48;
void* right_value99;
struct list_item$1charph* litem_117;
char* __dec_obj49;
struct list$1charph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
memset(&litem_115, 0, sizeof(struct list_item$1charph*));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_116, 0, sizeof(struct list_item$1charph*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_117, 0, sizeof(struct list_item$1charph*));
            __caller_sname10__ = gCallerSName10;
            __caller_sname9__ = gCallerSName9;
            __caller_sname8__ = gCallerSName8;
            __caller_sname7__ = gCallerSName7;
            __caller_sname6__ = gCallerSName6;
            __caller_sname5__ = gCallerSName5;
            __caller_sname4__ = gCallerSName4;
            __caller_sname3__ = gCallerSName3;
            __caller_sname2__ = gCallerSName2;
            __caller_sname__ = gCallerSName;
            __caller_sline10__ = gCallerSLine10;
            __caller_sline9__ = gCallerSLine9;
            __caller_sline8__ = gCallerSLine8;
            __caller_sline7__ = gCallerSLine7;
            __caller_sline6__ = gCallerSLine6;
            __caller_sline5__ = gCallerSLine5;
            __caller_sline4__ = gCallerSLine4;
            __caller_sline3__ = gCallerSLine3;
            __caller_sline2__ = gCallerSLine2;
            __caller_sline__ = gCallerSLine;
            gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
            gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
            gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
            gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
            gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
            gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
            gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
            gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
            gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
                if(_if_conditional202=((struct list$1charph*)come_null_check(self, "./comelang2.h", 323))->len==0,                __freed_obj__ = 0, 
                _if_conditional202) {
                    litem_115=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value97=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 293))));
                    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_115, "./comelang2.h", 295))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_115, "./comelang2.h", 296))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj47=((struct list_item$1charph*)come_null_check(litem_115, "./comelang2.h", 297))->item;
                    ((struct list_item$1charph*)come_null_check(litem_115, "./comelang2.h", 297))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_115;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 300))->head=litem_115;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional203=((struct list$1charph*)come_null_check(self, "./comelang2.h", 323))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional203) {
                        litem_116=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value98=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 303))));
                        if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_116, "./comelang2.h", 305))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 305))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_116, "./comelang2.h", 306))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj48=((struct list_item$1charph*)come_null_check(litem_116, "./comelang2.h", 307))->item;
                        ((struct list_item$1charph*)come_null_check(litem_116, "./comelang2.h", 307))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 309))->tail=litem_116;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 310))->head, "./comelang2.h", 310))->next=litem_116;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_117=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value99=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 313))));
                        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 315))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 315))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 316))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj49=((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 317))->item;
                        ((struct list_item$1charph*)come_null_check(litem_117, "./comelang2.h", 317))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 319))->tail, "./comelang2.h", 319))->next=litem_117;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 320))->tail=litem_117;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 323))->len++;
                __freed_obj__ = 0;
                __result90__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result90__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional207;
struct list$1sTypeph* __result93__;
void* right_value106;
void* right_value107;
struct list$1sTypeph* result_124;
struct list_item$1sTypeph* it_125;
_Bool _while_condtional19;
void* right_value108;
struct list$1sTypeph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct list$1sTypeph*));
memset(&it_125, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value108, 0, sizeof(void*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional207=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional207) {
            __result93__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result93__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_124=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value107=(gCallerSName = "./comelang2.h", gCallerSLine = 209,list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value106=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 209))), "./comelang2.h", 209))))))));
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_125=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 211))->head;
        __freed_obj__ = 0;
        while(_while_condtional19=it_125!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional19) {
            (gCallerSName = "./comelang2.h", gCallerSLine = 213,list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_124, "./comelang2.h", 213)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_125, "./comelang2.h", 213))->item))))));
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_125=((struct list_item$1sTypeph*)come_null_check(it_125, "./comelang2.h", 215))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result94__ = __result_obj__ = result_124;
        if(result_124 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_124, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result94__;
        __freed_obj__ = 0;
        if(result_124 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional208;
struct list$1charph* __result95__;
void* right_value110;
void* right_value111;
struct list$1charph* result_126;
struct list_item$1charph* it_127;
_Bool _while_condtional20;
void* right_value112;
struct list$1charph* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&result_126, 0, sizeof(struct list$1charph*));
memset(&it_127, 0, sizeof(struct list_item$1charph*));
memset(&right_value112, 0, sizeof(void*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        if(_if_conditional208=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional208) {
            __result95__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result95__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_126=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value111=(gCallerSName = "./comelang2.h", gCallerSLine = 209,list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value110=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 209))), "./comelang2.h", 209))))))));
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        it_127=((struct list$1charph*)come_null_check(self, "./comelang2.h", 211))->head;
        __freed_obj__ = 0;
        while(_while_condtional20=it_127!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional20) {
            (gCallerSName = "./comelang2.h", gCallerSLine = 213,list$1charph_add(((struct list$1charph*)come_null_check(result_126, "./comelang2.h", 213)),(char*)come_increment_ref_count(((char*)(right_value112=string_clone(((struct list_item$1charph*)come_null_check(it_127, "./comelang2.h", 213))->item))))));
            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            it_127=((struct list_item$1charph*)come_null_check(it_127, "./comelang2.h", 215))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result96__ = __result_obj__ = result_126;
        if(result_126 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_126, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result96__;
        __freed_obj__ = 0;
        if(result_126 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value115;
struct sType* __dec_obj55;
struct tuple1$1sTypeph* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        __dec_obj55=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1793))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1793))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_clone(v1))));
        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __result97__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result97__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value119;
struct sType* __dec_obj57;
void* right_value120;
char* __dec_obj58;
struct tuple2$2sTypephcharph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
    __caller_sname10__ = gCallerSName10;
    __caller_sname9__ = gCallerSName9;
    __caller_sname8__ = gCallerSName8;
    __caller_sname7__ = gCallerSName7;
    __caller_sname6__ = gCallerSName6;
    __caller_sname5__ = gCallerSName5;
    __caller_sname4__ = gCallerSName4;
    __caller_sname3__ = gCallerSName3;
    __caller_sname2__ = gCallerSName2;
    __caller_sname__ = gCallerSName;
    __caller_sline10__ = gCallerSLine10;
    __caller_sline9__ = gCallerSLine9;
    __caller_sline8__ = gCallerSLine8;
    __caller_sline7__ = gCallerSLine7;
    __caller_sline6__ = gCallerSLine6;
    __caller_sline5__ = gCallerSLine5;
    __caller_sline4__ = gCallerSLine4;
    __caller_sline3__ = gCallerSLine3;
    __caller_sline2__ = gCallerSLine2;
    __caller_sline__ = gCallerSLine;
    gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
    gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
    gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
    gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
    gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
    gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
    gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
    gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
    gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        __dec_obj57=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1825))->v1;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1825))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(v1))));
        if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj58=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1826))->v2;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1826))->v2=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(v2))));
        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __result98__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result98__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional209=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional209) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional210=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional210) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional211;
void* right_value122;
char* type_name_128;
struct sClass* klass_129;
void* right_value123;
_Bool _if_conditional212;
void* right_value124;
void* right_value125;
struct sClass* __dec_obj59;
void* right_value126;
void* right_value127;
struct sClass* __dec_obj60;
void* right_value128;
void* right_value129;
void* right_value130;
struct sType* voidp_131;
void* right_value134;
void* right_value137;
void* right_value138;
void* right_value139;
void* right_value140;
struct sType* finalizer_135;
void* right_value141;
struct sType* __list_values1___136[1];
void* right_value142;
void* right_value143;
struct list$1sTypeph* __dec_obj66;
void* right_value144;
char* __list_values2___138[1];
void* right_value145;
void* right_value146;
struct list$1charph* __dec_obj67;
void* right_value147;
void* right_value148;
void* right_value149;
void* right_value150;
struct tuple1$1sTypeph* __dec_obj68;
void* right_value151;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
struct sType* cloner_140;
void* right_value156;
struct sType* __list_values3___141[1];
void* right_value157;
void* right_value158;
struct list$1sTypeph* __dec_obj69;
void* right_value159;
char* __list_values4___142[1];
void* right_value160;
void* right_value161;
struct list$1charph* __dec_obj70;
void* right_value162;
void* right_value163;
void* right_value164;
struct tuple1$1sTypeph* __dec_obj71;
void* right_value165;
void* right_value166;
void* right_value167;
_Bool _while_condtional21;
void* right_value168;
struct tuple2$2sTypephcharph* multiple_assgin_var4;
struct sType* type2_143;
char* name_144;
void* right_value169;
void* right_value170;
void* right_value171;
_Bool _if_conditional216;
void* right_value172;
void* right_value173;
void* right_value174;
struct sNode* _inf_value1;
struct sInterfaceNode* _inf_obj_value1;
void* right_value179;
struct sNode* __result108__;
void* right_value180;
void* right_value181;
struct sNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&type_name_128, 0, sizeof(char*));
memset(&klass_129, 0, sizeof(struct sClass*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&voidp_131, 0, sizeof(struct sType*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&finalizer_135, 0, sizeof(struct sType*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&cloner_140, 0, sizeof(struct sType*));
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
memset(&type2_143, 0, sizeof(struct sType*));
memset(&name_144, 0, sizeof(char*));
memset(&type2_143, 0, sizeof(struct sType*));
memset(&name_144, 0, sizeof(char*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
__caller_sname10__ = gCallerSName10;
__caller_sname9__ = gCallerSName9;
__caller_sname8__ = gCallerSName8;
__caller_sname7__ = gCallerSName7;
__caller_sname6__ = gCallerSName6;
__caller_sname5__ = gCallerSName5;
__caller_sname4__ = gCallerSName4;
__caller_sname3__ = gCallerSName3;
__caller_sname2__ = gCallerSName2;
__caller_sname__ = gCallerSName;
__caller_sline10__ = gCallerSLine10;
__caller_sline9__ = gCallerSLine9;
__caller_sline8__ = gCallerSLine8;
__caller_sline7__ = gCallerSLine7;
__caller_sline6__ = gCallerSLine6;
__caller_sline5__ = gCallerSLine5;
__caller_sline4__ = gCallerSLine4;
__caller_sline3__ = gCallerSLine3;
__caller_sline2__ = gCallerSLine2;
__caller_sline__ = gCallerSLine;
gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
    if(_if_conditional211=string_operator_equals(buf,"interface")||string_operator_equals(buf,"protocol"),    __freed_obj__ = 0, 
    _if_conditional211) {
        come_clear_stackframe();
        type_name_128=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("23interface.c", 98),((struct optional$2charphbool*)(right_value122=(gCallerSName = "23interface.c", gCallerSLine = 98,parse_word(info)))))));
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        if(_if_conditional212=((struct sClass*)(right_value123=(gCallerSName = "23interface.c", gCallerSLine = 108,map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 108))->classes, "23interface.c", 108)),type_name_128,((void*)0)))))==((void*)0),        (right_value123 && right_value123 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional212) {
            __dec_obj59=klass_129;
            klass_129=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value125=(gCallerSName = "23interface.c", gCallerSLine = 102,sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value124=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "23interface.c", 102)))),type_name_128,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
            if(__dec_obj59) { come_call_finalizer(sClass_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj60=klass_129;
            klass_129=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value127=sClass_clone(((struct sClass*)(right_value126=(gCallerSName = "23interface.c", gCallerSLine = 105,map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "23interface.c", 105))->classes, "23interface.c", 105)),type_name_128,((void*)0)))))))));
            if(__dec_obj60) { come_call_finalizer(sClass_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("23interface.c", 108),((struct optional$2intbool*)(right_value128=(gCallerSName = "23interface.c", gCallerSLine = 108,expected_next_character(123,info))))));
        come_pop_stackframe();
        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        voidp_131=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=(gCallerSName = "23interface.c", gCallerSLine = 110,sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 110)))),"void",(_Bool)0,info)))));
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(voidp_131, "23interface.c", 111))->mPointerNum++;
        __freed_obj__ = 0;
        (gCallerSName = "23interface.c", gCallerSLine = 113,list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_129, "23interface.c", 113))->mFields, "23interface.c", 113)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value138=(gCallerSName = "23interface.c", gCallerSLine = 113,tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value134=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 113)))),(char*)come_increment_ref_count(((char*)(right_value137=(gCallerSName = "23interface.c", gCallerSLine = 113,__builtin_string("_protocol_obj"))))),(struct sType*)come_increment_ref_count(voidp_131))))))));
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        finalizer_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=(gCallerSName = "23interface.c", gCallerSLine = 115,sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value139=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 115)))),"lambda",(_Bool)0,info)))));
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values1___136[0]=come_increment_ref_count(((struct sType*)(right_value141=sType_clone(voidp_131))));
}        __dec_obj66=((struct sType*)come_null_check(finalizer_135, "23interface.c", 117))->mParamTypes;
        ((struct sType*)come_null_check(finalizer_135, "23interface.c", 117))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value143=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value142=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 117)))),1,__list_values1___136))));
        if(__dec_obj66) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values2___138[0]=come_increment_ref_count(((char*)(right_value144=(gCallerSName = "23interface.c", gCallerSLine = 118,__builtin_string("self")))));
}        __dec_obj67=((struct sType*)come_null_check(finalizer_135, "23interface.c", 118))->mParamNames;
        ((struct sType*)come_null_check(finalizer_135, "23interface.c", 118))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value146=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value145=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 118)))),1,__list_values2___138))));
        if(__dec_obj67) { come_call_finalizer(list$1charph_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(finalizer_135, "23interface.c", 119))->mVarArgs=(_Bool)0;
        __freed_obj__ = 0;
        __dec_obj68=((struct sType*)come_null_check(finalizer_135, "23interface.c", 120))->mResultType;
        ((struct sType*)come_null_check(finalizer_135, "23interface.c", 120))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value150=(gCallerSName = "23interface.c", gCallerSLine = 120,tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value147=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 120)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=(gCallerSName = "23interface.c", gCallerSLine = 120,sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 120)))),"void",(_Bool)0,info))))))))));
        if(__dec_obj68) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        (gCallerSName = "23interface.c", gCallerSLine = 122,list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_129, "23interface.c", 122))->mFields, "23interface.c", 122)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value153=(gCallerSName = "23interface.c", gCallerSLine = 122,tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value151=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 122)))),(char*)come_increment_ref_count(((char*)(right_value152=(gCallerSName = "23interface.c", gCallerSLine = 122,__builtin_string("finalize"))))),(struct sType*)come_increment_ref_count(finalizer_135))))))));
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        cloner_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(gCallerSName = "23interface.c", gCallerSLine = 124,sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value154=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "23interface.c", 124)))),"lambda",(_Bool)0,info)))));
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values3___141[0]=come_increment_ref_count(((struct sType*)(right_value156=sType_clone(voidp_131))));
}        __dec_obj69=((struct sType*)come_null_check(cloner_140, "23interface.c", 126))->mParamTypes;
        ((struct sType*)come_null_check(cloner_140, "23interface.c", 126))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value158=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value157=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "23interface.c", 126)))),1,__list_values3___141))));
        if(__dec_obj69) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        {__list_values4___142[0]=come_increment_ref_count(((char*)(right_value159=(gCallerSName = "23interface.c", gCallerSLine = 127,__builtin_string("self")))));
}        __dec_obj70=((struct sType*)come_null_check(cloner_140, "23interface.c", 127))->mParamNames;
        ((struct sType*)come_null_check(cloner_140, "23interface.c", 127))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value161=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value160=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "23interface.c", 127)))),1,__list_values4___142))));
        if(__dec_obj70) { come_call_finalizer(list$1charph_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(cloner_140, "23interface.c", 128))->mVarArgs=(_Bool)0;
        __freed_obj__ = 0;
        __dec_obj71=((struct sType*)come_null_check(cloner_140, "23interface.c", 129))->mResultType;
        ((struct sType*)come_null_check(cloner_140, "23interface.c", 129))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value164=(gCallerSName = "23interface.c", gCallerSLine = 129,tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value162=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "23interface.c", 129)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(voidp_131)))))))));
        if(__dec_obj71) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        (gCallerSName = "23interface.c", gCallerSLine = 131,list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_129, "23interface.c", 131))->mFields, "23interface.c", 131)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value167=(gCallerSName = "23interface.c", gCallerSLine = 131,tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value165=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 131)))),(char*)come_increment_ref_count(((char*)(right_value166=(gCallerSName = "23interface.c", gCallerSLine = 131,__builtin_string("clone"))))),(struct sType*)come_increment_ref_count(cloner_140))))))));
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        while(_while_condtional21=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional21) {
            (gCallerSName = "23interface.c", gCallerSLine = 134,parse_sharp_v5(info));
            __freed_obj__ = 0;
            multiple_assgin_var4=((struct tuple2$2sTypephcharph*)(right_value168=(gCallerSName = "23interface.c", gCallerSLine = 135,parse_interface_function(info))));
            type2_143=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_144=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            optional$2intbool_value((come_push_stackframe("23interface.c", 136),((struct optional$2intbool*)(right_value169=(gCallerSName = "23interface.c", gCallerSLine = 136,expected_next_character(59,info))))));
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "23interface.c", gCallerSLine = 138,list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_129, "23interface.c", 138))->mFields, "23interface.c", 138)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value171=(gCallerSName = "23interface.c", gCallerSLine = 138,tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value170=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "23interface.c", 138)))),(char*)come_increment_ref_count(name_144),(struct sType*)come_increment_ref_count(type2_143))))))));
            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            (gCallerSName = "23interface.c", gCallerSLine = 140,parse_sharp_v5(info));
            __freed_obj__ = 0;
            if(_if_conditional216=*((struct sInfo*)come_null_check(info, "23interface.c", 147))->p==125,            __freed_obj__ = 0, 
            _if_conditional216) {
                ((struct sInfo*)come_null_check(info, "23interface.c", 143))->p++;
                __freed_obj__ = 0;
                (gCallerSName = "23interface.c", gCallerSLine = 144,skip_spaces_and_lf(info));
                __freed_obj__ = 0;
                if(type2_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_143, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_144 && !__freed_obj__) { name_144 = come_decrement_ref_count(name_144, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            (gCallerSName = "23interface.c", gCallerSLine = 147,parse_sharp_v5(info));
            __freed_obj__ = 0;
            if(type2_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_143, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_144 && !__freed_obj__) { name_144 = come_decrement_ref_count(name_144, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "23interface.c", 150);
        _inf_obj_value1=come_increment_ref_count(((struct sInterfaceNode*)(right_value174=(gCallerSName = "23interface.c", gCallerSLine = 150,sInterfaceNode_initialize((struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value172=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "23interface.c", 150)))),(char*)come_increment_ref_count(((char*)(right_value173=(gCallerSName = "23interface.c", gCallerSLine = 150,__builtin_string(type_name_128))))),(struct sClass*)come_increment_ref_count(klass_129),info)))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sInterfaceNode_finalize;
        _inf_value1->clone=(void*)sInterfaceNode_clone;
        _inf_value1->compile=(void*)sInterfaceNode_compile;
        _inf_value1->sline=(void*)sInterfaceNode_sline;
        _inf_value1->sname=(void*)sInterfaceNode_sname;
        _inf_value1->terminated=(void*)sInterfaceNode_terminated;
        _inf_value1->kind=(void*)sInterfaceNode_kind;
        __result108__ = __result_obj__ = ((struct sNode*)(right_value179=_inf_value1));
        if(type_name_128 && !__freed_obj__) { type_name_128 = come_decrement_ref_count(type_name_128, (void*)0, (void*)0, 0, 0, 0); }
        if(klass_129 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_129, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(voidp_131 && !__freed_obj__) { come_call_finalizer(sType_finalize,voidp_131, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(finalizer_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,finalizer_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cloner_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,cloner_140, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
        return __result108__;
        __freed_obj__ = 0;
        if(type_name_128 && !__freed_obj__) { type_name_128 = come_decrement_ref_count(type_name_128, (void*)0, (void*)0, 0, 0, 0); }
        if(klass_129 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_129, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(voidp_131 && !__freed_obj__) { come_call_finalizer(sType_finalize,voidp_131, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(finalizer_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,finalizer_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(cloner_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,cloner_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result109__ = __result_obj__ = ((struct sNode*)(right_value181=(gCallerSName = "23interface.c", gCallerSLine = 153,top_level_v1((char*)come_increment_ref_count(((char*)(right_value180=(gCallerSName = "23interface.c", gCallerSLine = 153,__builtin_string(buf))))),head,head_sline,info))));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    gCallerSName10 = __caller_sname10__;
    gCallerSName9 = __caller_sname9__;
    gCallerSName8 = __caller_sname8__;
    gCallerSName7 = __caller_sname7__;
    gCallerSName6 = __caller_sname6__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName5 = __caller_sname5__;
    gCallerSName4 = __caller_sname4__;
    gCallerSName3 = __caller_sname3__;
    gCallerSName2 = __caller_sname2__;
    gCallerSName = __caller_sname__;
    gCallerSLine10 = __caller_sline10__;
    gCallerSLine9 = __caller_sline9__;
    gCallerSLine8 = __caller_sline8__;
    gCallerSLine7 = __caller_sline7__;
    gCallerSLine6 = __caller_sline6__;
    gCallerSLine5 = __caller_sline5__;
    gCallerSLine4 = __caller_sline4__;
    gCallerSLine3 = __caller_sline3__;
    gCallerSLine2 = __caller_sline2__;
    gCallerSLine = __caller_sline__;
    return __result109__;
    __freed_obj__ = 0;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
gCallerSName10 = __caller_sname10__;
gCallerSName9 = __caller_sname9__;
gCallerSName8 = __caller_sname8__;
gCallerSName7 = __caller_sname7__;
gCallerSName6 = __caller_sname6__;
gCallerSName5 = __caller_sname5__;
gCallerSName5 = __caller_sname5__;
gCallerSName4 = __caller_sname4__;
gCallerSName3 = __caller_sname3__;
gCallerSName2 = __caller_sname2__;
gCallerSName = __caller_sname__;
gCallerSLine10 = __caller_sline10__;
gCallerSLine9 = __caller_sline9__;
gCallerSLine8 = __caller_sline8__;
gCallerSLine7 = __caller_sline7__;
gCallerSLine6 = __caller_sline6__;
gCallerSLine5 = __caller_sline5__;
gCallerSLine4 = __caller_sline4__;
gCallerSLine3 = __caller_sline3__;
gCallerSLine2 = __caller_sline2__;
gCallerSLine = __caller_sline__;
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional213;
int default_value_130;
int __result100__;
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_130, 0, sizeof(int));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional213=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional213) {
                __freed_obj__ = 0;
                (gCallerSName = "./comelang2.h", gCallerSLine = 61,memset(&default_value_130,0,sizeof(int)));
                __freed_obj__ = 0;
                __result100__ = default_value_130;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result100__;
                __freed_obj__ = 0;
            }
            else {
                __result101__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result101__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional214;
void* right_value131;
struct list_item$1tuple2$2charphsTypephph* litem_132;
struct tuple2$2charphsTypeph* __dec_obj61;
_Bool _if_conditional215;
void* right_value132;
struct list_item$1tuple2$2charphsTypephph* litem_133;
struct tuple2$2charphsTypeph* __dec_obj62;
void* right_value133;
struct list_item$1tuple2$2charphsTypephph* litem_134;
struct tuple2$2charphsTypeph* __dec_obj63;
struct list$1tuple2$2charphsTypephph* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
memset(&litem_132, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value132, 0, sizeof(void*));
memset(&litem_133, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value133, 0, sizeof(void*));
memset(&litem_134, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional214=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 323))->len==0,            __freed_obj__ = 0, 
            _if_conditional214) {
                litem_132=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value131=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 293))));
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 295))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 296))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj61=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 297))->item;
                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_132, "./comelang2.h", 297))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj61) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_132;
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 300))->head=litem_132;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional215=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 323))->len==1,                __freed_obj__ = 0, 
                _if_conditional215) {
                    litem_133=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value132=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 303))));
                    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./comelang2.h", 305))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 305))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./comelang2.h", 306))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj62=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./comelang2.h", 307))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_133, "./comelang2.h", 307))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj62) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 309))->tail=litem_133;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 310))->head, "./comelang2.h", 310))->next=litem_133;
                    __freed_obj__ = 0;
                }
                else {
                    litem_134=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value133=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 313))));
                    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./comelang2.h", 315))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 315))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./comelang2.h", 316))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj63=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./comelang2.h", 317))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_134, "./comelang2.h", 317))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj63) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 319))->tail, "./comelang2.h", 319))->next=litem_134;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 320))->tail=litem_134;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 323))->len++;
            __freed_obj__ = 0;
            __result102__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result102__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* right_value135;
char* __dec_obj64;
void* right_value136;
struct sType* __dec_obj65;
struct tuple2$2charphsTypeph* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            __dec_obj64=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1825))->v1;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1825))->v1=(char*)come_increment_ref_count(((char*)(right_value135=string_clone(v1))));
            if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj65=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1826))->v2;
            ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1826))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value136=sType_clone(v2))));
            if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            __result103__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result103__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
            if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int i_137;
_Bool _for_condtionalA4;
struct list$1sTypeph* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_137, 0, sizeof(int));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 179))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 180))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 181))->len=0;
            __freed_obj__ = 0;
            for(
            i_137=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_137<num_value ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_137++ ,            __freed_obj__ = 0, 
            0            ){
                (gCallerSName = "./comelang2.h", gCallerSLine = 184,list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 184)),values[i_137]));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result104__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result104__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
int i_139;
_Bool _for_condtionalA5;
struct list$1charph* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_139, 0, sizeof(int));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 179))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 180))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 181))->len=0;
            __freed_obj__ = 0;
            for(
            i_139=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA5=            i_139<num_value ,            __freed_obj__ = 0, 
            _for_condtionalA5;            i_139++ ,            __freed_obj__ = 0, 
            0            ){
                (gCallerSName = "./comelang2.h", gCallerSLine = 184,list$1charph_push_back(((struct list$1charph*)come_null_check(self, "./comelang2.h", 184)),values[i_139]));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result105__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result105__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static void sInterfaceNode_finalize(struct sInterfaceNode* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional217=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1))->name!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                if(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0))->name && !__freed_obj__) { ((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0))->name = come_decrement_ref_count(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 0))->name, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->klass!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                if(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1))->klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 1))->klass, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 3))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                if(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->sname && !__freed_obj__) { ((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->sname = come_decrement_ref_count(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

static struct sInterfaceNode* sInterfaceNode_clone(struct sInterfaceNode* self){
char* __caller_sname__;
char* __caller_sname2__;
char* __caller_sname3__;
char* __caller_sname4__;
char* __caller_sname5__;
char* __caller_sname6__;
char* __caller_sname7__;
char* __caller_sname8__;
char* __caller_sname9__;
char* __caller_sname10__;
int __caller_sline__;
int __caller_sline2__;
int __caller_sline3__;
int __caller_sline4__;
int __caller_sline5__;
int __caller_sline6__;
int __caller_sline7__;
int __caller_sline8__;
int __caller_sline9__;
int __caller_sline10__;
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional220;
struct sInterfaceNode* __result106__;
void* right_value175;
struct sInterfaceNode* result_145;
_Bool _if_conditional221;
void* right_value176;
char* __dec_obj72;
_Bool _if_conditional222;
void* right_value177;
struct sClass* __dec_obj73;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value178;
char* __dec_obj74;
struct sInterfaceNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
memset(&result_145, 0, sizeof(struct sInterfaceNode*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
        __caller_sname10__ = gCallerSName10;
        __caller_sname9__ = gCallerSName9;
        __caller_sname8__ = gCallerSName8;
        __caller_sname7__ = gCallerSName7;
        __caller_sname6__ = gCallerSName6;
        __caller_sname5__ = gCallerSName5;
        __caller_sname4__ = gCallerSName4;
        __caller_sname3__ = gCallerSName3;
        __caller_sname2__ = gCallerSName2;
        __caller_sname__ = gCallerSName;
        __caller_sline10__ = gCallerSLine10;
        __caller_sline9__ = gCallerSLine9;
        __caller_sline8__ = gCallerSLine8;
        __caller_sline7__ = gCallerSLine7;
        __caller_sline6__ = gCallerSLine6;
        __caller_sline5__ = gCallerSLine5;
        __caller_sline4__ = gCallerSLine4;
        __caller_sline3__ = gCallerSLine3;
        __caller_sline2__ = gCallerSLine2;
        __caller_sline__ = gCallerSLine;
        gCallerSName10 = gCallerSName9, gCallerSLine10 = gCallerSLine9;
        gCallerSName9 = gCallerSName8, gCallerSLine9 = gCallerSLine8;
        gCallerSName8 = gCallerSName7, gCallerSLine8 = gCallerSLine7;
        gCallerSName7 = gCallerSName6, gCallerSLine7 = gCallerSLine6;
        gCallerSName6 = gCallerSName5, gCallerSLine6 = gCallerSLine5;
        gCallerSName5 = gCallerSName4, gCallerSLine5 = gCallerSLine4;
        gCallerSName4 = gCallerSName3, gCallerSLine4 = gCallerSLine3;
        gCallerSName3 = gCallerSName2, gCallerSLine3 = gCallerSLine2;
        gCallerSName2 = gCallerSName, gCallerSLine2 = gCallerSLine;
            if(_if_conditional220=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional220) {
                __result106__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                gCallerSName10 = __caller_sname10__;
                gCallerSName9 = __caller_sname9__;
                gCallerSName8 = __caller_sname8__;
                gCallerSName7 = __caller_sname7__;
                gCallerSName6 = __caller_sname6__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName5 = __caller_sname5__;
                gCallerSName4 = __caller_sname4__;
                gCallerSName3 = __caller_sname3__;
                gCallerSName2 = __caller_sname2__;
                gCallerSName = __caller_sname__;
                gCallerSLine10 = __caller_sline10__;
                gCallerSLine9 = __caller_sline9__;
                gCallerSLine8 = __caller_sline8__;
                gCallerSLine7 = __caller_sline7__;
                gCallerSLine6 = __caller_sline6__;
                gCallerSLine5 = __caller_sline5__;
                gCallerSLine4 = __caller_sline4__;
                gCallerSLine3 = __caller_sline3__;
                gCallerSLine2 = __caller_sline2__;
                gCallerSLine = __caller_sline__;
                return __result106__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_145=(struct sInterfaceNode*)come_increment_ref_count(((struct sInterfaceNode*)(right_value175=(struct sInterfaceNode*)come_calloc(1, sizeof(struct sInterfaceNode)*(1), "sInterfaceNode_clone", 3))));
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional221=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 5))->name!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional221) {
                __dec_obj72=((struct sInterfaceNode*)come_null_check(result_145, "sInterfaceNode_clone", 4))->name;
                ((struct sInterfaceNode*)come_null_check(result_145, "sInterfaceNode_clone", 4))->name=(char*)come_increment_ref_count(((char*)(right_value176=string_clone(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 4))->name))));
                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional222=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 6))->klass!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional222) {
                __dec_obj73=((struct sInterfaceNode*)come_null_check(result_145, "sInterfaceNode_clone", 5))->klass;
                ((struct sInterfaceNode*)come_null_check(result_145, "sInterfaceNode_clone", 5))->klass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value177=sClass_clone(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 5))->klass))));
                if(__dec_obj73) { come_call_finalizer(sClass_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional223=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                ((struct sInterfaceNode*)come_null_check(result_145, "sInterfaceNode_clone", 6))->sline=((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 6))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 8))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                __dec_obj74=((struct sInterfaceNode*)come_null_check(result_145, "sInterfaceNode_clone", 7))->sname;
                ((struct sInterfaceNode*)come_null_check(result_145, "sInterfaceNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value178=string_clone(((struct sInterfaceNode*)come_null_check(self, "sInterfaceNode_clone", 7))->sname))));
                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result107__ = __result_obj__ = result_145;
            if(result_145 && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            gCallerSName10 = __caller_sname10__;
            gCallerSName9 = __caller_sname9__;
            gCallerSName8 = __caller_sname8__;
            gCallerSName7 = __caller_sname7__;
            gCallerSName6 = __caller_sname6__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName5 = __caller_sname5__;
            gCallerSName4 = __caller_sname4__;
            gCallerSName3 = __caller_sname3__;
            gCallerSName2 = __caller_sname2__;
            gCallerSName = __caller_sname__;
            gCallerSLine10 = __caller_sline10__;
            gCallerSLine9 = __caller_sline9__;
            gCallerSLine8 = __caller_sline8__;
            gCallerSLine7 = __caller_sline7__;
            gCallerSLine6 = __caller_sline6__;
            gCallerSLine5 = __caller_sline5__;
            gCallerSLine4 = __caller_sline4__;
            gCallerSLine3 = __caller_sline3__;
            gCallerSLine2 = __caller_sline2__;
            gCallerSLine = __caller_sline__;
            return __result107__;
            __freed_obj__ = 0;
            if(result_145 && !__freed_obj__) { come_call_finalizer(sInterfaceNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 0, 0); }
        gCallerSName10 = __caller_sname10__;
        gCallerSName9 = __caller_sname9__;
        gCallerSName8 = __caller_sname8__;
        gCallerSName7 = __caller_sname7__;
        gCallerSName6 = __caller_sname6__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName5 = __caller_sname5__;
        gCallerSName4 = __caller_sname4__;
        gCallerSName3 = __caller_sname3__;
        gCallerSName2 = __caller_sname2__;
        gCallerSName = __caller_sname__;
        gCallerSLine10 = __caller_sline10__;
        gCallerSLine9 = __caller_sline9__;
        gCallerSLine8 = __caller_sline8__;
        gCallerSLine7 = __caller_sline7__;
        gCallerSLine6 = __caller_sline6__;
        gCallerSLine5 = __caller_sline5__;
        gCallerSLine4 = __caller_sline4__;
        gCallerSLine3 = __caller_sline3__;
        gCallerSLine2 = __caller_sline2__;
        gCallerSLine = __caller_sline__;
}

