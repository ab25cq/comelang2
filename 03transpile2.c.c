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
extern char* gCallerSName[10];
extern int gCallerSLine[10];
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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};

// header function
void come_heap_init();

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

char* create_generics_name(struct sType* generics_type, struct sInfo* info);

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

void come_init_v3();

void come_final_v3();

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info);

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
char* make_come_type_name_string(struct sType* type, struct sInfo* info);

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
void show_type(struct sType* type, struct sInfo* info);

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info);

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
char* output_function(struct sFun* fun, struct sInfo* info);

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
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
static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self);
char* header_function(struct sFun* fun, struct sInfo* info);

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info);

void add_come_code(struct sInfo* info, const char* msg, ...);

static void va_list_finalize(va_list self);
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);

int transpile_v3(struct sInfo* info);

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunph_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunph_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self);
static char* map$2charphsFunph_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
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
_Bool output_source_file_v3(struct sInfo* info);

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self);
static void list$1charpp_finalize(struct list$1charp* self);
_Bool output_header_file(struct sInfo* info);

void add_come_code_at_function_head(struct sInfo* info, char* code, ...);

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...);

void add_last_code_to_source(struct sInfo* info);

void add_last_code_to_source_with_comma(struct sInfo* info);

void add_come_last_code(struct sInfo* info, const char* msg, ...);

void add_come_last_code2(struct sInfo* info, const char* msg, ...);

void add_come_last_code3(struct sInfo* info, const char* msg, ...);

void dec_stack_ptr(int value, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail);
static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
void transpiler_clear_last_code(struct sInfo* info);

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
static inline void die(char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
struct smart_pointer$1char* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1992))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1994))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1994))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1995))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1995))->memory, "./comelang2.h", 1995))->buf;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result7__;
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
struct smart_pointer$1char* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
memset(&result_1, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value3, 0, sizeof(void*));
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2002))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2004))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2004))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2005))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2005))->memory, "./comelang2.h", 2005))->buf;
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result8__;
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
struct smart_pointer$1short* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_2, 0, sizeof(struct smart_pointer$1short*));
memset(&right_value5, 0, sizeof(void*));
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2012))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2014))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2014))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2015))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2015))->memory, "./comelang2.h", 2015))->buf;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result9__;
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
struct smart_pointer$1int* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&result_3, 0, sizeof(struct smart_pointer$1int*));
memset(&right_value7, 0, sizeof(void*));
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2022))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2024))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2024))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2025))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2025))->memory, "./comelang2.h", 2025))->buf;
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result10__;
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
struct smart_pointer$1long* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_4, 0, sizeof(struct smart_pointer$1long*));
memset(&right_value9, 0, sizeof(void*));
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2032))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2034))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2034))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2035))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2035))->memory, "./comelang2.h", 2035))->buf;
    __freed_obj__ = 0;
    __result11__ = __result_obj__ = result_4;
    if(result_4 && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,result_4, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result11__;
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
        if(_if_conditional1=self!=((void*)0)&&((struct smart_pointer$1char*)come_null_check(self, "smart_pointer$1charp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional2=self!=((void*)0)&&((struct smart_pointer$1short*)come_null_check(self, "smart_pointer$1shortp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional3=self!=((void*)0)&&((struct smart_pointer$1int*)come_null_check(self, "smart_pointer$1intp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional4=self!=((void*)0)&&((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 1))->memory!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            if(((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct smart_pointer$1long*)come_null_check(self, "smart_pointer$1longp_finalize", 0))->memory, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

void come_init_v3(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

void come_final_v3(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct optional$2charphbool* make_type_name_string(struct sType* type, _Bool in_header, _Bool array_cast_pointer, _Bool no_pointer, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
void* right_value11;
struct buffer* buf_5;
char* class_name_6;
_Bool _if_conditional5;
_Bool _if_conditional6;
void* right_value12;
void* right_value13;
void* right_value14;
struct optional$2charphbool* __result13__;
void* right_value15;
struct CVALUE* come_value_7;
void* right_value16;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value17;
char* result_type_str_14;
int j_15;
struct list$1sTypeph* o2_saved_16;
struct sType* it_19;
_Bool _for_condtionalA1;
void* right_value18;
char* param_type_str_22;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value19;
void* right_value20;
void* right_value21;
struct optional$2charphbool* __result23__;
_Bool _if_conditional55;
int i_23;
_Bool _for_condtionalA2;
_Bool _if_conditional56;
_Bool _if_conditional57;
void* right_value22;
void* right_value23;
void* right_value24;
struct optional$2charphbool* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&class_name_6, 0, sizeof(char*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&come_value_7, 0, sizeof(struct CVALUE*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_type_str_14, 0, sizeof(char*));
memset(&j_15, 0, sizeof(int));
memset(&o2_saved_16, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct sType*));
memset(&right_value18, 0, sizeof(void*));
memset(&param_type_str_22, 0, sizeof(char*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&i_23, 0, sizeof(int));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 15))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value11;
    __freed_obj__ = 0;
    class_name_6=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 17))->mClass, "03transpile2.c", 17))->mName;
    __freed_obj__ = 0;
    if(_if_conditional5=((struct sType*)come_null_check(type, "03transpile2.c", 31))->mAlignas,    __freed_obj__ = 0, 
    _if_conditional5) {
        if(_if_conditional6=!((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 25))->mAlignas, "03transpile2.c", 25))->compile(((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 25))->mAlignas, "03transpile2.c", 25))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional6) {
            printf("_Alignas error\n");
            __freed_obj__ = 0;
            __result13__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 22), ((struct optional$2charphbool*)(right_value14=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value13=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 22))),(char*)come_increment_ref_count(((char*)(right_value12=__builtin_string("")))),(_Bool)0))));
            if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value12;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value13;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value14;
            __freed_obj__ = 0;
            return __result13__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value15=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value15;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 28)),((char*)(right_value16=xsprintf("_Alignas(%s) ",((struct CVALUE*)come_null_check(come_value_7, "03transpile2.c", 28))->c_value))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value16;
        __freed_obj__ = 0;
        if(come_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional26=((struct sType*)come_null_check(type, "03transpile2.c", 35))->mStatic&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 35))->mClass, "03transpile2.c", 35))->mStruct&&!((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 35))->mClass, "03transpile2.c", 35))->mUnion,    __freed_obj__ = 0, 
    _if_conditional26) {
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 32)),"static ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional27=((struct sType*)come_null_check(type, "03transpile2.c", 39))->mConstant,    __freed_obj__ = 0, 
    _if_conditional27) {
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 36)),"const ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional28=((struct sType*)come_null_check(type, "03transpile2.c", 44))->mUnsigned,    __freed_obj__ = 0, 
    _if_conditional28) {
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 40)),"unsigned ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional29=((struct sType*)come_null_check(type, "03transpile2.c", 48))->mShort,    __freed_obj__ = 0, 
    _if_conditional29) {
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 45)),"short ");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional30=string_operator_equals(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mOriginalTypeName,"va_list"),    __freed_obj__ = 0, 
    _if_conditional30) {
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 49)),"va_list");
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional31=string_operator_equals(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mOriginalTypeName,"__builtin_va_list"),        __freed_obj__ = 0, 
        _if_conditional31) {
            buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 52)),"__builtin_va_list");
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional32=charp_operator_equals(class_name_6,"__builtin_va_list"),            __freed_obj__ = 0, 
            _if_conditional32) {
                if(_if_conditional33=in_header,                __freed_obj__ = 0, 
                _if_conditional33) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 56)),class_name_6);
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 59)),"va_list");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional34=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mStruct,                __freed_obj__ = 0, 
                _if_conditional34) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 63)),"struct ");
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 64)),class_name_6);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional35=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mUnion,                    __freed_obj__ = 0, 
                    _if_conditional35) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 67)),"union ");
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 68)),class_name_6);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional36=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 128))->mClass, "03transpile2.c", 128))->mEnum,                        __freed_obj__ = 0, 
                        _if_conditional36) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 71)),"enum ");
                            __freed_obj__ = 0;
                            buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 72)),class_name_6);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional37=((struct sType*)come_null_check(type, "03transpile2.c", 128))->mLongLong,                            __freed_obj__ = 0, 
                            _if_conditional37) {
                                if(_if_conditional38=charp_operator_equals(class_name_6,"int"),                                __freed_obj__ = 0, 
                                _if_conditional38) {
                                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 76)),"long long int");
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional39=charp_operator_equals(class_name_6,"long"),                                    __freed_obj__ = 0, 
                                    _if_conditional39) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 79)),"long long");
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional40=((struct sType*)come_null_check(type, "03transpile2.c", 128))->mLong,                                __freed_obj__ = 0, 
                                _if_conditional40) {
                                    if(_if_conditional41=charp_operator_equals(class_name_6,"int"),                                    __freed_obj__ = 0, 
                                    _if_conditional41) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 84)),"long int");
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional42=charp_operator_equals(class_name_6,"long"),                                        __freed_obj__ = 0, 
                                        _if_conditional42) {
                                            buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 87)),"long long");
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional43=charp_operator_equals(class_name_6,"double"),                                            __freed_obj__ = 0, 
                                            _if_conditional43) {
                                                buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 90)),"long double");
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional44=charp_operator_equals(class_name_6,"long"),                                    __freed_obj__ = 0, 
                                    _if_conditional44) {
                                        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 94)),"long");
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional45=charp_operator_equals(class_name_6,"__uint128_t"),                                        __freed_obj__ = 0, 
                                        _if_conditional45) {
                                            buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 97)),"__uint128_t");
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional46=charp_operator_equals(class_name_6,"bool"),                                            __freed_obj__ = 0, 
                                            _if_conditional46) {
                                                buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 100)),"_Bool");
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional47=charp_operator_equals(class_name_6,"lambda"),                                                __freed_obj__ = 0, 
                                                _if_conditional47) {
                                                    result_type_str_14=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 103),((struct optional$2charphbool*)(right_value17=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 103))->mResultType, "03transpile2.c", 103))->v1,in_header,(_Bool)0,(_Bool)0,info))))));
                                                    come_pop_stackframe();
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                                    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value17;
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 104)),result_type_str_14);
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 105))," (*)(");
                                                    __freed_obj__ = 0;
                                                    j_15=0;
                                                    __freed_obj__ = 0;
                                                    for(
                                                    o2_saved_16=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 118))->mParamTypes)),it_19=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_16), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    0;                                                    _for_condtionalA1=                                                    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_16), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    _for_condtionalA1;                                                    it_19=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_16), "03transpile2.c", 118))) ,                                                    __freed_obj__ = 0, 
                                                    0                                                    ){
                                                        param_type_str_22=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 109),((struct optional$2charphbool*)(right_value18=make_type_name_string(it_19,in_header,(_Bool)0,(_Bool)0,info))))));
                                                        come_pop_stackframe();
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value18;
                                                        __freed_obj__ = 0;
                                                        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 111)),param_type_str_22);
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional53=j_15!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 116))->mParamTypes, "03transpile2.c", 116)))-1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional53) {
                                                            buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 114)),",");
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        j_15++;
                                                        __freed_obj__ = 0;
                                                        if(param_type_str_22 && !__freed_obj__) { param_type_str_22 = come_decrement_ref_count(param_type_str_22, (void*)0, (void*)0, 0, 0, 0); }
                                                    }
                                                    if(o2_saved_16 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 118)),")");
                                                    __freed_obj__ = 0;
                                                    if(result_type_str_14 && !__freed_obj__) { result_type_str_14 = come_decrement_ref_count(result_type_str_14, (void*)0, (void*)0, 0, 0, 0); }
                                                }
                                                else {
                                                    if(_if_conditional54=class_name_6==((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional54) {
                                                        err_msg(info,"class name is null");
                                                        __freed_obj__ = 0;
                                                        __result23__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 123), ((struct optional$2charphbool*)(right_value21=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value20=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 123))),(char*)come_increment_ref_count(((char*)(right_value19=__builtin_string("")))),(_Bool)0))));
                                                        if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value19;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value20);
                                                        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[1] = right_value20;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value21);
                                                        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[2] = right_value21;
                                                        __freed_obj__ = 0;
                                                        return __result23__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 125)),class_name_6);
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
    if(_if_conditional55=((struct sType*)come_null_check(type, "03transpile2.c", 134))->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_6,"lambda")&&!no_pointer&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 134))->mOriginalTypeName,"va_list")&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 134))->mOriginalTypeName,"__builtin_va_list"),    __freed_obj__ = 0, 
    _if_conditional55) {
        for(
        i_23=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA2=        i_23<((struct sType*)come_null_check(type, "03transpile2.c", 132))->mPointerNum ,        __freed_obj__ = 0, 
        _for_condtionalA2;        i_23++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 130)),"*");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional56=array_cast_pointer&&list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mArrayNum, "03transpile2.c", 138)))>0&&!no_pointer&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mOriginalTypeName,"va_list")&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 138))->mOriginalTypeName,"__builtin_va_list"),    __freed_obj__ = 0, 
    _if_conditional56) {
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 135)),"*");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional57=((struct sType*)come_null_check(type, "03transpile2.c", 142))->mRestrict,    __freed_obj__ = 0, 
    _if_conditional57) {
        buffer_append_str(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 139)),"restrict");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result25__ = __result_obj__ = ((struct optional$2charphbool*)(right_value24=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value23=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 142)))),(char*)come_increment_ref_count(((char*)(right_value22=buffer_to_string(((struct buffer*)come_null_check(buf_5, "03transpile2.c", 142)))))),(_Bool)1)));
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value22);
    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value22;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value23;
    __freed_obj__ = 0;
    return __result25__;
    __freed_obj__ = 0;
    if(buf_5 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_5, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj6;
struct optional$2charphbool* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __dec_obj6=((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(char*)come_increment_ref_count(v1);
                if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                __freed_obj__ = 0;
                __result12__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result12__;
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
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional7) {
                        if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional8;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional8=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional9) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional16;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional10) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional12) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional13) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional14) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional16) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional18) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional19) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional22=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional22) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional23) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional24) {
                        if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional25) {
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
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional11=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional11) {
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
struct list_item$1sTypeph* it_8;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                            it_8=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 174))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional1=it_8!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional1) {
                                prev_it_9=it_8;
                                __freed_obj__ = 0;
                                it_8=((struct list_item$1sTypeph*)come_null_check(it_8, "./comelang2.h", 177))->next;
                                __freed_obj__ = 0;
                                if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional15=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional15) {
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
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                            it_10=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 174))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional2=it_10!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional2) {
                                prev_it_11=it_10;
                                __freed_obj__ = 0;
                                it_10=((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 177))->next;
                                __freed_obj__ = 0;
                                if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional17=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional17) {
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
struct list_item$1charph* it_12;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                            it_12=((struct list$1charph*)come_null_check(self, "./comelang2.h", 174))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional3=it_12!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional3) {
                                prev_it_13=it_12;
                                __freed_obj__ = 0;
                                it_12=((struct list_item$1charph*)come_null_check(it_12, "./comelang2.h", 177))->next;
                                __freed_obj__ = 0;
                                if(prev_it_13 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional20=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional20) {
                                        if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional48;
char* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional48=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                                                        __freed_obj__ = 0, 
                                                        _if_conditional48) {
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
                                                        __result14__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                                                        __freed_obj__ = 0;
                                                        return __result14__;
                                                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
struct sType* result_17;
struct sType* __result15__;
_Bool _if_conditional50;
struct sType* __result16__;
struct sType* result_18;
struct sType* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_17, 0, sizeof(struct sType*));
memset(&result_18, 0, sizeof(struct sType*));
                                                        if(_if_conditional49=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional49) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_17,0,sizeof(struct sType*));
                                                            __freed_obj__ = 0;
                                                            __result15__ = __result_obj__ = result_17;
                                                            __freed_obj__ = 0;
                                                            return __result15__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 341))->head;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional50=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 347))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional50) {
                                                            __result16__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
                                                            __freed_obj__ = 0;
                                                            return __result16__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_18,0,sizeof(struct sType*));
                                                        __freed_obj__ = 0;
                                                        __result17__ = __result_obj__ = result_18;
                                                        __freed_obj__ = 0;
                                                        return __result17__;
                                                        __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result18__ = self==((void*)0)||((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
                                                        __freed_obj__ = 0;
                                                        return __result18__;
                                                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
struct sType* result_20;
struct sType* __result19__;
_Bool _if_conditional52;
struct sType* __result20__;
struct sType* result_21;
struct sType* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_20, 0, sizeof(struct sType*));
memset(&result_21, 0, sizeof(struct sType*));
                                                        if(_if_conditional51=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional51) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_20,0,sizeof(struct sType*));
                                                            __freed_obj__ = 0;
                                                            __result19__ = __result_obj__ = result_20;
                                                            __freed_obj__ = 0;
                                                            return __result19__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional52=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 365))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional52) {
                                                            __result20__ = __result_obj__ = ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
                                                            __freed_obj__ = 0;
                                                            return __result20__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_21,0,sizeof(struct sType*));
                                                        __freed_obj__ = 0;
                                                        __result21__ = __result_obj__ = result_21;
                                                        __freed_obj__ = 0;
                                                        return __result21__;
                                                        __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            __result22__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 415))->len;
                                                            __freed_obj__ = 0;
                                                            return __result22__;
                                                            __freed_obj__ = 0;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result24__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 415))->len;
        __freed_obj__ = 0;
        return __result24__;
        __freed_obj__ = 0;
}

