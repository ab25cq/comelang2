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
void come_heap_init(int come_malloc, int come_debug);

void come_heap_final();

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

void stackframe();

void exception_stackframe();

void come_save_stackframe(char* sname, int sline);

void* come_null_check(void* mem, char* sname, int sline);

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);

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
    (come_push_stackframe("./comelang2.h", 108),perror(msg),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 109),stackframe(),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 110),exit(4),come_pop_stackframe());
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
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1997))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1997))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1998))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1998))->memory, "./comelang2.h", 1998))->buf;
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
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2007))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2007))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2008))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2008))->memory, "./comelang2.h", 2008))->buf;
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
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2017))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2017))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2018))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2018))->memory, "./comelang2.h", 2018))->buf;
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
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2027))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2027))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2028))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2028))->memory, "./comelang2.h", 2028))->buf;
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
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2037))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2037))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2038))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2038))->memory, "./comelang2.h", 2038))->buf;
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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value44;
struct sType* result_29;
_Bool _if_conditional91;
struct sType* __result31__;
int __exception_result_var_b7;
_Bool _if_conditional92;
struct sType* __result33__;
struct sClass* klass_30;
_Bool __exception_result_var_b8;
_Bool _if_conditional93;
void* right_value45;
struct sType* __exception_result_var_b9;
struct sType* result_type_31;
void* right_value46;
void* right_value48;
struct tuple1$1sTypeph* __exception_result_var_b10;
struct tuple1$1sTypeph* __dec_obj29;
void* right_value49;
void* right_value50;
struct list$1sTypeph* __exception_result_var_b11;
struct list$1sTypeph* new_param_types_32;
struct list$1sTypeph* o2_saved_33;
struct sType* __exception_result_var_b14;
struct sType* it_36;
_Bool __exception_result_var_b15;
_Bool _for_condtionalA1;
struct sType* __exception_result_var_b18;
void* right_value51;
struct sType* __exception_result_var_b19;
struct sType* new_param_type_39;
struct list$1sTypeph* __exception_result_var_b20;
struct list$1sTypeph* __dec_obj33;
_Bool _if_conditional100;
int generics_number_43;
int __exception_result_var_b21;
_Bool _if_conditional101;
void* right_value59;
struct optional$2sTypephbool* __exception_result_var_b23;
struct sClass* klass2_48;
int generics_number2_49;
_Bool _if_conditional106;
void* right_value60;
struct list$1sNodeph* array_num_50;
_Bool immutable__51;
int pointer_num_52;
_Bool heap_53;
_Bool no_heap_54;
_Bool no_calling_destructor_55;
_Bool exception__56;
_Bool null_value_57;
void* right_value61;
struct optional$2sTypephbool* __exception_result_var_b25;
void* right_value62;
struct sType* __dec_obj35;
_Bool _if_conditional107;
_Bool _if_conditional108;
_Bool _if_conditional109;
_Bool _if_conditional110;
_Bool _if_conditional111;
int __exception_result_var_b26;
_Bool _if_conditional112;
struct list$1sNodeph* __dec_obj36;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct list$1sTypeph* __exception_result_var_b27;
struct list$1sTypeph* o2_saved_60;
struct sType* __exception_result_var_b28;
struct sType* it_61;
_Bool __exception_result_var_b29;
_Bool _for_condtionalA2;
struct sType* __exception_result_var_b30;
void* right_value63;
struct sType* __exception_result_var_b31;
struct sType* type_62;
void* right_value64;
struct list$1sTypeph* __exception_result_var_b32;
_Bool __exception_result_var_b33;
_Bool _if_conditional115;
void* right_value65;
char* __exception_result_var_b34;
char* new_name_63;
int __exception_result_var_b35;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&right_value45, 0, sizeof(void*));
memset(&result_type_31, 0, sizeof(struct sType*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&new_param_types_32, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_33, 0, sizeof(struct list$1sTypeph*));
memset(&it_36, 0, sizeof(struct sType*));
memset(&right_value51, 0, sizeof(void*));
memset(&new_param_type_39, 0, sizeof(struct sType*));
memset(&generics_number_43, 0, sizeof(int));
memset(&right_value59, 0, sizeof(void*));
memset(&klass2_48, 0, sizeof(struct sClass*));
memset(&generics_number2_49, 0, sizeof(int));
memset(&right_value60, 0, sizeof(void*));
memset(&array_num_50, 0, sizeof(struct list$1sNodeph*));
memset(&immutable__51, 0, sizeof(_Bool));
memset(&pointer_num_52, 0, sizeof(int));
memset(&heap_53, 0, sizeof(_Bool));
memset(&no_heap_54, 0, sizeof(_Bool));
memset(&no_calling_destructor_55, 0, sizeof(_Bool));
memset(&exception__56, 0, sizeof(_Bool));
memset(&null_value_57, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&o2_saved_60, 0, sizeof(struct list$1sTypeph*));
memset(&it_61, 0, sizeof(struct sType*));
memset(&right_value63, 0, sizeof(void*));
memset(&type_62, 0, sizeof(struct sType*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&new_name_63, 0, sizeof(char*));
    result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional91=generics_type==((void*)0),    __freed_obj__ = 0, 
    _if_conditional91) {
        __result31__ = __result_obj__ = result_29;
        if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result31__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional92=(come_push_stackframe("04heap.c", 9),__exception_result_var_b7=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 9))->mGenericsTypes, "04heap.c", 9))), come_pop_stackframe(), __exception_result_var_b7)==0,    __freed_obj__ = 0, 
    _if_conditional92) {
        __result33__ = __result_obj__ = result_29;
        if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result33__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_30=((struct sType*)come_null_check(type, "04heap.c", 13))->mClass;
    __freed_obj__ = 0;
    if(_if_conditional93=(come_push_stackframe("04heap.c", 15),__exception_result_var_b8=string_operator_equals(((struct sClass*)come_null_check(klass_30, "04heap.c", 15))->mName,"lambda"), come_pop_stackframe(), __exception_result_var_b8),    __freed_obj__ = 0, 
    _if_conditional93) {
        result_type_31=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 16),__exception_result_var_b9=((struct sType*)(right_value45=solve_generics(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 16))->mResultType, "04heap.c", 16))->v1,generics_type,info))), come_pop_stackframe(), __exception_result_var_b9));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        __dec_obj29=((struct sType*)come_null_check(result_29, "04heap.c", 18))->mResultType;
        ((struct sType*)come_null_check(result_29, "04heap.c", 18))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count((come_push_stackframe("04heap.c", 18),__exception_result_var_b10=((struct tuple1$1sTypeph*)(right_value48=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value46=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 18)))),(struct sType*)come_increment_ref_count(result_type_31)))), come_pop_stackframe(), __exception_result_var_b10));
        if(__dec_obj29) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value48;
        __freed_obj__ = 0;
        new_param_types_32=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("04heap.c", 20),__exception_result_var_b11=((struct list$1sTypeph*)(right_value50=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value49=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "04heap.c", 20))))))), come_pop_stackframe(), __exception_result_var_b11));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value49;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value50;
        __freed_obj__ = 0;
        for(
        o2_saved_33=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 22))->mParamTypes)),it_36=(come_push_stackframe("04heap.c", 22),__exception_result_var_b14=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_33), "04heap.c", 22))), come_pop_stackframe(), __exception_result_var_b14) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !(come_push_stackframe("04heap.c", 22),__exception_result_var_b15=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_33), "04heap.c", 22))), come_pop_stackframe(), __exception_result_var_b15) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_36=(come_push_stackframe("04heap.c", 22),__exception_result_var_b18=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_33), "04heap.c", 22))), come_pop_stackframe(), __exception_result_var_b18) ,        __freed_obj__ = 0, 
        0        ){
            new_param_type_39=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 23),__exception_result_var_b19=((struct sType*)(right_value51=solve_generics(it_36,generics_type,info))), come_pop_stackframe(), __exception_result_var_b19));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value51;
            __freed_obj__ = 0;
            (come_push_stackframe("04heap.c", 25),__exception_result_var_b20=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(new_param_types_32, "04heap.c", 25)),(struct sType*)come_increment_ref_count(new_param_type_39)), come_pop_stackframe(), __exception_result_var_b20);
            __freed_obj__ = 0;
            if(new_param_type_39 && !__freed_obj__) { come_call_finalizer(sType_finalize,new_param_type_39, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_33 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj33=((struct sType*)come_null_check(result_29, "04heap.c", 28))->mParamTypes;
        ((struct sType*)come_null_check(result_29, "04heap.c", 28))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(new_param_types_32);
        if(__dec_obj33) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(result_type_31 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_31, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(new_param_types_32 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,new_param_types_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional100=((struct sClass*)come_null_check(klass_30, "04heap.c", 30))->mGenerics,        __freed_obj__ = 0, 
        _if_conditional100) {
            generics_number_43=((struct sClass*)come_null_check(klass_30, "04heap.c", 31))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional101=generics_number_43>=(come_push_stackframe("04heap.c", 33),__exception_result_var_b21=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type, "04heap.c", 33))->mGenericsTypes, "04heap.c", 33))), come_pop_stackframe(), __exception_result_var_b21),            __freed_obj__ = 0, 
            _if_conditional101) {
                (come_push_stackframe("04heap.c", 35),err_msg(info,"invalid generics parametor number"),come_pop_stackframe());
                __freed_obj__ = 0;
                (come_push_stackframe("04heap.c", 36),exit(2),come_pop_stackframe());
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            klass2_48=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 39),__exception_result_var_b23=((struct optional$2sTypephbool*)(right_value59=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 39))->mGenericsTypes,generics_number_43))), come_pop_stackframe(), __exception_result_var_b23)), "04heap.c", 39))->mClass;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = 0;
            generics_number2_49=((struct sClass*)come_null_check(klass2_48, "04heap.c", 41))->mGenericsNum;
            __freed_obj__ = 0;
            if(_if_conditional106=generics_number_43!=generics_number2_49,            __freed_obj__ = 0, 
            _if_conditional106) {
                array_num_50=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value60=list$1sNodephp_clone(((struct sType*)come_null_check(type, "04heap.c", 45))->mArrayNum))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value60;
                __freed_obj__ = 0;
                immutable__51=((struct sType*)come_null_check(type, "04heap.c", 46))->mImmutable;
                __freed_obj__ = 0;
                pointer_num_52=((struct sType*)come_null_check(type, "04heap.c", 47))->mPointerNum;
                __freed_obj__ = 0;
                heap_53=((struct sType*)come_null_check(type, "04heap.c", 48))->mHeap;
                __freed_obj__ = 0;
                no_heap_54=((struct sType*)come_null_check(type, "04heap.c", 50))->mNoHeap;
                __freed_obj__ = 0;
                no_calling_destructor_55=((struct sType*)come_null_check(type, "04heap.c", 51))->mNoCallingDestructor;
                __freed_obj__ = 0;
                exception__56=((struct sType*)come_null_check(type, "04heap.c", 52))->mException;
                __freed_obj__ = 0;
                null_value_57=((struct sType*)come_null_check(type, "04heap.c", 53))->mNullValue;
                __freed_obj__ = 0;
                __dec_obj35=result_29;
                result_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(optional$2sTypephbool_value((come_push_stackframe("04heap.c", 55),__exception_result_var_b25=((struct optional$2sTypephbool*)(right_value61=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(generics_type, "04heap.c", 55))->mGenericsTypes,generics_number_43))), come_pop_stackframe(), __exception_result_var_b25))))));
                if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value61;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value62;
                __freed_obj__ = 0;
                if(_if_conditional107=heap_53,                __freed_obj__ = 0, 
                _if_conditional107) {
                    ((struct sType*)come_null_check(result_29, "04heap.c", 58))->mHeap=heap_53;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional108=exception__56,                __freed_obj__ = 0, 
                _if_conditional108) {
                    ((struct sType*)come_null_check(result_29, "04heap.c", 61))->mException=exception__56;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=no_heap_54,                __freed_obj__ = 0, 
                _if_conditional109) {
                    ((struct sType*)come_null_check(result_29, "04heap.c", 64))->mNoHeap=(_Bool)1;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(result_29, "04heap.c", 65))->mHeap=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional110=no_calling_destructor_55,                __freed_obj__ = 0, 
                _if_conditional110) {
                    ((struct sType*)come_null_check(result_29, "04heap.c", 68))->mNoCallingDestructor=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional111=immutable__51,                __freed_obj__ = 0, 
                _if_conditional111) {
                    ((struct sType*)come_null_check(result_29, "04heap.c", 71))->mImmutable=immutable__51;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional112=(come_push_stackframe("04heap.c", 73),__exception_result_var_b26=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(array_num_50, "04heap.c", 73))), come_pop_stackframe(), __exception_result_var_b26)>0,                __freed_obj__ = 0, 
                _if_conditional112) {
                    __dec_obj36=((struct sType*)come_null_check(result_29, "04heap.c", 74))->mArrayNum;
                    ((struct sType*)come_null_check(result_29, "04heap.c", 74))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_50);
                    if(__dec_obj36) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional113=null_value_57,                __freed_obj__ = 0, 
                _if_conditional113) {
                    ((struct sType*)come_null_check(result_29, "04heap.c", 78))->mNullValue=null_value_57;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional114=pointer_num_52>0,                __freed_obj__ = 0, 
                _if_conditional114) {
                    ((struct sType*)come_null_check(result_29, "04heap.c", 82))->mPointerNum+=pointer_num_52;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(array_num_50 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_50, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            (come_push_stackframe("04heap.c", 87),__exception_result_var_b27=list$1sTypeph_reset(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_29, "04heap.c", 87))->mGenericsTypes, "04heap.c", 87))), come_pop_stackframe(), __exception_result_var_b27);
            __freed_obj__ = 0;
            for(
            o2_saved_60=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "04heap.c", 88))->mGenericsTypes)),it_61=(come_push_stackframe("04heap.c", 88),__exception_result_var_b28=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_60), "04heap.c", 88))), come_pop_stackframe(), __exception_result_var_b28) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            !(come_push_stackframe("04heap.c", 88),__exception_result_var_b29=list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_60), "04heap.c", 88))), come_pop_stackframe(), __exception_result_var_b29) ,            __freed_obj__ = 0, 
            _for_condtionalA2;            it_61=(come_push_stackframe("04heap.c", 88),__exception_result_var_b30=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_60), "04heap.c", 88))), come_pop_stackframe(), __exception_result_var_b30) ,            __freed_obj__ = 0, 
            0            ){
                type_62=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 89),__exception_result_var_b31=((struct sType*)(right_value63=solve_generics(it_61,generics_type,info))), come_pop_stackframe(), __exception_result_var_b31));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value63;
                __freed_obj__ = 0;
                (come_push_stackframe("04heap.c", 90),__exception_result_var_b32=list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_29, "04heap.c", 90))->mGenericsTypes, "04heap.c", 90)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(type_62))))), come_pop_stackframe(), __exception_result_var_b32);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value64;
                __freed_obj__ = 0;
                if(type_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_62, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_60 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional115=!(come_push_stackframe("04heap.c", 93),__exception_result_var_b33=output_generics_struct(result_29,generics_type,info), come_pop_stackframe(), __exception_result_var_b33),            __freed_obj__ = 0, 
            _if_conditional115) {
                new_name_63=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 95),__exception_result_var_b34=((char*)(right_value65=create_generics_name(type,info))), come_pop_stackframe(), __exception_result_var_b34));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value65;
                __freed_obj__ = 0;
                (come_push_stackframe("04heap.c", 96),__exception_result_var_b35=printf("output generics is failed(%s)",new_name_63), come_pop_stackframe(), __exception_result_var_b35);
                __freed_obj__ = 0;
                (come_push_stackframe("04heap.c", 97),exit(1),come_pop_stackframe());
                __freed_obj__ = 0;
                if(new_name_63 && !__freed_obj__) { new_name_63 = come_decrement_ref_count(new_name_63, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result50__ = __result_obj__ = result_29;
    if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
    if(result_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sType* __result13__;
void* right_value10;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional27;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
char* __dec_obj9;
_Bool _if_conditional29;
void* right_value22;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional33;
void* right_value30;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value31;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value38;
struct list$1charph* __dec_obj22;
_Bool _if_conditional52;
void* right_value39;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value40;
struct sNode* __dec_obj24;
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
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value42;
char* __dec_obj26;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value43;
char* __dec_obj27;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
        if(_if_conditional5=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional5) {
            __result13__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result13__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        if(_if_conditional22=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional22) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj7=((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value13;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional27) {
            __dec_obj8=((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            __dec_obj9=((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj13=((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional33) {
            __dec_obj17=((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value30;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional46=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional46) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional47) {
            __dec_obj18=((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_5, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj22=((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_5, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            __dec_obj23=((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_5, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            __dec_obj24=((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_5, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value40;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            __dec_obj25=((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_5, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            __dec_obj26=((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional88=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional88) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional89=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional89) {
            ((struct sType*)come_null_check(result_5, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional90=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional90) {
            __dec_obj27=((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_5, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result30__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result30__;
        __freed_obj__ = 0;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional9) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional12) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional18) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional19) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional20) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional21) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional7) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 174))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_6!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_7=it_6;
                        __freed_obj__ = 0;
                        it_6=((struct list_item$1sTypeph*)come_null_check(it_6, "./comelang2.h", 177))->next;
                        __freed_obj__ = 0;
                        if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional11=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional11) {
                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 174))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional2=it_8!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional2) {
                        prev_it_9=it_8;
                        __freed_obj__ = 0;
                        it_8=((struct list_item$1sNodeph*)come_null_check(it_8, "./comelang2.h", 177))->next;
                        __freed_obj__ = 0;
                        if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional13=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional13) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=((struct list$1charph*)come_null_check(self, "./comelang2.h", 174))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_10!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        prev_it_11=it_10;
                        __freed_obj__ = 0;
                        it_10=((struct list_item$1charph*)come_null_check(it_10, "./comelang2.h", 177))->next;
                        __freed_obj__ = 0;
                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional16=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional16) {
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result14__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
                if(_if_conditional24=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional24) {
                    __result14__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value11;
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    __dec_obj6=((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_12, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result15__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result15__;
                __freed_obj__ = 0;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional25=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional25) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
struct list$1sTypeph* __result16__;
void* right_value16;
void* right_value17;
struct list$1sTypeph* __exception_result_var_b1;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
struct list$1sTypeph* __exception_result_var_b2;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    __result16__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result16__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_13=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 193),__exception_result_var_b1=((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))), come_pop_stackframe(), __exception_result_var_b1));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17;
                __freed_obj__ = 0;
                it_14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 195))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    (come_push_stackframe("./comelang2.h", 197),__exception_result_var_b2=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 197)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 197))->item))))), come_pop_stackframe(), __exception_result_var_b2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 199))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result19__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result17__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result17__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
void* right_value18;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj10;
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj11;
void* right_value20;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj12;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 206))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 209))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 210))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj10=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 211))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 211))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 216))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 219))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 220))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 221))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 221))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 229))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 230))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 231))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 231))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_17;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_17;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len++;
                        __freed_obj__ = 0;
                        __result18__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result18__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
struct list$1sNodeph* __result20__;
void* right_value23;
void* right_value24;
struct list$1sNodeph* __exception_result_var_b3;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sNodeph* __exception_result_var_b4;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
                if(_if_conditional34=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    __result20__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_18=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 193),__exception_result_var_b3=((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))), come_pop_stackframe(), __exception_result_var_b3));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24;
                __freed_obj__ = 0;
                it_19=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 195))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_19!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    (come_push_stackframe("./comelang2.h", 197),__exception_result_var_b4=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 197)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 197))->item))))), come_pop_stackframe(), __exception_result_var_b4);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = 0;
                    it_19=((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 199))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result25__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result25__;
                __freed_obj__ = 0;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result21__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
void* right_value25;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj14;
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj15;
void* right_value27;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 206))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 209))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 210))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 211))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 211))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_20;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head=litem_20;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 216))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 219))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 220))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 221))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 221))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_21;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_21;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 229))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 230))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 231))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 231))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_22;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_22;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len++;
                        __freed_obj__ = 0;
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result22__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
struct sNode* __result23__;
void* right_value28;
struct sNode* result_23;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            __result23__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result23__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional39) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional40) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional41=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional42=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional42) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional43=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional43) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional44=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional44) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional45=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional45) {
                            ((struct sNode*)come_null_check(result_23, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result24__ = __result_obj__ = result_23;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result24__;
                        __freed_obj__ = 0;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct list$1charph* __result26__;
void* right_value32;
void* right_value33;
struct list$1charph* __exception_result_var_b5;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
struct list$1charph* __exception_result_var_b6;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
                if(_if_conditional49=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional49) {
                    __result26__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_24=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 193),__exception_result_var_b5=((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))), come_pop_stackframe(), __exception_result_var_b5));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
                it_25=((struct list$1charph*)come_null_check(self, "./comelang2.h", 195))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_25!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    (come_push_stackframe("./comelang2.h", 197),__exception_result_var_b6=list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 197)),(char*)come_increment_ref_count(((char*)(right_value37=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 197))->item))))), come_pop_stackframe(), __exception_result_var_b6);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
                    __freed_obj__ = 0;
                    it_25=((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 199))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result29__ = __result_obj__ = result_24;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result29__;
                __freed_obj__ = 0;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result27__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result27__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
void* right_value34;
struct list_item$1charph* litem_26;
char* __dec_obj19;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_27;
char* __dec_obj20;
void* right_value36;
struct list_item$1charph* litem_28;
char* __dec_obj21;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 206))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 209))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 210))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj19=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 211))->item;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 211))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_26;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head=litem_26;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 216))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 219))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 220))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj20=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 221))->item;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 221))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_27;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_27;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 229))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 230))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj21=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 231))->item;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 231))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_28;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_28;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len++;
                        __freed_obj__ = 0;
                        __result28__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result32__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 415))->len;
        __freed_obj__ = 0;
        return __result32__;
        __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value47;
struct sType* __dec_obj28;
struct tuple1$1sTypeph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
            __dec_obj28=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1780))->v1;
            ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1780))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value47=sType_clone(v1))));
            if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47;
            __freed_obj__ = 0;
            __result34__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result34__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
struct sType* result_34;
void* __exception_result_var_b12;
struct sType* __result35__;
_Bool _if_conditional95;
struct sType* __result36__;
struct sType* result_35;
void* __exception_result_var_b13;
struct sType* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_34, 0, sizeof(struct sType*));
memset(&result_35, 0, sizeof(struct sType*));
            if(_if_conditional94=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 338),__exception_result_var_b12=memset(&result_34,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b12);
                __freed_obj__ = 0;
                __result35__ = __result_obj__ = result_34;
                __freed_obj__ = 0;
                return __result35__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 341))->head;
            __freed_obj__ = 0;
            if(_if_conditional95=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 343))->it,            __freed_obj__ = 0, 
            _if_conditional95) {
                __result36__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
                __freed_obj__ = 0;
                return __result36__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 348),__exception_result_var_b13=memset(&result_35,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b13);
            __freed_obj__ = 0;
            __result37__ = __result_obj__ = result_35;
            __freed_obj__ = 0;
            return __result37__;
            __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result38__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
            __freed_obj__ = 0;
            return __result38__;
            __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional96;
struct sType* result_37;
void* __exception_result_var_b16;
struct sType* __result39__;
_Bool _if_conditional97;
struct sType* __result40__;
struct sType* result_38;
void* __exception_result_var_b17;
struct sType* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_37, 0, sizeof(struct sType*));
memset(&result_38, 0, sizeof(struct sType*));
            if(_if_conditional96=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 355),__exception_result_var_b16=memset(&result_37,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b16);
                __freed_obj__ = 0;
                __result39__ = __result_obj__ = result_37;
                __freed_obj__ = 0;
                return __result39__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
            __freed_obj__ = 0;
            if(_if_conditional97=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 361))->it,            __freed_obj__ = 0, 
            _if_conditional97) {
                __result40__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
                __freed_obj__ = 0;
                return __result40__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 366),__exception_result_var_b17=memset(&result_38,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b17);
            __freed_obj__ = 0;
            __result41__ = __result_obj__ = result_38;
            __freed_obj__ = 0;
            return __result41__;
            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
void* right_value52;
struct list_item$1sTypeph* litem_40;
struct sType* __dec_obj30;
_Bool _if_conditional99;
void* right_value53;
struct list_item$1sTypeph* litem_41;
struct sType* __dec_obj31;
void* right_value54;
struct list_item$1sTypeph* litem_42;
struct sType* __dec_obj32;
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_41, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_42, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional98=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 276))->len==0,                __freed_obj__ = 0, 
                _if_conditional98) {
                    litem_40=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj30=((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 281))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_40, "./comelang2.h", 281))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_40;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head=litem_40;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional99=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 286))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        litem_41=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 289))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj31=((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 291))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_41, "./comelang2.h", 291))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_41;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_41;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_42=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                        if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value54;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 299))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj32=((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 301))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_42, "./comelang2.h", 301))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_42;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_42;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result42__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result42__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
