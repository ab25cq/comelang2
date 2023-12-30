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
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sStructNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
    _Bool mOutput;
};
struct sStructNobodyNode
{
    char* mName;
    struct sClass* mClass;
    int sline;
    char* sname;
};
struct sGenericsStructNode
{
    int sline;
    char* sname;
};
struct __current_stack1__
{
    int __method_block_result_kind__;
    void* __method_block_return_value__;
    char** buf;
    char** head;
    int* head_sline;
    struct sInfo** info;
    _Bool* define_struct_221;
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

char* get_none_generics_name(char* class_name);

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
void output_struct(struct sClass* klass, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info);

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info);

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct sType* sType_clone(struct sType* self);
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
static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static void sClass_finalize(struct sClass* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
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
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info);

static struct sClass* sClass_clone(struct sClass* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
_Bool sStructNode_terminated();

char* sStructNode_kind();

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info);

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item);
static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self);
static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self);
static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self);
static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value);
int sStructNode_sline(struct sStructNode* self, struct sInfo* info);

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info);

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info);

_Bool sStructNobodyNode_terminated();

char* sStructNobodyNode_kind();

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info);

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info);

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info);

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info);

_Bool sGenericsStructNode_terminated();

char* sGenericsStructNode_kind();

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info);

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info);

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info);

struct sNode* parse_struct(char* type_name, struct sInfo* info);

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info);

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self);
static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self);
static struct list$1charph* list$1charph_reset(struct list$1charph* self);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sGenericsStructNode_finalize(struct sGenericsStructNode* self);
static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self);
static void sStructNode_finalize(struct sStructNode* self);
static struct sStructNode* sStructNode_clone(struct sStructNode* self);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_14structc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
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