char* make_come_type_name_string(struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value25;
void* right_value26;
struct buffer* buf_24;
char* class_name_25;
_Bool _if_conditional58;
int i_26;
_Bool _for_condtionalA3;
void* right_value31;
struct sType* gtype_31;
void* right_value32;
_Bool _if_conditional63;
_Bool _if_conditional64;
int i_32;
_Bool _for_condtionalA4;
_Bool _if_conditional65;
void* right_value33;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&class_name_25, 0, sizeof(char*));
memset(&i_26, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
memset(&gtype_31, 0, sizeof(struct sType*));
memset(&right_value32, 0, sizeof(void*));
memset(&i_32, 0, sizeof(int));
memset(&right_value33, 0, sizeof(void*));
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value26=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value25=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 147))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value25;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value26;
    __freed_obj__ = 0;
    class_name_25=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 149))->mClass, "03transpile2.c", 149))->mName;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 151)),class_name_25);
    __freed_obj__ = 0;
    if(_if_conditional58=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 168))->mGenericsTypes, "03transpile2.c", 168)))>0,    __freed_obj__ = 0, 
    _if_conditional58) {
        buffer_append_str(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 154)),"<");
        __freed_obj__ = 0;
        for(
        i_26=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        i_26<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 165))->mGenericsTypes, "03transpile2.c", 165))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        i_26++ ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            gtype_31=optional$2sTypephbool_value((come_push_stackframe("03transpile2.c", 156),((struct optional$2sTypephbool*)(right_value31=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(type, "03transpile2.c", 156))->mGenericsTypes,i_26)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 158)),((char*)(right_value32=make_come_type_name_string(gtype_31,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value32;
            __freed_obj__ = 0;
            if(_if_conditional63=i_26!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 163))->mGenericsTypes, "03transpile2.c", 163)))-1,            __freed_obj__ = 0, 
            _if_conditional63) {
                buffer_append_str(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 161)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 165)),">");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional64=((struct sType*)come_null_check(type, "03transpile2.c", 174))->mNoArrayPointerNum==0&&charp_operator_not_equals(class_name_25,"lambda"),    __freed_obj__ = 0, 
    _if_conditional64) {
        for(
        i_32=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA4=        i_32<((struct sType*)come_null_check(type, "03transpile2.c", 172))->mPointerNum ,        __freed_obj__ = 0, 
        _for_condtionalA4;        i_32++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 170)),"*");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional65=((struct sType*)come_null_check(type, "03transpile2.c", 178))->mHeap,    __freed_obj__ = 0, 
    _if_conditional65) {
        buffer_append_str(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 175)),"%");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result31__ = __result_obj__ = ((char*)(right_value33=buffer_to_string(((struct buffer*)come_null_check(buf_24, "03transpile2.c", 178)))));
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
struct list_item$1sTypeph* it_27;
int i_28;
_Bool _while_condtional4;
_Bool _if_conditional60;
void* right_value27;
void* right_value28;
struct optional$2sTypephbool* __result27__;
struct sType* default_value_29;
void* right_value29;
void* right_value30;
struct optional$2sTypephbool* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_27, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_28, 0, sizeof(int));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&default_value_29, 0, sizeof(struct sType*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
                if(_if_conditional59=position<0,                __freed_obj__ = 0, 
                _if_conditional59) {
                    position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 740))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_27=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 743))->head;
                __freed_obj__ = 0;
                i_28=0;
                __freed_obj__ = 0;
                while(_while_condtional4=it_27!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    if(_if_conditional60=position==i_28,                    __freed_obj__ = 0, 
                    _if_conditional60) {
                        __result27__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value28=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value27=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_27, "./comelang2.h", 747))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                        if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value27;
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_27=((struct list_item$1sTypeph*)come_null_check(it_27, "./comelang2.h", 749))->next;
                    __freed_obj__ = 0;
                    i_28++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_29,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result28__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sTypephbool*)(right_value30=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value29=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_29),(_Bool)0))));
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value29;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value30;
                __freed_obj__ = 0;
                return __result28__;
                __freed_obj__ = 0;
                if(default_value_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj7;
struct optional$2sTypephbool* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj7=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                            if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result26__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result26__;
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
_Bool _if_conditional61;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional61=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional61) {
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
_Bool _if_conditional62;
struct sType* default_value_30;
struct sType* __result29__;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_30, 0, sizeof(struct sType*));
                if(_if_conditional62=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional62) {
                    __freed_obj__ = 0;
                    memset(&default_value_30,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result29__ = __result_obj__ = default_value_30;
                    __freed_obj__ = 0;
                    return __result29__;
                    __freed_obj__ = 0;
                }
                else {
                    __result30__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result30__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

void show_type(struct sType* type, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
    come_clear_stackframe();
    puts(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 183),((struct optional$2charphbool*)(right_value34=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34;
    __freed_obj__ = 0;
}

struct optional$2charphbool* make_lambda_type_name_string(struct sType* type, char* var_name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value35;
void* right_value36;
struct buffer* buf_33;
_Bool _if_conditional66;
void* right_value37;
void* right_value38;
void* right_value39;
struct optional$2charphbool* __result32__;
_Bool _if_conditional67;
void* right_value40;
int i_34;
struct list$1sTypeph* o2_saved_35;
struct sType* it_36;
_Bool _for_condtionalA5;
void* right_value41;
_Bool _if_conditional68;
void* right_value42;
void* right_value43;
void* right_value44;
void* right_value45;
struct optional$2charphbool* __result33__;
void* right_value46;
void* right_value47;
int i_37;
struct list$1sTypeph* o2_saved_38;
struct sType* it_39;
_Bool _for_condtionalA6;
void* right_value48;
_Bool _if_conditional69;
void* right_value49;
void* right_value50;
void* right_value51;
struct optional$2charphbool* __result34__;
void* right_value52;
void* right_value53;
void* right_value54;
struct optional$2charphbool* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&buf_33, 0, sizeof(struct buffer*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&i_34, 0, sizeof(int));
memset(&o2_saved_35, 0, sizeof(struct list$1sTypeph*));
memset(&it_36, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&i_37, 0, sizeof(int));
memset(&o2_saved_38, 0, sizeof(struct list$1sTypeph*));
memset(&it_39, 0, sizeof(struct sType*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
    buf_33=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 188))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value36;
    __freed_obj__ = 0;
    if(_if_conditional66=((struct sType*)come_null_check(type, "03transpile2.c", 194))->mResultType==((void*)0),    __freed_obj__ = 0, 
    _if_conditional66) {
        err_msg(info,"invalid lambda type");
        __freed_obj__ = 0;
        __result32__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 191), ((struct optional$2charphbool*)(right_value39=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value38=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 191))),(char*)come_increment_ref_count(((char*)(right_value37=__builtin_string("")))),(_Bool)0))));
        if(buf_33 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value37;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value38;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value39);
        if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value39;
        __freed_obj__ = 0;
        return __result32__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional67=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 230))->mResultType, "03transpile2.c", 230))->v1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 230))->mResultType, "03transpile2.c", 230))->v1, "03transpile2.c", 230))->mClass, "03transpile2.c", 230))->mName,"lambda"),    __freed_obj__ = 0, 
    _if_conditional67) {
        buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 196)),((char*)(right_value40=xsprintf("(*%s)(",var_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value40;
        __freed_obj__ = 0;
        i_34=0;
        __freed_obj__ = 0;
        for(
        o2_saved_35=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 208))->mParamTypes)),it_36=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_35), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_35), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        _for_condtionalA5;        it_36=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_35), "03transpile2.c", 208))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 200)),optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 200),((struct optional$2charphbool*)(right_value41=make_type_name_string(it_36,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
            if(_if_conditional68=i_34!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 205))->mParamTypes, "03transpile2.c", 205)))-1,            __freed_obj__ = 0, 
            _if_conditional68) {
                buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 202)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_34++;
            __freed_obj__ = 0;
        }
        if(o2_saved_35 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 208)),")");
        __freed_obj__ = 0;
        __result33__ = __result_obj__ = ((struct optional$2charphbool*)(right_value45=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value44=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 210)))),(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 210),((struct optional$2charphbool*)(right_value43=make_lambda_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 210))->mResultType, "03transpile2.c", 210))->v1,((char*)(right_value42=buffer_to_string(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 210))))),info)))))),(_Bool)1)));
        if(buf_33 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value42;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value43);
        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value43;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value44;
        __freed_obj__ = 0;
        return __result33__;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 213)),((char*)(right_value47=xsprintf("%s (*%s)(",optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 213),((struct optional$2charphbool*)(right_value46=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 213))->mResultType, "03transpile2.c", 213))->v1,(_Bool)0,(_Bool)0,(_Bool)0,info))))),var_name))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value47;
        __freed_obj__ = 0;
        i_37=0;
        __freed_obj__ = 0;
        for(
        o2_saved_38=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 225))->mParamTypes)),it_39=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_38), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_38), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        it_39=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_38), "03transpile2.c", 225))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 217)),optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 217),((struct optional$2charphbool*)(right_value48=make_type_name_string(it_39,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value48;
            __freed_obj__ = 0;
            if(_if_conditional69=i_37!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 222))->mParamTypes, "03transpile2.c", 222)))-1,            __freed_obj__ = 0, 
            _if_conditional69) {
                buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 219)),",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_37++;
            __freed_obj__ = 0;
        }
        if(o2_saved_38 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 225)),")");
        __freed_obj__ = 0;
        __result34__ = __result_obj__ = ((struct optional$2charphbool*)(right_value51=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value50=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 227)))),(char*)come_increment_ref_count(((char*)(right_value49=buffer_to_string(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 227)))))),(_Bool)1)));
        if(buf_33 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value49;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value50;
        __freed_obj__ = 0;
        return __result34__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result35__ = __result_obj__ = ((struct optional$2charphbool*)(right_value54=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value53=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 230)))),(char*)come_increment_ref_count(((char*)(right_value52=buffer_to_string(((struct buffer*)come_null_check(buf_33, "03transpile2.c", 230)))))),(_Bool)1)));
    if(buf_33 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value52;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value53);
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value53;
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
    if(buf_33 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_33, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct optional$2charphbool* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value55;
void* right_value56;
struct buffer* buf_40;
_Bool _if_conditional70;
void* right_value57;
char* str_41;
_Bool _if_conditional71;
void* right_value58;
char* str_42;
_Bool _if_conditional72;
_Bool _if_conditional73;
void* right_value59;
void* right_value60;
void* right_value61;
struct optional$2charphbool* __result36__;
void* right_value62;
struct CVALUE* come_value_43;
void* right_value63;
char* type_str_44;
void* right_value64;
void* right_value65;
_Bool _if_conditional74;
void* right_value66;
_Bool _if_conditional75;
void* right_value67;
_Bool _if_conditional76;
void* right_value68;
char* type_str_45;
_Bool _if_conditional77;
void* right_value69;
_Bool _if_conditional78;
void* right_value70;
char* type_str_46;
_Bool _if_conditional79;
_Bool _if_conditional80;
struct list$1sNodeph* o2_saved_47;
struct sNode* it_50;
_Bool _for_condtionalA7;
_Bool _if_conditional85;
void* right_value71;
void* right_value72;
void* right_value73;
struct optional$2charphbool* __result44__;
void* right_value74;
struct CVALUE* cvalue_53;
void* right_value75;
_Bool _if_conditional86;
void* right_value76;
void* right_value77;
char* type_str_54;
_Bool _if_conditional87;
void* right_value78;
void* right_value79;
void* right_value80;
struct optional$2charphbool* __result45__;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value81;
void* right_value82;
void* right_value83;
void* right_value84;
struct optional$2charphbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&buf_40, 0, sizeof(struct buffer*));
memset(&right_value57, 0, sizeof(void*));
memset(&str_41, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&str_42, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&come_value_43, 0, sizeof(struct CVALUE*));
memset(&right_value63, 0, sizeof(void*));
memset(&type_str_44, 0, sizeof(char*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&type_str_45, 0, sizeof(char*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&type_str_46, 0, sizeof(char*));
memset(&o2_saved_47, 0, sizeof(struct list$1sNodeph*));
memset(&it_50, 0, sizeof(struct sNode*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&cvalue_53, 0, sizeof(struct CVALUE*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&type_str_54, 0, sizeof(char*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
    buf_40=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value56=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value55=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 237))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value56;
    __freed_obj__ = 0;
    if(_if_conditional70=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mClass, "03transpile2.c", 336))->mName,"lambda")&&((struct sType*)come_null_check(type, "03transpile2.c", 336))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mAsmName,""),    __freed_obj__ = 0, 
    _if_conditional70) {
        str_41=(char*)come_increment_ref_count(((char*)(right_value57=header_lambda(type,(char*)come_increment_ref_count(((struct sType*)come_null_check(type, "03transpile2.c", 240))->mAsmName),info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value57;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 242)),str_41);
        __freed_obj__ = 0;
        if(str_41 && !__freed_obj__) { str_41 = come_decrement_ref_count(str_41, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional71=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mClass, "03transpile2.c", 336))->mName,"lambda"),        __freed_obj__ = 0, 
        _if_conditional71) {
            str_42=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 245),((struct optional$2charphbool*)(right_value58=make_lambda_type_name_string(type,name,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value58;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 247)),str_42);
            __freed_obj__ = 0;
            if(str_42 && !__freed_obj__) { str_42 = come_decrement_ref_count(str_42, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional72=((struct sType*)come_null_check(type, "03transpile2.c", 336))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                if(_if_conditional73=!((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 255))->mSizeNum, "03transpile2.c", 255))->compile(((struct sNode*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 255))->mSizeNum, "03transpile2.c", 255))->_protocol_obj,info),                __freed_obj__ = 0, 
                _if_conditional73) {
                    err_msg(info,"invalid bit field number");
                    __freed_obj__ = 0;
                    __result36__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 252), ((struct optional$2charphbool*)(right_value61=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value60=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 252))),(char*)come_increment_ref_count(((char*)(right_value59=__builtin_string("")))),(_Bool)0))));
                    if(buf_40 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value60;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value61);
                    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value61;
                    __freed_obj__ = 0;
                    return __result36__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_43=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                type_str_44=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 258),((struct optional$2charphbool*)(right_value63=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value63;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 259)),((char*)(right_value64=xsprintf("%s ",type_str_44))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value64);
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value64;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 260)),((char*)(right_value65=xsprintf("%s:%s",name,((struct CVALUE*)come_null_check(come_value_43, "03transpile2.c", 260))->c_value))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value65);
                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value65;
                __freed_obj__ = 0;
                if(_if_conditional74=((struct sType*)come_null_check(type, "03transpile2.c", 266))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 266))->mAsmName,""),                __freed_obj__ = 0, 
                _if_conditional74) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 263)),((char*)(right_value66=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 263))->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
                    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value66;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional75=((struct sType*)come_null_check(type, "03transpile2.c", 269))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 269))->mAsmName,""),                __freed_obj__ = 0, 
                _if_conditional75) {
                    buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 267)),((char*)(right_value67=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 267))->mAsmName))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value67;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(come_value_43 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_43, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_str_44 && !__freed_obj__) { type_str_44 = come_decrement_ref_count(type_str_44, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional76=((struct sType*)come_null_check(type, "03transpile2.c", 336))->mOmitArrayNum,                __freed_obj__ = 0, 
                _if_conditional76) {
                    type_str_45=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 271),((struct optional$2charphbool*)(right_value68=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value68;
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 273)),type_str_45);
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 275))," ");
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 276)),name);
                    __freed_obj__ = 0;
                    buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 278)),"[]");
                    __freed_obj__ = 0;
                    if(_if_conditional77=((struct sType*)come_null_check(type, "03transpile2.c", 283))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 283))->mAsmName,""),                    __freed_obj__ = 0, 
                    _if_conditional77) {
                        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 281)),((char*)(right_value69=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 281))->mAsmName))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value69;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(type_str_45 && !__freed_obj__) { type_str_45 = come_decrement_ref_count(type_str_45, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional78=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type, "03transpile2.c", 336))->mArrayNum, "03transpile2.c", 336)))>0,                    __freed_obj__ = 0, 
                    _if_conditional78) {
                        type_str_46=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 285),((struct optional$2charphbool*)(right_value70=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                        come_pop_stackframe();
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value70;
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 287)),type_str_46);
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 289))," ");
                        __freed_obj__ = 0;
                        if(_if_conditional79=((struct sType*)come_null_check(type, "03transpile2.c", 293))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional79) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 291)),"(*");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 293)),name);
                        __freed_obj__ = 0;
                        if(_if_conditional80=((struct sType*)come_null_check(type, "03transpile2.c", 298))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional80) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 295)),")");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        for(
                        o2_saved_47=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "03transpile2.c", 309))->mArrayNum)),it_50=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_47), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA7=                        !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_47), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA7;                        it_50=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_47), "03transpile2.c", 309))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional85=!((struct sNode*)come_null_check(it_50, "03transpile2.c", 303))->compile(((struct sNode*)come_null_check(it_50, "03transpile2.c", 303))->_protocol_obj,info),                            __freed_obj__ = 0, 
                            _if_conditional85) {
                                err_msg(info,"invalid array number");
                                __freed_obj__ = 0;
                                __result44__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 301), ((struct optional$2charphbool*)(right_value73=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value72=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 301))),(char*)come_increment_ref_count(((char*)(right_value71=__builtin_string("")))),(_Bool)0))));
                                if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_str_46 && !__freed_obj__) { type_str_46 = come_decrement_ref_count(type_str_46, (void*)0, (void*)0, 0, 0, 0); }
                                if(buf_40 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value71;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value72;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value73);
                                if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value73;
                                __freed_obj__ = 0;
                                return __result44__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            cvalue_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value74=get_value_from_stack(-1,info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value74;
                            __freed_obj__ = 0;
                            dec_stack_ptr(1,info);
                            __freed_obj__ = 0;
                            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 306)),((char*)(right_value75=xsprintf("[%s]",((struct CVALUE*)come_null_check(cvalue_53, "03transpile2.c", 306))->c_value))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
                            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value75;
                            __freed_obj__ = 0;
                            if(cvalue_53 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_53, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        if(o2_saved_47 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional86=((struct sType*)come_null_check(type, "03transpile2.c", 312))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 312))->mAsmName,""),                        __freed_obj__ = 0, 
                        _if_conditional86) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 310)),((char*)(right_value76=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 310))->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value76;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(type_str_46 && !__freed_obj__) { type_str_46 = come_decrement_ref_count(type_str_46, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        type_str_54=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 314),((struct optional$2charphbool*)(right_value77=make_type_name_string(type,in_header,(_Bool)0,(_Bool)0,info))))));
                        come_pop_stackframe();
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value77;
                        __freed_obj__ = 0;
                        if(_if_conditional87=string_operator_equals(type_str_54,""),                        __freed_obj__ = 0, 
                        _if_conditional87) {
                            __result45__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 317), ((struct optional$2charphbool*)(right_value80=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value79=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 317))),(char*)come_increment_ref_count(((char*)(right_value78=__builtin_string("")))),(_Bool)0))));
                            if(type_str_54 && !__freed_obj__) { type_str_54 = come_decrement_ref_count(type_str_54, (void*)0, (void*)0, 0, 0, 0); }
                            if(buf_40 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value78;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value79);
                            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value79;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value80);
                            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value80;
                            __freed_obj__ = 0;
                            return __result45__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 320)),type_str_54);
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 322))," ");
                        __freed_obj__ = 0;
                        if(_if_conditional88=((struct sType*)come_null_check(type, "03transpile2.c", 326))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional88) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 324)),"(*");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 326)),name);
                        __freed_obj__ = 0;
                        if(_if_conditional89=((struct sType*)come_null_check(type, "03transpile2.c", 331))->mNoArrayPointerNum>0,                        __freed_obj__ = 0, 
                        _if_conditional89) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 328)),")");
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional90=((struct sType*)come_null_check(type, "03transpile2.c", 334))->mAsmName!=((void*)0)&&string_operator_not_equals(((struct sType*)come_null_check(type, "03transpile2.c", 334))->mAsmName,""),                        __freed_obj__ = 0, 
                        _if_conditional90) {
                            buffer_append_str(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 332)),((char*)(right_value81=xsprintf(" __asm__(\"%s\")",((struct sType*)come_null_check(type, "03transpile2.c", 332))->mAsmName))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value81;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(type_str_54 && !__freed_obj__) { type_str_54 = come_decrement_ref_count(type_str_54, (void*)0, (void*)0, 0, 0, 0); }
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
    __result46__ = __result_obj__ = ((struct optional$2charphbool*)(right_value84=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value83=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 336)))),(char*)come_increment_ref_count(((char*)(right_value82=buffer_to_string(((struct buffer*)come_null_check(buf_40, "03transpile2.c", 336)))))),(_Bool)1)));
    if(buf_40 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value82;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value83;
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
    if(buf_40 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
struct sNode* result_48;
struct sNode* __result37__;
_Bool _if_conditional82;
struct sNode* __result38__;
struct sNode* result_49;
struct sNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_48, 0, sizeof(struct sNode*));
memset(&result_49, 0, sizeof(struct sNode*));
                            if(_if_conditional81=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional81) {
                                __freed_obj__ = 0;
                                memset(&result_48,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result37__ = __result_obj__ = result_48;
                                __freed_obj__ = 0;
                                return __result37__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 341))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional82=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 347))->it,                            __freed_obj__ = 0, 
                            _if_conditional82) {
                                __result38__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
                                __freed_obj__ = 0;
                                return __result38__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_49,0,sizeof(struct sNode*));
                            __freed_obj__ = 0;
                            __result39__ = __result_obj__ = result_49;
                            __freed_obj__ = 0;
                            return __result39__;
                            __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result40__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result40__;
                            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional83;
struct sNode* result_51;
struct sNode* __result41__;
_Bool _if_conditional84;
struct sNode* __result42__;
struct sNode* result_52;
struct sNode* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_51, 0, sizeof(struct sNode*));
memset(&result_52, 0, sizeof(struct sNode*));
                            if(_if_conditional83=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional83) {
                                __freed_obj__ = 0;
                                memset(&result_51,0,sizeof(struct sNode*));
                                __freed_obj__ = 0;
                                __result41__ = __result_obj__ = result_51;
                                __freed_obj__ = 0;
                                return __result41__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional84=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 365))->it,                            __freed_obj__ = 0, 
                            _if_conditional84) {
                                __result42__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
                                __freed_obj__ = 0;
                                return __result42__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_52,0,sizeof(struct sNode*));
                            __freed_obj__ = 0;
                            __result43__ = __result_obj__ = result_52;
                            __freed_obj__ = 0;
                            return __result43__;
                            __freed_obj__ = 0;
}