struct list_item$1sTypeph* it_44;
int i_45;
_Bool _while_condtional7;
_Bool _if_conditional103;
void* right_value55;
void* right_value56;
struct optional$2sTypephbool* __result44__;
struct sType* default_value_46;
void* __exception_result_var_b22;
void* right_value57;
void* right_value58;
struct optional$2sTypephbool* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_44, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_45, 0, sizeof(int));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&default_value_46, 0, sizeof(struct sType*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
                if(_if_conditional102=position<0,                __freed_obj__ = 0, 
                _if_conditional102) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 740))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_44=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 743))->head;
                __freed_obj__ = 0;
                i_45=0;
                __freed_obj__ = 0;
                while(_while_condtional7=it_44!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional7) {
                    if(_if_conditional103=position==i_45,                    __freed_obj__ = 0, 
                    _if_conditional103) {
                        __result44__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value56=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value55=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_44, "./comelang2.h", 747))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                        if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value55;
                        __freed_obj__ = 0;
                        return __result44__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_44=((struct list_item$1sTypeph*)come_null_check(it_44, "./comelang2.h", 749))->next;
                    __freed_obj__ = 0;
                    i_45++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 754),__exception_result_var_b22=memset(&default_value_46,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b22);
                __freed_obj__ = 0;
                __result45__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sTypephbool*)(right_value58=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value57=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_46),(_Bool)0))));
                if(default_value_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value58;
                __freed_obj__ = 0;
                return __result45__;
                __freed_obj__ = 0;
                if(default_value_46 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj34;
struct optional$2sTypephbool* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj34=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 40))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 40))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                            __freed_obj__ = 0;
                            __result43__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result43__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional104=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional104) {
                                    if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
struct sType* default_value_47;
void* __exception_result_var_b24;
struct sType* __result46__;
struct sType* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_47, 0, sizeof(struct sType*));
                if(_if_conditional105=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional105) {
                    __freed_obj__ = 0;
                    (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b24=memset(&default_value_47,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b24);
                    __freed_obj__ = 0;
                    __result46__ = __result_obj__ = default_value_47;
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                else {
                    __result47__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result48__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 415))->len;
                    __freed_obj__ = 0;
                    return __result48__;
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_58;
_Bool _while_condtional8;
struct list_item$1sTypeph* prev_it_59;
struct list$1sTypeph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1sTypeph*));
                it_58=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 481))->head;
                __freed_obj__ = 0;
                while(_while_condtional8=it_58!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional8) {
                    prev_it_59=it_58;
                    __freed_obj__ = 0;
                    it_58=((struct list_item$1sTypeph*)come_null_check(it_58, "./comelang2.h", 484))->next;
                    __freed_obj__ = 0;
                    if(prev_it_59 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 488))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 489))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 491))->len=0;
                __freed_obj__ = 0;
                __result49__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
}

struct sType* solve_type(struct sType* type, struct sType* generics_type, struct list$1sTypeph* method_generics_types, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value66;
struct sType* result_64;
_Bool _if_conditional116;
void* right_value67;
struct sType* __exception_result_var_b36;
struct sType* __dec_obj37;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&result_64, 0, sizeof(struct sType*));
memset(&right_value67, 0, sizeof(void*));
    result_64=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value66;
    __freed_obj__ = 0;
    if(_if_conditional116=generics_type,    __freed_obj__ = 0, 
    _if_conditional116) {
        __dec_obj37=result_64;
        result_64=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 109),__exception_result_var_b36=((struct sType*)(right_value67=solve_generics(result_64,generics_type,info))), come_pop_stackframe(), __exception_result_var_b36));
        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result51__ = __result_obj__ = result_64;
    if(result_64 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_64, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result51__;
    __freed_obj__ = 0;
    if(result_64 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_64, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int get_right_value_id_from_obj(char* obj){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_65;
_Bool _if_conditional117;
_Bool _while_condtional9;
_Bool _if_conditional118;
long int __exception_result_var_b37;
int __exception_result_var_b38;
_Bool _if_conditional119;
long int __exception_result_var_b39;
_Bool __exception_result_var_b40;
_Bool _if_conditional120;
int n_66;
_Bool __exception_result_var_b41;
_Bool _while_condtional10;
int __result52__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_65, 0, sizeof(char*));
memset(&n_66, 0, sizeof(int));
    p_65=obj;
    __freed_obj__ = 0;
    if(_if_conditional117=*p_65==40,    __freed_obj__ = 0, 
    _if_conditional117) {
        p_65++;
        __freed_obj__ = 0;
        while(_while_condtional9=*p_65!=41,        __freed_obj__ = 0, 
        _while_condtional9) {
            p_65++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        p_65++;
        __freed_obj__ = 0;
        if(_if_conditional118=*p_65==40,        __freed_obj__ = 0, 
        _if_conditional118) {
            p_65++;
            __freed_obj__ = 0;
            if(_if_conditional119=(come_push_stackframe("04heap.c", 128),__exception_result_var_b38=memcmp(p_65,"right_value",(come_push_stackframe("04heap.c", 128),__exception_result_var_b37=strlen("right_value"), come_pop_stackframe(), __exception_result_var_b37)), come_pop_stackframe(), __exception_result_var_b38)==0,            __freed_obj__ = 0, 
            _if_conditional119) {
                p_65+=(come_push_stackframe("04heap.c", 129),__exception_result_var_b39=strlen("right_value"), come_pop_stackframe(), __exception_result_var_b39);
                __freed_obj__ = 0;
                if(_if_conditional120=(come_push_stackframe("04heap.c", 130),__exception_result_var_b40=xisdigit(*p_65), come_pop_stackframe(), __exception_result_var_b40),                __freed_obj__ = 0, 
                _if_conditional120) {
                    n_66=0;
                    __freed_obj__ = 0;
                    while(_while_condtional10=(come_push_stackframe("04heap.c", 132),__exception_result_var_b41=xisdigit(*p_65), come_pop_stackframe(), __exception_result_var_b41),                    __freed_obj__ = 0, 
                    _while_condtional10) {
                        n_66=n_66*10+*p_65-48;
                        __freed_obj__ = 0;
                        p_65++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result52__ = n_66;
                    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result52__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result53__ = -1;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, (void*)0, (void*)0, 0, 1, 0); }
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
void* right_value68;
char* __exception_result_var_b42;
char* __result54__;
void* right_value69;
struct sRightValueObject* new_value_67;
struct sType* __dec_obj38;
void* right_value70;
char* __exception_result_var_b43;
char* __dec_obj39;
void* right_value71;
char* __dec_obj40;
struct list$1sRightValueObjectph* __exception_result_var_b44;
void* right_value75;
char* __exception_result_var_b45;
char* buf_71;
void* right_value76;
struct optional$2charphbool* __exception_result_var_b46;
void* right_value77;
char* __exception_result_var_b48;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&new_value_67, 0, sizeof(struct sRightValueObject*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&buf_71, 0, sizeof(char*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
    if(_if_conditional121=((struct sInfo*)come_null_check(info, "04heap.c", 147))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional121) {
        __result54__ = __result_obj__ = (come_push_stackframe("04heap.c", 148),__exception_result_var_b42=((char*)(right_value68=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b42);
        if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value68;
        __freed_obj__ = 0;
        return __result54__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    new_value_67=(struct sRightValueObject*)come_increment_ref_count(((struct sRightValueObject*)(right_value69=(struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 150))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value69;
    __freed_obj__ = 0;
    __dec_obj38=((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 151))->mType;
    ((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 151))->mType=(struct sType*)come_increment_ref_count(type);
    if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 152))->mFreed=(_Bool)0;
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 153))->mID=gRightValueNum;
    __freed_obj__ = 0;
    __dec_obj39=((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 154))->mVarName;
    ((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 154))->mVarName=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 154),__exception_result_var_b43=((char*)(right_value70=xsprintf("right_value%d",gRightValueNum++))), come_pop_stackframe(), __exception_result_var_b43));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value70;
    __freed_obj__ = 0;
    __dec_obj40=((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 155))->mFunName;
    ((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 155))->mFunName=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 155))->come_fun, "04heap.c", 155))->mName))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value71;
    __freed_obj__ = 0;
    ((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 156))->mBlockLevel=((struct sInfo*)come_null_check(info, "04heap.c", 156))->block_level;
    __freed_obj__ = 0;
    (come_push_stackframe("04heap.c", 158),__exception_result_var_b44=list$1sRightValueObjectph_push_back(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 158))->right_value_objects, "04heap.c", 158)),(struct sRightValueObject*)come_increment_ref_count(new_value_67)), come_pop_stackframe(), __exception_result_var_b44);
    __freed_obj__ = 0;
    buf_71=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 160),__exception_result_var_b45=((char*)(right_value75=xsprintf("void* right_value%d;\n",gRightValueNum-1))), come_pop_stackframe(), __exception_result_var_b45));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value75;
    __freed_obj__ = 0;
    (come_push_stackframe("04heap.c", 161),add_come_code_at_function_head(info,buf_71),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("04heap.c", 162),add_come_code_at_function_head2(info,"memset(&right_value%d, 0, sizeof(void*));\n",gRightValueNum-1),come_pop_stackframe());
    __freed_obj__ = 0;
    __result58__ = __result_obj__ = ((char*)come_null_check((come_push_stackframe("04heap.c", 164),__exception_result_var_b48=((char*)(right_value77=xsprintf("((%s)(%s=%s))",optional$2charphbool_value((come_push_stackframe("04heap.c", 164),__exception_result_var_b46=((struct optional$2charphbool*)(right_value76=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b46)),((struct sRightValueObject*)come_null_check(new_value_67, "04heap.c", 164))->mVarName,obj))), come_pop_stackframe(), __exception_result_var_b48), "04heap.c", 164));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_67 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_71 && !__freed_obj__) { buf_71 = come_decrement_ref_count(buf_71, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value76;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value77;
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(new_value_67 && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,new_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_71 && !__freed_obj__) { buf_71 = come_decrement_ref_count(buf_71, (void*)0, (void*)0, 0, 0, 0); }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional122=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional122) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 0))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional123=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional123) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 1))->mVarName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional124=self!=((void*)0)&&((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional124) {
            if(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName && !__freed_obj__) { ((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName = come_decrement_ref_count(((struct sRightValueObject*)come_null_check(self, "sRightValueObject_finalize", 2))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional125;
void* right_value72;
struct list_item$1sRightValueObjectph* litem_68;
struct sRightValueObject* __dec_obj41;
_Bool _if_conditional127;
void* right_value73;
struct list_item$1sRightValueObjectph* litem_69;
struct sRightValueObject* __dec_obj42;
void* right_value74;
struct list_item$1sRightValueObjectph* litem_70;
struct sRightValueObject* __dec_obj43;
struct list$1sRightValueObjectph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&litem_68, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value73, 0, sizeof(void*));
memset(&litem_69, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&right_value74, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional125=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 276))->len==0,        __freed_obj__ = 0, 
        _if_conditional125) {
            litem_68=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value72=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 277))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value72;
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 279))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 280))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj41=((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 281))->item;
            ((struct list_item$1sRightValueObjectph*)come_null_check(litem_68, "./comelang2.h", 281))->item=(struct sRightValueObject*)come_increment_ref_count(item);
            if(__dec_obj41) { come_call_finalizer(sRightValueObject_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_68;
            __freed_obj__ = 0;
            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 284))->head=litem_68;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional127=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 286))->len==1,            __freed_obj__ = 0, 
            _if_conditional127) {
                litem_69=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value73=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 287))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value73;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_69, "./comelang2.h", 289))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 289))->head;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_69, "./comelang2.h", 290))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj42=((struct list_item$1sRightValueObjectph*)come_null_check(litem_69, "./comelang2.h", 291))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_69, "./comelang2.h", 291))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj42) { come_call_finalizer(sRightValueObject_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_69;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_69;
                __freed_obj__ = 0;
            }
            else {
                litem_70=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(right_value74=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang2.h", 297))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value74;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 299))->prev=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 299))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 300))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj43=((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 301))->item;
                ((struct list_item$1sRightValueObjectph*)come_null_check(litem_70, "./comelang2.h", 301))->item=(struct sRightValueObject*)come_increment_ref_count(item);
                if(__dec_obj43) { come_call_finalizer(sRightValueObject_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_70;
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_70;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 307))->len++;
        __freed_obj__ = 0;
        __result55__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result55__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional126=self!=((void*)0)&&((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional126) {
                    if(((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sRightValueObject_finalize,((struct list_item$1sRightValueObjectph*)come_null_check(self, "list_item$1sRightValueObjectphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
char* default_value_72;
void* __exception_result_var_b47;
char* __result56__;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_72, 0, sizeof(char*));
        if(_if_conditional128=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional128) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b47=memset(&default_value_72,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b47);
            __freed_obj__ = 0;
            __result56__ = __result_obj__ = default_value_72;
            __freed_obj__ = 0;
            return __result56__;
            __freed_obj__ = 0;
        }
        else {
            __result57__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 67))->v1;
            __freed_obj__ = 0;
            return __result57__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional129=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional129) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_73;
struct list$1sRightValueObjectph* o2_saved_74;
struct sRightValueObject* __exception_result_var_b51;
struct sRightValueObject* it_77;
_Bool __exception_result_var_b52;
_Bool _for_condtionalA3;
struct sRightValueObject* __exception_result_var_b55;
_Bool _if_conditional134;
struct list$1sRightValueObjectph* __exception_result_var_b57;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_73, 0, sizeof(int));
memset(&o2_saved_74, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_77, 0, sizeof(struct sRightValueObject*));
    i_73=0;
    __freed_obj__ = 0;
    for(
    o2_saved_74=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 170))->right_value_objects)),it_77=(come_push_stackframe("04heap.c", 170),__exception_result_var_b51=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_74), "04heap.c", 170))), come_pop_stackframe(), __exception_result_var_b51) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA3=    !(come_push_stackframe("04heap.c", 170),__exception_result_var_b52=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_74), "04heap.c", 170))), come_pop_stackframe(), __exception_result_var_b52) ,    __freed_obj__ = 0, 
    _for_condtionalA3;    it_77=(come_push_stackframe("04heap.c", 170),__exception_result_var_b55=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_74), "04heap.c", 170))), come_pop_stackframe(), __exception_result_var_b55) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional134=((struct sRightValueObject*)come_null_check(it_77, "04heap.c", 171))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional134) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_73++;
        __freed_obj__ = 0;
    }
    if(o2_saved_74 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    (come_push_stackframe("04heap.c", 177),__exception_result_var_b57=list$1sRightValueObjectph_delete(((struct list$1sRightValueObjectph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 177))->right_value_objects, "04heap.c", 177)),i_73,i_73+1), come_pop_stackframe(), __exception_result_var_b57);
    __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
struct sRightValueObject* result_75;
void* __exception_result_var_b49;
struct sRightValueObject* __result59__;
_Bool _if_conditional131;
struct sRightValueObject* __result60__;
struct sRightValueObject* result_76;
void* __exception_result_var_b50;
struct sRightValueObject* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_75, 0, sizeof(struct sRightValueObject*));
memset(&result_76, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional130=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional130) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 338),__exception_result_var_b49=memset(&result_75,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b49);
            __freed_obj__ = 0;
            __result59__ = __result_obj__ = result_75;
            __freed_obj__ = 0;
            return __result59__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 341))->head;
        __freed_obj__ = 0;
        if(_if_conditional131=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 343))->it,        __freed_obj__ = 0, 
        _if_conditional131) {
            __result60__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
            __freed_obj__ = 0;
            return __result60__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 348),__exception_result_var_b50=memset(&result_76,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b50);
        __freed_obj__ = 0;
        __result61__ = __result_obj__ = result_76;
        __freed_obj__ = 0;
        return __result61__;
        __freed_obj__ = 0;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result62__ = self==((void*)0)||((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
        __freed_obj__ = 0;
        return __result62__;
        __freed_obj__ = 0;
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional132;
struct sRightValueObject* result_78;
void* __exception_result_var_b53;
struct sRightValueObject* __result63__;
_Bool _if_conditional133;
struct sRightValueObject* __result64__;
struct sRightValueObject* result_79;
void* __exception_result_var_b54;
struct sRightValueObject* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct sRightValueObject*));
memset(&result_79, 0, sizeof(struct sRightValueObject*));
        if(_if_conditional132=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional132) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 355),__exception_result_var_b53=memset(&result_78,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b53);
            __freed_obj__ = 0;
            __result63__ = __result_obj__ = result_78;
            __freed_obj__ = 0;
            return __result63__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
        __freed_obj__ = 0;
        if(_if_conditional133=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 361))->it,        __freed_obj__ = 0, 
        _if_conditional133) {
            __result64__ = __result_obj__ = ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
            __freed_obj__ = 0;
            return __result64__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 366),__exception_result_var_b54=memset(&result_79,0,sizeof(struct sRightValueObject*)), come_pop_stackframe(), __exception_result_var_b54);
        __freed_obj__ = 0;
        __result65__ = __result_obj__ = result_79;
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_80;
_Bool _while_condtional11;
struct list_item$1sRightValueObjectph* prev_it_81;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_80, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_81, 0, sizeof(struct list_item$1sRightValueObjectph*));
        it_80=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 174))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_80!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_81=it_80;
            __freed_obj__ = 0;
            it_80=((struct list_item$1sRightValueObjectph*)come_null_check(it_80, "./comelang2.h", 177))->next;
            __freed_obj__ = 0;
            if(prev_it_81 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_81, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
int tmp_82;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
struct list$1sRightValueObjectph* __result66__;
_Bool _if_conditional141;
struct list$1sRightValueObjectph* __exception_result_var_b56;
_Bool _if_conditional142;
struct list_item$1sRightValueObjectph* it_85;
int i_86;
_Bool _while_condtional13;
_Bool _if_conditional143;
struct list_item$1sRightValueObjectph* prev_it_87;
_Bool _if_conditional144;
_Bool _if_conditional145;
struct list_item$1sRightValueObjectph* it_88;
int i_89;
_Bool _while_condtional14;
_Bool _if_conditional146;
_Bool _if_conditional147;
struct list_item$1sRightValueObjectph* prev_it_90;
struct list_item$1sRightValueObjectph* it_91;
struct list_item$1sRightValueObjectph* head_prev_it_92;
struct list_item$1sRightValueObjectph* tail_it_93;
int i_94;
_Bool _while_condtional15;
_Bool _if_conditional148;
_Bool _if_conditional149;
_Bool _if_conditional150;
struct list_item$1sRightValueObjectph* prev_it_95;
_Bool _if_conditional151;
_Bool _if_conditional152;
struct list$1sRightValueObjectph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_82, 0, sizeof(int));
memset(&it_85, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_86, 0, sizeof(int));
memset(&prev_it_87, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_88, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_89, 0, sizeof(int));
memset(&prev_it_90, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&it_91, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&head_prev_it_92, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&tail_it_93, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&i_94, 0, sizeof(int));
memset(&prev_it_95, 0, sizeof(struct list_item$1sRightValueObjectph*));
        if(_if_conditional135=head<0,        __freed_obj__ = 0, 
        _if_conditional135) {
            head+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 513))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional136=tail<0,        __freed_obj__ = 0, 
        _if_conditional136) {
            tail+=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 516))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional137=head>tail,        __freed_obj__ = 0, 
        _if_conditional137) {
            tmp_82=tail;
            __freed_obj__ = 0;
            tail=head;
            __freed_obj__ = 0;
            head=tmp_82;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional138=head<0,        __freed_obj__ = 0, 
        _if_conditional138) {
            head=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional139=tail>((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 529))->len,        __freed_obj__ = 0, 
        _if_conditional139) {
            tail=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 530))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional140=head==tail,        __freed_obj__ = 0, 
        _if_conditional140) {
            __result66__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result66__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional141=head==0&&tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 537))->len,        __freed_obj__ = 0, 
        _if_conditional141) {
            (come_push_stackframe("./comelang2.h", 539),__exception_result_var_b56=list$1sRightValueObjectph_reset(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 539))), come_pop_stackframe(), __exception_result_var_b56);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional142=head==0,            __freed_obj__ = 0, 
            _if_conditional142) {
                it_85=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 542))->head;
                __freed_obj__ = 0;
                i_86=0;
                __freed_obj__ = 0;
                while(_while_condtional13=it_85!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional13) {
                    if(_if_conditional143=i_86<tail,                    __freed_obj__ = 0, 
                    _if_conditional143) {
                        prev_it_87=it_85;
                        __freed_obj__ = 0;
                        it_85=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 548))->next;
                        __freed_obj__ = 0;
                        i_86++;
                        __freed_obj__ = 0;
                        if(prev_it_87 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_87, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 553))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional144=i_86==tail,                        __freed_obj__ = 0, 
                        _if_conditional144) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 556))->head=it_85;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 557))->head, "./comelang2.h", 557))->prev=((void*)0);
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_85=((struct list_item$1sRightValueObjectph*)come_null_check(it_85, "./comelang2.h", 561))->next;
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
                if(_if_conditional145=tail==((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 566))->len,                __freed_obj__ = 0, 
                _if_conditional145) {
                    it_88=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 567))->head;
                    __freed_obj__ = 0;
                    i_89=0;
                    __freed_obj__ = 0;
                    while(_while_condtional14=it_88!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional14) {
                        if(_if_conditional146=i_89==head,                        __freed_obj__ = 0, 
                        _if_conditional146) {
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 571))->tail=((struct list_item$1sRightValueObjectph*)come_null_check(it_88, "./comelang2.h", 571))->prev;
                            __freed_obj__ = 0;
                            ((struct list_item$1sRightValueObjectph*)come_null_check(((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 572))->tail, "./comelang2.h", 572))->next=((void*)0);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional147=i_89>=head,                        __freed_obj__ = 0, 
                        _if_conditional147) {
                            prev_it_90=it_88;
                            __freed_obj__ = 0;
                            it_88=((struct list_item$1sRightValueObjectph*)come_null_check(it_88, "./comelang2.h", 578))->next;
                            __freed_obj__ = 0;
                            i_89++;
                            __freed_obj__ = 0;
                            if(prev_it_90 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 583))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_88=((struct list_item$1sRightValueObjectph*)come_null_check(it_88, "./comelang2.h", 586))->next;
                            __freed_obj__ = 0;
                            i_89++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    it_91=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 592))->head;
                    __freed_obj__ = 0;
                    head_prev_it_92=((void*)0);
                    __freed_obj__ = 0;
                    tail_it_93=((void*)0);
                    __freed_obj__ = 0;
                    i_94=0;
                    __freed_obj__ = 0;
                    while(_while_condtional15=it_91!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional15) {
                        if(_if_conditional148=i_94==head,                        __freed_obj__ = 0, 
                        _if_conditional148) {
                            head_prev_it_92=((struct list_item$1sRightValueObjectph*)come_null_check(it_91, "./comelang2.h", 601))->prev;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional149=i_94==tail,                        __freed_obj__ = 0, 
                        _if_conditional149) {
                            tail_it_93=it_91;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional150=i_94>=head&&i_94<tail,                        __freed_obj__ = 0, 
                        _if_conditional150) {
                            prev_it_95=it_91;
                            __freed_obj__ = 0;
                            it_91=((struct list_item$1sRightValueObjectph*)come_null_check(it_91, "./comelang2.h", 611))->next;
                            __freed_obj__ = 0;
                            i_94++;
                            __freed_obj__ = 0;
                            if(prev_it_95 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 616))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_91=((struct list_item$1sRightValueObjectph*)come_null_check(it_91, "./comelang2.h", 619))->next;
                            __freed_obj__ = 0;
                            i_94++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional151=head_prev_it_92!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional151) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(head_prev_it_92, "./comelang2.h", 625))->next=tail_it_93;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional152=tail_it_93!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional152) {
                        ((struct list_item$1sRightValueObjectph*)come_null_check(tail_it_93, "./comelang2.h", 628))->prev=head_prev_it_92;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result68__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sRightValueObjectph* it_83;
_Bool _while_condtional12;
struct list_item$1sRightValueObjectph* prev_it_84;
struct list$1sRightValueObjectph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_83, 0, sizeof(struct list_item$1sRightValueObjectph*));
memset(&prev_it_84, 0, sizeof(struct list_item$1sRightValueObjectph*));
                it_83=((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 481))->head;
                __freed_obj__ = 0;
                while(_while_condtional12=it_83!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional12) {
                    prev_it_84=it_83;
                    __freed_obj__ = 0;
                    it_83=((struct list_item$1sRightValueObjectph*)come_null_check(it_83, "./comelang2.h", 484))->next;
                    __freed_obj__ = 0;
                    if(prev_it_84 && !__freed_obj__) { come_call_finalizer(list_item$1sRightValueObjectphp_finalize,prev_it_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 488))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 489))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1sRightValueObjectph*)come_null_check(self, "./comelang2.h", 491))->len=0;
                __freed_obj__ = 0;
                __result67__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result67__;
                __freed_obj__ = 0;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* klass_96;