char* get_none_generics_name(char* class_name){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_0;
_Bool _while_condtional1;
_Bool _if_conditional1;
void* right_value0;
void* right_value1;
char* __result7__;
void* right_value2;
char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_0, 0, sizeof(char*));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value1, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
    p_0=class_name;
    __freed_obj__ = 0;
    while(_while_condtional1=*p_0,    __freed_obj__ = 0, 
    _while_condtional1) {
        if(_if_conditional1=*p_0==36,        __freed_obj__ = 0, 
        _if_conditional1) {
            __result7__ = __result_obj__ = ((char*)(right_value1=string_substring(((char*)come_null_check(((char*)(right_value0=__builtin_string(class_name))), "14struct.c", 8)),0,p_0-class_name)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
            if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value0;
            __freed_obj__ = 0;
            return __result7__;
            __freed_obj__ = 0;
        }
        else {
            p_0++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = ((char*)(right_value2=__builtin_string(class_name)));
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
}

char* create_generics_name(struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value3;
void* right_value4;
struct buffer* buf_1;
struct sClass* klass_2;
char* class_name_3;
_Bool _if_conditional2;
int i_4;
_Bool _for_condtionalA1;
void* right_value9;
struct sType* type_15;
void* right_value10;
char* type_name_16;
int i_17;
_Bool _for_condtionalA2;
_Bool _if_conditional23;
void* right_value11;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&buf_1, 0, sizeof(struct buffer*));
memset(&klass_2, 0, sizeof(struct sClass*));
memset(&class_name_3, 0, sizeof(char*));
memset(&i_4, 0, sizeof(int));
memset(&right_value9, 0, sizeof(void*));
memset(&type_15, 0, sizeof(struct sType*));
memset(&right_value10, 0, sizeof(void*));
memset(&type_name_16, 0, sizeof(char*));
memset(&i_17, 0, sizeof(int));
memset(&right_value11, 0, sizeof(void*));
    buf_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 20))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value4;
    __freed_obj__ = 0;
    klass_2=((struct sType*)come_null_check(generics_type, "14struct.c", 22))->mClass;
    __freed_obj__ = 0;
    class_name_3=((struct sClass*)come_null_check(klass_2, "14struct.c", 24))->mName;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_1, "14struct.c", 26)),class_name_3);
    __freed_obj__ = 0;
    if(_if_conditional2=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 48))->mGenericsTypes, "14struct.c", 48)))>0,    __freed_obj__ = 0, 
    _if_conditional2) {
        buffer_append_char(((struct buffer*)come_null_check(buf_1, "14struct.c", 29)),36);
        __freed_obj__ = 0;
        buffer_append_char(((struct buffer*)come_null_check(buf_1, "14struct.c", 30)),list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 30))->mGenericsTypes, "14struct.c", 30)))+48);
        __freed_obj__ = 0;
        for(
        i_4=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        i_4<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "14struct.c", 46))->mGenericsTypes, "14struct.c", 46))) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        i_4++ ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            type_15=optional$2sTypephbool_value((come_push_stackframe("14struct.c", 33),((struct optional$2sTypephbool*)(right_value9=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "14struct.c", 33))->mGenericsTypes,i_4)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
            if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value9;
            __freed_obj__ = 0;
            type_name_16=(char*)come_increment_ref_count(((char*)(right_value10=create_generics_name(type_15,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value10);
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value10;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_1, "14struct.c", 36)),type_name_16);
            __freed_obj__ = 0;
            for(
            i_17=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            i_17<((struct sType*)come_null_check(type_15, "14struct.c", 42))->mPointerNum ,            __freed_obj__ = 0, 
            _for_condtionalA2;            i_17++ ,            __freed_obj__ = 0, 
            0            ){
                buffer_append_char(((struct buffer*)come_null_check(buf_1, "14struct.c", 39)),112);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional23=((struct sType*)come_null_check(type_15, "14struct.c", 45))->mHeap,            __freed_obj__ = 0, 
            _if_conditional23) {
                buffer_append_str(((struct buffer*)come_null_check(buf_1, "14struct.c", 43)),"h");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(type_name_16 && !__freed_obj__) { type_name_16 = come_decrement_ref_count(type_name_16, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result15__ = __result_obj__ = ((char*)(right_value11=buffer_to_string(((struct buffer*)come_null_check(buf_1, "14struct.c", 48)))));
    if(buf_1 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
    if(buf_1 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result9__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result9__;
        __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
struct list_item$1sTypeph* it_5;
int i_6;
_Bool _while_condtional2;
_Bool _if_conditional4;
void* right_value5;
void* right_value6;
struct optional$2sTypephbool* __result11__;
struct sType* default_value_13;
void* right_value7;
void* right_value8;
struct optional$2sTypephbool* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_6, 0, sizeof(int));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value6, 0, sizeof(void*));
memset(&default_value_13, 0, sizeof(struct sType*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
                if(_if_conditional3=position<0,                __freed_obj__ = 0, 
                _if_conditional3) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_5=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                __freed_obj__ = 0;
                i_6=0;
                __freed_obj__ = 0;
                while(_while_condtional2=it_5!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional2) {
                    if(_if_conditional4=position==i_6,                    __freed_obj__ = 0, 
                    _if_conditional4) {
                        __result11__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value6=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value5=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_5, "./comelang2.h", 742))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
                        if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value5;
                        __freed_obj__ = 0;
                        return __result11__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_5=((struct list_item$1sTypeph*)come_null_check(it_5, "./comelang2.h", 744))->next;
                    __freed_obj__ = 0;
                    i_6++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_13,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result12__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value8=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value7=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_13),(_Bool)0))));
                if(default_value_13 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_13, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { right_value7 = come_decrement_ref_count(right_value7, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value7;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value8);
                if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value8;
                __freed_obj__ = 0;
                return __result12__;
                __freed_obj__ = 0;
                if(default_value_13 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj1;
struct optional$2sTypephbool* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj1=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result10__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result10__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional5=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional5) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional7=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional7) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional8) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional9) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional11) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional13) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional14) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional16) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional17) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional18) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional19) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional20) {
                                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional6=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional6) {
                                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_7;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sTypeph*));
                                        it_7=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional3=it_7!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional3) {
                                            prev_it_8=it_7;
                                            __freed_obj__ = 0;
                                            it_7=((struct list_item$1sTypeph*)come_null_check(it_7, "./comelang2.h", 172))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional10=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional10) {
                                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_9;
_Bool _while_condtional4;
struct list_item$1sNodeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sNodeph*));
                                        it_9=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional4=it_9!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional4) {
                                            prev_it_10=it_9;
                                            __freed_obj__ = 0;
                                            it_9=((struct list_item$1sNodeph*)come_null_check(it_9, "./comelang2.h", 172))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_10 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional12=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional12) {
                                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_11;
_Bool _while_condtional5;
struct list_item$1charph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1charph*));
                                        it_11=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional5=it_11!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional5) {
                                            prev_it_12=it_11;
                                            __freed_obj__ = 0;
                                            it_11=((struct list_item$1charph*)come_null_check(it_11, "./comelang2.h", 172))->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional15=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional15) {
                                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional21=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional21) {
                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
struct sType* default_value_14;
struct sType* __result13__;
struct sType* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_14, 0, sizeof(struct sType*));
                if(_if_conditional22=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    __freed_obj__ = 0;
                    memset(&default_value_14,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result13__ = __result_obj__ = default_value_14;
                    __freed_obj__ = 0;
                    return __result13__;
                    __freed_obj__ = 0;
                }
                else {
                    __result14__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

void output_struct(struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
void* right_value12;
void* right_value13;
struct buffer* buf_18;
void* right_value14;
struct list$1tuple2$2charphsTypephph* o2_saved_19;
struct tuple2$2charphsTypeph* it_22;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_25;
struct sType* type_26;
void* right_value15;
_Bool _if_conditional34;
void* right_value16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&buf_18, 0, sizeof(struct buffer*));
memset(&right_value14, 0, sizeof(void*));
memset(&o2_saved_19, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_22, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_25, 0, sizeof(char*));
memset(&type_26, 0, sizeof(struct sType*));
memset(&name_25, 0, sizeof(char*));
memset(&type_26, 0, sizeof(struct sType*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value16, 0, sizeof(void*));
    if(_if_conditional24=!((struct sClass*)come_null_check(klass, "14struct.c", 86))->mOutputed,    __freed_obj__ = 0, 
    _if_conditional24) {
        ((struct sClass*)come_null_check(klass, "14struct.c", 59))->mOutputed=(_Bool)1;
        __freed_obj__ = 0;
        buf_18=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "14struct.c", 61))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
        if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value12;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value13;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_18, "14struct.c", 64)),((char*)(right_value14=xsprintf("struct %s\n{\n",((struct sClass*)come_null_check(klass, "14struct.c", 64))->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
        if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value14;
        __freed_obj__ = 0;
        for(
        o2_saved_19=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass, "14struct.c", 77))->mFields)),it_22=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_19), "14struct.c", 77))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_19), "14struct.c", 77))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        it_22=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_19), "14struct.c", 77))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var1=it_22;
            name_25=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
            type_26=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_26, "14struct.c", 70))->mStatic=(_Bool)0;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_18, "14struct.c", 72)),"    ");
            __freed_obj__ = 0;
            come_clear_stackframe();
            buffer_append_str(((struct buffer*)come_null_check(buf_18, "14struct.c", 73)),optional$2charphbool_expect((come_push_stackframe("14struct.c", 73),((struct optional$2charphbool*)(right_value15=make_define_var(type_26,name_25,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_18, "14struct.c", 74)),";\n");
            __freed_obj__ = 0;
            if(name_25 && !__freed_obj__) { name_25 = come_decrement_ref_count(name_25, (void*)0, (void*)0, 0, 0, 0); }
            if(type_26 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_26, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_19 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_19, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_18, "14struct.c", 77)),"};\n");
        __freed_obj__ = 0;
        if(_if_conditional34=((struct sInfo*)come_null_check(info, "14struct.c", 85))->output_header_file&&string_operator_not_equals(((struct sClass*)come_null_check(klass, "14struct.c", 85))->mDeclareSName,((struct sInfo*)come_null_check(info, "14struct.c", 85))->base_sname),        __freed_obj__ = 0, 
        _if_conditional34) {
        }
        else {
            add_come_code_at_source_head(info,"%s",((char*)(right_value16=buffer_to_string(((struct buffer*)come_null_check(buf_18, "14struct.c", 82))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value16;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(buf_18 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_18, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
struct tuple2$2charphsTypeph* result_20;
struct tuple2$2charphsTypeph* __result16__;
_Bool _if_conditional26;
struct tuple2$2charphsTypeph* __result17__;
struct tuple2$2charphsTypeph* result_21;
struct tuple2$2charphsTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_21, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional25=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional25) {
                __freed_obj__ = 0;
                memset(&result_20,0,sizeof(struct tuple2$2charphsTypeph*));
                __freed_obj__ = 0;
                __result16__ = __result_obj__ = result_20;
                __freed_obj__ = 0;
                return __result16__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 336))->head;
            __freed_obj__ = 0;
            if(_if_conditional26=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional26) {
                __result17__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                __freed_obj__ = 0;
                return __result17__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_21,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result18__ = __result_obj__ = result_21;
            __freed_obj__ = 0;
            return __result18__;
            __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result19__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
            __freed_obj__ = 0;
            return __result19__;
            __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
struct tuple2$2charphsTypeph* result_23;
struct tuple2$2charphsTypeph* __result20__;
_Bool _if_conditional28;
struct tuple2$2charphsTypeph* __result21__;
struct tuple2$2charphsTypeph* result_24;
struct tuple2$2charphsTypeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_23, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_24, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional27=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional27) {
                __freed_obj__ = 0;
                memset(&result_23,0,sizeof(struct tuple2$2charphsTypeph*));
                __freed_obj__ = 0;
                __result20__ = __result_obj__ = result_23;
                __freed_obj__ = 0;
                return __result20__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
            __freed_obj__ = 0;
            if(_if_conditional28=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional28) {
                __result21__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                __freed_obj__ = 0;
                return __result21__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_24,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result22__ = __result_obj__ = result_24;
            __freed_obj__ = 0;
            return __result22__;
            __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
char* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional29=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                __freed_obj__ = 0, 
                _if_conditional29) {
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
                __result23__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                __freed_obj__ = 0;
                return __result23__;
                __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional30=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_27;
_Bool _while_condtional6;
struct list_item$1tuple2$2charphsTypephph* prev_it_28;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_28, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
            it_27=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
            __freed_obj__ = 0;
            while(_while_condtional6=it_27!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional6) {
                prev_it_28=it_27;
                __freed_obj__ = 0;
                it_27=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_27, "./comelang2.h", 172))->next;
                __freed_obj__ = 0;
                if(prev_it_28 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_28, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional31=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional31) {
                        if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
_Bool _if_conditional33;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional32=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional33=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional33) {
                                if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

_Bool is_no_contained_generics_types(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_29;
_Bool _if_conditional35;
_Bool __result24__;
int i_30;
_Bool _for_condtionalA4;
void* right_value17;
_Bool result_31;
_Bool _if_conditional36;
_Bool __result25__;
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_29, 0, sizeof(struct sClass*));
memset(&i_30, 0, sizeof(int));
memset(&right_value17, 0, sizeof(void*));
memset(&result_31, 0, sizeof(_Bool));
    klass_29=((struct sType*)come_null_check(type, "14struct.c", 90))->mClass;
    __freed_obj__ = 0;
    if(_if_conditional35=((struct sClass*)come_null_check(klass_29, "14struct.c", 95))->mGenerics,    __freed_obj__ = 0, 
    _if_conditional35) {
        __result24__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result24__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    i_30=0 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA4=    i_30<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 103))->mGenericsTypes, "14struct.c", 103))) ,    __freed_obj__ = 0, 
    _for_condtionalA4;    i_30++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        result_31=is_no_contained_generics_types(optional$2sTypephbool_value((come_push_stackframe("14struct.c", 96),((struct optional$2sTypephbool*)(right_value17=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(type, "14struct.c", 96))->mGenericsTypes,i_30))))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
        if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value17;
        __freed_obj__ = 0;
        if(_if_conditional36=!result_31,        __freed_obj__ = 0, 
        _if_conditional36) {
            __result25__ = (_Bool)0;
            __freed_obj__ = 0;
            return __result25__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result26__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result26__;
    __freed_obj__ = 0;
}

_Bool output_generics_struct(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value18;
char* new_name_32;
_Bool _if_conditional42;
void* right_value54;
struct sType* type2_54;
void* right_value64;
struct sClass* generics_class_59;
_Bool _if_conditional118;
_Bool __result58__;
void* right_value65;
void* right_value66;
struct sClass* new_class_60;
void* right_value79;
int i_105;
struct list$1tuple2$2charphsTypephph* o2_saved_106;
struct tuple2$2charphsTypeph* it_107;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* name_108;
struct sType* type_109;
void* right_value80;
struct sType* new_type_110;
void* right_value84;
void* right_value85;
void* right_value86;
void* right_value89;
void* right_value90;
struct sType* __dec_obj29;
_Bool _if_conditional173;
void* right_value91;
struct sClass* generics_class_116;
_Bool _if_conditional174;
_Bool __result86__;
void* right_value92;
void* right_value93;
struct sClass* new_class_117;
void* right_value94;
int i_118;
struct list$1tuple2$2charphsTypephph* o2_saved_119;
struct tuple2$2charphsTypeph* it_120;
_Bool _for_condtionalA8;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_121;
struct sType* type_122;
void* right_value95;
struct sType* new_type_123;
void* right_value96;
void* right_value97;
void* right_value98;
void* right_value99;
void* right_value100;
struct sType* __dec_obj30;
_Bool _if_conditional175;
void* right_value101;
struct sType* __dec_obj31;
void* right_value102;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&new_name_32, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&type2_54, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
memset(&generics_class_59, 0, sizeof(struct sClass*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&new_class_60, 0, sizeof(struct sClass*));
memset(&right_value79, 0, sizeof(void*));
memset(&i_105, 0, sizeof(int));
memset(&o2_saved_106, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_107, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_108, 0, sizeof(char*));
memset(&type_109, 0, sizeof(struct sType*));
memset(&name_108, 0, sizeof(char*));
memset(&type_109, 0, sizeof(struct sType*));
memset(&right_value80, 0, sizeof(void*));
memset(&new_type_110, 0, sizeof(struct sType*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&generics_class_116, 0, sizeof(struct sClass*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&new_class_117, 0, sizeof(struct sClass*));
memset(&right_value94, 0, sizeof(void*));
memset(&i_118, 0, sizeof(int));
memset(&o2_saved_119, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_120, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_121, 0, sizeof(char*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&name_121, 0, sizeof(char*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&right_value95, 0, sizeof(void*));
memset(&new_type_123, 0, sizeof(struct sType*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
    new_name_32=(char*)come_increment_ref_count(((char*)(right_value18=create_generics_name(type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18;
    __freed_obj__ = 0;
    if(_if_conditional42=is_no_contained_generics_types(type,info)&&!map$2charphsClassph_find(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 177))->classes, "14struct.c", 177)),new_name_32),    __freed_obj__ = 0, 
    _if_conditional42) {
        type2_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value54=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value54;
        __freed_obj__ = 0;
        come_clear_stackframe();
        generics_class_59=optional$2sClasspbool_value((come_push_stackframe("14struct.c", 113),((struct optional$2sClasspbool*)(right_value64=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "14struct.c", 113))->generics_classes,((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 113))->mClass, "14struct.c", 113))->mName)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value64;
        __freed_obj__ = 0;
        if(_if_conditional118=generics_class_59==((void*)0),        __freed_obj__ = 0, 
        _if_conditional118) {
            err_msg(info,"generics_class(%s) is null",((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 116))->mClass, "14struct.c", 116))->mName);
            __freed_obj__ = 0;
            __result58__ = (_Bool)0;
            if(type2_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_54, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_name_32 && !__freed_obj__) { new_name_32 = come_decrement_ref_count(new_name_32, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result58__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        new_class_60=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value66=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value65=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 120)))),new_name_32,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value65;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value66;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 122))->classes, "14struct.c", 122)),(char*)come_increment_ref_count(((char*)(right_value79=__builtin_string(new_name_32)))),(struct sClass*)come_increment_ref_count(new_class_60));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value79;
        __freed_obj__ = 0;
        i_105=0;
        __freed_obj__ = 0;
        for(
        o2_saved_106=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(generics_class_59, "14struct.c", 133))->mFields)),it_107=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_106), "14struct.c", 133))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_106), "14struct.c", 133))) ,        __freed_obj__ = 0, 
        _for_condtionalA7;        it_107=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_106), "14struct.c", 133))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=it_107;
            name_108=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            type_109=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            new_type_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=solve_generics(type_109,type2_54,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value80;
            __freed_obj__ = 0;
            list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(new_class_60, "14struct.c", 130))->mFields, "14struct.c", 130)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value89=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value86=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 130)))),(char*)come_increment_ref_count(((char*)(right_value84=string_clone(name_108)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(new_type_110)))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value84;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value85);
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value85;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value86;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value89);
            if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value89;
            __freed_obj__ = 0;
            if(name_108 && !__freed_obj__) { name_108 = come_decrement_ref_count(name_108, (void*)0, (void*)0, 0, 0, 0); }
            if(type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(new_type_110 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_106 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj29=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 133))->mNoSolvedGenericsType, "14struct.c", 133))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 133))->mNoSolvedGenericsType, "14struct.c", 133))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(type))));
        if(__dec_obj29) { come_call_finalizer(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value90;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 134))->mNoSolvedGenericsType, "14struct.c", 134))->v1, "14struct.c", 134))->mPointerNum=((struct sType*)come_null_check(type, "14struct.c", 134))->mPointerNum;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type, "14struct.c", 135))->mClass=new_class_60;
        __freed_obj__ = 0;
        list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 136))->mGenericsTypes, "14struct.c", 136)));
        __freed_obj__ = 0;
        output_struct(new_class_60,info);
        __freed_obj__ = 0;
        if(type2_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_54, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_class_60 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional173=!map$2charphsClassph_find(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 177))->classes, "14struct.c", 177)),new_name_32),        __freed_obj__ = 0, 
        _if_conditional173) {
            come_clear_stackframe();
            generics_class_116=optional$2sClasspbool_value((come_push_stackframe("14struct.c", 141),((struct optional$2sClasspbool*)(right_value91=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "14struct.c", 141))->generics_classes,((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 141))->mClass, "14struct.c", 141))->mName)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value91;
            __freed_obj__ = 0;
            if(_if_conditional174=generics_class_116==((void*)0),            __freed_obj__ = 0, 
            _if_conditional174) {
                err_msg(info,"generics_class(%s) is null",((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 144))->mClass, "14struct.c", 144))->mName);
                __freed_obj__ = 0;
                __result86__ = (_Bool)0;
                if(new_name_32 && !__freed_obj__) { new_name_32 = come_decrement_ref_count(new_name_32, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result86__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            new_class_117=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value93=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value92=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 148)))),new_name_32,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value92;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value93);
            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value93;
            __freed_obj__ = 0;
            map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 150))->classes, "14struct.c", 150)),(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(new_name_32)))),(struct sClass*)come_increment_ref_count(new_class_117));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value94;
            __freed_obj__ = 0;
            i_118=0;
            __freed_obj__ = 0;
            for(
            o2_saved_119=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(generics_class_116, "14struct.c", 161))->mFields)),it_120=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_119), "14struct.c", 161))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA8=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_119), "14struct.c", 161))) ,            __freed_obj__ = 0, 
            _for_condtionalA8;            it_120=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_119), "14struct.c", 161))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var3=it_120;
                name_121=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                type_122=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = 0;
                new_type_123=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=solve_generics(type_122,generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value95;
                __freed_obj__ = 0;
                list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(new_class_117, "14struct.c", 158))->mFields, "14struct.c", 158)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value99=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value98=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 158)))),(char*)come_increment_ref_count(((char*)(right_value96=string_clone(name_121)))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value97=sType_clone(new_type_123)))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value96;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value97;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value98;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value99;
                __freed_obj__ = 0;
                if(name_121 && !__freed_obj__) { name_121 = come_decrement_ref_count(name_121, (void*)0, (void*)0, 0, 0, 0); }
                if(type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(new_type_123 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_type_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_119 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_119, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj30=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 161))->mNoSolvedGenericsType, "14struct.c", 161))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 161))->mNoSolvedGenericsType, "14struct.c", 161))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(type))));
            if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value100;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 162))->mNoSolvedGenericsType, "14struct.c", 162))->v1, "14struct.c", 162))->mPointerNum=((struct sType*)come_null_check(type, "14struct.c", 162))->mPointerNum;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type, "14struct.c", 163))->mClass=new_class_117;
            __freed_obj__ = 0;
            list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 164))->mGenericsTypes, "14struct.c", 164)));
            __freed_obj__ = 0;
            output_struct(new_class_117,info);
            __freed_obj__ = 0;
            if(new_class_117 && !__freed_obj__) { come_call_finalizer(sClass_finalize,new_class_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional175=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 173))->mNoSolvedGenericsType, "14struct.c", 173))->v1==((void*)0),            __freed_obj__ = 0, 
            _if_conditional175) {
                __dec_obj31=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 170))->mNoSolvedGenericsType, "14struct.c", 170))->v1;
                ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 170))->mNoSolvedGenericsType, "14struct.c", 170))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(type))));
                if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value101;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 171))->mNoSolvedGenericsType, "14struct.c", 171))->v1, "14struct.c", 171))->mPointerNum=((struct sType*)come_null_check(type, "14struct.c", 171))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            ((struct sType*)come_null_check(type, "14struct.c", 173))->mClass=optional$2sClasspbool_value((come_push_stackframe("14struct.c", 173),((struct optional$2sClasspbool*)(right_value102=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "14struct.c", 173))->classes,new_name_32)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value102;
            __freed_obj__ = 0;
            list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "14struct.c", 174))->mGenericsTypes, "14struct.c", 174)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result87__ = (_Bool)1;
    if(new_name_32 && !__freed_obj__) { new_name_32 = come_decrement_ref_count(new_name_32, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(new_name_32 && !__freed_obj__) { new_name_32 = come_decrement_ref_count(new_name_32, (void*)0, (void*)0, 0, 0, 0); }
}

static _Bool map$2charphsClassph_find(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_33;
int it_34;
_Bool _while_condtional7;
_Bool _if_conditional37;
void* right_value19;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional39;
_Bool __result29__;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool __result30__;
_Bool __result31__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(int));
memset(&right_value19, 0, sizeof(void*));
        hash_33=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1661)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1661))->size;
        __freed_obj__ = 0;
        it_34=hash_33;
        __freed_obj__ = 0;
        while(_while_condtional7=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional7) {
            if(_if_conditional37=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1684))->item_existance[it_34],            __freed_obj__ = 0, 
            _if_conditional37) {
                if(_if_conditional39=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1672),__exception_result_var_a1=((struct optional$2boolbool*)(right_value19=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1672))->keys[it_34], "./comelang2.h", 1672)),key))), come_pop_stackframe(), __exception_result_var_a1)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19),
                (right_value19 && right_value19 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value19, 
                __freed_obj__ = 0, 
                _if_conditional39) {
                    __result29__ = (_Bool)1;
                    __freed_obj__ = 0;
                    return __result29__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_34++;
                __freed_obj__ = 0;
                if(_if_conditional40=it_34>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1680))->size,                __freed_obj__ = 0, 
                _if_conditional40) {
                    it_34=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional41=it_34==hash_33,                    __freed_obj__ = 0, 
                    _if_conditional41) {
                        __result30__ = (_Bool)0;
                        __freed_obj__ = 0;
                        return __result30__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result31__ = (_Bool)0;
                __freed_obj__ = 0;
                return __result31__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result32__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result32__;
        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
_Bool default_value_35;
_Bool __result27__;
_Bool __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_35, 0, sizeof(_Bool));
                    if(_if_conditional38=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional38) {
                        __freed_obj__ = 0;
                        memset(&default_value_35,0,sizeof(_Bool));
                        __freed_obj__ = 0;
                        __result27__ = default_value_35;
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result28__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result28__;
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional43;
struct sType* __result33__;
void* right_value20;
struct sType* result_36;
_Bool _if_conditional44;
_Bool _if_conditional45;
void* right_value23;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional49;
void* right_value24;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional50;
void* right_value25;
char* __dec_obj5;
_Bool _if_conditional51;
void* right_value32;
struct list$1sTypeph* __dec_obj9;
_Bool _if_conditional55;
void* right_value40;
struct list$1sNodeph* __dec_obj13;
_Bool _if_conditional68;
_Bool _if_conditional69;
void* right_value41;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional70;
void* right_value48;
struct list$1charph* __dec_obj18;
_Bool _if_conditional74;
void* right_value49;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional75;
_Bool _if_conditional76;
void* right_value50;
struct sNode* __dec_obj20;
_Bool _if_conditional77;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
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
void* right_value51;
struct sNode* __dec_obj21;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value52;
char* __dec_obj22;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value53;
char* __dec_obj23;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct sType*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
            if(_if_conditional43=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional43) {
                __result33__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result33__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_36=(struct sType*)come_increment_ref_count(((struct sType*)(right_value20=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
            if(_if_conditional44=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional44) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional45) {
                __dec_obj3=((struct sType*)come_null_check(result_36, "sType_clone", 5))->mNoSolvedGenericsType;
                ((struct sType*)come_null_check(result_36, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value23=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional49) {
                __dec_obj4=((struct sType*)come_null_check(result_36, "sType_clone", 6))->mOriginalLoadVarType;
                ((struct sType*)come_null_check(result_36, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value24;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional50) {
                __dec_obj5=((struct sType*)come_null_check(result_36, "sType_clone", 7))->mGenericsName;
                ((struct sType*)come_null_check(result_36, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value25=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional51) {
                __dec_obj9=((struct sType*)come_null_check(result_36, "sType_clone", 8))->mGenericsTypes;
                ((struct sType*)come_null_check(result_36, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value32=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                if(__dec_obj9) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                __dec_obj13=((struct sType*)come_null_check(result_36, "sType_clone", 9))->mArrayNum;
                ((struct sType*)come_null_check(result_36, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value40=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                if(__dec_obj13) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value40;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                __dec_obj14=((struct sType*)come_null_check(result_36, "sType_clone", 11))->mParamTypes;
                ((struct sType*)come_null_check(result_36, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value41=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value41;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                __dec_obj18=((struct sType*)come_null_check(result_36, "sType_clone", 12))->mParamNames;
                ((struct sType*)come_null_check(result_36, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value48=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                if(__dec_obj18) { come_call_finalizer(list$1charph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value48;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                __dec_obj19=((struct sType*)come_null_check(result_36, "sType_clone", 13))->mResultType;
                ((struct sType*)come_null_check(result_36, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value49=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value49;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                __dec_obj20=((struct sType*)come_null_check(result_36, "sType_clone", 15))->mAlignas;
                ((struct sType*)come_null_check(result_36, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value50=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, ((struct sNode*)right_value50)->finalize, ((struct sNode*)right_value50)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value50;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional88=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional88) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional89=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional90=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional92=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional93=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional93) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional94=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional95=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional98=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional99=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                __dec_obj21=((struct sType*)come_null_check(result_36, "sType_clone", 39))->mSizeNum;
                ((struct sType*)come_null_check(result_36, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value51=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, ((struct sNode*)right_value51)->finalize, ((struct sNode*)right_value51)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value51;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                __dec_obj22=((struct sType*)come_null_check(result_36, "sType_clone", 42))->mOriginalTypeName;
                ((struct sType*)come_null_check(result_36, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value52;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional104=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional104) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional105=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional105) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional106) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional107=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional107) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional108=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional108) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional109=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional109) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional110=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional110) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional111=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional111) {
                ((struct sType*)come_null_check(result_36, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional112=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional112) {
                __dec_obj23=((struct sType*)come_null_check(result_36, "sType_clone", 51))->mAsmName;
                ((struct sType*)come_null_check(result_36, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value53=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result50__ = __result_obj__ = result_36;
            if(result_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result50__;
            __freed_obj__ = 0;
            if(result_36 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_36, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct tuple1$1sTypeph* __result34__;
void* right_value21;
struct tuple1$1sTypeph* result_37;
_Bool _if_conditional48;
void* right_value22;
struct sType* __dec_obj2;
struct tuple1$1sTypeph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_37, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value22, 0, sizeof(void*));
                    if(_if_conditional46=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional46) {
                        __result34__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_37=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
                    __freed_obj__ = 0;
                    if(_if_conditional48=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional48) {
                        __dec_obj2=((struct tuple1$1sTypeph*)come_null_check(result_37, "tuple1$1sTypephp_clone", 4))->v1;
                        ((struct tuple1$1sTypeph*)come_null_check(result_37, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value22=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                        if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result35__ = __result_obj__ = result_37;
                    if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result35__;
                    __freed_obj__ = 0;
                    if(result_37 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional47=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional47) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
struct list$1sTypeph* __result36__;
void* right_value26;
void* right_value27;
struct list$1sTypeph* result_38;
struct list_item$1sTypeph* it_39;
_Bool _while_condtional8;
void* right_value31;
struct list$1sTypeph* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&result_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value31, 0, sizeof(void*));
                    if(_if_conditional52=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional52) {
                        __result36__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result36__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_38=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value27=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value26=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value26;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value27;
                    __freed_obj__ = 0;
                    it_39=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional8=it_39!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional8) {
                        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_38, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value31=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value31;
                        __freed_obj__ = 0;
                        it_39=((struct list_item$1sTypeph*)come_null_check(it_39, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result39__ = __result_obj__ = result_38;
                    if(result_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result39__;
                    __freed_obj__ = 0;
                    if(result_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_38, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result37__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result37__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional53;
void* right_value28;
struct list_item$1sTypeph* litem_40;
struct sType* __dec_obj6;
_Bool _if_conditional54;
void* right_value29;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj7;
void* right_value30;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj8;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional53=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional53) {
                                litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value28=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value28;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 206))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_40;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_40;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional54=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional54) {
                                    litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value29=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value29;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_41;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_41;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value30=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value30;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_42;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_42;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result38__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result38__;
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
_Bool _if_conditional56;
struct list$1sNodeph* __result40__;
void* right_value33;
void* right_value34;
struct list$1sNodeph* result_43;
struct list_item$1sNodeph* it_44;
_Bool _while_condtional9;
void* right_value39;
struct list$1sNodeph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&result_43, 0, sizeof(struct list$1sNodeph*));
memset(&it_44, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value39, 0, sizeof(void*));
                    if(_if_conditional56=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional56) {
                        __result40__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result40__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_43=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value34=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value33=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value34);
                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value34;
                    __freed_obj__ = 0;
                    it_44=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional9=it_44!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional9) {
                        list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_43, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value39=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_44, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, ((struct sNode*)right_value39)->finalize, ((struct sNode*)right_value39)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value39;
                        __freed_obj__ = 0;
                        it_44=((struct list_item$1sNodeph*)come_null_check(it_44, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result45__ = __result_obj__ = result_43;
                    if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result45__;
                    __freed_obj__ = 0;
                    if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result41__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result41__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
void* right_value35;
struct list_item$1sNodeph* litem_45;
struct sNode* __dec_obj10;
_Bool _if_conditional58;
void* right_value36;
struct list_item$1sNodeph* litem_46;
struct sNode* __dec_obj11;
void* right_value37;
struct list_item$1sNodeph* litem_47;
struct sNode* __dec_obj12;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_45, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_46, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value37, 0, sizeof(void*));
memset(&litem_47, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional57=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional57) {
                                litem_45=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value35=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 206))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_45, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_45;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_45;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional58=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional58) {
                                    litem_46=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value36=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value36;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 216))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_46, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_46;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_46;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_47=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value37=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value37;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 226))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_47, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_47;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_47;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result42__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result42__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct sNode* __result43__;
void* right_value38;
struct sNode* result_48;
_Bool _if_conditional60;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
_Bool _if_conditional67;
struct sNode* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&result_48, 0, sizeof(struct sNode*));
                            if(_if_conditional59=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional59) {
                                __result43__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result43__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_48=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, ((struct sNode*)right_value38)->finalize, ((struct sNode*)right_value38)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value38;
                            __freed_obj__ = 0;
                            if(_if_conditional60=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional60) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional61=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional61) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional62=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional62) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional63=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional63) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional64=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional64) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional65=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional65) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional66=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional66) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional67=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional67) {
                                ((struct sNode*)come_null_check(result_48, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result44__ = __result_obj__ = result_48;
                            if(result_48 && !__freed_obj__) { result_48 = come_decrement_ref_count(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result44__;
                            __freed_obj__ = 0;
                            if(result_48 && !__freed_obj__) { result_48 = come_decrement_ref_count(result_48, ((struct sNode*)result_48)->finalize, ((struct sNode*)result_48)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional71;
struct list$1charph* __result46__;
void* right_value42;
void* right_value43;
struct list$1charph* result_49;
struct list_item$1charph* it_50;
_Bool _while_condtional10;
void* right_value47;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&result_49, 0, sizeof(struct list$1charph*));
memset(&it_50, 0, sizeof(struct list_item$1charph*));
memset(&right_value47, 0, sizeof(void*));
                    if(_if_conditional71=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional71) {
                        __result46__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result46__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_49=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value43=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value42=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value42;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value43);
                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value43;
                    __freed_obj__ = 0;
                    it_50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional10=it_50!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        list$1charph_add(((struct list$1charph*)come_null_check(result_49, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value47=string_clone(((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 192))->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value47;
                        __freed_obj__ = 0;
                        it_50=((struct list_item$1charph*)come_null_check(it_50, "./comelang2.h", 194))->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result49__ = __result_obj__ = result_49;
                    if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result49__;
                    __freed_obj__ = 0;
                    if(result_49 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_49, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                        __freed_obj__ = 0;
                        __result47__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result47__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional72;
void* right_value44;
struct list_item$1charph* litem_51;
char* __dec_obj15;
_Bool _if_conditional73;
void* right_value45;
struct list_item$1charph* litem_52;
char* __dec_obj16;
void* right_value46;
struct list_item$1charph* litem_53;
char* __dec_obj17;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
memset(&right_value45, 0, sizeof(void*));
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
memset(&right_value46, 0, sizeof(void*));
memset(&litem_53, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional72=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                            __freed_obj__ = 0, 
                            _if_conditional72) {
                                litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value44=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value44;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 204))->prev=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 205))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 206))->item;
                                ((struct list_item$1charph*)come_null_check(litem_51, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_51;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_51;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional73=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                __freed_obj__ = 0, 
                                _if_conditional73) {
                                    litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value45=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value45;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 215))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj16=((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 216))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_52, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_52;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_52;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_53=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value46=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value46;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 225))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj17=((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 226))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_53, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_53;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_53;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                            __freed_obj__ = 0;
                            __result48__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result48__;
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

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_55;
unsigned int hash_56;
unsigned int it_57;
_Bool _while_condtional11;
_Bool _if_conditional113;
void* right_value55;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional114;
void* right_value56;
void* right_value57;
struct optional$2sClasspbool* __result52__;
_Bool _if_conditional115;
_Bool _if_conditional116;
void* right_value58;
void* right_value59;
struct optional$2sClasspbool* __result53__;
void* right_value60;
void* right_value61;
struct optional$2sClasspbool* __result54__;
void* right_value62;
void* right_value63;
struct optional$2sClasspbool* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_55, 0, sizeof(struct sClass*));
memset(&hash_56, 0, sizeof(unsigned int));
memset(&it_57, 0, sizeof(unsigned int));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_55,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            hash_56=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1584))->size;
            __freed_obj__ = 0;
            it_57=hash_56;
            __freed_obj__ = 0;
            while(_while_condtional11=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional11) {
                if(_if_conditional113=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_57],                __freed_obj__ = 0, 
                _if_conditional113) {
                    if(_if_conditional114=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value55=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_57], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55),
                    (right_value55 && right_value55 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value55, 
                    __freed_obj__ = 0, 
                    _if_conditional114) {
                        __result52__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value57=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value56=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1592))->items[it_57],(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                        if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value56;
                        __freed_obj__ = 0;
                        return __result52__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_57++;
                    __freed_obj__ = 0;
                    if(_if_conditional115=it_57>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1603))->size,                    __freed_obj__ = 0, 
                    _if_conditional115) {
                        it_57=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional116=it_57==hash_56,                        __freed_obj__ = 0, 
                        _if_conditional116) {
                            __result53__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sClasspbool*)(right_value59=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value58=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1601))),default_value_55,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value58;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
                            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value59;
                            __freed_obj__ = 0;
                            return __result53__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result54__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sClasspbool*)(right_value61=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value60=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1605))),default_value_55,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value61;
                    __freed_obj__ = 0;
                    return __result54__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result55__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value63=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value62=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_55,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value63;
            __freed_obj__ = 0;
            return __result55__;
            __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result51__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result51__;
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
_Bool _if_conditional117;
struct sClass* default_value_58;
struct sClass* __result56__;
struct sClass* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_58, 0, sizeof(struct sClass*));
            if(_if_conditional117=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional117) {
                __freed_obj__ = 0;
                memset(&default_value_58,0,sizeof(struct sClass*));
                __freed_obj__ = 0;
                __result56__ = __result_obj__ = default_value_58;
                __freed_obj__ = 0;
                return __result56__;
                __freed_obj__ = 0;
            }
            else {
                __result57__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result57__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional119=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional120=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional120) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional121=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
unsigned int hash_78;
unsigned int it_79;
_Bool _while_condtional14;
_Bool _if_conditional134;
void* right_value73;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool same_key_exist_96;
char* it2_99;
_Bool _for_condtionalA6;
void* right_value75;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct map$2charphsClassph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_78, 0, sizeof(unsigned int));
memset(&it_79, 0, sizeof(unsigned int));
memset(&right_value73, 0, sizeof(void*));
memset(&same_key_exist_96, 0, sizeof(_Bool));
memset(&it2_99, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
            if(_if_conditional122=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size,            __freed_obj__ = 0, 
            _if_conditional122) {
                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1422)));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            hash_78=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1424))->size;
            __freed_obj__ = 0;
            it_79=hash_78;
            __freed_obj__ = 0;
            while(_while_condtional14=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional14) {
                if(_if_conditional134=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_79],                __freed_obj__ = 0, 
                _if_conditional134) {
                    if(_if_conditional135=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a3=((struct optional$2boolbool*)(right_value73=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_79], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a3)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73),
                    (right_value73 && right_value73 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value73, 
                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        if(_if_conditional136=1,                        __freed_obj__ = 0, 
                        _if_conditional136) {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_79]);
                            __freed_obj__ = 0;
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_79] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_79] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_79], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_79]=(char*)come_increment_ref_count(key);
                            __freed_obj__ = 0;
                        }
                        else {
                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_79]);
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_79]=key;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional156=1,                        __freed_obj__ = 0, 
                        _if_conditional156) {
                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_79] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_79], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1443))->items[it_79]=(struct sClass*)come_increment_ref_count(item);
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1446))->items[it_79]=item;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_79++;
                    __freed_obj__ = 0;
                    if(_if_conditional157=it_79>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->size,                    __freed_obj__ = 0, 
                    _if_conditional157) {
                        it_79=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional158=it_79==hash_78,                        __freed_obj__ = 0, 
                        _if_conditional158) {
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_79]=(_Bool)1;
                    __freed_obj__ = 0;
                    if(_if_conditional159=1,                    __freed_obj__ = 0, 
                    _if_conditional159) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_79]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_79]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional160=1,                    __freed_obj__ = 0, 
                    _if_conditional160) {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1470))->items[it_79]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1473))->items[it_79]=item;
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
            same_key_exist_96=(_Bool)0;
            __freed_obj__ = 0;
            for(
            it2_99=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA6=            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            _for_condtionalA6;            it2_99=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional165=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a5=((struct optional$2boolbool*)(right_value75=string_equals(((char*)come_null_check(it2_99, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a5)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75),
                (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value75, 
                __freed_obj__ = 0, 
                _if_conditional165) {
                    same_key_exist_96=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional166=!same_key_exist_96,            __freed_obj__ = 0, 
            _if_conditional166) {
                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result82__ = __result_obj__ = self;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result82__;
            __freed_obj__ = 0;
            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_61;
void* right_value67;
char** keys_62;
void* right_value68;
struct sClass** items_63;
void* right_value69;
_Bool* item_existance_64;
int len_65;
char* it_68;
_Bool _for_condtionalA5;
struct sClass* default_value_71;
void* right_value71;
struct sClass* it2_74;
unsigned int hash_75;
int n_76;
_Bool _while_condtional13;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
struct sClass* default_value_77;
void* right_value72;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_61, 0, sizeof(int));
memset(&right_value67, 0, sizeof(void*));
memset(&keys_62, 0, sizeof(char**));
memset(&right_value68, 0, sizeof(void*));
memset(&items_63, 0, sizeof(struct sClass**));
memset(&right_value69, 0, sizeof(void*));
memset(&item_existance_64, 0, sizeof(_Bool*));
memset(&len_65, 0, sizeof(int));
memset(&it_68, 0, sizeof(char*));
memset(&default_value_71, 0, sizeof(struct sClass*));
memset(&right_value71, 0, sizeof(void*));
memset(&it2_74, 0, sizeof(struct sClass*));
memset(&hash_75, 0, sizeof(unsigned int));
memset(&n_76, 0, sizeof(int));
memset(&default_value_77, 0, sizeof(struct sClass*));
memset(&right_value72, 0, sizeof(void*));
                    size_61=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                    __freed_obj__ = 0;
                    keys_62=(char**)come_increment_ref_count(((char**)(right_value67=(char**)come_calloc(1, sizeof(char*)*(1*(size_61)), "./comelang2.h", 1370))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value67;
                    __freed_obj__ = 0;
                    items_63=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value68=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_61)), "./comelang2.h", 1371))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value68;
                    __freed_obj__ = 0;
                    item_existance_64=(_Bool*)come_increment_ref_count(((_Bool*)(right_value69=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_61)), "./comelang2.h", 1372))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
                    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value69;
                    __freed_obj__ = 0;
                    len_65=0;
                    __freed_obj__ = 0;
                    for(
                    it_68=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA5=                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA5;                    it_68=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        __freed_obj__ = 0;
                        memset(&default_value_71,0,sizeof(struct sClass*));
                        __freed_obj__ = 0;
                        it2_74=((struct sClass*)(right_value71=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379)),it_68,default_value_71)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value71;
                        __freed_obj__ = 0;
                        hash_75=string_get_hash_key(((char*)come_null_check(it_68, "./comelang2.h", 1380)))%size_61;
                        __freed_obj__ = 0;
                        n_76=hash_75;
                        __freed_obj__ = 0;
                        while(_while_condtional13=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional13) {
                            if(_if_conditional131=item_existance_64[n_76],                            __freed_obj__ = 0, 
                            _if_conditional131) {
                                n_76++;
                                __freed_obj__ = 0;
                                if(_if_conditional132=n_76>=size_61,                                __freed_obj__ = 0, 
                                _if_conditional132) {
                                    n_76=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional133=n_76==hash_75,                                    __freed_obj__ = 0, 
                                    _if_conditional133) {
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
                                item_existance_64[n_76]=(_Bool)1;
                                __freed_obj__ = 0;
                                keys_62[n_76]=it_68;
                                __freed_obj__ = 0;
                                __freed_obj__ = 0;
                                items_63[n_76]=((struct sClass*)(right_value72=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1400)),it_68,default_value_77)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value72;
                                __freed_obj__ = 0;
                                len_65++;
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
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_62;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1413))->items=items_63;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_64;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1416))->size=size_61;
                    __freed_obj__ = 0;
                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1417))->len=len_65;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional123;