char* output_function(struct sFun* fun, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value85;
void* right_value86;
struct buffer* output_55;
_Bool _if_conditional91;
void* right_value87;
void* right_value88;
struct buffer* output2_56;
int i_57;
struct list$1sTypeph* o2_saved_58;
struct sType* it_59;
_Bool _for_condtionalA8;
void* right_value93;
char* name_63;
void* right_value94;
char* str_64;
_Bool _if_conditional94;
_Bool _if_conditional95;
void* right_value95;
void* right_value96;
char* str_65;
void* right_value97;
_Bool _if_conditional96;
void* right_value132;
struct sType* base_result_type_84;
void* right_value133;
void* right_value134;
struct list$1sNodeph* __dec_obj30;
void* right_value135;
char* result_type_str_85;
int i_86;
struct list$1sTypeph* o2_saved_87;
struct sType* it_88;
_Bool _for_condtionalA9;
void* right_value136;
char* name_89;
void* right_value137;
char* str_90;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value142;
struct sNode* node_95;
_Bool _if_conditional173;
void* right_value143;
void* right_value144;
void* right_value145;
char* __result72__;
void* right_value146;
struct CVALUE* cvalue_96;
void* right_value147;
void* right_value148;
void* right_value149;
char* result_type_str_97;
int i_98;
struct list$1sTypeph* o2_saved_99;
struct sType* it_100;
_Bool _for_condtionalA10;
void* right_value150;
char* name_101;
void* right_value151;
char* str_102;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value152;
void* right_value153;
void* right_value154;
void* right_value155;
void* right_value156;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&output_55, 0, sizeof(struct buffer*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&output2_56, 0, sizeof(struct buffer*));
memset(&i_57, 0, sizeof(int));
memset(&o2_saved_58, 0, sizeof(struct list$1sTypeph*));
memset(&it_59, 0, sizeof(struct sType*));
memset(&right_value93, 0, sizeof(void*));
memset(&name_63, 0, sizeof(char*));
memset(&right_value94, 0, sizeof(void*));
memset(&str_64, 0, sizeof(char*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&str_65, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&base_result_type_84, 0, sizeof(struct sType*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&result_type_str_85, 0, sizeof(char*));
memset(&i_86, 0, sizeof(int));
memset(&o2_saved_87, 0, sizeof(struct list$1sTypeph*));
memset(&it_88, 0, sizeof(struct sType*));
memset(&right_value136, 0, sizeof(void*));
memset(&name_89, 0, sizeof(char*));
memset(&right_value137, 0, sizeof(void*));
memset(&str_90, 0, sizeof(char*));
memset(&right_value142, 0, sizeof(void*));
memset(&node_95, 0, sizeof(struct sNode*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&cvalue_96, 0, sizeof(struct CVALUE*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&result_type_str_97, 0, sizeof(char*));
memset(&i_98, 0, sizeof(int));
memset(&o2_saved_99, 0, sizeof(struct list$1sTypeph*));
memset(&it_100, 0, sizeof(struct sType*));
memset(&right_value150, 0, sizeof(void*));
memset(&name_101, 0, sizeof(char*));
memset(&right_value151, 0, sizeof(void*));
memset(&str_102, 0, sizeof(char*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
    output_55=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value86=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value85=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 341))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value85;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value86;
    __freed_obj__ = 0;
    if(_if_conditional91=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 455))->mResultType, "03transpile2.c", 455))->mResultType,    __freed_obj__ = 0, 
    _if_conditional91) {
        output2_56=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value88=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value87=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 343))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value88;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_56, "03transpile2.c", 345)),((struct sFun*)come_null_check(fun, "03transpile2.c", 345))->mName);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_56, "03transpile2.c", 346)),"(");
        __freed_obj__ = 0;
        i_57=0;
        __freed_obj__ = 0;
        for(
        o2_saved_58=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 366))->mParamTypes)),it_59=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_58), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA8=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_58), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        _for_condtionalA8;        it_59=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_58), "03transpile2.c", 366))) ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            name_63=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 350),((struct optional$2charphbool*)(right_value93=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 350))->mParamNames,i_57)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
            if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value93;
            __freed_obj__ = 0;
            come_clear_stackframe();
            str_64=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 352),((struct optional$2charphbool*)(right_value94=make_define_var(it_59,name_63,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
            if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value94;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output2_56, "03transpile2.c", 353)),str_64);
            __freed_obj__ = 0;
            if(_if_conditional94=i_57==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 364))->mParamTypes, "03transpile2.c", 364)))-1,            __freed_obj__ = 0, 
            _if_conditional94) {
                if(_if_conditional95=((struct sFun*)come_null_check(fun, "03transpile2.c", 359))->mVarArgs,                __freed_obj__ = 0, 
                _if_conditional95) {
                    buffer_append_str(((struct buffer*)come_null_check(output2_56, "03transpile2.c", 357)),", ...");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                buffer_append_str(((struct buffer*)come_null_check(output2_56, "03transpile2.c", 361)),", ");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_57++;
            __freed_obj__ = 0;
            if(str_64 && !__freed_obj__) { str_64 = come_decrement_ref_count(str_64, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_58 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_58, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_56, "03transpile2.c", 366)),")");
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_65=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 368),((struct optional$2charphbool*)(right_value96=make_lambda_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 368))->mResultType,((char*)(right_value95=buffer_to_string(((struct buffer*)come_null_check(output2_56, "03transpile2.c", 368))))),info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value95);
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value95;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value96);
        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value96;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 370)),str_65);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 374))->module, "03transpile2.c", 374))->mSourceHead, "03transpile2.c", 374)),((char*)(right_value97=buffer_to_string(((struct buffer*)come_null_check(output_55, "03transpile2.c", 374))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value97;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 375))->module, "03transpile2.c", 375))->mSourceHead, "03transpile2.c", 375)),";\n");
        __freed_obj__ = 0;
        if(output2_56 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_56, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_65 && !__freed_obj__) { str_65 = come_decrement_ref_count(str_65, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional96=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 455))->mResultType, "03transpile2.c", 455))->mArrayNum, "03transpile2.c", 455)))>0,        __freed_obj__ = 0, 
        _if_conditional96) {
            base_result_type_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(((struct sFun*)come_null_check(fun, "03transpile2.c", 378))->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value132;
            __freed_obj__ = 0;
            __dec_obj30=((struct sType*)come_null_check(base_result_type_84, "03transpile2.c", 379))->mArrayNum;
            ((struct sType*)come_null_check(base_result_type_84, "03transpile2.c", 379))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value134=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value133=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 379))))))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value133;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value134);
            if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value134;
            __freed_obj__ = 0;
            come_clear_stackframe();
            result_type_str_85=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 381),((struct optional$2charphbool*)(right_value135=make_type_name_string(base_result_type_84,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value135;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 383)),result_type_str_85);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 384))," (*");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 386)),((struct sFun*)come_null_check(fun, "03transpile2.c", 386))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 387)),"(");
            __freed_obj__ = 0;
            i_86=0;
            __freed_obj__ = 0;
            for(
            o2_saved_87=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 408))->mParamTypes)),it_88=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_87), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA9=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_87), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            _for_condtionalA9;            it_88=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_87), "03transpile2.c", 408))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_89=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 391),((struct optional$2charphbool*)(right_value136=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 391))->mParamNames,i_86)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value136;
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_90=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 393),((struct optional$2charphbool*)(right_value137=make_define_var(it_88,name_89,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value137;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 394)),str_90);
                __freed_obj__ = 0;
                if(_if_conditional167=i_86==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 405))->mParamTypes, "03transpile2.c", 405)))-1,                __freed_obj__ = 0, 
                _if_conditional167) {
                    if(_if_conditional168=((struct sFun*)come_null_check(fun, "03transpile2.c", 400))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional168) {
                        buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 398)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 402)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_86++;
                __freed_obj__ = 0;
                if(str_90 && !__freed_obj__) { str_90 = come_decrement_ref_count(str_90, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_87 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            node_95=optional$2sNodephbool_value((come_push_stackframe("03transpile2.c", 408),((struct optional$2sNodephbool*)(right_value142=list$1sNodephp_operator_load_element(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 408))->mResultType, "03transpile2.c", 408))->mArrayNum,0)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value142);
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value142;
            __freed_obj__ = 0;
            if(_if_conditional173=!((struct sNode*)come_null_check(node_95, "03transpile2.c", 414))->compile(((struct sNode*)come_null_check(node_95, "03transpile2.c", 414))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional173) {
                err_msg(info,"invalid array number");
                __freed_obj__ = 0;
                __result72__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 412), ((struct optional$2charphbool*)(right_value145=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value144=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 412))),(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string("")))),(_Bool)0))));
                if(base_result_type_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_85 && !__freed_obj__) { result_type_str_85 = come_decrement_ref_count(result_type_str_85, (void*)0, (void*)0, 0, 0, 0); }
                if(output_55 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value143;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value144;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value145;
                __freed_obj__ = 0;
                return __result72__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            cvalue_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value146);
            if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value146;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 417)),((char*)(right_value147=xsprintf("))[%s]",((struct CVALUE*)come_null_check(cvalue_96, "03transpile2.c", 417))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value147);
            if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value147;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 419))->module, "03transpile2.c", 419))->mSourceHead, "03transpile2.c", 419)),((char*)(right_value148=buffer_to_string(((struct buffer*)come_null_check(output_55, "03transpile2.c", 419))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value148);
            if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value148;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 420))->module, "03transpile2.c", 420))->mSourceHead, "03transpile2.c", 420)),";\n");
            __freed_obj__ = 0;
            if(base_result_type_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_84, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_85 && !__freed_obj__) { result_type_str_85 = come_decrement_ref_count(result_type_str_85, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_96, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_clear_stackframe();
            result_type_str_97=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 423),((struct optional$2charphbool*)(right_value149=make_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 423))->mResultType,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value149;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 425)),result_type_str_97);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 426))," ");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 428)),((struct sFun*)come_null_check(fun, "03transpile2.c", 428))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 429)),"(");
            __freed_obj__ = 0;
            i_98=0;
            __freed_obj__ = 0;
            for(
            o2_saved_99=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 449))->mParamTypes)),it_100=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_99), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA10=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_99), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            _for_condtionalA10;            it_100=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_99), "03transpile2.c", 449))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_101=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 433),((struct optional$2charphbool*)(right_value150=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 433))->mParamNames,i_98)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value150;
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_102=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 435),((struct optional$2charphbool*)(right_value151=make_define_var(it_100,name_101,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value151;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 436)),str_102);
                __freed_obj__ = 0;
                if(_if_conditional174=i_98==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 446))->mParamTypes, "03transpile2.c", 446)))-1,                __freed_obj__ = 0, 
                _if_conditional174) {
                    if(_if_conditional175=((struct sFun*)come_null_check(fun, "03transpile2.c", 442))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional175) {
                        buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 440)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 444)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_98++;
                __freed_obj__ = 0;
                if(str_102 && !__freed_obj__) { str_102 = come_decrement_ref_count(str_102, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_99 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_99, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 449)),")");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 451))->module, "03transpile2.c", 451))->mSourceHead, "03transpile2.c", 451)),((char*)(right_value152=buffer_to_string(((struct buffer*)come_null_check(output_55, "03transpile2.c", 451))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
            if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value152;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 452))->module, "03transpile2.c", 452))->mSourceHead, "03transpile2.c", 452)),";\n");
            __freed_obj__ = 0;
            if(result_type_str_97 && !__freed_obj__) { result_type_str_97 = come_decrement_ref_count(result_type_str_97, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 455)),"{\n");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 457)),((char*)(right_value153=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 457))->mSourceHead, "03transpile2.c", 457))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value153;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 458)),((char*)(right_value154=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 458))->mSourceHead2, "03transpile2.c", 458))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value154;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 459)),((char*)(right_value155=buffer_to_string(((struct buffer*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 459))->mSource, "03transpile2.c", 459))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value155;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_55, "03transpile2.c", 461)),"}\n");
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = ((char*)(right_value156=buffer_to_string(((struct buffer*)come_null_check(output_55, "03transpile2.c", 463)))));
    if(output_55 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
    if(output_55 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_55, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
struct list_item$1charph* it_60;
int i_61;
_Bool _while_condtional5;
_Bool _if_conditional93;
void* right_value89;
void* right_value90;
struct optional$2charphbool* __result47__;
char* default_value_62;
void* right_value91;
void* right_value92;
struct optional$2charphbool* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_60, 0, sizeof(struct list_item$1charph*));
memset(&i_61, 0, sizeof(int));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&default_value_62, 0, sizeof(char*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
                if(_if_conditional92=position<0,                __freed_obj__ = 0, 
                _if_conditional92) {
                    position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 740))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_60=((struct list$1charph*)come_null_check(self, "./comelang2.h", 743))->head;
                __freed_obj__ = 0;
                i_61=0;
                __freed_obj__ = 0;
                while(_while_condtional5=it_60!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    if(_if_conditional93=position==i_61,                    __freed_obj__ = 0, 
                    _if_conditional93) {
                        __result47__ = __result_obj__ = ((struct optional$2charphbool*)(right_value90=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value89=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 747)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_60, "./comelang2.h", 747))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value89;
                        __freed_obj__ = 0;
                        return __result47__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_60=((struct list_item$1charph*)come_null_check(it_60, "./comelang2.h", 749))->next;
                    __freed_obj__ = 0;
                    i_61++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_62,0,sizeof(char*));
                __freed_obj__ = 0;
                __result48__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2charphbool*)(right_value92=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value91=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 755))),(char*)come_increment_ref_count(default_value_62),(_Bool)0))));
                if(default_value_62 && !__freed_obj__) { default_value_62 = come_decrement_ref_count(default_value_62, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value91;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value92);
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value92;
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
                if(default_value_62 && !__freed_obj__) { default_value_62 = come_decrement_ref_count(default_value_62, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
struct sType* __result49__;
void* right_value98;
struct sType* result_66;
_Bool _if_conditional98;
_Bool _if_conditional99;
void* right_value101;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional103;
void* right_value102;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional104;
void* right_value103;
char* __dec_obj11;
_Bool _if_conditional105;
void* right_value110;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional109;
void* right_value118;
struct list$1sNodeph* __dec_obj19;
_Bool _if_conditional122;
_Bool _if_conditional123;
void* right_value119;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional124;
void* right_value126;
struct list$1charph* __dec_obj24;
_Bool _if_conditional128;
void* right_value127;
struct tuple1$1sTypeph* __dec_obj25;
_Bool _if_conditional129;
_Bool _if_conditional130;
void* right_value128;
struct sNode* __dec_obj26;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
_Bool _if_conditional134;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
_Bool _if_conditional139;
_Bool _if_conditional140;
_Bool _if_conditional141;
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
_Bool _if_conditional154;
void* right_value129;
struct sNode* __dec_obj27;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value130;
char* __dec_obj28;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value131;
char* __dec_obj29;
struct sType* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&result_66, 0, sizeof(struct sType*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
                if(_if_conditional97=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional97) {
                    __result49__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result49__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = 0;
                if(_if_conditional98=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional98) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional99=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional99) {
                    __dec_obj9=((struct sType*)come_null_check(result_66, "sType_clone", 5))->mNoSolvedGenericsType;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value101=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                    if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
                    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value101;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional103=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    __dec_obj10=((struct sType*)come_null_check(result_66, "sType_clone", 6))->mOriginalLoadVarType;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value102=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                    if(__dec_obj10) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value102;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional104) {
                    __dec_obj11=((struct sType*)come_null_check(result_66, "sType_clone", 7))->mGenericsName;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value103=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                    if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value103;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional105=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional105) {
                    __dec_obj15=((struct sType*)come_null_check(result_66, "sType_clone", 8))->mGenericsTypes;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value110=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                    if(__dec_obj15) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value110;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional109=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional109) {
                    __dec_obj19=((struct sType*)come_null_check(result_66, "sType_clone", 9))->mArrayNum;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value118=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                    if(__dec_obj19) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
                    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value118;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional122=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional122) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional123=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional123) {
                    __dec_obj20=((struct sType*)come_null_check(result_66, "sType_clone", 11))->mParamTypes;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value119=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                    if(__dec_obj20) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value119;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional124=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional124) {
                    __dec_obj24=((struct sType*)come_null_check(result_66, "sType_clone", 12))->mParamNames;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value126=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                    if(__dec_obj24) { come_call_finalizer(list$1charph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional128=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional128) {
                    __dec_obj25=((struct sType*)come_null_check(result_66, "sType_clone", 13))->mResultType;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value127=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                    if(__dec_obj25) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value127;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional129=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional129) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional130=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional130) {
                    __dec_obj26=((struct sType*)come_null_check(result_66, "sType_clone", 15))->mAlignas;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value128;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional131=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional131) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional132=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional132) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional133=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional133) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional134=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional134) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional135=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional135) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional136=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional136) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional137=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional137) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional138=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional138) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional139=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional139) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional140=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional140) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional141=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional141) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional142=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional142) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional143=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional143) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional144=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional144) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional145=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional145) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional146=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional146) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional147=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional147) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional148=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional148) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional149=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional149) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional150=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional150) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional151=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional151) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional152=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional152) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional153=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional153) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional154) {
                    __dec_obj27=((struct sType*)come_null_check(result_66, "sType_clone", 39))->mSizeNum;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value129;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional155=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional155) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional156=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional156) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional157=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional157) {
                    __dec_obj28=((struct sType*)come_null_check(result_66, "sType_clone", 42))->mOriginalTypeName;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value130=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value130;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional158=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional158) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional159=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional159) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional160=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional160) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional161=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional161) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional162=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional162) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional163=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional163) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional164=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional164) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional165=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional165) {
                    ((struct sType*)come_null_check(result_66, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional166=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional166) {
                    __dec_obj29=((struct sType*)come_null_check(result_66, "sType_clone", 51))->mAsmName;
                    ((struct sType*)come_null_check(result_66, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value131=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                    if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value131;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result66__ = __result_obj__ = result_66;
                if(result_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_66, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result66__;
                __freed_obj__ = 0;
                if(result_66 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
struct tuple1$1sTypeph* __result50__;
void* right_value99;
struct tuple1$1sTypeph* result_67;
_Bool _if_conditional102;
void* right_value100;
struct sType* __dec_obj8;
struct tuple1$1sTypeph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&result_67, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value100, 0, sizeof(void*));
                        if(_if_conditional100=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional100) {
                            __result50__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result50__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_67=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value99=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value99;
                        __freed_obj__ = 0;
                        if(_if_conditional102=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional102) {
                            __dec_obj8=((struct tuple1$1sTypeph*)come_null_check(result_67, "tuple1$1sTypephp_clone", 4))->v1;
                            ((struct tuple1$1sTypeph*)come_null_check(result_67, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value100=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                            if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value100;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result51__ = __result_obj__ = result_67;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_67, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result51__;
                        __freed_obj__ = 0;
                        if(result_67 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional101=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional101) {
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
_Bool _if_conditional106;
struct list$1sTypeph* __result52__;
void* right_value104;
void* right_value105;
struct list$1sTypeph* result_68;
struct list_item$1sTypeph* it_69;
_Bool _while_condtional6;
void* right_value109;
struct list$1sTypeph* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&result_68, 0, sizeof(struct list$1sTypeph*));
memset(&it_69, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value109, 0, sizeof(void*));
                        if(_if_conditional106=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional106) {
                            __result52__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result52__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_68=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value105=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value104=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value104;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value105);
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value105;
                        __freed_obj__ = 0;
                        it_69=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 195))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional6=it_69!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional6) {
                            list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_68, "./comelang2.h", 197)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_69, "./comelang2.h", 197))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value109;
                            __freed_obj__ = 0;
                            it_69=((struct list_item$1sTypeph*)come_null_check(it_69, "./comelang2.h", 199))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result55__ = __result_obj__ = result_68;
                        if(result_68 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_68, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result55__;
                        __freed_obj__ = 0;
                        if(result_68 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                            __freed_obj__ = 0;
                            __result53__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result53__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional107;
void* right_value106;
struct list_item$1sTypeph* litem_70;
struct sType* __dec_obj12;
_Bool _if_conditional108;
void* right_value107;
struct list_item$1sTypeph* litem_71;
struct sType* __dec_obj13;
void* right_value108;
struct list_item$1sTypeph* litem_72;
struct sType* __dec_obj14;
struct list$1sTypeph* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value107, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value108, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1sTypeph*));
                                if(_if_conditional107=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional107) {
                                    litem_70=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value106=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
                                    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value106;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_70, "./comelang2.h", 209))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_70, "./comelang2.h", 210))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_70, "./comelang2.h", 211))->item;
                                    ((struct list_item$1sTypeph*)come_null_check(litem_70, "./comelang2.h", 211))->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_70;
                                    __freed_obj__ = 0;
                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head=litem_70;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional108=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional108) {
                                        litem_71=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value107=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
                                        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value107;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_71, "./comelang2.h", 219))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_71, "./comelang2.h", 220))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj13=((struct list_item$1sTypeph*)come_null_check(litem_71, "./comelang2.h", 221))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_71, "./comelang2.h", 221))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_71;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_71;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_72=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value108=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
                                        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value108;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_72, "./comelang2.h", 229))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_72, "./comelang2.h", 230))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj14=((struct list_item$1sTypeph*)come_null_check(litem_72, "./comelang2.h", 231))->item;
                                        ((struct list_item$1sTypeph*)come_null_check(litem_72, "./comelang2.h", 231))->item=(struct sType*)come_increment_ref_count(item);
                                        if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_72;
                                        __freed_obj__ = 0;
                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_72;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len++;
                                __freed_obj__ = 0;
                                __result54__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result54__;
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
_Bool _if_conditional110;
struct list$1sNodeph* __result56__;
void* right_value111;
void* right_value112;
struct list$1sNodeph* result_73;
struct list_item$1sNodeph* it_74;
_Bool _while_condtional7;
void* right_value117;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&result_73, 0, sizeof(struct list$1sNodeph*));
memset(&it_74, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value117, 0, sizeof(void*));
                        if(_if_conditional110=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional110) {
                            __result56__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result56__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_73=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value112=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value111=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value111;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value112);
                        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value112;
                        __freed_obj__ = 0;
                        it_74=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 195))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional7=it_74!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional7) {
                            list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_73, "./comelang2.h", 197)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_74, "./comelang2.h", 197))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value117;
                            __freed_obj__ = 0;
                            it_74=((struct list_item$1sNodeph*)come_null_check(it_74, "./comelang2.h", 199))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result61__ = __result_obj__ = result_73;
                        if(result_73 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result61__;
                        __freed_obj__ = 0;
                        if(result_73 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                            __freed_obj__ = 0;
                            __result57__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result57__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
void* right_value113;
struct list_item$1sNodeph* litem_75;
struct sNode* __dec_obj16;
_Bool _if_conditional112;
void* right_value114;
struct list_item$1sNodeph* litem_76;
struct sNode* __dec_obj17;
void* right_value115;
struct list_item$1sNodeph* litem_77;
struct sNode* __dec_obj18;
struct list$1sNodeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_75, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_76, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_77, 0, sizeof(struct list_item$1sNodeph*));
                                if(_if_conditional111=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional111) {
                                    litem_75=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value113=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value113;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_75, "./comelang2.h", 209))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_75, "./comelang2.h", 210))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_75, "./comelang2.h", 211))->item;
                                    ((struct list_item$1sNodeph*)come_null_check(litem_75, "./comelang2.h", 211))->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_75;
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head=litem_75;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional112=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional112) {
                                        litem_76=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value114=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                                        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value114;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_76, "./comelang2.h", 219))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_76, "./comelang2.h", 220))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj17=((struct list_item$1sNodeph*)come_null_check(litem_76, "./comelang2.h", 221))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_76, "./comelang2.h", 221))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_76;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_76;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_77=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value115=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                                        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value115;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_77, "./comelang2.h", 229))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_77, "./comelang2.h", 230))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj18=((struct list_item$1sNodeph*)come_null_check(litem_77, "./comelang2.h", 231))->item;
                                        ((struct list_item$1sNodeph*)come_null_check(litem_77, "./comelang2.h", 231))->item=(struct sNode*)come_increment_ref_count(item);
                                        if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_77;
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_77;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len++;
                                __freed_obj__ = 0;
                                __result58__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result58__;
                                __freed_obj__ = 0;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