void* right_value78;
struct optional$2charphbool* __exception_result_var_b58;
char* type_name_97;
void* right_value79;
char* __exception_result_var_b61;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&klass_96, 0, sizeof(struct sClass*));
memset(&right_value78, 0, sizeof(void*));
memset(&type_name_97, 0, sizeof(char*));
memset(&right_value79, 0, sizeof(void*));
    klass_96=((struct sType*)come_null_check(type, "04heap.c", 182))->mClass;
    __freed_obj__ = 0;
    type_name_97=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 184),__exception_result_var_b58=((struct optional$2charphbool*)(right_value78=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b58)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value78;
    __freed_obj__ = 0;
    __result70__ = __result_obj__ = (come_push_stackframe("04heap.c", 186),__exception_result_var_b61=((char*)(right_value79=xsprintf("(%s)come_increment_ref_count(%s)",type_name_97,obj))), come_pop_stackframe(), __exception_result_var_b61);
    if(type_name_97 && !__freed_obj__) { type_name_97 = come_decrement_ref_count(type_name_97, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value79;
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
    if(type_name_97 && !__freed_obj__) { type_name_97 = come_decrement_ref_count(type_name_97, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
int __exception_result_var_b59;
int __exception_result_var_b60;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional153=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 72))->v2,        __freed_obj__ = 0, 
        _if_conditional153) {
            (come_push_stackframe("./comelang2.h", 73),__exception_result_var_b59=puts("Exception: at"), come_pop_stackframe(), __exception_result_var_b59);
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 74),exception_stackframe(),come_pop_stackframe());
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 75),__exception_result_var_b60=puts("abort."), come_pop_stackframe(), __exception_result_var_b60);
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 76),exit(2),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result69__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 78))->v1;
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* stack_saved_98;
struct list$1sRightValueObjectph* right_value_objects_99;
struct sClass* klass_100;
static int dec_num_101=0;
void* right_value80;
char* __exception_result_var_b62;
char* name_102;
void* right_value81;
struct optional$2charphbool* __exception_result_var_b63;
_Bool no_decrement_103;
_Bool no_free_104;
_Bool _if_conditional154;
void* right_value82;
char* __exception_result_var_b64;
char* c_value_105;
struct sClass* klass_106;
char* class_name_107;
char* fun_name_108;
void* right_value83;
struct sType* type2_109;
void* right_value84;
char* __exception_result_var_b65;
char* fun_name2_110;
struct sFun* finalizer_111;
int __exception_result_var_b66;
_Bool _if_conditional155;
void* right_value94;
struct optional$2sFunpbool* __exception_result_var_b71;
_Bool _if_conditional162;
void* right_value95;
char* __exception_result_var_b73;
char* none_generics_name_117;
void* right_value96;
char* __exception_result_var_b74;
char* generics_fun_name_118;
void* right_value106;
struct optional$2sGenericsFunpbool* __exception_result_var_b78;
struct sGenericsFun* generics_fun_123;
_Bool _if_conditional168;
_Bool __exception_result_var_b80;
_Bool _if_conditional169;
int __exception_result_var_b81;
void* right_value107;
struct optional$2sFunpbool* __exception_result_var_b82;
int i_124;
_Bool _for_condtionalA4;
void* right_value108;
char* __exception_result_var_b83;
char* new_fun_name_125;
void* right_value109;
struct optional$2sFunpbool* __exception_result_var_b84;
_Bool _if_conditional170;
void* right_value110;
char* __exception_result_var_b85;
char* __dec_obj44;
_Bool _if_conditional171;
void* right_value111;
struct optional$2sFunpbool* __exception_result_var_b86;
_Bool _if_conditional172;
void* right_value112;
struct tuple2$2sFunpcharph* __exception_result_var_b87;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_126;
char* new_fun_name_127;
char* __dec_obj45;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value113;
struct optional$2charphbool* __exception_result_var_b88;
char* type_name_128;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value114;
char* __exception_result_var_b89;
_Bool _if_conditional178;
void* right_value115;
struct optional$2charphbool* __exception_result_var_b90;
char* type_name_129;
void* right_value116;
char* __exception_result_var_b91;
void* right_value117;
char* __exception_result_var_b92;
struct list$1sRightValueObjectph* __dec_obj46;
struct list$1CVALUEph* __dec_obj47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_98, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_99, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_100, 0, sizeof(struct sClass*));
memset(&right_value80, 0, sizeof(void*));
memset(&name_102, 0, sizeof(char*));
memset(&right_value81, 0, sizeof(void*));
memset(&no_decrement_103, 0, sizeof(_Bool));
memset(&no_free_104, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
memset(&c_value_105, 0, sizeof(char*));
memset(&klass_106, 0, sizeof(struct sClass*));
memset(&class_name_107, 0, sizeof(char*));
memset(&fun_name_108, 0, sizeof(char*));
memset(&right_value83, 0, sizeof(void*));
memset(&type2_109, 0, sizeof(struct sType*));
memset(&right_value84, 0, sizeof(void*));
memset(&fun_name2_110, 0, sizeof(char*));
memset(&finalizer_111, 0, sizeof(struct sFun*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&none_generics_name_117, 0, sizeof(char*));
memset(&right_value96, 0, sizeof(void*));
memset(&generics_fun_name_118, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&generics_fun_123, 0, sizeof(struct sGenericsFun*));
memset(&right_value107, 0, sizeof(void*));
memset(&i_124, 0, sizeof(int));
memset(&right_value108, 0, sizeof(void*));
memset(&new_fun_name_125, 0, sizeof(char*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&fun_126, 0, sizeof(struct sFun*));
memset(&new_fun_name_127, 0, sizeof(char*));
memset(&fun_126, 0, sizeof(struct sFun*));
memset(&new_fun_name_127, 0, sizeof(char*));
memset(&right_value113, 0, sizeof(void*));
memset(&type_name_128, 0, sizeof(char*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&type_name_129, 0, sizeof(char*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
    stack_saved_98=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 191))->stack);
    __freed_obj__ = 0;
    right_value_objects_99=((struct sInfo*)come_null_check(info, "04heap.c", 192))->right_value_objects;
    __freed_obj__ = 0;
    klass_100=((struct sType*)come_null_check(type, "04heap.c", 194))->mClass;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    name_102=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 198),__exception_result_var_b62=((char*)(right_value80=xsprintf("__dec_obj%d",++dec_num_101))), come_pop_stackframe(), __exception_result_var_b62));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80;
    __freed_obj__ = 0;
    (come_push_stackframe("04heap.c", 199),add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 199),__exception_result_var_b63=((struct optional$2charphbool*)(right_value81=make_define_var(type,name_102,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b63))),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value81;
    __freed_obj__ = 0;
    (come_push_stackframe("04heap.c", 201),add_come_code(info,"%s=%s;\n",name_102,obj),come_pop_stackframe());
    __freed_obj__ = 0;
    obj=name_102;
    __freed_obj__ = 0;
    no_decrement_103=(_Bool)0;
    __freed_obj__ = 0;
    no_free_104=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional154=((struct sType*)come_null_check(type, "04heap.c", 207))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional154) {
        c_value_105=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 208),__exception_result_var_b64=((char*)(right_value82=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b64));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value82;
        __freed_obj__ = 0;
        klass_106=((struct sType*)come_null_check(type, "04heap.c", 210))->mClass;
        __freed_obj__ = 0;
        class_name_107=((struct sClass*)come_null_check(klass_106, "04heap.c", 212))->mName;
        __freed_obj__ = 0;
        fun_name_108="finalize";
        __freed_obj__ = 0;
        type2_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(type))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value83;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_109, "04heap.c", 217))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        fun_name2_110=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 219),__exception_result_var_b65=((char*)(right_value84=create_method_name(type,(_Bool)0,fun_name_108,info))), come_pop_stackframe(), __exception_result_var_b65));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value84;
        __freed_obj__ = 0;
        finalizer_111=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional155=(come_push_stackframe("04heap.c", 222),__exception_result_var_b66=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 222))->mGenericsTypes, "04heap.c", 222))), come_pop_stackframe(), __exception_result_var_b66)>0,        __freed_obj__ = 0, 
        _if_conditional155) {
            finalizer_111=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 223),__exception_result_var_b71=((struct optional$2sFunpbool*)(right_value94=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 223))->funcs,fun_name2_110))), come_pop_stackframe(), __exception_result_var_b71));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value94;
            __freed_obj__ = 0;
            if(_if_conditional162=finalizer_111==((void*)0),            __freed_obj__ = 0, 
            _if_conditional162) {
                none_generics_name_117=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 226),__exception_result_var_b73=((char*)(right_value95=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_109, "04heap.c", 226))->mClass, "04heap.c", 226))->mName))), come_pop_stackframe(), __exception_result_var_b73));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value95;
                __freed_obj__ = 0;
                generics_fun_name_118=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 228),__exception_result_var_b74=((char*)(right_value96=xsprintf("%s_%s",none_generics_name_117,fun_name_108))), come_pop_stackframe(), __exception_result_var_b74));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value96;
                __freed_obj__ = 0;
                generics_fun_123=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 229),__exception_result_var_b78=((struct optional$2sGenericsFunpbool*)(right_value106=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 229))->generics_funcs,generics_fun_name_118))), come_pop_stackframe(), __exception_result_var_b78));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value106);
                if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value106;
                __freed_obj__ = 0;
                if(_if_conditional168=generics_fun_123,                __freed_obj__ = 0, 
                _if_conditional168) {
                    if(_if_conditional169=!(come_push_stackframe("04heap.c", 232),__exception_result_var_b80=create_generics_fun((char*)come_increment_ref_count(fun_name2_110),generics_fun_123,type,info), come_pop_stackframe(), __exception_result_var_b80),                    __freed_obj__ = 0, 
                    _if_conditional169) {
                        (come_push_stackframe("04heap.c", 234),__exception_result_var_b81=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 234))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 234))->sline), come_pop_stackframe(), __exception_result_var_b81);
                        __freed_obj__ = 0;
                        (come_push_stackframe("04heap.c", 235),exit(2),come_pop_stackframe());
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    finalizer_111=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 237),__exception_result_var_b82=((struct optional$2sFunpbool*)(right_value107=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 237))->funcs,fun_name2_110))), come_pop_stackframe(), __exception_result_var_b82));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value107;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(none_generics_name_117 && !__freed_obj__) { none_generics_name_117 = come_decrement_ref_count(none_generics_name_117, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_118 && !__freed_obj__) { generics_fun_name_118 = come_decrement_ref_count(generics_fun_name_118, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            __freed_obj__ = 0;
            for(
            i_124=128-1 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            i_124>=1 ,            __freed_obj__ = 0, 
            _for_condtionalA4;            i_124-- ,            __freed_obj__ = 0, 
            0            ){
                new_fun_name_125=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 244),__exception_result_var_b83=((char*)(right_value108=xsprintf("%s_v%d",fun_name2_110,i_124))), come_pop_stackframe(), __exception_result_var_b83));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value108;
                __freed_obj__ = 0;
                finalizer_111=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 245),__exception_result_var_b84=((struct optional$2sFunpbool*)(right_value109=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 245))->funcs,new_fun_name_125))), come_pop_stackframe(), __exception_result_var_b84));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value109);
                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value109;
                __freed_obj__ = 0;
                if(_if_conditional170=finalizer_111,                __freed_obj__ = 0, 
                _if_conditional170) {
                    __dec_obj44=fun_name2_110;
                    fun_name2_110=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 248),__exception_result_var_b85=((char*)(right_value110=__builtin_string(new_fun_name_125))), come_pop_stackframe(), __exception_result_var_b85));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value110;
                    __freed_obj__ = 0;
                    if(new_fun_name_125 && !__freed_obj__) { new_fun_name_125 = come_decrement_ref_count(new_fun_name_125, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(new_fun_name_125 && !__freed_obj__) { new_fun_name_125 = come_decrement_ref_count(new_fun_name_125, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional171=finalizer_111==((void*)0),            __freed_obj__ = 0, 
            _if_conditional171) {
                finalizer_111=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 254),__exception_result_var_b86=((struct optional$2sFunpbool*)(right_value111=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 254))->funcs,fun_name2_110))), come_pop_stackframe(), __exception_result_var_b86));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value111;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional172=finalizer_111==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 258))->mClass, "04heap.c", 258))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 258))->mClass, "04heap.c", 258))->mNumber,        __freed_obj__ = 0, 
        _if_conditional172) {
            multiple_assgin_var1=(come_push_stackframe("04heap.c", 260),__exception_result_var_b87=((struct tuple2$2sFunpcharph*)(right_value112=create_finalizer_automatically(type,fun_name_108,info))), come_pop_stackframe(), __exception_result_var_b87);
            fun_126=multiple_assgin_var1->v1;
            new_fun_name_127=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value112;
            __freed_obj__ = 0;
            __dec_obj45=fun_name2_110;
            fun_name2_110=(char*)come_increment_ref_count(new_fun_name_127);
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = 0;
            finalizer_111=fun_126;
            __freed_obj__ = 0;
            if(new_fun_name_127 && !__freed_obj__) { new_fun_name_127 = come_decrement_ref_count(new_fun_name_127, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional174=finalizer_111!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional174) {
            if(_if_conditional175=((struct sClass*)come_null_check(klass_106, "04heap.c", 268))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 268))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional175) {
                type_name_128=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 269),__exception_result_var_b88=((struct optional$2charphbool*)(right_value113=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b88)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value113;
                __freed_obj__ = 0;
                if(_if_conditional176=c_value_105,                __freed_obj__ = 0, 
                _if_conditional176) {
                    (come_push_stackframe("04heap.c", 271),add_come_last_code2(info,"if(%s) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_105,fun_name2_110,c_value_105,type_name_128,c_value_105,type_name_128,c_value_105,((struct sType*)come_null_check(type, "04heap.c", 271))->mAllocaValue,no_decrement_103,no_free_104,force_delete_),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(type_name_128 && !__freed_obj__) { type_name_128 = come_decrement_ref_count(type_name_128, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional177=c_value_105,                __freed_obj__ = 0, 
                _if_conditional177) {
                    (come_push_stackframe("04heap.c", 276),add_come_last_code2(info,(come_push_stackframe("04heap.c", 276),__exception_result_var_b89=((char*)(right_value114=xsprintf("if(%s) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_105,fun_name2_110,c_value_105,((struct sType*)come_null_check(type, "04heap.c", 276))->mAllocaValue,no_decrement_103,no_free_104,force_delete_))), come_pop_stackframe(), __exception_result_var_b89)),come_pop_stackframe());
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value114;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional178=((struct sClass*)come_null_check(klass_106, "04heap.c", 281))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 281))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional178) {
                type_name_129=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 282),__exception_result_var_b90=((struct optional$2charphbool*)(right_value115=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b90)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value115;
                __freed_obj__ = 0;
                (come_push_stackframe("04heap.c", 283),add_come_last_code2(info,(come_push_stackframe("04heap.c", 283),__exception_result_var_b91=((char*)(right_value116=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, 0,0,0); }\n",name_102,name_102,name_102,type_name_129,name_102,type_name_129,name_102))), come_pop_stackframe(), __exception_result_var_b91)),come_pop_stackframe());
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value116;
                __freed_obj__ = 0;
                if(type_name_129 && !__freed_obj__) { type_name_129 = come_decrement_ref_count(type_name_129, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                (come_push_stackframe("04heap.c", 286),add_come_last_code2(info,(come_push_stackframe("04heap.c", 286),__exception_result_var_b92=((char*)(right_value117=xsprintf("if(%s) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, 0,0,0); }\n",name_102,name_102,name_102))), come_pop_stackframe(), __exception_result_var_b92)),come_pop_stackframe());
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value117;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(c_value_105 && !__freed_obj__) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name2_110 && !__freed_obj__) { fun_name2_110 = come_decrement_ref_count(fun_name2_110, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj46=((struct sInfo*)come_null_check(info, "04heap.c", 291))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 291))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_99);
    if(__dec_obj46) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj47=((struct sInfo*)come_null_check(info, "04heap.c", 292))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 292))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_98);
    if(__dec_obj47) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_98 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(name_102 && !__freed_obj__) { name_102 = come_decrement_ref_count(name_102, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_112;
void* __exception_result_var_b67;
unsigned int __exception_result_var_b68;
unsigned int hash_113;
unsigned int it_114;
_Bool _while_condtional16;
_Bool _if_conditional156;
void* right_value85;
struct optional$2boolbool* __exception_result_var_b69;
_Bool _if_conditional158;
void* right_value86;
void* right_value87;
struct optional$2sFunpbool* __result74__;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value88;
void* right_value89;
struct optional$2sFunpbool* __result75__;
void* right_value90;
void* right_value91;
struct optional$2sFunpbool* __result76__;
void* right_value92;
void* right_value93;
struct optional$2sFunpbool* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_112, 0, sizeof(struct sFun*));
memset(&hash_113, 0, sizeof(unsigned int));
memset(&it_114, 0, sizeof(unsigned int));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 1590),__exception_result_var_b67=memset(&default_value_112,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b67);
                __freed_obj__ = 0;
                hash_113=(come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b68=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1592))), come_pop_stackframe(), __exception_result_var_b68)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->size;
                __freed_obj__ = 0;
                it_114=hash_113;
                __freed_obj__ = 0;
                while(_while_condtional16=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional16) {
                    if(_if_conditional156=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1596))->item_existance[it_114],                    __freed_obj__ = 0, 
                    _if_conditional156) {
                        if(_if_conditional158=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1598),__exception_result_var_b69=((struct optional$2boolbool*)(right_value85=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1598))->keys[it_114], "./comelang2.h", 1598)),key))), come_pop_stackframe(), __exception_result_var_b69)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85),
                        (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value85, 
                        __freed_obj__ = 0, 
                        _if_conditional158) {
                            __result74__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value87=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value86=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1600)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1600))->items[it_114],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value86;
                            __freed_obj__ = 0;
                            return __result74__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_114++;
                        __freed_obj__ = 0;
                        if(_if_conditional159=it_114>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1605))->size,                        __freed_obj__ = 0, 
                        _if_conditional159) {
                            it_114=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional160=it_114==hash_113,                            __freed_obj__ = 0, 
                            _if_conditional160) {
                                __result75__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value89=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value88=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_112,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value88;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
                                if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value89;
                                __freed_obj__ = 0;
                                return __result75__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result76__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sFunpbool*)(right_value91=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value90=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1613))),default_value_112,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value90;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value91);
                        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value91;
                        __freed_obj__ = 0;
                        return __result76__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result77__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sFunpbool*)(right_value93=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value92=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1617))),default_value_112,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value92;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value93);
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value93;
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional157;
_Bool default_value_115;
void* __exception_result_var_b70;
_Bool __result71__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_115, 0, sizeof(_Bool));
                            if(_if_conditional157=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional157) {
                                __freed_obj__ = 0;
                                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b70=memset(&default_value_115,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b70);
                                __freed_obj__ = 0;
                                __result71__ = default_value_115;
                                __freed_obj__ = 0;
                                return __result71__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result72__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                                __freed_obj__ = 0;
                                return __result72__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
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

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                                __freed_obj__ = 0;
                                __result73__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result73__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
struct sFun* default_value_116;
void* __exception_result_var_b72;
struct sFun* __result78__;
struct sFun* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_116, 0, sizeof(struct sFun*));
                if(_if_conditional161=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional161) {
                    __freed_obj__ = 0;
                    (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b72=memset(&default_value_116,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b72);
                    __freed_obj__ = 0;
                    __result78__ = __result_obj__ = default_value_116;
                    __freed_obj__ = 0;
                    return __result78__;
                    __freed_obj__ = 0;
                }
                else {
                    __result79__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                    __freed_obj__ = 0;
                    return __result79__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sGenericsFun* default_value_119;
void* __exception_result_var_b75;
unsigned int __exception_result_var_b76;
unsigned int hash_120;
unsigned int it_121;
_Bool _while_condtional17;
_Bool _if_conditional163;
void* right_value97;
struct optional$2boolbool* __exception_result_var_b77;
_Bool _if_conditional164;
void* right_value98;
void* right_value99;
struct optional$2sGenericsFunpbool* __result81__;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value100;
void* right_value101;
struct optional$2sGenericsFunpbool* __result82__;
void* right_value102;
void* right_value103;
struct optional$2sGenericsFunpbool* __result83__;
void* right_value104;
void* right_value105;
struct optional$2sGenericsFunpbool* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_119, 0, sizeof(struct sGenericsFun*));
memset(&hash_120, 0, sizeof(unsigned int));
memset(&it_121, 0, sizeof(unsigned int));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
                    __freed_obj__ = 0;
                    (come_push_stackframe("./comelang2.h", 1590),__exception_result_var_b75=memset(&default_value_119,0,sizeof(struct sGenericsFun*)), come_pop_stackframe(), __exception_result_var_b75);
                    __freed_obj__ = 0;
                    hash_120=(come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b76=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1592))), come_pop_stackframe(), __exception_result_var_b76)%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1592))->size;
                    __freed_obj__ = 0;
                    it_121=hash_120;
                    __freed_obj__ = 0;
                    while(_while_condtional17=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional17) {
                        if(_if_conditional163=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1596))->item_existance[it_121],                        __freed_obj__ = 0, 
                        _if_conditional163) {
                            if(_if_conditional164=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1598),__exception_result_var_b77=((struct optional$2boolbool*)(right_value97=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1598))->keys[it_121], "./comelang2.h", 1598)),key))), come_pop_stackframe(), __exception_result_var_b77)),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97),
                            (right_value97 && right_value97 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value97, 
                            __freed_obj__ = 0, 
                            _if_conditional164) {
                                __result81__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)(right_value99=optional$2sGenericsFunpbool_initialize((struct optional$2sGenericsFunpbool*)come_increment_ref_count(((struct optional$2sGenericsFunpbool*)(right_value98=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1600)))),((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1600))->items[it_121],(_Bool)1)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value98;
                                __freed_obj__ = 0;
                                return __result81__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_121++;
                            __freed_obj__ = 0;
                            if(_if_conditional165=it_121>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1605))->size,                            __freed_obj__ = 0, 
                            _if_conditional165) {
                                it_121=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional166=it_121==hash_120,                                __freed_obj__ = 0, 
                                _if_conditional166) {
                                    __result82__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sGenericsFunpbool*)(right_value101=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value100=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1609))),default_value_119,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value100;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
                                    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value101;
                                    __freed_obj__ = 0;
                                    return __result82__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __result83__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sGenericsFunpbool*)(right_value103=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value102=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1613))),default_value_119,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value102;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
                            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value103;
                            __freed_obj__ = 0;
                            return __result83__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result84__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sGenericsFunpbool*)(right_value105=optional$2sGenericsFunpbool_initialize(((struct optional$2sGenericsFunpbool*)(right_value104=(struct optional$2sGenericsFunpbool*)come_calloc(1, sizeof(struct optional$2sGenericsFunpbool)*(1), "./comelang2.h", 1617))),default_value_119,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value104;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value105);
                    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value105;
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
}