char* result_66;
char* __result59__;
_Bool _if_conditional124;
char* __result60__;
char* result_67;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_66, 0, sizeof(char*));
memset(&result_67, 0, sizeof(char*));
                        if(_if_conditional123=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional123) {
                            __freed_obj__ = 0;
                            memset(&result_66,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result59__ = __result_obj__ = result_66;
                            __freed_obj__ = 0;
                            return __result59__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional124=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                        __freed_obj__ = 0, 
                        _if_conditional124) {
                            __result60__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                            __freed_obj__ = 0;
                            return __result60__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_67,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result61__ = __result_obj__ = result_67;
                        __freed_obj__ = 0;
                        return __result61__;
                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result62__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result62__;
                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
char* result_69;
char* __result63__;
_Bool _if_conditional126;
char* __result64__;
char* result_70;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_69, 0, sizeof(char*));
memset(&result_70, 0, sizeof(char*));
                        if(_if_conditional125=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional125) {
                            __freed_obj__ = 0;
                            memset(&result_69,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result63__ = __result_obj__ = result_69;
                            __freed_obj__ = 0;
                            return __result63__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional126=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                        __freed_obj__ = 0, 
                        _if_conditional126) {
                            __result64__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                            __freed_obj__ = 0;
                            return __result64__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_70,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result65__ = __result_obj__ = result_70;
                        __freed_obj__ = 0;
                        return __result65__;
                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_72;
unsigned int it_73;
_Bool _while_condtional12;
_Bool _if_conditional127;
void* right_value70;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional128;
struct sClass* __result66__;
_Bool _if_conditional129;
_Bool _if_conditional130;
struct sClass* __result67__;
struct sClass* __result68__;
struct sClass* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_72, 0, sizeof(unsigned int));
memset(&it_73, 0, sizeof(unsigned int));
memset(&right_value70, 0, sizeof(void*));
                            hash_72=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1258))->size;
                            __freed_obj__ = 0;
                            it_73=hash_72;
                            __freed_obj__ = 0;
                            while(_while_condtional12=(_Bool)1,                            __freed_obj__ = 0, 
                            _while_condtional12) {
                                if(_if_conditional127=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_73],                                __freed_obj__ = 0, 
                                _if_conditional127) {
                                    if(_if_conditional128=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a2=((struct optional$2boolbool*)(right_value70=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_73], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a2)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70),
                                    (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value70, 
                                    __freed_obj__ = 0, 
                                    _if_conditional128) {
                                        __result66__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1266))->items[it_73];
                                        __freed_obj__ = 0;
                                        return __result66__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it_73++;
                                    __freed_obj__ = 0;
                                    if(_if_conditional129=it_73>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1277))->size,                                    __freed_obj__ = 0, 
                                    _if_conditional129) {
                                        it_73=0;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional130=it_73==hash_72,                                        __freed_obj__ = 0, 
                                        _if_conditional130) {
                                            __result67__ = __result_obj__ = default_value;
                                            __freed_obj__ = 0;
                                            return __result67__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __result68__ = __result_obj__ = default_value;
                                    __freed_obj__ = 0;
                                    return __result68__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result69__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result69__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_80;
struct list_item$1charp* it_81;
_Bool _while_condtional15;
void* right_value74;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional137;
struct list$1charp* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_80, 0, sizeof(int));
memset(&it_81, 0, sizeof(struct list_item$1charp*));
memset(&right_value74, 0, sizeof(void*));
                                it2_80=0;
                                __freed_obj__ = 0;
                                it_81=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                __freed_obj__ = 0;
                                while(_while_condtional15=it_81!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional15) {
                                    if(_if_conditional137=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a4=((struct optional$2boolbool*)(right_value74=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_81, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a4)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74),
                                    (right_value74 && right_value74 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value74, 
                                    __freed_obj__ = 0, 
                                    _if_conditional137) {
                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_80,it2_80+1);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    it2_80++;
                                    __freed_obj__ = 0;
                                    it_81=((struct list_item$1charp*)come_null_check(it_81, "./comelang2.h", 500))->next;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result73__ = __result_obj__ = self;
                                __freed_obj__ = 0;
                                return __result73__;
                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
int tmp_82;
_Bool _if_conditional141;
_Bool _if_conditional142;
_Bool _if_conditional143;
struct list$1charp* __result70__;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct list_item$1charp* it_85;
int i_86;
_Bool _while_condtional17;
_Bool _if_conditional146;
struct list_item$1charp* prev_it_87;
_Bool _if_conditional147;
_Bool _if_conditional148;
struct list_item$1charp* it_88;
int i_89;
_Bool _while_condtional18;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct list_item$1charp* prev_it_90;
struct list_item$1charp* it_91;
struct list_item$1charp* head_prev_it_92;
struct list_item$1charp* tail_it_93;
int i_94;
_Bool _while_condtional19;
_Bool _if_conditional151;
_Bool _if_conditional152;
_Bool _if_conditional153;
struct list_item$1charp* prev_it_95;
_Bool _if_conditional154;
_Bool _if_conditional155;
struct list$1charp* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_82, 0, sizeof(int));
memset(&it_85, 0, sizeof(struct list_item$1charp*));
memset(&i_86, 0, sizeof(int));
memset(&prev_it_87, 0, sizeof(struct list_item$1charp*));
memset(&it_88, 0, sizeof(struct list_item$1charp*));
memset(&i_89, 0, sizeof(int));
memset(&prev_it_90, 0, sizeof(struct list_item$1charp*));
memset(&it_91, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_92, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_93, 0, sizeof(struct list_item$1charp*));
memset(&i_94, 0, sizeof(int));
memset(&prev_it_95, 0, sizeof(struct list_item$1charp*));
                                            if(_if_conditional138=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional138) {
                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional139=tail<0,                                            __freed_obj__ = 0, 
                                            _if_conditional139) {
                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional140=head>tail,                                            __freed_obj__ = 0, 
                                            _if_conditional140) {
                                                tmp_82=tail;
                                                __freed_obj__ = 0;
                                                tail=head;
                                                __freed_obj__ = 0;
                                                head=tmp_82;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional141=head<0,                                            __freed_obj__ = 0, 
                                            _if_conditional141) {
                                                head=0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional142=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional142) {
                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional143=head==tail,                                            __freed_obj__ = 0, 
                                            _if_conditional143) {
                                                __result70__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result70__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional144=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                            __freed_obj__ = 0, 
                                            _if_conditional144) {
                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional145=head==0,                                                __freed_obj__ = 0, 
                                                _if_conditional145) {
                                                    it_85=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                    __freed_obj__ = 0;
                                                    i_86=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional17=it_85!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional17) {
                                                        if(_if_conditional146=i_86<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional146) {
                                                            prev_it_87=it_85;
                                                            __freed_obj__ = 0;
                                                            it_85=((struct list_item$1charp*)come_null_check(it_85, "./comelang2.h", 543))->next;
                                                            __freed_obj__ = 0;
                                                            i_86++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional147=i_86==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional147) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_85;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_85=((struct list_item$1charp*)come_null_check(it_85, "./comelang2.h", 556))->next;
                                                                __freed_obj__ = 0;
                                                                i_86++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional148=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                    __freed_obj__ = 0, 
                                                    _if_conditional148) {
                                                        it_88=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                        __freed_obj__ = 0;
                                                        i_89=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional18=it_88!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional18) {
                                                            if(_if_conditional149=i_89==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional149) {
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_88, "./comelang2.h", 566))->prev;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional150=i_89>=head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional150) {
                                                                prev_it_90=it_88;
                                                                __freed_obj__ = 0;
                                                                it_88=((struct list_item$1charp*)come_null_check(it_88, "./comelang2.h", 573))->next;
                                                                __freed_obj__ = 0;
                                                                i_89++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_90 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_88=((struct list_item$1charp*)come_null_check(it_88, "./comelang2.h", 581))->next;
                                                                __freed_obj__ = 0;
                                                                i_89++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        it_91=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                        __freed_obj__ = 0;
                                                        head_prev_it_92=((void*)0);
                                                        __freed_obj__ = 0;
                                                        tail_it_93=((void*)0);
                                                        __freed_obj__ = 0;
                                                        i_94=0;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional19=it_91!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _while_condtional19) {
                                                            if(_if_conditional151=i_94==head,                                                            __freed_obj__ = 0, 
                                                            _if_conditional151) {
                                                                head_prev_it_92=((struct list_item$1charp*)come_null_check(it_91, "./comelang2.h", 596))->prev;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional152=i_94==tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional152) {
                                                                tail_it_93=it_91;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional153=i_94>=head&&i_94<tail,                                                            __freed_obj__ = 0, 
                                                            _if_conditional153) {
                                                                prev_it_95=it_91;
                                                                __freed_obj__ = 0;
                                                                it_91=((struct list_item$1charp*)come_null_check(it_91, "./comelang2.h", 606))->next;
                                                                __freed_obj__ = 0;
                                                                i_94++;
                                                                __freed_obj__ = 0;
                                                                if(prev_it_95 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                it_91=((struct list_item$1charp*)come_null_check(it_91, "./comelang2.h", 614))->next;
                                                                __freed_obj__ = 0;
                                                                i_94++;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional154=head_prev_it_92!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional154) {
                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_92, "./comelang2.h", 620))->next=tail_it_93;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional155=tail_it_93!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional155) {
                                                            ((struct list_item$1charp*)come_null_check(tail_it_93, "./comelang2.h", 623))->prev=head_prev_it_92;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result72__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result72__;
                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_83;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_84;
struct list$1charp* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_83, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_84, 0, sizeof(struct list_item$1charp*));
                                                    it_83=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_83!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        prev_it_84=it_83;
                                                        __freed_obj__ = 0;
                                                        it_83=((struct list_item$1charp*)come_null_check(it_83, "./comelang2.h", 479))->next;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_84 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result71__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result71__;
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
_Bool _if_conditional161;
char* result_97;
char* __result74__;
_Bool _if_conditional162;
char* __result75__;
char* result_98;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_97, 0, sizeof(char*));
memset(&result_98, 0, sizeof(char*));
                if(_if_conditional161=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional161) {
                    __freed_obj__ = 0;
                    memset(&result_97,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result74__ = __result_obj__ = result_97;
                    __freed_obj__ = 0;
                    return __result74__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                __freed_obj__ = 0;
                if(_if_conditional162=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                __freed_obj__ = 0, 
                _if_conditional162) {
                    __result75__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                    __freed_obj__ = 0;
                    return __result75__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_98,0,sizeof(char*));
                __freed_obj__ = 0;
                __result76__ = __result_obj__ = result_98;
                __freed_obj__ = 0;
                return __result76__;
                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result77__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
char* result_100;
char* __result78__;
_Bool _if_conditional164;
char* __result79__;
char* result_101;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_100, 0, sizeof(char*));
memset(&result_101, 0, sizeof(char*));
                if(_if_conditional163=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional163) {
                    __freed_obj__ = 0;
                    memset(&result_100,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result78__ = __result_obj__ = result_100;
                    __freed_obj__ = 0;
                    return __result78__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                __freed_obj__ = 0;
                if(_if_conditional164=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                __freed_obj__ = 0, 
                _if_conditional164) {
                    __result79__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                    __freed_obj__ = 0;
                    return __result79__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&result_101,0,sizeof(char*));
                __freed_obj__ = 0;
                __result80__ = __result_obj__ = result_101;
                __freed_obj__ = 0;
                return __result80__;
                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
void* right_value76;
struct list_item$1charp* litem_102;
_Bool _if_conditional168;
void* right_value77;
struct list_item$1charp* litem_103;
void* right_value78;
struct list_item$1charp* litem_104;
struct list$1charp* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
memset(&litem_102, 0, sizeof(struct list_item$1charp*));
memset(&right_value77, 0, sizeof(void*));
memset(&litem_103, 0, sizeof(struct list_item$1charp*));
memset(&right_value78, 0, sizeof(void*));
memset(&litem_104, 0, sizeof(struct list_item$1charp*));
                    if(_if_conditional167=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional167) {
                        litem_102=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value76=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value76;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_102, "./comelang2.h", 274))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_102, "./comelang2.h", 275))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_102, "./comelang2.h", 276))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_102;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_102;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional168=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional168) {
                            litem_103=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value77=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_103, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_103, "./comelang2.h", 285))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_103, "./comelang2.h", 286))->item=item;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_103;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_103;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_104=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value78=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value78;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_104, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_104, "./comelang2.h", 295))->next=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(litem_104, "./comelang2.h", 296))->item=item;
                            __freed_obj__ = 0;
                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_104;
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_104;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                    __freed_obj__ = 0;
                    __result81__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result81__;
                    __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