struct sNode* __result59__;
void* right_value116;
struct sNode* result_78;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
struct sNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&result_78, 0, sizeof(struct sNode*));
                                if(_if_conditional113=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional113) {
                                    __result59__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result59__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_78=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value116;
                                __freed_obj__ = 0;
                                if(_if_conditional114=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional114) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional115=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional115) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional116=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional116) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional117=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional117) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional118=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional118) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional119=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional119) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional120=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional120) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional121=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional121) {
                                    ((struct sNode*)come_null_check(result_78, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result60__ = __result_obj__ = result_78;
                                if(result_78 && !__freed_obj__) { result_78 = come_decrement_ref_count(result_78, ((struct sNode*)result_78)->finalize, ((struct sNode*)result_78)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = 0;
                                return __result60__;
                                __freed_obj__ = 0;
                                if(result_78 && !__freed_obj__) { result_78 = come_decrement_ref_count(result_78, ((struct sNode*)result_78)->finalize, ((struct sNode*)result_78)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional125;
struct list$1charph* __result62__;
void* right_value120;
void* right_value121;
struct list$1charph* result_79;
struct list_item$1charph* it_80;
_Bool _while_condtional8;
void* right_value125;
struct list$1charph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&result_79, 0, sizeof(struct list$1charph*));
memset(&it_80, 0, sizeof(struct list_item$1charph*));
memset(&right_value125, 0, sizeof(void*));
                        if(_if_conditional125=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional125) {
                            __result62__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result62__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_79=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value121=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value120=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value120;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
                        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value121;
                        __freed_obj__ = 0;
                        it_80=((struct list$1charph*)come_null_check(self, "./comelang2.h", 195))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional8=it_80!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional8) {
                            list$1charph_add(((struct list$1charph*)come_null_check(result_79, "./comelang2.h", 197)),(char*)come_increment_ref_count(((char*)(right_value125=string_clone(((struct list_item$1charph*)come_null_check(it_80, "./comelang2.h", 197))->item)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                            if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value125;
                            __freed_obj__ = 0;
                            it_80=((struct list_item$1charph*)come_null_check(it_80, "./comelang2.h", 199))->next;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result65__ = __result_obj__ = result_79;
                        if(result_79 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_79, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result65__;
                        __freed_obj__ = 0;
                        if(result_79 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_79, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                            __freed_obj__ = 0;
                            __result63__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result63__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional126;
void* right_value122;
struct list_item$1charph* litem_81;
char* __dec_obj21;
_Bool _if_conditional127;
void* right_value123;
struct list_item$1charph* litem_82;
char* __dec_obj22;
void* right_value124;
struct list_item$1charph* litem_83;
char* __dec_obj23;
struct list$1charph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1charph*));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_82, 0, sizeof(struct list_item$1charph*));
memset(&right_value124, 0, sizeof(void*));
memset(&litem_83, 0, sizeof(struct list_item$1charph*));
                                if(_if_conditional126=((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len==0,                                __freed_obj__ = 0, 
                                _if_conditional126) {
                                    litem_81=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value122=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value122;
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 209))->prev=((void*)0);
                                    __freed_obj__ = 0;
                                    ((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 210))->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj21=((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 211))->item;
                                    ((struct list_item$1charph*)come_null_check(litem_81, "./comelang2.h", 211))->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_81;
                                    __freed_obj__ = 0;
                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head=litem_81;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional127=((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len==1,                                    __freed_obj__ = 0, 
                                    _if_conditional127) {
                                        litem_82=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value123=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value123;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 219))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 220))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj22=((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 221))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_82, "./comelang2.h", 221))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_82;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_82;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        litem_83=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value124=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                                        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value124;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_83, "./comelang2.h", 229))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(litem_83, "./comelang2.h", 230))->next=((void*)0);
                                        __freed_obj__ = 0;
                                        __dec_obj23=((struct list_item$1charph*)come_null_check(litem_83, "./comelang2.h", 231))->item;
                                        ((struct list_item$1charph*)come_null_check(litem_83, "./comelang2.h", 231))->item=(char*)come_increment_ref_count(item);
                                        if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_83;
                                        __freed_obj__ = 0;
                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_83;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len++;
                                __freed_obj__ = 0;
                                __result64__ = __result_obj__ = self;
                                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result64__;
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

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional169;
struct list_item$1sNodeph* it_91;
int i_92;
_Bool _while_condtional9;
_Bool _if_conditional170;
void* right_value138;
void* right_value139;
struct optional$2sNodephbool* __result68__;
struct sNode* default_value_93;
void* right_value140;
void* right_value141;
struct optional$2sNodephbool* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_91, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_92, 0, sizeof(int));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&default_value_93, 0, sizeof(struct sNode*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
                if(_if_conditional169=position<0,                __freed_obj__ = 0, 
                _if_conditional169) {
                    position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 740))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_91=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 743))->head;
                __freed_obj__ = 0;
                i_92=0;
                __freed_obj__ = 0;
                while(_while_condtional9=it_91!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional9) {
                    if(_if_conditional170=position==i_92,                    __freed_obj__ = 0, 
                    _if_conditional170) {
                        __result68__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value139=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value138=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 747)))),(struct sNode*)come_increment_ref_count(((struct list_item$1sNodeph*)come_null_check(it_91, "./comelang2.h", 747))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value138;
                        __freed_obj__ = 0;
                        return __result68__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_91=((struct list_item$1sNodeph*)come_null_check(it_91, "./comelang2.h", 749))->next;
                    __freed_obj__ = 0;
                    i_92++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_93,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result69__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sNodephbool*)(right_value141=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value140=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 755))),(struct sNode*)come_increment_ref_count(default_value_93),(_Bool)0))));
                if(default_value_93 && !__freed_obj__) { default_value_93 = come_decrement_ref_count(default_value_93, ((struct sNode*)default_value_93)->finalize, ((struct sNode*)default_value_93)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value140;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value141;
                __freed_obj__ = 0;
                return __result69__;
                __freed_obj__ = 0;
                if(default_value_93 && !__freed_obj__) { default_value_93 = come_decrement_ref_count(default_value_93, ((struct sNode*)default_value_93)->finalize, ((struct sNode*)default_value_93)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj31;
struct optional$2sNodephbool* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj31=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result67__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result67__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional171=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional171) {
                                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
struct sNode* default_value_94;
struct sNode* __result70__;
struct sNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_94, 0, sizeof(struct sNode*));
                if(_if_conditional172=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional172) {
                    __freed_obj__ = 0;
                    memset(&default_value_94,0,sizeof(struct sNode*));
                    __freed_obj__ = 0;
                    __result70__ = __result_obj__ = default_value_94;
                    __freed_obj__ = 0;
                    return __result70__;
                    __freed_obj__ = 0;
                }
                else {
                    __result71__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result71__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

char* header_function(struct sFun* fun, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value157;
void* right_value158;
struct buffer* output_103;
_Bool _if_conditional176;
void* right_value159;
void* right_value160;
struct buffer* output2_104;
int i_105;
struct list$1sTypeph* o2_saved_106;
struct sType* it_107;
_Bool _for_condtionalA11;
void* right_value161;
char* name_108;
void* right_value162;
char* str_109;
_Bool _if_conditional177;
void* right_value163;
void* right_value164;
char* str_110;
_Bool _if_conditional178;
void* right_value165;
struct sType* base_result_type_111;
void* right_value166;
void* right_value167;
struct list$1sNodeph* __dec_obj32;
void* right_value168;
char* result_type_str_112;
int i_113;
struct list$1sTypeph* o2_saved_114;
struct sType* it_115;
_Bool _for_condtionalA12;
void* right_value169;
char* name_116;
void* right_value170;
char* str_117;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value171;
struct sNode* node_118;
_Bool _if_conditional181;
void* right_value172;
void* right_value173;
void* right_value174;
char* __result74__;
void* right_value175;
struct CVALUE* cvalue_119;
void* right_value176;
void* right_value177;
char* result_type_str_120;
int i_121;
struct list$1sTypeph* o2_saved_122;
struct sType* it_123;
_Bool _for_condtionalA13;
void* right_value178;
char* name_124;
void* right_value179;
char* str_125;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value180;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&output_103, 0, sizeof(struct buffer*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&output2_104, 0, sizeof(struct buffer*));
memset(&i_105, 0, sizeof(int));
memset(&o2_saved_106, 0, sizeof(struct list$1sTypeph*));
memset(&it_107, 0, sizeof(struct sType*));
memset(&right_value161, 0, sizeof(void*));
memset(&name_108, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&str_109, 0, sizeof(char*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&str_110, 0, sizeof(char*));
memset(&right_value165, 0, sizeof(void*));
memset(&base_result_type_111, 0, sizeof(struct sType*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&result_type_str_112, 0, sizeof(char*));
memset(&i_113, 0, sizeof(int));
memset(&o2_saved_114, 0, sizeof(struct list$1sTypeph*));
memset(&it_115, 0, sizeof(struct sType*));
memset(&right_value169, 0, sizeof(void*));
memset(&name_116, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
memset(&str_117, 0, sizeof(char*));
memset(&right_value171, 0, sizeof(void*));
memset(&node_118, 0, sizeof(struct sNode*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&cvalue_119, 0, sizeof(struct CVALUE*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&result_type_str_120, 0, sizeof(char*));
memset(&i_121, 0, sizeof(int));
memset(&o2_saved_122, 0, sizeof(struct list$1sTypeph*));
memset(&it_123, 0, sizeof(struct sType*));
memset(&right_value178, 0, sizeof(void*));
memset(&name_124, 0, sizeof(char*));
memset(&right_value179, 0, sizeof(void*));
memset(&str_125, 0, sizeof(char*));
memset(&right_value180, 0, sizeof(void*));
    output_103=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value158=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value157=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 468))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value158;
    __freed_obj__ = 0;
    if(_if_conditional176=((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 565))->mResultType, "03transpile2.c", 565))->mResultType,    __freed_obj__ = 0, 
    _if_conditional176) {
        output2_104=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 471))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value159;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value160;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_104, "03transpile2.c", 473)),((struct sFun*)come_null_check(fun, "03transpile2.c", 473))->mName);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_104, "03transpile2.c", 474)),"(");
        __freed_obj__ = 0;
        i_105=0;
        __freed_obj__ = 0;
        for(
        o2_saved_106=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 488))->mParamTypes)),it_107=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_106), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_106), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_107=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_106), "03transpile2.c", 488))) ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            name_108=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 478),((struct optional$2charphbool*)(right_value161=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 478))->mParamNames,i_105)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
            if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value161;
            __freed_obj__ = 0;
            come_clear_stackframe();
            str_109=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 480),((struct optional$2charphbool*)(right_value162=make_define_var(it_107,name_108,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
            if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value162;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output2_104, "03transpile2.c", 481)),str_109);
            __freed_obj__ = 0;
            if(_if_conditional177=i_105!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 486))->mParamTypes, "03transpile2.c", 486)))-1,            __freed_obj__ = 0, 
            _if_conditional177) {
                buffer_append_str(((struct buffer*)come_null_check(output2_104, "03transpile2.c", 484)),", ");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            i_105++;
            __freed_obj__ = 0;
            if(str_109 && !__freed_obj__) { str_109 = come_decrement_ref_count(str_109, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_106 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output2_104, "03transpile2.c", 488)),")");
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_110=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 490),((struct optional$2charphbool*)(right_value164=make_lambda_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 490))->mResultType,((char*)(right_value163=buffer_to_string(((struct buffer*)come_null_check(output2_104, "03transpile2.c", 490))))),info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value163;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value164;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 492)),str_110);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 493)),";\n");
        __freed_obj__ = 0;
        if(output2_104 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output2_104, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(str_110 && !__freed_obj__) { str_110 = come_decrement_ref_count(str_110, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional178=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 565))->mResultType, "03transpile2.c", 565))->mArrayNum, "03transpile2.c", 565)))>0,        __freed_obj__ = 0, 
        _if_conditional178) {
            base_result_type_111=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(((struct sFun*)come_null_check(fun, "03transpile2.c", 496))->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value165;
            __freed_obj__ = 0;
            __dec_obj32=((struct sType*)come_null_check(base_result_type_111, "03transpile2.c", 497))->mArrayNum;
            ((struct sType*)come_null_check(base_result_type_111, "03transpile2.c", 497))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value167=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value166=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "03transpile2.c", 497))))))));
            if(__dec_obj32) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value166;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value167);
            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value167;
            __freed_obj__ = 0;
            come_clear_stackframe();
            result_type_str_112=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 499),((struct optional$2charphbool*)(right_value168=make_type_name_string(base_result_type_111,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value168);
            if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value168;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 501)),result_type_str_112);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 502))," (*");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 504)),((struct sFun*)come_null_check(fun, "03transpile2.c", 504))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 505)),"(");
            __freed_obj__ = 0;
            i_113=0;
            __freed_obj__ = 0;
            for(
            o2_saved_114=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 525))->mParamTypes)),it_115=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_114), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA12=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_114), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            _for_condtionalA12;            it_115=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_114), "03transpile2.c", 525))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_116=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 509),((struct optional$2charphbool*)(right_value169=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 509))->mParamNames,i_113)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value169;
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_117=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 511),((struct optional$2charphbool*)(right_value170=make_define_var(it_115,name_116,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value170;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 512)),str_117);
                __freed_obj__ = 0;
                if(_if_conditional179=i_113==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 522))->mParamTypes, "03transpile2.c", 522)))-1,                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(_if_conditional180=((struct sFun*)come_null_check(fun, "03transpile2.c", 518))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 516)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 520)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_113++;
                __freed_obj__ = 0;
                if(str_117 && !__freed_obj__) { str_117 = come_decrement_ref_count(str_117, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_114 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_114, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            node_118=optional$2sNodephbool_value((come_push_stackframe("03transpile2.c", 525),((struct optional$2sNodephbool*)(right_value171=list$1sNodephp_operator_load_element(((struct sType*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 525))->mResultType, "03transpile2.c", 525))->mArrayNum,0)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value171);
            if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value171;
            __freed_obj__ = 0;
            if(_if_conditional181=!((struct sNode*)come_null_check(node_118, "03transpile2.c", 530))->compile(((struct sNode*)come_null_check(node_118, "03transpile2.c", 530))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional181) {
                err_msg(info,"invalid array number");
                __freed_obj__ = 0;
                __result74__ = __result_obj__ = (come_save_stackframe("03transpile2.c", 528), ((struct optional$2charphbool*)(right_value174=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value173=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "03transpile2.c", 528))),(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string("")))),(_Bool)0))));
                if(base_result_type_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_str_112 && !__freed_obj__) { result_type_str_112 = come_decrement_ref_count(result_type_str_112, (void*)0, (void*)0, 0, 0, 0); }
                if(output_103 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_103, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value172;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value173);
                if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value173;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value174);
                if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value174;
                __freed_obj__ = 0;
                return __result74__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            cvalue_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value175=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value175;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 533)),((char*)(right_value176=xsprintf("))[%s];\n",((struct CVALUE*)come_null_check(cvalue_119, "03transpile2.c", 533))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value176);
            if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value176;
            __freed_obj__ = 0;
            if(base_result_type_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,base_result_type_111, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type_str_112 && !__freed_obj__) { result_type_str_112 = come_decrement_ref_count(result_type_str_112, (void*)0, (void*)0, 0, 0, 0); }
            if(cvalue_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_119, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_clear_stackframe();
            result_type_str_120=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 536),((struct optional$2charphbool*)(right_value177=make_type_name_string(((struct sFun*)come_null_check(fun, "03transpile2.c", 536))->mResultType,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
            if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value177;
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 538)),result_type_str_120);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 539))," ");
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 541)),((struct sFun*)come_null_check(fun, "03transpile2.c", 541))->mName);
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 542)),"(");
            __freed_obj__ = 0;
            i_121=0;
            __freed_obj__ = 0;
            for(
            o2_saved_122=(struct list$1sTypeph*)come_increment_ref_count((((struct sFun*)come_null_check(fun, "03transpile2.c", 562))->mParamTypes)),it_123=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_122), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA13=            !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_122), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            _for_condtionalA13;            it_123=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_122), "03transpile2.c", 562))) ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                name_124=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 546),((struct optional$2charphbool*)(right_value178=list$1charphp_operator_load_element(((struct sFun*)come_null_check(fun, "03transpile2.c", 546))->mParamNames,i_121)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value178;
                __freed_obj__ = 0;
                come_clear_stackframe();
                str_125=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 548),((struct optional$2charphbool*)(right_value179=make_define_var(it_123,name_124,(_Bool)0,info))))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
                if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value179;
                __freed_obj__ = 0;
                buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 549)),str_125);
                __freed_obj__ = 0;
                if(_if_conditional182=i_121==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sFun*)come_null_check(fun, "03transpile2.c", 559))->mParamTypes, "03transpile2.c", 559)))-1,                __freed_obj__ = 0, 
                _if_conditional182) {
                    if(_if_conditional183=((struct sFun*)come_null_check(fun, "03transpile2.c", 555))->mVarArgs,                    __freed_obj__ = 0, 
                    _if_conditional183) {
                        buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 553)),", ...");
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 557)),", ");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_121++;
                __freed_obj__ = 0;
                if(str_125 && !__freed_obj__) { str_125 = come_decrement_ref_count(str_125, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(o2_saved_122 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_122, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            buffer_append_str(((struct buffer*)come_null_check(output_103, "03transpile2.c", 562)),");\n");
            __freed_obj__ = 0;
            if(result_type_str_120 && !__freed_obj__) { result_type_str_120 = come_decrement_ref_count(result_type_str_120, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result75__ = __result_obj__ = ((char*)(right_value180=buffer_to_string(((struct buffer*)come_null_check(output_103, "03transpile2.c", 565)))));
    if(output_103 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
    if(output_103 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* header_lambda(struct sType* lambda_type, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value181;
void* right_value182;
struct buffer* output_126;
void* right_value183;
char* result_type_str_127;
int i_128;
struct list$1sTypeph* o2_saved_129;
struct sType* it_130;
_Bool _for_condtionalA14;
void* right_value184;
char* name_131;
void* right_value185;
char* str_132;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value186;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&output_126, 0, sizeof(struct buffer*));
memset(&right_value183, 0, sizeof(void*));
memset(&result_type_str_127, 0, sizeof(char*));
memset(&i_128, 0, sizeof(int));
memset(&o2_saved_129, 0, sizeof(struct list$1sTypeph*));
memset(&it_130, 0, sizeof(struct sType*));
memset(&right_value184, 0, sizeof(void*));
memset(&name_131, 0, sizeof(char*));
memset(&right_value185, 0, sizeof(void*));
memset(&str_132, 0, sizeof(char*));
memset(&right_value186, 0, sizeof(void*));
    output_126=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value182=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value181=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "03transpile2.c", 570))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value182;
    __freed_obj__ = 0;
    come_clear_stackframe();
    result_type_str_127=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 572),((struct optional$2charphbool*)(right_value183=make_type_name_string(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 572))->mResultType, "03transpile2.c", 572))->v1,(_Bool)1,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value183);
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value183;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 574)),result_type_str_127);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 575))," ");
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 577)),name);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 578)),"(");
    __freed_obj__ = 0;
    i_128=0;
    __freed_obj__ = 0;
    for(
    o2_saved_129=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(lambda_type, "03transpile2.c", 598))->mParamTypes)),it_130=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_129), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_129), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    _for_condtionalA14;    it_130=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_129), "03transpile2.c", 598))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        name_131=optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 582),((struct optional$2charphbool*)(right_value184=list$1charphp_operator_load_element(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 582))->mParamNames,i_128)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value184;
        __freed_obj__ = 0;
        come_clear_stackframe();
        str_132=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("03transpile2.c", 584),((struct optional$2charphbool*)(right_value185=make_define_var(it_130,name_131,(_Bool)0,info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value185;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 585)),str_132);
        __freed_obj__ = 0;
        if(_if_conditional184=i_128==list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(lambda_type, "03transpile2.c", 595))->mParamTypes, "03transpile2.c", 595)))-1,        __freed_obj__ = 0, 
        _if_conditional184) {
            if(_if_conditional185=((struct sType*)come_null_check(lambda_type, "03transpile2.c", 591))->mVarArgs,            __freed_obj__ = 0, 
            _if_conditional185) {
                buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 589)),", ...");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 593)),", ");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        i_128++;
        __freed_obj__ = 0;
        if(str_132 && !__freed_obj__) { str_132 = come_decrement_ref_count(str_132, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_129 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(output_126, "03transpile2.c", 598)),");\n");
    __freed_obj__ = 0;
    __result76__ = __result_obj__ = ((char*)(right_value186=buffer_to_string(((struct buffer*)come_null_check(output_126, "03transpile2.c", 600)))));
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_127 && !__freed_obj__) { result_type_str_127 = come_decrement_ref_count(result_type_str_127, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    if(output_126 && !__freed_obj__) { come_call_finalizer(buffer_finalize,output_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_type_str_127 && !__freed_obj__) { result_type_str_127 = come_decrement_ref_count(result_type_str_127, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code(struct sInfo* info, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
char* msg2_133;
va_list args_134;
int len_135;
_Bool _if_conditional187;
int i_136;
_Bool _for_condtionalA15;
void* right_value187;
void* right_value188;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_133, 0, sizeof(char*));
memset(&args_134, 0, sizeof(va_list));
memset(&len_135, 0, sizeof(int));
memset(&i_136, 0, sizeof(int));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
    if(_if_conditional186=((struct sInfo*)come_null_check(info, "03transpile2.c", 609))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional186) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_134,msg);
    __freed_obj__ = 0;
    len_135=vasprintf(&msg2_133,msg,args_134);
    __freed_obj__ = 0;
    __builtin_va_end(args_134);
    __freed_obj__ = 0;
    if(_if_conditional187=((struct sInfo*)come_null_check(info, "03transpile2.c", 628))->come_fun,    __freed_obj__ = 0, 
    _if_conditional187) {
        __freed_obj__ = 0;
        for(
        i_136=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        i_136<((struct sInfo*)come_null_check(info, "03transpile2.c", 622))->block_level ,        __freed_obj__ = 0, 
        _for_condtionalA15;        i_136++ ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 619))->come_fun, "03transpile2.c", 619))->mSource, "03transpile2.c", 619)),"    ");
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 622))->come_fun, "03transpile2.c", 622))->mSource, "03transpile2.c", 622)),((char*)(right_value187=xsprintf("%s",msg2_133))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value187;
        __freed_obj__ = 0;
    }
    else {
        buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 625))->module, "03transpile2.c", 625))->mSourceHead, "03transpile2.c", 625)),((char*)(right_value188=xsprintf("%s",msg2_133))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_133);
    __freed_obj__ = 0;
    if((&args_134) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_134), (void*)0, (void*)0, 1, 0, 0, 0); }
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