static struct optional$2sGenericsFunpbool* optional$2sGenericsFunpbool_initialize(struct optional$2sGenericsFunpbool* self, struct sGenericsFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sGenericsFunpbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                                    __freed_obj__ = 0;
                                    ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                                    __freed_obj__ = 0;
                                    __result80__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result80__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sGenericsFunpboolp_finalize(struct optional$2sGenericsFunpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sGenericsFun* optional$2sGenericsFunpbool_value(struct optional$2sGenericsFunpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional167;
struct sGenericsFun* default_value_122;
void* __exception_result_var_b79;
struct sGenericsFun* __result85__;
struct sGenericsFun* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_122, 0, sizeof(struct sGenericsFun*));
                    if(_if_conditional167=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional167) {
                        __freed_obj__ = 0;
                        (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b79=memset(&default_value_122,0,sizeof(struct sGenericsFun*)), come_pop_stackframe(), __exception_result_var_b79);
                        __freed_obj__ = 0;
                        __result85__ = __result_obj__ = default_value_122;
                        __freed_obj__ = 0;
                        return __result85__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result86__ = __result_obj__ = ((struct optional$2sGenericsFunpbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                        __freed_obj__ = 0;
                        return __result86__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional173;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional173=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional173) {
                    if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_130;
_Bool _while_condtional18;
struct list_item$1CVALUEph* prev_it_131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_130, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_131, 0, sizeof(struct list_item$1CVALUEph*));
        it_130=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 174))->head;
        __freed_obj__ = 0;
        while(_while_condtional18=it_130!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional18) {
            prev_it_131=it_130;
            __freed_obj__ = 0;
            it_130=((struct list_item$1CVALUEph*)come_null_check(it_130, "./comelang2.h", 177))->next;
            __freed_obj__ = 0;
            if(prev_it_131 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_131, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional179=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
_Bool _if_conditional181;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional180=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional181=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional181) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* stack_saved_132;
struct list$1sRightValueObjectph* right_value_objects_133;
struct sType* type_before_134;
_Bool _if_conditional182;
int __exception_result_var_b93;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value118;
char* __exception_result_var_b94;
char* c_value_135;
struct sClass* klass_136;
char* class_name_137;
char* fun_name_138;
void* right_value119;
struct sType* type2_139;
void* right_value120;
char* __exception_result_var_b95;
char* fun_name2_140;
struct sFun* finalizer_141;
int __exception_result_var_b96;
_Bool _if_conditional185;
void* right_value121;
struct optional$2sFunpbool* __exception_result_var_b97;
_Bool _if_conditional186;
void* right_value122;
char* __exception_result_var_b98;
char* none_generics_name_142;
void* right_value123;
char* __exception_result_var_b99;
char* generics_fun_name_143;
void* right_value124;
struct optional$2sGenericsFunpbool* __exception_result_var_b100;
struct sGenericsFun* generics_fun_144;
_Bool _if_conditional187;
_Bool __exception_result_var_b101;
_Bool _if_conditional188;
int __exception_result_var_b102;
void* right_value125;
struct optional$2sFunpbool* __exception_result_var_b103;
int i_145;
_Bool _for_condtionalA5;
void* right_value126;
char* __exception_result_var_b104;
char* new_fun_name_146;
void* right_value127;
struct optional$2sFunpbool* __exception_result_var_b105;
_Bool _if_conditional189;
void* right_value128;
char* __exception_result_var_b106;
char* __dec_obj48;
_Bool _if_conditional190;
void* right_value129;
struct optional$2sFunpbool* __exception_result_var_b107;
_Bool _if_conditional191;
void* right_value130;
struct tuple2$2sFunpcharph* __exception_result_var_b108;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun_147;
char* new_fun_name_148;
char* __dec_obj49;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value131;
struct optional$2charphbool* __exception_result_var_b109;
char* type_name_149;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value132;
char* __exception_result_var_b110;
void* right_value133;
char* __exception_result_var_b111;
_Bool _if_conditional201;
void* right_value134;
char* __exception_result_var_b112;
void* right_value135;
char* __exception_result_var_b113;
_Bool _if_conditional202;
struct list$1tuple2$2charphsTypephph* o2_saved_150;
struct tuple2$2charphsTypeph* __exception_result_var_b116;
struct tuple2$2charphsTypeph* it_153;
_Bool __exception_result_var_b117;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* __exception_result_var_b120;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* name_156;
struct sType* field_type_157;
_Bool _if_conditional207;
void* right_value136;
struct optional$2charphbool* __exception_result_var_b121;
void* right_value137;
char* __exception_result_var_b122;
char* obj_158;
_Bool _if_conditional211;
struct list$1tuple2$2charphsTypephph* o2_saved_161;
struct tuple2$2charphsTypeph* __exception_result_var_b123;
struct tuple2$2charphsTypeph* it_162;
_Bool __exception_result_var_b124;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* __exception_result_var_b125;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* name_163;
struct sType* field_type_164;
_Bool _if_conditional212;
void* right_value138;
struct optional$2charphbool* __exception_result_var_b126;
void* right_value139;
char* __exception_result_var_b127;
char* obj_165;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
void* right_value140;
struct optional$2charphbool* __exception_result_var_b128;
char* type_name_166;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value141;
char* __exception_result_var_b129;
char* c_value_167;
struct sClass* klass_168;
char* class_name_169;
char* fun_name_170;
void* right_value142;
struct sType* type2_171;
void* right_value143;
char* __exception_result_var_b130;
char* fun_name2_172;
struct sFun* finalizer_173;
int __exception_result_var_b131;
_Bool _if_conditional223;
void* right_value144;
struct optional$2sFunpbool* __exception_result_var_b132;
_Bool _if_conditional224;
void* right_value145;
char* __exception_result_var_b133;
char* none_generics_name_174;
void* right_value146;
char* __exception_result_var_b134;
char* generics_fun_name_175;
void* right_value147;
struct optional$2sGenericsFunpbool* __exception_result_var_b135;
struct sGenericsFun* generics_fun_176;
_Bool _if_conditional225;
_Bool __exception_result_var_b136;
_Bool _if_conditional226;
int __exception_result_var_b137;
void* right_value148;
struct optional$2sFunpbool* __exception_result_var_b138;
int i_177;
_Bool _for_condtionalA8;
void* right_value149;
char* __exception_result_var_b139;
char* new_fun_name_178;
void* right_value150;
struct optional$2sFunpbool* __exception_result_var_b140;
_Bool _if_conditional227;
void* right_value151;
char* __exception_result_var_b141;
char* __dec_obj50;
_Bool _if_conditional228;
void* right_value152;
struct optional$2sFunpbool* __exception_result_var_b142;
_Bool _if_conditional229;
void* right_value153;
struct tuple2$2sFunpcharph* __exception_result_var_b143;
struct tuple2$2sFunpcharph* multiple_assgin_var5;
struct sFun* fun_179;
char* new_fun_name_180;
char* __dec_obj51;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value154;
struct optional$2charphbool* __exception_result_var_b144;
char* type_name_181;
_Bool _if_conditional232;
_Bool _if_conditional233;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value155;
char* __exception_result_var_b145;
void* right_value156;
char* __exception_result_var_b146;
_Bool _if_conditional239;
void* right_value157;
char* __exception_result_var_b147;
void* right_value158;
char* __exception_result_var_b148;
_Bool _if_conditional240;
struct list$1tuple2$2charphsTypephph* o2_saved_182;
struct tuple2$2charphsTypeph* __exception_result_var_b149;
struct tuple2$2charphsTypeph* it_183;
_Bool __exception_result_var_b150;
_Bool _for_condtionalA9;
struct tuple2$2charphsTypeph* __exception_result_var_b151;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* name_184;
struct sType* field_type_185;
_Bool _if_conditional241;
void* right_value159;
struct optional$2charphbool* __exception_result_var_b152;
void* right_value160;
char* __exception_result_var_b153;
char* obj_186;
_Bool _if_conditional242;
struct list$1tuple2$2charphsTypephph* o2_saved_187;
struct tuple2$2charphsTypeph* __exception_result_var_b154;
struct tuple2$2charphsTypeph* it_188;
_Bool __exception_result_var_b155;
_Bool _for_condtionalA10;
struct tuple2$2charphsTypeph* __exception_result_var_b156;
struct tuple2$2charphsTypeph* multiple_assgin_var7;
char* name_189;
struct sType* field_type_190;
_Bool _if_conditional243;
void* right_value161;
struct optional$2charphbool* __exception_result_var_b157;
void* right_value162;
char* __exception_result_var_b158;
char* obj_191;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value163;
struct optional$2charphbool* __exception_result_var_b159;
char* type_name_192;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct list$1sRightValueObjectph* __dec_obj52;
struct list$1CVALUEph* __dec_obj53;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&stack_saved_132, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_133, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&type_before_134, 0, sizeof(struct sType*));
memset(&right_value118, 0, sizeof(void*));
memset(&c_value_135, 0, sizeof(char*));
memset(&klass_136, 0, sizeof(struct sClass*));
memset(&class_name_137, 0, sizeof(char*));
memset(&fun_name_138, 0, sizeof(char*));
memset(&right_value119, 0, sizeof(void*));
memset(&type2_139, 0, sizeof(struct sType*));
memset(&right_value120, 0, sizeof(void*));
memset(&fun_name2_140, 0, sizeof(char*));
memset(&finalizer_141, 0, sizeof(struct sFun*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&none_generics_name_142, 0, sizeof(char*));
memset(&right_value123, 0, sizeof(void*));
memset(&generics_fun_name_143, 0, sizeof(char*));
memset(&right_value124, 0, sizeof(void*));
memset(&generics_fun_144, 0, sizeof(struct sGenericsFun*));
memset(&right_value125, 0, sizeof(void*));
memset(&i_145, 0, sizeof(int));
memset(&right_value126, 0, sizeof(void*));
memset(&new_fun_name_146, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&fun_147, 0, sizeof(struct sFun*));
memset(&new_fun_name_148, 0, sizeof(char*));
memset(&fun_147, 0, sizeof(struct sFun*));
memset(&new_fun_name_148, 0, sizeof(char*));
memset(&right_value131, 0, sizeof(void*));
memset(&type_name_149, 0, sizeof(char*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&o2_saved_150, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_153, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_156, 0, sizeof(char*));
memset(&field_type_157, 0, sizeof(struct sType*));
memset(&name_156, 0, sizeof(char*));
memset(&field_type_157, 0, sizeof(struct sType*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&obj_158, 0, sizeof(char*));
memset(&o2_saved_161, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_162, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_163, 0, sizeof(char*));
memset(&field_type_164, 0, sizeof(struct sType*));
memset(&name_163, 0, sizeof(char*));
memset(&field_type_164, 0, sizeof(struct sType*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&obj_165, 0, sizeof(char*));
memset(&right_value140, 0, sizeof(void*));
memset(&type_name_166, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&c_value_167, 0, sizeof(char*));
memset(&klass_168, 0, sizeof(struct sClass*));
memset(&class_name_169, 0, sizeof(char*));
memset(&fun_name_170, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&type2_171, 0, sizeof(struct sType*));
memset(&right_value143, 0, sizeof(void*));
memset(&fun_name2_172, 0, sizeof(char*));
memset(&finalizer_173, 0, sizeof(struct sFun*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&none_generics_name_174, 0, sizeof(char*));
memset(&right_value146, 0, sizeof(void*));
memset(&generics_fun_name_175, 0, sizeof(char*));
memset(&right_value147, 0, sizeof(void*));
memset(&generics_fun_176, 0, sizeof(struct sGenericsFun*));
memset(&right_value148, 0, sizeof(void*));
memset(&i_177, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&new_fun_name_178, 0, sizeof(char*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&fun_179, 0, sizeof(struct sFun*));
memset(&new_fun_name_180, 0, sizeof(char*));
memset(&fun_179, 0, sizeof(struct sFun*));
memset(&new_fun_name_180, 0, sizeof(char*));
memset(&right_value154, 0, sizeof(void*));
memset(&type_name_181, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&o2_saved_182, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_183, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_184, 0, sizeof(char*));
memset(&field_type_185, 0, sizeof(struct sType*));
memset(&name_184, 0, sizeof(char*));
memset(&field_type_185, 0, sizeof(struct sType*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&obj_186, 0, sizeof(char*));
memset(&o2_saved_187, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_188, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&name_189, 0, sizeof(char*));
memset(&field_type_190, 0, sizeof(struct sType*));
memset(&name_189, 0, sizeof(char*));
memset(&field_type_190, 0, sizeof(struct sType*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&obj_191, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&type_name_192, 0, sizeof(char*));
    stack_saved_132=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 297))->stack);
    __freed_obj__ = 0;
    right_value_objects_133=((struct sInfo*)come_null_check(info, "04heap.c", 298))->right_value_objects;
    __freed_obj__ = 0;
    type_before_134=type;
    __freed_obj__ = 0;
    if(_if_conditional182=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 303))->mNoSolvedGenericsType, "04heap.c", 303))->v1,    __freed_obj__ = 0, 
    _if_conditional182) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 304))->mNoSolvedGenericsType, "04heap.c", 304))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional183=((struct sType*)come_null_check(type, "04heap.c", 307))->mPointerNum>0||((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 307))->mClass, "04heap.c", 307))->mProtocol||(come_push_stackframe("04heap.c", 307),__exception_result_var_b93=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 307))->mGenericsTypes, "04heap.c", 307))), come_pop_stackframe(), __exception_result_var_b93)>0||(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 307))->come_fun, "04heap.c", 307))->mCloner&&ret_value),    __freed_obj__ = 0, 
    _if_conditional183) {
        if(_if_conditional184=force_delete_,        __freed_obj__ = 0, 
        _if_conditional184) {
            c_value_135=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 309),__exception_result_var_b94=((char*)(right_value118=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b94));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value118;
            __freed_obj__ = 0;
            klass_136=((struct sType*)come_null_check(type, "04heap.c", 311))->mClass;
            __freed_obj__ = 0;
            class_name_137=((struct sClass*)come_null_check(klass_136, "04heap.c", 313))->mName;
            __freed_obj__ = 0;
            fun_name_138="force_finalize";
            __freed_obj__ = 0;
            type2_139=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
            if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value119;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_139, "04heap.c", 318))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_140=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 320),__exception_result_var_b95=((char*)(right_value120=create_method_name(type,(_Bool)0,fun_name_138,info))), come_pop_stackframe(), __exception_result_var_b95));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value120);
            if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value120;
            __freed_obj__ = 0;
            finalizer_141=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional185=(come_push_stackframe("04heap.c", 323),__exception_result_var_b96=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 323))->mGenericsTypes, "04heap.c", 323))), come_pop_stackframe(), __exception_result_var_b96)>0,            __freed_obj__ = 0, 
            _if_conditional185) {
                finalizer_141=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 324),__exception_result_var_b97=((struct optional$2sFunpbool*)(right_value121=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 324))->funcs,fun_name2_140))), come_pop_stackframe(), __exception_result_var_b97));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value121;
                __freed_obj__ = 0;
                if(_if_conditional186=finalizer_141==((void*)0),                __freed_obj__ = 0, 
                _if_conditional186) {
                    none_generics_name_142=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 327),__exception_result_var_b98=((char*)(right_value122=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_139, "04heap.c", 327))->mClass, "04heap.c", 327))->mName))), come_pop_stackframe(), __exception_result_var_b98));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value122;
                    __freed_obj__ = 0;
                    generics_fun_name_143=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 329),__exception_result_var_b99=((char*)(right_value123=xsprintf("%s_%s",none_generics_name_142,fun_name_138))), come_pop_stackframe(), __exception_result_var_b99));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value123;
                    __freed_obj__ = 0;
                    generics_fun_144=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 330),__exception_result_var_b100=((struct optional$2sGenericsFunpbool*)(right_value124=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 330))->generics_funcs,generics_fun_name_143))), come_pop_stackframe(), __exception_result_var_b100));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value124;
                    __freed_obj__ = 0;
                    if(_if_conditional187=generics_fun_144,                    __freed_obj__ = 0, 
                    _if_conditional187) {
                        if(_if_conditional188=!(come_push_stackframe("04heap.c", 333),__exception_result_var_b101=create_generics_fun((char*)come_increment_ref_count(fun_name2_140),generics_fun_144,type,info), come_pop_stackframe(), __exception_result_var_b101),                        __freed_obj__ = 0, 
                        _if_conditional188) {
                            (come_push_stackframe("04heap.c", 335),__exception_result_var_b102=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 335))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 335))->sline), come_pop_stackframe(), __exception_result_var_b102);
                            __freed_obj__ = 0;
                            (come_push_stackframe("04heap.c", 336),exit(2),come_pop_stackframe());
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        finalizer_141=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 338),__exception_result_var_b103=((struct optional$2sFunpbool*)(right_value125=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 338))->funcs,fun_name2_140))), come_pop_stackframe(), __exception_result_var_b103));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value125;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_142 && !__freed_obj__) { none_generics_name_142 = come_decrement_ref_count(none_generics_name_142, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_143 && !__freed_obj__) { generics_fun_name_143 = come_decrement_ref_count(generics_fun_name_143, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_145=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA5=                i_145>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA5;                i_145-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_146=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 345),__exception_result_var_b104=((char*)(right_value126=xsprintf("%s_v%d",fun_name2_140,i_145))), come_pop_stackframe(), __exception_result_var_b104));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                    finalizer_141=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 346),__exception_result_var_b105=((struct optional$2sFunpbool*)(right_value127=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 346))->funcs,new_fun_name_146))), come_pop_stackframe(), __exception_result_var_b105));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
                    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value127;
                    __freed_obj__ = 0;
                    if(_if_conditional189=finalizer_141,                    __freed_obj__ = 0, 
                    _if_conditional189) {
                        __dec_obj48=fun_name2_140;
                        fun_name2_140=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 349),__exception_result_var_b106=((char*)(right_value128=__builtin_string(new_fun_name_146))), come_pop_stackframe(), __exception_result_var_b106));
                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value128;
                        __freed_obj__ = 0;
                        if(new_fun_name_146 && !__freed_obj__) { new_fun_name_146 = come_decrement_ref_count(new_fun_name_146, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_146 && !__freed_obj__) { new_fun_name_146 = come_decrement_ref_count(new_fun_name_146, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional190=finalizer_141==((void*)0),                __freed_obj__ = 0, 
                _if_conditional190) {
                    finalizer_141=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 355),__exception_result_var_b107=((struct optional$2sFunpbool*)(right_value129=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 355))->funcs,fun_name2_140))), come_pop_stackframe(), __exception_result_var_b107));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value129;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional191=finalizer_141==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 359))->mClass, "04heap.c", 359))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 359))->mClass, "04heap.c", 359))->mNumber,            __freed_obj__ = 0, 
            _if_conditional191) {
                multiple_assgin_var2=(come_push_stackframe("04heap.c", 361),__exception_result_var_b108=((struct tuple2$2sFunpcharph*)(right_value130=create_force_finalizer_automatically(type,fun_name_138,info))), come_pop_stackframe(), __exception_result_var_b108);
                fun_147=multiple_assgin_var2->v1;
                new_fun_name_148=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value130;
                __freed_obj__ = 0;
                __dec_obj49=fun_name2_140;
                fun_name2_140=(char*)come_increment_ref_count(new_fun_name_148);
                if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_141=fun_147;
                __freed_obj__ = 0;
                if(new_fun_name_148 && !__freed_obj__) { new_fun_name_148 = come_decrement_ref_count(new_fun_name_148, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional192=finalizer_141!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional192) {
                if(_if_conditional193=((struct sClass*)come_null_check(klass_136, "04heap.c", 369))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 369))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional193) {
                    type_name_149=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 370),__exception_result_var_b109=((struct optional$2charphbool*)(right_value131=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b109)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value131;
                    __freed_obj__ = 0;
                    if(_if_conditional194=c_value_135,                    __freed_obj__ = 0, 
                    _if_conditional194) {
                        if(_if_conditional195=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional195) {
                            if(_if_conditional196=comma,                            __freed_obj__ = 0, 
                            _if_conditional196) {
                                (come_push_stackframe("04heap.c", 374),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_135,c_value_135,fun_name2_140,c_value_135,type_name_149,c_value_135,type_name_149,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 374))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 377),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_135,c_value_135,fun_name2_140,c_value_135,type_name_149,c_value_135,type_name_149,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 377))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional197=comma,                            __freed_obj__ = 0, 
                            _if_conditional197) {
                                (come_push_stackframe("04heap.c", 382),add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_135,fun_name2_140,c_value_135,type_name_149,c_value_135,type_name_149,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 382))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 385),add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_135,fun_name2_140,c_value_135,type_name_149,c_value_135,type_name_149,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 385))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_149 && !__freed_obj__) { type_name_149 = come_decrement_ref_count(type_name_149, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional198=c_value_135,                    __freed_obj__ = 0, 
                    _if_conditional198) {
                        if(_if_conditional199=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional199) {
                            if(_if_conditional200=comma,                            __freed_obj__ = 0, 
                            _if_conditional200) {
                                (come_push_stackframe("04heap.c", 394),add_come_code(info,(come_push_stackframe("04heap.c", 394),__exception_result_var_b110=((char*)(right_value132=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_135,c_value_135,fun_name2_140,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 394))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b110)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value132;
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 397),add_come_code(info,(come_push_stackframe("04heap.c", 397),__exception_result_var_b111=((char*)(right_value133=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_135,c_value_135,fun_name2_140,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 397))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b111)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value133;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional201=comma,                            __freed_obj__ = 0, 
                            _if_conditional201) {
                                (come_push_stackframe("04heap.c", 402),add_come_code(info,(come_push_stackframe("04heap.c", 402),__exception_result_var_b112=((char*)(right_value134=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_135,fun_name2_140,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 402))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b112)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                                if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value134;
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 405),add_come_code(info,(come_push_stackframe("04heap.c", 405),__exception_result_var_b113=((char*)(right_value135=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_135,fun_name2_140,c_value_135,((struct sType*)come_null_check(type, "04heap.c", 405))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b113)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                                if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value135;
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
                if(_if_conditional202=((struct sClass*)come_null_check(klass_136, "04heap.c", 412))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 412))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional202) {
                    for(
                    o2_saved_150=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_136, "04heap.c", 414))->mFields)),it_153=(come_push_stackframe("04heap.c", 414),__exception_result_var_b116=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_150), "04heap.c", 414))), come_pop_stackframe(), __exception_result_var_b116) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA6=                    !(come_push_stackframe("04heap.c", 414),__exception_result_var_b117=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_150), "04heap.c", 414))), come_pop_stackframe(), __exception_result_var_b117) ,                    __freed_obj__ = 0, 
                    _for_condtionalA6;                    it_153=(come_push_stackframe("04heap.c", 414),__exception_result_var_b120=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_150), "04heap.c", 414))), come_pop_stackframe(), __exception_result_var_b120) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var3=it_153;
                        name_156=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                        field_type_157=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional207=((struct sType*)come_null_check(field_type_157, "04heap.c", 417))->mHeap&&((struct sType*)come_null_check(field_type_157, "04heap.c", 417))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional207) {
                            obj_158=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 418),__exception_result_var_b122=((char*)(right_value137=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 418),__exception_result_var_b121=((struct optional$2charphbool*)(right_value136=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b121)),c_value_135,name_156))), come_pop_stackframe(), __exception_result_var_b122));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value136;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
                            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value137;
                            __freed_obj__ = 0;
                            (come_push_stackframe("04heap.c", 419),free_object(field_type_157,obj_158,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                            __freed_obj__ = 0;
                            if(obj_158 && !__freed_obj__) { obj_158 = come_decrement_ref_count(obj_158, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        if(name_156 && !__freed_obj__) { name_156 = come_decrement_ref_count(name_156, (void*)0, (void*)0, 0, 0, 0); }
                        if(field_type_157 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    if(o2_saved_150 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional211=((struct sClass*)come_null_check(klass_136, "04heap.c", 423))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 423))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        for(
                        o2_saved_161=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_136, "04heap.c", 425))->mFields)),it_162=(come_push_stackframe("04heap.c", 425),__exception_result_var_b123=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_161), "04heap.c", 425))), come_pop_stackframe(), __exception_result_var_b123) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA7=                        !(come_push_stackframe("04heap.c", 425),__exception_result_var_b124=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_161), "04heap.c", 425))), come_pop_stackframe(), __exception_result_var_b124) ,                        __freed_obj__ = 0, 
                        _for_condtionalA7;                        it_162=(come_push_stackframe("04heap.c", 425),__exception_result_var_b125=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_161), "04heap.c", 425))), come_pop_stackframe(), __exception_result_var_b125) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var4=it_162;
                            name_163=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
                            field_type_164=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional212=((struct sType*)come_null_check(field_type_164, "04heap.c", 428))->mHeap&&((struct sType*)come_null_check(field_type_164, "04heap.c", 428))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional212) {
                                obj_165=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 429),__exception_result_var_b127=((char*)(right_value139=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 429),__exception_result_var_b126=((struct optional$2charphbool*)(right_value138=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b126)),c_value_135,name_163))), come_pop_stackframe(), __exception_result_var_b127));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value138;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
                                if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value139;
                                __freed_obj__ = 0;
                                (come_push_stackframe("04heap.c", 430),free_object(field_type_164,obj_165,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                                __freed_obj__ = 0;
                                if(obj_165 && !__freed_obj__) { obj_165 = come_decrement_ref_count(obj_165, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_163 && !__freed_obj__) { name_163 = come_decrement_ref_count(name_163, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_161 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_161, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional213=!((struct sType*)come_null_check(type, "04heap.c", 436))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional213) {
                    if(_if_conditional214=((struct sClass*)come_null_check(klass_136, "04heap.c", 437))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 437))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional214) {
                        if(_if_conditional215=c_value_135,                        __freed_obj__ = 0, 
                        _if_conditional215) {
                            type_name_166=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 439),__exception_result_var_b128=((struct optional$2charphbool*)(right_value140=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b128)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                            if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value140;
                            __freed_obj__ = 0;
                            if(_if_conditional216=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional216) {
                                if(_if_conditional217=comma,                                __freed_obj__ = 0, 
                                _if_conditional217) {
                                    (come_push_stackframe("04heap.c", 442),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_135,c_value_135,c_value_135,c_value_135,type_name_166,c_value_135,type_name_166,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 445),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_135,c_value_135,c_value_135,c_value_135,type_name_166,c_value_135,type_name_166,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional218=comma,                                __freed_obj__ = 0, 
                                _if_conditional218) {
                                    (come_push_stackframe("04heap.c", 450),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_135,c_value_135,c_value_135,type_name_166,c_value_135,type_name_166,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 453),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_135,c_value_135,c_value_135,type_name_166,c_value_135,type_name_166,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_166 && !__freed_obj__) { type_name_166 = come_decrement_ref_count(type_name_166, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional219=c_value_135,                        __freed_obj__ = 0, 
                        _if_conditional219) {
                            if(_if_conditional220=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional220) {
                                if(_if_conditional221=comma,                                __freed_obj__ = 0, 
                                _if_conditional221) {
                                    (come_push_stackframe("04heap.c", 462),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_135,c_value_135,c_value_135,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 465),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_135,c_value_135,c_value_135,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional222=comma,                                __freed_obj__ = 0, 
                                _if_conditional222) {
                                    (come_push_stackframe("04heap.c", 470),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_135,c_value_135,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 473),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_135,c_value_135,c_value_135,no_decrement,no_free,force_delete_),come_pop_stackframe());
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
            if(c_value_135 && !__freed_obj__) { c_value_135 = come_decrement_ref_count(c_value_135, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_139 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_139, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_140 && !__freed_obj__) { fun_name2_140 = come_decrement_ref_count(fun_name2_140, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            c_value_167=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 482),__exception_result_var_b129=((char*)(right_value141=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b129));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
            if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value141;
            __freed_obj__ = 0;
            klass_168=((struct sType*)come_null_check(type, "04heap.c", 484))->mClass;
            __freed_obj__ = 0;
            class_name_169=((struct sClass*)come_null_check(klass_168, "04heap.c", 486))->mName;
            __freed_obj__ = 0;
            fun_name_170="finalize";
            __freed_obj__ = 0;
            type2_171=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(type))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value142;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type2_171, "04heap.c", 491))->mHeap=(_Bool)0;
            __freed_obj__ = 0;
            fun_name2_172=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 493),__exception_result_var_b130=((char*)(right_value143=create_method_name(type,(_Bool)0,fun_name_170,info))), come_pop_stackframe(), __exception_result_var_b130));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value143);
            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value143;
            __freed_obj__ = 0;
            finalizer_173=((void*)0);
            __freed_obj__ = 0;
            if(_if_conditional223=(come_push_stackframe("04heap.c", 496),__exception_result_var_b131=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 496))->mGenericsTypes, "04heap.c", 496))), come_pop_stackframe(), __exception_result_var_b131)>0,            __freed_obj__ = 0, 
            _if_conditional223) {
                finalizer_173=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 497),__exception_result_var_b132=((struct optional$2sFunpbool*)(right_value144=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 497))->funcs,fun_name2_172))), come_pop_stackframe(), __exception_result_var_b132));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value144;
                __freed_obj__ = 0;
                if(_if_conditional224=finalizer_173==((void*)0),                __freed_obj__ = 0, 
                _if_conditional224) {
                    none_generics_name_174=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 500),__exception_result_var_b133=((char*)(right_value145=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type2_171, "04heap.c", 500))->mClass, "04heap.c", 500))->mName))), come_pop_stackframe(), __exception_result_var_b133));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value145;
                    __freed_obj__ = 0;
                    generics_fun_name_175=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 502),__exception_result_var_b134=((char*)(right_value146=xsprintf("%s_%s",none_generics_name_174,fun_name_170))), come_pop_stackframe(), __exception_result_var_b134));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
                    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value146;
                    __freed_obj__ = 0;
                    generics_fun_176=optional$2sGenericsFunpbool_value((come_push_stackframe("04heap.c", 503),__exception_result_var_b135=((struct optional$2sGenericsFunpbool*)(right_value147=map$2charphsGenericsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 503))->generics_funcs,generics_fun_name_175))), come_pop_stackframe(), __exception_result_var_b135));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value147);
                    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sGenericsFunpboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value147;
                    __freed_obj__ = 0;
                    if(_if_conditional225=generics_fun_176,                    __freed_obj__ = 0, 
                    _if_conditional225) {
                        if(_if_conditional226=!(come_push_stackframe("04heap.c", 506),__exception_result_var_b136=create_generics_fun((char*)come_increment_ref_count(fun_name2_172),generics_fun_176,type,info), come_pop_stackframe(), __exception_result_var_b136),                        __freed_obj__ = 0, 
                        _if_conditional226) {
                            (come_push_stackframe("04heap.c", 508),__exception_result_var_b137=printf("%s %d: can't create generics finalizer\n",((struct sInfo*)come_null_check(info, "04heap.c", 508))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 508))->sline), come_pop_stackframe(), __exception_result_var_b137);
                            __freed_obj__ = 0;
                            (come_push_stackframe("04heap.c", 509),exit(2),come_pop_stackframe());
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        finalizer_173=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 511),__exception_result_var_b138=((struct optional$2sFunpbool*)(right_value148=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 511))->funcs,fun_name2_172))), come_pop_stackframe(), __exception_result_var_b138));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value148;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(none_generics_name_174 && !__freed_obj__) { none_generics_name_174 = come_decrement_ref_count(none_generics_name_174, (void*)0, (void*)0, 0, 0, 0); }
                    if(generics_fun_name_175 && !__freed_obj__) { generics_fun_name_175 = come_decrement_ref_count(generics_fun_name_175, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                __freed_obj__ = 0;
                for(
                i_177=128-1 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA8=                i_177>=1 ,                __freed_obj__ = 0, 
                _for_condtionalA8;                i_177-- ,                __freed_obj__ = 0, 
                0                ){
                    new_fun_name_178=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 518),__exception_result_var_b139=((char*)(right_value149=xsprintf("%s_v%d",fun_name2_172,i_177))), come_pop_stackframe(), __exception_result_var_b139));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value149;
                    __freed_obj__ = 0;
                    finalizer_173=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 519),__exception_result_var_b140=((struct optional$2sFunpbool*)(right_value150=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 519))->funcs,new_fun_name_178))), come_pop_stackframe(), __exception_result_var_b140));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value150);
                    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value150;
                    __freed_obj__ = 0;
                    if(_if_conditional227=finalizer_173,                    __freed_obj__ = 0, 
                    _if_conditional227) {
                        __dec_obj50=fun_name2_172;
                        fun_name2_172=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 522),__exception_result_var_b141=((char*)(right_value151=__builtin_string(new_fun_name_178))), come_pop_stackframe(), __exception_result_var_b141));
                        if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value151;
                        __freed_obj__ = 0;
                        if(new_fun_name_178 && !__freed_obj__) { new_fun_name_178 = come_decrement_ref_count(new_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(new_fun_name_178 && !__freed_obj__) { new_fun_name_178 = come_decrement_ref_count(new_fun_name_178, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
                if(_if_conditional228=finalizer_173==((void*)0),                __freed_obj__ = 0, 
                _if_conditional228) {
                    finalizer_173=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 528),__exception_result_var_b142=((struct optional$2sFunpbool*)(right_value152=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 528))->funcs,fun_name2_172))), come_pop_stackframe(), __exception_result_var_b142));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value152;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional229=finalizer_173==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 532))->mClass, "04heap.c", 532))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 532))->mClass, "04heap.c", 532))->mNumber,            __freed_obj__ = 0, 
            _if_conditional229) {
                multiple_assgin_var5=(come_push_stackframe("04heap.c", 534),__exception_result_var_b143=((struct tuple2$2sFunpcharph*)(right_value153=create_finalizer_automatically(type,fun_name_170,info))), come_pop_stackframe(), __exception_result_var_b143);
                fun_179=multiple_assgin_var5->v1;
                new_fun_name_180=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value153;
                __freed_obj__ = 0;
                __dec_obj51=fun_name2_172;
                fun_name2_172=(char*)come_increment_ref_count(new_fun_name_180);
                if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                finalizer_173=fun_179;
                __freed_obj__ = 0;
                if(new_fun_name_180 && !__freed_obj__) { new_fun_name_180 = come_decrement_ref_count(new_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(_if_conditional230=finalizer_173!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional230) {
                if(_if_conditional231=((struct sClass*)come_null_check(klass_168, "04heap.c", 542))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 542))->mPointerNum==1,                __freed_obj__ = 0, 
                _if_conditional231) {
                    type_name_181=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 543),__exception_result_var_b144=((struct optional$2charphbool*)(right_value154=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b144)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value154;
                    __freed_obj__ = 0;
                    if(_if_conditional232=c_value_167,                    __freed_obj__ = 0, 
                    _if_conditional232) {
                        if(_if_conditional233=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional233) {
                            if(_if_conditional234=comma,                            __freed_obj__ = 0, 
                            _if_conditional234) {
                                (come_push_stackframe("04heap.c", 547),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_167,c_value_167,fun_name2_172,c_value_167,type_name_181,c_value_167,type_name_181,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 547))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 550),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_167,c_value_167,fun_name2_172,c_value_167,type_name_181,c_value_167,type_name_181,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 550))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional235=comma,                            __freed_obj__ = 0, 
                            _if_conditional235) {
                                (come_push_stackframe("04heap.c", 555),add_come_code(info,"(%s && !__freed_obj__) ? come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d):0,\n",c_value_167,fun_name2_172,c_value_167,type_name_181,c_value_167,type_name_181,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 555))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 558),add_come_code(info,"if(%s && !__freed_obj__) { come_call_finalizer(%s, %s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d, %d); }\n",c_value_167,fun_name2_172,c_value_167,type_name_181,c_value_167,type_name_181,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 558))->mAllocaValue,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_name_181 && !__freed_obj__) { type_name_181 = come_decrement_ref_count(type_name_181, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional236=c_value_167,                    __freed_obj__ = 0, 
                    _if_conditional236) {
                        if(_if_conditional237=no_decrement,                        __freed_obj__ = 0, 
                        _if_conditional237) {
                            if(_if_conditional238=comma,                            __freed_obj__ = 0, 
                            _if_conditional238) {
                                (come_push_stackframe("04heap.c", 567),add_come_code(info,(come_push_stackframe("04heap.c", 567),__exception_result_var_b145=((char*)(right_value155=xsprintf("(%s && %s != __result_obj__ && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_167,c_value_167,fun_name2_172,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 567))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b145)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value155;
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 570),add_come_code(info,(come_push_stackframe("04heap.c", 570),__exception_result_var_b146=((char*)(right_value156=xsprintf("if(%s && %s != __result_obj__ && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_167,c_value_167,fun_name2_172,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 570))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b146)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value156;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional239=comma,                            __freed_obj__ = 0, 
                            _if_conditional239) {
                                (come_push_stackframe("04heap.c", 575),add_come_code(info,(come_push_stackframe("04heap.c", 575),__exception_result_var_b147=((char*)(right_value157=xsprintf("(%s && !__freed_obj__) ? come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d):0,\n",c_value_167,fun_name2_172,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 575))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b147)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value157;
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("04heap.c", 578),add_come_code(info,(come_push_stackframe("04heap.c", 578),__exception_result_var_b148=((char*)(right_value158=xsprintf("if(%s && !__freed_obj__) { come_call_finalizer(%s,%s, (void*)0, (void*)0, %d, %d, %d, %d); }\n",c_value_167,fun_name2_172,c_value_167,((struct sType*)come_null_check(type, "04heap.c", 578))->mAllocaValue,no_decrement,no_free,force_delete_))), come_pop_stackframe(), __exception_result_var_b148)),come_pop_stackframe());
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value158;
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
                if(_if_conditional240=((struct sClass*)come_null_check(klass_168, "04heap.c", 585))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 585))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional240) {
                    for(
                    o2_saved_182=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_168, "04heap.c", 587))->mFields)),it_183=(come_push_stackframe("04heap.c", 587),__exception_result_var_b149=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 587))), come_pop_stackframe(), __exception_result_var_b149) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA9=                    !(come_push_stackframe("04heap.c", 587),__exception_result_var_b150=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 587))), come_pop_stackframe(), __exception_result_var_b150) ,                    __freed_obj__ = 0, 
                    _for_condtionalA9;                    it_183=(come_push_stackframe("04heap.c", 587),__exception_result_var_b151=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_182), "04heap.c", 587))), come_pop_stackframe(), __exception_result_var_b151) ,                    __freed_obj__ = 0, 
                    0                    ){
                        multiple_assgin_var6=it_183;
                        name_184=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                        field_type_185=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                        __freed_obj__ = 0;
                        if(_if_conditional241=((struct sType*)come_null_check(field_type_185, "04heap.c", 590))->mHeap&&((struct sType*)come_null_check(field_type_185, "04heap.c", 590))->mPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional241) {
                            obj_186=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 591),__exception_result_var_b153=((char*)(right_value160=xsprintf("(((%s)%s).%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 591),__exception_result_var_b152=((struct optional$2charphbool*)(right_value159=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b152)),c_value_167,name_184))), come_pop_stackframe(), __exception_result_var_b153));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                            if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value159;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
                            if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value160;
                            __freed_obj__ = 0;
                            (come_push_stackframe("04heap.c", 592),free_object(field_type_185,obj_186,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
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
                else {
                    if(_if_conditional242=((struct sClass*)come_null_check(klass_168, "04heap.c", 596))->mStruct&&((struct sType*)come_null_check(type, "04heap.c", 596))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional242) {
                        for(
                        o2_saved_187=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_168, "04heap.c", 598))->mFields)),it_188=(come_push_stackframe("04heap.c", 598),__exception_result_var_b154=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_187), "04heap.c", 598))), come_pop_stackframe(), __exception_result_var_b154) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA10=                        !(come_push_stackframe("04heap.c", 598),__exception_result_var_b155=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_187), "04heap.c", 598))), come_pop_stackframe(), __exception_result_var_b155) ,                        __freed_obj__ = 0, 
                        _for_condtionalA10;                        it_188=(come_push_stackframe("04heap.c", 598),__exception_result_var_b156=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_187), "04heap.c", 598))), come_pop_stackframe(), __exception_result_var_b156) ,                        __freed_obj__ = 0, 
                        0                        ){
                            multiple_assgin_var7=it_188;
                            name_189=(char*)come_increment_ref_count(multiple_assgin_var7->v1);
                            field_type_190=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v2);
                            __freed_obj__ = 0;
                            if(_if_conditional243=((struct sType*)come_null_check(field_type_190, "04heap.c", 601))->mHeap&&((struct sType*)come_null_check(field_type_190, "04heap.c", 601))->mPointerNum>0,                            __freed_obj__ = 0, 
                            _if_conditional243) {
                                obj_191=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 602),__exception_result_var_b158=((char*)(right_value162=xsprintf("(((%s)%s)->%s)",optional$2charphbool_expect((come_push_stackframe("04heap.c", 602),__exception_result_var_b157=((struct optional$2charphbool*)(right_value161=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b157)),c_value_167,name_189))), come_pop_stackframe(), __exception_result_var_b158));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                                if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value161;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
                                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value162;
                                __freed_obj__ = 0;
                                (come_push_stackframe("04heap.c", 603),free_object(field_type_190,obj_191,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                                __freed_obj__ = 0;
                                if(obj_191 && !__freed_obj__) { obj_191 = come_decrement_ref_count(obj_191, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                            if(name_189 && !__freed_obj__) { name_189 = come_decrement_ref_count(name_189, (void*)0, (void*)0, 0, 0, 0); }
                            if(field_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_187 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional244=!((struct sType*)come_null_check(type, "04heap.c", 609))->mAllocaValue,                __freed_obj__ = 0, 
                _if_conditional244) {
                    if(_if_conditional245=((struct sClass*)come_null_check(klass_168, "04heap.c", 610))->mProtocol&&((struct sType*)come_null_check(type, "04heap.c", 610))->mPointerNum==1,                    __freed_obj__ = 0, 
                    _if_conditional245) {
                        if(_if_conditional246=c_value_167,                        __freed_obj__ = 0, 
                        _if_conditional246) {
                            type_name_192=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 612),__exception_result_var_b159=((struct optional$2charphbool*)(right_value163=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b159)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                            if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value163;
                            __freed_obj__ = 0;
                            if(_if_conditional247=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional247) {
                                if(_if_conditional248=comma,                                __freed_obj__ = 0, 
                                _if_conditional248) {
                                    (come_push_stackframe("04heap.c", 615),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d,%d):0,\n",c_value_167,c_value_167,c_value_167,c_value_167,type_name_192,c_value_167,type_name_192,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 618),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_167,c_value_167,c_value_167,c_value_167,type_name_192,c_value_167,type_name_192,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional249=comma,                                __freed_obj__ = 0, 
                                _if_conditional249) {
                                    (come_push_stackframe("04heap.c", 623),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d):0,\n",c_value_167,c_value_167,c_value_167,type_name_192,c_value_167,type_name_192,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 626),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, ((%s)%s)->finalize, ((%s)%s)->_protocol_obj, %d, %d, %d); } \n",c_value_167,c_value_167,c_value_167,type_name_192,c_value_167,type_name_192,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(type_name_192 && !__freed_obj__) { type_name_192 = come_decrement_ref_count(type_name_192, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional250=c_value_167,                        __freed_obj__ = 0, 
                        _if_conditional250) {
                            if(_if_conditional251=no_decrement,                            __freed_obj__ = 0, 
                            _if_conditional251) {
                                if(_if_conditional252=comma,                                __freed_obj__ = 0, 
                                _if_conditional252) {
                                    (come_push_stackframe("04heap.c", 635),add_come_code(info,"(%s && %s != __result_obj__ && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_167,c_value_167,c_value_167,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 638),add_come_code(info,"if(%s && %s != __result_obj__ && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_167,c_value_167,c_value_167,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional253=comma,                                __freed_obj__ = 0, 
                                _if_conditional253) {
                                    (come_push_stackframe("04heap.c", 643),add_come_code(info,"(%s && !__freed_obj__) ? %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d):0,\n",c_value_167,c_value_167,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
                                    __freed_obj__ = 0;
                                }
                                else {
                                    (come_push_stackframe("04heap.c", 646),add_come_code(info,"if(%s && !__freed_obj__) { %s = come_decrement_ref_count(%s, (void*)0, (void*)0, %d, %d, %d); }\n",c_value_167,c_value_167,c_value_167,no_decrement,no_free,force_delete_),come_pop_stackframe());
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
            if(c_value_167 && !__freed_obj__) { c_value_167 = come_decrement_ref_count(c_value_167, (void*)0, (void*)0, 0, 0, 0); }
            if(type2_171 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_171, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(fun_name2_172 && !__freed_obj__) { fun_name2_172 = come_decrement_ref_count(fun_name2_172, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj52=((struct sInfo*)come_null_check(info, "04heap.c", 656))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 656))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_133);
    if(__dec_obj52) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj53=((struct sInfo*)come_null_check(info, "04heap.c", 657))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 657))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_132);
    if(__dec_obj53) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(stack_saved_132 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_132, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
struct tuple2$2charphsTypeph* result_151;
void* __exception_result_var_b114;
struct tuple2$2charphsTypeph* __result87__;
_Bool _if_conditional204;
struct tuple2$2charphsTypeph* __result88__;
struct tuple2$2charphsTypeph* result_152;
void* __exception_result_var_b115;
struct tuple2$2charphsTypeph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_151, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_152, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional203=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional203) {
                            __freed_obj__ = 0;
                            (come_push_stackframe("./comelang2.h", 338),__exception_result_var_b114=memset(&result_151,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b114);
                            __freed_obj__ = 0;
                            __result87__ = __result_obj__ = result_151;
                            __freed_obj__ = 0;
                            return __result87__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 341))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional204=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->it,                        __freed_obj__ = 0, 
                        _if_conditional204) {
                            __result88__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
                            __freed_obj__ = 0;
                            return __result88__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        (come_push_stackframe("./comelang2.h", 348),__exception_result_var_b115=memset(&result_152,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b115);
                        __freed_obj__ = 0;
                        __result89__ = __result_obj__ = result_152;
                        __freed_obj__ = 0;
                        return __result89__;
                        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result90__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result90__;
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
struct tuple2$2charphsTypeph* result_154;
void* __exception_result_var_b118;
struct tuple2$2charphsTypeph* __result91__;
_Bool _if_conditional206;
struct tuple2$2charphsTypeph* __result92__;
struct tuple2$2charphsTypeph* result_155;
void* __exception_result_var_b119;
struct tuple2$2charphsTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_154, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_155, 0, sizeof(struct tuple2$2charphsTypeph*));
                        if(_if_conditional205=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional205) {
                            __freed_obj__ = 0;
                            (come_push_stackframe("./comelang2.h", 355),__exception_result_var_b118=memset(&result_154,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b118);
                            __freed_obj__ = 0;
                            __result91__ = __result_obj__ = result_154;
                            __freed_obj__ = 0;
                            return __result91__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional206=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it,                        __freed_obj__ = 0, 
                        _if_conditional206) {
                            __result92__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
                            __freed_obj__ = 0;
                            return __result92__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        (come_push_stackframe("./comelang2.h", 366),__exception_result_var_b119=memset(&result_155,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b119);
                        __freed_obj__ = 0;
                        __result93__ = __result_obj__ = result_155;
                        __freed_obj__ = 0;
                        return __result93__;
                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_159;
_Bool _while_condtional19;
struct list_item$1tuple2$2charphsTypephph* prev_it_160;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_159, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_160, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                        it_159=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 174))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional19=it_159!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional19) {
                            prev_it_160=it_159;
                            __freed_obj__ = 0;
                            it_159=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_159, "./comelang2.h", 177))->next;
                            __freed_obj__ = 0;
                            if(prev_it_160 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_160, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional208=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional208) {
                                    if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
_Bool _if_conditional210;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional209=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional209) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional210=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional210) {
                                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
struct sType* type2_193;
_Bool _if_conditional254;
char* result_194;
struct sType* result_type_195;
struct list$1CVALUEph* stack_saved_196;
struct list$1sRightValueObjectph* right_value_objects_197;
void* right_value165;
char* __exception_result_var_b160;
char* c_value_198;
struct sClass* klass_199;
char* class_name_200;
char* fun_name_201;
struct sFun* cloner_202;
char* fun_name2_203;
int __exception_result_var_b161;
_Bool _if_conditional255;
void* right_value166;
char* __exception_result_var_b162;
char* none_generics_name_204;
void* right_value167;
struct sType* __exception_result_var_b163;
struct sType* obj_type_205;
void* right_value168;
char* __exception_result_var_b164;
char* __dec_obj54;
void* right_value169;
char* __exception_result_var_b165;
char* fun_name3_206;
void* right_value171;
struct sGenericsFun* __exception_result_var_b168;
struct sGenericsFun* generics_fun_209;
_Bool _if_conditional269;
void* right_value172;
char* __exception_result_var_b169;
_Bool __exception_result_var_b170;
_Bool _if_conditional270;
void* right_value173;
void* right_value174;
struct sType* __exception_result_var_b171;
void* right_value175;
char* __exception_result_var_b172;
void* right_value176;
void* right_value179;
struct tuple2$2sTypephcharph* __result99__;
void* right_value180;
struct optional$2sFunpbool* __exception_result_var_b173;
void* right_value181;
char* __exception_result_var_b174;
char* __dec_obj57;
int i_210;
_Bool _for_condtionalA11;
void* right_value182;
char* __exception_result_var_b175;
char* new_fun_name_211;
void* right_value183;
struct optional$2sFunpbool* __exception_result_var_b176;
_Bool _if_conditional273;
void* right_value184;
char* __exception_result_var_b177;
char* __dec_obj58;
_Bool _if_conditional274;
void* right_value185;
struct optional$2sFunpbool* __exception_result_var_b178;
_Bool _if_conditional275;
void* right_value186;
struct tuple2$2sFunpcharph* __exception_result_var_b179;
struct tuple2$2sFunpcharph* multiple_assgin_var8;
struct sFun* fun_212;
char* new_fun_name_213;
char* __dec_obj59;
_Bool _if_conditional276;
void* right_value187;
char* __exception_result_var_b180;
char* __dec_obj60;
struct sType* __dec_obj61;
void* right_value188;
struct sType* __exception_result_var_b181;
struct sType* __dec_obj62;
void* right_value189;
struct optional$2charphbool* __exception_result_var_b182;
char* type_name_214;
void* right_value190;
char* __exception_result_var_b183;
char* __dec_obj63;
void* right_value191;
struct sType* __dec_obj64;
struct list$1sRightValueObjectph* __dec_obj65;
struct list$1CVALUEph* __dec_obj66;
void* right_value192;
void* right_value193;
struct tuple2$2sTypephcharph* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
memset(&type2_193, 0, sizeof(struct sType*));
memset(&result_194, 0, sizeof(char*));
memset(&result_type_195, 0, sizeof(struct sType*));
memset(&stack_saved_196, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_197, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&right_value165, 0, sizeof(void*));
memset(&c_value_198, 0, sizeof(char*));
memset(&klass_199, 0, sizeof(struct sClass*));
memset(&class_name_200, 0, sizeof(char*));
memset(&fun_name_201, 0, sizeof(char*));
memset(&cloner_202, 0, sizeof(struct sFun*));
memset(&fun_name2_203, 0, sizeof(char*));
memset(&right_value166, 0, sizeof(void*));
memset(&none_generics_name_204, 0, sizeof(char*));
memset(&right_value167, 0, sizeof(void*));
memset(&obj_type_205, 0, sizeof(struct sType*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&fun_name3_206, 0, sizeof(char*));
memset(&right_value171, 0, sizeof(void*));
memset(&generics_fun_209, 0, sizeof(struct sGenericsFun*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&i_210, 0, sizeof(int));
memset(&right_value182, 0, sizeof(void*));
memset(&new_fun_name_211, 0, sizeof(char*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&fun_212, 0, sizeof(struct sFun*));
memset(&new_fun_name_213, 0, sizeof(char*));
memset(&fun_212, 0, sizeof(struct sFun*));
memset(&new_fun_name_213, 0, sizeof(char*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&type_name_214, 0, sizeof(char*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
    type2_193=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value164;
    __freed_obj__ = 0;
    if(_if_conditional254=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 663))->mNoSolvedGenericsType, "04heap.c", 663))->v1,    __freed_obj__ = 0, 
    _if_conditional254) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 664))->mNoSolvedGenericsType, "04heap.c", 664))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_194=((void*)0);
    __freed_obj__ = 0;
    result_type_195=((void*)0);
    __freed_obj__ = 0;
    stack_saved_196=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 669))->stack);
    __freed_obj__ = 0;
    right_value_objects_197=((struct sInfo*)come_null_check(info, "04heap.c", 670))->right_value_objects;
    __freed_obj__ = 0;
    c_value_198=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 672),__exception_result_var_b160=((char*)(right_value165=__builtin_string(obj))), come_pop_stackframe(), __exception_result_var_b160));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value165;
    __freed_obj__ = 0;
    klass_199=((struct sType*)come_null_check(type, "04heap.c", 674))->mClass;
    __freed_obj__ = 0;
    class_name_200=((struct sClass*)come_null_check(klass_199, "04heap.c", 676))->mName;
    __freed_obj__ = 0;
    fun_name_201="clone";
    __freed_obj__ = 0;
    cloner_202=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional255=(come_push_stackframe("04heap.c", 682),__exception_result_var_b161=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 682))->mGenericsTypes, "04heap.c", 682))), come_pop_stackframe(), __exception_result_var_b161)>0,    __freed_obj__ = 0, 
    _if_conditional255) {
        none_generics_name_204=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 683),__exception_result_var_b162=((char*)(right_value166=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 683))->mClass, "04heap.c", 683))->mName))), come_pop_stackframe(), __exception_result_var_b162));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value166;
        __freed_obj__ = 0;
        obj_type_205=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 685),__exception_result_var_b163=((struct sType*)(right_value167=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 685))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b163));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value167;
        __freed_obj__ = 0;
        __dec_obj54=fun_name2_203;
        fun_name2_203=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 687),__exception_result_var_b164=((char*)(right_value168=create_method_name(obj_type_205,(_Bool)0,fun_name_201,info))), come_pop_stackframe(), __exception_result_var_b164));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value168;
        __freed_obj__ = 0;
        fun_name3_206=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 688),__exception_result_var_b165=((char*)(right_value169=xsprintf("%s_%s",none_generics_name_204,fun_name_201))), come_pop_stackframe(), __exception_result_var_b165));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value169;
        __freed_obj__ = 0;
        generics_fun_209=(come_push_stackframe("04heap.c", 690),__exception_result_var_b168=((struct sGenericsFun*)(right_value171=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 690))->generics_funcs, "04heap.c", 690)),fun_name3_206,((void*)0)))), come_pop_stackframe(), __exception_result_var_b168);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value171;
        __freed_obj__ = 0;
        if(_if_conditional269=generics_fun_209,        __freed_obj__ = 0, 
        _if_conditional269) {
            if(_if_conditional270=!(come_push_stackframe("04heap.c", 693),__exception_result_var_b170=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 693),__exception_result_var_b169=((char*)(right_value172=__builtin_string(fun_name2_203))), come_pop_stackframe(), __exception_result_var_b169)),generics_fun_209,obj_type_205,info), come_pop_stackframe(), __exception_result_var_b170),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172),
            (right_value172 && right_value172 != __result_obj__ && !__freed_obj__) ? right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value172, 
            __freed_obj__ = 0, 
            _if_conditional270) {
                __result99__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value179=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value176=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 694)))),(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 694),__exception_result_var_b171=((struct sType*)(right_value174=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value173=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 694)))),"void",(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b171)),(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 694),__exception_result_var_b172=((char*)(right_value175=__builtin_string(""))), come_pop_stackframe(), __exception_result_var_b172)))));
                if(none_generics_name_204 && !__freed_obj__) { none_generics_name_204 = come_decrement_ref_count(none_generics_name_204, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_205 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_205, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_206 && !__freed_obj__) { fun_name3_206 = come_decrement_ref_count(fun_name3_206, (void*)0, (void*)0, 0, 0, 0); }
                if(type2_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_193, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_194 && !__freed_obj__) { result_194 = come_decrement_ref_count(result_194, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_195, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(stack_saved_196 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_198 && !__freed_obj__) { c_value_198 = come_decrement_ref_count(c_value_198, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_203 && !__freed_obj__) { fun_name2_203 = come_decrement_ref_count(fun_name2_203, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value173;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value174;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value175);
                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value175;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value176;
                __freed_obj__ = 0;
                return __result99__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        cloner_202=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 698),__exception_result_var_b173=((struct optional$2sFunpbool*)(right_value180=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 698))->funcs,fun_name2_203))), come_pop_stackframe(), __exception_result_var_b173));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value180);
        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value180;
        __freed_obj__ = 0;
        if(none_generics_name_204 && !__freed_obj__) { none_generics_name_204 = come_decrement_ref_count(none_generics_name_204, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_205 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_205, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_206 && !__freed_obj__) { fun_name3_206 = come_decrement_ref_count(fun_name3_206, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj57=fun_name2_203;
        fun_name2_203=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 701),__exception_result_var_b174=((char*)(right_value181=create_method_name(type,(_Bool)0,fun_name_201,info))), come_pop_stackframe(), __exception_result_var_b174));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_210=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        i_210>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA11;        i_210-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_211=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 705),__exception_result_var_b175=((char*)(right_value182=xsprintf("%s_v%d",fun_name2_203,i_210))), come_pop_stackframe(), __exception_result_var_b175));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value182;
            __freed_obj__ = 0;
            cloner_202=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 706),__exception_result_var_b176=((struct optional$2sFunpbool*)(right_value183=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 706))->funcs,new_fun_name_211))), come_pop_stackframe(), __exception_result_var_b176));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
            if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value183;
            __freed_obj__ = 0;
            if(_if_conditional273=cloner_202,            __freed_obj__ = 0, 
            _if_conditional273) {
                __dec_obj58=fun_name2_203;
                fun_name2_203=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 709),__exception_result_var_b177=((char*)(right_value184=__builtin_string(new_fun_name_211))), come_pop_stackframe(), __exception_result_var_b177));
                if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value184;
                __freed_obj__ = 0;
                if(new_fun_name_211 && !__freed_obj__) { new_fun_name_211 = come_decrement_ref_count(new_fun_name_211, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_211 && !__freed_obj__) { new_fun_name_211 = come_decrement_ref_count(new_fun_name_211, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional274=cloner_202==((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            cloner_202=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 715),__exception_result_var_b178=((struct optional$2sFunpbool*)(right_value185=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 715))->funcs,fun_name2_203))), come_pop_stackframe(), __exception_result_var_b178));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value185;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional275=cloner_202==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 719))->mClass, "04heap.c", 719))->mNumber,    __freed_obj__ = 0, 
    _if_conditional275) {
        multiple_assgin_var8=(come_push_stackframe("04heap.c", 721),__exception_result_var_b179=((struct tuple2$2sFunpcharph*)(right_value186=create_cloner_automatically(type,fun_name_201,info))), come_pop_stackframe(), __exception_result_var_b179);
        fun_212=multiple_assgin_var8->v1;
        new_fun_name_213=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value186;
        __freed_obj__ = 0;
        __dec_obj59=fun_name2_203;
        fun_name2_203=(char*)come_increment_ref_count(new_fun_name_213);
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_202=fun_212;
        __freed_obj__ = 0;
        if(new_fun_name_213 && !__freed_obj__) { new_fun_name_213 = come_decrement_ref_count(new_fun_name_213, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional276=cloner_202!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional276) {
        __dec_obj60=result_194;
        result_194=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 729),__exception_result_var_b180=((char*)(right_value187=xsprintf("%s(%s)",fun_name2_203,c_value_198))), come_pop_stackframe(), __exception_result_var_b180));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value187;
        __freed_obj__ = 0;
        __dec_obj61=result_type_195;
        result_type_195=(struct sType*)come_increment_ref_count(((struct sFun*)come_null_check(cloner_202, "04heap.c", 730))->mResultType);
        if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj62=result_type_195;
        result_type_195=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 731),__exception_result_var_b181=((struct sType*)(right_value188=solve_generics(result_type_195,type,info))), come_pop_stackframe(), __exception_result_var_b181));
        if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value188;
        __freed_obj__ = 0;
    }
    else {
        ((struct sType*)come_null_check(type2_193, "04heap.c", 734))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        type_name_214=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("04heap.c", 735),__exception_result_var_b182=((struct optional$2charphbool*)(right_value189=make_type_name_string(type2_193,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b182)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value189;
        __freed_obj__ = 0;
        __dec_obj63=result_194;
        result_194=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 736),__exception_result_var_b183=((char*)(right_value190=xsprintf("(%s)come_memdup(%s, \"%s\", %d)",type_name_214,c_value_198,((struct sInfo*)come_null_check(info, "04heap.c", 736))->sname,((struct sInfo*)come_null_check(info, "04heap.c", 736))->sline))), come_pop_stackframe(), __exception_result_var_b183));
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value190;
        __freed_obj__ = 0;
        __dec_obj64=result_type_195;
        result_type_195=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(type))));
        if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value191;
        __freed_obj__ = 0;
        if(type_name_214 && !__freed_obj__) { type_name_214 = come_decrement_ref_count(type_name_214, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj65=((struct sInfo*)come_null_check(info, "04heap.c", 740))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 740))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_197);
    if(__dec_obj65) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj66=((struct sInfo*)come_null_check(info, "04heap.c", 741))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 741))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_196);
    if(__dec_obj66) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result100__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value193=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value192=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 743)))),(struct sType*)come_increment_ref_count(result_type_195),(char*)come_increment_ref_count(result_194))));
    if(type2_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_193, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_194 && !__freed_obj__) { result_194 = come_decrement_ref_count(result_194, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_196 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_196, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_198 && !__freed_obj__) { c_value_198 = come_decrement_ref_count(c_value_198, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_203 && !__freed_obj__) { fun_name2_203 = come_decrement_ref_count(fun_name2_203, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value192;
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(type2_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_193, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_194 && !__freed_obj__) { result_194 = come_decrement_ref_count(result_194, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(stack_saved_196 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_196, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(c_value_198 && !__freed_obj__) { c_value_198 = come_decrement_ref_count(c_value_198, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_203 && !__freed_obj__) { fun_name2_203 = come_decrement_ref_count(fun_name2_203, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int __exception_result_var_b166;
unsigned int hash_207;
unsigned int it_208;
_Bool _while_condtional20;
_Bool _if_conditional256;
void* right_value170;
struct optional$2boolbool* __exception_result_var_b167;
_Bool _if_conditional257;
struct sGenericsFun* __result94__;
_Bool _if_conditional258;
_Bool _if_conditional259;
struct sGenericsFun* __result95__;
struct sGenericsFun* __result96__;
struct sGenericsFun* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_207, 0, sizeof(unsigned int));
memset(&it_208, 0, sizeof(unsigned int));
memset(&right_value170, 0, sizeof(void*));
            hash_207=(come_push_stackframe("./comelang2.h", 1263),__exception_result_var_b166=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1263))), come_pop_stackframe(), __exception_result_var_b166)%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1263))->size;
            __freed_obj__ = 0;
            it_208=hash_207;
            __freed_obj__ = 0;
            while(_while_condtional20=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional256=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1267))->item_existance[it_208],                __freed_obj__ = 0, 
                _if_conditional256) {
                    if(_if_conditional257=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1269),__exception_result_var_b167=((struct optional$2boolbool*)(right_value170=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_208], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_b167)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170),
                    (right_value170 && right_value170 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value170, 
                    __freed_obj__ = 0, 
                    _if_conditional257) {
                        __result94__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1271))->items[it_208];
                        __freed_obj__ = 0;
                        return __result94__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_208++;
                    __freed_obj__ = 0;
                    if(_if_conditional258=it_208>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1276))->size,                    __freed_obj__ = 0, 
                    _if_conditional258) {
                        it_208=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional259=it_208==hash_207,                        __freed_obj__ = 0, 
                        _if_conditional259) {
                            __result95__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result95__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result96__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result96__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result97__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result97__;
            __freed_obj__ = 0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional260=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional260) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional261=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional261) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional262=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional262) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional263=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional263) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional264=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional264) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional265=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional265) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional266=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional266) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional267=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional267) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional268=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional268) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value177;