void* right_value81;
struct list_item$1tuple2$2charphsTypephph* litem_111;
struct tuple2$2charphsTypeph* __dec_obj24;
_Bool _if_conditional172;
void* right_value82;
struct list_item$1tuple2$2charphsTypephph* litem_112;
struct tuple2$2charphsTypeph* __dec_obj25;
void* right_value83;
struct list_item$1tuple2$2charphsTypephph* litem_113;
struct tuple2$2charphsTypeph* __dec_obj26;
struct list$1tuple2$2charphsTypephph* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_111, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value82, 0, sizeof(void*));
memset(&litem_112, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value83, 0, sizeof(void*));
memset(&litem_113, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                if(_if_conditional169=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==0,                __freed_obj__ = 0, 
                _if_conditional169) {
                    litem_111=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value81=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 272))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value81;
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_111, "./comelang2.h", 274))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_111, "./comelang2.h", 275))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj24=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_111, "./comelang2.h", 276))->item;
                    ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_111, "./comelang2.h", 276))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                    if(__dec_obj24) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_111;
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 279))->head=litem_111;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional172=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional172) {
                        litem_112=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value82=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 282))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value82;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_112, "./comelang2.h", 284))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 284))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_112, "./comelang2.h", 285))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj25=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_112, "./comelang2.h", 286))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_112, "./comelang2.h", 286))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj25) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_112;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_112;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_113=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value83=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 292))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value83;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 294))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 294))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 295))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj26=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 296))->item;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_113, "./comelang2.h", 296))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                        if(__dec_obj26) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_113;
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_113;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 302))->len++;
                __freed_obj__ = 0;
                __result83__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result83__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional170=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional170) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional171=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional171) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value87;
char* __dec_obj27;
void* right_value88;
struct sType* __dec_obj28;
struct tuple2$2charphsTypeph* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
                __dec_obj27=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1;
                ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1804))->v1=(char*)come_increment_ref_count(((char*)(right_value87=string_clone(v1))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = 0;
                __dec_obj28=((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2;
                ((struct tuple2$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1805))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(v2))));
                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value88;
                __freed_obj__ = 0;
                __result84__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_114;
_Bool _while_condtional20;
struct list_item$1sTypeph* prev_it_115;
struct list$1sTypeph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_114, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_115, 0, sizeof(struct list_item$1sTypeph*));
            it_114=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 476))->head;
            __freed_obj__ = 0;
            while(_while_condtional20=it_114!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional20) {
                prev_it_115=it_114;
                __freed_obj__ = 0;
                it_114=((struct list_item$1sTypeph*)come_null_check(it_114, "./comelang2.h", 479))->next;
                __freed_obj__ = 0;
                if(prev_it_115 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_115, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
            __freed_obj__ = 0;
            __result85__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result85__;
            __freed_obj__ = 0;
}

struct sStructNode* sStructNode_initialize(struct sStructNode* self, char* name, struct sClass* klass, _Bool output, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __dec_obj32;
void* right_value104;
char* __dec_obj33;
void* right_value118;
struct sClass* __dec_obj42;
struct sStructNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
    ((struct sStructNode*)come_null_check(self, "14struct.c", 193))->sline=((struct sInfo*)come_null_check(info, "14struct.c", 193))->sline;
    __freed_obj__ = 0;
    __dec_obj32=((struct sStructNode*)come_null_check(self, "14struct.c", 194))->sname;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 194))->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(((struct sInfo*)come_null_check(info, "14struct.c", 194))->sname))));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = 0;
    __dec_obj33=((struct sStructNode*)come_null_check(self, "14struct.c", 196))->mName;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 196))->mName=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(name))));
    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value104;
    __freed_obj__ = 0;
    __dec_obj42=((struct sStructNode*)come_null_check(self, "14struct.c", 197))->mClass;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 197))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value118=sClass_clone(klass))));
    if(__dec_obj42) { come_call_finalizer(sClass_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value118;
    __freed_obj__ = 0;
    ((struct sStructNode*)come_null_check(self, "14struct.c", 199))->mOutput=output;
    __freed_obj__ = 0;
    __result96__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sClass* sClass_clone(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
struct sClass* __result88__;
void* right_value105;
struct sClass* result_124;
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value106;
char* __dec_obj34;
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value116;
struct list$1tuple2$2charphsTypephph* __dec_obj40;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value117;
char* __dec_obj41;
struct sClass* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
memset(&result_124, 0, sizeof(struct sClass*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
        if(_if_conditional176=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional176) {
            __result88__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result88__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_124=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value105=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "sClass_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value105;
        __freed_obj__ = 0;
        if(_if_conditional177=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional177) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 4))->mStruct=((struct sClass*)come_null_check(self, "sClass_clone", 4))->mStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional178=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional178) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 5))->mFloat=((struct sClass*)come_null_check(self, "sClass_clone", 5))->mFloat;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional179=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional179) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 6))->mUnion=((struct sClass*)come_null_check(self, "sClass_clone", 6))->mUnion;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional180=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional180) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 7))->mGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 7))->mGenerics;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional181=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional181) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 8))->mMethodGenerics=((struct sClass*)come_null_check(self, "sClass_clone", 8))->mMethodGenerics;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional182=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional182) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 9))->mEnum=((struct sClass*)come_null_check(self, "sClass_clone", 9))->mEnum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional183=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional183) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 10))->mProtocol=((struct sClass*)come_null_check(self, "sClass_clone", 10))->mProtocol;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional184=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional184) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 11))->mNumber=((struct sClass*)come_null_check(self, "sClass_clone", 11))->mNumber;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional185=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 13))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional185) {
            __dec_obj34=((struct sClass*)come_null_check(result_124, "sClass_clone", 12))->mName;
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 12))->mName=(char*)come_increment_ref_count(((char*)(right_value106=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 12))->mName))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional186=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional186) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 13))->mGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 13))->mGenericsNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional187=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional187) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 14))->mMethodGenericsNum=((struct sClass*)come_null_check(self, "sClass_clone", 14))->mMethodGenericsNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional188=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 16))->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional188) {
            __dec_obj40=((struct sClass*)come_null_check(result_124, "sClass_clone", 15))->mFields;
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 15))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value116=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(self, "sClass_clone", 15))->mFields))));
            if(__dec_obj40) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value116;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional195=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional195) {
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 16))->mOutputed=((struct sClass*)come_null_check(self, "sClass_clone", 16))->mOutputed;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional196=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_clone", 18))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional196) {
            __dec_obj41=((struct sClass*)come_null_check(result_124, "sClass_clone", 17))->mDeclareSName;
            ((struct sClass*)come_null_check(result_124, "sClass_clone", 17))->mDeclareSName=(char*)come_increment_ref_count(((char*)(right_value117=string_clone(((struct sClass*)come_null_check(self, "sClass_clone", 17))->mDeclareSName))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value117;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result95__ = __result_obj__ = result_124;
        if(result_124 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_124, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result95__;
        __freed_obj__ = 0;
        if(result_124 && !__freed_obj__) { come_call_finalizer(sClass_finalize,result_124, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephphp_clone(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
struct list$1tuple2$2charphsTypephph* __result89__;
void* right_value107;
void* right_value108;
struct list$1tuple2$2charphsTypephph* result_125;
struct list_item$1tuple2$2charphsTypephph* it_126;
_Bool _while_condtional21;
void* right_value115;
struct list$1tuple2$2charphsTypephph* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&result_125, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_126, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value115, 0, sizeof(void*));
                if(_if_conditional189=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional189) {
                    __result89__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result89__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_125=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value108=list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)(right_value107=(struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value107;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value108;
                __freed_obj__ = 0;
                it_126=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional21=it_126!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional21) {
                    list$1tuple2$2charphsTypephph_add(((struct list$1tuple2$2charphsTypephph*)come_null_check(result_125, "./comelang2.h", 192)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value115=tuple2$2charphsTypephp_clone(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_126, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value115;
                    __freed_obj__ = 0;
                    it_126=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_126, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result94__ = __result_obj__ = result_125;
                if(result_125 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result94__;
                __freed_obj__ = 0;
                if(result_125 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,result_125, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsTypephph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result90__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result90__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_add(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
void* right_value109;
struct list_item$1tuple2$2charphsTypephph* litem_127;
struct tuple2$2charphsTypeph* __dec_obj35;
_Bool _if_conditional191;
void* right_value110;
struct list_item$1tuple2$2charphsTypephph* litem_128;
struct tuple2$2charphsTypeph* __dec_obj36;
void* right_value111;
struct list_item$1tuple2$2charphsTypephph* litem_129;
struct tuple2$2charphsTypeph* __dec_obj37;
struct list$1tuple2$2charphsTypephph* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&litem_127, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value110, 0, sizeof(void*));
memset(&litem_128, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value111, 0, sizeof(void*));
memset(&litem_129, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        if(_if_conditional190=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional190) {
                            litem_127=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value109=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value109;
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj35=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 206))->item;
                            ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_127, "./comelang2.h", 206))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                            if(__dec_obj35) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_127;
                            __freed_obj__ = 0;
                            ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 209))->head=litem_127;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional191=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional191) {
                                litem_128=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value110=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                                if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value110;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 214))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj36=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 216))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_128, "./comelang2.h", 216))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj36) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_128;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_128;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_129=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value111=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value111;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 224))->prev=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj37=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 226))->item;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(litem_129, "./comelang2.h", 226))->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                                if(__dec_obj37) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_129;
                                __freed_obj__ = 0;
                                ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_129;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result91__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result91__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