void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional188;
char* msg2_137;
va_list args_138;
int len_139;
void* right_value189;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_137, 0, sizeof(char*));
memset(&args_138, 0, sizeof(va_list));
memset(&len_139, 0, sizeof(int));
memset(&right_value189, 0, sizeof(void*));
    if(_if_conditional188=((struct sInfo*)come_null_check(info, "03transpile2.c", 636))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional188) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_138,msg);
    __freed_obj__ = 0;
    len_139=vasprintf(&msg2_137,msg,args_138);
    __freed_obj__ = 0;
    __builtin_va_end(args_138);
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 643))->module, "03transpile2.c", 643))->mSourceHead, "03transpile2.c", 643)),((char*)(right_value189=xsprintf("%s",msg2_137))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = 0;
    free(msg2_137);
    __freed_obj__ = 0;
    if((&args_138) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_138), (void*)0, (void*)0, 1, 0, 0, 0); }
}

int transpile_v3(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value190;
char* name_140;
void* right_value191;
void* right_value192;
struct sType* result_type_141;
void* right_value193;
void* right_value194;
void* right_value195;
void* right_value196;
struct sType* __list_values1___142[2];
void* right_value200;
void* right_value201;
struct list$1sTypeph* param_types_147;
void* right_value202;
void* right_value203;
char* __list_values2___148[2];
void* right_value207;
void* right_value208;
struct list$1charph* param_names_153;
void* right_value209;
void* right_value210;
struct list$1charph* param_default_parametors_154;
void* right_value211;
void* right_value212;
void* right_value213;
void* right_value214;
struct sFun* main_fun_155;
void* right_value227;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value190, 0, sizeof(void*));
memset(&name_140, 0, sizeof(char*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&result_type_141, 0, sizeof(struct sType*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&param_types_147, 0, sizeof(struct list$1sTypeph*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&param_names_153, 0, sizeof(struct list$1charph*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&param_default_parametors_154, 0, sizeof(struct list$1charph*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&main_fun_155, 0, sizeof(struct sFun*));
memset(&right_value227, 0, sizeof(void*));
    name_140=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string("main"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190;
    __freed_obj__ = 0;
    result_type_141=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 651)))),"int",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value191;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value192;
    __freed_obj__ = 0;
    {__list_values1___142[0]=come_increment_ref_count(((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"int",(_Bool)0,info))));
__list_values1___142[1]=come_increment_ref_count(((struct sType*)(right_value196=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value195=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "03transpile2.c", 652)))),"char**",(_Bool)0,info))));
}    param_types_147=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value201=list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value200=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "03transpile2.c", 652)))),2,__list_values1___142))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value193;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value194;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value195;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value196;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypeph_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value200;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value201;
    __freed_obj__ = 0;
    {__list_values2___148[0]=come_increment_ref_count(((char*)(right_value202=__builtin_string("argc"))));
__list_values2___148[1]=come_increment_ref_count(((char*)(right_value203=__builtin_string("argv"))));
}    param_names_153=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value208=list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value207=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 653)))),2,__list_values2___148))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value202;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value203;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charph_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value207;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value208;
    __freed_obj__ = 0;
    param_default_parametors_154=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value210=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value209=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "03transpile2.c", 654))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value209;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value210;
    __freed_obj__ = 0;
    main_fun_155=(struct sFun*)come_increment_ref_count(((struct sFun*)(right_value214=sFun_initialize((struct sFun*)come_increment_ref_count(((struct sFun*)(right_value211=(struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "03transpile2.c", 660)))),(char*)come_increment_ref_count(name_140),(struct sType*)come_increment_ref_count(result_type_141),(struct list$1sTypeph*)come_increment_ref_count(param_types_147),(struct list$1charph*)come_increment_ref_count(param_names_153),(struct list$1charph*)come_increment_ref_count(param_default_parametors_154),(_Bool)0,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string("int main(int argc, char** argv)")))),(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string("")))),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value211;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value212;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value213;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value214;
    __freed_obj__ = 0;
    map$2charphsFunph_insert(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 662))->funcs, "03transpile2.c", 662)),(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string(name_140)))),(struct sFun*)come_increment_ref_count(main_fun_155));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[19] = right_value227;
    __freed_obj__ = 0;
    add_come_code(info,"#include <stdio.h>\n");
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 666))->come_fun=main_fun_155;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 668))->block_level++;
    __freed_obj__ = 0;
    add_come_code(info,"puts(\"HELLO COMELANG\");\n\n");
    __freed_obj__ = 0;
    add_come_code(info,"return 0;\n");
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "03transpile2.c", 671))->block_level--;
    __freed_obj__ = 0;
    __result107__ = 0;
    if(name_140 && !__freed_obj__) { name_140 = come_decrement_ref_count(name_140, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_141 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_147 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_153 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_154 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_155 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_155, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(name_140 && !__freed_obj__) { name_140 = come_decrement_ref_count(name_140, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_141 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_types_147 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_147, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_names_153 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(param_default_parametors_154 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(main_fun_155 && !__freed_obj__) { come_call_finalizer(sFun_finalize,main_fun_155, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_143;
_Bool _for_condtionalA16;
struct list$1sTypeph* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_143, 0, sizeof(int));
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 163))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 164))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 165))->len=0;
        __freed_obj__ = 0;
        for(
        i_143=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA16=        i_143<num_value ,        __freed_obj__ = 0, 
        _for_condtionalA16;        i_143++ ,        __freed_obj__ = 0, 
        0        ){
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 168)),values[i_143]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result78__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result78__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
void* right_value197;
struct list_item$1sTypeph* litem_144;
struct sType* __dec_obj33;
_Bool _if_conditional190;
void* right_value198;
struct list_item$1sTypeph* litem_145;
struct sType* __dec_obj34;
void* right_value199;
struct list_item$1sTypeph* litem_146;
struct sType* __dec_obj35;
struct list$1sTypeph* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
memset(&litem_144, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value198, 0, sizeof(void*));
memset(&litem_145, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value199, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1sTypeph*));
                if(_if_conditional189=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional189) {
                    litem_144=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value197=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value197;
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj33=((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 281))->item;
                    ((struct list_item$1sTypeph*)come_null_check(litem_144, "./comelang2.h", 281))->item=(struct sType*)come_increment_ref_count(item);
                    if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_144;
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 284))->head=litem_144;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional190=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        litem_145=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value198=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value198;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 289))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj34=((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 291))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_145, "./comelang2.h", 291))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj34) { come_call_finalizer(sType_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_145;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_145;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_146=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value199=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value199;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 299))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj35=((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 301))->item;
                        ((struct list_item$1sTypeph*)come_null_check(litem_146, "./comelang2.h", 301))->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_146;
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_146;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result77__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_149;
_Bool _for_condtionalA17;
struct list$1charph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_149, 0, sizeof(int));
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 163))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 164))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 165))->len=0;
        __freed_obj__ = 0;
        for(
        i_149=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA17=        i_149<num_value ,        __freed_obj__ = 0, 
        _for_condtionalA17;        i_149++ ,        __freed_obj__ = 0, 
        0        ){
            list$1charph_push_back(((struct list$1charph*)come_null_check(self, "./comelang2.h", 168)),values[i_149]);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result80__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result80__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
void* right_value204;
struct list_item$1charph* litem_150;
char* __dec_obj36;
_Bool _if_conditional192;
void* right_value205;
struct list_item$1charph* litem_151;
char* __dec_obj37;
void* right_value206;
struct list_item$1charph* litem_152;
char* __dec_obj38;
struct list$1charph* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&litem_150, 0, sizeof(struct list_item$1charph*));
memset(&right_value205, 0, sizeof(void*));
memset(&litem_151, 0, sizeof(struct list_item$1charph*));
memset(&right_value206, 0, sizeof(void*));
memset(&litem_152, 0, sizeof(struct list_item$1charph*));
                if(_if_conditional191=((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional191) {
                    litem_150=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value204=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value204;
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj36=((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 281))->item;
                    ((struct list_item$1charph*)come_null_check(litem_150, "./comelang2.h", 281))->item=(char*)come_increment_ref_count(item);
                    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_150;
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 284))->head=litem_150;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional192=((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional192) {
                        litem_151=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value205=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value205;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_151, "./comelang2.h", 289))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_151, "./comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj37=((struct list_item$1charph*)come_null_check(litem_151, "./comelang2.h", 291))->item;
                        ((struct list_item$1charph*)come_null_check(litem_151, "./comelang2.h", 291))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_151;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_151;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_152=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value206=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value206;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 299))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj38=((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 301))->item;
                        ((struct list_item$1charph*)come_null_check(litem_152, "./comelang2.h", 301))->item=(char*)come_increment_ref_count(item);
                        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_152;
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_152;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result79__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
_Bool _if_conditional194;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional202;
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
_Bool _if_conditional207;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional193=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional193) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional194=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional194) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional195=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional195) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional196=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional196) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional197=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional197) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional198=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional198) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional199=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional199) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional202=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional202) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional203=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional203) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional204=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional204) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional205=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional205) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional206=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional206) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional207=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional207) {
            if(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sBlock_finalize(struct sBlock* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional200=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional200) {
                    if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional201=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional201) {
                    if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct map$2charphsFunph* map$2charphsFunph_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
unsigned int hash_174;
unsigned int it_175;
_Bool _while_condtional12;
_Bool _if_conditional221;
void* right_value221;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional243;
_Bool _if_conditional244;
_Bool _if_conditional245;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool same_key_exist_192;
char* it2_195;
_Bool _for_condtionalA19;
void* right_value223;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional252;
_Bool _if_conditional253;
struct map$2charphsFunph* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_174, 0, sizeof(unsigned int));
memset(&it_175, 0, sizeof(unsigned int));
memset(&right_value221, 0, sizeof(void*));
memset(&same_key_exist_192, 0, sizeof(_Bool));
memset(&it2_195, 0, sizeof(char*));
memset(&right_value223, 0, sizeof(void*));
        if(_if_conditional208=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1429))->len*10>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1429))->size,        __freed_obj__ = 0, 
        _if_conditional208) {
            map$2charphsFunph_rehash(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1427)));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_174=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1429)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1429))->size;
        __freed_obj__ = 0;
        it_175=hash_174;
        __freed_obj__ = 0;
        while(_while_condtional12=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional12) {
            if(_if_conditional221=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1485))->item_existance[it_175],            __freed_obj__ = 0, 
            _if_conditional221) {
                if(_if_conditional222=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1456),__exception_result_var_a2=((struct optional$2boolbool*)(right_value221=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1456))->keys[it_175], "./comelang2.h", 1456)),key))), come_pop_stackframe(), __exception_result_var_a2)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221),
                (right_value221 && right_value221 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value221, 
                __freed_obj__ = 0, 
                _if_conditional222) {
                    if(_if_conditional223=1,                    __freed_obj__ = 0, 
                    _if_conditional223) {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1438))->key_list, "./comelang2.h", 1438)),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1438))->keys[it_175]);
                        __freed_obj__ = 0;
                        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_175] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_175] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1439))->keys[it_175], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1440))->keys[it_175]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1443))->key_list, "./comelang2.h", 1443)),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1443))->keys[it_175]);
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1444))->keys[it_175]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional243=1,                    __freed_obj__ = 0, 
                    _if_conditional243) {
                        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1447))->items[it_175] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1447))->items[it_175], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1448))->items[it_175]=(struct sFun*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1451))->items[it_175]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_175++;
                __freed_obj__ = 0;
                if(_if_conditional244=it_175>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1465))->size,                __freed_obj__ = 0, 
                _if_conditional244) {
                    it_175=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional245=it_175==hash_174,                    __freed_obj__ = 0, 
                    _if_conditional245) {
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
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1467))->item_existance[it_175]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional246=1,                __freed_obj__ = 0, 
                _if_conditional246) {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1469))->keys[it_175]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1472))->keys[it_175]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional247=1,                __freed_obj__ = 0, 
                _if_conditional247) {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1475))->items[it_175]=(struct sFun*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1478))->items[it_175]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1481))->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_192=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_195=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1495))->key_list, "./comelang2.h", 1495))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA19=        !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1495))->key_list, "./comelang2.h", 1495))) ,        __freed_obj__ = 0, 
        _for_condtionalA19;        it2_195=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1495))->key_list, "./comelang2.h", 1495))) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional252=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1493),__exception_result_var_a4=((struct optional$2boolbool*)(right_value223=string_equals(((char*)come_null_check(it2_195, "./comelang2.h", 1493)),key))), come_pop_stackframe(), __exception_result_var_a4)),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223),
            (right_value223 && right_value223 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value223, 
            __freed_obj__ = 0, 
            _if_conditional252) {
                same_key_exist_192=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional253=!same_key_exist_192,        __freed_obj__ = 0, 
        _if_conditional253) {
            list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1496))->key_list, "./comelang2.h", 1496)),key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result106__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sFun_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsFunph_rehash(struct map$2charphsFunph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_156;
void* right_value215;
char** keys_157;
void* right_value216;
struct sFun** items_158;
void* right_value217;
_Bool* item_existance_159;
int len_160;
char* it_163;
_Bool _for_condtionalA18;
struct sFun* default_value_166;
void* right_value219;
struct sFun* it2_170;
unsigned int hash_171;
int n_172;
_Bool _while_condtional11;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
struct sFun* default_value_173;
void* right_value220;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_156, 0, sizeof(int));
memset(&right_value215, 0, sizeof(void*));
memset(&keys_157, 0, sizeof(char**));
memset(&right_value216, 0, sizeof(void*));
memset(&items_158, 0, sizeof(struct sFun**));
memset(&right_value217, 0, sizeof(void*));
memset(&item_existance_159, 0, sizeof(_Bool*));
memset(&len_160, 0, sizeof(int));
memset(&it_163, 0, sizeof(char*));
memset(&default_value_166, 0, sizeof(struct sFun*));
memset(&right_value219, 0, sizeof(void*));
memset(&it2_170, 0, sizeof(struct sFun*));
memset(&hash_171, 0, sizeof(unsigned int));
memset(&n_172, 0, sizeof(int));
memset(&default_value_173, 0, sizeof(struct sFun*));
memset(&right_value220, 0, sizeof(void*));
                size_156=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1374))->size*10;
                __freed_obj__ = 0;
                keys_157=(char**)come_increment_ref_count(((char**)(right_value215=(char**)come_calloc(1, sizeof(char*)*(1*(size_156)), "./comelang2.h", 1375))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value215;
                __freed_obj__ = 0;
                items_158=(struct sFun**)come_increment_ref_count(((struct sFun**)(right_value216=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_156)), "./comelang2.h", 1376))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
                if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value216;
                __freed_obj__ = 0;
                item_existance_159=(_Bool*)come_increment_ref_count(((_Bool*)(right_value217=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_156)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value217);
                if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value217;
                __freed_obj__ = 0;
                len_160=0;
                __freed_obj__ = 0;
                for(
                it_163=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1413))) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA18=                !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1413))) ,                __freed_obj__ = 0, 
                _for_condtionalA18;                it_163=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1413))) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_166,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    it2_170=((struct sFun*)(right_value219=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1384)),it_163,default_value_166)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value219;
                    __freed_obj__ = 0;
                    hash_171=string_get_hash_key(((char*)come_null_check(it_163, "./comelang2.h", 1385)))%size_156;
                    __freed_obj__ = 0;
                    n_172=hash_171;
                    __freed_obj__ = 0;
                    while(_while_condtional11=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional11) {
                        if(_if_conditional218=item_existance_159[n_172],                        __freed_obj__ = 0, 
                        _if_conditional218) {
                            n_172++;
                            __freed_obj__ = 0;
                            if(_if_conditional219=n_172>=size_156,                            __freed_obj__ = 0, 
                            _if_conditional219) {
                                n_172=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional220=n_172==hash_171,                                __freed_obj__ = 0, 
                                _if_conditional220) {
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
                            item_existance_159[n_172]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_157[n_172]=it_163;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_158[n_172]=((struct sFun*)(right_value220=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1405)),it_163,default_value_173)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value220;
                            __freed_obj__ = 0;
                            len_160++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1413))->items);
                __freed_obj__ = 0;
                if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1414))->item_existance && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1414))->item_existance = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1414))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1415))->keys);
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1417))->keys=keys_157;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1418))->items=items_158;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1419))->item_existance=item_existance_159;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1421))->size=size_156;
                __freed_obj__ = 0;
                ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1422))->len=len_160;
                __freed_obj__ = 0;
}