struct sType* __dec_obj55;
void* right_value178;
char* __dec_obj56;
struct tuple2$2sTypephcharph* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
                    __dec_obj55=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1812))->v1;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1812))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value177=sType_clone(v1))));
                    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value177;
                    __freed_obj__ = 0;
                    __dec_obj56=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1813))->v2;
                    ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1813))->v2=(char*)come_increment_ref_count(((char*)(right_value178=string_clone(v2))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value178;
                    __freed_obj__ = 0;
                    __result98__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result98__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional271=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional271) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional272=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional272) {
                            if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
char* result_215;
struct list$1CVALUEph* stack_saved_216;
struct list$1sRightValueObjectph* right_value_objects_217;
struct sClass* klass_218;
char* class_name_219;
char* fun_name_220;
void* right_value194;
struct sType* type2_221;
struct sFun* cloner_222;
char* fun_name2_223;
int __exception_result_var_b184;
_Bool _if_conditional278;
void* right_value195;
char* __exception_result_var_b185;
char* none_generics_name_224;
void* right_value196;
struct sType* __exception_result_var_b186;
struct sType* obj_type_225;
void* right_value197;
char* __exception_result_var_b187;
char* __dec_obj67;
void* right_value198;
char* __exception_result_var_b188;
char* fun_name3_226;
void* right_value199;
struct sGenericsFun* __exception_result_var_b189;
struct sGenericsFun* generics_fun_227;
_Bool _if_conditional279;
void* right_value200;
char* __exception_result_var_b190;
_Bool __exception_result_var_b191;
_Bool _if_conditional280;
_Bool __result101__;
void* right_value201;
struct optional$2sFunpbool* __exception_result_var_b192;
void* right_value202;
char* __exception_result_var_b193;
char* __dec_obj68;
int i_228;
_Bool _for_condtionalA12;
void* right_value203;
char* __exception_result_var_b194;
char* new_fun_name_229;
void* right_value204;
struct optional$2sFunpbool* __exception_result_var_b195;
_Bool _if_conditional281;
void* right_value205;
char* __exception_result_var_b196;
char* __dec_obj69;
_Bool _if_conditional282;
void* right_value206;
struct optional$2sFunpbool* __exception_result_var_b197;
_Bool _if_conditional283;
void* right_value207;
struct tuple2$2sFunpcharph* __exception_result_var_b198;
struct tuple2$2sFunpcharph* multiple_assgin_var9;
struct sFun* fun_230;
char* new_fun_name_231;
char* __dec_obj70;
struct list$1sRightValueObjectph* __dec_obj71;
struct list$1CVALUEph* __dec_obj72;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_215, 0, sizeof(char*));
memset(&stack_saved_216, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_217, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_218, 0, sizeof(struct sClass*));
memset(&class_name_219, 0, sizeof(char*));
memset(&fun_name_220, 0, sizeof(char*));
memset(&right_value194, 0, sizeof(void*));
memset(&type2_221, 0, sizeof(struct sType*));
memset(&cloner_222, 0, sizeof(struct sFun*));
memset(&fun_name2_223, 0, sizeof(char*));
memset(&right_value195, 0, sizeof(void*));
memset(&none_generics_name_224, 0, sizeof(char*));
memset(&right_value196, 0, sizeof(void*));
memset(&obj_type_225, 0, sizeof(struct sType*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&fun_name3_226, 0, sizeof(char*));
memset(&right_value199, 0, sizeof(void*));
memset(&generics_fun_227, 0, sizeof(struct sGenericsFun*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&i_228, 0, sizeof(int));
memset(&right_value203, 0, sizeof(void*));
memset(&new_fun_name_229, 0, sizeof(char*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&fun_230, 0, sizeof(struct sFun*));
memset(&new_fun_name_231, 0, sizeof(char*));
memset(&fun_230, 0, sizeof(struct sFun*));
memset(&new_fun_name_231, 0, sizeof(char*));
    if(_if_conditional277=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 748))->mNoSolvedGenericsType, "04heap.c", 748))->v1,    __freed_obj__ = 0, 
    _if_conditional277) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 749))->mNoSolvedGenericsType, "04heap.c", 749))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_215=((void*)0);
    __freed_obj__ = 0;
    stack_saved_216=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 752))->stack);
    __freed_obj__ = 0;
    right_value_objects_217=((struct sInfo*)come_null_check(info, "04heap.c", 753))->right_value_objects;
    __freed_obj__ = 0;
    klass_218=((struct sType*)come_null_check(type, "04heap.c", 755))->mClass;
    __freed_obj__ = 0;
    class_name_219=((struct sClass*)come_null_check(klass_218, "04heap.c", 757))->mName;
    __freed_obj__ = 0;
    fun_name_220="equals";
    __freed_obj__ = 0;
    type2_221=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value194;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_221, "04heap.c", 762))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_222=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional278=(come_push_stackframe("04heap.c", 766),__exception_result_var_b184=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 766))->mGenericsTypes, "04heap.c", 766))), come_pop_stackframe(), __exception_result_var_b184)>0,    __freed_obj__ = 0, 
    _if_conditional278) {
        none_generics_name_224=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 767),__exception_result_var_b185=((char*)(right_value195=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 767))->mClass, "04heap.c", 767))->mName))), come_pop_stackframe(), __exception_result_var_b185));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value195;
        __freed_obj__ = 0;
        obj_type_225=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 769),__exception_result_var_b186=((struct sType*)(right_value196=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 769))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b186));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value196;
        __freed_obj__ = 0;
        __dec_obj67=fun_name2_223;
        fun_name2_223=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 771),__exception_result_var_b187=((char*)(right_value197=create_method_name(obj_type_225,(_Bool)0,fun_name_220,info))), come_pop_stackframe(), __exception_result_var_b187));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value197;
        __freed_obj__ = 0;
        fun_name3_226=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 772),__exception_result_var_b188=((char*)(right_value198=xsprintf("%s_%s",none_generics_name_224,fun_name_220))), come_pop_stackframe(), __exception_result_var_b188));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value198;
        __freed_obj__ = 0;
        generics_fun_227=(come_push_stackframe("04heap.c", 774),__exception_result_var_b189=((struct sGenericsFun*)(right_value199=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 774))->generics_funcs, "04heap.c", 774)),fun_name3_226,((void*)0)))), come_pop_stackframe(), __exception_result_var_b189);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value199;
        __freed_obj__ = 0;
        if(_if_conditional279=generics_fun_227,        __freed_obj__ = 0, 
        _if_conditional279) {
            if(_if_conditional280=!(come_push_stackframe("04heap.c", 777),__exception_result_var_b191=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 777),__exception_result_var_b190=((char*)(right_value200=__builtin_string(fun_name2_223))), come_pop_stackframe(), __exception_result_var_b190)),generics_fun_227,obj_type_225,info), come_pop_stackframe(), __exception_result_var_b191),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200),
            (right_value200 && right_value200 != __result_obj__ && !__freed_obj__) ? right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value200, 
            __freed_obj__ = 0, 
            _if_conditional280) {
                __result101__ = (_Bool)0;
                if(none_generics_name_224 && !__freed_obj__) { none_generics_name_224 = come_decrement_ref_count(none_generics_name_224, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_226 && !__freed_obj__) { fun_name3_226 = come_decrement_ref_count(fun_name3_226, (void*)0, (void*)0, 0, 0, 0); }
                if(result_215 && !__freed_obj__) { result_215 = come_decrement_ref_count(result_215, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_216 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_216, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_221, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_223 && !__freed_obj__) { fun_name2_223 = come_decrement_ref_count(fun_name2_223, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result101__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        cloner_222=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 782),__exception_result_var_b192=((struct optional$2sFunpbool*)(right_value201=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 782))->funcs,fun_name2_223))), come_pop_stackframe(), __exception_result_var_b192));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value201;
        __freed_obj__ = 0;
        if(none_generics_name_224 && !__freed_obj__) { none_generics_name_224 = come_decrement_ref_count(none_generics_name_224, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_225 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_225, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_226 && !__freed_obj__) { fun_name3_226 = come_decrement_ref_count(fun_name3_226, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj68=fun_name2_223;
        fun_name2_223=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 785),__exception_result_var_b193=((char*)(right_value202=create_method_name(type,(_Bool)0,fun_name_220,info))), come_pop_stackframe(), __exception_result_var_b193));
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value202;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_228=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        i_228>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA12;        i_228-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_229=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 789),__exception_result_var_b194=((char*)(right_value203=xsprintf("%s_v%d",fun_name2_223,i_228))), come_pop_stackframe(), __exception_result_var_b194));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value203;
            __freed_obj__ = 0;
            cloner_222=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 790),__exception_result_var_b195=((struct optional$2sFunpbool*)(right_value204=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 790))->funcs,new_fun_name_229))), come_pop_stackframe(), __exception_result_var_b195));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value204;
            __freed_obj__ = 0;
            if(_if_conditional281=cloner_222,            __freed_obj__ = 0, 
            _if_conditional281) {
                __dec_obj69=fun_name2_223;
                fun_name2_223=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 793),__exception_result_var_b196=((char*)(right_value205=__builtin_string(new_fun_name_229))), come_pop_stackframe(), __exception_result_var_b196));
                if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value205;
                __freed_obj__ = 0;
                if(new_fun_name_229 && !__freed_obj__) { new_fun_name_229 = come_decrement_ref_count(new_fun_name_229, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_229 && !__freed_obj__) { new_fun_name_229 = come_decrement_ref_count(new_fun_name_229, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional282=cloner_222==((void*)0),        __freed_obj__ = 0, 
        _if_conditional282) {
            cloner_222=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 799),__exception_result_var_b197=((struct optional$2sFunpbool*)(right_value206=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 799))->funcs,fun_name2_223))), come_pop_stackframe(), __exception_result_var_b197));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value206;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional283=cloner_222==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 803))->mClass, "04heap.c", 803))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 803))->mClass, "04heap.c", 803))->mNumber,    __freed_obj__ = 0, 
    _if_conditional283) {
        multiple_assgin_var9=(come_push_stackframe("04heap.c", 805),__exception_result_var_b198=((struct tuple2$2sFunpcharph*)(right_value207=create_equals_automatically(type,fun_name_220,info))), come_pop_stackframe(), __exception_result_var_b198);
        fun_230=multiple_assgin_var9->v1;
        new_fun_name_231=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value207;
        __freed_obj__ = 0;
        __dec_obj70=fun_name2_223;
        fun_name2_223=(char*)come_increment_ref_count(new_fun_name_231);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_222=fun_230;
        __freed_obj__ = 0;
        if(new_fun_name_231 && !__freed_obj__) { new_fun_name_231 = come_decrement_ref_count(new_fun_name_231, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj71=((struct sInfo*)come_null_check(info, "04heap.c", 811))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 811))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_217);
    if(__dec_obj71) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj72=((struct sInfo*)come_null_check(info, "04heap.c", 812))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 812))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_216);
    if(__dec_obj72) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result102__ = (_Bool)1;
    if(result_215 && !__freed_obj__) { result_215 = come_decrement_ref_count(result_215, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_216 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_223 && !__freed_obj__) { fun_name2_223 = come_decrement_ref_count(fun_name2_223, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
    if(result_215 && !__freed_obj__) { result_215 = come_decrement_ref_count(result_215, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_216 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_221 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_223 && !__freed_obj__) { fun_name2_223 = come_decrement_ref_count(fun_name2_223, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional284;
char* result_232;
struct list$1CVALUEph* stack_saved_233;
struct list$1sRightValueObjectph* right_value_objects_234;
struct sClass* klass_235;
char* class_name_236;
char* fun_name_237;
void* right_value208;
struct sType* type2_238;
struct sFun* cloner_239;
char* fun_name2_240;
int __exception_result_var_b199;
_Bool _if_conditional285;
void* right_value209;
char* __exception_result_var_b200;
char* none_generics_name_241;
void* right_value210;
struct sType* __exception_result_var_b201;
struct sType* obj_type_242;
void* right_value211;
char* __exception_result_var_b202;
char* __dec_obj73;
void* right_value212;
char* __exception_result_var_b203;
char* fun_name3_243;
void* right_value213;
struct sGenericsFun* __exception_result_var_b204;
struct sGenericsFun* generics_fun_244;
_Bool _if_conditional286;
void* right_value214;
char* __exception_result_var_b205;
_Bool __exception_result_var_b206;
_Bool _if_conditional287;
_Bool __result103__;
void* right_value215;
struct optional$2sFunpbool* __exception_result_var_b207;
void* right_value216;
char* __exception_result_var_b208;
char* __dec_obj74;
int i_245;
_Bool _for_condtionalA13;
void* right_value217;
char* __exception_result_var_b209;
char* new_fun_name_246;
void* right_value218;
struct optional$2sFunpbool* __exception_result_var_b210;
_Bool _if_conditional288;
void* right_value219;
char* __exception_result_var_b211;
char* __dec_obj75;
_Bool _if_conditional289;
void* right_value220;
struct optional$2sFunpbool* __exception_result_var_b212;
_Bool _if_conditional290;
void* right_value221;
struct tuple2$2sFunpcharph* __exception_result_var_b213;
struct tuple2$2sFunpcharph* multiple_assgin_var10;
struct sFun* fun_247;
char* new_fun_name_248;
char* __dec_obj76;
struct list$1sRightValueObjectph* __dec_obj77;
struct list$1CVALUEph* __dec_obj78;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_232, 0, sizeof(char*));
memset(&stack_saved_233, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_234, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_235, 0, sizeof(struct sClass*));
memset(&class_name_236, 0, sizeof(char*));
memset(&fun_name_237, 0, sizeof(char*));
memset(&right_value208, 0, sizeof(void*));
memset(&type2_238, 0, sizeof(struct sType*));
memset(&cloner_239, 0, sizeof(struct sFun*));
memset(&fun_name2_240, 0, sizeof(char*));
memset(&right_value209, 0, sizeof(void*));
memset(&none_generics_name_241, 0, sizeof(char*));
memset(&right_value210, 0, sizeof(void*));
memset(&obj_type_242, 0, sizeof(struct sType*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&fun_name3_243, 0, sizeof(char*));
memset(&right_value213, 0, sizeof(void*));
memset(&generics_fun_244, 0, sizeof(struct sGenericsFun*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&i_245, 0, sizeof(int));
memset(&right_value217, 0, sizeof(void*));
memset(&new_fun_name_246, 0, sizeof(char*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&fun_247, 0, sizeof(struct sFun*));
memset(&new_fun_name_248, 0, sizeof(char*));
memset(&fun_247, 0, sizeof(struct sFun*));
memset(&new_fun_name_248, 0, sizeof(char*));
    if(_if_conditional284=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 819))->mNoSolvedGenericsType, "04heap.c", 819))->v1,    __freed_obj__ = 0, 
    _if_conditional284) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 820))->mNoSolvedGenericsType, "04heap.c", 820))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_232=((void*)0);
    __freed_obj__ = 0;
    stack_saved_233=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 823))->stack);
    __freed_obj__ = 0;
    right_value_objects_234=((struct sInfo*)come_null_check(info, "04heap.c", 824))->right_value_objects;
    __freed_obj__ = 0;
    klass_235=((struct sType*)come_null_check(type, "04heap.c", 826))->mClass;
    __freed_obj__ = 0;
    class_name_236=((struct sClass*)come_null_check(klass_235, "04heap.c", 828))->mName;
    __freed_obj__ = 0;
    fun_name_237="operator_equals";
    __freed_obj__ = 0;
    type2_238=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value208;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_238, "04heap.c", 833))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_239=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional285=(come_push_stackframe("04heap.c", 837),__exception_result_var_b199=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 837))->mGenericsTypes, "04heap.c", 837))), come_pop_stackframe(), __exception_result_var_b199)>0,    __freed_obj__ = 0, 
    _if_conditional285) {
        none_generics_name_241=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 838),__exception_result_var_b200=((char*)(right_value209=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 838))->mClass, "04heap.c", 838))->mName))), come_pop_stackframe(), __exception_result_var_b200));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
        if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value209;
        __freed_obj__ = 0;
        obj_type_242=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 840),__exception_result_var_b201=((struct sType*)(right_value210=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 840))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b201));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value210;
        __freed_obj__ = 0;
        __dec_obj73=fun_name2_240;
        fun_name2_240=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 842),__exception_result_var_b202=((char*)(right_value211=create_method_name(obj_type_242,(_Bool)0,fun_name_237,info))), come_pop_stackframe(), __exception_result_var_b202));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value211;
        __freed_obj__ = 0;
        fun_name3_243=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 843),__exception_result_var_b203=((char*)(right_value212=xsprintf("%s_%s",none_generics_name_241,fun_name_237))), come_pop_stackframe(), __exception_result_var_b203));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value212;
        __freed_obj__ = 0;
        generics_fun_244=(come_push_stackframe("04heap.c", 845),__exception_result_var_b204=((struct sGenericsFun*)(right_value213=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 845))->generics_funcs, "04heap.c", 845)),fun_name3_243,((void*)0)))), come_pop_stackframe(), __exception_result_var_b204);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value213;
        __freed_obj__ = 0;
        if(_if_conditional286=generics_fun_244,        __freed_obj__ = 0, 
        _if_conditional286) {
            if(_if_conditional287=!(come_push_stackframe("04heap.c", 848),__exception_result_var_b206=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 848),__exception_result_var_b205=((char*)(right_value214=__builtin_string(fun_name2_240))), come_pop_stackframe(), __exception_result_var_b205)),generics_fun_244,obj_type_242,info), come_pop_stackframe(), __exception_result_var_b206),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214),
            (right_value214 && right_value214 != __result_obj__ && !__freed_obj__) ? right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value214, 
            __freed_obj__ = 0, 
            _if_conditional287) {
                __result103__ = (_Bool)0;
                if(none_generics_name_241 && !__freed_obj__) { none_generics_name_241 = come_decrement_ref_count(none_generics_name_241, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_242 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_243 && !__freed_obj__) { fun_name3_243 = come_decrement_ref_count(fun_name3_243, (void*)0, (void*)0, 0, 0, 0); }
                if(result_232 && !__freed_obj__) { result_232 = come_decrement_ref_count(result_232, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_233 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_233, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_238, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_240 && !__freed_obj__) { fun_name2_240 = come_decrement_ref_count(fun_name2_240, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result103__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        cloner_239=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 853),__exception_result_var_b207=((struct optional$2sFunpbool*)(right_value215=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 853))->funcs,fun_name2_240))), come_pop_stackframe(), __exception_result_var_b207));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value215;
        __freed_obj__ = 0;
        if(none_generics_name_241 && !__freed_obj__) { none_generics_name_241 = come_decrement_ref_count(none_generics_name_241, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_242 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_242, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_243 && !__freed_obj__) { fun_name3_243 = come_decrement_ref_count(fun_name3_243, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj74=fun_name2_240;
        fun_name2_240=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 856),__exception_result_var_b208=((char*)(right_value216=create_method_name(type,(_Bool)0,fun_name_237,info))), come_pop_stackframe(), __exception_result_var_b208));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value216;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_245=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA13=        i_245>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA13;        i_245-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_246=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 860),__exception_result_var_b209=((char*)(right_value217=xsprintf("%s_v%d",fun_name2_240,i_245))), come_pop_stackframe(), __exception_result_var_b209));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
            if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value217;
            __freed_obj__ = 0;
            cloner_239=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 861),__exception_result_var_b210=((struct optional$2sFunpbool*)(right_value218=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 861))->funcs,new_fun_name_246))), come_pop_stackframe(), __exception_result_var_b210));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
            if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value218;
            __freed_obj__ = 0;
            if(_if_conditional288=cloner_239,            __freed_obj__ = 0, 
            _if_conditional288) {
                __dec_obj75=fun_name2_240;
                fun_name2_240=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 864),__exception_result_var_b211=((char*)(right_value219=__builtin_string(new_fun_name_246))), come_pop_stackframe(), __exception_result_var_b211));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value219;
                __freed_obj__ = 0;
                if(new_fun_name_246 && !__freed_obj__) { new_fun_name_246 = come_decrement_ref_count(new_fun_name_246, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_246 && !__freed_obj__) { new_fun_name_246 = come_decrement_ref_count(new_fun_name_246, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional289=cloner_239==((void*)0),        __freed_obj__ = 0, 
        _if_conditional289) {
            cloner_239=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 870),__exception_result_var_b212=((struct optional$2sFunpbool*)(right_value220=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 870))->funcs,fun_name2_240))), come_pop_stackframe(), __exception_result_var_b212));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value220;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional290=cloner_239==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 874))->mClass, "04heap.c", 874))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 874))->mClass, "04heap.c", 874))->mNumber,    __freed_obj__ = 0, 
    _if_conditional290) {
        multiple_assgin_var10=(come_push_stackframe("04heap.c", 876),__exception_result_var_b213=((struct tuple2$2sFunpcharph*)(right_value221=create_operator_equals_automatically(type,fun_name_237,info))), come_pop_stackframe(), __exception_result_var_b213);
        fun_247=multiple_assgin_var10->v1;
        new_fun_name_248=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value221;
        __freed_obj__ = 0;
        __dec_obj76=fun_name2_240;
        fun_name2_240=(char*)come_increment_ref_count(new_fun_name_248);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_239=fun_247;
        __freed_obj__ = 0;
        if(new_fun_name_248 && !__freed_obj__) { new_fun_name_248 = come_decrement_ref_count(new_fun_name_248, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj77=((struct sInfo*)come_null_check(info, "04heap.c", 882))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 882))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_234);
    if(__dec_obj77) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj78=((struct sInfo*)come_null_check(info, "04heap.c", 883))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 883))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_233);
    if(__dec_obj78) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result104__ = (_Bool)1;
    if(result_232 && !__freed_obj__) { result_232 = come_decrement_ref_count(result_232, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_233 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_240 && !__freed_obj__) { fun_name2_240 = come_decrement_ref_count(fun_name2_240, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
    if(result_232 && !__freed_obj__) { result_232 = come_decrement_ref_count(result_232, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_233 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_238 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_240 && !__freed_obj__) { fun_name2_240 = come_decrement_ref_count(fun_name2_240, (void*)0, (void*)0, 0, 0, 0); }
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional291;
char* result_249;
struct list$1CVALUEph* stack_saved_250;
struct list$1sRightValueObjectph* right_value_objects_251;
struct sClass* klass_252;
char* class_name_253;
char* fun_name_254;
void* right_value222;
struct sType* type2_255;
struct sFun* cloner_256;
char* fun_name2_257;
int __exception_result_var_b214;
_Bool _if_conditional292;
void* right_value223;
char* __exception_result_var_b215;
char* none_generics_name_258;
void* right_value224;
struct sType* __exception_result_var_b216;
struct sType* obj_type_259;
void* right_value225;
char* __exception_result_var_b217;
char* __dec_obj79;
void* right_value226;
char* __exception_result_var_b218;
char* fun_name3_260;
void* right_value227;
struct sGenericsFun* __exception_result_var_b219;
struct sGenericsFun* generics_fun_261;
_Bool _if_conditional293;
void* right_value228;
char* __exception_result_var_b220;
_Bool __exception_result_var_b221;
_Bool _if_conditional294;
_Bool __result105__;
void* right_value229;
struct optional$2sFunpbool* __exception_result_var_b222;
void* right_value230;
char* __exception_result_var_b223;
char* __dec_obj80;
int i_262;
_Bool _for_condtionalA14;
void* right_value231;
char* __exception_result_var_b224;
char* new_fun_name_263;
void* right_value232;
struct optional$2sFunpbool* __exception_result_var_b225;
_Bool _if_conditional295;
void* right_value233;
char* __exception_result_var_b226;
char* __dec_obj81;
_Bool _if_conditional296;
void* right_value234;
struct optional$2sFunpbool* __exception_result_var_b227;
_Bool _if_conditional297;
void* right_value235;
struct tuple2$2sFunpcharph* __exception_result_var_b228;
struct tuple2$2sFunpcharph* multiple_assgin_var11;
struct sFun* fun_264;
char* new_fun_name_265;
char* __dec_obj82;
struct list$1sRightValueObjectph* __dec_obj83;
struct list$1CVALUEph* __dec_obj84;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_249, 0, sizeof(char*));
memset(&stack_saved_250, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value_objects_251, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&klass_252, 0, sizeof(struct sClass*));
memset(&class_name_253, 0, sizeof(char*));
memset(&fun_name_254, 0, sizeof(char*));
memset(&right_value222, 0, sizeof(void*));
memset(&type2_255, 0, sizeof(struct sType*));
memset(&cloner_256, 0, sizeof(struct sFun*));
memset(&fun_name2_257, 0, sizeof(char*));
memset(&right_value223, 0, sizeof(void*));
memset(&none_generics_name_258, 0, sizeof(char*));
memset(&right_value224, 0, sizeof(void*));
memset(&obj_type_259, 0, sizeof(struct sType*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&fun_name3_260, 0, sizeof(char*));
memset(&right_value227, 0, sizeof(void*));
memset(&generics_fun_261, 0, sizeof(struct sGenericsFun*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&i_262, 0, sizeof(int));
memset(&right_value231, 0, sizeof(void*));
memset(&new_fun_name_263, 0, sizeof(char*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&fun_264, 0, sizeof(struct sFun*));
memset(&new_fun_name_265, 0, sizeof(char*));
memset(&fun_264, 0, sizeof(struct sFun*));
memset(&new_fun_name_265, 0, sizeof(char*));
    if(_if_conditional291=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 890))->mNoSolvedGenericsType, "04heap.c", 890))->v1,    __freed_obj__ = 0, 
    _if_conditional291) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 891))->mNoSolvedGenericsType, "04heap.c", 891))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_249=((void*)0);
    __freed_obj__ = 0;
    stack_saved_250=(struct list$1CVALUEph*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "04heap.c", 894))->stack);
    __freed_obj__ = 0;
    right_value_objects_251=((struct sInfo*)come_null_check(info, "04heap.c", 895))->right_value_objects;
    __freed_obj__ = 0;
    klass_252=((struct sType*)come_null_check(type, "04heap.c", 897))->mClass;
    __freed_obj__ = 0;
    class_name_253=((struct sClass*)come_null_check(klass_252, "04heap.c", 899))->mName;
    __freed_obj__ = 0;
    fun_name_254="operator_not_equals";
    __freed_obj__ = 0;
    type2_255=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value222;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_255, "04heap.c", 904))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    cloner_256=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional292=(come_push_stackframe("04heap.c", 908),__exception_result_var_b214=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 908))->mGenericsTypes, "04heap.c", 908))), come_pop_stackframe(), __exception_result_var_b214)>0,    __freed_obj__ = 0, 
    _if_conditional292) {
        none_generics_name_258=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 909),__exception_result_var_b215=((char*)(right_value223=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 909))->mClass, "04heap.c", 909))->mName))), come_pop_stackframe(), __exception_result_var_b215));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223;
        __freed_obj__ = 0;
        obj_type_259=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 911),__exception_result_var_b216=((struct sType*)(right_value224=solve_generics(type,((struct sInfo*)come_null_check(info, "04heap.c", 911))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b216));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value224;
        __freed_obj__ = 0;
        __dec_obj79=fun_name2_257;
        fun_name2_257=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 913),__exception_result_var_b217=((char*)(right_value225=create_method_name(obj_type_259,(_Bool)0,fun_name_254,info))), come_pop_stackframe(), __exception_result_var_b217));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value225;
        __freed_obj__ = 0;
        fun_name3_260=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 914),__exception_result_var_b218=((char*)(right_value226=xsprintf("%s_%s",none_generics_name_258,fun_name_254))), come_pop_stackframe(), __exception_result_var_b218));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value226;
        __freed_obj__ = 0;
        generics_fun_261=(come_push_stackframe("04heap.c", 916),__exception_result_var_b219=((struct sGenericsFun*)(right_value227=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 916))->generics_funcs, "04heap.c", 916)),fun_name3_260,((void*)0)))), come_pop_stackframe(), __exception_result_var_b219);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value227;
        __freed_obj__ = 0;
        if(_if_conditional293=generics_fun_261,        __freed_obj__ = 0, 
        _if_conditional293) {
            if(_if_conditional294=!(come_push_stackframe("04heap.c", 919),__exception_result_var_b221=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("04heap.c", 919),__exception_result_var_b220=((char*)(right_value228=__builtin_string(fun_name2_257))), come_pop_stackframe(), __exception_result_var_b220)),generics_fun_261,obj_type_259,info), come_pop_stackframe(), __exception_result_var_b221),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228),
            (right_value228 && right_value228 != __result_obj__ && !__freed_obj__) ? right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value228, 
            __freed_obj__ = 0, 
            _if_conditional294) {
                __result105__ = (_Bool)0;
                if(none_generics_name_258 && !__freed_obj__) { none_generics_name_258 = come_decrement_ref_count(none_generics_name_258, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_259 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_259, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_260 && !__freed_obj__) { fun_name3_260 = come_decrement_ref_count(fun_name3_260, (void*)0, (void*)0, 0, 0, 0); }
                if(result_249 && !__freed_obj__) { result_249 = come_decrement_ref_count(result_249, (void*)0, (void*)0, 0, 0, 0); }
                if(stack_saved_250 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_250, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_255, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_257 && !__freed_obj__) { fun_name2_257 = come_decrement_ref_count(fun_name2_257, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result105__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        cloner_256=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 924),__exception_result_var_b222=((struct optional$2sFunpbool*)(right_value229=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 924))->funcs,fun_name2_257))), come_pop_stackframe(), __exception_result_var_b222));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value229);
        if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value229;
        __freed_obj__ = 0;
        if(none_generics_name_258 && !__freed_obj__) { none_generics_name_258 = come_decrement_ref_count(none_generics_name_258, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_259 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_259, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_260 && !__freed_obj__) { fun_name3_260 = come_decrement_ref_count(fun_name3_260, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj80=fun_name2_257;
        fun_name2_257=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 927),__exception_result_var_b223=((char*)(right_value230=create_method_name(type,(_Bool)0,fun_name_254,info))), come_pop_stackframe(), __exception_result_var_b223));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value230;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_262=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA14=        i_262>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA14;        i_262-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_263=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 931),__exception_result_var_b224=((char*)(right_value231=xsprintf("%s_v%d",fun_name2_257,i_262))), come_pop_stackframe(), __exception_result_var_b224));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value231;
            __freed_obj__ = 0;
            cloner_256=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 932),__exception_result_var_b225=((struct optional$2sFunpbool*)(right_value232=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 932))->funcs,new_fun_name_263))), come_pop_stackframe(), __exception_result_var_b225));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value232;
            __freed_obj__ = 0;
            if(_if_conditional295=cloner_256,            __freed_obj__ = 0, 
            _if_conditional295) {
                __dec_obj81=fun_name2_257;
                fun_name2_257=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 935),__exception_result_var_b226=((char*)(right_value233=__builtin_string(new_fun_name_263))), come_pop_stackframe(), __exception_result_var_b226));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value233;
                __freed_obj__ = 0;
                if(new_fun_name_263 && !__freed_obj__) { new_fun_name_263 = come_decrement_ref_count(new_fun_name_263, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_263 && !__freed_obj__) { new_fun_name_263 = come_decrement_ref_count(new_fun_name_263, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional296=cloner_256==((void*)0),        __freed_obj__ = 0, 
        _if_conditional296) {
            cloner_256=optional$2sFunpbool_value((come_push_stackframe("04heap.c", 941),__exception_result_var_b227=((struct optional$2sFunpbool*)(right_value234=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "04heap.c", 941))->funcs,fun_name2_257))), come_pop_stackframe(), __exception_result_var_b227));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
            if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value234;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional297=cloner_256==((void*)0)&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 945))->mClass, "04heap.c", 945))->mProtocol&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 945))->mClass, "04heap.c", 945))->mNumber,    __freed_obj__ = 0, 
    _if_conditional297) {
        multiple_assgin_var11=(come_push_stackframe("04heap.c", 947),__exception_result_var_b228=((struct tuple2$2sFunpcharph*)(right_value235=create_operator_not_equals_automatically(type,fun_name_254,info))), come_pop_stackframe(), __exception_result_var_b228);
        fun_264=multiple_assgin_var11->v1;
        new_fun_name_265=(char*)come_increment_ref_count(multiple_assgin_var11->v2);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value235;
        __freed_obj__ = 0;
        __dec_obj82=fun_name2_257;
        fun_name2_257=(char*)come_increment_ref_count(new_fun_name_265);
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
        cloner_256=fun_264;
        __freed_obj__ = 0;
        if(new_fun_name_265 && !__freed_obj__) { new_fun_name_265 = come_decrement_ref_count(new_fun_name_265, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj83=((struct sInfo*)come_null_check(info, "04heap.c", 953))->right_value_objects;
    ((struct sInfo*)come_null_check(info, "04heap.c", 953))->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_251);
    if(__dec_obj83) { come_call_finalizer(list$1sRightValueObjectph_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj84=((struct sInfo*)come_null_check(info, "04heap.c", 954))->stack;
    ((struct sInfo*)come_null_check(info, "04heap.c", 954))->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_250);
    if(__dec_obj84) { come_call_finalizer(list$1CVALUEph_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result106__ = (_Bool)1;
    if(result_249 && !__freed_obj__) { result_249 = come_decrement_ref_count(result_249, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_250 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_255, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_257 && !__freed_obj__) { fun_name2_257 = come_decrement_ref_count(fun_name2_257, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
    if(result_249 && !__freed_obj__) { result_249 = come_decrement_ref_count(result_249, (void*)0, (void*)0, 0, 0, 0); }
    if(stack_saved_250 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,stack_saved_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_255 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_255, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_257 && !__freed_obj__) { fun_name2_257 = come_decrement_ref_count(fun_name2_257, (void*)0, (void*)0, 0, 0, 0); }
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool free_right_value_266;
struct list$1sRightValueObjectph* right_value_objects_267;
int n_268;
struct list$1sRightValueObjectph* o2_saved_269;
struct sRightValueObject* __exception_result_var_b229;
struct sRightValueObject* it_270;
_Bool __exception_result_var_b230;
_Bool _for_condtionalA15;
struct sRightValueObject* __exception_result_var_b231;
_Bool _if_conditional298;
_Bool __exception_result_var_b232;
_Bool _if_conditional299;
void* right_value236;
struct sType* type_271;
void* right_value237;
struct sType* __exception_result_var_b233;
struct sType* __dec_obj85;
_Bool _if_conditional300;
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&free_right_value_266, 0, sizeof(_Bool));
memset(&right_value_objects_267, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&n_268, 0, sizeof(int));
memset(&o2_saved_269, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_270, 0, sizeof(struct sRightValueObject*));
memset(&right_value236, 0, sizeof(void*));
memset(&type_271, 0, sizeof(struct sType*));
memset(&right_value237, 0, sizeof(void*));
    free_right_value_266=(_Bool)0;
    __freed_obj__ = 0;
    right_value_objects_267=((struct sInfo*)come_null_check(info, "04heap.c", 962))->right_value_objects;
    __freed_obj__ = 0;
    n_268=0;
    __freed_obj__ = 0;
    for(
    o2_saved_269=(right_value_objects_267),it_270=(come_push_stackframe("04heap.c", 965),__exception_result_var_b229=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_269), "04heap.c", 965))), come_pop_stackframe(), __exception_result_var_b229) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA15=    !(come_push_stackframe("04heap.c", 965),__exception_result_var_b230=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_269), "04heap.c", 965))), come_pop_stackframe(), __exception_result_var_b230) ,    __freed_obj__ = 0, 
    _for_condtionalA15;    it_270=(come_push_stackframe("04heap.c", 965),__exception_result_var_b231=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_269), "04heap.c", 965))), come_pop_stackframe(), __exception_result_var_b231) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional298=it_270&&!((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 966))->mFreed,        __freed_obj__ = 0, 
        _if_conditional298) {
            if(_if_conditional299=(come_push_stackframe("04heap.c", 967),__exception_result_var_b232=string_operator_equals(((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 967))->mFunName,((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 967))->come_fun, "04heap.c", 967))->mName), come_pop_stackframe(), __exception_result_var_b232)&&((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 967))->mBlockLevel==((struct sInfo*)come_null_check(info, "04heap.c", 967))->block_level,            __freed_obj__ = 0, 
            _if_conditional299) {
                type_271=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 968))->mType))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value236;
                __freed_obj__ = 0;
                __dec_obj85=type_271;
                type_271=(struct sType*)come_increment_ref_count((come_push_stackframe("04heap.c", 970),__exception_result_var_b233=((struct sType*)(right_value237=solve_type(type_271,((struct sInfo*)come_null_check(info, "04heap.c", 970))->generics_type,((struct sInfo*)come_null_check(info, "04heap.c", 970))->method_generics_types,info))), come_pop_stackframe(), __exception_result_var_b233));
                if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value237);
                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value237;
                __freed_obj__ = 0;
                if(_if_conditional300=comma,                __freed_obj__ = 0, 
                _if_conditional300) {
                    (come_push_stackframe("04heap.c", 973),add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s),\n",n_268,((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 973))->mVarName),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                else {
                    (come_push_stackframe("04heap.c", 976),add_come_code(info,"__freed_obj__ = come_is_contained_element(__right_value_freed_obj, %d, %s);\n",n_268,((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 976))->mVarName),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (come_push_stackframe("04heap.c", 979),free_object(type_271,((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 979))->mVarName,(_Bool)1,(_Bool)0,info,comma,(_Bool)0,(_Bool)0),come_pop_stackframe());
                __freed_obj__ = 0;
                if(_if_conditional301=comma,                __freed_obj__ = 0, 
                _if_conditional301) {
                    (come_push_stackframe("04heap.c", 982),add_come_code(info,"__right_value_freed_obj[%d] = %s, \n",n_268,((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 982))->mVarName),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                else {
                    (come_push_stackframe("04heap.c", 985),add_come_code(info,"__right_value_freed_obj[%d] = %s;\n",n_268,((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 985))->mVarName),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sRightValueObject*)come_null_check(it_270, "04heap.c", 988))->mFreed=(_Bool)1;
                __freed_obj__ = 0;
                free_right_value_266=(_Bool)1;
                __freed_obj__ = 0;
                if(type_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_271, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        n_268++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional302=comma,    __freed_obj__ = 0, 
    _if_conditional302) {
        (come_push_stackframe("04heap.c", 997),add_come_code(info,"__freed_obj__ = 0, \n"),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    else {
        (come_push_stackframe("04heap.c", 1000),add_come_code(info,"__freed_obj__ = 0;\n"),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

_Bool is_right_values(int right_value_num, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sRightValueObjectph* o2_saved_272;
struct sRightValueObject* __exception_result_var_b234;
struct sRightValueObject* it_273;
_Bool __exception_result_var_b235;
_Bool _for_condtionalA16;
struct sRightValueObject* __exception_result_var_b236;
_Bool _if_conditional303;
_Bool __result107__;
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_272, 0, sizeof(struct list$1sRightValueObjectph*));
memset(&it_273, 0, sizeof(struct sRightValueObject*));
    for(
    o2_saved_272=(struct list$1sRightValueObjectph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "04heap.c", 1006))->right_value_objects)),it_273=(come_push_stackframe("04heap.c", 1006),__exception_result_var_b234=list$1sRightValueObjectph_begin(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_272), "04heap.c", 1006))), come_pop_stackframe(), __exception_result_var_b234) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA16=    !(come_push_stackframe("04heap.c", 1006),__exception_result_var_b235=list$1sRightValueObjectph_end(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_272), "04heap.c", 1006))), come_pop_stackframe(), __exception_result_var_b235) ,    __freed_obj__ = 0, 
    _for_condtionalA16;    it_273=(come_push_stackframe("04heap.c", 1006),__exception_result_var_b236=list$1sRightValueObjectph_next(((struct list$1sRightValueObjectph*)come_null_check((o2_saved_272), "04heap.c", 1006))), come_pop_stackframe(), __exception_result_var_b236) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional303=((struct sRightValueObject*)come_null_check(it_273, "04heap.c", 1007))->mID==right_value_num,        __freed_obj__ = 0, 
        _if_conditional303) {
            __result107__ = (_Bool)1;
            if(o2_saved_272 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_272, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_272 && !__freed_obj__) { come_call_finalizer(list$1sRightValueObjectphp_finalize,o2_saved_272, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    __result108__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVarTable* it_274;
_Bool _while_condtional21;
void* right_value247;
struct optional$2sVarpbool* __exception_result_var_b240;
struct sVar* var__279;
_Bool _if_conditional309;
struct sVar* __result116__;
struct sVar* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_274, 0, sizeof(struct sVarTable*));
memset(&right_value247, 0, sizeof(void*));
memset(&var__279, 0, sizeof(struct sVar*));
    it_274=table;
    __freed_obj__ = 0;
    while(_while_condtional21=it_274,    __freed_obj__ = 0, 
    _while_condtional21) {
        var__279=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1021),__exception_result_var_b240=((struct optional$2sVarpbool*)(right_value247=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(it_274, "04heap.c", 1021))->mVars,name))), come_pop_stackframe(), __exception_result_var_b240));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value247;
        __freed_obj__ = 0;
        if(_if_conditional309=var__279,        __freed_obj__ = 0, 
        _if_conditional309) {
            __result116__ = __result_obj__ = var__279;
            __freed_obj__ = 0;
            return __result116__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_274=((struct sVarTable*)come_null_check(it_274, "04heap.c", 1027))->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result117__ = __result_obj__ = ((void*)0);
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_275;
void* __exception_result_var_b237;
unsigned int __exception_result_var_b238;
unsigned int hash_276;
unsigned int it_277;
_Bool _while_condtional22;
_Bool _if_conditional304;
void* right_value238;
struct optional$2boolbool* __exception_result_var_b239;
_Bool _if_conditional305;
void* right_value239;
void* right_value240;
struct optional$2sVarpbool* __result110__;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value241;
void* right_value242;
struct optional$2sVarpbool* __result111__;
void* right_value243;
void* right_value244;
struct optional$2sVarpbool* __result112__;
void* right_value245;
void* right_value246;
struct optional$2sVarpbool* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_275, 0, sizeof(struct sVar*));
memset(&hash_276, 0, sizeof(unsigned int));
memset(&it_277, 0, sizeof(unsigned int));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 1590),__exception_result_var_b237=memset(&default_value_275,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b237);
            __freed_obj__ = 0;
            hash_276=(come_push_stackframe("./comelang2.h", 1592),__exception_result_var_b238=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1592))), come_pop_stackframe(), __exception_result_var_b238)%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1592))->size;
            __freed_obj__ = 0;
            it_277=hash_276;
            __freed_obj__ = 0;
            while(_while_condtional22=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional22) {
                if(_if_conditional304=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1596))->item_existance[it_277],                __freed_obj__ = 0, 
                _if_conditional304) {
                    if(_if_conditional305=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1598),__exception_result_var_b239=((struct optional$2boolbool*)(right_value238=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1598))->keys[it_277], "./comelang2.h", 1598)),key))), come_pop_stackframe(), __exception_result_var_b239)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238),
                    (right_value238 && right_value238 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value238, 
                    __freed_obj__ = 0, 
                    _if_conditional305) {
                        __result110__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value240=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value239=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1600)))),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1600))->items[it_277],(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                        if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value239;
                        __freed_obj__ = 0;
                        return __result110__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_277++;
                    __freed_obj__ = 0;
                    if(_if_conditional306=it_277>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1605))->size,                    __freed_obj__ = 0, 
                    _if_conditional306) {
                        it_277=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional307=it_277==hash_276,                        __freed_obj__ = 0, 
                        _if_conditional307) {
                            __result111__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value242=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value241=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_275,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value241;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
                            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value242;
                            __freed_obj__ = 0;
                            return __result111__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result112__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sVarpbool*)(right_value244=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value243=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1613))),default_value_275,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
                    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value243;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value244);
                    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value244;
                    __freed_obj__ = 0;
                    return __result112__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result113__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sVarpbool*)(right_value246=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value245=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1617))),default_value_275,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value245;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
            if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value246;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
}

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                            __freed_obj__ = 0;
                            __result109__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result109__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional308;