struct tuple2$2charphsTypeph* __result92__;
void* right_value112;
struct tuple2$2charphsTypeph* result_130;
_Bool _if_conditional193;
void* right_value113;
char* __dec_obj38;
_Bool _if_conditional194;
void* right_value114;
struct sType* __dec_obj39;
struct tuple2$2charphsTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&result_130, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
                        if(_if_conditional192=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            __result92__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result92__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_130=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value112=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value112;
                        __freed_obj__ = 0;
                        if(_if_conditional193=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional193) {
                            __dec_obj38=((struct tuple2$2charphsTypeph*)come_null_check(result_130, "tuple2$2charphsTypephp_clone", 4))->v1;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_130, "tuple2$2charphsTypephp_clone", 4))->v1=(char*)come_increment_ref_count(((char*)(right_value113=string_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 4))->v1))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value113;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional194=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 6))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional194) {
                            __dec_obj39=((struct tuple2$2charphsTypeph*)come_null_check(result_130, "tuple2$2charphsTypephp_clone", 5))->v2;
                            ((struct tuple2$2charphsTypeph*)come_null_check(result_130, "tuple2$2charphsTypephp_clone", 5))->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_clone", 5))->v2))));
                            if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value114;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result93__ = __result_obj__ = result_130;
                        if(result_130 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_130, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result93__;
                        __freed_obj__ = 0;
                        if(result_130 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_130, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result97__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

char* sStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value119;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(right_value119=__builtin_string("sStructNode")));
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
}

_Bool sStructNode_compile(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value120;
struct sClass* klass_131;
void* right_value121;
char* name_132;
void* right_value122;
_Bool _if_conditional200;
void* right_value123;
void* right_value124;
_Bool _if_conditional201;
void* right_value125;
struct sClass* klass2_133;
void* right_value126;
struct list$1tuple2$2charphsTypephph* __dec_obj43;
void* right_value127;
void* right_value128;
struct sType* type_134;
void* right_value137;
_Bool _if_conditional224;
_Bool __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&klass_131, 0, sizeof(struct sClass*));
memset(&right_value121, 0, sizeof(void*));
memset(&name_132, 0, sizeof(char*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&klass2_133, 0, sizeof(struct sClass*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&type_134, 0, sizeof(struct sType*));
memset(&right_value137, 0, sizeof(void*));
    klass_131=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value120=sClass_clone(((struct sStructNode*)come_null_check(self, "14struct.c", 216))->mClass))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    name_132=(char*)come_increment_ref_count(((char*)(right_value121=__builtin_string(((struct sStructNode*)come_null_check(self, "14struct.c", 217))->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121;
    __freed_obj__ = 0;
    if(_if_conditional200=((struct sClass*)(right_value122=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 227))->classes, "14struct.c", 227)),name_132,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122),
    (right_value122 && right_value122 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value122, 
    __freed_obj__ = 0, 
    _if_conditional200) {
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 220))->classes, "14struct.c", 220)),(char*)come_increment_ref_count(name_132),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value123=sClass_clone(klass_131)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value123;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional201=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(((struct sClass*)(right_value124=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 227))->classes, "14struct.c", 227)),name_132,((void*)0)))), "14struct.c", 227))->mFields, "14struct.c", 227)))==0&&list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_131, "14struct.c", 227))->mFields, "14struct.c", 227)))>0,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124),
        (right_value124 && right_value124 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value124, 
        __freed_obj__ = 0, 
        _if_conditional201) {
            klass2_133=((struct sClass*)(right_value125=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 223))->classes, "14struct.c", 223)),name_132,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value125;
            __freed_obj__ = 0;
            __dec_obj43=((struct sClass*)come_null_check(klass2_133, "14struct.c", 224))->mFields;
            ((struct sClass*)come_null_check(klass2_133, "14struct.c", 224))->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list$1tuple2$2charphsTypephph*)(right_value126=list$1tuple2$2charphsTypephphp_clone(((struct sClass*)come_null_check(klass_131, "14struct.c", 224))->mFields))));
            if(__dec_obj43) { come_call_finalizer(list$1tuple2$2charphsTypephph_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value126);
            if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value126;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 227)))),name_132,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value127;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value128;
    __freed_obj__ = 0;
    map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 228))->types, "14struct.c", 228)),(char*)come_increment_ref_count(name_132),(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(type_134)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value137;
    __freed_obj__ = 0;
    if(_if_conditional224=((struct sStructNode*)come_null_check(self, "14struct.c", 234))->mOutput,    __freed_obj__ = 0, 
    _if_conditional224) {
        output_struct(klass_131,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result112__ = (_Bool)1;
    if(klass_131 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_132 && !__freed_obj__) { name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, 0); }
    if(type_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
    if(klass_131 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_132 && !__freed_obj__) { name_132 = come_decrement_ref_count(name_132, (void*)0, (void*)0, 0, 0, 0); }
    if(type_134 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_134, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result99__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 410))->len;
            __freed_obj__ = 0;
            return __result99__;
            __freed_obj__ = 0;
}

static struct map$2charphsTypeph* map$2charphsTypeph_insert(struct map$2charphsTypeph* self, char* key, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional202;
unsigned int hash_152;
unsigned int it_153;
_Bool _while_condtional24;
_Bool _if_conditional214;
void* right_value135;
struct optional$2boolbool* __exception_result_var_a7;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool same_key_exist_154;
char* it2_155;
_Bool _for_condtionalA10;
void* right_value136;
struct optional$2boolbool* __exception_result_var_a8;
_Bool _if_conditional222;
_Bool _if_conditional223;
struct map$2charphsTypeph* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_152, 0, sizeof(unsigned int));
memset(&it_153, 0, sizeof(unsigned int));
memset(&right_value135, 0, sizeof(void*));
memset(&same_key_exist_154, 0, sizeof(_Bool));
memset(&it2_155, 0, sizeof(char*));
memset(&right_value136, 0, sizeof(void*));
        if(_if_conditional202=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->len*10>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size,        __freed_obj__ = 0, 
        _if_conditional202) {
            map$2charphsTypeph_rehash(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1422)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_152=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1424)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1424))->size;
        __freed_obj__ = 0;
        it_153=hash_152;
        __freed_obj__ = 0;
        while(_while_condtional24=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional24) {
            if(_if_conditional214=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1480))->item_existance[it_153],            __freed_obj__ = 0, 
            _if_conditional214) {
                if(_if_conditional215=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1451),__exception_result_var_a7=((struct optional$2boolbool*)(right_value135=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1451))->keys[it_153], "./comelang2.h", 1451)),key))), come_pop_stackframe(), __exception_result_var_a7)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135),
                (right_value135 && right_value135 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value135, 
                __freed_obj__ = 0, 
                _if_conditional215) {
                    if(_if_conditional216=1,                    __freed_obj__ = 0, 
                    _if_conditional216) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->key_list, "./comelang2.h", 1433)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_153]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_153] && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_153] = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1434))->keys[it_153], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1435))->keys[it_153]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_153]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_153]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional217=1,                    __freed_obj__ = 0, 
                    _if_conditional217) {
                        if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_153] && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1442))->items[it_153], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1443))->items[it_153]=(struct sType*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1446))->items[it_153]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_153++;
                __freed_obj__ = 0;
                if(_if_conditional218=it_153>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1460))->size,                __freed_obj__ = 0, 
                _if_conditional218) {
                    it_153=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional219=it_153==hash_152,                    __freed_obj__ = 0, 
                    _if_conditional219) {
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
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1462))->item_existance[it_153]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional220=1,                __freed_obj__ = 0, 
                _if_conditional220) {
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1464))->keys[it_153]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1467))->keys[it_153]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional221=1,                __freed_obj__ = 0, 
                _if_conditional221) {
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1470))->items[it_153]=(struct sType*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1473))->items[it_153]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1476))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_154=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_155=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it2_155=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1490))->key_list, "./comelang2.h", 1490))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional222=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1488),__exception_result_var_a8=((struct optional$2boolbool*)(right_value136=string_equals(((char*)come_null_check(it2_155, "./comelang2.h", 1488)),key))), come_pop_stackframe(), __exception_result_var_a8)),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136),
            (right_value136 && right_value136 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value136, 
            __freed_obj__ = 0, 
            _if_conditional222) {
                same_key_exist_154=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional223=!same_key_exist_154,        __freed_obj__ = 0, 
        _if_conditional223) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1491))->key_list, "./comelang2.h", 1491)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result111__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsTypeph_rehash(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_135;
void* right_value129;
char** keys_136;
void* right_value130;
struct sType** items_137;
void* right_value131;
_Bool* item_existance_138;
int len_139;
char* it_142;
_Bool _for_condtionalA9;
struct sType* default_value_145;
void* right_value133;
struct sType* it2_148;
unsigned int hash_149;
int n_150;
_Bool _while_condtional23;
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sType* default_value_151;
void* right_value134;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_135, 0, sizeof(int));
memset(&right_value129, 0, sizeof(void*));
memset(&keys_136, 0, sizeof(char**));
memset(&right_value130, 0, sizeof(void*));
memset(&items_137, 0, sizeof(struct sType**));
memset(&right_value131, 0, sizeof(void*));
memset(&item_existance_138, 0, sizeof(_Bool*));
memset(&len_139, 0, sizeof(int));
memset(&it_142, 0, sizeof(char*));
memset(&default_value_145, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&it2_148, 0, sizeof(struct sType*));
memset(&hash_149, 0, sizeof(unsigned int));
memset(&n_150, 0, sizeof(int));
memset(&default_value_151, 0, sizeof(struct sType*));
memset(&right_value134, 0, sizeof(void*));
                size_135=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                __freed_obj__ = 0;
                keys_136=(char**)come_increment_ref_count(((char**)(right_value129=(char**)come_calloc(1, sizeof(char*)*(1*(size_135)), "./comelang2.h", 1370))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = 0;
                items_137=(struct sType**)come_increment_ref_count(((struct sType**)(right_value130=(struct sType**)come_calloc(1, sizeof(struct sType*)*(1*(size_135)), "./comelang2.h", 1371))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value130;
                __freed_obj__ = 0;
                item_existance_138=(_Bool*)come_increment_ref_count(((_Bool*)(right_value131=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_135)), "./comelang2.h", 1372))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value131);
                if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value131;
                __freed_obj__ = 0;
                len_139=0;
                __freed_obj__ = 0;
                for(
                it_142=map$2charphsTypeph_begin(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA9=                !map$2charphsTypeph_end(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                _for_condtionalA9;                it_142=map$2charphsTypeph_next(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_145,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    it2_148=((struct sType*)(right_value133=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1379)),it_142,default_value_145)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value133;
                    __freed_obj__ = 0;
                    hash_149=string_get_hash_key(((char*)come_null_check(it_142, "./comelang2.h", 1380)))%size_135;
                    __freed_obj__ = 0;
                    n_150=hash_149;
                    __freed_obj__ = 0;
                    while(_while_condtional23=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional23) {
                        if(_if_conditional211=item_existance_138[n_150],                        __freed_obj__ = 0, 
                        _if_conditional211) {
                            n_150++;
                            __freed_obj__ = 0;
                            if(_if_conditional212=n_150>=size_135,                            __freed_obj__ = 0, 
                            _if_conditional212) {
                                n_150=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional213=n_150==hash_149,                                __freed_obj__ = 0, 
                                _if_conditional213) {
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
                            item_existance_138[n_150]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_136[n_150]=it_142;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_137[n_150]=((struct sType*)(right_value134=map$2charphsTypeph_at(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1400)),it_142,default_value_151)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                            if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value134;
                            __freed_obj__ = 0;
                            len_139++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1408))->items);
                __freed_obj__ = 0;
                if(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_136;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1413))->items=items_137;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_138;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1416))->size=size_135;
                __freed_obj__ = 0;
                ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1417))->len=len_139;
                __freed_obj__ = 0;
}