static char* map$2charphsFunph_begin(struct map$2charphsFunph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional209;
char* result_161;
char* __result81__;
_Bool _if_conditional210;
char* __result82__;
char* result_162;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_161, 0, sizeof(char*));
memset(&result_162, 0, sizeof(char*));
                    if(_if_conditional209=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional209) {
                        __freed_obj__ = 0;
                        memset(&result_161,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result81__ = __result_obj__ = result_161;
                        __freed_obj__ = 0;
                        return __result81__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1341))->key_list, "./comelang2.h", 1341))->it=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1341))->key_list, "./comelang2.h", 1341))->head;
                    __freed_obj__ = 0;
                    if(_if_conditional210=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1347))->key_list, "./comelang2.h", 1347))->it,                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __result82__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1344))->key_list, "./comelang2.h", 1344))->it, "./comelang2.h", 1344))->item;
                        __freed_obj__ = 0;
                        return __result82__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_162,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result83__ = __result_obj__ = result_162;
                    __freed_obj__ = 0;
                    return __result83__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsFunph_end(struct map$2charphsFunph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result84__ = self==((void*)0)||((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1370))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1370))->key_list, "./comelang2.h", 1370))->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
}

static char* map$2charphsFunph_next(struct map$2charphsFunph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional211;
char* result_164;
char* __result85__;
_Bool _if_conditional212;
char* __result86__;
char* result_165;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_164, 0, sizeof(char*));
memset(&result_165, 0, sizeof(char*));
                    if(_if_conditional211=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        __freed_obj__ = 0;
                        memset(&result_164,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result85__ = __result_obj__ = result_164;
                        __freed_obj__ = 0;
                        return __result85__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1358))->key_list, "./comelang2.h", 1358))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1358))->key_list, "./comelang2.h", 1358))->it, "./comelang2.h", 1358))->next;
                    __freed_obj__ = 0;
                    if(_if_conditional212=((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1364))->key_list, "./comelang2.h", 1364))->it,                    __freed_obj__ = 0, 
                    _if_conditional212) {
                        __result86__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1361))->key_list, "./comelang2.h", 1361))->it, "./comelang2.h", 1361))->item;
                        __freed_obj__ = 0;
                        return __result86__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_165,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result87__ = __result_obj__ = result_165;
                    __freed_obj__ = 0;
                    return __result87__;
                    __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_167;
unsigned int it_168;
_Bool _while_condtional10;
_Bool _if_conditional213;
void* right_value218;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional215;
struct sFun* __result90__;
_Bool _if_conditional216;
_Bool _if_conditional217;
struct sFun* __result91__;
struct sFun* __result92__;
struct sFun* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_167, 0, sizeof(unsigned int));
memset(&it_168, 0, sizeof(unsigned int));
memset(&right_value218, 0, sizeof(void*));
                        hash_167=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1263)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1263))->size;
                        __freed_obj__ = 0;
                        it_168=hash_167;
                        __freed_obj__ = 0;
                        while(_while_condtional10=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional10) {
                            if(_if_conditional213=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1286))->item_existance[it_168],                            __freed_obj__ = 0, 
                            _if_conditional213) {
                                if(_if_conditional215=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1274),__exception_result_var_a1=((struct optional$2boolbool*)(right_value218=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1274))->keys[it_168], "./comelang2.h", 1274)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218),
                                (right_value218 && right_value218 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value218, 
                                __freed_obj__ = 0, 
                                _if_conditional215) {
                                    __result90__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1271))->items[it_168];
                                    __freed_obj__ = 0;
                                    return __result90__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_168++;
                                __freed_obj__ = 0;
                                if(_if_conditional216=it_168>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1282))->size,                                __freed_obj__ = 0, 
                                _if_conditional216) {
                                    it_168=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional217=it_168==hash_167,                                    __freed_obj__ = 0, 
                                    _if_conditional217) {
                                        __result91__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result91__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result92__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result92__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result93__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result93__;
                        __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
_Bool default_value_169;
_Bool __result88__;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_169, 0, sizeof(_Bool));
                                    if(_if_conditional214=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional214) {
                                        __freed_obj__ = 0;
                                        memset(&default_value_169,0,sizeof(_Bool));
                                        __freed_obj__ = 0;
                                        __result88__ = default_value_169;
                                        __freed_obj__ = 0;
                                        return __result88__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result89__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        return __result89__;
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

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_176;
struct list_item$1charp* it_177;
_Bool _while_condtional13;
void* right_value222;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional224;
struct list$1charp* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_176, 0, sizeof(int));
memset(&it_177, 0, sizeof(struct list_item$1charp*));
memset(&right_value222, 0, sizeof(void*));
                            it2_176=0;
                            __freed_obj__ = 0;
                            it_177=((struct list$1charp*)come_null_check(self, "./comelang2.h", 497))->head;
                            __freed_obj__ = 0;
                            while(_while_condtional13=it_177!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional13) {
                                if(_if_conditional224=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 503),__exception_result_var_a3=((struct optional$2boolbool*)(right_value222=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_177, "./comelang2.h", 503))->item, "./comelang2.h", 503)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222),
                                (right_value222 && right_value222 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value222, 
                                __freed_obj__ = 0, 
                                _if_conditional224) {
                                    list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 500)),it2_176,it2_176+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_176++;
                                __freed_obj__ = 0;
                                it_177=((struct list_item$1charp*)come_null_check(it_177, "./comelang2.h", 505))->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result97__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result97__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
int tmp_178;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
struct list$1charp* __result94__;
_Bool _if_conditional231;
_Bool _if_conditional232;
struct list_item$1charp* it_181;
int i_182;
_Bool _while_condtional15;
_Bool _if_conditional233;
struct list_item$1charp* prev_it_183;
_Bool _if_conditional234;
_Bool _if_conditional235;
struct list_item$1charp* it_184;
int i_185;
_Bool _while_condtional16;
_Bool _if_conditional236;
_Bool _if_conditional237;
struct list_item$1charp* prev_it_186;
struct list_item$1charp* it_187;
struct list_item$1charp* head_prev_it_188;
struct list_item$1charp* tail_it_189;
int i_190;
_Bool _while_condtional17;
_Bool _if_conditional238;
_Bool _if_conditional239;
_Bool _if_conditional240;
struct list_item$1charp* prev_it_191;
_Bool _if_conditional241;
_Bool _if_conditional242;
struct list$1charp* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_178, 0, sizeof(int));
memset(&it_181, 0, sizeof(struct list_item$1charp*));
memset(&i_182, 0, sizeof(int));
memset(&prev_it_183, 0, sizeof(struct list_item$1charp*));
memset(&it_184, 0, sizeof(struct list_item$1charp*));
memset(&i_185, 0, sizeof(int));
memset(&prev_it_186, 0, sizeof(struct list_item$1charp*));
memset(&it_187, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_188, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_189, 0, sizeof(struct list_item$1charp*));
memset(&i_190, 0, sizeof(int));
memset(&prev_it_191, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional225=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional225) {
                                            head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 513))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional226=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional226) {
                                            tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 516))->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional227=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional227) {
                                            tmp_178=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_178;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional228=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional228) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional229=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 533))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional229) {
                                            tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 530))->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional230=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional230) {
                                            __result94__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result94__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional231=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 632))->len,                                        __freed_obj__ = 0, 
                                        _if_conditional231) {
                                            list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 539)));
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional232=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional232) {
                                                it_181=((struct list$1charp*)come_null_check(self, "./comelang2.h", 542))->head;
                                                __freed_obj__ = 0;
                                                i_182=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional15=it_181!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional15) {
                                                    if(_if_conditional233=i_182<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional233) {
                                                        prev_it_183=it_181;
                                                        __freed_obj__ = 0;
                                                        it_181=((struct list_item$1charp*)come_null_check(it_181, "./comelang2.h", 548))->next;
                                                        __freed_obj__ = 0;
                                                        i_182++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_183 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_183, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 553))->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional234=i_182==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional234) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 556))->head=it_181;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 557))->head, "./comelang2.h", 557))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_181=((struct list_item$1charp*)come_null_check(it_181, "./comelang2.h", 561))->next;
                                                            __freed_obj__ = 0;
                                                            i_182++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional235=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 632))->len,                                                __freed_obj__ = 0, 
                                                _if_conditional235) {
                                                    it_184=((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->head;
                                                    __freed_obj__ = 0;
                                                    i_185=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional16=it_184!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional16) {
                                                        if(_if_conditional236=i_185==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional236) {
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 571))->tail=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 571))->prev;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 572))->tail, "./comelang2.h", 572))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional237=i_185>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional237) {
                                                            prev_it_186=it_184;
                                                            __freed_obj__ = 0;
                                                            it_184=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 578))->next;
                                                            __freed_obj__ = 0;
                                                            i_185++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_186 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 583))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_184=((struct list_item$1charp*)come_null_check(it_184, "./comelang2.h", 586))->next;
                                                            __freed_obj__ = 0;
                                                            i_185++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_187=((struct list$1charp*)come_null_check(self, "./comelang2.h", 592))->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_188=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_189=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_190=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional17=it_187!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional17) {
                                                        if(_if_conditional238=i_190==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional238) {
                                                            head_prev_it_188=((struct list_item$1charp*)come_null_check(it_187, "./comelang2.h", 601))->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional239=i_190==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional239) {
                                                            tail_it_189=it_187;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional240=i_190>=head&&i_190<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional240) {
                                                            prev_it_191=it_187;
                                                            __freed_obj__ = 0;
                                                            it_187=((struct list_item$1charp*)come_null_check(it_187, "./comelang2.h", 611))->next;
                                                            __freed_obj__ = 0;
                                                            i_190++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_191 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 616))->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_187=((struct list_item$1charp*)come_null_check(it_187, "./comelang2.h", 619))->next;
                                                            __freed_obj__ = 0;
                                                            i_190++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional241=head_prev_it_188!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional241) {
                                                        ((struct list_item$1charp*)come_null_check(head_prev_it_188, "./comelang2.h", 625))->next=tail_it_189;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional242=tail_it_189!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional242) {
                                                        ((struct list_item$1charp*)come_null_check(tail_it_189, "./comelang2.h", 628))->prev=head_prev_it_188;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result96__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result96__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_179;
_Bool _while_condtional14;
struct list_item$1charp* prev_it_180;
struct list$1charp* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_179, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_180, 0, sizeof(struct list_item$1charp*));
                                                it_179=((struct list$1charp*)come_null_check(self, "./comelang2.h", 481))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_179!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    prev_it_180=it_179;
                                                    __freed_obj__ = 0;
                                                    it_179=((struct list_item$1charp*)come_null_check(it_179, "./comelang2.h", 484))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_180 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_180, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 488))->head=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 489))->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 491))->len=0;
                                                __freed_obj__ = 0;
                                                __result95__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result95__;
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

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
char* result_193;
char* __result98__;
_Bool _if_conditional249;
char* __result99__;
char* result_194;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_193, 0, sizeof(char*));
memset(&result_194, 0, sizeof(char*));
            if(_if_conditional248=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional248) {
                __freed_obj__ = 0;
                memset(&result_193,0,sizeof(char*));
                __freed_obj__ = 0;
                __result98__ = __result_obj__ = result_193;
                __freed_obj__ = 0;
                return __result98__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 341))->head;
            __freed_obj__ = 0;
            if(_if_conditional249=((struct list$1charp*)come_null_check(self, "./comelang2.h", 347))->it,            __freed_obj__ = 0, 
            _if_conditional249) {
                __result99__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
                __freed_obj__ = 0;
                return __result99__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_194,0,sizeof(char*));
            __freed_obj__ = 0;
            __result100__ = __result_obj__ = result_194;
            __freed_obj__ = 0;
            return __result100__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result101__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
char* result_196;
char* __result102__;
_Bool _if_conditional251;
char* __result103__;
char* result_197;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_196, 0, sizeof(char*));
memset(&result_197, 0, sizeof(char*));
            if(_if_conditional250=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional250) {
                __freed_obj__ = 0;
                memset(&result_196,0,sizeof(char*));
                __freed_obj__ = 0;
                __result102__ = __result_obj__ = result_196;
                __freed_obj__ = 0;
                return __result102__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
            __freed_obj__ = 0;
            if(_if_conditional251=((struct list$1charp*)come_null_check(self, "./comelang2.h", 365))->it,            __freed_obj__ = 0, 
            _if_conditional251) {
                __result103__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
                __freed_obj__ = 0;
                return __result103__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_197,0,sizeof(char*));
            __freed_obj__ = 0;
            __result104__ = __result_obj__ = result_197;
            __freed_obj__ = 0;
            return __result104__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
void* right_value224;
struct list_item$1charp* litem_198;
_Bool _if_conditional255;
void* right_value225;
struct list_item$1charp* litem_199;
void* right_value226;
struct list_item$1charp* litem_200;
struct list$1charp* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value224, 0, sizeof(void*));
memset(&litem_198, 0, sizeof(struct list_item$1charp*));
memset(&right_value225, 0, sizeof(void*));
memset(&litem_199, 0, sizeof(struct list_item$1charp*));
memset(&right_value226, 0, sizeof(void*));
memset(&litem_200, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional254=((struct list$1charp*)come_null_check(self, "./comelang2.h", 307))->len==0,                __freed_obj__ = 0, 
                _if_conditional254) {
                    litem_198=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value224=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value224;
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_198, "./comelang2.h", 279))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_198, "./comelang2.h", 280))->next=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1charp*)come_null_check(litem_198, "./comelang2.h", 281))->item=item;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 283))->tail=litem_198;
                    __freed_obj__ = 0;
                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head=litem_198;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional255=((struct list$1charp*)come_null_check(self, "./comelang2.h", 307))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional255) {
                        litem_199=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value225=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value225;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_199, "./comelang2.h", 289))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_199, "./comelang2.h", 290))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_199, "./comelang2.h", 291))->item=item;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 293))->tail=litem_199;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_199;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_200=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value226=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value226;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_200, "./comelang2.h", 299))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_200, "./comelang2.h", 300))->next=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(litem_200, "./comelang2.h", 301))->item=item;
                        __freed_obj__ = 0;
                        ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_200;
                        __freed_obj__ = 0;
                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 304))->tail=litem_200;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 307))->len++;
                __freed_obj__ = 0;
                __result105__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result105__;
                __freed_obj__ = 0;
}