struct sVar* default_value_278;
void* __exception_result_var_b241;
struct sVar* __result114__;
struct sVar* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_278, 0, sizeof(struct sVar*));
            if(_if_conditional308=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional308) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b241=memset(&default_value_278,0,sizeof(struct sVar*)), come_pop_stackframe(), __exception_result_var_b241);
                __freed_obj__ = 0;
                __result114__ = __result_obj__ = default_value_278;
                __freed_obj__ = 0;
                return __result114__;
                __freed_obj__ = 0;
            }
            else {
                __result115__ = __result_obj__ = ((struct optional$2sVarpbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                __freed_obj__ = 0;
                return __result115__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct map$2charphsVarph* o2_saved_280;
char* __exception_result_var_b244;
char* it_283;
_Bool __exception_result_var_b245;
_Bool _for_condtionalA17;
char* __exception_result_var_b248;
void* right_value248;
struct optional$2sVarpbool* __exception_result_var_b249;
struct sVar* p_286;
struct sType* type_287;
struct sClass* klass_288;
_Bool __exception_result_var_b250;
_Bool _if_conditional314;
_Bool _if_conditional315;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value249;
char* __exception_result_var_b251;
char* c_value_289;
void* right_value250;
struct sType* type2_290;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&o2_saved_280, 0, sizeof(struct map$2charphsVarph*));
memset(&it_283, 0, sizeof(char*));
memset(&right_value248, 0, sizeof(void*));
memset(&p_286, 0, sizeof(struct sVar*));
memset(&type_287, 0, sizeof(struct sType*));
memset(&klass_288, 0, sizeof(struct sClass*));
memset(&right_value249, 0, sizeof(void*));
memset(&c_value_289, 0, sizeof(char*));
memset(&right_value250, 0, sizeof(void*));
memset(&type2_290, 0, sizeof(struct sType*));
    for(
    o2_saved_280=(struct map$2charphsVarph*)come_increment_ref_count((((struct sVarTable*)come_null_check(table, "04heap.c", 1035))->mVars)),it_283=(come_push_stackframe("04heap.c", 1035),__exception_result_var_b244=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check((o2_saved_280), "04heap.c", 1035))), come_pop_stackframe(), __exception_result_var_b244) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA17=    !(come_push_stackframe("04heap.c", 1035),__exception_result_var_b245=map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check((o2_saved_280), "04heap.c", 1035))), come_pop_stackframe(), __exception_result_var_b245) ,    __freed_obj__ = 0, 
    _for_condtionalA17;    it_283=(come_push_stackframe("04heap.c", 1035),__exception_result_var_b248=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check((o2_saved_280), "04heap.c", 1035))), come_pop_stackframe(), __exception_result_var_b248) ,    __freed_obj__ = 0, 
    0    ){
        p_286=optional$2sVarpbool_value((come_push_stackframe("04heap.c", 1036),__exception_result_var_b249=((struct optional$2sVarpbool*)(right_value248=map$2charphsVarphp_operator_load_element(((struct sVarTable*)come_null_check(table, "04heap.c", 1036))->mVars,it_283))), come_pop_stackframe(), __exception_result_var_b249));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value248;
        __freed_obj__ = 0;
        type_287=((struct sVar*)come_null_check(p_286, "04heap.c", 1037))->mType;
        __freed_obj__ = 0;
        klass_288=((struct sType*)come_null_check(type_287, "04heap.c", 1038))->mClass;
        __freed_obj__ = 0;
        if(_if_conditional314=ret_value!=((void*)0)&&((struct sVar*)come_null_check(p_286, "04heap.c", 1040))->mCValueName!=((void*)0)&&(come_push_stackframe("04heap.c", 1040),__exception_result_var_b250=string_operator_equals(((struct sVar*)come_null_check(p_286, "04heap.c", 1040))->mCValueName,((struct sVar*)come_null_check(ret_value, "04heap.c", 1040))->mCValueName), come_pop_stackframe(), __exception_result_var_b250)&&((struct sType*)come_null_check(type_287, "04heap.c", 1040))->mHeap,        __freed_obj__ = 0, 
        _if_conditional314) {
            (come_push_stackframe("04heap.c", 1042),free_object(((struct sVar*)come_null_check(p_286, "04heap.c", 1042))->mType,((struct sVar*)come_null_check(p_286, "04heap.c", 1042))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional315=((struct sType*)come_null_check(type_287, "04heap.c", 1044))->mHeap&&((struct sVar*)come_null_check(p_286, "04heap.c", 1044))->mCValueName,            __freed_obj__ = 0, 
            _if_conditional315) {
                if(_if_conditional316=((struct sType*)come_null_check(type_287, "04heap.c", 1045))->mFunctionParam,                __freed_obj__ = 0, 
                _if_conditional316) {
                    (come_push_stackframe("04heap.c", 1046),free_object(((struct sVar*)come_null_check(p_286, "04heap.c", 1046))->mType,((struct sVar*)come_null_check(p_286, "04heap.c", 1046))->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                else {
                    (come_push_stackframe("04heap.c", 1049),free_object(((struct sVar*)come_null_check(p_286, "04heap.c", 1049))->mType,((struct sVar*)come_null_check(p_286, "04heap.c", 1049))->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional317=((struct sClass*)come_null_check(klass_288, "04heap.c", 1052))->mStruct&&((struct sVar*)come_null_check(p_286, "04heap.c", 1052))->mCValueName&&((struct sType*)come_null_check(type_287, "04heap.c", 1052))->mAllocaValue&&!((struct sType*)come_null_check(type_287, "04heap.c", 1052))->mNoCallingDestructor,                __freed_obj__ = 0, 
                _if_conditional317) {
                    c_value_289=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1053),__exception_result_var_b251=((char*)(right_value249=xsprintf("(&%s)",((struct sVar*)come_null_check(p_286, "04heap.c", 1053))->mCValueName))), come_pop_stackframe(), __exception_result_var_b251));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value249;
                    __freed_obj__ = 0;
                    type2_290=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(type_287))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value250;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(type2_290, "04heap.c", 1055))->mPointerNum++;
                    __freed_obj__ = 0;
                    (come_push_stackframe("04heap.c", 1056),free_object(type2_290,c_value_289,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                    if(c_value_289 && !__freed_obj__) { c_value_289 = come_decrement_ref_count(c_value_289, (void*)0, (void*)0, 0, 0, 0); }
                    if(type2_290 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_290, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_280 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_280, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
char* result_281;
void* __exception_result_var_b242;
char* __result118__;
_Bool _if_conditional311;
char* __result119__;
char* result_282;
void* __exception_result_var_b243;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_281, 0, sizeof(char*));
memset(&result_282, 0, sizeof(char*));
        if(_if_conditional310=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional310) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 1338),__exception_result_var_b242=memset(&result_281,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b242);
            __freed_obj__ = 0;
            __result118__ = __result_obj__ = result_281;
            __freed_obj__ = 0;
            return __result118__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1341))->key_list, "./comelang2.h", 1341))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1341))->key_list, "./comelang2.h", 1341))->head;
        __freed_obj__ = 0;
        if(_if_conditional311=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1343))->key_list, "./comelang2.h", 1343))->it,        __freed_obj__ = 0, 
        _if_conditional311) {
            __result119__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1344))->key_list, "./comelang2.h", 1344))->it, "./comelang2.h", 1344))->item;
            __freed_obj__ = 0;
            return __result119__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 1348),__exception_result_var_b243=memset(&result_282,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b243);
        __freed_obj__ = 0;
        __result120__ = __result_obj__ = result_282;
        __freed_obj__ = 0;
        return __result120__;
        __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result121__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1370))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1370))->key_list, "./comelang2.h", 1370))->it==((void*)0);
        __freed_obj__ = 0;
        return __result121__;
        __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional312;