static char* map$2charphsTypeph_begin(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
char* result_140;
char* __result100__;
_Bool _if_conditional204;
char* __result101__;
char* result_141;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_140, 0, sizeof(char*));
memset(&result_141, 0, sizeof(char*));
                    if(_if_conditional203=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional203) {
                        __freed_obj__ = 0;
                        memset(&result_140,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result100__ = __result_obj__ = result_140;
                        __freed_obj__ = 0;
                        return __result100__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional204=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                    __freed_obj__ = 0, 
                    _if_conditional204) {
                        __result101__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                        __freed_obj__ = 0;
                        return __result101__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_141,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result102__ = __result_obj__ = result_141;
                    __freed_obj__ = 0;
                    return __result102__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsTypeph_end(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result103__ = self==((void*)0)||((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result103__;
                    __freed_obj__ = 0;
}

static char* map$2charphsTypeph_next(struct map$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
char* result_143;
char* __result104__;
_Bool _if_conditional206;
char* __result105__;
char* result_144;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_143, 0, sizeof(char*));
memset(&result_144, 0, sizeof(char*));
                    if(_if_conditional205=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional205) {
                        __freed_obj__ = 0;
                        memset(&result_143,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result104__ = __result_obj__ = result_143;
                        __freed_obj__ = 0;
                        return __result104__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional206=((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        __result105__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                        __freed_obj__ = 0;
                        return __result105__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_144,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result106__ = __result_obj__ = result_144;
                    __freed_obj__ = 0;
                    return __result106__;
                    __freed_obj__ = 0;
}

static struct sType* map$2charphsTypeph_at(struct map$2charphsTypeph* self, char* key, struct sType* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_146;
unsigned int it_147;
_Bool _while_condtional22;
_Bool _if_conditional207;
void* right_value132;
struct optional$2boolbool* __exception_result_var_a6;
_Bool _if_conditional208;
struct sType* __result107__;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sType* __result108__;
struct sType* __result109__;
struct sType* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_146, 0, sizeof(unsigned int));
memset(&it_147, 0, sizeof(unsigned int));
memset(&right_value132, 0, sizeof(void*));
                        hash_146=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1258))->size;
                        __freed_obj__ = 0;
                        it_147=hash_146;
                        __freed_obj__ = 0;
                        while(_while_condtional22=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional22) {
                            if(_if_conditional207=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_147],                            __freed_obj__ = 0, 
                            _if_conditional207) {
                                if(_if_conditional208=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a6=((struct optional$2boolbool*)(right_value132=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_147], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a6)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132),
                                (right_value132 && right_value132 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value132, 
                                __freed_obj__ = 0, 
                                _if_conditional208) {
                                    __result107__ = __result_obj__ = ((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1266))->items[it_147];
                                    __freed_obj__ = 0;
                                    return __result107__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_147++;
                                __freed_obj__ = 0;
                                if(_if_conditional209=it_147>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1277))->size,                                __freed_obj__ = 0, 
                                _if_conditional209) {
                                    it_147=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional210=it_147==hash_146,                                    __freed_obj__ = 0, 
                                    _if_conditional210) {
                                        __result108__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result108__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result109__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result109__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result110__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result110__;
                        __freed_obj__ = 0;
}

int sStructNode_sline(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = ((struct sStructNode*)come_null_check(self, "14struct.c", 239))->sline;
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
}

char* sStructNode_sname(struct sStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value138;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value138, 0, sizeof(void*));
    __result114__ = __result_obj__ = ((char*)(right_value138=__builtin_string(((struct sStructNode*)come_null_check(self, "14struct.c", 244))->sname)));
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

struct sStructNobodyNode* sStructNobodyNode_initialize(struct sStructNobodyNode* self, char* name, struct sClass* klass, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __dec_obj44;
void* right_value140;
char* __dec_obj45;
void* right_value141;
struct sClass* __dec_obj46;
struct sStructNobodyNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 258))->sline=((struct sInfo*)come_null_check(info, "14struct.c", 258))->sline;
    __freed_obj__ = 0;
    __dec_obj44=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 259))->sname;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 259))->sname=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(((struct sInfo*)come_null_check(info, "14struct.c", 259))->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    __dec_obj45=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 261))->mName;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 261))->mName=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(name))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value140;
    __freed_obj__ = 0;
    __dec_obj46=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 262))->mClass;
    ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 262))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value141=sClass_clone(klass))));
    if(__dec_obj46) { come_call_finalizer(sClass_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value141;
    __freed_obj__ = 0;
    __result115__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStructNobodyNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

char* sStructNobodyNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value142;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
    __result117__ = __result_obj__ = ((char*)(right_value142=__builtin_string("sStructNobodyNode")));
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

_Bool sStructNobodyNode_compile(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value143;
char* name_156;
struct sClass* klass_157;
void* right_value144;
_Bool _if_conditional228;
void* right_value145;
void* right_value146;
void* right_value147;
struct sType* type_158;
void* right_value148;
_Bool _if_conditional229;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&name_156, 0, sizeof(char*));
memset(&klass_157, 0, sizeof(struct sClass*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&type_158, 0, sizeof(struct sType*));
memset(&right_value148, 0, sizeof(void*));
    name_156=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 279))->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value143;
    __freed_obj__ = 0;
    klass_157=((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 280))->mClass;
    __freed_obj__ = 0;
    if(_if_conditional228=((struct sClass*)(right_value144=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 286))->classes, "14struct.c", 286)),name_156,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144),
    (right_value144 && right_value144 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[1] = right_value144, 
    __freed_obj__ = 0, 
    _if_conditional228) {
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 283))->classes, "14struct.c", 283)),(char*)come_increment_ref_count(name_156),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value145=sClass_clone(klass_157)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value145;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    type_158=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value146=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "14struct.c", 286)))),name_156,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value146;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value147;
    __freed_obj__ = 0;
    map$2charphsTypeph_insert(((struct map$2charphsTypeph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 288))->types, "14struct.c", 288)),(char*)come_increment_ref_count(name_156),(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(type_158)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value148;
    __freed_obj__ = 0;
    if(_if_conditional229=((struct sInfo*)come_null_check(info, "14struct.c", 296))->output_header_file&&string_operator_not_equals(((struct sClass*)come_null_check(klass_157, "14struct.c", 296))->mDeclareSName,((struct sInfo*)come_null_check(info, "14struct.c", 296))->base_sname),    __freed_obj__ = 0, 
    _if_conditional229) {
    }
    else {
        add_come_code_at_source_head(info,"struct %s;\n",name_156);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result118__ = (_Bool)1;
    if(name_156 && !__freed_obj__) { name_156 = come_decrement_ref_count(name_156, (void*)0, (void*)0, 0, 0, 0); }
    if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(name_156 && !__freed_obj__) { name_156 = come_decrement_ref_count(name_156, (void*)0, (void*)0, 0, 0, 0); }
    if(type_158 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_158, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sStructNobodyNode_sline(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = ((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 301))->sline;
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

char* sStructNobodyNode_sname(struct sStructNobodyNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value149;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
    __result120__ = __result_obj__ = ((char*)(right_value149=__builtin_string(((struct sStructNobodyNode*)come_null_check(self, "14struct.c", 306))->sname)));
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

struct sGenericsStructNode* sGenericsStructNode_initialize(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value150;
char* __dec_obj47;
struct sGenericsStructNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value150, 0, sizeof(void*));
    ((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 317))->sline=((struct sInfo*)come_null_check(info, "14struct.c", 317))->sline;
    __freed_obj__ = 0;
    __dec_obj47=((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 318))->sname;
    ((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 318))->sname=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(((struct sInfo*)come_null_check(info, "14struct.c", 318))->sname))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value150;
    __freed_obj__ = 0;
    __result121__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sGenericsStructNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

char* sGenericsStructNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value151;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
    __result123__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sGenericsStructNode")));
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
}

_Bool sGenericsStructNode_compile(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

int sGenericsStructNode_sline(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = ((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 342))->sline;
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

char* sGenericsStructNode_sname(struct sGenericsStructNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value152;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
    __result126__ = __result_obj__ = ((char*)(right_value152=__builtin_string(((struct sGenericsStructNode*)come_null_check(self, "14struct.c", 347))->sname)));
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

struct sNode* parse_struct(char* type_name, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_159;
_Bool output_160;
void* right_value153;
_Bool _if_conditional231;
void* right_value154;
void* right_value155;
void* right_value156;
struct sClass* __dec_obj48;
void* right_value157;
void* right_value158;
void* right_value159;
struct sClass* __dec_obj49;
void* right_value160;
_Bool _while_condtional26;
_Bool multiple_declare_164;
char* p_165;
int sline_166;
_Bool no_output_err_167;
void* right_value161;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* type_169;
char* name_170;
_Bool err_171;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value162;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* base_type_172;
char* name_173;
_Bool err_174;
void* right_value163;
struct tuple2$2sTypephcharph* multiple_assgin_var6;
struct sType* type2_175;
char* name2_176;
_Bool _if_conditional241;
void* right_value164;
void* right_value165;
_Bool _while_condtional27;
void* right_value166;
struct tuple2$2sTypephcharph* multiple_assgin_var7;
struct sType* type2_177;
char* name2_178;
_Bool _if_conditional242;
void* right_value167;
void* right_value168;
void* right_value169;
struct tuple3$3sTypephcharphbool* multiple_assgin_var8;
struct sType* type2_179;
char* name_180;
_Bool err_181;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value170;
void* right_value171;
void* right_value172;
_Bool _if_conditional245;
void* right_value173;
void* right_value174;
void* right_value175;
struct sNode* _inf_value1;
struct sStructNode* _inf_obj_value1;
void* right_value180;
struct sNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_159, 0, sizeof(struct sClass*));
memset(&output_160, 0, sizeof(_Bool));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&multiple_declare_164, 0, sizeof(_Bool));
memset(&p_165, 0, sizeof(char*));
memset(&sline_166, 0, sizeof(int));
memset(&no_output_err_167, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
memset(&type_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
memset(&type_169, 0, sizeof(struct sType*));
memset(&name_170, 0, sizeof(char*));
memset(&err_171, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
memset(&base_type_172, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
memset(&err_174, 0, sizeof(_Bool));
memset(&base_type_172, 0, sizeof(struct sType*));
memset(&name_173, 0, sizeof(char*));
memset(&err_174, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&type2_175, 0, sizeof(struct sType*));
memset(&name2_176, 0, sizeof(char*));
memset(&type2_175, 0, sizeof(struct sType*));
memset(&name2_176, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&type2_177, 0, sizeof(struct sType*));
memset(&name2_178, 0, sizeof(char*));
memset(&type2_177, 0, sizeof(struct sType*));
memset(&name2_178, 0, sizeof(char*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&type2_179, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&err_181, 0, sizeof(_Bool));
memset(&type2_179, 0, sizeof(struct sType*));
memset(&name_180, 0, sizeof(char*));
memset(&err_181, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional231=((struct sClass*)(right_value153=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 364))->classes, "14struct.c", 364)),type_name,((void*)0))))==((void*)0),    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153),
    (right_value153 && right_value153 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value153, 
    __freed_obj__ = 0, 
    _if_conditional231) {
        output_160=(_Bool)1;
        __freed_obj__ = 0;
        __dec_obj48=klass_159;
        klass_159=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value156=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value154=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 356)))),((char*)(right_value155=__builtin_string(type_name))),(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
        if(__dec_obj48) { come_call_finalizer(sClass_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value154;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value155;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value156);
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value156;
        __freed_obj__ = 0;
        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 357))->classes, "14struct.c", 357)),(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_159));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value157);
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value157;
        __freed_obj__ = 0;
    }
    else {
        output_160=(_Bool)0;
        __freed_obj__ = 0;
        __dec_obj49=klass_159;
        klass_159=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value159=sClass_clone(((struct sClass*)(right_value158=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 361))->classes, "14struct.c", 361)),type_name,((void*)0))))))));
        if(__dec_obj49) { come_call_finalizer(sClass_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value158;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value159;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_reset(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_159, "14struct.c", 364))->mFields, "14struct.c", 364)));
    __freed_obj__ = 0;
    come_clear_stackframe();
    optional$2intbool_value((come_push_stackframe("14struct.c", 366),((struct optional$2intbool*)(right_value160=expected_next_character(123,info)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value160;
    __freed_obj__ = 0;
    while(_while_condtional26=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional26) {
        multiple_declare_164=(_Bool)0;
        __freed_obj__ = 0;
        {
            p_165=((struct sInfo*)come_null_check(info, "14struct.c", 371))->p;
            __freed_obj__ = 0;
            sline_166=((struct sInfo*)come_null_check(info, "14struct.c", 372))->sline;
            __freed_obj__ = 0;
            no_output_err_167=((struct sInfo*)come_null_check(info, "14struct.c", 374))->no_output_err;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "14struct.c", 375))->no_output_err=(_Bool)1;
            __freed_obj__ = 0;
            come_clear_stackframe();
            multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("14struct.c", 376),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value161=parse_type(info,(_Bool)1,(_Bool)1)))));
            type_169=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
            name_170=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
            err_171=multiple_assgin_var4->v3;
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value161;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "14struct.c", 377))->no_output_err=no_output_err_167;
            __freed_obj__ = 0;
            if(_if_conditional237=err_171&&*((struct sInfo*)come_null_check(info, "14struct.c", 383))->p==44,            __freed_obj__ = 0, 
            _if_conditional237) {
                multiple_declare_164=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "14struct.c", 383))->p=p_165;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "14struct.c", 384))->sline=sline_166;
            __freed_obj__ = 0;
            if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_170 && !__freed_obj__) { name_170 = come_decrement_ref_count(name_170, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional238=multiple_declare_164,        __freed_obj__ = 0, 
        _if_conditional238) {
            come_clear_stackframe();
            multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("14struct.c", 388),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value162=parse_type(info,(_Bool)0,(_Bool)1)))));
            base_type_172=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
            name_173=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
            err_174=multiple_assgin_var5->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value162;
            __freed_obj__ = 0;
            multiple_assgin_var6=((struct tuple2$2sTypephcharph*)(right_value163=parse_variable_name((struct sType*)come_increment_ref_count(base_type_172),(_Bool)1,info)));
            type2_175=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
            name2_176=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value163);
            if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value163;
            __freed_obj__ = 0;
            if(_if_conditional241=!((struct sInfo*)come_null_check(info, "14struct.c", 396))->no_output_err,            __freed_obj__ = 0, 
            _if_conditional241) {
                list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_159, "14struct.c", 393))->mFields, "14struct.c", 393)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value165=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value164=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 393)))),(char*)come_increment_ref_count(name2_176),(struct sType*)come_increment_ref_count(type2_175))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value164;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value165);
                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value165;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            while(_while_condtional27=*((struct sInfo*)come_null_check(info, "14struct.c", 406))->p==44,            __freed_obj__ = 0, 
            _while_condtional27) {
                ((struct sInfo*)come_null_check(info, "14struct.c", 397))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                multiple_assgin_var7=((struct tuple2$2sTypephcharph*)(right_value166=parse_variable_name((struct sType*)come_increment_ref_count(base_type_172),(_Bool)0,info)));
                type2_177=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v1);
                name2_178=(char*)come_increment_ref_count(multiple_assgin_var7->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value166;
                __freed_obj__ = 0;
                if(_if_conditional242=!((struct sInfo*)come_null_check(info, "14struct.c", 405))->no_output_err,                __freed_obj__ = 0, 
                _if_conditional242) {
                    list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_159, "14struct.c", 403))->mFields, "14struct.c", 403)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value168=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value167=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 403)))),(char*)come_increment_ref_count(name2_178),(struct sType*)come_increment_ref_count(type2_177))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value167;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
                    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value168;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(type2_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name2_178 && !__freed_obj__) { name2_178 = come_decrement_ref_count(name2_178, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(base_type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_173 && !__freed_obj__) { name_173 = come_decrement_ref_count(name_173, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_175 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_175, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name2_176 && !__freed_obj__) { name2_176 = come_decrement_ref_count(name2_176, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            come_clear_stackframe();
            multiple_assgin_var8=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("14struct.c", 409),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value169=parse_type(info,(_Bool)1,(_Bool)1)))));
            type2_179=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v1);
            name_180=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
            err_181=multiple_assgin_var8->v3;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value169;
            __freed_obj__ = 0;
            if(_if_conditional243=!err_181,            __freed_obj__ = 0, 
            _if_conditional243) {
                printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "14struct.c", 411))->sname,((struct sInfo*)come_null_check(info, "14struct.c", 411))->sline);
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional244=!((struct sInfo*)come_null_check(info, "14struct.c", 418))->no_output_err,            __freed_obj__ = 0, 
            _if_conditional244) {
                list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_159, "14struct.c", 416))->mFields, "14struct.c", 416)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value171=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value170=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 416)))),(char*)come_increment_ref_count(name_180),(struct sType*)come_increment_ref_count(type2_179))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value170;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value171;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(type2_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_179, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_180 && !__freed_obj__) { name_180 = come_decrement_ref_count(name_180, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("14struct.c", 419),((struct optional$2intbool*)(right_value172=expected_next_character(59,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value172;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional245=*((struct sInfo*)come_null_check(info, "14struct.c", 428))->p==125,        __freed_obj__ = 0, 
        _if_conditional245) {
            ((struct sInfo*)come_null_check(info, "14struct.c", 424))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 431);
    _inf_obj_value1=come_increment_ref_count(((struct sStructNode*)(right_value175=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value173=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 431)))),(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(type_name)))),(struct sClass*)come_increment_ref_count(klass_159),output_160,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStructNode_finalize;
    _inf_value1->clone=(void*)sStructNode_clone;
    _inf_value1->compile=(void*)sStructNode_compile;
    _inf_value1->sline=(void*)sStructNode_sline;
    _inf_value1->sname=(void*)sStructNode_sname;
    _inf_value1->terminated=(void*)sStructNode_terminated;
    _inf_value1->kind=(void*)sStructNode_kind;
    __result134__ = __result_obj__ = ((struct sNode*)(right_value180=_inf_value1));
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_159 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value173;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value174;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value175;
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
    if(type_name && !__freed_obj__) { type_name = come_decrement_ref_count(type_name, (void*)0, (void*)0, 0, 1, 0); }
    if(klass_159 && !__freed_obj__) { come_call_finalizer(sClass_finalize,klass_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_reset(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_161;
_Bool _while_condtional25;
struct list_item$1tuple2$2charphsTypephph* prev_it_162;
struct list$1tuple2$2charphsTypephph* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_161, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_162, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_161=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 476))->head;
        __freed_obj__ = 0;
        while(_while_condtional25=it_161!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional25) {
            prev_it_162=it_161;
            __freed_obj__ = 0;
            it_161=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_161, "./comelang2.h", 479))->next;
            __freed_obj__ = 0;
            if(prev_it_162 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_162, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 486))->len=0;
        __freed_obj__ = 0;
        __result127__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result127__;
        __freed_obj__ = 0;
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
int default_value_163;
int __result128__;
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_163, 0, sizeof(int));
        if(_if_conditional232=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional232) {
            __freed_obj__ = 0;
            memset(&default_value_163,0,sizeof(int));
            __freed_obj__ = 0;
            __result128__ = default_value_163;
            __freed_obj__ = 0;
            return __result128__;
            __freed_obj__ = 0;
        }
        else {
            __result129__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result129__;
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
_Bool _if_conditional233;
struct tuple3$3sTypephcharphbool* default_value_168;
struct tuple3$3sTypephcharphbool* __result130__;
struct tuple3$3sTypephcharphbool* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_168, 0, sizeof(struct tuple3$3sTypephcharphbool*));
                if(_if_conditional233=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional233) {
                    __freed_obj__ = 0;
                    memset(&default_value_168,0,sizeof(struct tuple3$3sTypephcharphbool*));
                    __freed_obj__ = 0;
                    __result130__ = __result_obj__ = default_value_168;
                    __freed_obj__ = 0;
                    return __result130__;
                    __freed_obj__ = 0;
                }
                else {
                    __result131__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result131__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional234=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional234) {
                    if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional235;
_Bool _if_conditional236;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional235=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional235) {
                            if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional236=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional236) {
                            if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional239;
_Bool _if_conditional240;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional239=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional239) {
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional240=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional240) {
                    if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct sNode* top_level_v98(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional255;
char* header_head_183;
void* right_value181;
char* type_name_184;
_Bool _if_conditional256;
struct sClass* struct_class_185;
void* right_value182;
_Bool _if_conditional257;
void* right_value183;
void* right_value184;
struct sClass* __dec_obj53;
void* right_value185;
void* right_value186;
struct sClass* __dec_obj54;
void* right_value187;
void* right_value188;
void* right_value189;
struct sNode* _inf_value2;
struct sStructNobodyNode* _inf_obj_value2;
void* right_value194;
struct sNode* __result137__;
_Bool _if_conditional266;
_Bool _while_condtional29;
void* right_value195;
char* T_189;
_Bool _if_conditional269;
_Bool _if_conditional270;
struct sClass* generics_class_193;
void* right_value199;
_Bool _if_conditional271;
void* right_value200;
void* right_value201;
struct sClass* __dec_obj61;
void* right_value202;
_Bool _if_conditional272;
void* right_value203;
_Bool _while_condtional30;
void* right_value204;
struct tuple3$3sTypephcharphbool* multiple_assgin_var9;
struct sType* type2_194;
char* name_195;
_Bool err_196;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value205;
void* right_value206;
_Bool _while_condtional31;
void* right_value207;
char* name2_197;
void* right_value208;
struct sType* type3_198;
_Bool _if_conditional275;
_Bool no_comma_199;
void* right_value209;
struct sNode* node_200;
struct sNode* __dec_obj62;
void* right_value210;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
_Bool _if_conditional276;
void* right_value215;
void* right_value216;
struct sNode* _inf_value3;
struct sGenericsStructNode* _inf_obj_value3;
void* right_value219;
struct sNode* __result142__;
struct sClass* struct_class_202;
void* right_value220;
_Bool _if_conditional281;
void* right_value221;
void* right_value222;
struct sClass* __dec_obj64;
void* right_value223;
void* right_value224;
struct sClass* __dec_obj65;
void* right_value225;
_Bool _while_condtional32;
_Bool multiple_declare_203;
char* p_204;
int sline_205;
_Bool no_output_err_206;
void* right_value226;
struct tuple3$3sTypephcharphbool* multiple_assgin_var10;
struct sType* type_207;
char* name_208;
_Bool err_209;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value227;
struct tuple3$3sTypephcharphbool* multiple_assgin_var11;
struct sType* base_type_210;
char* name_211;
_Bool err_212;
void* right_value228;
struct tuple2$2sTypephcharph* multiple_assgin_var12;
struct sType* type2_213;
char* name2_214;
void* right_value229;
void* right_value230;
_Bool _while_condtional33;
void* right_value231;
struct tuple2$2sTypephcharph* multiple_assgin_var13;
struct sType* type2_215;
char* name2_216;
void* right_value232;
void* right_value233;
void* right_value234;
struct tuple3$3sTypephcharphbool* multiple_assgin_var14;
struct sType* type2_217;
char* name_218;
_Bool err_219;
_Bool _if_conditional284;
void* right_value235;
void* right_value236;
void* right_value237;
_Bool _if_conditional285;
void* right_value238;
void* right_value239;
void* right_value240;
void* right_value241;
struct sNode* _inf_value4;
struct sStructNode* _inf_obj_value4;
void* right_value246;
struct sNode* __result145__;
void* right_value247;
void* right_value248;
struct sNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&header_head_183, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&type_name_184, 0, sizeof(char*));
memset(&struct_class_185, 0, sizeof(struct sClass*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&T_189, 0, sizeof(char*));
memset(&generics_class_193, 0, sizeof(struct sClass*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&type2_194, 0, sizeof(struct sType*));
memset(&name_195, 0, sizeof(char*));
memset(&err_196, 0, sizeof(_Bool));
memset(&type2_194, 0, sizeof(struct sType*));
memset(&name_195, 0, sizeof(char*));
memset(&err_196, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&name2_197, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&type3_198, 0, sizeof(struct sType*));
memset(&no_comma_199, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
memset(&node_200, 0, sizeof(struct sNode*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&struct_class_202, 0, sizeof(struct sClass*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&multiple_declare_203, 0, sizeof(_Bool));
memset(&p_204, 0, sizeof(char*));
memset(&sline_205, 0, sizeof(int));
memset(&no_output_err_206, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
memset(&type_207, 0, sizeof(struct sType*));
memset(&name_208, 0, sizeof(char*));
memset(&err_209, 0, sizeof(_Bool));
memset(&type_207, 0, sizeof(struct sType*));
memset(&name_208, 0, sizeof(char*));
memset(&err_209, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
memset(&base_type_210, 0, sizeof(struct sType*));
memset(&name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
memset(&base_type_210, 0, sizeof(struct sType*));
memset(&name_211, 0, sizeof(char*));
memset(&err_212, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&type2_213, 0, sizeof(struct sType*));
memset(&name2_214, 0, sizeof(char*));
memset(&type2_213, 0, sizeof(struct sType*));
memset(&name2_214, 0, sizeof(char*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&type2_215, 0, sizeof(struct sType*));
memset(&name2_216, 0, sizeof(char*));
memset(&type2_215, 0, sizeof(struct sType*));
memset(&name2_216, 0, sizeof(char*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&type2_217, 0, sizeof(struct sType*));
memset(&name_218, 0, sizeof(char*));
memset(&err_219, 0, sizeof(_Bool));
memset(&type2_217, 0, sizeof(struct sType*));
memset(&name_218, 0, sizeof(char*));
memset(&err_219, 0, sizeof(_Bool));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
    if(_if_conditional255=string_operator_equals(buf,"struct"),    __freed_obj__ = 0, 
    _if_conditional255) {
        header_head_183=head;
        __freed_obj__ = 0;
        come_clear_stackframe();
        type_name_184=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("14struct.c", 439),((struct optional$2charphbool*)(right_value181=parse_word(info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181;
        __freed_obj__ = 0;
        if(_if_conditional256=*((struct sInfo*)come_null_check(info, "14struct.c", 627))->p==59,        __freed_obj__ = 0, 
        _if_conditional256) {
            ((struct sInfo*)come_null_check(info, "14struct.c", 442))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            if(_if_conditional257=((struct sClass*)(right_value182=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 453))->classes, "14struct.c", 453)),type_name_184,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182),
            (right_value182 && right_value182 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value182, 
            __freed_obj__ = 0, 
            _if_conditional257) {
                __dec_obj53=struct_class_185;
                struct_class_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value184=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value183=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 447)))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                if(__dec_obj53) { come_call_finalizer(sClass_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value183;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value184;
                __freed_obj__ = 0;
            }
            else {
                __dec_obj54=struct_class_185;
                struct_class_185=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value186=sClass_clone(((struct sClass*)(right_value185=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 450))->classes, "14struct.c", 450)),type_name_184,((void*)0))))))));
                if(__dec_obj54) { come_call_finalizer(sClass_finalize,__dec_obj54, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value185;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value186;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 453);
            _inf_obj_value2=come_increment_ref_count(((struct sStructNobodyNode*)(right_value189=sStructNobodyNode_initialize((struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value187=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "14struct.c", 453)))),(char*)come_increment_ref_count(((char*)(right_value188=__builtin_string(type_name_184)))),(struct sClass*)come_increment_ref_count(struct_class_185),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sStructNobodyNode_finalize;
            _inf_value2->clone=(void*)sStructNobodyNode_clone;
            _inf_value2->compile=(void*)sStructNobodyNode_compile;
            _inf_value2->sline=(void*)sStructNobodyNode_sline;
            _inf_value2->sname=(void*)sStructNobodyNode_sname;
            _inf_value2->terminated=(void*)sStructNobodyNode_terminated;
            _inf_value2->kind=(void*)sStructNobodyNode_kind;
            __result137__ = __result_obj__ = ((struct sNode*)(right_value194=_inf_value2));
            if(struct_class_185 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_185, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
            if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
            if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value187;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value188);
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value188;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value189);
            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value189;
            __freed_obj__ = 0;
            return __result137__;
            __freed_obj__ = 0;
            if(struct_class_185 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional266=*((struct sInfo*)come_null_check(info, "14struct.c", 626))->p==60,            __freed_obj__ = 0, 
            _if_conditional266) {
                list$1charph_reset(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 457))->generics_type_names, "14struct.c", 457)));
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "14struct.c", 459))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                while(_while_condtional29=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional29) {
                    come_clear_stackframe();
                    T_189=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("14struct.c", 463),((struct optional$2charphbool*)(right_value195=parse_word(info))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value195;
                    __freed_obj__ = 0;
                    list$1charph_push_back(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 464))->generics_type_names, "14struct.c", 464)),(char*)come_increment_ref_count(T_189));
                    __freed_obj__ = 0;
                    if(_if_conditional269=*((struct sInfo*)come_null_check(info, "14struct.c", 479))->p==62,                    __freed_obj__ = 0, 
                    _if_conditional269) {
                        ((struct sInfo*)come_null_check(info, "14struct.c", 467))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(T_189 && !__freed_obj__) { T_189 = come_decrement_ref_count(T_189, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional270=*((struct sInfo*)come_null_check(info, "14struct.c", 479))->p==44,                        __freed_obj__ = 0, 
                        _if_conditional270) {
                            ((struct sInfo*)come_null_check(info, "14struct.c", 472))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        else {
                            err_msg(info,"invalid generics struct definition");
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(T_189 && !__freed_obj__) { T_189 = come_decrement_ref_count(T_189, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                if(_if_conditional271=((struct sClass*)(right_value199=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 490))->generics_classes, "14struct.c", 490)),type_name_184,((void*)0))))!=((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199),
                (right_value199 && right_value199 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value199, 
                __freed_obj__ = 0, 
                _if_conditional271) {
                    err_msg(info,"redifined generics struct(%s)",type_name_184);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj61=generics_class_193;
                    generics_class_193=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value201=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value200=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 487)))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    if(__dec_obj61) { come_call_finalizer(sClass_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
                    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value200;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
                    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value201;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional272=((struct sClass*)(right_value202=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 494))->generics_classes, "14struct.c", 494)),type_name_184,((void*)0))))==((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202),
                (right_value202 && right_value202 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[1] = right_value202, 
                __freed_obj__ = 0, 
                _if_conditional272) {
                    map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 491))->generics_classes, "14struct.c", 491)),(char*)come_increment_ref_count(type_name_184),(struct sClass*)come_increment_ref_count(generics_class_193));
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_clear_stackframe();
                optional$2intbool_value((come_push_stackframe("14struct.c", 494),((struct optional$2intbool*)(right_value203=expected_next_character(123,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
                if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value203;
                __freed_obj__ = 0;
                while(_while_condtional30=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional30) {
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    multiple_assgin_var9=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("14struct.c", 499),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value204=parse_type(info,(_Bool)1,(_Bool)1)))));
                    type2_194=(struct sType*)come_increment_ref_count(multiple_assgin_var9->v1);
                    name_195=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
                    err_196=multiple_assgin_var9->v3;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value204;
                    __freed_obj__ = 0;
                    if(_if_conditional273=!err_196,                    __freed_obj__ = 0, 
                    _if_conditional273) {
                        printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "14struct.c", 502))->sname,((struct sInfo*)come_null_check(info, "14struct.c", 502))->sline);
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional274=*((struct sInfo*)come_null_check(info, "14struct.c", 536))->p==44,                    __freed_obj__ = 0, 
                    _if_conditional274) {
                        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(generics_class_193, "14struct.c", 507))->mFields, "14struct.c", 507)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value206=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value205=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 507)))),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(type2_194))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value205;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
                        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value206;
                        __freed_obj__ = 0;
                        while(_while_condtional31=*((struct sInfo*)come_null_check(info, "14struct.c", 531))->p==44,                        __freed_obj__ = 0, 
                        _while_condtional31) {
                            ((struct sInfo*)come_null_check(info, "14struct.c", 510))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            come_clear_stackframe();
                            name2_197=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("14struct.c", 513),((struct optional$2charphbool*)(right_value207=parse_word(info))))));
                            come_pop_stackframe();
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value207;
                            __freed_obj__ = 0;
                            type3_198=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(type2_194))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
                            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value208;
                            __freed_obj__ = 0;
                            if(_if_conditional275=*((struct sInfo*)come_null_check(info, "14struct.c", 529))->p==58,                            __freed_obj__ = 0, 
                            _if_conditional275) {
                                ((struct sInfo*)come_null_check(info, "14struct.c", 518))->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                no_comma_199=((struct sInfo*)come_null_check(info, "14struct.c", 521))->no_comma;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "14struct.c", 522))->no_comma=(_Bool)1;
                                __freed_obj__ = 0;
                                node_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value209;
                                __freed_obj__ = 0;
                                ((struct sInfo*)come_null_check(info, "14struct.c", 524))->no_comma=no_comma_199;
                                __freed_obj__ = 0;
                                __dec_obj62=((struct sType*)come_null_check(type3_198, "14struct.c", 526))->mSizeNum;
                                ((struct sType*)come_null_check(type3_198, "14struct.c", 526))->mSizeNum=(struct sNode*)come_increment_ref_count(node_200);
                                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                if(node_200 && !__freed_obj__) { node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0, 0, 0); } 
                            }
                            __freed_obj__ = 0;
                            list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(generics_class_193, "14struct.c", 529))->mFields, "14struct.c", 529)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value211=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value210=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 529)))),(char*)come_increment_ref_count(name2_197),(struct sType*)come_increment_ref_count(type3_198))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value210);
                            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value210;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value211);
                            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value211;
                            __freed_obj__ = 0;
                            if(name2_197 && !__freed_obj__) { name2_197 = come_decrement_ref_count(name2_197, (void*)0, (void*)0, 0, 0, 0); }
                            if(type3_198 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(generics_class_193, "14struct.c", 533))->mFields, "14struct.c", 533)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value213=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value212=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 533)))),(char*)come_increment_ref_count(name_195),(struct sType*)come_increment_ref_count(type2_194))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value212;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
                        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value213;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    optional$2intbool_value((come_push_stackframe("14struct.c", 536),((struct optional$2intbool*)(right_value214=expected_next_character(59,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value214;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional276=*((struct sInfo*)come_null_check(info, "14struct.c", 545))->p==125,                    __freed_obj__ = 0, 
                    _if_conditional276) {
                        ((struct sInfo*)come_null_check(info, "14struct.c", 541))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_195 && !__freed_obj__) { name_195 = come_decrement_ref_count(name_195, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(type2_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_194, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(name_195 && !__freed_obj__) { name_195 = come_decrement_ref_count(name_195, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                list$1charph_reset(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 548))->generics_type_names, "14struct.c", 548)));
                __freed_obj__ = 0;
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 550);
                _inf_obj_value3=come_increment_ref_count(((struct sGenericsStructNode*)(right_value216=sGenericsStructNode_initialize((struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value215=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "14struct.c", 550)))),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sGenericsStructNode_finalize;
                _inf_value3->clone=(void*)sGenericsStructNode_clone;
                _inf_value3->compile=(void*)sGenericsStructNode_compile;
                _inf_value3->sline=(void*)sGenericsStructNode_sline;
                _inf_value3->sname=(void*)sGenericsStructNode_sname;
                _inf_value3->terminated=(void*)sGenericsStructNode_terminated;
                _inf_value3->kind=(void*)sGenericsStructNode_kind;
                __result142__ = __result_obj__ = ((struct sNode*)(right_value219=_inf_value3));
                if(generics_class_193 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
                if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value215);
                if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value215;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value216);
                if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value216;
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
                if(generics_class_193 && !__freed_obj__) { come_call_finalizer(sClass_finalize,generics_class_193, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                __freed_obj__ = 0;
                if(_if_conditional281=((struct sClass*)(right_value220=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 561))->classes, "14struct.c", 561)),type_name_184,((void*)0))))==((void*)0),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220),
                (right_value220 && right_value220 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sClass_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value220, 
                __freed_obj__ = 0, 
                _if_conditional281) {
                    __dec_obj64=struct_class_202;
                    struct_class_202=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value222=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value221=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "14struct.c", 555)))),type_name_184,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
                    if(__dec_obj64) { come_call_finalizer(sClass_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value221;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
                    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value222;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj65=struct_class_202;
                    struct_class_202=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value224=sClass_clone(((struct sClass*)(right_value223=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 558))->classes, "14struct.c", 558)),type_name_184,((void*)0))))))));
                    if(__dec_obj65) { come_call_finalizer(sClass_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value223;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
                    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value224;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_clear_stackframe();
                optional$2intbool_value((come_push_stackframe("14struct.c", 561),((struct optional$2intbool*)(right_value225=expected_next_character(123,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
                if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value225;
                __freed_obj__ = 0;
                while(_while_condtional32=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional32) {
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    multiple_declare_203=(_Bool)0;
                    __freed_obj__ = 0;
                    {
                        p_204=((struct sInfo*)come_null_check(info, "14struct.c", 568))->p;
                        __freed_obj__ = 0;
                        sline_205=((struct sInfo*)come_null_check(info, "14struct.c", 569))->sline;
                        __freed_obj__ = 0;
                        no_output_err_206=((struct sInfo*)come_null_check(info, "14struct.c", 571))->no_output_err;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "14struct.c", 572))->no_output_err=(_Bool)1;
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        multiple_assgin_var10=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("14struct.c", 573),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value226=parse_type(info,(_Bool)1,(_Bool)1)))));
                        type_207=(struct sType*)come_increment_ref_count(multiple_assgin_var10->v1);
                        name_208=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
                        err_209=multiple_assgin_var10->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value226;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "14struct.c", 574))->no_output_err=no_output_err_206;
                        __freed_obj__ = 0;
                        if(_if_conditional282=err_209&&*((struct sInfo*)come_null_check(info, "14struct.c", 580))->p==44,                        __freed_obj__ = 0, 
                        _if_conditional282) {
                            multiple_declare_203=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "14struct.c", 580))->p=p_204;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "14struct.c", 581))->sline=sline_205;
                        __freed_obj__ = 0;
                        if(type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_208 && !__freed_obj__) { name_208 = come_decrement_ref_count(name_208, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional283=multiple_declare_203,                    __freed_obj__ = 0, 
                    _if_conditional283) {
                        come_clear_stackframe();
                        multiple_assgin_var11=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("14struct.c", 585),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value227=parse_type(info,(_Bool)0,(_Bool)1)))));
                        base_type_210=(struct sType*)come_increment_ref_count(multiple_assgin_var11->v1);
                        name_211=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
                        err_212=multiple_assgin_var11->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value227;
                        __freed_obj__ = 0;
                        multiple_assgin_var12=((struct tuple2$2sTypephcharph*)(right_value228=parse_variable_name((struct sType*)come_increment_ref_count(base_type_210),(_Bool)1,info)));
                        type2_213=(struct sType*)come_increment_ref_count(multiple_assgin_var12->v1);
                        name2_214=(char*)come_increment_ref_count(multiple_assgin_var12->v2);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228);
                        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value228;
                        __freed_obj__ = 0;
                        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(struct_class_202, "14struct.c", 589))->mFields, "14struct.c", 589)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value230=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value229=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 589)))),(char*)come_increment_ref_count(name2_214),(struct sType*)come_increment_ref_count(type2_213))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value229);
                        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value229;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value230);
                        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value230;
                        __freed_obj__ = 0;
                        while(_while_condtional33=*((struct sInfo*)come_null_check(info, "14struct.c", 599))->p==44,                        __freed_obj__ = 0, 
                        _while_condtional33) {
                            ((struct sInfo*)come_null_check(info, "14struct.c", 592))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            multiple_assgin_var13=((struct tuple2$2sTypephcharph*)(right_value231=parse_variable_name((struct sType*)come_increment_ref_count(base_type_210),(_Bool)0,info)));
                            type2_215=(struct sType*)come_increment_ref_count(multiple_assgin_var13->v1);
                            name2_216=(char*)come_increment_ref_count(multiple_assgin_var13->v2);
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value231;
                            __freed_obj__ = 0;
                            list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(struct_class_202, "14struct.c", 597))->mFields, "14struct.c", 597)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value233=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value232=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 597)))),(char*)come_increment_ref_count(name2_216),(struct sType*)come_increment_ref_count(type2_215))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value232;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
                            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value233;
                            __freed_obj__ = 0;
                            if(type2_215 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name2_216 && !__freed_obj__) { name2_216 = come_decrement_ref_count(name2_216, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(base_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_211 && !__freed_obj__) { name_211 = come_decrement_ref_count(name_211, (void*)0, (void*)0, 0, 0, 0); }
                        if(type2_213 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_213, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name2_214 && !__freed_obj__) { name2_214 = come_decrement_ref_count(name2_214, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        come_clear_stackframe();
                        multiple_assgin_var14=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("14struct.c", 601),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value234=parse_type(info,(_Bool)1,(_Bool)1)))));
                        type2_217=(struct sType*)come_increment_ref_count(multiple_assgin_var14->v1);
                        name_218=(char*)come_increment_ref_count(multiple_assgin_var14->v2);
                        err_219=multiple_assgin_var14->v3;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value234;
                        __freed_obj__ = 0;
                        if(_if_conditional284=!err_219,                        __freed_obj__ = 0, 
                        _if_conditional284) {
                            printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "14struct.c", 603))->sname,((struct sInfo*)come_null_check(info, "14struct.c", 603))->sline);
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        list$1tuple2$2charphsTypephph_push_back(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(struct_class_202, "14struct.c", 607))->mFields, "14struct.c", 607)),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value236=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value235=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "14struct.c", 607)))),(char*)come_increment_ref_count(name_218),(struct sType*)come_increment_ref_count(type2_217))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
                        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value235;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value236);
                        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value236;
                        __freed_obj__ = 0;
                        if(type2_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_217, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(name_218 && !__freed_obj__) { name_218 = come_decrement_ref_count(name_218, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    optional$2intbool_value((come_push_stackframe("14struct.c", 610),((struct optional$2intbool*)(right_value237=expected_next_character(59,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value237;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional285=*((struct sInfo*)come_null_check(info, "14struct.c", 619))->p==125,                    __freed_obj__ = 0, 
                    _if_conditional285) {
                        ((struct sInfo*)come_null_check(info, "14struct.c", 615))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1charph_reset(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "14struct.c", 622))->generics_type_names, "14struct.c", 622)));
                __freed_obj__ = 0;
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "14struct.c", 624);
                _inf_obj_value4=come_increment_ref_count(((struct sStructNode*)(right_value241=sStructNode_initialize((struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value238=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "14struct.c", 624)))),(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(type_name_184)))),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value240=sClass_clone(struct_class_202)))),(_Bool)1,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sStructNode_finalize;
                _inf_value4->clone=(void*)sStructNode_clone;
                _inf_value4->compile=(void*)sStructNode_compile;
                _inf_value4->sline=(void*)sStructNode_sline;
                _inf_value4->sname=(void*)sStructNode_sname;
                _inf_value4->terminated=(void*)sStructNode_terminated;
                _inf_value4->kind=(void*)sStructNode_kind;
                __result145__ = __result_obj__ = ((struct sNode*)(right_value246=_inf_value4));
                if(struct_class_202 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_202, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
                if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value238);
                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value238;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value239);
                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value239;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value240);
                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value240;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value241);
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value241;
                __freed_obj__ = 0;
                return __result145__;
                __freed_obj__ = 0;
                if(struct_class_202 && !__freed_obj__) { come_call_finalizer(sClass_finalize,struct_class_202, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(type_name_184 && !__freed_obj__) { type_name_184 = come_decrement_ref_count(type_name_184, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result146__ = __result_obj__ = ((struct sNode*)(right_value248=top_level_v97((char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(buf)))),head,head_sline,info)));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value247;
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sStructNobodyNode_finalize(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional258=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1))->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional258) {
                    if(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0))->mName && !__freed_obj__) { ((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0))->mName = come_decrement_ref_count(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional259=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->mClass!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional259) {
                    if(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1))->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 1))->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional260=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 3))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional260) {
                    if(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->sname && !__freed_obj__) { ((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sStructNobodyNode* sStructNobodyNode_clone(struct sStructNobodyNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional261;
struct sStructNobodyNode* __result135__;
void* right_value190;
struct sStructNobodyNode* result_186;
_Bool _if_conditional262;
void* right_value191;
char* __dec_obj55;
_Bool _if_conditional263;
void* right_value192;
struct sClass* __dec_obj56;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value193;
char* __dec_obj57;
struct sStructNobodyNode* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value190, 0, sizeof(void*));
memset(&result_186, 0, sizeof(struct sStructNobodyNode*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
                if(_if_conditional261=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional261) {
                    __result135__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result135__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_186=(struct sStructNobodyNode*)come_increment_ref_count(((struct sStructNobodyNode*)(right_value190=(struct sStructNobodyNode*)come_calloc(1, sizeof(struct sStructNobodyNode)*(1), "sStructNobodyNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value190;
                __freed_obj__ = 0;
                if(_if_conditional262=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 5))->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional262) {
                    __dec_obj55=((struct sStructNobodyNode*)come_null_check(result_186, "sStructNobodyNode_clone", 4))->mName;
                    ((struct sStructNobodyNode*)come_null_check(result_186, "sStructNobodyNode_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value191=string_clone(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 4))->mName))));
                    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value191;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional263=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 6))->mClass!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional263) {
                    __dec_obj56=((struct sStructNobodyNode*)come_null_check(result_186, "sStructNobodyNode_clone", 5))->mClass;
                    ((struct sStructNobodyNode*)come_null_check(result_186, "sStructNobodyNode_clone", 5))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value192=sClass_clone(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 5))->mClass))));
                    if(__dec_obj56) { come_call_finalizer(sClass_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value192;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional264=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional264) {
                    ((struct sStructNobodyNode*)come_null_check(result_186, "sStructNobodyNode_clone", 6))->sline=((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 6))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional265=self!=((void*)0)&&((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 8))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional265) {
                    __dec_obj57=((struct sStructNobodyNode*)come_null_check(result_186, "sStructNobodyNode_clone", 7))->sname;
                    ((struct sStructNobodyNode*)come_null_check(result_186, "sStructNobodyNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value193=string_clone(((struct sStructNobodyNode*)come_null_check(self, "sStructNobodyNode_clone", 7))->sname))));
                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value193;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result136__ = __result_obj__ = result_186;
                if(result_186 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result136__;
                __freed_obj__ = 0;
                if(result_186 && !__freed_obj__) { come_call_finalizer(sStructNobodyNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_reset(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_187;
_Bool _while_condtional28;
struct list_item$1charph* prev_it_188;
struct list$1charph* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_187, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_188, 0, sizeof(struct list_item$1charph*));
                    it_187=((struct list$1charph*)come_null_check(self, "./comelang2.h", 476))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional28=it_187!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional28) {
                        prev_it_188=it_187;
                        __freed_obj__ = 0;
                        it_187=((struct list_item$1charph*)come_null_check(it_187, "./comelang2.h", 479))->next;
                        __freed_obj__ = 0;
                        if(prev_it_188 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 486))->len=0;
                    __freed_obj__ = 0;
                    __result138__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result138__;
                    __freed_obj__ = 0;
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional267;
void* right_value196;
struct list_item$1charph* litem_190;
char* __dec_obj58;
_Bool _if_conditional268;
void* right_value197;
struct list_item$1charph* litem_191;
char* __dec_obj59;
void* right_value198;
struct list_item$1charph* litem_192;
char* __dec_obj60;
struct list$1charph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&litem_190, 0, sizeof(struct list_item$1charph*));
memset(&right_value197, 0, sizeof(void*));
memset(&litem_191, 0, sizeof(struct list_item$1charph*));
memset(&right_value198, 0, sizeof(void*));
memset(&litem_192, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional267=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional267) {
                            litem_190=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 272))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                            if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value196;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_190, "./comelang2.h", 274))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_190, "./comelang2.h", 275))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj58=((struct list_item$1charph*)come_null_check(litem_190, "./comelang2.h", 276))->item;
                            ((struct list_item$1charph*)come_null_check(litem_190, "./comelang2.h", 276))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_190;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 279))->head=litem_190;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional268=((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional268) {
                                litem_191=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value197=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 282))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value197;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 284))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 285))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj59=((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 286))->item;
                                ((struct list_item$1charph*)come_null_check(litem_191, "./comelang2.h", 286))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_191;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_191;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_192=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value198=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 292))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                                if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value198;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 294))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 295))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj60=((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 296))->item;
                                ((struct list_item$1charph*)come_null_check(litem_192, "./comelang2.h", 296))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_192;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_192;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 302))->len++;
                        __freed_obj__ = 0;
                        __result139__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result139__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sGenericsStructNode_finalize(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional277=self!=((void*)0)&&((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 1))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional277) {
                        if(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0))->sname && !__freed_obj__) { ((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0))->sname = come_decrement_ref_count(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sGenericsStructNode* sGenericsStructNode_clone(struct sGenericsStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional278;
struct sGenericsStructNode* __result140__;
void* right_value217;
struct sGenericsStructNode* result_201;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value218;
char* __dec_obj63;
struct sGenericsStructNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
memset(&result_201, 0, sizeof(struct sGenericsStructNode*));
memset(&right_value218, 0, sizeof(void*));
                    if(_if_conditional278=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional278) {
                        __result140__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result140__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_201=(struct sGenericsStructNode*)come_increment_ref_count(((struct sGenericsStructNode*)(right_value217=(struct sGenericsStructNode*)come_calloc(1, sizeof(struct sGenericsStructNode)*(1), "sGenericsStructNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value217;
                    __freed_obj__ = 0;
                    if(_if_conditional279=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional279) {
                        ((struct sGenericsStructNode*)come_null_check(result_201, "sGenericsStructNode_clone", 4))->sline=((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 4))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional280=self!=((void*)0)&&((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 6))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional280) {
                        __dec_obj63=((struct sGenericsStructNode*)come_null_check(result_201, "sGenericsStructNode_clone", 5))->sname;
                        ((struct sGenericsStructNode*)come_null_check(result_201, "sGenericsStructNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value218=string_clone(((struct sGenericsStructNode*)come_null_check(self, "sGenericsStructNode_clone", 5))->sname))));
                        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value218;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result141__ = __result_obj__ = result_201;
                    if(result_201 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result141__;
                    __freed_obj__ = 0;
                    if(result_201 && !__freed_obj__) { come_call_finalizer(sGenericsStructNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStructNode_finalize(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional286=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1))->mName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        if(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0))->mName && !__freed_obj__) { ((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0))->mName = come_decrement_ref_count(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional287=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->mClass!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional287) {
                        if(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1))->mClass && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 1))->mClass, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional288=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional288) {
                        if(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->sname && !__freed_obj__) { ((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->sname = come_decrement_ref_count(((struct sStructNode*)come_null_check(self, "sStructNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sStructNode* sStructNode_clone(struct sStructNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
struct sStructNode* __result143__;
void* right_value242;
struct sStructNode* result_220;
_Bool _if_conditional290;
void* right_value243;
char* __dec_obj66;
_Bool _if_conditional291;
void* right_value244;
struct sClass* __dec_obj67;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value245;
char* __dec_obj68;
_Bool _if_conditional294;
struct sStructNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&result_220, 0, sizeof(struct sStructNode*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
                    if(_if_conditional289=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional289) {
                        __result143__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result143__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_220=(struct sStructNode*)come_increment_ref_count(((struct sStructNode*)(right_value242=(struct sStructNode*)come_calloc(1, sizeof(struct sStructNode)*(1), "sStructNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value242;
                    __freed_obj__ = 0;
                    if(_if_conditional290=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_clone", 5))->mName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        __dec_obj66=((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 4))->mName;
                        ((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value243=string_clone(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 4))->mName))));
                        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
                        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value243;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional291=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_clone", 6))->mClass!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional291) {
                        __dec_obj67=((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 5))->mClass;
                        ((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 5))->mClass=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value244=sClass_clone(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 5))->mClass))));
                        if(__dec_obj67) { come_call_finalizer(sClass_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value244;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional292=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional292) {
                        ((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 6))->sline=((struct sStructNode*)come_null_check(self, "sStructNode_clone", 6))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional293=self!=((void*)0)&&((struct sStructNode*)come_null_check(self, "sStructNode_clone", 8))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional293) {
                        __dec_obj68=((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 7))->sname;
                        ((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(((struct sStructNode*)come_null_check(self, "sStructNode_clone", 7))->sname))));
                        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value245;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional294=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional294) {
                        ((struct sStructNode*)come_null_check(result_220, "sStructNode_clone", 8))->mOutput=((struct sStructNode*)come_null_check(self, "sStructNode_clone", 8))->mOutput;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result144__ = __result_obj__ = result_220;
                    if(result_220 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result144__;
                    __freed_obj__ = 0;
                    if(result_220 && !__freed_obj__) { come_call_finalizer(sStructNode_finalize,result_220, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool define_struct_221;
char* p_222;
int sline_223;
_Bool _if_conditional295;
void* right_value249;
char* type_name_224;
_Bool _if_conditional296;
void* right_value250;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value251;
char* type_name_225;
void* right_value252;
void* right_value253;
void* right_value254;
struct sNode* __result148__;
void* right_value255;
struct __current_stack1__ __current_stack1__;
void* right_value258;
struct sNode* result_226;
void* right_value259;
void* right_value260;
struct sNode* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&define_struct_221, 0, sizeof(_Bool));
memset(&p_222, 0, sizeof(char*));
memset(&sline_223, 0, sizeof(int));
memset(&right_value249, 0, sizeof(void*));
memset(&type_name_224, 0, sizeof(char*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&type_name_225, 0, sizeof(char*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value258, 0, sizeof(void*));
memset(&result_226, 0, sizeof(struct sNode*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    define_struct_221=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_222=((struct sInfo*)come_null_check(info, "14struct.c", 636))->p;
        __freed_obj__ = 0;
        sline_223=((struct sInfo*)come_null_check(info, "14struct.c", 637))->sline;
        __freed_obj__ = 0;
        if(_if_conditional295=charp_operator_equals(buf,"struct"),        __freed_obj__ = 0, 
        _if_conditional295) {
            come_clear_stackframe();
            type_name_224=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("14struct.c", 640),((struct optional$2charphbool*)(right_value249=parse_word(info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value249;
            __freed_obj__ = 0;
            if(_if_conditional296=*((struct sInfo*)come_null_check(info, "14struct.c", 649))->p==123,            __freed_obj__ = 0, 
            _if_conditional296) {
                ((char*)(right_value250=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value250;
                __freed_obj__ = 0;
                if(_if_conditional297=*((struct sInfo*)come_null_check(info, "14struct.c", 648))->p==59,                __freed_obj__ = 0, 
                _if_conditional297) {
                    define_struct_221=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(type_name_224 && !__freed_obj__) { type_name_224 = come_decrement_ref_count(type_name_224, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "14struct.c", 651))->p=p_222;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "14struct.c", 652))->sline=sline_223;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional298=define_struct_221,    __freed_obj__ = 0, 
    _if_conditional298) {
        come_clear_stackframe();
        type_name_225=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("14struct.c", 656),((struct optional$2charphbool*)(right_value251=parse_word(info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value251;
        __freed_obj__ = 0;
        __result148__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value254=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value253=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "14struct.c", 658)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=parse_struct((char*)come_increment_ref_count(type_name_225),info)))),(_Bool)1)));
        if(type_name_225 && !__freed_obj__) { type_name_225 = come_decrement_ref_count(type_name_225, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value252;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value253;
        __freed_obj__ = 0;
        return __result148__;
        __freed_obj__ = 0;
        if(type_name_225 && !__freed_obj__) { type_name_225 = come_decrement_ref_count(type_name_225, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    __current_stack1__.define_struct_221 = &define_struct_221;
    result_226=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("14struct.c", 665),((struct optional$2sNodephbool*)(right_value255=string_node_v13(buf,head,head_sline,info)))), "14struct.c", 665)),&__current_stack1__,(void*)method_block1_14structc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value255;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value258;
    __freed_obj__ = 0;
    __result152__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value260=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value259=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "14struct.c", 665)))),(struct sNode*)come_increment_ref_count(result_226),(_Bool)1)));
    if(result_226 && !__freed_obj__) { result_226 = come_decrement_ref_count(result_226, ((struct sNode*)result_226)->finalize, ((struct sNode*)result_226)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value259;
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
    if(result_226 && !__freed_obj__) { result_226 = come_decrement_ref_count(result_226, ((struct sNode*)result_226)->finalize, ((struct sNode*)result_226)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj69;
struct optional$2sNodephbool* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj69=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result147__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result147__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional299;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional299=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional299) {
                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
_Bool _if_conditional301;
struct sNode* __result149__;
struct sNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional300=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional300) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional301=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional301) {
                __result149__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result150__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result150__;
        __freed_obj__ = 0;
}

void method_block1_14structc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value256;
void* right_value257;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value256;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value257;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("14struct.c", 663), ((struct optional$2voidpbool*)(right_value257=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value256=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "14struct.c", 663))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