_Bool output_source_file_v3(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value228;
char* output_file_name_201;
struct _IO_FILE* f_202;
void* right_value229;
struct map$2charphsFunph* o2_saved_203;
char* it_204;
_Bool _for_condtionalA20;
void* right_value230;
void* right_value240;
struct sFun* it2_209;
void* right_value241;
char* header_210;
_Bool _if_conditional261;
_Bool _if_conditional262;
_Bool _if_conditional263;
_Bool _if_conditional264;
struct map$2charphsFunph* o2_saved_215;
char* it_216;
_Bool _for_condtionalA23;
void* right_value242;
void* right_value243;
struct sFun* it2_217;
void* right_value244;
char* header_218;
_Bool _if_conditional269;
void* right_value245;
char* output_219;
_Bool _if_conditional270;
void* right_value246;
char* output_220;
_Bool _if_conditional271;
_Bool _if_conditional272;
struct map$2charphsFunph* o2_saved_221;
char* it_222;
_Bool _for_condtionalA24;
void* right_value247;
struct sFun* it2_223;
_Bool _if_conditional273;
void* right_value248;
char* output_224;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&output_file_name_201, 0, sizeof(char*));
memset(&f_202, 0, sizeof(struct _IO_FILE*));
memset(&right_value229, 0, sizeof(void*));
memset(&o2_saved_203, 0, sizeof(struct map$2charphsFunph*));
memset(&it_204, 0, sizeof(char*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&it2_209, 0, sizeof(struct sFun*));
memset(&right_value241, 0, sizeof(void*));
memset(&header_210, 0, sizeof(char*));
memset(&o2_saved_215, 0, sizeof(struct map$2charphsFunph*));
memset(&it_216, 0, sizeof(char*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&it2_217, 0, sizeof(struct sFun*));
memset(&right_value244, 0, sizeof(void*));
memset(&header_218, 0, sizeof(char*));
memset(&right_value245, 0, sizeof(void*));
memset(&output_219, 0, sizeof(char*));
memset(&right_value246, 0, sizeof(void*));
memset(&output_220, 0, sizeof(char*));
memset(&o2_saved_221, 0, sizeof(struct map$2charphsFunph*));
memset(&it_222, 0, sizeof(char*));
memset(&right_value247, 0, sizeof(void*));
memset(&it2_223, 0, sizeof(struct sFun*));
memset(&right_value248, 0, sizeof(void*));
memset(&output_224, 0, sizeof(char*));
    output_file_name_201=(char*)come_increment_ref_count(((char*)(right_value228=xsprintf("%s.c",((struct sInfo*)come_null_check(info, "03transpile2.c", 679))->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228;
    __freed_obj__ = 0;
    f_202=fopen(output_file_name_201,"w");
    __freed_obj__ = 0;
    fprintf(f_202,"// source head\n");
    __freed_obj__ = 0;
    fprintf(f_202,"%s\n",((char*)(right_value229=buffer_to_string(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 684))->module, "03transpile2.c", 684))->mSourceHead, "03transpile2.c", 684))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value229;
    __freed_obj__ = 0;
    fprintf(f_202,"// header function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_203=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 704))->funcs)),it_204=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_203), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA20=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_203), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    _for_condtionalA20;    it_204=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_203), "03transpile2.c", 704))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_209=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 688),((struct optional$2sFunpbool*)(right_value240=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 688))->funcs,((char*)(right_value230=__builtin_string(it_204))))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
        if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value230;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
        if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value240;
        __freed_obj__ = 0;
        header_210=(char*)come_increment_ref_count(((char*)(right_value241=header_function(it2_209,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value241);
        if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value241;
        __freed_obj__ = 0;
        if(_if_conditional261=((struct sFun*)come_null_check(it2_209, "03transpile2.c", 702))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_209, "03transpile2.c", 702))->mResultType, "03transpile2.c", 702))->mInline,        __freed_obj__ = 0, 
        _if_conditional261) {
        }
        else {
            if(_if_conditional262=((struct sFun*)come_null_check(it2_209, "03transpile2.c", 702))->mStatic,            __freed_obj__ = 0, 
            _if_conditional262) {
                fprintf(f_202,"static %s",header_210);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional263=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_209, "03transpile2.c", 702))->mResultType, "03transpile2.c", 702))->mInline,                __freed_obj__ = 0, 
                _if_conditional263) {
                }
                else {
                    if(_if_conditional264=string_operator_not_equals(it_204,"__builtin_va_start")&&string_operator_not_equals(it_204,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional264) {
                        fprintf(f_202,"%s\n",header_210,it_204);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_210 && !__freed_obj__) { header_210 = come_decrement_ref_count(header_210, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_203 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_202,"// inline function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_215=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 724))->funcs)),it_216=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_215), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA23=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_215), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    _for_condtionalA23;    it_216=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_215), "03transpile2.c", 724))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_217=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 706),((struct optional$2sFunpbool*)(right_value243=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 706))->funcs,((char*)(right_value242=__builtin_string(it_216))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value242;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value243;
        __freed_obj__ = 0;
        header_218=(char*)come_increment_ref_count(((char*)(right_value244=header_function(it2_217,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value244;
        __freed_obj__ = 0;
        if(_if_conditional269=((struct sFun*)come_null_check(it2_217, "03transpile2.c", 722))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_217, "03transpile2.c", 722))->mResultType, "03transpile2.c", 722))->mInline,        __freed_obj__ = 0, 
        _if_conditional269) {
            output_219=(char*)come_increment_ref_count(((char*)(right_value245=output_function(it2_217,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
            if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value245;
            __freed_obj__ = 0;
            fprintf(f_202,"static inline %s",output_219);
            __freed_obj__ = 0;
            if(output_219 && !__freed_obj__) { output_219 = come_decrement_ref_count(output_219, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            if(_if_conditional270=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_217, "03transpile2.c", 722))->mResultType, "03transpile2.c", 722))->mInline,            __freed_obj__ = 0, 
            _if_conditional270) {
                output_220=(char*)come_increment_ref_count(((char*)(right_value246=output_function(it2_217,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value246;
                __freed_obj__ = 0;
                fprintf(f_202,"static inline %s",output_220);
                __freed_obj__ = 0;
                if(output_220 && !__freed_obj__) { output_220 = come_decrement_ref_count(output_220, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional271=((struct sFun*)come_null_check(it2_217, "03transpile2.c", 722))->mStatic,                __freed_obj__ = 0, 
                _if_conditional271) {
                }
                else {
                    if(_if_conditional272=string_operator_not_equals(it_216,"__builtin_va_start")&&string_operator_not_equals(it_216,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional272) {
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_218 && !__freed_obj__) { header_218 = come_decrement_ref_count(header_218, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_215 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_202,"\n");
    __freed_obj__ = 0;
    fprintf(f_202,"// body function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_221=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 748))->funcs)),it_222=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_221), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA24=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_221), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    _for_condtionalA24;    it_222=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_221), "03transpile2.c", 748))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_223=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 728),((struct optional$2sFunpbool*)(right_value247=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 728))->funcs,it_222)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value247;
        __freed_obj__ = 0;
        if(_if_conditional273=!((struct sFun*)come_null_check(it2_223, "03transpile2.c", 746))->mExternal,        __freed_obj__ = 0, 
        _if_conditional273) {
            output_224=(char*)come_increment_ref_count(((char*)(right_value248=output_function(it2_223,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
            if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value248;
            __freed_obj__ = 0;
            if(_if_conditional274=((struct sFun*)come_null_check(it2_223, "03transpile2.c", 744))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_223, "03transpile2.c", 744))->mResultType, "03transpile2.c", 744))->mInline,            __freed_obj__ = 0, 
            _if_conditional274) {
            }
            else {
                if(_if_conditional275=((struct sFun*)come_null_check(it2_223, "03transpile2.c", 744))->mStatic,                __freed_obj__ = 0, 
                _if_conditional275) {
                    fprintf(f_202,"static %s",output_224);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional276=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_223, "03transpile2.c", 744))->mResultType, "03transpile2.c", 744))->mInline,                    __freed_obj__ = 0, 
                    _if_conditional276) {
                    }
                    else {
                        fprintf(f_202,"%s",output_224);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            fprintf(f_202,"\n");
            __freed_obj__ = 0;
            if(output_224 && !__freed_obj__) { output_224 = come_decrement_ref_count(output_224, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    if(o2_saved_221 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fclose(f_202);
    __freed_obj__ = 0;
    __result115__ = (_Bool)1;
    if(output_file_name_201 && !__freed_obj__) { output_file_name_201 = come_decrement_ref_count(output_file_name_201, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
    if(output_file_name_201 && !__freed_obj__) { output_file_name_201 = come_decrement_ref_count(output_file_name_201, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_205;
unsigned int hash_206;
unsigned int it_207;
_Bool _while_condtional18;
_Bool _if_conditional256;
void* right_value231;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional257;
void* right_value232;
void* right_value233;
struct optional$2sFunpbool* __result109__;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value234;
void* right_value235;
struct optional$2sFunpbool* __result110__;
void* right_value236;
void* right_value237;
struct optional$2sFunpbool* __result111__;
void* right_value238;
void* right_value239;
struct optional$2sFunpbool* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_205, 0, sizeof(struct sFun*));
memset(&hash_206, 0, sizeof(unsigned int));
memset(&it_207, 0, sizeof(unsigned int));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_205,0,sizeof(struct sFun*));
            __freed_obj__ = 0;
            hash_206=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1589)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1589))->size;
            __freed_obj__ = 0;
            it_207=hash_206;
            __freed_obj__ = 0;
            while(_while_condtional18=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional18) {
                if(_if_conditional256=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1612))->item_existance[it_207],                __freed_obj__ = 0, 
                _if_conditional256) {
                    if(_if_conditional257=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b1=((struct optional$2boolbool*)(right_value231=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_207], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231),
                    (right_value231 && right_value231 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value231, 
                    __freed_obj__ = 0, 
                    _if_conditional257) {
                        __result109__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value233=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value232=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1597)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1597))->items[it_207],(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value232;
                        __freed_obj__ = 0;
                        return __result109__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_207++;
                    __freed_obj__ = 0;
                    if(_if_conditional258=it_207>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1608))->size,                    __freed_obj__ = 0, 
                    _if_conditional258) {
                        it_207=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional259=it_207==hash_206,                        __freed_obj__ = 0, 
                        _if_conditional259) {
                            __result110__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1606), ((struct optional$2sFunpbool*)(right_value235=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value234=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1606))),default_value_205,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                            if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value234;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
                            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value235;
                            __freed_obj__ = 0;
                            return __result110__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result111__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1610), ((struct optional$2sFunpbool*)(right_value237=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value236=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1610))),default_value_205,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value236;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value237);
                    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value237;
                    __freed_obj__ = 0;
                    return __result111__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result112__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1614), ((struct optional$2sFunpbool*)(right_value239=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value238=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1614))),default_value_205,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value238;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239);
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value239;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result108__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result108__;
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
_Bool _if_conditional260;
struct sFun* default_value_208;
struct sFun* __result113__;
struct sFun* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_208, 0, sizeof(struct sFun*));
            if(_if_conditional260=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional260) {
                __freed_obj__ = 0;
                memset(&default_value_208,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                __result113__ = __result_obj__ = default_value_208;
                __freed_obj__ = 0;
                return __result113__;
                __freed_obj__ = 0;
            }
            else {
                __result114__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result114__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void map$2charphsFunphp_finalize(struct map$2charphsFunph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_211;
_Bool _for_condtionalA21;
_Bool _if_conditional265;
_Bool _if_conditional266;
int i_212;
_Bool _for_condtionalA22;
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_211, 0, sizeof(int));
memset(&i_212, 0, sizeof(int));
        for(
        i_211=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA21=        i_211<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->size ,        __freed_obj__ = 0, 
        _for_condtionalA21;        i_211++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional265=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1176))->item_existance[i_211],            __freed_obj__ = 0, 
            _if_conditional265) {
                if(_if_conditional266=1,                __freed_obj__ = 0, 
                _if_conditional266) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1173))->items[i_211] && !__freed_obj__) { come_call_finalizer(sFun_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1173))->items[i_211], (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1177))->items);
        __freed_obj__ = 0;
        for(
        i_212=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        i_212<((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1186))->size ,        __freed_obj__ = 0, 
        _for_condtionalA22;        i_212++ ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional267=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1185))->item_existance[i_212],            __freed_obj__ = 0, 
            _if_conditional267) {
                if(_if_conditional268=1,                __freed_obj__ = 0, 
                _if_conditional268) {
                    if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_212] && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_212] = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_212], (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_free_object((char*)((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1186))->keys);
        __freed_obj__ = 0;
        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1188))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1188))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1190))->item_existance && !__freed_obj__) { ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1190))->item_existance = come_decrement_ref_count(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1190))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
}

static void list$1charpp_finalize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_213;
_Bool _while_condtional19;
struct list_item$1charp* prev_it_214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_213, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_214, 0, sizeof(struct list_item$1charp*));
            it_213=((struct list$1charp*)come_null_check(self, "./comelang2.h", 174))->head;
            __freed_obj__ = 0;
            while(_while_condtional19=it_213!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional19) {
                prev_it_214=it_213;
                __freed_obj__ = 0;
                it_213=((struct list_item$1charp*)come_null_check(it_213, "./comelang2.h", 177))->next;
                __freed_obj__ = 0;
                if(prev_it_214 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_214, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

_Bool output_header_file(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* output_file_name_225;
struct _IO_FILE* f_226;
_Bool _if_conditional277;
void* right_value249;
struct map$2charphsFunph* o2_saved_227;
char* it_228;
_Bool _for_condtionalA25;
void* right_value250;
void* right_value251;
struct sFun* it2_229;
void* right_value252;
char* header_230;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
struct map$2charphsFunph* o2_saved_231;
char* it_232;
_Bool _for_condtionalA26;
void* right_value253;
void* right_value254;
struct sFun* it2_233;
void* right_value255;
char* header_234;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value256;
char* output_235;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value257;
char* output_236;
_Bool _if_conditional287;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&output_file_name_225, 0, sizeof(char*));
memset(&f_226, 0, sizeof(struct _IO_FILE*));
memset(&right_value249, 0, sizeof(void*));
memset(&o2_saved_227, 0, sizeof(struct map$2charphsFunph*));
memset(&it_228, 0, sizeof(char*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&it2_229, 0, sizeof(struct sFun*));
memset(&right_value252, 0, sizeof(void*));
memset(&header_230, 0, sizeof(char*));
memset(&o2_saved_231, 0, sizeof(struct map$2charphsFunph*));
memset(&it_232, 0, sizeof(char*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&it2_233, 0, sizeof(struct sFun*));
memset(&right_value255, 0, sizeof(void*));
memset(&header_234, 0, sizeof(char*));
memset(&right_value256, 0, sizeof(void*));
memset(&output_235, 0, sizeof(char*));
memset(&right_value257, 0, sizeof(void*));
memset(&output_236, 0, sizeof(char*));
    output_file_name_225=(char*)come_increment_ref_count(((struct sInfo*)come_null_check(info, "03transpile2.c", 756))->output_file_name);
    __freed_obj__ = 0;
    f_226=fopen(output_file_name_225,"a");
    __freed_obj__ = 0;
    if(_if_conditional277=((struct sInfo*)come_null_check(info, "03transpile2.c", 766))->num_source_files==0&&string_operator_equals(((struct sInfo*)come_null_check(info, "03transpile2.c", 766))->output_file_name,"common.h"),    __freed_obj__ = 0, 
    _if_conditional277) {
        fprintf(f_226,"#ifndef __COMMON_H__\n");
        __freed_obj__ = 0;
        fprintf(f_226,"#define __COMMON_H__\n");
        __freed_obj__ = 0;
        fprintf(f_226,"#include <comelang2.h>\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    fprintf(f_226,"// source head\n");
    __freed_obj__ = 0;
    fprintf(f_226,"%s\n",((char*)(right_value249=buffer_to_string(((struct buffer*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 767))->module, "03transpile2.c", 767))->mSourceHead, "03transpile2.c", 767))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value249;
    __freed_obj__ = 0;
    fprintf(f_226,"// header function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_227=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 788))->funcs)),it_228=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_227), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA25=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_227), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    _for_condtionalA25;    it_228=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_227), "03transpile2.c", 788))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_229=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 771),((struct optional$2sFunpbool*)(right_value251=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 771))->funcs,((char*)(right_value250=__builtin_string(it_228))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value250;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value251;
        __freed_obj__ = 0;
        header_230=(char*)come_increment_ref_count(((char*)(right_value252=header_function(it2_229,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value252;
        __freed_obj__ = 0;
        if(_if_conditional278=((struct sFun*)come_null_check(it2_229, "03transpile2.c", 786))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_229, "03transpile2.c", 786))->mResultType, "03transpile2.c", 786))->mInline,        __freed_obj__ = 0, 
        _if_conditional278) {
        }
        else {
            if(_if_conditional279=((struct sFun*)come_null_check(it2_229, "03transpile2.c", 786))->mStatic,            __freed_obj__ = 0, 
            _if_conditional279) {
            }
            else {
                if(_if_conditional280=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_229, "03transpile2.c", 786))->mResultType, "03transpile2.c", 786))->mInline,                __freed_obj__ = 0, 
                _if_conditional280) {
                }
                else {
                    if(_if_conditional281=string_operator_not_equals(it_228,"__builtin_va_start")&&string_operator_not_equals(it_228,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional281) {
                        if(_if_conditional282=string_operator_equals(((struct sFun*)come_null_check(it2_229, "03transpile2.c", 785))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 785))->base_sname),                        __freed_obj__ = 0, 
                        _if_conditional282) {
                            fprintf(f_226,"%s\n",header_230,it_228);
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
        if(header_230 && !__freed_obj__) { header_230 = come_decrement_ref_count(header_230, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_227 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_226,"// inline function\n");
    __freed_obj__ = 0;
    for(
    o2_saved_231=(struct map$2charphsFunph*)come_increment_ref_count((((struct sInfo*)come_null_check(info, "03transpile2.c", 812))->funcs)),it_232=map$2charphsFunph_begin(((struct map$2charphsFunph*)come_null_check((o2_saved_231), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA26=    !map$2charphsFunph_end(((struct map$2charphsFunph*)come_null_check((o2_saved_231), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    _for_condtionalA26;    it_232=map$2charphsFunph_next(((struct map$2charphsFunph*)come_null_check((o2_saved_231), "03transpile2.c", 812))) ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        it2_233=optional$2sFunpbool_value((come_push_stackframe("03transpile2.c", 790),((struct optional$2sFunpbool*)(right_value254=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 790))->funcs,((char*)(right_value253=__builtin_string(it_232))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value254;
        __freed_obj__ = 0;
        header_234=(char*)come_increment_ref_count(((char*)(right_value255=header_function(it2_233,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value255;
        __freed_obj__ = 0;
        if(_if_conditional283=((struct sFun*)come_null_check(it2_233, "03transpile2.c", 810))->mStatic&&((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_233, "03transpile2.c", 810))->mResultType, "03transpile2.c", 810))->mInline,        __freed_obj__ = 0, 
        _if_conditional283) {
            if(_if_conditional284=string_operator_equals(((struct sFun*)come_null_check(it2_233, "03transpile2.c", 799))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 799))->base_sname),            __freed_obj__ = 0, 
            _if_conditional284) {
                output_235=(char*)come_increment_ref_count(((char*)(right_value256=output_function(it2_233,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
                if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value256;
                __freed_obj__ = 0;
                fprintf(f_226,"static inline %s",output_235);
                __freed_obj__ = 0;
                if(output_235 && !__freed_obj__) { output_235 = come_decrement_ref_count(output_235, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional285=((struct sType*)come_null_check(((struct sFun*)come_null_check(it2_233, "03transpile2.c", 810))->mResultType, "03transpile2.c", 810))->mInline,            __freed_obj__ = 0, 
            _if_conditional285) {
                if(_if_conditional286=string_operator_equals(((struct sFun*)come_null_check(it2_233, "03transpile2.c", 805))->mDeclareSName,((struct sInfo*)come_null_check(info, "03transpile2.c", 805))->base_sname),                __freed_obj__ = 0, 
                _if_conditional286) {
                    output_236=(char*)come_increment_ref_count(((char*)(right_value257=output_function(it2_233,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value257;
                    __freed_obj__ = 0;
                    fprintf(f_226,"static inline %s",output_236);
                    __freed_obj__ = 0;
                    if(output_236 && !__freed_obj__) { output_236 = come_decrement_ref_count(output_236, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional287=((struct sFun*)come_null_check(it2_233, "03transpile2.c", 810))->mStatic,                __freed_obj__ = 0, 
                _if_conditional287) {
                }
                else {
                    if(_if_conditional288=string_operator_not_equals(it_232,"__builtin_va_start")&&string_operator_not_equals(it_232,"__builtin_va_end"),                    __freed_obj__ = 0, 
                    _if_conditional288) {
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(header_234 && !__freed_obj__) { header_234 = come_decrement_ref_count(header_234, (void*)0, (void*)0, 0, 0, 0); }
    }
    if(o2_saved_231 && !__freed_obj__) { come_call_finalizer(map$2charphsFunphp_finalize,o2_saved_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    fprintf(f_226,"\n");
    __freed_obj__ = 0;
    if(_if_conditional289=((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->num_source_files==((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->max_source_files-1&&string_operator_equals(((struct sInfo*)come_null_check(info, "03transpile2.c", 818))->output_file_name,"common.h"),    __freed_obj__ = 0, 
    _if_conditional289) {
        fprintf(f_226,"#endif\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    fclose(f_226);
    __freed_obj__ = 0;
    __result116__ = (_Bool)1;
    if(output_file_name_225 && !__freed_obj__) { output_file_name_225 = come_decrement_ref_count(output_file_name_225, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
    if(output_file_name_225 && !__freed_obj__) { output_file_name_225 = come_decrement_ref_count(output_file_name_225, (void*)0, (void*)0, 0, 0, 0); }
}

void add_come_code_at_function_head(struct sInfo* info, char* code, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional290;
char* msg2_237;
va_list args_238;
int len_239;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_237, 0, sizeof(char*));
memset(&args_238, 0, sizeof(va_list));
memset(&len_239, 0, sizeof(int));
    if(_if_conditional290=((struct sInfo*)come_null_check(info, "03transpile2.c", 828))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional290) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_238,code);
    __freed_obj__ = 0;
    len_239=vasprintf(&msg2_237,code,args_238);
    __freed_obj__ = 0;
    __builtin_va_end(args_238);
    __freed_obj__ = 0;
    if(_if_conditional291=((struct sInfo*)come_null_check(info, "03transpile2.c", 839))->come_fun,    __freed_obj__ = 0, 
    _if_conditional291) {
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 836))->come_fun, "03transpile2.c", 836))->mSourceHead, "03transpile2.c", 836)),msg2_237);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_237);
    __freed_obj__ = 0;
    if((&args_238) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_238), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_code_at_function_head2(struct sInfo* info, char* code, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional292;
char* msg2_240;
va_list args_241;
int len_242;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_240, 0, sizeof(char*));
memset(&args_241, 0, sizeof(va_list));
memset(&len_242, 0, sizeof(int));
    if(_if_conditional292=((struct sInfo*)come_null_check(info, "03transpile2.c", 847))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional292) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_241,code);
    __freed_obj__ = 0;
    len_242=vasprintf(&msg2_240,code,args_241);
    __freed_obj__ = 0;
    __builtin_va_end(args_241);
    __freed_obj__ = 0;
    if(_if_conditional293=((struct sInfo*)come_null_check(info, "03transpile2.c", 858))->come_fun,    __freed_obj__ = 0, 
    _if_conditional293) {
        buffer_append_str(((struct buffer*)come_null_check(((struct sFun*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 855))->come_fun, "03transpile2.c", 855))->mSourceHead2, "03transpile2.c", 855)),msg2_240);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    free(msg2_240);
    __freed_obj__ = 0;
    if((&args_241) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_241), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_last_code_to_source(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
_Bool _if_conditional295;
char* __dec_obj39;
_Bool _if_conditional296;
char* __dec_obj40;
_Bool _if_conditional297;
char* __dec_obj41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional294=((struct sInfo*)come_null_check(info, "03transpile2.c", 866))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional294) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional295=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 870))->module, "03transpile2.c", 870))->mLastCode,    __freed_obj__ = 0, 
    _if_conditional295) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 867))->module, "03transpile2.c", 867))->mLastCode);
        __freed_obj__ = 0;
        __dec_obj39=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 868))->module, "03transpile2.c", 868))->mLastCode;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 868))->module, "03transpile2.c", 868))->mLastCode=((void*)0);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional296=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 874))->module, "03transpile2.c", 874))->mLastCode2,    __freed_obj__ = 0, 
    _if_conditional296) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 871))->module, "03transpile2.c", 871))->mLastCode2);
        __freed_obj__ = 0;
        __dec_obj40=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 872))->module, "03transpile2.c", 872))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 872))->module, "03transpile2.c", 872))->mLastCode2=((void*)0);
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional297=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 878))->module, "03transpile2.c", 878))->mLastCode3,    __freed_obj__ = 0, 
    _if_conditional297) {
        add_come_code(info,"%s",((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 875))->module, "03transpile2.c", 875))->mLastCode3);
        __freed_obj__ = 0;
        __dec_obj41=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 876))->module, "03transpile2.c", 876))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 876))->module, "03transpile2.c", 876))->mLastCode3=((void*)0);
        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void add_last_code_to_source_with_comma(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value258;
char* __dec_obj42;
_Bool _if_conditional300;
void* right_value259;
char* __dec_obj43;
_Bool _if_conditional301;
void* right_value260;
char* __dec_obj44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
    if(_if_conditional298=((struct sInfo*)come_null_check(info, "03transpile2.c", 885))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional298) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional299=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 889))->module, "03transpile2.c", 889))->mLastCode,    __freed_obj__ = 0, 
    _if_conditional299) {
        add_come_code(info,"%s ,",((char*)(right_value258=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 886))->module, "03transpile2.c", 886))->mLastCode, "03transpile2.c", 886)),0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value258;
        __freed_obj__ = 0;
        __dec_obj42=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 887))->module, "03transpile2.c", 887))->mLastCode;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 887))->module, "03transpile2.c", 887))->mLastCode=((void*)0);
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional300=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 893))->module, "03transpile2.c", 893))->mLastCode2,    __freed_obj__ = 0, 
    _if_conditional300) {
        add_come_code(info,"%s ,",((char*)(right_value259=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 890))->module, "03transpile2.c", 890))->mLastCode2, "03transpile2.c", 890)),0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value259;
        __freed_obj__ = 0;
        __dec_obj43=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 891))->module, "03transpile2.c", 891))->mLastCode2;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 891))->module, "03transpile2.c", 891))->mLastCode2=((void*)0);
        if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional301=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 897))->module, "03transpile2.c", 897))->mLastCode3,    __freed_obj__ = 0, 
    _if_conditional301) {
        add_come_code(info,"%s ,",((char*)(right_value260=string_substring(((char*)come_null_check(((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 894))->module, "03transpile2.c", 894))->mLastCode3, "03transpile2.c", 894)),0,-3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value260;
        __freed_obj__ = 0;
        __dec_obj44=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 895))->module, "03transpile2.c", 895))->mLastCode3;
        ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 895))->module, "03transpile2.c", 895))->mLastCode3=((void*)0);
        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