char* result_284;
void* __exception_result_var_b246;
char* __result122__;
_Bool _if_conditional313;
char* __result123__;
char* result_285;
void* __exception_result_var_b247;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_284, 0, sizeof(char*));
memset(&result_285, 0, sizeof(char*));
        if(_if_conditional312=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional312) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 1355),__exception_result_var_b246=memset(&result_284,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b246);
            __freed_obj__ = 0;
            __result122__ = __result_obj__ = result_284;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1358))->key_list, "./comelang2.h", 1358))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1358))->key_list, "./comelang2.h", 1358))->it, "./comelang2.h", 1358))->next;
        __freed_obj__ = 0;
        if(_if_conditional313=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1360))->key_list, "./comelang2.h", 1360))->it,        __freed_obj__ = 0, 
        _if_conditional313) {
            __result123__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1361))->key_list, "./comelang2.h", 1361))->it, "./comelang2.h", 1361))->item;
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 1365),__exception_result_var_b247=memset(&result_285,0,sizeof(char*)), come_pop_stackframe(), __exception_result_var_b247);
        __freed_obj__ = 0;
        __result124__ = __result_obj__ = result_285;
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_291;
_Bool _for_condtionalA18;
_Bool _if_conditional318;
_Bool _if_conditional319;
int i_292;
_Bool _for_condtionalA19;
_Bool _if_conditional324;
_Bool _if_conditional325;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_291, 0, sizeof(int));
memset(&i_292, 0, sizeof(int));
        for(
        i_291=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA18=        i_291<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1170))->size ,        __freed_obj__ = 0, 
        _for_condtionalA18;        i_291++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional318=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_291],            __freed_obj__ = 0, 
            _if_conditional318) {
                if(_if_conditional319=1,                __freed_obj__ = 0, 
                _if_conditional319) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1173))->items[i_291] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1173))->items[i_291], (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 1177),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->items),come_pop_stackframe());
        __freed_obj__ = 0;
        for(
        i_292=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        i_292<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1179))->size ,        __freed_obj__ = 0, 
        _for_condtionalA19;        i_292++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional324=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_292],            __freed_obj__ = 0, 
            _if_conditional324) {
                if(_if_conditional325=1,                __freed_obj__ = 0, 
                _if_conditional325) {
                    if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_292] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_292] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_292], (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 1186),come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1186))->keys),come_pop_stackframe());
        __freed_obj__ = 0;
        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1188))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1188))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
}