void add_come_last_code(struct sInfo* info, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional302;
char* msg2_243;
va_list args_244;
int len_245;
void* right_value261;
char* __dec_obj45;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_243, 0, sizeof(char*));
memset(&args_244, 0, sizeof(va_list));
memset(&len_245, 0, sizeof(int));
memset(&right_value261, 0, sizeof(void*));
    if(_if_conditional302=((struct sInfo*)come_null_check(info, "03transpile2.c", 904))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional302) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_244,msg);
    __freed_obj__ = 0;
    len_245=vasprintf(&msg2_243,msg,args_244);
    __freed_obj__ = 0;
    __builtin_va_end(args_244);
    __freed_obj__ = 0;
    __dec_obj45=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 911))->module, "03transpile2.c", 911))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 911))->module, "03transpile2.c", 911))->mLastCode=(char*)come_increment_ref_count(((char*)(right_value261=xsprintf("%s",msg2_243))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value261;
    __freed_obj__ = 0;
    free(msg2_243);
    __freed_obj__ = 0;
    if((&args_244) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_244), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code2(struct sInfo* info, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
char* msg2_246;
va_list args_247;
int len_248;
void* right_value262;
char* __dec_obj46;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_246, 0, sizeof(char*));
memset(&args_247, 0, sizeof(va_list));
memset(&len_248, 0, sizeof(int));
memset(&right_value262, 0, sizeof(void*));
    if(_if_conditional303=((struct sInfo*)come_null_check(info, "03transpile2.c", 921))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional303) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_247,msg);
    __freed_obj__ = 0;
    len_248=vasprintf(&msg2_246,msg,args_247);
    __freed_obj__ = 0;
    __builtin_va_end(args_247);
    __freed_obj__ = 0;
    __dec_obj46=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 928))->module, "03transpile2.c", 928))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 928))->module, "03transpile2.c", 928))->mLastCode2=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("%s",msg2_246))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value262;
    __freed_obj__ = 0;
    free(msg2_246);
    __freed_obj__ = 0;
    if((&args_247) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_247), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void add_come_last_code3(struct sInfo* info, const char* msg, ...){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional304;
char* msg2_249;
va_list args_250;
int len_251;
void* right_value263;
char* __dec_obj47;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&msg2_249, 0, sizeof(char*));
memset(&args_250, 0, sizeof(va_list));
memset(&len_251, 0, sizeof(int));
memset(&right_value263, 0, sizeof(void*));
    if(_if_conditional304=((struct sInfo*)come_null_check(info, "03transpile2.c", 938))->no_output_come_code,    __freed_obj__ = 0, 
    _if_conditional304) {
        __freed_obj__ = 0;
        return;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __builtin_va_start(args_250,msg);
    __freed_obj__ = 0;
    len_251=vasprintf(&msg2_249,msg,args_250);
    __freed_obj__ = 0;
    __builtin_va_end(args_250);
    __freed_obj__ = 0;
    __dec_obj47=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 945))->module, "03transpile2.c", 945))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 945))->module, "03transpile2.c", 945))->mLastCode3=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("%s",msg2_249))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value263;
    __freed_obj__ = 0;
    free(msg2_249);
    __freed_obj__ = 0;
    if((&args_250) && !__freed_obj__) { come_call_finalizer(va_list_finalize,(&args_250), (void*)0, (void*)0, 1, 0, 0, 0); }
}

void dec_stack_ptr(int value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    list$1CVALUEph_delete(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 952))->stack, "03transpile2.c", 952)),-value,-1);
    __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_delete(struct list$1CVALUEph* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
int tmp_252;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
struct list$1CVALUEph* __result117__;
_Bool _if_conditional311;
_Bool _if_conditional313;
struct list_item$1CVALUEph* it_255;
int i_256;
_Bool _while_condtional21;
_Bool _if_conditional314;
struct list_item$1CVALUEph* prev_it_257;
_Bool _if_conditional315;
_Bool _if_conditional316;
struct list_item$1CVALUEph* it_258;
int i_259;
_Bool _while_condtional22;
_Bool _if_conditional317;
_Bool _if_conditional318;
struct list_item$1CVALUEph* prev_it_260;
struct list_item$1CVALUEph* it_261;
struct list_item$1CVALUEph* head_prev_it_262;
struct list_item$1CVALUEph* tail_it_263;
int i_264;
_Bool _while_condtional23;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
struct list_item$1CVALUEph* prev_it_265;
_Bool _if_conditional322;
_Bool _if_conditional323;
struct list$1CVALUEph* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_252, 0, sizeof(int));
memset(&it_255, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_256, 0, sizeof(int));
memset(&prev_it_257, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_258, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_259, 0, sizeof(int));
memset(&prev_it_260, 0, sizeof(struct list_item$1CVALUEph*));
memset(&it_261, 0, sizeof(struct list_item$1CVALUEph*));
memset(&head_prev_it_262, 0, sizeof(struct list_item$1CVALUEph*));
memset(&tail_it_263, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_264, 0, sizeof(int));
memset(&prev_it_265, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional305=head<0,        __freed_obj__ = 0, 
        _if_conditional305) {
            head+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 513))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional306=tail<0,        __freed_obj__ = 0, 
        _if_conditional306) {
            tail+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 516))->len+1;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional307=head>tail,        __freed_obj__ = 0, 
        _if_conditional307) {
            tmp_252=tail;
            __freed_obj__ = 0;
            tail=head;
            __freed_obj__ = 0;
            head=tmp_252;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional308=head<0,        __freed_obj__ = 0, 
        _if_conditional308) {
            head=0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional309=tail>((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 533))->len,        __freed_obj__ = 0, 
        _if_conditional309) {
            tail=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 530))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional310=head==tail,        __freed_obj__ = 0, 
        _if_conditional310) {
            __result117__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional311=head==0&&tail==((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 632))->len,        __freed_obj__ = 0, 
        _if_conditional311) {
            list$1CVALUEph_reset(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 539)));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional313=head==0,            __freed_obj__ = 0, 
            _if_conditional313) {
                it_255=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 542))->head;
                __freed_obj__ = 0;
                i_256=0;
                __freed_obj__ = 0;
                while(_while_condtional21=it_255!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional21) {
                    if(_if_conditional314=i_256<tail,                    __freed_obj__ = 0, 
                    _if_conditional314) {
                        prev_it_257=it_255;
                        __freed_obj__ = 0;
                        it_255=((struct list_item$1CVALUEph*)come_null_check(it_255, "./comelang2.h", 548))->next;
                        __freed_obj__ = 0;
                        i_256++;
                        __freed_obj__ = 0;
                        if(prev_it_257 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 553))->len--;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional315=i_256==tail,                        __freed_obj__ = 0, 
                        _if_conditional315) {
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 556))->head=it_255;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 557))->head, "./comelang2.h", 557))->prev=((void*)0);
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_255=((struct list_item$1CVALUEph*)come_null_check(it_255, "./comelang2.h", 561))->next;
                            __freed_obj__ = 0;
                            i_256++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional316=tail==((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 632))->len,                __freed_obj__ = 0, 
                _if_conditional316) {
                    it_258=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 567))->head;
                    __freed_obj__ = 0;
                    i_259=0;
                    __freed_obj__ = 0;
                    while(_while_condtional22=it_258!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional22) {
                        if(_if_conditional317=i_259==head,                        __freed_obj__ = 0, 
                        _if_conditional317) {
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 571))->tail=((struct list_item$1CVALUEph*)come_null_check(it_258, "./comelang2.h", 571))->prev;
                            __freed_obj__ = 0;
                            ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 572))->tail, "./comelang2.h", 572))->next=((void*)0);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional318=i_259>=head,                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            prev_it_260=it_258;
                            __freed_obj__ = 0;
                            it_258=((struct list_item$1CVALUEph*)come_null_check(it_258, "./comelang2.h", 578))->next;
                            __freed_obj__ = 0;
                            i_259++;
                            __freed_obj__ = 0;
                            if(prev_it_260 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_260, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 583))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_258=((struct list_item$1CVALUEph*)come_null_check(it_258, "./comelang2.h", 586))->next;
                            __freed_obj__ = 0;
                            i_259++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    it_261=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 592))->head;
                    __freed_obj__ = 0;
                    head_prev_it_262=((void*)0);
                    __freed_obj__ = 0;
                    tail_it_263=((void*)0);
                    __freed_obj__ = 0;
                    i_264=0;
                    __freed_obj__ = 0;
                    while(_while_condtional23=it_261!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional23) {
                        if(_if_conditional319=i_264==head,                        __freed_obj__ = 0, 
                        _if_conditional319) {
                            head_prev_it_262=((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 601))->prev;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional320=i_264==tail,                        __freed_obj__ = 0, 
                        _if_conditional320) {
                            tail_it_263=it_261;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional321=i_264>=head&&i_264<tail,                        __freed_obj__ = 0, 
                        _if_conditional321) {
                            prev_it_265=it_261;
                            __freed_obj__ = 0;
                            it_261=((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 611))->next;
                            __freed_obj__ = 0;
                            i_264++;
                            __freed_obj__ = 0;
                            if(prev_it_265 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_265, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 616))->len--;
                            __freed_obj__ = 0;
                        }
                        else {
                            it_261=((struct list_item$1CVALUEph*)come_null_check(it_261, "./comelang2.h", 619))->next;
                            __freed_obj__ = 0;
                            i_264++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional322=head_prev_it_262!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional322) {
                        ((struct list_item$1CVALUEph*)come_null_check(head_prev_it_262, "./comelang2.h", 625))->next=tail_it_263;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional323=tail_it_263!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional323) {
                        ((struct list_item$1CVALUEph*)come_null_check(tail_it_263, "./comelang2.h", 628))->prev=head_prev_it_262;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result119__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result119__;
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_reset(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_253;
_Bool _while_condtional20;
struct list_item$1CVALUEph* prev_it_254;
struct list$1CVALUEph* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_253, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_254, 0, sizeof(struct list_item$1CVALUEph*));
                it_253=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 481))->head;
                __freed_obj__ = 0;
                while(_while_condtional20=it_253!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional20) {
                    prev_it_254=it_253;
                    __freed_obj__ = 0;
                    it_253=((struct list_item$1CVALUEph*)come_null_check(it_253, "./comelang2.h", 484))->next;
                    __freed_obj__ = 0;
                    if(prev_it_254 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_254, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 488))->head=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 489))->tail=((void*)0);
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 491))->len=0;
                __freed_obj__ = 0;
                __result118__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result118__;
                __freed_obj__ = 0;
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional312=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional312) {
                            if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

struct CVALUE* get_value_from_stack(int offset, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj48;
void* right_value268;
void* right_value272;
struct CVALUE* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    __dec_obj48=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 957))->module, "03transpile2.c", 957))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 957))->module, "03transpile2.c", 957))->mLastCode=((void*)0);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __result127__ = __result_obj__ = ((struct CVALUE*)(right_value272=CVALUE_clone(optional$2CVALUEphbool_value((come_push_stackframe("03transpile2.c", 960),((struct optional$2CVALUEphbool*)(right_value268=list$1CVALUEphp_operator_load_element(((struct sInfo*)come_null_check(info, "03transpile2.c", 960))->stack,offset))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value268;
    __freed_obj__ = 0;
    return __result127__;
    come_pop_stackframe();
    __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional324;
struct list_item$1CVALUEph* it_266;
int i_267;
_Bool _while_condtional24;
_Bool _if_conditional325;
void* right_value264;
void* right_value265;
struct optional$2CVALUEphbool* __result121__;
struct CVALUE* default_value_268;
void* right_value266;
void* right_value267;
struct optional$2CVALUEphbool* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_266, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_267, 0, sizeof(int));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&default_value_268, 0, sizeof(struct CVALUE*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
        if(_if_conditional324=position<0,        __freed_obj__ = 0, 
        _if_conditional324) {
            position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 740))->len;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        it_266=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 743))->head;
        __freed_obj__ = 0;
        i_267=0;
        __freed_obj__ = 0;
        while(_while_condtional24=it_266!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional24) {
            if(_if_conditional325=position==i_267,            __freed_obj__ = 0, 
            _if_conditional325) {
                __result121__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value265=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value264=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 747)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_266, "./comelang2.h", 747))->item),(_Bool)1)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value264;
                __freed_obj__ = 0;
                return __result121__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_266=((struct list_item$1CVALUEph*)come_null_check(it_266, "./comelang2.h", 749))->next;
            __freed_obj__ = 0;
            i_267++;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&default_value_268,0,sizeof(struct CVALUE*));
        __freed_obj__ = 0;
        __result122__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2CVALUEphbool*)(right_value267=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value266=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 755))),(struct CVALUE*)come_increment_ref_count(default_value_268),(_Bool)0))));
        if(default_value_268 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_268, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value266;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value267;
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
        if(default_value_268 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_268, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* __dec_obj49;
struct optional$2CVALUEphbool* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj49=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                    if(__dec_obj49) { come_call_finalizer(CVALUE_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result120__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result120__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional326;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional326=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional326) {
                            if(((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional327;
struct CVALUE* default_value_269;
struct CVALUE* __result123__;
struct CVALUE* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_269, 0, sizeof(struct CVALUE*));
        if(_if_conditional327=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional327) {
            __freed_obj__ = 0;
            memset(&default_value_269,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result123__ = __result_obj__ = default_value_269;
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
        }
        else {
            __result124__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result124__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional328;
struct CVALUE* __result125__;
void* right_value269;
struct CVALUE* result_270;
_Bool _if_conditional329;
void* right_value270;
char* __dec_obj50;
_Bool _if_conditional330;
void* right_value271;
struct sType* __dec_obj51;
_Bool _if_conditional331;
struct CVALUE* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value269, 0, sizeof(void*));
memset(&result_270, 0, sizeof(struct CVALUE*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
        if(_if_conditional328=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional328) {
            __result125__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result125__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_270=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value269;
        __freed_obj__ = 0;
        if(_if_conditional329=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional329) {
            __dec_obj50=((struct CVALUE*)come_null_check(result_270, "CVALUE_clone", 4))->c_value;
            ((struct CVALUE*)come_null_check(result_270, "CVALUE_clone", 4))->c_value=(char*)come_increment_ref_count(((char*)(right_value270=string_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 4))->c_value))));
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
            if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value270;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional330=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional330) {
            __dec_obj51=((struct CVALUE*)come_null_check(result_270, "CVALUE_clone", 5))->type;
            ((struct CVALUE*)come_null_check(result_270, "CVALUE_clone", 5))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(((struct CVALUE*)come_null_check(self, "CVALUE_clone", 5))->type))));
            if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
            if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value271;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional331=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional331) {
            ((struct CVALUE*)come_null_check(result_270, "CVALUE_clone", 6))->var=((struct CVALUE*)come_null_check(self, "CVALUE_clone", 6))->var;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result126__ = __result_obj__ = result_270;
        if(result_270 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_270, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result126__;
        __freed_obj__ = 0;
        if(result_270 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_270, (void*)0, (void*)0, 0, 0, 0, 0); }
}

void transpiler_clear_last_code(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __dec_obj52=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 965))->module, "03transpile2.c", 965))->mLastCode;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 965))->module, "03transpile2.c", 965))->mLastCode=((void*)0);
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj53=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 966))->module, "03transpile2.c", 966))->mLastCode2;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 966))->module, "03transpile2.c", 966))->mLastCode2=((void*)0);
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    __dec_obj54=((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 967))->module, "03transpile2.c", 967))->mLastCode3;
    ((struct sModule*)come_null_check(((struct sInfo*)come_null_check(info, "03transpile2.c", 967))->module, "03transpile2.c", 967))->mLastCode3=((void*)0);
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
}