static void sVar_finalize(struct sVar* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional320=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional320) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional321=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional321) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional322=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional322) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional323=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional323) {
                            if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1charpp_finalize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_293;
_Bool _while_condtional23;
struct list_item$1charp* prev_it_294;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_293, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_294, 0, sizeof(struct list_item$1charp*));
            it_293=((struct list$1charp*)come_null_check(self, "./comelang2.h", 174))->head;
            __freed_obj__ = 0;
            while(_while_condtional23=it_293!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional23) {
                prev_it_294=it_293;
                __freed_obj__ = 0;
                it_293=((struct list_item$1charp*)come_null_check(it_293, "./comelang2.h", 177))->next;
                __freed_obj__ = 0;
                if(prev_it_294 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_294, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVarTable* it_295;
_Bool _if_conditional326;
_Bool _while_condtional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_295, 0, sizeof(struct sVarTable*));
    it_295=((struct sInfo*)come_null_check(info, "04heap.c", 1063))->lv_table;
    __freed_obj__ = 0;
    if(_if_conditional326=it_295==((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1065))->come_fun, "04heap.c", 1065))->mBlock, "04heap.c", 1065))->mVarTable,    __freed_obj__ = 0, 
    _if_conditional326) {
        (come_push_stackframe("04heap.c", 1066),free_objects(it_295,ret_value,info),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    else {
        while(_while_condtional24=it_295!=((struct sBlock*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "04heap.c", 1069))->come_fun, "04heap.c", 1069))->mBlock, "04heap.c", 1069))->mVarTable,        __freed_obj__ = 0, 
        _while_condtional24) {
            (come_push_stackframe("04heap.c", 1070),free_objects(it_295,ret_value,info),come_pop_stackframe());
            __freed_obj__ = 0;
            it_295=((struct sVarTable*)come_null_check(it_295, "04heap.c", 1072))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("04heap.c", 1074),free_objects(it_295,ret_value,info),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void free_objects_on_break(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* ret_value_296;
struct sVarTable* current_loop_vtable_297;
_Bool _if_conditional327;
struct sVarTable* it_298;
_Bool _while_condtional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&ret_value_296, 0, sizeof(struct sVar*));
memset(&current_loop_vtable_297, 0, sizeof(struct sVarTable*));
memset(&it_298, 0, sizeof(struct sVarTable*));
    ret_value_296=((void*)0);
    __freed_obj__ = 0;
    current_loop_vtable_297=((struct sInfo*)come_null_check(info, "04heap.c", 1082))->current_loop_vtable;
    __freed_obj__ = 0;
    if(_if_conditional327=current_loop_vtable_297!=((void*)0),    __freed_obj__ = 0, 
    _if_conditional327) {
        it_298=((struct sInfo*)come_null_check(info, "04heap.c", 1085))->lv_table;
        __freed_obj__ = 0;
        while(_while_condtional25=it_298!=current_loop_vtable_297,        __freed_obj__ = 0, 
        _while_condtional25) {
            (come_push_stackframe("04heap.c", 1087),free_objects(it_298,ret_value_296,info),come_pop_stackframe());
            __freed_obj__ = 0;
            it_298=((struct sVarTable*)come_null_check(it_298, "04heap.c", 1089))->mParent;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("04heap.c", 1091),free_objects(it_298,ret_value_296,info),come_pop_stackframe());
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* append_exception_value(char* c_value, struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __exception_result_var_b252;
_Bool _if_conditional328;
_Bool _if_conditional329;
void* right_value251;
void* right_value252;
void* right_value253;
void* right_value254;
char* __result125__;
_Bool _if_conditional330;
static int n_299=0;
void* right_value255;
char* __exception_result_var_b253;
char* var_name_300;
void* right_value256;
struct optional$2charphbool* __exception_result_var_b254;
void* right_value257;
void* right_value258;
void* right_value259;
void* right_value260;
void* right_value261;
void* right_value262;
char* __result126__;
void* right_value263;
char* __exception_result_var_b255;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&var_name_300, 0, sizeof(char*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
    if(_if_conditional328=(come_push_stackframe("04heap.c", 1097),__exception_result_var_b252=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "04heap.c", 1097))->mClass, "04heap.c", 1097))->mName,"void"), come_pop_stackframe(), __exception_result_var_b252)&&((struct sType*)come_null_check(type, "04heap.c", 1097))->mPointerNum==0,    __freed_obj__ = 0, 
    _if_conditional328) {
        if(_if_conditional329=gComeDebug,        __freed_obj__ = 0, 
        _if_conditional329) {
            __result125__ = __result_obj__ = ((char*)(right_value254=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s,come_pop_stackframe())",((char*)(right_value251=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1099))->sname))),((char*)(right_value252=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1099))->sline))),((char*)(right_value253=charp_to_string(c_value))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value251;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value252;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value253);
            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value253;
            __freed_obj__ = 0;
            return __result125__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional330=gComeDebug,        __freed_obj__ = 0, 
        _if_conditional330) {
            __freed_obj__ = 0;
            ++n_299;
            __freed_obj__ = 0;
            var_name_300=(char*)come_increment_ref_count((come_push_stackframe("04heap.c", 1106),__exception_result_var_b253=((char*)(right_value255=xsprintf("__exception_result_var_b%d",n_299))), come_pop_stackframe(), __exception_result_var_b253));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
            if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value255;
            __freed_obj__ = 0;
            (come_push_stackframe("04heap.c", 1107),add_come_code_at_function_head(info,"%s;\n",optional$2charphbool_expect((come_push_stackframe("04heap.c", 1107),__exception_result_var_b254=((struct optional$2charphbool*)(right_value256=make_define_var(type,var_name_300,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b254))),come_pop_stackframe());
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value256);
            if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value256;
            __freed_obj__ = 0;
            __result126__ = __result_obj__ = ((char*)(right_value262=xsprintf("(come_push_stackframe(\"\%s\", \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(right_value257=string_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1108))->sname))),((char*)(right_value258=int_to_string(((struct sInfo*)come_null_check(info, "04heap.c", 1108))->sline))),((char*)(right_value259=string_to_string(var_name_300))),((char*)(right_value260=charp_to_string(c_value))),((char*)(right_value261=string_to_string(var_name_300))))));
            if(var_name_300 && !__freed_obj__) { var_name_300 = come_decrement_ref_count(var_name_300, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value257);
            if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value257;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value258);
            if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value258;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value259);
            if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value259;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value260);
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value260;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value261);
            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value261;
            __freed_obj__ = 0;
            return __result126__;
            __freed_obj__ = 0;
            if(var_name_300 && !__freed_obj__) { var_name_300 = come_decrement_ref_count(var_name_300, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result127__ = __result_obj__ = (come_push_stackframe("04heap.c", 1111),__exception_result_var_b255=((char*)(right_value263=__builtin_string(c_value))), come_pop_stackframe(), __exception_result_var_b255);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value263;
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

