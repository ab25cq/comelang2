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
extern int sys_nerr;
extern const char** sys_errlist;
extern int _sys_nerr;
extern const char** _sys_errlist;
struct obstack;
typedef unsigned int wchar_t;
enum anonymous_typeY5 { P_ALL
,P_PID
,P_PGID
};
typedef enum anonymous_typeY5 idtype_t;
typedef long double _Float128;
typedef float _Float32;
typedef double _Float64;
typedef double _Float32x;
typedef long double _Float64x;
struct anonymous_typeX6
{
    int quot;
    int rem;
};
typedef struct anonymous_typeX6 div_t;
struct anonymous_typeX7
{
    long int quot;
    long int rem;
};
typedef struct anonymous_typeX7 ldiv_t;
struct anonymous_typeX8
{
    long long int quot;
    long long int rem;
};
typedef struct anonymous_typeX8 lldiv_t;
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
struct anonymous_typeX9
{
    unsigned long int __val[(1024/(8*sizeof(unsigned long int)))];
};
typedef struct anonymous_typeX9 __sigset_t;
typedef struct anonymous_typeX9 sigset_t;
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
struct anonymous_typeX10
{
    long int fds_bits[1024/(8*(int)sizeof(long int))];
};
typedef struct anonymous_typeX10 fd_set;
typedef long int fd_mask;
typedef int blksize_t;
typedef long int blkcnt_t;
typedef unsigned long int fsblkcnt_t;
typedef unsigned long int fsfilcnt_t;
typedef long int blkcnt64_t;
typedef unsigned long int fsblkcnt64_t;
typedef unsigned long int fsfilcnt64_t;
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
struct anonymous_typeX12
{
};
struct anonymous_typeX14
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ13
{
unsigned long long int __wseq;
struct anonymous_typeX14 __wseq32;
};
struct anonymous_typeX16
{
};
struct anonymous_typeX18
{
    unsigned int __low;
    unsigned int __high;
};
union anonymous_typeZ17
{
unsigned long long int __g1_start;
struct anonymous_typeX18 __g1_start32;
};
struct __pthread_cond_s
{
    union anonymous_typeZ13 anonymous_var_nameY2;
    union anonymous_typeZ17 anonymous_var_nameY4;
    unsigned int __g_refs[2];
    unsigned int __g_size[2];
    unsigned int __g1_orig_size;
    unsigned int __wrefs;
    unsigned int __g_signals[2];
};
typedef unsigned long int pthread_t;
union anonymous_typeZ19
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ19 pthread_mutexattr_t;
union anonymous_typeZ20
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ20 pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
char __size[64];
long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
union anonymous_typeZ21
{
struct __pthread_mutex_s __data;
char __size[48];
long int __align;
};
typedef union anonymous_typeZ21 pthread_mutex_t;
union anonymous_typeZ22
{
struct __pthread_cond_s __data;
char __size[48];
long long int __align;
};
typedef union anonymous_typeZ22 pthread_cond_t;
union anonymous_typeZ23
{
struct __pthread_rwlock_arch_t __data;
char __size[56];
long int __align;
};
typedef union anonymous_typeZ23 pthread_rwlock_t;
union anonymous_typeZ24
{
char __size[8];
long int __align;
};
typedef union anonymous_typeZ24 pthread_rwlockattr_t;
typedef int pthread_spinlock_t;
union anonymous_typeZ25
{
char __size[32];
long int __align;
};
typedef union anonymous_typeZ25 pthread_barrier_t;
union anonymous_typeZ26
{
char __size[8];
int __align;
};
typedef union anonymous_typeZ26 pthread_barrierattr_t;
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

struct _IO_FILE* tmpfile();

struct _IO_FILE* tmpfile64();

char* tmpnam(char* __s);

char* tmpnam_r(char* __s);

char* tempnam(const char* __dir, const char* __pfx);

int fclose(struct _IO_FILE* __stream);

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

struct _IO_FILE* popen(const char* __command, const char* __modes);

int pclose(struct _IO_FILE* __stream);

char* ctermid(char* __s);

char* cuserid(char* __s);

int obstack_printf(struct obstack* __obstack, const char* __format, ...);

int obstack_vprintf(struct obstack* __obstack, const char* __format, va_list __args);

void flockfile(struct _IO_FILE* __stream);

int ftrylockfile(struct _IO_FILE* __stream);

void funlockfile(struct _IO_FILE* __stream);

int __uflow(struct _IO_FILE* anonymous_var_nameX1);

int __overflow(struct _IO_FILE* anonymous_var_nameX2, int anonymous_var_nameX3);

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

int select(int __nfds, struct anonymous_typeX10* __readfds, struct anonymous_typeX10* __writefds, struct anonymous_typeX10* __exceptfds, struct timeval* __timeout);

int pselect(int __nfds, struct anonymous_typeX10* __readfds, struct anonymous_typeX10* __writefds, struct anonymous_typeX10* __exceptfds, const struct timespec* __timeout, const struct anonymous_typeX9* __sigmask);

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

void* reallocarray(void* __ptr, long int __nmemb, long int __size);

void free(void* __ptr);

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

struct anonymous_typeX6 div(int __numer, int __denom);

struct anonymous_typeX7 ldiv(long int __numer, long int __denom);

struct anonymous_typeX8 lldiv(long long int __numer, long long int __denom);

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
void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, _Bool check_no_pointer, struct sInfo* info);

static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
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
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
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
_Bool _if_conditional4;
_Bool _while_condtional4;
_Bool _if_conditional5;
_Bool _if_conditional6;
int line_1;
void* right_value0;
void* right_value1;
struct buffer* fname_2;
_Bool _while_condtional5;
_Bool _if_conditional7;
_Bool _while_condtional6;
_Bool _while_condtional7;
void* right_value2;
char* __dec_obj1;
_Bool _if_conditional8;
_Bool _while_condtional8;
_Bool _while_condtional9;
_Bool _while_condtional10;
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
    while(_while_condtional3=*((struct sInfo*)come_null_check(info, "05function4.c", 110))->p==35,    __freed_obj__ = 0, 
    _while_condtional3) {
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 51))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional4=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 107))->p,"pragma",strlen("pragma"))==0,        __freed_obj__ = 0, 
        _if_conditional4) {
            while(_while_condtional4=*((struct sInfo*)come_null_check(info, "05function4.c", 64))->p,            __freed_obj__ = 0, 
            _while_condtional4) {
                if(_if_conditional5=*((struct sInfo*)come_null_check(info, "05function4.c", 63))->p==10,                __freed_obj__ = 0, 
                _if_conditional5) {
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 61))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional6=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 107))->p),            __freed_obj__ = 0, 
            _if_conditional6) {
                line_1=0;
                __freed_obj__ = 0;
                fname_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 67))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
                if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value1;
                __freed_obj__ = 0;
                while(_while_condtional5=xisdigit(*((struct sInfo*)come_null_check(info, "05function4.c", 73))->p),                __freed_obj__ = 0, 
                _while_condtional5) {
                    line_1=line_1*10+(*((struct sInfo*)come_null_check(info, "05function4.c", 70))->p-48);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 71))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional7=*((struct sInfo*)come_null_check(info, "05function4.c", 89))->p==34,                __freed_obj__ = 0, 
                _if_conditional7) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 76))->p++;
                    __freed_obj__ = 0;
                    while(_while_condtional6=*((struct sInfo*)come_null_check(info, "05function4.c", 83))->p!=34,                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        buffer_append_char(((struct buffer*)come_null_check(fname_2, "05function4.c", 79)),*((struct sInfo*)come_null_check(info, "05function4.c", 79))->p);
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 80))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    while(_while_condtional7=*((struct sInfo*)come_null_check(info, "05function4.c", 86))->p!=10,                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 84))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 86))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 89))->sline=line_1;
                __freed_obj__ = 0;
                __dec_obj1=((struct sInfo*)come_null_check(info, "05function4.c", 90))->sname;
                ((struct sInfo*)come_null_check(info, "05function4.c", 90))->sname=(char*)come_increment_ref_count(((char*)(right_value2=buffer_to_string(((struct buffer*)come_null_check(fname_2, "05function4.c", 90))))));
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
                if(_if_conditional8=*((struct sInfo*)come_null_check(info, "05function4.c", 107))->p==34,                __freed_obj__ = 0, 
                _if_conditional8) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 95))->p++;
                    __freed_obj__ = 0;
                    while(_while_condtional8=*((struct sInfo*)come_null_check(info, "05function4.c", 101))->p!=34,                    __freed_obj__ = 0, 
                    _while_condtional8) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 98))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    while(_while_condtional9=*((struct sInfo*)come_null_check(info, "05function4.c", 104))->p!=10,                    __freed_obj__ = 0, 
                    _while_condtional9) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 102))->p++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 104))->p++;
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
    while(_while_condtional10=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 115))->p,"__attribute__",strlen("__attribute__"))==0,    __freed_obj__ = 0, 
    _while_condtional10) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 111))->p+=strlen("__attribute__");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_paren(info);
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
    c_3=*(((struct sInfo*)come_null_check(info, "05function4.c", 131))->p+strlen(str));
    __freed_obj__ = 0;
    __result7__ = memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 132))->p,str,strlen(str))==0&&(c_3==59||c_3==32||c_3==9||c_3==10||c_3==10);
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
_Bool _while_condtional11;
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
    buf_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function4.c", 137))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value4;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional11=(*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p>=97&&*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p<=122)||(*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p>=65&&*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p<=90)||*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p==95||(*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p>=48&&*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p<=57)||(*((struct sInfo*)come_null_check(info, "05function4.c", 145))->p==36),    __freed_obj__ = 0, 
    _while_condtional11) {
        buffer_append_char(((struct buffer*)come_null_check(buf_4, "05function4.c", 142)),*((struct sInfo*)come_null_check(info, "05function4.c", 142))->p);
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 143))->p++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    skip_spaces_and_lf(info);
    __freed_obj__ = 0;
    if(_if_conditional9=string_length(((char*)come_null_check(((char*)(right_value5=buffer_to_string(((struct buffer*)come_null_check(buf_4, "05function4.c", 152))))), "05function4.c", 152)))==0,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value5),
    (right_value5 && right_value5 != __result_obj__ && !__freed_obj__) ? right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0):0,
    __right_value_freed_obj[2] = right_value5, 
    __freed_obj__ = 0, 
    _if_conditional9) {
        err_msg(info,"unexpected character(%c). expected word character",*((struct sInfo*)come_null_check(info, "05function4.c", 148))->p);
        __freed_obj__ = 0;
        __result9__ = __result_obj__ = (come_save_stackframe("05function4.c", 149), ((struct optional$2charphbool*)(right_value8=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value7=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 149))),(char*)come_increment_ref_count(((char*)(right_value6=__builtin_string("")))),(_Bool)0))));
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
    __result10__ = __result_obj__ = ((struct optional$2charphbool*)(right_value11=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value10=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "05function4.c", 152)))),(char*)come_increment_ref_count(((char*)(right_value9=buffer_to_string(((struct buffer*)come_null_check(buf_4, "05function4.c", 152)))))),(_Bool)1)));
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
_Bool _while_condtional12;
_Bool _if_conditional11;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    while(_while_condtional12=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional12) {
        if(_if_conditional11=*((struct sInfo*)come_null_check(info, "05function4.c", 168))->p==32||*((struct sInfo*)come_null_check(info, "05function4.c", 168))->p==9,        __freed_obj__ = 0, 
        _if_conditional11) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 159))->p++;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional12=*((struct sInfo*)come_null_check(info, "05function4.c", 168))->p==10,            __freed_obj__ = 0, 
            _if_conditional12) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 162))->p++;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 163))->sline++;
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
    o2_saved_5=(struct list$1sTypeph*)come_increment_ref_count((((struct sType*)come_null_check(type, "05function4.c", 179))->mGenericsTypes)),it_8=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_5), "05function4.c", 179))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_5), "05function4.c", 179))) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    it_8=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_5), "05function4.c", 179))) ,    __freed_obj__ = 0, 
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
    if(_if_conditional34=((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "05function4.c", 183))->mClass, "05function4.c", 183))->mGenerics,    __freed_obj__ = 0, 
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
_Bool _while_condtional13;
struct list_item$1sTypeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sTypeph*));
                it_11=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                __freed_obj__ = 0;
                while(_while_condtional13=it_11!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional13) {
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
_Bool _while_condtional14;
struct list_item$1sNodeph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1sNodeph*));
                                        it_13=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional14=it_13!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional14) {
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
_Bool _while_condtional15;
struct list_item$1charph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1charph*));
                                        it_15=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional15=it_15!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional15) {
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
_Bool _while_condtional16;
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
    param_types_17=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value13=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 188))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13;
    __freed_obj__ = 0;
    param_names_18=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value15=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value14=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 189))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value15;
    __freed_obj__ = 0;
    param_default_parametors_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value17=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value16=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function4.c", 190))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value16;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value17;
    __freed_obj__ = 0;
    var_args_20=(_Bool)0;
    __freed_obj__ = 0;
    optional$2intbool_value((come_push_stackframe("05function4.c", 193),((struct optional$2intbool*)(right_value18=expected_next_character(40,info)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value18;
    __freed_obj__ = 0;
    void_param_22=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_23=((struct sInfo*)come_null_check(info, "05function4.c", 198))->p;
        __freed_obj__ = 0;
        sline_24=((struct sInfo*)come_null_check(info, "05function4.c", 199))->sline;
        __freed_obj__ = 0;
        if(_if_conditional36=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 210))->p,"void",strlen("void"))==0,        __freed_obj__ = 0, 
        _if_conditional36) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 202))->p+=strlen("void");
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional37=*((struct sInfo*)come_null_check(info, "05function4.c", 208))->p==41,            __freed_obj__ = 0, 
            _if_conditional37) {
                void_param_22=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 210))->p=p_23;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 211))->sline=sline_24;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional38=void_param_22,    __freed_obj__ = 0, 
    _if_conditional38) {
        if(_if_conditional39=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 224))->p,"void",strlen("void"))==0,        __freed_obj__ = 0, 
        _if_conditional39) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 216))->p+=strlen("void");
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional40=*((struct sInfo*)come_null_check(info, "05function4.c", 223))->p==41,            __freed_obj__ = 0, 
            _if_conditional40) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 220))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        while(_while_condtional16=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional16) {
            if(_if_conditional41=*((struct sInfo*)come_null_check(info, "05function4.c", 233))->p==41,            __freed_obj__ = 0, 
            _if_conditional41) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 228))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            multiple_assgin_var1=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 235),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value19=parse_type(info,(_Bool)1,(_Bool)0)))));
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
                printf("%s %d: failed to function parametor\n",((struct sInfo*)come_null_check(info, "05function4.c", 238))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 238))->sline);
                __freed_obj__ = 0;
                __result29__ = __result_obj__ = (come_save_stackframe("05function4.c", 239), ((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value23=optional$2tuple4$4voidpvoidpvoidpboolphbool_initialize(((struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)(right_value22=(struct optional$2tuple4$4voidpvoidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4voidpvoidpvoidpboolphbool)*(1), "05function4.c", 239))),(struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value21=tuple4$4voidpvoidpvoidpbool_initialize((struct tuple4$4voidpvoidpvoidpbool*)come_increment_ref_count(((struct tuple4$4voidpvoidpvoidpbool*)(right_value20=(struct tuple4$4voidpvoidpvoidpbool*)come_calloc(1, sizeof(struct tuple4$4voidpvoidpvoidpbool)*(1), "05function4.c", 239)))),((void*)0),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0))));
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
            param_type2_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=solve_generics(param_type_26,((struct sInfo*)come_null_check(info, "05function4.c", 242))->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value24;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(param_type2_29, "05function4.c", 244))->mFunctionParam=(_Bool)1;
            __freed_obj__ = 0;
            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(param_types_17, "05function4.c", 246)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(param_type2_29)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value62;
            __freed_obj__ = 0;
            list$1charph_push_back(((struct list$1charph*)come_null_check(param_names_18, "05function4.c", 247)),(char*)come_increment_ref_count(((char*)(right_value66=string_clone(param_name_27)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value66;
            __freed_obj__ = 0;
            if(_if_conditional122=*((struct sInfo*)come_null_check(info, "05function4.c", 276))->p==61,            __freed_obj__ = 0, 
            _if_conditional122) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 250))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                p_54=((struct sInfo*)come_null_check(info, "05function4.c", 255))->p;
                __freed_obj__ = 0;
                no_comma_55=((struct sInfo*)come_null_check(info, "05function4.c", 257))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 258))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                node_56=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value67=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, ((struct sNode*)right_value67)->finalize, ((struct sNode*)right_value67)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value67;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 262))->no_comma=no_comma_55;
                __freed_obj__ = 0;
                p2_57=((struct sInfo*)come_null_check(info, "05function4.c", 264))->p;
                __freed_obj__ = 0;
                char buf_58[p2_57-p_54+1];
                memset(&buf_58, 0, sizeof(char)                *(p2_57-p_54+1)                );
                __freed_obj__ = 0;
                memcpy(buf_58,p_54,p2_57-p_54);
                __freed_obj__ = 0;
                buf_58[p2_57-p_54]=0;
                __freed_obj__ = 0;
                list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_19, "05function4.c", 270)),(char*)come_increment_ref_count(((char*)(right_value68=__builtin_string(buf_58)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value68;
                __freed_obj__ = 0;
                if(node_56 && !__freed_obj__) { node_56 = come_decrement_ref_count(node_56, ((struct sNode*)node_56)->finalize, ((struct sNode*)node_56)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                list$1charph_push_back(((struct list$1charph*)come_null_check(param_default_parametors_19, "05function4.c", 273)),((void*)0));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional123=*((struct sInfo*)come_null_check(info, "05function4.c", 296))->p==44,            __freed_obj__ = 0, 
            _if_conditional123) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 279))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional124=memcmp(((struct sInfo*)come_null_check(info, "05function4.c", 290))->p,"...",strlen("..."))==0,                __freed_obj__ = 0, 
                _if_conditional124) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 283))->p+=strlen("...");
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    var_args_20=(_Bool)1;
                    __freed_obj__ = 0;
                    optional$2intbool_value((come_push_stackframe("05function4.c", 287),((struct optional$2intbool*)(right_value69=expected_next_character(41,info)))));
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
                if(_if_conditional125=*((struct sInfo*)come_null_check(info, "05function4.c", 296))->p==41,                __freed_obj__ = 0, 
                _if_conditional125) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 292))->p++;
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
    __result54__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value82=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_initialize((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_increment_ref_count(((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value81=(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool)*(1), "05function4.c", 299)))),(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value80=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count(((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(right_value70=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05function4.c", 299)))),(struct list$1sTypeph*)come_increment_ref_count(param_types_17),(struct list$1charph*)come_increment_ref_count(param_names_18),(struct list$1charph*)come_increment_ref_count(param_default_parametors_19),var_args_20)))),(_Bool)1)));
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
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1848))->v1=v1;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1849))->v2=v2;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1850))->v3=v3;
                    __freed_obj__ = 0;
                    ((struct tuple4$4voidpvoidpvoidpbool*)come_null_check(self, "./comelang2.h", 1851))->v4=v4;
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
_Bool _while_condtional17;
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
                        while(_while_condtional17=it_36!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional17) {
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
_Bool _while_condtional18;
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
                        while(_while_condtional18=it_41!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional18) {
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
_Bool _while_condtional19;
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
                        while(_while_condtional19=it_47!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional19) {
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
        __dec_obj32=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1848))->v1;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1848))->v1=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value74=list$1sTypeph_clone(v1))));
        if(__dec_obj32) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value74;
        __freed_obj__ = 0;
        __dec_obj33=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1849))->v2;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1849))->v2=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charph_clone(v2))));
        if(__dec_obj33) { come_call_finalizer(list$1charph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value78;
        __freed_obj__ = 0;
        __dec_obj34=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1850))->v3;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1850))->v3=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value79=list$1charph_clone(v3))));
        if(__dec_obj34) { come_call_finalizer(list$1charph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value79;
        __freed_obj__ = 0;
        ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_null_check(self, "./comelang2.h", 1851))->v4=v4;
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
_Bool _while_condtional20;
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
            while(_while_condtional20=it_60!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional20) {
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
_Bool _while_condtional21;
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
            while(_while_condtional21=it_62!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional21) {
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

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, _Bool check_no_pointer, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* left_no_solved_generics_type_63;
struct sType* right_no_solved_generics_type_64;
_Bool _if_conditional135;
_Bool _if_conditional136;
_Bool _if_conditional137;
int i_65;
_Bool _for_condtionalA2;
void* right_value87;
void* right_value88;
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
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_no_solved_generics_type_63, 0, sizeof(struct sType*));
memset(&right_no_solved_generics_type_64, 0, sizeof(struct sType*));
memset(&i_65, 0, sizeof(int));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
    left_no_solved_generics_type_63=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 304))->mNoSolvedGenericsType, "05function4.c", 304))->v1;
    __freed_obj__ = 0;
    right_no_solved_generics_type_64=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 305))->mNoSolvedGenericsType, "05function4.c", 305))->v1;
    __freed_obj__ = 0;
    if(_if_conditional135=left_no_solved_generics_type_63&&right_no_solved_generics_type_64,    __freed_obj__ = 0, 
    _if_conditional135) {
        if(_if_conditional136=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_63, "05function4.c", 322))->mGenericsTypes, "05function4.c", 322)))>0,        __freed_obj__ = 0, 
        _if_conditional136) {
            if(_if_conditional137=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_63, "05function4.c", 316))->mGenericsTypes, "05function4.c", 316)))!=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_64, "05function4.c", 316))->mGenericsTypes, "05function4.c", 316))),            __freed_obj__ = 0, 
            _if_conditional137) {
                err_msg(info,"generics type parametor number error");
                __freed_obj__ = 0;
                printf("left type generics type parametor number is %d\n",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_63, "05function4.c", 311))->mGenericsTypes, "05function4.c", 311))));
                __freed_obj__ = 0;
                printf("right type generics type parametor number is %d\n",list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(right_no_solved_generics_type_64, "05function4.c", 312))->mGenericsTypes, "05function4.c", 312))));
                __freed_obj__ = 0;
                exit(2);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            for(
            i_65=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            i_65<list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_no_solved_generics_type_63, "05function4.c", 320))->mGenericsTypes, "05function4.c", 320))) ,            __freed_obj__ = 0, 
            _for_condtionalA2;            i_65++ ,            __freed_obj__ = 0, 
            0            ){
                come_clear_stackframe();
                come_clear_stackframe();
                check_assign_type(msg,optional$2sTypephbool_value((come_push_stackframe("05function4.c", 317),((struct optional$2sTypephbool*)(right_value87=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(left_no_solved_generics_type_63, "05function4.c", 317))->mGenericsTypes,i_65))))),optional$2sTypephbool_value((come_push_stackframe("05function4.c", 317),((struct optional$2sTypephbool*)(right_value88=list$1sTypephp_operator_load_element(((struct sType*)come_null_check(right_no_solved_generics_type_64, "05function4.c", 317))->mGenericsTypes,i_65))))),(_Bool)1,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value87;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value88;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            check_assign_type(msg,left_no_solved_generics_type_63,right_no_solved_generics_type_64,(_Bool)0,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional142=check_no_pointer,        __freed_obj__ = 0, 
        _if_conditional142) {
            if(_if_conditional143=((struct sType*)come_null_check(left_type, "05function4.c", 356))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional143) {
                if(_if_conditional144=((struct sType*)come_null_check(right_type, "05function4.c", 343))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional144) {
                    if(_if_conditional145=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 336))->mClass, "05function4.c", 336))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 336))->mClass, "05function4.c", 336))->mName,"void"),                    __freed_obj__ = 0, 
                    _if_conditional145) {
                    }
                    else {
                        if(_if_conditional146=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 336))->mClass, "05function4.c", 336))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 336))->mClass, "05function4.c", 336))->mName,"va_list"),                        __freed_obj__ = 0, 
                        _if_conditional146) {
                        }
                        else {
                            if(_if_conditional147=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 336))->mClass, "05function4.c", 336))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 336))->mClass, "05function4.c", 336))->mName),                            __freed_obj__ = 0, 
                            _if_conditional147) {
                                err_msg(info,"type error1");
                                __freed_obj__ = 0;
                                printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 332))->mClass, "05function4.c", 332))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 332))->mPointerNum);
                                __freed_obj__ = 0;
                                printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 333))->mClass, "05function4.c", 333))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 333))->mPointerNum);
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
                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 339))->mClass, "05function4.c", 339))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 339))->mPointerNum);
                    __freed_obj__ = 0;
                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 340))->mClass, "05function4.c", 340))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 340))->mPointerNum);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional148=((struct sType*)come_null_check(left_type, "05function4.c", 356))->mPointerNum==0&&((struct sType*)come_null_check(right_type, "05function4.c", 356))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional148) {
                    err_msg(info,"type error3");
                    __freed_obj__ = 0;
                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 346))->mClass, "05function4.c", 346))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 346))->mPointerNum);
                    __freed_obj__ = 0;
                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 347))->mClass, "05function4.c", 347))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 347))->mPointerNum);
                    __freed_obj__ = 0;
                    exit(2);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional149=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 356))->mClass, "05function4.c", 356))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 356))->mClass, "05function4.c", 356))->mName),                    __freed_obj__ = 0, 
                    _if_conditional149) {
                        err_msg(info,"type error4");
                        __freed_obj__ = 0;
                        printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 352))->mClass, "05function4.c", 352))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 352))->mPointerNum);
                        __freed_obj__ = 0;
                        printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 353))->mClass, "05function4.c", 353))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 353))->mPointerNum);
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
            if(_if_conditional150=((struct sType*)come_null_check(left_type, "05function4.c", 401))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional150) {
                if(_if_conditional151=((struct sType*)come_null_check(right_type, "05function4.c", 400))->mPointerNum>0,                __freed_obj__ = 0, 
                _if_conditional151) {
                    if(_if_conditional152=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 387))->mClass, "05function4.c", 387))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 387))->mClass, "05function4.c", 387))->mName,"void"),                    __freed_obj__ = 0, 
                    _if_conditional152) {
                    }
                    else {
                        if(_if_conditional153=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 387))->mClass, "05function4.c", 387))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 387))->mClass, "05function4.c", 387))->mName,"va_list"),                        __freed_obj__ = 0, 
                        _if_conditional153) {
                        }
                        else {
                            if(_if_conditional154=string_operator_not_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 387))->mClass, "05function4.c", 387))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 387))->mClass, "05function4.c", 387))->mName),                            __freed_obj__ = 0, 
                            _if_conditional154) {
                                err_msg(info,"type error5");
                                __freed_obj__ = 0;
                                printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 373))->mClass, "05function4.c", 373))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 373))->mPointerNum);
                                __freed_obj__ = 0;
                                printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 374))->mClass, "05function4.c", 374))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 374))->mPointerNum);
                                __freed_obj__ = 0;
                                exit(2);
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional155=((struct sType*)come_null_check(left_type, "05function4.c", 387))->mPointerNum!=((struct sType*)come_null_check(right_type, "05function4.c", 387))->mPointerNum,                                __freed_obj__ = 0, 
                                _if_conditional155) {
                                    printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 378))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 378))->sline);
                                    __freed_obj__ = 0;
                                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 379))->mClass, "05function4.c", 379))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 379))->mPointerNum);
                                    __freed_obj__ = 0;
                                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 380))->mClass, "05function4.c", 380))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 380))->mPointerNum);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional156=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 387))->mArrayNum, "05function4.c", 387)))>0,                                    __freed_obj__ = 0, 
                                    _if_conditional156) {
                                        printf("%s %d: warning invalid pointer number\n",((struct sInfo*)come_null_check(info, "05function4.c", 383))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 383))->sline);
                                        __freed_obj__ = 0;
                                        printf("left type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 384))->mClass, "05function4.c", 384))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 384))->mPointerNum,list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 384))->mArrayNum, "05function4.c", 384))));
                                        __freed_obj__ = 0;
                                        printf("right type is %s pointer num %d array dimetion num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 385))->mClass, "05function4.c", 385))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 385))->mPointerNum,list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 385))->mArrayNum, "05function4.c", 385))));
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
                    if(_if_conditional157=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"void")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"void"),                    __freed_obj__ = 0, 
                    _if_conditional157) {
                    }
                    else {
                        if(_if_conditional158=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"va_list"),                        __freed_obj__ = 0, 
                        _if_conditional158) {
                        }
                        else {
                            if(_if_conditional159=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"__builtin_va_list")||string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"__builtin_va_list"),                            __freed_obj__ = 0, 
                            _if_conditional159) {
                            }
                            else {
                                if(_if_conditional160=!(string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"lambda")&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 400))->mClass, "05function4.c", 400))->mName,"lambda"))&&((struct sType*)come_null_check(right_type, "05function4.c", 400))->mPointerNum==0,                                __freed_obj__ = 0, 
                                _if_conditional160) {
                                    err_msg(info,"type error6");
                                    __freed_obj__ = 0;
                                    printf("left type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type, "05function4.c", 396))->mClass, "05function4.c", 396))->mName,((struct sType*)come_null_check(left_type, "05function4.c", 396))->mPointerNum);
                                    __freed_obj__ = 0;
                                    printf("right type is %s pointer num %d\n",((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type, "05function4.c", 397))->mClass, "05function4.c", 397))->mName,((struct sType*)come_null_check(right_type, "05function4.c", 397))->mPointerNum);
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
struct list_item$1sTypeph* it_66;
int i_67;
_Bool _while_condtional22;
_Bool _if_conditional139;
void* right_value83;
void* right_value84;
struct optional$2sTypephbool* __result57__;
struct sType* default_value_68;
void* right_value85;
void* right_value86;
struct optional$2sTypephbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_66, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_67, 0, sizeof(int));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&default_value_68, 0, sizeof(struct sType*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
                    if(_if_conditional138=position<0,                    __freed_obj__ = 0, 
                    _if_conditional138) {
                        position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_66=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
                    __freed_obj__ = 0;
                    i_67=0;
                    __freed_obj__ = 0;
                    while(_while_condtional22=it_66!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional22) {
                        if(_if_conditional139=position==i_67,                        __freed_obj__ = 0, 
                        _if_conditional139) {
                            __result57__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value84=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value83=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_66, "./comelang2.h", 742))->item),(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
                            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value83;
                            __freed_obj__ = 0;
                            return __result57__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_66=((struct list_item$1sTypeph*)come_null_check(it_66, "./comelang2.h", 744))->next;
                        __freed_obj__ = 0;
                        i_67++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&default_value_68,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result58__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value86=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value85=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_68),(_Bool)0))));
                    if(default_value_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
                    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value85;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value86);
                    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value86;
                    __freed_obj__ = 0;
                    return __result58__;
                    __freed_obj__ = 0;
                    if(default_value_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct sType* default_value_69;
struct sType* __result59__;
struct sType* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_69, 0, sizeof(struct sType*));
                    if(_if_conditional141=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional141) {
                        __freed_obj__ = 0;
                        memset(&default_value_69,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        __result59__ = __result_obj__ = default_value_69;
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

static int list$1sNodeph_length(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __result61__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 410))->len;
                                        __freed_obj__ = 0;
                                        return __result61__;
                                        __freed_obj__ = 0;
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
struct sType* result_type_70;
_Bool _if_conditional161;
char* var_name_71;
char* p_72;
int sline_73;
_Bool _if_conditional162;
void* right_value90;
char* word_75;
_Bool _if_conditional164;
_Bool between_brace_76;
char* p_77;
int sline_78;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value91;
char* word_79;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _while_condtional23;
char* p_80;
int sline_81;
_Bool _if_conditional170;
void* right_value92;
char* word_82;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value93;
char* __dec_obj37;
static int num_anonymous_var_name_83=0;
void* right_value94;
char* __dec_obj38;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool no_comma_84;
void* right_value95;
struct sNode* node_85;
struct sNode* __dec_obj39;
_Bool _while_condtional24;
char* p_86;
int sline_87;
_Bool _if_conditional176;
void* right_value96;
char* word_88;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value97;
struct sNode* node_89;
void* right_value101;
void* right_value102;
void* right_value105;
struct tuple2$2sTypephcharph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&result_type_70, 0, sizeof(struct sType*));
memset(&var_name_71, 0, sizeof(char*));
memset(&p_72, 0, sizeof(char*));
memset(&sline_73, 0, sizeof(int));
memset(&right_value90, 0, sizeof(void*));
memset(&word_75, 0, sizeof(char*));
memset(&between_brace_76, 0, sizeof(_Bool));
memset(&p_77, 0, sizeof(char*));
memset(&sline_78, 0, sizeof(int));
memset(&right_value91, 0, sizeof(void*));
memset(&word_79, 0, sizeof(char*));
memset(&p_80, 0, sizeof(char*));
memset(&sline_81, 0, sizeof(int));
memset(&right_value92, 0, sizeof(void*));
memset(&word_82, 0, sizeof(char*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&no_comma_84, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&node_85, 0, sizeof(struct sNode*));
memset(&p_86, 0, sizeof(char*));
memset(&sline_87, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&word_88, 0, sizeof(char*));
memset(&right_value97, 0, sizeof(void*));
memset(&node_89, 0, sizeof(struct sNode*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
    result_type_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(base_type_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    if(_if_conditional161=!first,    __freed_obj__ = 0, 
    _if_conditional161) {
        ((struct sType*)come_null_check(result_type_70, "05function4.c", 407))->mPointerNum=0;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var_name_71=((void*)0);
    __freed_obj__ = 0;
    {
        p_72=((struct sInfo*)come_null_check(info, "05function4.c", 412))->p;
        __freed_obj__ = 0;
        sline_73=((struct sInfo*)come_null_check(info, "05function4.c", 413))->sline;
        __freed_obj__ = 0;
        if(_if_conditional162=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 429))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 429))->p==95,        __freed_obj__ = 0, 
        _if_conditional162) {
            come_clear_stackframe();
            word_75=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 416),((struct optional$2charphbool*)(right_value90=parse_word(info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value90;
            __freed_obj__ = 0;
            if(_if_conditional164=string_operator_equals(word_75,"const")||string_operator_equals(word_75,"__restrict")||string_operator_equals(word_75,"restrict")||string_operator_equals(word_75,"__user")||string_operator_equals(word_75,"volatile")||string_operator_equals(word_75,"_Nonnull")||string_operator_equals(word_75,"_Nullable")||string_operator_equals(word_75,"_Null_unspecified")||string_operator_equals(word_75,"__user"),            __freed_obj__ = 0, 
            _if_conditional164) {
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 421))->p=p_72;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 422))->sline=sline_73;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_75 && !__freed_obj__) { word_75 = come_decrement_ref_count(word_75, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "05function4.c", 426))->p=p_72;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function4.c", 427))->sline=sline_73;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    between_brace_76=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_77=((struct sInfo*)come_null_check(info, "05function4.c", 433))->p;
        __freed_obj__ = 0;
        sline_78=((struct sInfo*)come_null_check(info, "05function4.c", 434))->sline;
        __freed_obj__ = 0;
        if(_if_conditional165=*((struct sInfo*)come_null_check(info, "05function4.c", 456))->p==40,        __freed_obj__ = 0, 
        _if_conditional165) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 437))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            if(_if_conditional166=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 454))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 454))->p==95,            __freed_obj__ = 0, 
            _if_conditional166) {
                come_clear_stackframe();
                word_79=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 441),((struct optional$2charphbool*)(right_value91=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value91;
                __freed_obj__ = 0;
                if(_if_conditional167=is_type_name(word_79,info),                __freed_obj__ = 0, 
                _if_conditional167) {
                }
                else {
                    if(_if_conditional168=*((struct sInfo*)come_null_check(info, "05function4.c", 453))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional168) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 446))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional169=*((struct sInfo*)come_null_check(info, "05function4.c", 452))->p!=40,                        __freed_obj__ = 0, 
                        _if_conditional169) {
                            between_brace_76=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_79 && !__freed_obj__) { word_79 = come_decrement_ref_count(word_79, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 456))->p=p_77;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 457))->sline=sline_78;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional23=*((struct sInfo*)come_null_check(info, "05function4.c", 487))->p==42,    __freed_obj__ = 0, 
    _while_condtional23) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 462))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        {
            p_80=((struct sInfo*)come_null_check(info, "05function4.c", 466))->p;
            __freed_obj__ = 0;
            sline_81=((struct sInfo*)come_null_check(info, "05function4.c", 467))->sline;
            __freed_obj__ = 0;
            if(_if_conditional170=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 483))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 483))->p==95,            __freed_obj__ = 0, 
            _if_conditional170) {
                come_clear_stackframe();
                word_82=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 470),((struct optional$2charphbool*)(right_value92=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value92;
                __freed_obj__ = 0;
                if(_if_conditional171=string_operator_equals(word_82,"const")||string_operator_equals(word_82,"__restrict")||string_operator_equals(word_82,"restrict")||string_operator_equals(word_82,"__user")||string_operator_equals(word_82,"volatile")||string_operator_equals(word_82,"_Nonnull")||string_operator_equals(word_82,"_Nullable")||string_operator_equals(word_82,"_Null_unspecified")||string_operator_equals(word_82,"__user"),                __freed_obj__ = 0, 
                _if_conditional171) {
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 475))->p=p_80;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 476))->sline=sline_81;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_82 && !__freed_obj__) { word_82 = come_decrement_ref_count(word_82, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 480))->p=p_80;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 481))->sline=sline_81;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(result_type_70, "05function4.c", 485))->mPointerNum++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if(_if_conditional172=between_brace_76&&*((struct sInfo*)come_null_check(info, "05function4.c", 494))->p==40,    __freed_obj__ = 0, 
    _if_conditional172) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 490))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional173=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 503))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 503))->p==95,    __freed_obj__ = 0, 
    _if_conditional173) {
        come_clear_stackframe();
        __dec_obj37=var_name_71;
        var_name_71=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 495),((struct optional$2charphbool*)(right_value93=parse_word(info))))));
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = 0;
    }
    else {
        __freed_obj__ = 0;
        num_anonymous_var_name_83++;
        __freed_obj__ = 0;
        __dec_obj38=var_name_71;
        var_name_71=(char*)come_increment_ref_count(((char*)(right_value94=xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_83))));
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value94;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional174=between_brace_76&&*((struct sInfo*)come_null_check(info, "05function4.c", 508))->p==41,    __freed_obj__ = 0, 
    _if_conditional174) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 504))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional175=*((struct sInfo*)come_null_check(info, "05function4.c", 520))->p==58,    __freed_obj__ = 0, 
    _if_conditional175) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 509))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        no_comma_84=((struct sInfo*)come_null_check(info, "05function4.c", 512))->no_comma;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 513))->no_comma=(_Bool)1;
        __freed_obj__ = 0;
        node_85=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
        if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value95;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 515))->no_comma=no_comma_84;
        __freed_obj__ = 0;
        __dec_obj39=((struct sType*)come_null_check(result_type_70, "05function4.c", 517))->mSizeNum;
        ((struct sType*)come_null_check(result_type_70, "05function4.c", 517))->mSizeNum=(struct sNode*)come_increment_ref_count(node_85);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0); }
        __freed_obj__ = 0;
        if(node_85 && !__freed_obj__) { node_85 = come_decrement_ref_count(node_85, ((struct sNode*)node_85)->finalize, ((struct sNode*)node_85)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    while(_while_condtional24=*((struct sInfo*)come_null_check(info, "05function4.c", 561))->p==91,    __freed_obj__ = 0, 
    _while_condtional24) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 521))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        {
            p_86=((struct sInfo*)come_null_check(info, "05function4.c", 526))->p;
            __freed_obj__ = 0;
            sline_87=((struct sInfo*)come_null_check(info, "05function4.c", 527))->sline;
            __freed_obj__ = 0;
            if(_if_conditional176=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 543))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 543))->p==95,            __freed_obj__ = 0, 
            _if_conditional176) {
                come_clear_stackframe();
                word_88=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 530),((struct optional$2charphbool*)(right_value96=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value96;
                __freed_obj__ = 0;
                if(_if_conditional177=string_operator_equals(word_88,"const")||string_operator_equals(word_88,"__restrict")||string_operator_equals(word_88,"restrict")||string_operator_equals(word_88,"__user")||string_operator_equals(word_88,"volatile")||string_operator_equals(word_88,"_Nonnull")||string_operator_equals(word_88,"_Nullable")||string_operator_equals(word_88,"_Null_unspecified")||string_operator_equals(word_88,"__user"),                __freed_obj__ = 0, 
                _if_conditional177) {
                }
                else {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 535))->p=p_86;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 536))->sline=sline_87;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_88 && !__freed_obj__) { word_88 = come_decrement_ref_count(word_88, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                ((struct sInfo*)come_null_check(info, "05function4.c", 540))->p=p_86;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 541))->sline=sline_87;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional178=*((struct sInfo*)come_null_check(info, "05function4.c", 552))->p==93,        __freed_obj__ = 0, 
        _if_conditional178) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 546))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_70, "05function4.c", 549))->mPointerNum++;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        node_89=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value97=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
        if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, ((struct sNode*)right_value97)->finalize, ((struct sNode*)right_value97)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value97;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_70, "05function4.c", 555))->mArrayNum, "05function4.c", 555)),(struct sNode*)come_increment_ref_count(node_89));
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("05function4.c", 558),((struct optional$2intbool*)(right_value101=expected_next_character(93,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value101;
        __freed_obj__ = 0;
        if(node_89 && !__freed_obj__) { node_89 = come_decrement_ref_count(node_89, ((struct sNode*)node_89)->finalize, ((struct sNode*)node_89)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    __result66__ = __result_obj__ = ((struct tuple2$2sTypephcharph*)(right_value105=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count(((struct tuple2$2sTypephcharph*)(right_value102=(struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05function4.c", 561)))),(struct sType*)come_increment_ref_count(result_type_70),(char*)come_increment_ref_count(var_name_71))));
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_70 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value102;
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
    if(base_type_name && !__freed_obj__) { come_call_finalizer(sType_finalize,base_type_name, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(result_type_70 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_71 && !__freed_obj__) { var_name_71 = come_decrement_ref_count(var_name_71, (void*)0, (void*)0, 0, 0, 0); }
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
char* default_value_74;
char* __result62__;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_74, 0, sizeof(char*));
                if(_if_conditional163=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional163) {
                    __freed_obj__ = 0;
                    memset(&default_value_74,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result62__ = __result_obj__ = default_value_74;
                    __freed_obj__ = 0;
                    return __result62__;
                    __freed_obj__ = 0;
                }
                else {
                    __result63__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result63__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional179;
void* right_value98;
struct list_item$1sNodeph* litem_90;
struct sNode* __dec_obj40;
_Bool _if_conditional180;
void* right_value99;
struct list_item$1sNodeph* litem_91;
struct sNode* __dec_obj41;
void* right_value100;
struct list_item$1sNodeph* litem_92;
struct sNode* __dec_obj42;
struct list$1sNodeph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&litem_90, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value99, 0, sizeof(void*));
memset(&litem_91, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value100, 0, sizeof(void*));
memset(&litem_92, 0, sizeof(struct list_item$1sNodeph*));
            if(_if_conditional179=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional179) {
                litem_90=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value98=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 272))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_90, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1sNodeph*)come_null_check(litem_90, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj40=((struct list_item$1sNodeph*)come_null_check(litem_90, "./comelang2.h", 276))->item;
                ((struct list_item$1sNodeph*)come_null_check(litem_90, "./comelang2.h", 276))->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_90;
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 279))->head=litem_90;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional180=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional180) {
                    litem_91=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value99=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value99;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_91, "./comelang2.h", 284))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_91, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj41=((struct list_item$1sNodeph*)come_null_check(litem_91, "./comelang2.h", 286))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_91, "./comelang2.h", 286))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_91;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_91;
                    __freed_obj__ = 0;
                }
                else {
                    litem_92=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value100=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
                    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value100;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_92, "./comelang2.h", 294))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_92, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj42=((struct list_item$1sNodeph*)come_null_check(litem_92, "./comelang2.h", 296))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_92, "./comelang2.h", 296))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_92;
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_92;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result64__ = __result_obj__ = self;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result64__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
struct sType* __dec_obj43;
void* right_value104;
char* __dec_obj44;
struct tuple2$2sTypephcharph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
        __dec_obj43=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1773))->v1;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1773))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_clone(v1))));
        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = 0;
        __dec_obj44=((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1774))->v2;
        ((struct tuple2$2sTypephcharph*)come_null_check(self, "./comelang2.h", 1774))->v2=(char*)come_increment_ref_count(((char*)(right_value104=string_clone(v2))));
        if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value104;
        __freed_obj__ = 0;
        __result65__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
_Bool _if_conditional182;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional181=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional181) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional182=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional182) {
                if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

void skip_pointer_attribute(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* p_93;
int sline_94;
_Bool _if_conditional183;
void* right_value106;
char* word_95;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_93, 0, sizeof(char*));
memset(&sline_94, 0, sizeof(int));
memset(&right_value106, 0, sizeof(void*));
memset(&word_95, 0, sizeof(char*));
    p_93=((struct sInfo*)come_null_check(info, "05function4.c", 566))->p;
    __freed_obj__ = 0;
    sline_94=((struct sInfo*)come_null_check(info, "05function4.c", 567))->sline;
    __freed_obj__ = 0;
    if(_if_conditional183=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 583))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 583))->p==95,    __freed_obj__ = 0, 
    _if_conditional183) {
        come_clear_stackframe();
        word_95=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 570),((struct optional$2charphbool*)(right_value106=parse_word(info))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value106;
        __freed_obj__ = 0;
        if(_if_conditional184=string_operator_equals(word_95,"const")||string_operator_equals(word_95,"__restrict")||string_operator_equals(word_95,"restrict")||string_operator_equals(word_95,"__user")||string_operator_equals(word_95,"volatile")||string_operator_equals(word_95,"_Nonnull")||string_operator_equals(word_95,"_Nullable")||string_operator_equals(word_95,"_Null_unspecified")||string_operator_equals(word_95,"__user"),        __freed_obj__ = 0, 
        _if_conditional184) {
        }
        else {
            ((struct sInfo*)come_null_check(info, "05function4.c", 575))->p=p_93;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "05function4.c", 576))->sline=sline_94;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(word_95 && !__freed_obj__) { word_95 = come_decrement_ref_count(word_95, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        ((struct sInfo*)come_null_check(info, "05function4.c", 580))->p=p_93;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 581))->sline=sline_94;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

struct optional$2tuple3$3sTypephcharphboolphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* head_96;
int head_sline_97;
void* right_value107;
char* type_name_98;
_Bool _if_conditional185;
void* right_value108;
char* __dec_obj45;
_Bool constant_99;
_Bool static__100;
_Bool exception__101;
_Bool volatile__102;
_Bool register__103;
_Bool unsigned__104;
_Bool long__105;
_Bool long_long_106;
_Bool short__107;
_Bool restrict__108;
_Bool struct__109;
_Bool union__110;
_Bool enum__111;
_Bool no_heap_112;
_Bool extern__113;
_Bool inline__114;
_Bool come_mem_core__115;
struct sNode* alignas__116;
_Bool anonymous_type_117;
_Bool anonymous_name_118;
_Bool _while_condtional25;
_Bool _if_conditional186;
_Bool _if_conditional187;
char* p_119;
int sline_120;
void* right_value109;
_Bool _if_conditional188;
void* right_value110;
char* __dec_obj46;
void* right_value111;
char* __dec_obj47;
void* right_value112;
char* __dec_obj48;
_Bool _if_conditional189;
char* p_121;
int sline_122;
_Bool _while_condtional26;
_Bool _if_conditional190;
_Bool _if_conditional191;
_Bool _if_conditional192;
void* right_value113;
void* right_value116;
void* right_value117;
void* right_value118;
struct optional$2tuple3$3sTypephcharphboolphbool* __result69__;
_Bool _if_conditional195;
char* p_123;
int sline_124;
void* right_value119;
_Bool _if_conditional196;
void* right_value120;
void* right_value121;
void* right_value122;
void* right_value123;
struct optional$2tuple3$3sTypephcharphboolphbool* __result70__;
_Bool _if_conditional197;
_Bool _if_conditional198;
char* p_125;
int sline_126;
void* right_value124;
_Bool _if_conditional199;
void* right_value125;
char* __dec_obj52;
void* right_value126;
char* __dec_obj53;
void* right_value127;
char* __dec_obj54;
_Bool _if_conditional200;
char* p_127;
int sline_128;
void* right_value128;
_Bool _if_conditional201;
void* right_value129;
void* right_value130;
void* right_value131;
void* right_value132;
struct optional$2tuple3$3sTypephcharphboolphbool* __result71__;
_Bool _if_conditional202;
_Bool _if_conditional203;
char* p_129;
int sline_130;
void* right_value133;
_Bool _if_conditional204;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
struct optional$2tuple3$3sTypephcharphboolphbool* __result72__;
void* right_value138;
char* __dec_obj55;
void* right_value139;
char* __dec_obj56;
_Bool _if_conditional205;
char* p_131;
int sline_132;
void* right_value140;
_Bool _if_conditional206;
void* right_value141;
void* right_value142;
void* right_value143;
void* right_value144;
struct optional$2tuple3$3sTypephcharphboolphbool* __result73__;
_Bool _if_conditional207;
void* right_value145;
void* right_value146;
struct sNode* exp_133;
struct sNode* __dec_obj57;
void* right_value147;
void* right_value148;
char* __dec_obj58;
_Bool _if_conditional208;
void* right_value149;
char* __dec_obj59;
_Bool _if_conditional209;
void* right_value150;
char* __dec_obj60;
_Bool _if_conditional210;
void* right_value151;
char* __dec_obj61;
_Bool _if_conditional211;
void* right_value152;
char* __dec_obj62;
_Bool _if_conditional212;
void* right_value153;
char* __dec_obj63;
_Bool _if_conditional213;
void* right_value154;
char* __dec_obj64;
_Bool _if_conditional214;
void* right_value155;
char* __dec_obj65;
_Bool _if_conditional215;
void* right_value156;
char* __dec_obj66;
_Bool _if_conditional216;
char* p_134;
int sline_135;
_Bool _if_conditional217;
void* right_value157;
char* __dec_obj67;
void* right_value158;
char* __dec_obj68;
_Bool _if_conditional218;
void* right_value159;
char* __dec_obj69;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
void* right_value160;
char* __dec_obj70;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value161;
char* __dec_obj71;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value162;
char* __dec_obj72;
_Bool _if_conditional226;
_Bool _if_conditional227;
char* p_136;
int sline_137;
void* right_value163;
char* __dec_obj73;
_Bool _if_conditional228;
_Bool _if_conditional229;
char* p_138;
int sline_139;
void* right_value164;
char* __dec_obj74;
_Bool _if_conditional230;
void* right_value165;
char* __dec_obj75;
void* right_value166;
char* __dec_obj76;
_Bool _if_conditional231;
_Bool _if_conditional232;
char* p_140;
int sline_141;
void* right_value167;
char* __dec_obj77;
_Bool _if_conditional233;
void* right_value168;
char* __dec_obj78;
void* right_value169;
char* __dec_obj79;
_Bool _if_conditional234;
void* right_value170;
char* __dec_obj80;
void* right_value171;
char* __dec_obj81;
_Bool _if_conditional235;
void* right_value172;
char* __dec_obj82;
_Bool _if_conditional236;
void* right_value173;
char* __dec_obj83;
_Bool _if_conditional237;
void* right_value174;
char* __dec_obj84;
_Bool _if_conditional238;
void* right_value175;
char* __dec_obj85;
_Bool _if_conditional239;
_Bool _if_conditional240;
_Bool _if_conditional241;
char* p_142;
int sline_143;
void* right_value176;
char* __dec_obj86;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value177;
char* __dec_obj87;
int pointer_num_144;
_Bool _while_condtional27;
_Bool lambda_flag_145;
char* pX_146;
int slineX_147;
_Bool _if_conditional245;
void* right_value178;
_Bool _if_conditional246;
struct sType* type_148;
char* var_name_149;
_Bool function_pointer_flag_150;
char* p_151;
int sline_152;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value179;
char* word_153;
_Bool _if_conditional250;
_Bool _if_conditional251;
_Bool var_name_between_brace_154;
char* p_155;
int sline_156;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value180;
char* word_157;
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
static int anonymous_num_158=0;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value181;
char* __dec_obj88;
void* right_value182;
struct sNode* node_159;
_Bool _if_conditional260;
void* right_value183;
void* right_value184;
void* right_value185;
void* right_value186;
struct optional$2tuple3$3sTypephcharphboolphbool* __result74__;
int pointer_num_160;
_Bool _while_condtional28;
void* right_value187;
void* right_value188;
struct sType* __dec_obj89;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value189;
char* __dec_obj90;
void* right_value190;
struct sNode* node_161;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value191;
void* right_value192;
void* right_value193;
void* right_value194;
struct optional$2tuple3$3sTypephcharphboolphbool* __result75__;
void* right_value195;
void* right_value196;
struct sType* __dec_obj91;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value197;
char* __dec_obj92;
void* right_value198;
struct sNode* node_162;
_Bool _if_conditional267;
void* right_value199;
void* right_value200;
void* right_value201;
void* right_value202;
struct optional$2tuple3$3sTypephcharphboolphbool* __result76__;
int pointer_num_163;
_Bool _while_condtional29;
void* right_value203;
void* right_value204;
struct sType* __dec_obj93;
void* right_value205;
void* right_value206;
void* right_value207;
void* right_value208;
struct optional$2tuple3$3sTypephcharphboolphbool* __result77__;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value209;
char* __dec_obj94;
_Bool _if_conditional271;
static int num_anonymous_var_name_164=0;
void* right_value210;
char* __dec_obj95;
_Bool _if_conditional272;
void* right_value211;
char* __dec_obj96;
static int num_anonymous_var_name_165=0;
void* right_value212;
char* __dec_obj97;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool no_comma_166;
void* right_value213;
struct sNode* node_167;
struct sNode* __dec_obj98;
_Bool _if_conditional275;
struct sType* result_type_168;
void* right_value223;
_Bool _if_conditional282;
void* right_value224;
void* right_value225;
struct sType* __dec_obj99;
_Bool _if_conditional288;
int i_179;
_Bool _for_condtionalA4;
void* right_value230;
_Bool _if_conditional291;
void* right_value231;
void* right_value232;
void* right_value233;
struct sType* __dec_obj100;
void* right_value234;
void* right_value235;
struct sType* __dec_obj101;
struct sNode* __dec_obj102;
void* right_value236;
char* __dec_obj103;
void* right_value237;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var2;
struct list$1sTypeph* param_types_184;
struct list$1charph* param_names_185;
struct list$1charph* param_default_parametors_186;
_Bool var_args_187;
void* right_value238;
void* right_value239;
struct sType* __dec_obj104;
void* right_value240;
void* right_value242;
struct tuple1$1sTypeph* __dec_obj106;
struct list$1sTypeph* __dec_obj107;
struct list$1charph* __dec_obj108;
_Bool _if_conditional293;
_Bool _if_conditional294;
struct sType* result_type_188;
void* right_value243;
struct optional$2sTypepbool* __exception_result_var_b2;
_Bool _if_conditional295;
void* right_value244;
void* right_value245;
struct sType* __dec_obj109;
_Bool _if_conditional296;
int i_189;
_Bool _for_condtionalA5;
void* right_value246;
struct optional$2charphbool* __exception_result_var_b3;
_Bool _if_conditional297;
void* right_value247;
void* right_value248;
void* right_value249;
struct sType* __dec_obj110;
void* right_value250;
void* right_value251;
struct sType* __dec_obj111;
struct sNode* __dec_obj112;
_Bool _if_conditional298;
void* right_value252;
char* __dec_obj113;
_Bool _if_conditional299;
void* right_value253;
void* right_value254;
void* right_value255;
void* right_value256;
struct optional$2tuple3$3sTypephcharphboolphbool* __result102__;
static int num_anonymous_var_name_190=0;
void* right_value257;
char* __dec_obj114;
void* right_value258;
void* right_value259;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assgin_var3;
struct list$1sTypeph* param_types_191;
struct list$1charph* param_names_192;
struct list$1charph* param_default_parametors_193;
_Bool var_args_194;
void* right_value260;
void* right_value261;
struct sType* __dec_obj115;
void* right_value262;
void* right_value263;
struct tuple1$1sTypeph* __dec_obj116;
struct list$1sTypeph* __dec_obj117;
struct list$1charph* __dec_obj118;
_Bool _if_conditional300;
void* right_value264;
struct sNode* exp_195;
void* right_value265;
_Bool _if_conditional301;
void* right_value266;
void* right_value267;
void* right_value268;
void* right_value269;
struct optional$2tuple3$3sTypephcharphboolphbool* __result105__;
void* right_value270;
struct CVALUE* come_value_196;
void* right_value271;
struct sType* __dec_obj120;
_Bool _if_conditional305;
_Bool _if_conditional306;
_Bool _if_conditional307;
void* right_value272;
char* __dec_obj121;
_Bool _if_conditional308;
static int num_anonymous_var_name_197=0;
void* right_value273;
char* __dec_obj122;
_Bool _if_conditional309;
void* right_value274;
char* __dec_obj123;
static int num_anonymous_var_name_198=0;
void* right_value275;
char* __dec_obj124;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool no_comma_199;
void* right_value276;
struct sNode* node_200;
struct sNode* __dec_obj125;
void* right_value277;
struct optional$2sTypepbool* __exception_result_var_b4;
_Bool _if_conditional312;
void* right_value278;
void* right_value279;
struct sType* __dec_obj126;
void* right_value280;
char* __dec_obj127;
struct sNode* __dec_obj128;
_Bool _if_conditional313;
int i_201;
_Bool _for_condtionalA6;
void* right_value281;
struct optional$2charphbool* __exception_result_var_b5;
_Bool _if_conditional314;
void* right_value282;
void* right_value283;
void* right_value284;
struct sType* __dec_obj129;
struct sNode* __dec_obj130;
_Bool _if_conditional315;
void* right_value294;
_Bool _if_conditional321;
void* right_value295;
void* right_value296;
void* right_value297;
void* right_value298;
struct optional$2tuple3$3sTypephcharphboolphbool* __result113__;
void* right_value299;
void* right_value300;
struct sType* __dec_obj131;
_Bool _while_condtional33;
void* right_value301;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* generics_type_206;
char* var_name_207;
_Bool err_208;
_Bool _if_conditional322;
void* right_value302;
void* right_value303;
void* right_value304;
void* right_value305;
struct optional$2tuple3$3sTypephcharphboolphbool* __result114__;
_Bool _if_conditional323;
_Bool _if_conditional324;
void* right_value306;
void* right_value307;
void* right_value308;
void* right_value309;
struct optional$2tuple3$3sTypephcharphboolphbool* __result115__;
_Bool _if_conditional325;
void* right_value310;
struct sType* __dec_obj132;
_Bool _if_conditional326;
void* right_value311;
char* new_name_209;
struct sNode* __dec_obj133;
_Bool _if_conditional327;
void* right_value312;
struct sClass* klass_210;
_Bool _if_conditional328;
void* right_value325;
void* right_value326;
void* right_value327;
void* right_value328;
struct sType* __dec_obj134;
struct sNode* __dec_obj135;
_Bool _while_condtional43;
_Bool _if_conditional382;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
_Bool _if_conditional388;
_Bool _while_condtional44;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value329;
void* right_value330;
struct list$1sTypeph* types_257;
void* right_value331;
_Bool _while_condtional45;
void* right_value332;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* type2_258;
char* name_259;
_Bool err_260;
_Bool _if_conditional391;
void* right_value333;
void* right_value334;
void* right_value335;
void* right_value336;
struct optional$2tuple3$3sTypephcharphboolphbool* __result140__;
void* right_value337;
int num_tuples_261;
void* right_value338;
void* right_value339;
void* right_value340;
struct sType* __dec_obj136;
struct list$1sTypeph* o2_saved_262;
struct sType* it_263;
_Bool _for_condtionalA9;
void* right_value341;
_Bool _if_conditional392;
void* right_value342;
struct sType* __dec_obj137;
_Bool _if_conditional393;
void* right_value343;
char* new_name_264;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value344;
char* __dec_obj138;
_Bool _if_conditional397;
static int num_anonymous_var_name_265=0;
void* right_value345;
char* __dec_obj139;
_Bool _if_conditional398;
void* right_value346;
char* __dec_obj140;
static int num_anonymous_var_name_266=0;
void* right_value347;
char* __dec_obj141;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool no_comma_267;
void* right_value348;
struct sNode* node_268;
struct sNode* __dec_obj142;
_Bool _while_condtional46;
_Bool _if_conditional401;
void* right_value349;
struct sNode* node_269;
void* right_value350;
void* right_value351;
char* asm_name_270;
char* __dec_obj143;
_Bool _if_conditional402;
void* right_value352;
void* right_value353;
struct sType* type2_271;
void* right_value354;
void* right_value355;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value356;
void* right_value357;
void* right_value358;
void* right_value359;
struct optional$2tuple3$3sTypephcharphboolphbool* __result141__;
void* right_value360;
void* right_value361;
void* right_value362;
void* right_value363;
struct optional$2tuple3$3sTypephcharphboolphbool* __result142__;
void* right_value364;
void* right_value365;
void* right_value366;
void* right_value367;
struct optional$2tuple3$3sTypephcharphboolphbool* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&head_96, 0, sizeof(char*));
memset(&head_sline_97, 0, sizeof(int));
memset(&right_value107, 0, sizeof(void*));
memset(&type_name_98, 0, sizeof(char*));
memset(&right_value108, 0, sizeof(void*));
memset(&constant_99, 0, sizeof(_Bool));
memset(&static__100, 0, sizeof(_Bool));
memset(&exception__101, 0, sizeof(_Bool));
memset(&volatile__102, 0, sizeof(_Bool));
memset(&register__103, 0, sizeof(_Bool));
memset(&unsigned__104, 0, sizeof(_Bool));
memset(&long__105, 0, sizeof(_Bool));
memset(&long_long_106, 0, sizeof(_Bool));
memset(&short__107, 0, sizeof(_Bool));
memset(&restrict__108, 0, sizeof(_Bool));
memset(&struct__109, 0, sizeof(_Bool));
memset(&union__110, 0, sizeof(_Bool));
memset(&enum__111, 0, sizeof(_Bool));
memset(&no_heap_112, 0, sizeof(_Bool));
memset(&extern__113, 0, sizeof(_Bool));
memset(&inline__114, 0, sizeof(_Bool));
memset(&come_mem_core__115, 0, sizeof(_Bool));
memset(&alignas__116, 0, sizeof(struct sNode*));
memset(&anonymous_type_117, 0, sizeof(_Bool));
memset(&anonymous_name_118, 0, sizeof(_Bool));
memset(&p_119, 0, sizeof(char*));
memset(&sline_120, 0, sizeof(int));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&p_121, 0, sizeof(char*));
memset(&sline_122, 0, sizeof(int));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&p_123, 0, sizeof(char*));
memset(&sline_124, 0, sizeof(int));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&p_125, 0, sizeof(char*));
memset(&sline_126, 0, sizeof(int));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&p_127, 0, sizeof(char*));
memset(&sline_128, 0, sizeof(int));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&p_129, 0, sizeof(char*));
memset(&sline_130, 0, sizeof(int));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&p_131, 0, sizeof(char*));
memset(&sline_132, 0, sizeof(int));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&exp_133, 0, sizeof(struct sNode*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&p_134, 0, sizeof(char*));
memset(&sline_135, 0, sizeof(int));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&p_136, 0, sizeof(char*));
memset(&sline_137, 0, sizeof(int));
memset(&right_value163, 0, sizeof(void*));
memset(&p_138, 0, sizeof(char*));
memset(&sline_139, 0, sizeof(int));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&p_140, 0, sizeof(char*));
memset(&sline_141, 0, sizeof(int));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&p_142, 0, sizeof(char*));
memset(&sline_143, 0, sizeof(int));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&pointer_num_144, 0, sizeof(int));
memset(&lambda_flag_145, 0, sizeof(_Bool));
memset(&pX_146, 0, sizeof(char*));
memset(&slineX_147, 0, sizeof(int));
memset(&right_value178, 0, sizeof(void*));
memset(&type_148, 0, sizeof(struct sType*));
memset(&var_name_149, 0, sizeof(char*));
memset(&function_pointer_flag_150, 0, sizeof(_Bool));
memset(&p_151, 0, sizeof(char*));
memset(&sline_152, 0, sizeof(int));
memset(&right_value179, 0, sizeof(void*));
memset(&word_153, 0, sizeof(char*));
memset(&var_name_between_brace_154, 0, sizeof(_Bool));
memset(&p_155, 0, sizeof(char*));
memset(&sline_156, 0, sizeof(int));
memset(&right_value180, 0, sizeof(void*));
memset(&word_157, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&node_159, 0, sizeof(struct sNode*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&pointer_num_160, 0, sizeof(int));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&node_161, 0, sizeof(struct sNode*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&node_162, 0, sizeof(struct sNode*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&pointer_num_163, 0, sizeof(int));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&no_comma_166, 0, sizeof(_Bool));
memset(&right_value213, 0, sizeof(void*));
memset(&node_167, 0, sizeof(struct sNode*));
memset(&result_type_168, 0, sizeof(struct sType*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&i_179, 0, sizeof(int));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&param_types_184, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_185, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_186, 0, sizeof(struct list$1charph*));
memset(&var_args_187, 0, sizeof(_Bool));
memset(&param_types_184, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_185, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_186, 0, sizeof(struct list$1charph*));
memset(&var_args_187, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&result_type_188, 0, sizeof(struct sType*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
memset(&i_189, 0, sizeof(int));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&param_types_191, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_192, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_193, 0, sizeof(struct list$1charph*));
memset(&var_args_194, 0, sizeof(_Bool));
memset(&param_types_191, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_192, 0, sizeof(struct list$1charph*));
memset(&param_default_parametors_193, 0, sizeof(struct list$1charph*));
memset(&var_args_194, 0, sizeof(_Bool));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&exp_195, 0, sizeof(struct sNode*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&come_value_196, 0, sizeof(struct CVALUE*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&no_comma_199, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
memset(&node_200, 0, sizeof(struct sNode*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&i_201, 0, sizeof(int));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&generics_type_206, 0, sizeof(struct sType*));
memset(&var_name_207, 0, sizeof(char*));
memset(&err_208, 0, sizeof(_Bool));
memset(&generics_type_206, 0, sizeof(struct sType*));
memset(&var_name_207, 0, sizeof(char*));
memset(&err_208, 0, sizeof(_Bool));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&new_name_209, 0, sizeof(char*));
memset(&right_value312, 0, sizeof(void*));
memset(&klass_210, 0, sizeof(struct sClass*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&types_257, 0, sizeof(struct list$1sTypeph*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&type2_258, 0, sizeof(struct sType*));
memset(&name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
memset(&type2_258, 0, sizeof(struct sType*));
memset(&name_259, 0, sizeof(char*));
memset(&err_260, 0, sizeof(_Bool));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&num_tuples_261, 0, sizeof(int));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&o2_saved_262, 0, sizeof(struct list$1sTypeph*));
memset(&it_263, 0, sizeof(struct sType*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&new_name_264, 0, sizeof(char*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&no_comma_267, 0, sizeof(_Bool));
memset(&right_value348, 0, sizeof(void*));
memset(&node_268, 0, sizeof(struct sNode*));
memset(&right_value349, 0, sizeof(void*));
memset(&node_269, 0, sizeof(struct sNode*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&asm_name_270, 0, sizeof(char*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&type2_271, 0, sizeof(struct sType*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
    head_96=((struct sInfo*)come_null_check(info, "05function4.c", 587))->p;
    __freed_obj__ = 0;
    head_sline_97=((struct sInfo*)come_null_check(info, "05function4.c", 588))->sline;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "05function4.c", 589))->define_struct=(_Bool)0;
    __freed_obj__ = 0;
    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 591),((struct optional$2charphbool*)(right_value107=parse_word(info))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    if(_if_conditional185=string_operator_equals(type_name_98,"__extension__"),    __freed_obj__ = 0, 
    _if_conditional185) {
        __dec_obj45=type_name_98;
        type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 593),((struct optional$2charphbool*)(right_value108=parse_word(info))))));
        if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value108;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    constant_99=(_Bool)0;
    __freed_obj__ = 0;
    static__100=(_Bool)0;
    __freed_obj__ = 0;
    exception__101=(_Bool)0;
    __freed_obj__ = 0;
    volatile__102=(_Bool)0;
    __freed_obj__ = 0;
    register__103=(_Bool)0;
    __freed_obj__ = 0;
    unsigned__104=(_Bool)0;
    __freed_obj__ = 0;
    long__105=(_Bool)0;
    __freed_obj__ = 0;
    long_long_106=(_Bool)0;
    __freed_obj__ = 0;
    short__107=(_Bool)0;
    __freed_obj__ = 0;
    restrict__108=(_Bool)0;
    __freed_obj__ = 0;
    struct__109=(_Bool)0;
    __freed_obj__ = 0;
    union__110=(_Bool)0;
    __freed_obj__ = 0;
    enum__111=(_Bool)0;
    __freed_obj__ = 0;
    no_heap_112=(_Bool)0;
    __freed_obj__ = 0;
    extern__113=(_Bool)0;
    __freed_obj__ = 0;
    inline__114=(_Bool)0;
    __freed_obj__ = 0;
    come_mem_core__115=(_Bool)0;
    __freed_obj__ = 0;
    alignas__116=((void*)0);
    __freed_obj__ = 0;
    anonymous_type_117=(_Bool)0;
    __freed_obj__ = 0;
    anonymous_name_118=(_Bool)0;
    __freed_obj__ = 0;
    while(_while_condtional25=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional25) {
        if(_if_conditional186=string_operator_equals(type_name_98,"struct"),        __freed_obj__ = 0, 
        _if_conditional186) {
            struct__109=(_Bool)1;
            __freed_obj__ = 0;
            if(_if_conditional187=*((struct sInfo*)come_null_check(info, "05function4.c", 646))->p==123,            __freed_obj__ = 0, 
            _if_conditional187) {
                p_119=((struct sInfo*)come_null_check(info, "05function4.c", 624))->p;
                __freed_obj__ = 0;
                sline_120=((struct sInfo*)come_null_check(info, "05function4.c", 625))->sline;
                __freed_obj__ = 0;
                ((char*)(right_value109=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
                if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value109;
                __freed_obj__ = 0;
                if(_if_conditional188=*((struct sInfo*)come_null_check(info, "05function4.c", 644))->p==59,                __freed_obj__ = 0, 
                _if_conditional188) {
                    anonymous_name_118=(_Bool)1;
                    __freed_obj__ = 0;
                    anonymous_type_117=(_Bool)1;
                    __freed_obj__ = 0;
                    __dec_obj46=type_name_98;
                    type_name_98=(char*)come_increment_ref_count(((char*)(right_value110=__builtin_string(""))));
                    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
                    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value110;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 633))->p=p_119;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 634))->sline=sline_120;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                else {
                    anonymous_type_117=(_Bool)1;
                    __freed_obj__ = 0;
                    __dec_obj47=type_name_98;
                    type_name_98=(char*)come_increment_ref_count(((char*)(right_value111=__builtin_string(""))));
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
                    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value111;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 640))->p=p_119;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 641))->sline=sline_120;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __dec_obj48=type_name_98;
            type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 648),((struct optional$2charphbool*)(right_value112=parse_word(info))))));
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value112;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional189=*((struct sInfo*)come_null_check(info, "05function4.c", 682))->p==60,            __freed_obj__ = 0, 
            _if_conditional189) {
                p_121=((struct sInfo*)come_null_check(info, "05function4.c", 653))->p;
                __freed_obj__ = 0;
                sline_122=((struct sInfo*)come_null_check(info, "05function4.c", 654))->sline;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 656))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                while(_while_condtional26=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional26) {
                    if(_if_conditional190=*((struct sInfo*)come_null_check(info, "05function4.c", 679))->p==62,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 661))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional191=*((struct sInfo*)come_null_check(info, "05function4.c", 670))->p==123,                        __freed_obj__ = 0, 
                        _if_conditional191) {
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 667))->p=p_121;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 668))->sline=sline_122;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional192=*((struct sInfo*)come_null_check(info, "05function4.c", 679))->p==0,                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            err_msg(info,"invalid struct definition");
                            __freed_obj__ = 0;
                            __result69__ = __result_obj__ = (come_save_stackframe("05function4.c", 674), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value118=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value117=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 674))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value116=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value113=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 674)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value113;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
                            if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value116;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value117);
                            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value117;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value118);
                            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value118;
                            __freed_obj__ = 0;
                            return __result69__;
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 677))->p++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional195=*((struct sInfo*)come_null_check(info, "05function4.c", 701))->p==123,            __freed_obj__ = 0, 
            _if_conditional195) {
                p_123=((struct sInfo*)come_null_check(info, "05function4.c", 683))->p;
                __freed_obj__ = 0;
                sline_124=((struct sInfo*)come_null_check(info, "05function4.c", 684))->sline;
                __freed_obj__ = 0;
                ((char*)(right_value119=skip_block(info)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value119;
                __freed_obj__ = 0;
                if(_if_conditional196=*((struct sInfo*)come_null_check(info, "05function4.c", 700))->p==59,                __freed_obj__ = 0, 
                _if_conditional196) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 689))->p=head_96;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 690))->sline=head_sline_97;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 691))->define_struct=(_Bool)1;
                    __freed_obj__ = 0;
                    __result70__ = __result_obj__ = (come_save_stackframe("05function4.c", 692), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value123=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value122=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 692))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value121=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value120=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 692)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                    if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value120;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value121;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
                    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value122;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value123);
                    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value123;
                    __freed_obj__ = 0;
                    return __result70__;
                    __freed_obj__ = 0;
                }
                else {
                    anonymous_type_117=(_Bool)1;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 696))->p=p_123;
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "05function4.c", 697))->sline=sline_124;
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional197=string_operator_equals(type_name_98,"union"),            __freed_obj__ = 0, 
            _if_conditional197) {
                union__110=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional198=*((struct sInfo*)come_null_check(info, "05function4.c", 731))->p==123,                __freed_obj__ = 0, 
                _if_conditional198) {
                    p_125=((struct sInfo*)come_null_check(info, "05function4.c", 706))->p;
                    __freed_obj__ = 0;
                    sline_126=((struct sInfo*)come_null_check(info, "05function4.c", 707))->sline;
                    __freed_obj__ = 0;
                    ((char*)(right_value124=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value124;
                    __freed_obj__ = 0;
                    if(_if_conditional199=*((struct sInfo*)come_null_check(info, "05function4.c", 729))->p==59,                    __freed_obj__ = 0, 
                    _if_conditional199) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 712))->p=head_96;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 713))->sline=head_sline_97;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 715))->define_struct=(_Bool)0;
                        __freed_obj__ = 0;
                        anonymous_type_117=(_Bool)1;
                        __freed_obj__ = 0;
                        __dec_obj52=type_name_98;
                        type_name_98=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(""))));
                        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value125;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 718))->p=p_125;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 719))->sline=sline_126;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        anonymous_type_117=(_Bool)1;
                        __freed_obj__ = 0;
                        __dec_obj53=type_name_98;
                        type_name_98=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(""))));
                        if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value126;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 725))->p=p_125;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 726))->sline=sline_126;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                __dec_obj54=type_name_98;
                type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 733),((struct optional$2charphbool*)(right_value127=parse_word(info))))));
                if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                if(_if_conditional200=*((struct sInfo*)come_null_check(info, "05function4.c", 756))->p==123,                __freed_obj__ = 0, 
                _if_conditional200) {
                    p_127=((struct sInfo*)come_null_check(info, "05function4.c", 738))->p;
                    __freed_obj__ = 0;
                    sline_128=((struct sInfo*)come_null_check(info, "05function4.c", 739))->sline;
                    __freed_obj__ = 0;
                    ((char*)(right_value128=skip_block(info)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
                    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value128;
                    __freed_obj__ = 0;
                    if(_if_conditional201=*((struct sInfo*)come_null_check(info, "05function4.c", 755))->p==59,                    __freed_obj__ = 0, 
                    _if_conditional201) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 744))->p=head_96;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 745))->sline=head_sline_97;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 746))->define_struct=(_Bool)1;
                        __freed_obj__ = 0;
                        __result71__ = __result_obj__ = (come_save_stackframe("05function4.c", 747), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value132=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value131=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 747))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value130=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value129=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 747)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value129;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value130;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value131);
                        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value131;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value132);
                        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value132;
                        __freed_obj__ = 0;
                        return __result71__;
                        __freed_obj__ = 0;
                    }
                    else {
                        anonymous_type_117=(_Bool)1;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 751))->p=p_127;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "05function4.c", 752))->sline=sline_128;
                        __freed_obj__ = 0;
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional202=string_operator_equals(type_name_98,"enum"),                __freed_obj__ = 0, 
                _if_conditional202) {
                    enum__111=(_Bool)1;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional203=*((struct sInfo*)come_null_check(info, "05function4.c", 783))->p==123,                    __freed_obj__ = 0, 
                    _if_conditional203) {
                        p_129=((struct sInfo*)come_null_check(info, "05function4.c", 763))->p;
                        __freed_obj__ = 0;
                        sline_130=((struct sInfo*)come_null_check(info, "05function4.c", 764))->sline;
                        __freed_obj__ = 0;
                        ((char*)(right_value133=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
                        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value133;
                        __freed_obj__ = 0;
                        if(_if_conditional204=*((struct sInfo*)come_null_check(info, "05function4.c", 781))->p==59,                        __freed_obj__ = 0, 
                        _if_conditional204) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 769))->p=head_96;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 770))->sline=head_sline_97;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 771))->define_struct=(_Bool)1;
                            __freed_obj__ = 0;
                            __result72__ = __result_obj__ = (come_save_stackframe("05function4.c", 772), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value137=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value136=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 772))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value135=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value134=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 772)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                            if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value134;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value135;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value136);
                            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value136;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value137);
                            if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value137;
                            __freed_obj__ = 0;
                            return __result72__;
                            __freed_obj__ = 0;
                        }
                        else {
                            anonymous_type_117=(_Bool)1;
                            __freed_obj__ = 0;
                            __dec_obj55=type_name_98;
                            type_name_98=(char*)come_increment_ref_count(((char*)(right_value138=__builtin_string(""))));
                            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                            if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value138;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 777))->p=p_129;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 778))->sline=sline_130;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    __dec_obj56=type_name_98;
                    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 785),((struct optional$2charphbool*)(right_value139=parse_word(info))))));
                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
                    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value139;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional205=*((struct sInfo*)come_null_check(info, "05function4.c", 808))->p==123,                    __freed_obj__ = 0, 
                    _if_conditional205) {
                        p_131=((struct sInfo*)come_null_check(info, "05function4.c", 790))->p;
                        __freed_obj__ = 0;
                        sline_132=((struct sInfo*)come_null_check(info, "05function4.c", 791))->sline;
                        __freed_obj__ = 0;
                        ((char*)(right_value140=skip_block(info)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value140;
                        __freed_obj__ = 0;
                        if(_if_conditional206=*((struct sInfo*)come_null_check(info, "05function4.c", 807))->p==59,                        __freed_obj__ = 0, 
                        _if_conditional206) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 796))->p=head_96;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 797))->sline=head_sline_97;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 798))->define_struct=(_Bool)1;
                            __freed_obj__ = 0;
                            __result73__ = __result_obj__ = (come_save_stackframe("05function4.c", 799), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value144=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value143=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 799))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value142=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value141=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 799)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                            if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                            if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                            if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value141;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value142);
                            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value142;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value143;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value144);
                            if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value144;
                            __freed_obj__ = 0;
                            return __result73__;
                            __freed_obj__ = 0;
                        }
                        else {
                            anonymous_type_117=(_Bool)1;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 803))->p=p_131;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 804))->sline=sline_132;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional207=string_operator_equals(type_name_98,"_Alignas"),                    __freed_obj__ = 0, 
                    _if_conditional207) {
                        optional$2intbool_value((come_push_stackframe("05function4.c", 810),((struct optional$2intbool*)(right_value145=expected_next_character(40,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value145;
                        __freed_obj__ = 0;
                        exp_133=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[1] = right_value146;
                        __freed_obj__ = 0;
                        __dec_obj57=alignas__116;
                        alignas__116=(struct sNode*)come_increment_ref_count(exp_133);
                        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        optional$2intbool_value((come_push_stackframe("05function4.c", 816),((struct optional$2intbool*)(right_value147=expected_next_character(41,info)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value147);
                        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value147;
                        __freed_obj__ = 0;
                        __dec_obj58=type_name_98;
                        type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 818),((struct optional$2charphbool*)(right_value148=parse_word(info))))));
                        if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value148);
                        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value148;
                        __freed_obj__ = 0;
                        if(exp_133 && !__freed_obj__) { exp_133 = come_decrement_ref_count(exp_133, ((struct sNode*)exp_133)->finalize, ((struct sNode*)exp_133)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional208=string_operator_equals(type_name_98,"const"),                        __freed_obj__ = 0, 
                        _if_conditional208) {
                            constant_99=(_Bool)1;
                            __freed_obj__ = 0;
                            __dec_obj59=type_name_98;
                            type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 823),((struct optional$2charphbool*)(right_value149=parse_word(info))))));
                            if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value149;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional209=string_operator_equals(type_name_98,"exception"),                            __freed_obj__ = 0, 
                            _if_conditional209) {
                                exception__101=(_Bool)1;
                                __freed_obj__ = 0;
                                __dec_obj60=type_name_98;
                                type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 828),((struct optional$2charphbool*)(right_value150=parse_word(info))))));
                                if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value150;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional210=string_operator_equals(type_name_98,"static"),                                __freed_obj__ = 0, 
                                _if_conditional210) {
                                    static__100=(_Bool)1;
                                    __freed_obj__ = 0;
                                    __dec_obj61=type_name_98;
                                    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 833),((struct optional$2charphbool*)(right_value151=parse_word(info))))));
                                    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value151;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional211=string_operator_equals(type_name_98,"come_mem_core"),                                    __freed_obj__ = 0, 
                                    _if_conditional211) {
                                        come_mem_core__115=(_Bool)1;
                                        __freed_obj__ = 0;
                                        __dec_obj62=type_name_98;
                                        type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 838),((struct optional$2charphbool*)(right_value152=parse_word(info))))));
                                        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                                        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value152;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional212=string_operator_equals(type_name_98,"extern"),                                        __freed_obj__ = 0, 
                                        _if_conditional212) {
                                            extern__113=(_Bool)1;
                                            __freed_obj__ = 0;
                                            __dec_obj63=type_name_98;
                                            type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 843),((struct optional$2charphbool*)(right_value153=parse_word(info))))));
                                            if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                                            if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value153;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional213=string_operator_equals(type_name_98,"_Noreturn"),                                            __freed_obj__ = 0, 
                                            _if_conditional213) {
                                                __dec_obj64=type_name_98;
                                                type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 846),((struct optional$2charphbool*)(right_value154=parse_word(info))))));
                                                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                                                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value154;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional214=string_operator_equals(type_name_98,"inline")||string_operator_equals(type_name_98,"__inline")||string_operator_equals(type_name_98,"__inline__")||string_operator_equals(type_name_98,"__always_inline"),                                                __freed_obj__ = 0, 
                                                _if_conditional214) {
                                                    inline__114=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    __dec_obj65=type_name_98;
                                                    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 851),((struct optional$2charphbool*)(right_value155=parse_word(info))))));
                                                    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                                    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value155;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional215=string_operator_equals(type_name_98,"volatile"),                                                    __freed_obj__ = 0, 
                                                    _if_conditional215) {
                                                        volatile__102=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                        __dec_obj66=type_name_98;
                                                        type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 856),((struct optional$2charphbool*)(right_value156=parse_word(info))))));
                                                        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                                        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value156;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional216=string_operator_equals(type_name_98,"long"),                                                        __freed_obj__ = 0, 
                                                        _if_conditional216) {
                                                            {
                                                                p_134=((struct sInfo*)come_null_check(info, "05function4.c", 861))->p;
                                                                __freed_obj__ = 0;
                                                                sline_135=((struct sInfo*)come_null_check(info, "05function4.c", 862))->sline;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional217=!xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 924))->p),                                                                __freed_obj__ = 0, 
                                                                _if_conditional217) {
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 865))->p=p_134;
                                                                    __freed_obj__ = 0;
                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 866))->sline=sline_135;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj67=type_name_98;
                                                                    type_name_98=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string("long"))));
                                                                    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                                                                    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value157;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    __dec_obj68=type_name_98;
                                                                    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 872),((struct optional$2charphbool*)(right_value158=parse_word(info))))));
                                                                    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                                                                    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value158;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional218=string_operator_equals(type_name_98,"unsigned"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional218) {
                                                                        __dec_obj69=type_name_98;
                                                                        type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 875),((struct optional$2charphbool*)(right_value159=parse_word(info))))));
                                                                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                                                                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value159;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional219=string_operator_equals(type_name_98,"int"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional219) {
                                                                            long__105=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional220=string_operator_equals(type_name_98,"long"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional220) {
                                                                            p_134=((struct sInfo*)come_null_check(info, "05function4.c", 883))->p;
                                                                            __freed_obj__ = 0;
                                                                            sline_135=((struct sInfo*)come_null_check(info, "05function4.c", 884))->sline;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional221=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 894))->p),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional221) {
                                                                                long_long_106=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj70=type_name_98;
                                                                                type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 887),((struct optional$2charphbool*)(right_value160=parse_word(info))))));
                                                                                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                                                                                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value160;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__105=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional222=string_operator_equals(type_name_98,"int"),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional222) {
                                                                                long_long_106=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional223=!is_type_name(type_name_98,info),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional223) {
                                                                                    __dec_obj71=type_name_98;
                                                                                    type_name_98=(char*)come_increment_ref_count(((char*)(right_value161=__builtin_string("long"))));
                                                                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                                                                                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value161;
                                                                                    __freed_obj__ = 0;
                                                                                    long_long_106=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 901))->p=p_134;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 902))->sline=sline_135;
                                                                                    __freed_obj__ = 0;
                                                                                    break;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional224=is_type_name(type_name_98,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional224) {
                                                                                if(_if_conditional225=long__105,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional225) {
                                                                                    long_long_106=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    long__105=(_Bool)0;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    long__105=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 917))->p=p_134;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 918))->sline=sline_135;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj72=type_name_98;
                                                                                type_name_98=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string("long"))));
                                                                                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                                                                                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value162;
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
                                                            if(_if_conditional226=string_operator_equals(type_name_98,"unsigned"),                                                            __freed_obj__ = 0, 
                                                            _if_conditional226) {
                                                                unsigned__104=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional227=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 994))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 994))->p==95,                                                                __freed_obj__ = 0, 
                                                                _if_conditional227) {
                                                                    p_136=((struct sInfo*)come_null_check(info, "05function4.c", 930))->p;
                                                                    __freed_obj__ = 0;
                                                                    sline_137=((struct sInfo*)come_null_check(info, "05function4.c", 931))->sline;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj73=type_name_98;
                                                                    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 933),((struct optional$2charphbool*)(right_value163=parse_word(info))))));
                                                                    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                                                                    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value163;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional228=string_operator_equals(type_name_98,"short"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional228) {
                                                                        if(_if_conditional229=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 958))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 958))->p==95,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional229) {
                                                                            p_138=((struct sInfo*)come_null_check(info, "05function4.c", 937))->p;
                                                                            __freed_obj__ = 0;
                                                                            sline_139=((struct sInfo*)come_null_check(info, "05function4.c", 938))->sline;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj74=type_name_98;
                                                                            type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 940),((struct optional$2charphbool*)(right_value164=parse_word(info))))));
                                                                            if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                                                                            if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value164;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional230=is_type_name(type_name_98,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional230) {
                                                                                short__107=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                short__107=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj75=type_name_98;
                                                                                type_name_98=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string("int"))));
                                                                                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                                                                                if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value165;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 949))->p=p_138;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 950))->sline=sline_139;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            short__107=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj76=type_name_98;
                                                                            type_name_98=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string("int"))));
                                                                            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                                                                            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value166;
                                                                            __freed_obj__ = 0;
                                                                            break;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional231=string_operator_equals(type_name_98,"long"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional231) {
                                                                            if(_if_conditional232=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 982))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 982))->p==95,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional232) {
                                                                                p_140=((struct sInfo*)come_null_check(info, "05function4.c", 961))->p;
                                                                                __freed_obj__ = 0;
                                                                                sline_141=((struct sInfo*)come_null_check(info, "05function4.c", 962))->sline;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj77=type_name_98;
                                                                                type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 964),((struct optional$2charphbool*)(right_value167=parse_word(info))))));
                                                                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                                                                                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value167;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional233=is_type_name(type_name_98,info),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional233) {
                                                                                    long__105=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    long__105=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    __dec_obj78=type_name_98;
                                                                                    type_name_98=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string("int"))));
                                                                                    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
                                                                                    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value168;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 973))->p=p_140;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "05function4.c", 974))->sline=sline_141;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                long__105=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj79=type_name_98;
                                                                                type_name_98=(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string("int"))));
                                                                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                                                                                if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value169;
                                                                                __freed_obj__ = 0;
                                                                                break;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional234=!is_type_name(type_name_98,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional234) {
                                                                                __dec_obj80=type_name_98;
                                                                                type_name_98=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string("int"))));
                                                                                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                                                                                if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value170;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 985))->p=p_136;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "05function4.c", 986))->sline=sline_137;
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
                                                                    __dec_obj81=type_name_98;
                                                                    type_name_98=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string("int"))));
                                                                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                                                                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value171;
                                                                    __freed_obj__ = 0;
                                                                    break;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                if(_if_conditional235=string_operator_equals(type_name_98,"signed")||string_operator_equals(type_name_98,"__signed__"),                                                                __freed_obj__ = 0, 
                                                                _if_conditional235) {
                                                                    unsigned__104=(_Bool)0;
                                                                    __freed_obj__ = 0;
                                                                    __dec_obj82=type_name_98;
                                                                    type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 998),((struct optional$2charphbool*)(right_value172=parse_word(info))))));
                                                                    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                                                                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value172;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional236=string_operator_equals(type_name_98,"register"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional236) {
                                                                        register__103=(_Bool)1;
                                                                        __freed_obj__ = 0;
                                                                        __dec_obj83=type_name_98;
                                                                        type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1003),((struct optional$2charphbool*)(right_value173=parse_word(info))))));
                                                                        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                                                                        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value173;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional237=string_operator_equals(type_name_98,"restrict"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional237) {
                                                                            restrict__108=(_Bool)1;
                                                                            __freed_obj__ = 0;
                                                                            __dec_obj84=type_name_98;
                                                                            type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1008),((struct optional$2charphbool*)(right_value174=parse_word(info))))));
                                                                            if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                                                                            if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value174;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional238=string_operator_equals(type_name_98,"__restrict"),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional238) {
                                                                                restrict__108=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                                __dec_obj85=type_name_98;
                                                                                type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1013),((struct optional$2charphbool*)(right_value175=parse_word(info))))));
                                                                                if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                                                                                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value175;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional239=string_operator_equals(type_name_98,"short"),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional239) {
                                                                                    short__107=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional240=*((struct sInfo*)come_null_check(info, "05function4.c", 1047))->p==58,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional240) {
                                                                                        break;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    else {
                                                                                        if(_if_conditional241=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1047))->p),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional241) {
                                                                                            p_142=((struct sInfo*)come_null_check(info, "05function4.c", 1022))->p;
                                                                                            __freed_obj__ = 0;
                                                                                            sline_143=((struct sInfo*)come_null_check(info, "05function4.c", 1023))->sline;
                                                                                            __freed_obj__ = 0;
                                                                                            __dec_obj86=type_name_98;
                                                                                            type_name_98=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1024),((struct optional$2charphbool*)(right_value176=parse_word(info))))));
                                                                                            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                                                                            if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value176;
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional242=string_operator_equals(type_name_98,"int"),                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional242) {
                                                                                                break;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                if(_if_conditional243=string_operator_equals(type_name_98,"short"),                                                                                                __freed_obj__ = 0, 
                                                                                                _if_conditional243) {
                                                                                                    short__107=(_Bool)0;
                                                                                                    __freed_obj__ = 0;
                                                                                                    break;
                                                                                                    __freed_obj__ = 0;
                                                                                                }
                                                                                                else {
                                                                                                    if(_if_conditional244=is_type_name(type_name_98,info),                                                                                                    __freed_obj__ = 0, 
                                                                                                    _if_conditional244) {
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1034))->p=p_142;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1035))->sline=sline_143;
                                                                                                        __freed_obj__ = 0;
                                                                                                    }
                                                                                                    else {
                                                                                                        __dec_obj87=type_name_98;
                                                                                                        type_name_98=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string("short"))));
                                                                                                        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                                                                                                        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                                                                                                        __right_value_freed_obj[0] = right_value177;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1039))->p=p_142;
                                                                                                        __freed_obj__ = 0;
                                                                                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1040))->sline=sline_143;
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
    pointer_num_144=0;
    __freed_obj__ = 0;
    while(_while_condtional27=*((struct sInfo*)come_null_check(info, "05function4.c", 1065))->p==42,    __freed_obj__ = 0, 
    _while_condtional27) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 1057))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        skip_pointer_attribute(info);
        __freed_obj__ = 0;
        pointer_num_144++;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    lambda_flag_145=(_Bool)0;
    __freed_obj__ = 0;
    {
        pX_146=((struct sInfo*)come_null_check(info, "05function4.c", 1067))->p;
        __freed_obj__ = 0;
        slineX_147=((struct sInfo*)come_null_check(info, "05function4.c", 1068))->sline;
        __freed_obj__ = 0;
        if(_if_conditional245=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1078))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1078))->p==95,        __freed_obj__ = 0, 
        _if_conditional245) {
            (void)optional$2charphbool_value((come_push_stackframe("05function4.c", 1071),((struct optional$2charphbool*)(right_value178=parse_word(info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
            if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value178;
            __freed_obj__ = 0;
            if(_if_conditional246=*((struct sInfo*)come_null_check(info, "05function4.c", 1076))->p==40&&((struct sInfo*)come_null_check(info, "05function4.c", 1076))->in_typedef,            __freed_obj__ = 0, 
            _if_conditional246) {
                lambda_flag_145=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1078))->p=pX_146;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1079))->sline=slineX_147;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    function_pointer_flag_150=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_151=((struct sInfo*)come_null_check(info, "05function4.c", 1087))->p;
        __freed_obj__ = 0;
        sline_152=((struct sInfo*)come_null_check(info, "05function4.c", 1088))->sline;
        __freed_obj__ = 0;
        if(_if_conditional247=*((struct sInfo*)come_null_check(info, "05function4.c", 1113))->p==40,        __freed_obj__ = 0, 
        _if_conditional247) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1091))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            __freed_obj__ = 0;
            if(_if_conditional248=*((struct sInfo*)come_null_check(info, "05function4.c", 1111))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1111))->p==94,            __freed_obj__ = 0, 
            _if_conditional248) {
                function_pointer_flag_150=(_Bool)1;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional249=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1111))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1111))->p==95,                __freed_obj__ = 0, 
                _if_conditional249) {
                    word_153=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1100),((struct optional$2charphbool*)(right_value179=parse_word(info))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value179;
                    __freed_obj__ = 0;
                    if(_if_conditional250=*((struct sInfo*)come_null_check(info, "05function4.c", 1110))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional250) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1103))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional251=*((struct sInfo*)come_null_check(info, "05function4.c", 1109))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional251) {
                            function_pointer_flag_150=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(word_153 && !__freed_obj__) { word_153 = come_decrement_ref_count(word_153, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1113))->p=p_151;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1114))->sline=sline_152;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    var_name_between_brace_154=(_Bool)0;
    __freed_obj__ = 0;
    {
        p_155=((struct sInfo*)come_null_check(info, "05function4.c", 1119))->p;
        __freed_obj__ = 0;
        sline_156=((struct sInfo*)come_null_check(info, "05function4.c", 1120))->sline;
        __freed_obj__ = 0;
        if(_if_conditional252=*((struct sInfo*)come_null_check(info, "05function4.c", 1144))->p==40,        __freed_obj__ = 0, 
        _if_conditional252) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1123))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            __freed_obj__ = 0;
            if(_if_conditional253=xisalpha(*((struct sInfo*)come_null_check(info, "05function4.c", 1142))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1142))->p==95,            __freed_obj__ = 0, 
            _if_conditional253) {
                word_157=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1129),((struct optional$2charphbool*)(right_value180=parse_word(info))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = 0;
                if(_if_conditional254=is_type_name(word_157,info),                __freed_obj__ = 0, 
                _if_conditional254) {
                }
                else {
                    if(_if_conditional255=*((struct sInfo*)come_null_check(info, "05function4.c", 1141))->p==41,                    __freed_obj__ = 0, 
                    _if_conditional255) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1134))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        if(_if_conditional256=*((struct sInfo*)come_null_check(info, "05function4.c", 1140))->p!=40,                        __freed_obj__ = 0, 
                        _if_conditional256) {
                            var_name_between_brace_154=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(word_157 && !__freed_obj__) { word_157 = come_decrement_ref_count(word_157, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1144))->p=p_155;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "05function4.c", 1145))->sline=sline_156;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional257=anonymous_type_117&&*((struct sInfo*)come_null_check(info, "05function4.c", 1711))->p==123,    __freed_obj__ = 0, 
    _if_conditional257) {
        __freed_obj__ = 0;
        if(_if_conditional258=struct__109,        __freed_obj__ = 0, 
        _if_conditional258) {
            if(_if_conditional259=string_operator_equals(type_name_98,""),            __freed_obj__ = 0, 
            _if_conditional259) {
                __dec_obj88=type_name_98;
                type_name_98=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("anonymous_typeX%d",++anonymous_num_158))));
                if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value181;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            node_159=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=parse_struct((char*)come_increment_ref_count(type_name_98),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value182;
            __freed_obj__ = 0;
            if(_if_conditional260=!((struct sNode*)come_null_check(node_159, "05function4.c", 1162))->compile(((struct sNode*)come_null_check(node_159, "05function4.c", 1162))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional260) {
                err_msg(info,"parse_struct is failed");
                __freed_obj__ = 0;
                __result74__ = __result_obj__ = (come_save_stackframe("05function4.c", 1159), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value186=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value185=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1159))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value184=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value183=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1159)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
                if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value183;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value184;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value185);
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value185;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value186;
                __freed_obj__ = 0;
                return __result74__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            pointer_num_160=0;
            __freed_obj__ = 0;
            while(_while_condtional28=*((struct sInfo*)come_null_check(info, "05function4.c", 1169))->p==42,            __freed_obj__ = 0, 
            _while_condtional28) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1165))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                pointer_num_160++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj89=type_148;
            type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value187=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1169)))),type_name_98,(_Bool)0,info))));
            if(__dec_obj89) { come_call_finalizer(sType_finalize,__dec_obj89, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
            if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value187;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value188);
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value188;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_148, "05function4.c", 1171))->mPointerNum=pointer_num_160;
            __freed_obj__ = 0;
            if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional261=enum__111,            __freed_obj__ = 0, 
            _if_conditional261) {
                if(_if_conditional262=string_operator_equals(type_name_98,""),                __freed_obj__ = 0, 
                _if_conditional262) {
                    __dec_obj90=type_name_98;
                    type_name_98=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("anonymous_typeY%d",++anonymous_num_158))));
                    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value189;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=parse_enum((char*)come_increment_ref_count(type_name_98),info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value190;
                __freed_obj__ = 0;
                if(_if_conditional263=!((struct sInfo*)come_null_check(info, "05function4.c", 1187))->no_output_err,                __freed_obj__ = 0, 
                _if_conditional263) {
                    if(_if_conditional264=!((struct sNode*)come_null_check(node_161, "05function4.c", 1185))->compile(((struct sNode*)come_null_check(node_161, "05function4.c", 1185))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional264) {
                        printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1182))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1182))->sline);
                        __freed_obj__ = 0;
                        __result75__ = __result_obj__ = (come_save_stackframe("05function4.c", 1183), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value194=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value193=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1183))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value192=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value191=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1183)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(node_161 && !__freed_obj__) { node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                        if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value191;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value192;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
                        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value193;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value194);
                        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value194;
                        __freed_obj__ = 0;
                        return __result75__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj91=type_148;
                type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value195=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1187)))),type_name_98,(_Bool)0,info))));
                if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value195;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value196);
                if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value196;
                __freed_obj__ = 0;
                if(node_161 && !__freed_obj__) { node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional265=union__110,                __freed_obj__ = 0, 
                _if_conditional265) {
                    if(_if_conditional266=string_operator_equals(type_name_98,""),                    __freed_obj__ = 0, 
                    _if_conditional266) {
                        __dec_obj92=type_name_98;
                        type_name_98=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("anonymous_typeZ%d",++anonymous_num_158))));
                        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value197;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    node_162=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=parse_union((char*)come_increment_ref_count(type_name_98),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value198;
                    __freed_obj__ = 0;
                    if(_if_conditional267=!((struct sNode*)come_null_check(node_162, "05function4.c", 1203))->compile(((struct sNode*)come_null_check(node_162, "05function4.c", 1203))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional267) {
                        printf("%s %d: compiling is failed(X)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1198))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1198))->sline);
                        __freed_obj__ = 0;
                        __result76__ = __result_obj__ = (come_save_stackframe("05function4.c", 1199), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value202=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value201=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1199))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value200=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value199=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1199)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                        if(node_162 && !__freed_obj__) { node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                        if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value199;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
                        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value200;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value201);
                        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value201;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value202;
                        __freed_obj__ = 0;
                        return __result76__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    pointer_num_163=0;
                    __freed_obj__ = 0;
                    while(_while_condtional29=*((struct sInfo*)come_null_check(info, "05function4.c", 1210))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional29) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1206))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        pointer_num_163++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj93=type_148;
                    type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1210)))),type_name_98,(_Bool)0,info))));
                    if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value203);
                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value203;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value204);
                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value204;
                    __freed_obj__ = 0;
                    ((struct sType*)come_null_check(type_148, "05function4.c", 1212))->mPointerNum=pointer_num_163;
                    __freed_obj__ = 0;
                    if(node_162 && !__freed_obj__) { node_162 = come_decrement_ref_count(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    err_msg(info,"unexpected { character");
                    __freed_obj__ = 0;
                    __result77__ = __result_obj__ = (come_save_stackframe("05function4.c", 1216), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value208=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value207=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1216))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value206=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value205=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1216)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                    if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                    if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                    if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value205;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value206);
                    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value206;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value207);
                    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value207;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value208);
                    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value208;
                    __freed_obj__ = 0;
                    return __result77__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional268=parse_variable_name,        __freed_obj__ = 0, 
        _if_conditional268) {
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional269=var_name_between_brace_154&&*((struct sInfo*)come_null_check(info, "05function4.c", 1226))->p==40,            __freed_obj__ = 0, 
            _if_conditional269) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1222))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional270=*((struct sInfo*)come_null_check(info, "05function4.c", 1243))->p==58,            __freed_obj__ = 0, 
            _if_conditional270) {
                __dec_obj94=var_name_149;
                var_name_149=(char*)come_increment_ref_count(((char*)(right_value209=__builtin_string(""))));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value209;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional271=anonymous_name_118,                __freed_obj__ = 0, 
                _if_conditional271) {
                    __freed_obj__ = 0;
                    num_anonymous_var_name_164++;
                    __freed_obj__ = 0;
                    __dec_obj95=var_name_149;
                    var_name_149=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_164))));
                    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value210;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional272=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1243))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1243))->p==95,                    __freed_obj__ = 0, 
                    _if_conditional272) {
                        __dec_obj96=var_name_149;
                        var_name_149=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1235),((struct optional$2charphbool*)(right_value211=parse_word(info))))));
                        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value211;
                        __freed_obj__ = 0;
                    }
                    else {
                        __freed_obj__ = 0;
                        num_anonymous_var_name_165++;
                        __freed_obj__ = 0;
                        __dec_obj97=var_name_149;
                        var_name_149=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_165))));
                        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value212;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional273=var_name_between_brace_154&&*((struct sInfo*)come_null_check(info, "05function4.c", 1248))->p==41,            __freed_obj__ = 0, 
            _if_conditional273) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1244))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional274=*((struct sInfo*)come_null_check(info, "05function4.c", 1259))->p==58,            __freed_obj__ = 0, 
            _if_conditional274) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1249))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                no_comma_166=((struct sInfo*)come_null_check(info, "05function4.c", 1252))->no_comma;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 1253))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value213;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "05function4.c", 1255))->no_comma=no_comma_166;
                __freed_obj__ = 0;
                __dec_obj98=((struct sType*)come_null_check(type_148, "05function4.c", 1257))->mSizeNum;
                ((struct sType*)come_null_check(type_148, "05function4.c", 1257))->mSizeNum=(struct sNode*)come_increment_ref_count(node_167);
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                if(node_167 && !__freed_obj__) { node_167 = come_decrement_ref_count(node_167, ((struct sNode*)node_167)->finalize, ((struct sNode*)node_167)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional275=lambda_flag_145,        __freed_obj__ = 0, 
        _if_conditional275) {
            __freed_obj__ = 0;
            if(_if_conditional282=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1277),((struct optional$2sTypepbool*)(right_value223=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1277))->types,type_name_98))))),            come_pop_stackframe() ,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223),
            (right_value223 && right_value223 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value223, 
            __freed_obj__ = 0, 
            _if_conditional282) {
                __dec_obj99=result_type_168;
                result_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1264),((struct optional$2sTypepbool*)(right_value224=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1264))->types,type_name_98)))))))));
                if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value224;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
                if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value225;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional288=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1277))->generics_type_names, "05function4.c", 1277)),(char*)come_increment_ref_count(type_name_98)),                __freed_obj__ = 0, 
                _if_conditional288) {
                    for(
                    i_179=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA4=                    i_179<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1272))->generics_type_names, "05function4.c", 1272))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA4;                    i_179++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional291=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1271),((struct optional$2charphbool*)(right_value230=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1271))->generics_type_names,i_179))))),type_name_98),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230),
                        (right_value230 && right_value230 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value230, 
                        __freed_obj__ = 0, 
                        _if_conditional291) {
                            __dec_obj100=result_type_168;
                            result_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value233=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1269)))),((char*)(right_value232=xsprintf("generics_type%d",i_179))),(_Bool)0,info))));
                            if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value231;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value232;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
                            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value233;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj101=result_type_168;
                    result_type_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value234=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1274)))),type_name_98,(_Bool)0,info))));
                    if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value234;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value235;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1277))->mConstant=((struct sType*)come_null_check(result_type_168, "05function4.c", 1277))->mConstant||constant_99;
            __freed_obj__ = 0;
            __dec_obj102=((struct sType*)come_null_check(result_type_168, "05function4.c", 1278))->mAlignas;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1278))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__116);
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1279))->mComeMemCore=((struct sType*)come_null_check(result_type_168, "05function4.c", 1279))->mComeMemCore||come_mem_core__115;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1280))->mRegister=register__103;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1281))->mUnsigned=((struct sType*)come_null_check(result_type_168, "05function4.c", 1281))->mUnsigned||unsigned__104;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1282))->mVolatile=volatile__102;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1283))->mStatic=((struct sType*)come_null_check(result_type_168, "05function4.c", 1283))->mStatic||static__100;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1284))->mExtern=((struct sType*)come_null_check(result_type_168, "05function4.c", 1284))->mExtern||extern__113;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1285))->mInline=((struct sType*)come_null_check(result_type_168, "05function4.c", 1285))->mInline||inline__114;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1286))->mRestrict=((struct sType*)come_null_check(result_type_168, "05function4.c", 1286))->mRestrict||restrict__108;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1287))->mLongLong=((struct sType*)come_null_check(result_type_168, "05function4.c", 1287))->mLongLong||long_long_106;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1288))->mLong=((struct sType*)come_null_check(result_type_168, "05function4.c", 1288))->mLong||long__105;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1289))->mShort=((struct sType*)come_null_check(result_type_168, "05function4.c", 1289))->mShort||short__107;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(result_type_168, "05function4.c", 1290))->mPointerNum=pointer_num_144;
            __freed_obj__ = 0;
            __dec_obj103=var_name_149;
            var_name_149=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1292),((struct optional$2charphbool*)(right_value236=parse_word(info))))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value236;
            __freed_obj__ = 0;
            multiple_assgin_var2=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("05function4.c", 1294),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value237=parse_params(info)))));
            param_types_184=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var2->v1);
            param_names_185=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v2);
            param_default_parametors_186=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var2->v3);
            var_args_187=multiple_assgin_var2->v4;
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value237;
            __freed_obj__ = 0;
            __dec_obj104=type_148;
            type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value238=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1296)))),"lambda",(_Bool)0,info))));
            if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value238);
            if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value238;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value239);
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value239;
            __freed_obj__ = 0;
            __dec_obj106=((struct sType*)come_null_check(type_148, "05function4.c", 1298))->mResultType;
            ((struct sType*)come_null_check(type_148, "05function4.c", 1298))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value242=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value240=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1298)))),(struct sType*)come_increment_ref_count(result_type_168)))));
            if(__dec_obj106) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value240);
            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value240;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value242);
            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value242;
            __freed_obj__ = 0;
            __dec_obj107=((struct sType*)come_null_check(type_148, "05function4.c", 1299))->mParamTypes;
            ((struct sType*)come_null_check(type_148, "05function4.c", 1299))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_184);
            if(__dec_obj107) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            __dec_obj108=((struct sType*)come_null_check(type_148, "05function4.c", 1300))->mParamNames;
            ((struct sType*)come_null_check(type_148, "05function4.c", 1300))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_185);
            if(__dec_obj108) { come_call_finalizer(list$1charph_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_148, "05function4.c", 1301))->mVarArgs=var_args_187;
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_148, "05function4.c", 1302))->mExtern=extern__113;
            __freed_obj__ = 0;
            if(result_type_168 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_168, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_types_184 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_184, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_names_185 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_185, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(param_default_parametors_186 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional293=function_pointer_flag_150,            __freed_obj__ = 0, 
            _if_conditional293) {
                ((struct sInfo*)come_null_check(info, "05function4.c", 1305))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                skip_pointer_attribute(info);
                __freed_obj__ = 0;
                if(_if_conditional294=*((struct sInfo*)come_null_check(info, "05function4.c", 1315))->p==42||*((struct sInfo*)come_null_check(info, "05function4.c", 1315))->p==94,                __freed_obj__ = 0, 
                _if_conditional294) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1311))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                skip_pointer_attribute(info);
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                if(_if_conditional295=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1333),__exception_result_var_b2=((struct optional$2sTypepbool*)(right_value243=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1333))->types,type_name_98))), come_pop_stackframe(), __exception_result_var_b2)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243),
                (right_value243 && right_value243 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value243, 
                __freed_obj__ = 0, 
                _if_conditional295) {
                    __dec_obj109=result_type_188;
                    result_type_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1319),((struct optional$2sTypepbool*)(right_value244=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1319))->types,type_name_98)))))))));
                    if(__dec_obj109) { come_call_finalizer(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value244;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
                    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value245;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional296=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1333))->generics_type_names, "05function4.c", 1333)),(char*)come_increment_ref_count(type_name_98)),                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        for(
                        i_189=0 ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA5=                        i_189<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1328))->generics_type_names, "05function4.c", 1328))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA5;                        i_189++ ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional297=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1327),__exception_result_var_b3=((struct optional$2charphbool*)(right_value246=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1327))->generics_type_names,i_189))), come_pop_stackframe(), __exception_result_var_b3)),type_name_98),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246),
                            (right_value246 && right_value246 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value246, 
                            __freed_obj__ = 0, 
                            _if_conditional297) {
                                __dec_obj110=result_type_188;
                                result_type_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value247=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1325)))),((char*)(right_value248=xsprintf("generics_type%d",i_189))),(_Bool)0,info))));
                                if(__dec_obj110) { come_call_finalizer(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                                if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value247;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value248);
                                if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value248;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value249);
                                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value249;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj111=result_type_188;
                        result_type_188=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value250=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1330)))),type_name_98,(_Bool)0,info))));
                        if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value250;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
                        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value251;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1333))->mConstant=((struct sType*)come_null_check(result_type_188, "05function4.c", 1333))->mConstant||constant_99;
                __freed_obj__ = 0;
                __dec_obj112=((struct sType*)come_null_check(result_type_188, "05function4.c", 1334))->mAlignas;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1334))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__116);
                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0); }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1335))->mComeMemCore=((struct sType*)come_null_check(result_type_188, "05function4.c", 1335))->mComeMemCore||come_mem_core__115;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1336))->mRegister=register__103;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1337))->mUnsigned=((struct sType*)come_null_check(result_type_188, "05function4.c", 1337))->mUnsigned||unsigned__104;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1338))->mVolatile=volatile__102;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1339))->mStatic=((struct sType*)come_null_check(result_type_188, "05function4.c", 1339))->mStatic||static__100;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1340))->mExtern=((struct sType*)come_null_check(result_type_188, "05function4.c", 1340))->mExtern||extern__113;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1341))->mInline=((struct sType*)come_null_check(result_type_188, "05function4.c", 1341))->mInline||inline__114;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1342))->mRestrict=((struct sType*)come_null_check(result_type_188, "05function4.c", 1342))->mRestrict||restrict__108;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1343))->mLongLong=((struct sType*)come_null_check(result_type_188, "05function4.c", 1343))->mLongLong||long_long_106;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1344))->mLong=((struct sType*)come_null_check(result_type_188, "05function4.c", 1344))->mLong||long__105;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1345))->mShort=((struct sType*)come_null_check(result_type_188, "05function4.c", 1345))->mShort||short__107;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(result_type_188, "05function4.c", 1346))->mPointerNum+=pointer_num_144;
                __freed_obj__ = 0;
                if(_if_conditional298=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1359))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1359))->p==95,                __freed_obj__ = 0, 
                _if_conditional298) {
                    __dec_obj113=var_name_149;
                    var_name_149=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1349),((struct optional$2charphbool*)(right_value252=parse_word(info))))));
                    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value252;
                    __freed_obj__ = 0;
                    if(_if_conditional299=*((struct sInfo*)come_null_check(info, "05function4.c", 1353))->p==40,                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        __result102__ = __result_obj__ = (come_save_stackframe("05function4.c", 1351), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value256=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value255=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1351))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value254=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value253=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1351)))),(struct sType*)come_increment_ref_count(result_type_188),(char*)come_increment_ref_count(var_name_149),(_Bool)0)))),(_Bool)0))));
                        if(result_type_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                        if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value253;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value254);
                        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value254;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value255);
                        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value255;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value256);
                        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value256;
                        __freed_obj__ = 0;
                        return __result102__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __freed_obj__ = 0;
                    num_anonymous_var_name_190++;
                    __freed_obj__ = 0;
                    __dec_obj114=var_name_149;
                    var_name_149=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_190))));
                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value257;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                optional$2intbool_value((come_push_stackframe("05function4.c", 1359),((struct optional$2intbool*)(right_value258=expected_next_character(41,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value258;
                __freed_obj__ = 0;
                multiple_assgin_var3=optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value((come_push_stackframe("05function4.c", 1361),((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)(right_value259=parse_params(info)))));
                param_types_191=(struct list$1sTypeph*)come_increment_ref_count(multiple_assgin_var3->v1);
                param_names_192=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v2);
                param_default_parametors_193=(struct list$1charph*)come_increment_ref_count(multiple_assgin_var3->v3);
                var_args_194=multiple_assgin_var3->v4;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value259);
                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphboolp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value259;
                __freed_obj__ = 0;
                __dec_obj115=type_148;
                type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value260=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1363)))),"lambda",(_Bool)0,info))));
                if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value260);
                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value260;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value261);
                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value261;
                __freed_obj__ = 0;
                __dec_obj116=((struct sType*)come_null_check(type_148, "05function4.c", 1365))->mResultType;
                ((struct sType*)come_null_check(type_148, "05function4.c", 1365))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value263=tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value262=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05function4.c", 1365)))),(struct sType*)come_increment_ref_count(result_type_188)))));
                if(__dec_obj116) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value262);
                if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[5] = right_value262;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value263);
                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value263;
                __freed_obj__ = 0;
                __dec_obj117=((struct sType*)come_null_check(type_148, "05function4.c", 1366))->mParamTypes;
                ((struct sType*)come_null_check(type_148, "05function4.c", 1366))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_191);
                if(__dec_obj117) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                __dec_obj118=((struct sType*)come_null_check(type_148, "05function4.c", 1367))->mParamNames;
                ((struct sType*)come_null_check(type_148, "05function4.c", 1367))->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_192);
                if(__dec_obj118) { come_call_finalizer(list$1charph_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(type_148, "05function4.c", 1368))->mVarArgs=var_args_194;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(type_148, "05function4.c", 1369))->mExtern=extern__113;
                __freed_obj__ = 0;
                if(result_type_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_188, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_191 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_names_192 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_names_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_default_parametors_193 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,param_default_parametors_193, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional300=string_operator_equals(type_name_98,"__typeof__")&&*((struct sInfo*)come_null_check(info, "05function4.c", 1711))->p==40,                __freed_obj__ = 0, 
                _if_conditional300) {
                    ((struct sInfo*)come_null_check(info, "05function4.c", 1372))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    exp_195=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value264;
                    __freed_obj__ = 0;
                    optional$2intbool_value((come_push_stackframe("05function4.c", 1377),((struct optional$2intbool*)(right_value265=expected_next_character(41,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
                    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value265;
                    __freed_obj__ = 0;
                    if(_if_conditional301=!((struct sNode*)come_null_check(exp_195, "05function4.c", 1384))->compile(((struct sNode*)come_null_check(exp_195, "05function4.c", 1384))->_protocol_obj,info),                    __freed_obj__ = 0, 
                    _if_conditional301) {
                        err_msg(info,"invalid __typeof__ expression");
                        __freed_obj__ = 0;
                        __result105__ = __result_obj__ = (come_save_stackframe("05function4.c", 1381), ((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value269=optional$2tuple3$3voidpvoidpboolphbool_initialize(((struct optional$2tuple3$3voidpvoidpboolphbool*)(right_value268=(struct optional$2tuple3$3voidpvoidpboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3voidpvoidpboolphbool)*(1), "05function4.c", 1381))),(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value267=tuple3$3voidpvoidpbool_initialize((struct tuple3$3voidpvoidpbool*)come_increment_ref_count(((struct tuple3$3voidpvoidpbool*)(right_value266=(struct tuple3$3voidpvoidpbool*)come_calloc(1, sizeof(struct tuple3$3voidpvoidpbool)*(1), "05function4.c", 1381)))),((void*)0),((void*)0),(_Bool)0)))),(_Bool)0))));
                        if(exp_195 && !__freed_obj__) { exp_195 = come_decrement_ref_count(exp_195, ((struct sNode*)exp_195)->finalize, ((struct sNode*)exp_195)->_protocol_obj, 0, 0, 0); } 
                        if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                        if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                        if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value266;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
                        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value267;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value268);
                        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value268;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value269);
                        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value269;
                        __freed_obj__ = 0;
                        return __result105__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value270);
                    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value270;
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __freed_obj__ = 0;
                    __dec_obj120=type_148;
                    type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(((struct CVALUE*)come_null_check(come_value_196, "05function4.c", 1387))->type))));
                    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value271);
                    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value271;
                    __freed_obj__ = 0;
                    if(_if_conditional305=parse_variable_name,                    __freed_obj__ = 0, 
                    _if_conditional305) {
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        if(_if_conditional306=var_name_between_brace_154&&*((struct sInfo*)come_null_check(info, "05function4.c", 1398))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional306) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1394))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional307=*((struct sInfo*)come_null_check(info, "05function4.c", 1415))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional307) {
                            __dec_obj121=var_name_149;
                            var_name_149=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(""))));
                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
                            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value272;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional308=anonymous_name_118,                            __freed_obj__ = 0, 
                            _if_conditional308) {
                                __freed_obj__ = 0;
                                num_anonymous_var_name_197++;
                                __freed_obj__ = 0;
                                __dec_obj122=var_name_149;
                                var_name_149=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_197))));
                                if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                                if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value273;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional309=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1415))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1415))->p==95,                                __freed_obj__ = 0, 
                                _if_conditional309) {
                                    __dec_obj123=var_name_149;
                                    var_name_149=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1407),((struct optional$2charphbool*)(right_value274=parse_word(info))))));
                                    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                                    if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value274;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __freed_obj__ = 0;
                                    num_anonymous_var_name_198++;
                                    __freed_obj__ = 0;
                                    __dec_obj124=var_name_149;
                                    var_name_149=(char*)come_increment_ref_count(((char*)(right_value275=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_198))));
                                    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
                                    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value275;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional310=var_name_between_brace_154&&*((struct sInfo*)come_null_check(info, "05function4.c", 1420))->p==41,                        __freed_obj__ = 0, 
                        _if_conditional310) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1416))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional311=*((struct sInfo*)come_null_check(info, "05function4.c", 1431))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional311) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1421))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            no_comma_199=((struct sInfo*)come_null_check(info, "05function4.c", 1424))->no_comma;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1425))->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            node_200=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                            if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value276;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1427))->no_comma=no_comma_199;
                            __freed_obj__ = 0;
                            __dec_obj125=((struct sType*)come_null_check(type_148, "05function4.c", 1429))->mSizeNum;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1429))->mSizeNum=(struct sNode*)come_increment_ref_count(node_200);
                            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            if(node_200 && !__freed_obj__) { node_200 = come_decrement_ref_count(node_200, ((struct sNode*)node_200)->finalize, ((struct sNode*)node_200)->_protocol_obj, 0, 0, 0); } 
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(exp_195 && !__freed_obj__) { exp_195 = come_decrement_ref_count(exp_195, ((struct sNode*)exp_195)->finalize, ((struct sNode*)exp_195)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_196 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_196, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional312=optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1566),__exception_result_var_b4=((struct optional$2sTypepbool*)(right_value277=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1566))->types,type_name_98))), come_pop_stackframe(), __exception_result_var_b4)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277),
                    (right_value277 && right_value277 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypepboolp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value277, 
                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        __dec_obj126=type_148;
                        type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value279=sType_clone(optional$2sTypepbool_value((come_push_stackframe("05function4.c", 1435),((struct optional$2sTypepbool*)(right_value278=map$2charphsTypephp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1435))->types,type_name_98)))))))));
                        if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value278;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
                        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value279;
                        __freed_obj__ = 0;
                        __dec_obj127=((struct sType*)come_null_check(type_148, "05function4.c", 1436))->mOriginalTypeName;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1436))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string(type_name_98))));
                        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value280);
                        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value280;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1437))->mOriginalTypeNamePointerNum=pointer_num_144;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1439))->mConstant=((struct sType*)come_null_check(type_148, "05function4.c", 1439))->mConstant||constant_99;
                        __freed_obj__ = 0;
                        __dec_obj128=((struct sType*)come_null_check(type_148, "05function4.c", 1440))->mAlignas;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1440))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__116);
                        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1441))->mComeMemCore=((struct sType*)come_null_check(type_148, "05function4.c", 1441))->mComeMemCore||come_mem_core__115;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1442))->mRegister=register__103;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1443))->mUnsigned=((struct sType*)come_null_check(type_148, "05function4.c", 1443))->mUnsigned||unsigned__104;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1444))->mVolatile=volatile__102;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1445))->mStatic=((struct sType*)come_null_check(type_148, "05function4.c", 1445))->mStatic||static__100;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1446))->mExtern=((struct sType*)come_null_check(type_148, "05function4.c", 1446))->mExtern||extern__113;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1447))->mInline=((struct sType*)come_null_check(type_148, "05function4.c", 1447))->mInline||inline__114;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1448))->mRestrict=((struct sType*)come_null_check(type_148, "05function4.c", 1448))->mRestrict||restrict__108;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1449))->mLongLong=((struct sType*)come_null_check(type_148, "05function4.c", 1449))->mLongLong||long_long_106;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1450))->mLong=((struct sType*)come_null_check(type_148, "05function4.c", 1450))->mLong||long__105;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1451))->mShort=((struct sType*)come_null_check(type_148, "05function4.c", 1451))->mShort||short__107;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1452))->mPointerNum+=pointer_num_144;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional313=list$1charph_contained(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1566))->generics_type_names, "05function4.c", 1566)),(char*)come_increment_ref_count(type_name_98)),                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            for(
                            i_201=0 ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA6=                            i_201<list$1charph_length(((struct list$1charph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1461))->generics_type_names, "05function4.c", 1461))) ,                            __freed_obj__ = 0, 
                            _for_condtionalA6;                            i_201++ ,                            __freed_obj__ = 0, 
                            0                            ){
                                if(_if_conditional314=string_operator_equals(optional$2charphbool_value((come_push_stackframe("05function4.c", 1459),__exception_result_var_b5=((struct optional$2charphbool*)(right_value281=list$1charphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1459))->generics_type_names,i_201))), come_pop_stackframe(), __exception_result_var_b5)),type_name_98),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281),
                                (right_value281 && right_value281 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2charphboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value281, 
                                __freed_obj__ = 0, 
                                _if_conditional314) {
                                    __dec_obj129=type_148;
                                    type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value282=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1457)))),((char*)(right_value283=xsprintf("generics_type%d",i_201))),(_Bool)0,info))));
                                    if(__dec_obj129) { come_call_finalizer(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                                    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value282;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
                                    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value283;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
                                    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value284;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1461))->mConstant=((struct sType*)come_null_check(type_148, "05function4.c", 1461))->mConstant||constant_99;
                            __freed_obj__ = 0;
                            __dec_obj130=((struct sType*)come_null_check(type_148, "05function4.c", 1462))->mAlignas;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1462))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__116);
                            if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1463))->mComeMemCore=((struct sType*)come_null_check(type_148, "05function4.c", 1463))->mComeMemCore||come_mem_core__115;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1464))->mRegister=register__103;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1465))->mUnsigned=((struct sType*)come_null_check(type_148, "05function4.c", 1465))->mUnsigned||unsigned__104;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1466))->mVolatile=volatile__102;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1467))->mStatic=((struct sType*)come_null_check(type_148, "05function4.c", 1467))->mStatic||static__100;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1468))->mExtern=((struct sType*)come_null_check(type_148, "05function4.c", 1468))->mExtern||extern__113;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1469))->mInline=((struct sType*)come_null_check(type_148, "05function4.c", 1469))->mInline||inline__114;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1470))->mRestrict=((struct sType*)come_null_check(type_148, "05function4.c", 1470))->mRestrict||restrict__108;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1471))->mLongLong=((struct sType*)come_null_check(type_148, "05function4.c", 1471))->mLongLong||long_long_106;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1472))->mLong=((struct sType*)come_null_check(type_148, "05function4.c", 1472))->mLong||long__105;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1473))->mShort=((struct sType*)come_null_check(type_148, "05function4.c", 1473))->mShort||short__107;
                            __freed_obj__ = 0;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1474))->mPointerNum+=pointer_num_144;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional315=*((struct sInfo*)come_null_check(info, "05function4.c", 1566))->p==60,                            __freed_obj__ = 0, 
                            _if_conditional315) {
                                ((struct sInfo*)come_null_check(info, "05function4.c", 1477))->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                if(_if_conditional321=optional$2sClasspbool_value((come_push_stackframe("05function4.c", 1485),((struct optional$2sClasspbool*)(right_value294=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1485))->generics_classes,type_name_98)))))==((void*)0),                                come_pop_stackframe() ,                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294),
                                (right_value294 && right_value294 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sClasspboolp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value294, 
                                __freed_obj__ = 0, 
                                _if_conditional321) {
                                    __result113__ = __result_obj__ = (come_save_stackframe("05function4.c", 1482), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value298=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value297=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1482))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value296=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value295=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1482)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                    if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                                    if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                                    if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                                    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value295;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value296);
                                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value296;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value297);
                                    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value297;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value298);
                                    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value298;
                                    __freed_obj__ = 0;
                                    return __result113__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj131=type_148;
                                type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value299=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1485)))),type_name_98,(_Bool)0,info))));
                                if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value299);
                                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value299;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value300);
                                if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value300;
                                __freed_obj__ = 0;
                                while(_while_condtional33=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional33) {
                                    multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 1490),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value301=parse_type(info,(_Bool)0,(_Bool)0)))));
                                    generics_type_206=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
                                    var_name_207=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                                    err_208=multiple_assgin_var4->v3;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
                                    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value301;
                                    __freed_obj__ = 0;
                                    if(_if_conditional322=!err_208,                                    __freed_obj__ = 0, 
                                    _if_conditional322) {
                                        __result114__ = __result_obj__ = (come_save_stackframe("05function4.c", 1491), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value305=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value304=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1491))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value303=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value302=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1491)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                        if(generics_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_207 && !__freed_obj__) { var_name_207 = come_decrement_ref_count(var_name_207, (void*)0, (void*)0, 0, 0, 0); }
                                        if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                                        if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                                        if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                                        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value302;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value303);
                                        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value303;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value304);
                                        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value304;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value305);
                                        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[3] = right_value305;
                                        __freed_obj__ = 0;
                                        return __result114__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1494))->mGenericsTypes, "05function4.c", 1494)),(struct sType*)come_increment_ref_count(generics_type_206));
                                    __freed_obj__ = 0;
                                    if(_if_conditional323=*((struct sInfo*)come_null_check(info, "05function4.c", 1510))->p==44,                                    __freed_obj__ = 0, 
                                    _if_conditional323) {
                                        ((struct sInfo*)come_null_check(info, "05function4.c", 1497))->p++;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional324=*((struct sInfo*)come_null_check(info, "05function4.c", 1510))->p==62,                                        __freed_obj__ = 0, 
                                        _if_conditional324) {
                                            ((struct sInfo*)come_null_check(info, "05function4.c", 1501))->p++;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            if(generics_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_207 && !__freed_obj__) { var_name_207 = come_decrement_ref_count(var_name_207, (void*)0, (void*)0, 0, 0, 0); }
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            err_msg(info,"invalid generics type\n");
                                            __freed_obj__ = 0;
                                            __result115__ = __result_obj__ = (come_save_stackframe("05function4.c", 1508), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value309=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value308=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1508))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value307=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value306=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1508)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                            if(generics_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_207 && !__freed_obj__) { var_name_207 = come_decrement_ref_count(var_name_207, (void*)0, (void*)0, 0, 0, 0); }
                                            if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                                            if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                                            if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                                            if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value306;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
                                            if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value307;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value308);
                                            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value308;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value309);
                                            if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[3] = right_value309;
                                            __freed_obj__ = 0;
                                            return __result115__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(generics_type_206 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_206, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(var_name_207 && !__freed_obj__) { var_name_207 = come_decrement_ref_count(var_name_207, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional325=is_contained_generics_class(type_148,info),                                __freed_obj__ = 0, 
                                _if_conditional325) {
                                    __dec_obj132=type_148;
                                    type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=solve_generics(type_148,((struct sInfo*)come_null_check(info, "05function4.c", 1513))->generics_type,info))));
                                    if(__dec_obj132) { come_call_finalizer(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
                                    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value310;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional326=!output_generics_struct(type_148,type_148,info),                                    __freed_obj__ = 0, 
                                    _if_conditional326) {
                                        new_name_209=(char*)come_increment_ref_count(((char*)(right_value311=create_generics_name(type_148,info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
                                        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value311;
                                        __freed_obj__ = 0;
                                        printf("%s %d: output generics is failed(%s)\n",((struct sInfo*)come_null_check(info, "05function4.c", 1519))->sname,((struct sInfo*)come_null_check(info, "05function4.c", 1519))->sline,new_name_209);
                                        __freed_obj__ = 0;
                                        exit(7);
                                        __freed_obj__ = 0;
                                        if(new_name_209 && !__freed_obj__) { new_name_209 = come_decrement_ref_count(new_name_209, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1524))->mConstant=((struct sType*)come_null_check(type_148, "05function4.c", 1524))->mConstant||constant_99;
                                __freed_obj__ = 0;
                                __dec_obj133=((struct sType*)come_null_check(type_148, "05function4.c", 1525))->mAlignas;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1525))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__116);
                                if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1526))->mComeMemCore=((struct sType*)come_null_check(type_148, "05function4.c", 1526))->mComeMemCore||come_mem_core__115;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1527))->mRegister=register__103;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1528))->mUnsigned=((struct sType*)come_null_check(type_148, "05function4.c", 1528))->mUnsigned||unsigned__104;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1529))->mVolatile=volatile__102;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1530))->mStatic=((struct sType*)come_null_check(type_148, "05function4.c", 1530))->mStatic||static__100;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1531))->mExtern=((struct sType*)come_null_check(type_148, "05function4.c", 1531))->mExtern||extern__113;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1532))->mInline=((struct sType*)come_null_check(type_148, "05function4.c", 1532))->mInline||inline__114;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1533))->mRestrict=((struct sType*)come_null_check(type_148, "05function4.c", 1533))->mRestrict||restrict__108;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1534))->mLongLong=((struct sType*)come_null_check(type_148, "05function4.c", 1534))->mLongLong||long_long_106;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1535))->mLong=((struct sType*)come_null_check(type_148, "05function4.c", 1535))->mLong||long__105;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1536))->mShort=((struct sType*)come_null_check(type_148, "05function4.c", 1536))->mShort||short__107;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1537))->mPointerNum+=pointer_num_144;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional327=struct__109,                                __freed_obj__ = 0, 
                                _if_conditional327) {
                                    klass_210=optional$2sClasspbool_value((come_push_stackframe("05function4.c", 1541),((struct optional$2sClasspbool*)(right_value312=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "05function4.c", 1541))->classes,type_name_98)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
                                    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value312;
                                    __freed_obj__ = 0;
                                    if(_if_conditional328=klass_210==((void*)0)&&*((struct sInfo*)come_null_check(info, "05function4.c", 1546))->p!=60,                                    __freed_obj__ = 0, 
                                    _if_conditional328) {
                                        map$2charphsClassph_insert(((struct map$2charphsClassph*)come_null_check(((struct sInfo*)come_null_check(info, "05function4.c", 1544))->classes, "05function4.c", 1544)),(char*)come_increment_ref_count(type_name_98),(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value326=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value325=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05function4.c", 1544)))),type_name_98,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                                        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value325;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value326);
                                        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value326;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __dec_obj134=type_148;
                                type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value327=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1548)))),type_name_98,(_Bool)0,info))));
                                if(__dec_obj134) { come_call_finalizer(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
                                if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value327;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value328);
                                if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value328;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1550))->mConstant=((struct sType*)come_null_check(type_148, "05function4.c", 1550))->mConstant||constant_99;
                                __freed_obj__ = 0;
                                __dec_obj135=((struct sType*)come_null_check(type_148, "05function4.c", 1551))->mAlignas;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1551))->mAlignas=(struct sNode*)come_increment_ref_count(alignas__116);
                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1552))->mComeMemCore=((struct sType*)come_null_check(type_148, "05function4.c", 1552))->mComeMemCore||come_mem_core__115;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1553))->mRegister=register__103;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1554))->mUnsigned=((struct sType*)come_null_check(type_148, "05function4.c", 1554))->mUnsigned||unsigned__104;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1555))->mVolatile=volatile__102;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1556))->mStatic=((struct sType*)come_null_check(type_148, "05function4.c", 1556))->mStatic||static__100;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1557))->mExtern=((struct sType*)come_null_check(type_148, "05function4.c", 1557))->mExtern||extern__113;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1558))->mInline=((struct sType*)come_null_check(type_148, "05function4.c", 1558))->mInline||inline__114;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1559))->mRestrict=((struct sType*)come_null_check(type_148, "05function4.c", 1559))->mRestrict||restrict__108;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1560))->mLongLong=((struct sType*)come_null_check(type_148, "05function4.c", 1560))->mLongLong||long_long_106;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1561))->mLong=((struct sType*)come_null_check(type_148, "05function4.c", 1561))->mLong||long__105;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1562))->mShort=((struct sType*)come_null_check(type_148, "05function4.c", 1562))->mShort||short__107;
                                __freed_obj__ = 0;
                                ((struct sType*)come_null_check(type_148, "05function4.c", 1563))->mPointerNum+=pointer_num_144;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    while(_while_condtional43=*((struct sInfo*)come_null_check(info, "05function4.c", 1580))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional43) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1569))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1574))->mPointerNum++;
                        __freed_obj__ = 0;
                        if(_if_conditional382=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1578))->mNoSolvedGenericsType, "05function4.c", 1578))->v1,                        __freed_obj__ = 0, 
                        _if_conditional382) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1576))->mNoSolvedGenericsType, "05function4.c", 1576))->v1, "05function4.c", 1576))->mPointerNum++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional383=*((struct sInfo*)come_null_check(info, "05function4.c", 1590))->p==37,                    __freed_obj__ = 0, 
                    _if_conditional383) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1581))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1584))->mHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        if(_if_conditional384=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1588))->mNoSolvedGenericsType, "05function4.c", 1588))->v1,                        __freed_obj__ = 0, 
                        _if_conditional384) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1586))->mNoSolvedGenericsType, "05function4.c", 1586))->v1, "05function4.c", 1586))->mHeap=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional385=*((struct sInfo*)come_null_check(info, "05function4.c", 1601))->p==38,                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1591))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1594))->mNoHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        if(_if_conditional386=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1599))->mNoSolvedGenericsType, "05function4.c", 1599))->v1,                        __freed_obj__ = 0, 
                        _if_conditional386) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1597))->mNoSolvedGenericsType, "05function4.c", 1597))->v1, "05function4.c", 1597))->mHeap=(_Bool)0;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional387=*((struct sInfo*)come_null_check(info, "05function4.c", 1605))->p==63,                    __freed_obj__ = 0, 
                    _if_conditional387) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1602))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional388=*((struct sInfo*)come_null_check(info, "05function4.c", 1612))->p==124,                    __freed_obj__ = 0, 
                    _if_conditional388) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1606))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1609))->mNoCallingDestructor=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    while(_while_condtional44=*((struct sInfo*)come_null_check(info, "05function4.c", 1627))->p==42,                    __freed_obj__ = 0, 
                    _while_condtional44) {
                        ((struct sInfo*)come_null_check(info, "05function4.c", 1615))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1620))->mPointerNum++;
                        __freed_obj__ = 0;
                        if(_if_conditional389=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1625))->mNoSolvedGenericsType, "05function4.c", 1625))->v1,                        __freed_obj__ = 0, 
                        _if_conditional389) {
                            ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1623))->mNoSolvedGenericsType, "05function4.c", 1623))->v1, "05function4.c", 1623))->mPointerNum++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional390=parse_multiple_type&&*((struct sInfo*)come_null_check(info, "05function4.c", 1668))->p==44,                    __freed_obj__ = 0, 
                    _if_conditional390) {
                        types_257=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value330=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value329=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function4.c", 1628))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
                        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value329;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
                        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value330;
                        __freed_obj__ = 0;
                        list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_257, "05function4.c", 1630)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value331=sType_clone(type_148)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value331);
                        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value331;
                        __freed_obj__ = 0;
                        while(_while_condtional45=*((struct sInfo*)come_null_check(info, "05function4.c", 1645))->p==44,                        __freed_obj__ = 0, 
                        _while_condtional45) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1633))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("05function4.c", 1636),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value332=parse_type(info,(_Bool)0,(_Bool)0)))));
                            type2_258=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                            name_259=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                            err_260=multiple_assgin_var5->v3;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
                            if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value332;
                            __freed_obj__ = 0;
                            if(_if_conditional391=!err_260,                            __freed_obj__ = 0, 
                            _if_conditional391) {
                                __result140__ = __result_obj__ = (come_save_stackframe("05function4.c", 1639), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value336=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value335=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1639))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value334=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value333=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1639)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                                if(type2_258 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(name_259 && !__freed_obj__) { name_259 = come_decrement_ref_count(name_259, (void*)0, (void*)0, 0, 0, 0); }
                                if(types_257 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                                if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                                if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                                if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value333;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
                                if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value334;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
                                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value335;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
                                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[3] = right_value336;
                                __freed_obj__ = 0;
                                return __result140__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(types_257, "05function4.c", 1642)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(type2_258)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value337);
                            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value337;
                            __freed_obj__ = 0;
                            if(type2_258 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(name_259 && !__freed_obj__) { name_259 = come_decrement_ref_count(name_259, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        num_tuples_261=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(types_257, "05function4.c", 1645)));
                        __freed_obj__ = 0;
                        __dec_obj136=type_148;
                        type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value338=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1647)))),((char*)(right_value339=xsprintf("tuple%d",num_tuples_261))),(_Bool)0,info))));
                        if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value338);
                        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value338;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value339);
                        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value339;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value340);
                        if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[5] = right_value340;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1648))->mPointerNum++;
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(type_148, "05function4.c", 1649))->mHeap=(_Bool)1;
                        __freed_obj__ = 0;
                        for(
                        o2_saved_262=(struct list$1sTypeph*)come_increment_ref_count((types_257)),it_263=list$1sTypeph_begin(((struct list$1sTypeph*)come_null_check((o2_saved_262), "05function4.c", 1655))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA9=                        !list$1sTypeph_end(((struct list$1sTypeph*)come_null_check((o2_saved_262), "05function4.c", 1655))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA9;                        it_263=list$1sTypeph_next(((struct list$1sTypeph*)come_null_check((o2_saved_262), "05function4.c", 1655))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            list$1sTypeph_push_back(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1652))->mGenericsTypes, "05function4.c", 1652)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(it_263)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value341;
                            __freed_obj__ = 0;
                        }
                        if(o2_saved_262 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_262, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional392=is_contained_generics_class(type_148,info),                        __freed_obj__ = 0, 
                        _if_conditional392) {
                            __dec_obj137=type_148;
                            type_148=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=solve_generics(type_148,((struct sInfo*)come_null_check(info, "05function4.c", 1656))->generics_type,info))));
                            if(__dec_obj137) { come_call_finalizer(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value342;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional393=!output_generics_struct(type_148,type_148,info),                            __freed_obj__ = 0, 
                            _if_conditional393) {
                                new_name_264=(char*)come_increment_ref_count(((char*)(right_value343=create_generics_name(type_148,info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                                if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value343;
                                __freed_obj__ = 0;
                                printf("output generics is failed(%s)\n",new_name_264);
                                __freed_obj__ = 0;
                                exit(9);
                                __freed_obj__ = 0;
                                if(new_name_264 && !__freed_obj__) { new_name_264 = come_decrement_ref_count(new_name_264, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(types_257 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,types_257, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional394=parse_variable_name,                    __freed_obj__ = 0, 
                    _if_conditional394) {
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        if(_if_conditional395=var_name_between_brace_154&&*((struct sInfo*)come_null_check(info, "05function4.c", 1676))->p==40,                        __freed_obj__ = 0, 
                        _if_conditional395) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1672))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional396=*((struct sInfo*)come_null_check(info, "05function4.c", 1693))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional396) {
                            __dec_obj138=var_name_149;
                            var_name_149=(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(""))));
                            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                            if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value344;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional397=anonymous_name_118,                            __freed_obj__ = 0, 
                            _if_conditional397) {
                                __freed_obj__ = 0;
                                num_anonymous_var_name_265++;
                                __freed_obj__ = 0;
                                __dec_obj139=var_name_149;
                                var_name_149=(char*)come_increment_ref_count(((char*)(right_value345=xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_265))));
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value345;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional398=xisalnum(*((struct sInfo*)come_null_check(info, "05function4.c", 1693))->p)||*((struct sInfo*)come_null_check(info, "05function4.c", 1693))->p==95,                                __freed_obj__ = 0, 
                                _if_conditional398) {
                                    __dec_obj140=var_name_149;
                                    var_name_149=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("05function4.c", 1685),((struct optional$2charphbool*)(right_value346=parse_word(info))))));
                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value346;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __freed_obj__ = 0;
                                    num_anonymous_var_name_266++;
                                    __freed_obj__ = 0;
                                    __dec_obj141=var_name_149;
                                    var_name_149=(char*)come_increment_ref_count(((char*)(right_value347=xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_266))));
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value347;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional399=var_name_between_brace_154&&*((struct sInfo*)come_null_check(info, "05function4.c", 1698))->p==41,                        __freed_obj__ = 0, 
                        _if_conditional399) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1694))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional400=*((struct sInfo*)come_null_check(info, "05function4.c", 1709))->p==58,                        __freed_obj__ = 0, 
                        _if_conditional400) {
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1699))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            no_comma_267=((struct sInfo*)come_null_check(info, "05function4.c", 1702))->no_comma;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1703))->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            node_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value348;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "05function4.c", 1705))->no_comma=no_comma_267;
                            __freed_obj__ = 0;
                            __dec_obj142=((struct sType*)come_null_check(type_148, "05function4.c", 1707))->mSizeNum;
                            ((struct sType*)come_null_check(type_148, "05function4.c", 1707))->mSizeNum=(struct sNode*)come_increment_ref_count(node_268);
                            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            if(node_268 && !__freed_obj__) { node_268 = come_decrement_ref_count(node_268, ((struct sNode*)node_268)->finalize, ((struct sNode*)node_268)->_protocol_obj, 0, 0, 0); } 
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
    while(_while_condtional46=*((struct sInfo*)come_null_check(info, "05function4.c", 1735))->p==91,    __freed_obj__ = 0, 
    _while_condtional46) {
        ((struct sInfo*)come_null_check(info, "05function4.c", 1714))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        skip_pointer_attribute(info);
        __freed_obj__ = 0;
        if(_if_conditional401=*((struct sInfo*)come_null_check(info, "05function4.c", 1727))->p==93,        __freed_obj__ = 0, 
        _if_conditional401) {
            ((struct sInfo*)come_null_check(info, "05function4.c", 1721))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            ((struct sType*)come_null_check(type_148, "05function4.c", 1724))->mPointerNum++;
            __freed_obj__ = 0;
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        node_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
        if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value349;
        __freed_obj__ = 0;
        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type_148, "05function4.c", 1730))->mArrayNum, "05function4.c", 1730)),(struct sNode*)come_increment_ref_count(node_269));
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        optional$2intbool_value((come_push_stackframe("05function4.c", 1733),((struct optional$2intbool*)(right_value350=expected_next_character(93,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value350);
        if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value350;
        __freed_obj__ = 0;
        if(node_269 && !__freed_obj__) { node_269 = come_decrement_ref_count(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    asm_name_270=(char*)come_increment_ref_count(((char*)(right_value351=parse_attribute(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value351);
    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value351;
    __freed_obj__ = 0;
    __dec_obj143=((struct sType*)come_null_check(type_148, "05function4.c", 1737))->mAsmName;
    ((struct sType*)come_null_check(type_148, "05function4.c", 1737))->mAsmName=(char*)come_increment_ref_count(asm_name_270);
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if(_if_conditional402=exception__101,    __freed_obj__ = 0, 
    _if_conditional402) {
        type2_271=(struct sType*)come_increment_ref_count(((struct sType*)(right_value353=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value352=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1742)))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value352;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value353);
        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value353;
        __freed_obj__ = 0;
        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_271, "05function4.c", 1743))->mGenericsTypes, "05function4.c", 1743)),(struct sType*)come_increment_ref_count(type_148));
        __freed_obj__ = 0;
        list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_271, "05function4.c", 1744))->mGenericsTypes, "05function4.c", 1744)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value355=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value354=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function4.c", 1744)))),"bool",(_Bool)0,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value354);
        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value354;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value355);
        if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value355;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_271, "05function4.c", 1746))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_271, "05function4.c", 1747))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(type2_271, "05function4.c", 1749))->mException=(_Bool)1;
        __freed_obj__ = 0;
        if(_if_conditional403=!is_contained_generics_class(type2_271,info),        __freed_obj__ = 0, 
        _if_conditional403) {
            if(_if_conditional404=!output_generics_struct(type2_271,type2_271,info),            __freed_obj__ = 0, 
            _if_conditional404) {
                err_msg(info,"invalid exception definition");
                __freed_obj__ = 0;
                __result141__ = __result_obj__ = (come_save_stackframe("05function4.c", 1754), ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value359=optional$2tuple3$3sTypephcharphboolphbool_initialize(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value358=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1754))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value357=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value356=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1754)))),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)))),(_Bool)0))));
                if(type2_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_271, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
                if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
                if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
                if(asm_name_270 && !__freed_obj__) { asm_name_270 = come_decrement_ref_count(asm_name_270, (void*)0, (void*)0, 0, 0, 0); }
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
                return __result141__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result142__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value363=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value362=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1758)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value361=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value360=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1758)))),(struct sType*)come_increment_ref_count(type2_271),(char*)come_increment_ref_count(var_name_149),(_Bool)1)))),(_Bool)1)));
        if(type2_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_271, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
        if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
        if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
        if(asm_name_270 && !__freed_obj__) { asm_name_270 = come_decrement_ref_count(asm_name_270, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value360);
        if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value360;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value361);
        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value361;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value362);
        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value362;
        __freed_obj__ = 0;
        return __result142__;
        __freed_obj__ = 0;
        if(type2_271 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_271, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result143__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value367=optional$2tuple3$3sTypephcharphboolphbool_initialize((struct optional$2tuple3$3sTypephcharphboolphbool*)come_increment_ref_count(((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value366=(struct optional$2tuple3$3sTypephcharphboolphbool*)come_calloc(1, sizeof(struct optional$2tuple3$3sTypephcharphboolphbool)*(1), "05function4.c", 1761)))),(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value365=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count(((struct tuple3$3sTypephcharphbool*)(right_value364=(struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05function4.c", 1761)))),(struct sType*)come_increment_ref_count(type_148),(char*)come_increment_ref_count(var_name_149),(_Bool)1)))),(_Bool)1)));
    if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
    if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_270 && !__freed_obj__) { asm_name_270 = come_decrement_ref_count(asm_name_270, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value364);
    if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value364;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value365);
    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value365;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value366);
    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value366;
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
    if(type_name_98 && !__freed_obj__) { type_name_98 = come_decrement_ref_count(type_name_98, (void*)0, (void*)0, 0, 0, 0); }
    if(alignas__116 && !__freed_obj__) { alignas__116 = come_decrement_ref_count(alignas__116, ((struct sNode*)alignas__116)->finalize, ((struct sNode*)alignas__116)->_protocol_obj, 0, 0, 0); } 
    if(type_148 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_149 && !__freed_obj__) { var_name_149 = come_decrement_ref_count(var_name_149, (void*)0, (void*)0, 0, 0, 0); }
    if(asm_name_270 && !__freed_obj__) { asm_name_270 = come_decrement_ref_count(asm_name_270, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value114;
struct sType* __dec_obj49;
void* right_value115;
char* __dec_obj50;
struct tuple3$3sTypephcharphbool* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
                                __dec_obj49=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1810))->v1;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1810))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(v1))));
                                if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                                if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value114;
                                __freed_obj__ = 0;
                                __dec_obj50=((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1811))->v2;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1811))->v2=(char*)come_increment_ref_count(((char*)(right_value115=string_clone(v2))));
                                if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
                                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value115;
                                __freed_obj__ = 0;
                                ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "./comelang2.h", 1812))->v3=v3;
                                __freed_obj__ = 0;
                                __result67__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result67__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, (void*)0, (void*)0, 0, 1, 0); }
}

static struct optional$2tuple3$3sTypephcharphboolphbool* optional$2tuple3$3sTypephcharphboolphbool_initialize(struct optional$2tuple3$3sTypephcharphboolphbool* self, struct tuple3$3sTypephcharphbool* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3sTypephcharphbool* __dec_obj51;
struct optional$2tuple3$3sTypephcharphboolphbool* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj51=((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                                ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count(v1);
                                if(__dec_obj51) { come_call_finalizer(tuple3$3sTypephcharphbool_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result68__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result68__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional193=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional193) {
                                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional194=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional194) {
                                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphbool_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct optional$2sTypepbool* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* default_value_169;
unsigned int hash_170;
unsigned int it_171;
_Bool _while_condtional30;
_Bool _if_conditional276;
void* right_value214;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional278;
void* right_value215;
void* right_value216;
struct optional$2sTypepbool* __result81__;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value217;
void* right_value218;
struct optional$2sTypepbool* __result82__;
void* right_value219;
void* right_value220;
struct optional$2sTypepbool* __result83__;
void* right_value221;
void* right_value222;
struct optional$2sTypepbool* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_169, 0, sizeof(struct sType*));
memset(&hash_170, 0, sizeof(unsigned int));
memset(&it_171, 0, sizeof(unsigned int));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_169,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                hash_170=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1553)))%((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1553))->size;
                __freed_obj__ = 0;
                it_171=hash_170;
                __freed_obj__ = 0;
                while(_while_condtional30=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional30) {
                    if(_if_conditional276=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1576))->item_existance[it_171],                    __freed_obj__ = 0, 
                    _if_conditional276) {
                        if(_if_conditional278=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1564),__exception_result_var_b1=((struct optional$2boolbool*)(right_value214=string_equals(((char*)come_null_check(((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1564))->keys[it_171], "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214),
                        (right_value214 && right_value214 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value214, 
                        __freed_obj__ = 0, 
                        _if_conditional278) {
                            __result81__ = __result_obj__ = ((struct optional$2sTypepbool*)(right_value216=optional$2sTypepbool_initialize((struct optional$2sTypepbool*)come_increment_ref_count(((struct optional$2sTypepbool*)(right_value215=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1561)))),((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1561))->items[it_171],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value215;
                            __freed_obj__ = 0;
                            return __result81__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_171++;
                        __freed_obj__ = 0;
                        if(_if_conditional279=it_171>=((struct map$2charphsTypeph*)come_null_check(self, "./comelang2.h", 1572))->size,                        __freed_obj__ = 0, 
                        _if_conditional279) {
                            it_171=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional280=it_171==hash_170,                            __freed_obj__ = 0, 
                            _if_conditional280) {
                                __result82__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1570), ((struct optional$2sTypepbool*)(right_value218=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value217=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1570))),default_value_169,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                                if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value217;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
                                if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value218;
                                __freed_obj__ = 0;
                                return __result82__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result83__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1574), ((struct optional$2sTypepbool*)(right_value220=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value219=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1574))),default_value_169,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                        if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value219;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220);
                        if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value220;
                        __freed_obj__ = 0;
                        return __result83__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result84__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1578), ((struct optional$2sTypepbool*)(right_value222=optional$2sTypepbool_initialize(((struct optional$2sTypepbool*)(right_value221=(struct optional$2sTypepbool*)come_calloc(1, sizeof(struct optional$2sTypepbool)*(1), "./comelang2.h", 1578))),default_value_169,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value221;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value222;
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
_Bool default_value_172;
_Bool __result78__;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_172, 0, sizeof(_Bool));
                            if(_if_conditional277=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional277) {
                                __freed_obj__ = 0;
                                memset(&default_value_172,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result78__ = default_value_172;
                                __freed_obj__ = 0;
                                return __result78__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result79__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result79__;
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

static struct optional$2sTypepbool* optional$2sTypepbool_initialize(struct optional$2sTypepbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sTypepbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result80__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypepboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result80__;
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
_Bool _if_conditional281;
struct sType* default_value_173;
struct sType* __result85__;
struct sType* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_173, 0, sizeof(struct sType*));
                if(_if_conditional281=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional281) {
                    __freed_obj__ = 0;
                    memset(&default_value_173,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result85__ = __result_obj__ = default_value_173;
                    __freed_obj__ = 0;
                    return __result85__;
                    __freed_obj__ = 0;
                }
                else {
                    __result86__ = __result_obj__ = ((struct optional$2sTypepbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result86__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* it_176;
_Bool _for_condtionalA3;
_Bool _if_conditional287;
_Bool __result94__;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_176, 0, sizeof(char*));
                    for(
                    it_176=list$1charph_begin(((struct list$1charph*)come_null_check(self, "./comelang2.h", 767))) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA3=                    !list$1charph_end(((struct list$1charph*)come_null_check(self, "./comelang2.h", 767))) ,                    __freed_obj__ = 0, 
                    _for_condtionalA3;                    it_176=list$1charph_next(((struct list$1charph*)come_null_check(self, "./comelang2.h", 767))) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional287=string_operator_equals(it_176,item),                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            __result94__ = (_Bool)1;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result94__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result95__ = (_Bool)0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result95__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
char* result_174;
char* __result87__;
_Bool _if_conditional284;
char* __result88__;
char* result_175;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_174, 0, sizeof(char*));
memset(&result_175, 0, sizeof(char*));
                        if(_if_conditional283=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional283) {
                            __freed_obj__ = 0;
                            memset(&result_174,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result87__ = __result_obj__ = result_174;
                            __freed_obj__ = 0;
                            return __result87__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charph*)come_null_check(self, "./comelang2.h", 336))->head;
                        __freed_obj__ = 0;
                        if(_if_conditional284=((struct list$1charph*)come_null_check(self, "./comelang2.h", 342))->it,                        __freed_obj__ = 0, 
                        _if_conditional284) {
                            __result88__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                            __freed_obj__ = 0;
                            return __result88__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_175,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result89__ = __result_obj__ = result_175;
                        __freed_obj__ = 0;
                        return __result89__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result90__ = self==((void*)0)||((struct list$1charph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result90__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
char* result_177;
char* __result91__;
_Bool _if_conditional286;
char* __result92__;
char* result_178;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_177, 0, sizeof(char*));
memset(&result_178, 0, sizeof(char*));
                        if(_if_conditional285=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional285) {
                            __freed_obj__ = 0;
                            memset(&result_177,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result91__ = __result_obj__ = result_177;
                            __freed_obj__ = 0;
                            return __result91__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                        __freed_obj__ = 0;
                        if(_if_conditional286=((struct list$1charph*)come_null_check(self, "./comelang2.h", 360))->it,                        __freed_obj__ = 0, 
                        _if_conditional286) {
                            __result92__ = __result_obj__ = ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                            __freed_obj__ = 0;
                            return __result92__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_178,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result93__ = __result_obj__ = result_178;
                        __freed_obj__ = 0;
                        return __result93__;
                        __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result96__ = ((struct list$1charph*)come_null_check(self, "./comelang2.h", 410))->len;
                        __freed_obj__ = 0;
                        return __result96__;
                        __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
struct list_item$1charph* it_180;
int i_181;
_Bool _while_condtional31;
_Bool _if_conditional290;
void* right_value226;
void* right_value227;
struct optional$2charphbool* __result97__;
char* default_value_182;
void* right_value228;
void* right_value229;
struct optional$2charphbool* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_180, 0, sizeof(struct list_item$1charph*));
memset(&i_181, 0, sizeof(int));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&default_value_182, 0, sizeof(char*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
                            if(_if_conditional289=position<0,                            __freed_obj__ = 0, 
                            _if_conditional289) {
                                position+=((struct list$1charph*)come_null_check(self, "./comelang2.h", 735))->len;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_180=((struct list$1charph*)come_null_check(self, "./comelang2.h", 738))->head;
                            __freed_obj__ = 0;
                            i_181=0;
                            __freed_obj__ = 0;
                            while(_while_condtional31=it_180!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional31) {
                                if(_if_conditional290=position==i_181,                                __freed_obj__ = 0, 
                                _if_conditional290) {
                                    __result97__ = __result_obj__ = ((struct optional$2charphbool*)(right_value227=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value226=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 742)))),(char*)come_increment_ref_count(((struct list_item$1charph*)come_null_check(it_180, "./comelang2.h", 742))->item),(_Bool)1)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                                    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value226;
                                    __freed_obj__ = 0;
                                    return __result97__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_180=((struct list_item$1charph*)come_null_check(it_180, "./comelang2.h", 744))->next;
                                __freed_obj__ = 0;
                                i_181++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&default_value_182,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result98__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2charphbool*)(right_value229=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value228=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 750))),(char*)come_increment_ref_count(default_value_182),(_Bool)0))));
                            if(default_value_182 && !__freed_obj__) { default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
                            if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value228;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
                            if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value229;
                            __freed_obj__ = 0;
                            return __result98__;
                            __freed_obj__ = 0;
                            if(default_value_182 && !__freed_obj__) { default_value_182 = come_decrement_ref_count(default_value_182, (void*)0, (void*)0, 0, 0, 0); }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool_value(struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional292;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* default_value_183;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result99__;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_183, 0, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                if(_if_conditional292=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional292) {
                    __freed_obj__ = 0;
                    memset(&default_value_183,0,sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*));
                    __freed_obj__ = 0;
                    __result99__ = __result_obj__ = default_value_183;
                    __freed_obj__ = 0;
                    return __result99__;
                    __freed_obj__ = 0;
                }
                else {
                    __result100__ = __result_obj__ = ((struct optional$2tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result100__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value241;
struct sType* __dec_obj105;
struct tuple1$1sTypeph* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
                __dec_obj105=((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1741))->v1;
                ((struct tuple1$1sTypeph*)come_null_check(self, "./comelang2.h", 1741))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(v1))));
                if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value241;
                __freed_obj__ = 0;
                __result101__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result101__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple3$3voidpvoidpbool* tuple3$3voidpvoidpbool_initialize(struct tuple3$3voidpvoidpbool* self, void* v1, void* v2, _Bool v3){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple3$3voidpvoidpbool* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1810))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1811))->v2=v2;
                            __freed_obj__ = 0;
                            ((struct tuple3$3voidpvoidpbool*)come_null_check(self, "./comelang2.h", 1812))->v3=v3;
                            __freed_obj__ = 0;
                            __result103__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result103__;
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
struct tuple3$3voidpvoidpbool* __dec_obj119;
struct optional$2tuple3$3voidpvoidpboolphbool* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj119=((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple3$3voidpvoidpbool*)come_increment_ref_count(v1);
                            if(__dec_obj119) { come_call_finalizer(tuple3$3voidpvoidpbool_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result104__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3voidpvoidpboolphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result104__;
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
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional302=self!=((void*)0)&&((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional302) {
                                    if(((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3voidpvoidpboolp_finalize,((struct optional$2tuple3$3voidpvoidpboolphbool*)come_null_check(self, "optional$2tuple3$3voidpvoidpboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional303=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional303) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional304=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional304) {
                            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_202;
unsigned int hash_203;
unsigned int it_204;
_Bool _while_condtional32;
_Bool _if_conditional316;
void* right_value285;
struct optional$2boolbool* __exception_result_var_b6;
_Bool _if_conditional317;
void* right_value286;
void* right_value287;
struct optional$2sClasspbool* __result107__;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value288;
void* right_value289;
struct optional$2sClasspbool* __result108__;
void* right_value290;
void* right_value291;
struct optional$2sClasspbool* __result109__;
void* right_value292;
void* right_value293;
struct optional$2sClasspbool* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_202, 0, sizeof(struct sClass*));
memset(&hash_203, 0, sizeof(unsigned int));
memset(&it_204, 0, sizeof(unsigned int));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
                                    __freed_obj__ = 0;
                                    memset(&default_value_202,0,sizeof(struct sClass*));
                                    __freed_obj__ = 0;
                                    hash_203=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1553)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1553))->size;
                                    __freed_obj__ = 0;
                                    it_204=hash_203;
                                    __freed_obj__ = 0;
                                    while(_while_condtional32=(_Bool)1,                                    __freed_obj__ = 0, 
                                    _while_condtional32) {
                                        if(_if_conditional316=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1576))->item_existance[it_204],                                        __freed_obj__ = 0, 
                                        _if_conditional316) {
                                            if(_if_conditional317=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1564),__exception_result_var_b6=((struct optional$2boolbool*)(right_value285=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1564))->keys[it_204], "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_b6)),                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285),
                                            (right_value285 && right_value285 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                            __right_value_freed_obj[0] = right_value285, 
                                            __freed_obj__ = 0, 
                                            _if_conditional317) {
                                                __result107__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value287=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value286=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1561)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1561))->items[it_204],(_Bool)1)));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                                                if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value286;
                                                __freed_obj__ = 0;
                                                return __result107__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            it_204++;
                                            __freed_obj__ = 0;
                                            if(_if_conditional318=it_204>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1572))->size,                                            __freed_obj__ = 0, 
                                            _if_conditional318) {
                                                it_204=0;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional319=it_204==hash_203,                                                __freed_obj__ = 0, 
                                                _if_conditional319) {
                                                    __result108__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1570), ((struct optional$2sClasspbool*)(right_value289=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value288=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1570))),default_value_202,(_Bool)0))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
                                                    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value288;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
                                                    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value289;
                                                    __freed_obj__ = 0;
                                                    return __result108__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __result109__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1574), ((struct optional$2sClasspbool*)(right_value291=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value290=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1574))),default_value_202,(_Bool)0))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
                                            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value290;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
                                            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value291;
                                            __freed_obj__ = 0;
                                            return __result109__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result110__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1578), ((struct optional$2sClasspbool*)(right_value293=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value292=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1578))),default_value_202,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                                    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value292;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
                                    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value293;
                                    __freed_obj__ = 0;
                                    return __result110__;
                                    __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                                    __freed_obj__ = 0;
                                                    ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                                    __freed_obj__ = 0;
                                                    __result106__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result106__;
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
_Bool _if_conditional320;
struct sClass* default_value_205;
struct sClass* __result111__;
struct sClass* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_205, 0, sizeof(struct sClass*));
                                    if(_if_conditional320=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional320) {
                                        __freed_obj__ = 0;
                                        memset(&default_value_205,0,sizeof(struct sClass*));
                                        __freed_obj__ = 0;
                                        __result111__ = __result_obj__ = default_value_205;
                                        __freed_obj__ = 0;
                                        return __result111__;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __result112__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                        __freed_obj__ = 0;
                                        return __result112__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
unsigned int hash_230;
unsigned int it_231;
_Bool _while_condtional37;
_Bool _if_conditional347;
void* right_value319;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional369;
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
_Bool _if_conditional373;
_Bool same_key_exist_248;
char* it2_251;
_Bool _for_condtionalA8;
void* right_value321;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional378;
_Bool _if_conditional379;
struct map$2charphsClassph* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_230, 0, sizeof(unsigned int));
memset(&it_231, 0, sizeof(unsigned int));
memset(&right_value319, 0, sizeof(void*));
memset(&same_key_exist_248, 0, sizeof(_Bool));
memset(&it2_251, 0, sizeof(char*));
memset(&right_value321, 0, sizeof(void*));
                                            if(_if_conditional329=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1393))->len*10>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1393))->size,                                            __freed_obj__ = 0, 
                                            _if_conditional329) {
                                                map$2charphsClassph_rehash(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1391)));
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            hash_230=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1393)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1393))->size;
                                            __freed_obj__ = 0;
                                            it_231=hash_230;
                                            __freed_obj__ = 0;
                                            while(_while_condtional37=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional37) {
                                                if(_if_conditional347=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1449))->item_existance[it_231],                                                __freed_obj__ = 0, 
                                                _if_conditional347) {
                                                    if(_if_conditional348=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1420),__exception_result_var_a2=((struct optional$2boolbool*)(right_value319=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1420))->keys[it_231], "./comelang2.h", 1420)),key))), come_pop_stackframe(), __exception_result_var_a2)),                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319),
                                                    (right_value319 && right_value319 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                    __right_value_freed_obj[0] = right_value319, 
                                                    __freed_obj__ = 0, 
                                                    _if_conditional348) {
                                                        if(_if_conditional349=1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional349) {
                                                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1402))->key_list, "./comelang2.h", 1402)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1402))->keys[it_231]);
                                                            __freed_obj__ = 0;
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1403))->keys[it_231] && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1403))->keys[it_231] = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1403))->keys[it_231], (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1404))->keys[it_231]=(char*)come_increment_ref_count(key);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1407))->key_list, "./comelang2.h", 1407)),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1407))->keys[it_231]);
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1408))->keys[it_231]=key;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional369=1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional369) {
                                                            if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1411))->items[it_231] && !__freed_obj__) { come_call_finalizer(sClass_finalize,((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1411))->items[it_231], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1412))->items[it_231]=(struct sClass*)come_increment_ref_count(item);
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1415))->items[it_231]=item;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        break;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    it_231++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional370=it_231>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1429))->size,                                                    __freed_obj__ = 0, 
                                                    _if_conditional370) {
                                                        it_231=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional371=it_231==hash_230,                                                        __freed_obj__ = 0, 
                                                        _if_conditional371) {
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
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1431))->item_existance[it_231]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional372=1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional372) {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1433))->keys[it_231]=(char*)come_increment_ref_count(key);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1436))->keys[it_231]=key;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional373=1,                                                    __freed_obj__ = 0, 
                                                    _if_conditional373) {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1439))->items[it_231]=(struct sClass*)come_increment_ref_count(item);
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1442))->items[it_231]=item;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1445))->len++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            same_key_exist_248=(_Bool)0;
                                            __freed_obj__ = 0;
                                            for(
                                            it2_251=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1459))->key_list, "./comelang2.h", 1459))) ,                                            __freed_obj__ = 0, 
                                            0;                                            _for_condtionalA8=                                            !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1459))->key_list, "./comelang2.h", 1459))) ,                                            __freed_obj__ = 0, 
                                            _for_condtionalA8;                                            it2_251=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1459))->key_list, "./comelang2.h", 1459))) ,                                            __freed_obj__ = 0, 
                                            0                                            ){
                                                if(_if_conditional378=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1457),__exception_result_var_a4=((struct optional$2boolbool*)(right_value321=string_equals(((char*)come_null_check(it2_251, "./comelang2.h", 1457)),key))), come_pop_stackframe(), __exception_result_var_a4)),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321),
                                                (right_value321 && right_value321 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value321, 
                                                __freed_obj__ = 0, 
                                                _if_conditional378) {
                                                    same_key_exist_248=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional379=!same_key_exist_248,                                            __freed_obj__ = 0, 
                                            _if_conditional379) {
                                                list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1460))->key_list, "./comelang2.h", 1460)),key);
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result139__ = __result_obj__ = self;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result139__;
                                            __freed_obj__ = 0;
                                            if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                            if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_211;
void* right_value313;
char** keys_212;
void* right_value314;
struct sClass** items_213;
void* right_value315;
_Bool* item_existance_216;
int len_217;
char* it_220;
_Bool _for_condtionalA7;
struct sClass* default_value_223;
void* right_value317;
struct sClass* it2_226;
unsigned int hash_227;
int n_228;
_Bool _while_condtional36;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
struct sClass* default_value_229;
void* right_value318;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_211, 0, sizeof(int));
memset(&right_value313, 0, sizeof(void*));
memset(&keys_212, 0, sizeof(char**));
memset(&right_value314, 0, sizeof(void*));
memset(&items_213, 0, sizeof(struct sClass**));
memset(&right_value315, 0, sizeof(void*));
memset(&item_existance_216, 0, sizeof(_Bool*));
memset(&len_217, 0, sizeof(int));
memset(&it_220, 0, sizeof(char*));
memset(&default_value_223, 0, sizeof(struct sClass*));
memset(&right_value317, 0, sizeof(void*));
memset(&it2_226, 0, sizeof(struct sClass*));
memset(&hash_227, 0, sizeof(unsigned int));
memset(&n_228, 0, sizeof(int));
memset(&default_value_229, 0, sizeof(struct sClass*));
memset(&right_value318, 0, sizeof(void*));
                                                    size_211=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1338))->size*10;
                                                    __freed_obj__ = 0;
                                                    keys_212=(char**)come_increment_ref_count(((char**)(right_value313=(char**)come_calloc(1, sizeof(char*)*(1*(size_211)), "./comelang2.h", 1339))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
                                                    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value313;
                                                    __freed_obj__ = 0;
                                                    items_213=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value314=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_211)), "./comelang2.h", 1340))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value314);
                                                    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value314;
                                                    __freed_obj__ = 0;
                                                    item_existance_216=(_Bool*)come_increment_ref_count(((_Bool*)(right_value315=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_211)), "./comelang2.h", 1341))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value315);
                                                    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value315;
                                                    __freed_obj__ = 0;
                                                    len_217=0;
                                                    __freed_obj__ = 0;
                                                    for(
                                                    it_220=map$2charphsClassph_begin(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1377))) ,                                                    __freed_obj__ = 0, 
                                                    0;                                                    _for_condtionalA7=                                                    !map$2charphsClassph_end(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1377))) ,                                                    __freed_obj__ = 0, 
                                                    _for_condtionalA7;                                                    it_220=map$2charphsClassph_next(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1377))) ,                                                    __freed_obj__ = 0, 
                                                    0                                                    ){
                                                        __freed_obj__ = 0;
                                                        memset(&default_value_223,0,sizeof(struct sClass*));
                                                        __freed_obj__ = 0;
                                                        it2_226=((struct sClass*)(right_value317=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1348)),it_220,default_value_223)));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
                                                        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value317;
                                                        __freed_obj__ = 0;
                                                        hash_227=string_get_hash_key(((char*)come_null_check(it_220, "./comelang2.h", 1349)))%size_211;
                                                        __freed_obj__ = 0;
                                                        n_228=hash_227;
                                                        __freed_obj__ = 0;
                                                        while(_while_condtional36=(_Bool)1,                                                        __freed_obj__ = 0, 
                                                        _while_condtional36) {
                                                            if(_if_conditional344=item_existance_216[n_228],                                                            __freed_obj__ = 0, 
                                                            _if_conditional344) {
                                                                n_228++;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional345=n_228>=size_211,                                                                __freed_obj__ = 0, 
                                                                _if_conditional345) {
                                                                    n_228=0;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional346=n_228==hash_227,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional346) {
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
                                                                item_existance_216[n_228]=(_Bool)1;
                                                                __freed_obj__ = 0;
                                                                keys_212[n_228]=it_220;
                                                                __freed_obj__ = 0;
                                                                __freed_obj__ = 0;
                                                                items_213[n_228]=((struct sClass*)(right_value318=map$2charphsClassph_at(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1369)),it_220,default_value_229)));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
                                                                if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value318;
                                                                __freed_obj__ = 0;
                                                                len_217++;
                                                                __freed_obj__ = 0;
                                                                break;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1377))->items);
                                                    __freed_obj__ = 0;
                                                    if(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1378))->item_existance && !__freed_obj__) { ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1378))->item_existance = come_decrement_ref_count(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1378))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                    come_free_object((char*)((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1379))->keys);
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1381))->keys=keys_212;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1382))->items=items_213;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1383))->item_existance=item_existance_216;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1385))->size=size_211;
                                                    __freed_obj__ = 0;
                                                    ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1386))->len=len_217;
                                                    __freed_obj__ = 0;
}

static void sClass_finalize(struct sClass* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional330=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mName!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional330) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional331=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mFields!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional331) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,((struct sClass*)come_null_check(self, "sClass_finalize", 1))->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional335=self!=((void*)0)&&((struct sClass*)come_null_check(self, "sClass_finalize", 3))->mDeclareSName!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional335) {
                                                            if(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName && !__freed_obj__) { ((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName = come_decrement_ref_count(((struct sClass*)come_null_check(self, "sClass_finalize", 2))->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_214;
_Bool _while_condtional34;
struct list_item$1tuple2$2charphsTypephph* prev_it_215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_214, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_215, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                                                                it_214=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                                __freed_obj__ = 0;
                                                                while(_while_condtional34=it_214!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _while_condtional34) {
                                                                    prev_it_215=it_214;
                                                                    __freed_obj__ = 0;
                                                                    it_214=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_214, "./comelang2.h", 172))->next;
                                                                    __freed_obj__ = 0;
                                                                    if(prev_it_215 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_215, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional332;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                        if(_if_conditional332=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional332) {
                                                                            if(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional333;
_Bool _if_conditional334;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional333=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional333) {
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional334=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional334) {
                                                                                    if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional336;
char* result_218;
char* __result116__;
_Bool _if_conditional337;
char* __result117__;
char* result_219;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_218, 0, sizeof(char*));
memset(&result_219, 0, sizeof(char*));
                                                        if(_if_conditional336=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional336) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_218,0,sizeof(char*));
                                                            __freed_obj__ = 0;
                                                            __result116__ = __result_obj__ = result_218;
                                                            __freed_obj__ = 0;
                                                            return __result116__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1305))->key_list, "./comelang2.h", 1305))->it=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1305))->key_list, "./comelang2.h", 1305))->head;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional337=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1311))->key_list, "./comelang2.h", 1311))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional337) {
                                                            __result117__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1308))->key_list, "./comelang2.h", 1308))->it, "./comelang2.h", 1308))->item;
                                                            __freed_obj__ = 0;
                                                            return __result117__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_219,0,sizeof(char*));
                                                        __freed_obj__ = 0;
                                                        __result118__ = __result_obj__ = result_219;
                                                        __freed_obj__ = 0;
                                                        return __result118__;
                                                        __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        __result119__ = self==((void*)0)||((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1334))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1334))->key_list, "./comelang2.h", 1334))->it==((void*)0);
                                                        __freed_obj__ = 0;
                                                        return __result119__;
                                                        __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
char* result_221;
char* __result120__;
_Bool _if_conditional339;
char* __result121__;
char* result_222;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_221, 0, sizeof(char*));
memset(&result_222, 0, sizeof(char*));
                                                        if(_if_conditional338=self==((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional338) {
                                                            __freed_obj__ = 0;
                                                            memset(&result_221,0,sizeof(char*));
                                                            __freed_obj__ = 0;
                                                            __result120__ = __result_obj__ = result_221;
                                                            __freed_obj__ = 0;
                                                            return __result120__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1322))->key_list, "./comelang2.h", 1322))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1322))->key_list, "./comelang2.h", 1322))->it, "./comelang2.h", 1322))->next;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional339=((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1328))->key_list, "./comelang2.h", 1328))->it,                                                        __freed_obj__ = 0, 
                                                        _if_conditional339) {
                                                            __result121__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1325))->key_list, "./comelang2.h", 1325))->it, "./comelang2.h", 1325))->item;
                                                            __freed_obj__ = 0;
                                                            return __result121__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __freed_obj__ = 0;
                                                        memset(&result_222,0,sizeof(char*));
                                                        __freed_obj__ = 0;
                                                        __result122__ = __result_obj__ = result_222;
                                                        __freed_obj__ = 0;
                                                        return __result122__;
                                                        __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_224;
unsigned int it_225;
_Bool _while_condtional35;
_Bool _if_conditional340;
void* right_value316;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional341;
struct sClass* __result123__;
_Bool _if_conditional342;
_Bool _if_conditional343;
struct sClass* __result124__;
struct sClass* __result125__;
struct sClass* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_224, 0, sizeof(unsigned int));
memset(&it_225, 0, sizeof(unsigned int));
memset(&right_value316, 0, sizeof(void*));
                                                            hash_224=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1227)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1227))->size;
                                                            __freed_obj__ = 0;
                                                            it_225=hash_224;
                                                            __freed_obj__ = 0;
                                                            while(_while_condtional35=(_Bool)1,                                                            __freed_obj__ = 0, 
                                                            _while_condtional35) {
                                                                if(_if_conditional340=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1250))->item_existance[it_225],                                                                __freed_obj__ = 0, 
                                                                _if_conditional340) {
                                                                    if(_if_conditional341=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1238),__exception_result_var_a1=((struct optional$2boolbool*)(right_value316=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1238))->keys[it_225], "./comelang2.h", 1238)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316),
                                                                    (right_value316 && right_value316 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value316, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional341) {
                                                                        __result123__ = __result_obj__ = ((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1235))->items[it_225];
                                                                        __freed_obj__ = 0;
                                                                        return __result123__;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                    it_225++;
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional342=it_225>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1246))->size,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional342) {
                                                                        it_225=0;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional343=it_225==hash_224,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional343) {
                                                                            __result124__ = __result_obj__ = default_value;
                                                                            __freed_obj__ = 0;
                                                                            return __result124__;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    __result125__ = __result_obj__ = default_value;
                                                                    __freed_obj__ = 0;
                                                                    return __result125__;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            __result126__ = __result_obj__ = default_value;
                                                            __freed_obj__ = 0;
                                                            return __result126__;
                                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_232;
struct list_item$1charp* it_233;
_Bool _while_condtional38;
void* right_value320;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional350;
struct list$1charp* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_232, 0, sizeof(int));
memset(&it_233, 0, sizeof(struct list_item$1charp*));
memset(&right_value320, 0, sizeof(void*));
                                                                it2_232=0;
                                                                __freed_obj__ = 0;
                                                                it_233=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                                                __freed_obj__ = 0;
                                                                while(_while_condtional38=it_233!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _while_condtional38) {
                                                                    if(_if_conditional350=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value320=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_233, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320),
                                                                    (right_value320 && right_value320 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                                    __right_value_freed_obj[0] = right_value320, 
                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional350) {
                                                                        list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_232,it2_232+1);
                                                                        __freed_obj__ = 0;
                                                                        break;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                    it2_232++;
                                                                    __freed_obj__ = 0;
                                                                    it_233=((struct list_item$1charp*)come_null_check(it_233, "./comelang2.h", 500))->next;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                __result130__ = __result_obj__ = self;
                                                                __freed_obj__ = 0;
                                                                return __result130__;
                                                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
int tmp_234;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
struct list$1charp* __result127__;
_Bool _if_conditional357;
_Bool _if_conditional358;
struct list_item$1charp* it_237;
int i_238;
_Bool _while_condtional40;
_Bool _if_conditional359;
struct list_item$1charp* prev_it_239;
_Bool _if_conditional360;
_Bool _if_conditional361;
struct list_item$1charp* it_240;
int i_241;
_Bool _while_condtional41;
_Bool _if_conditional362;
_Bool _if_conditional363;
struct list_item$1charp* prev_it_242;
struct list_item$1charp* it_243;
struct list_item$1charp* head_prev_it_244;
struct list_item$1charp* tail_it_245;
int i_246;
_Bool _while_condtional42;
_Bool _if_conditional364;
_Bool _if_conditional365;
_Bool _if_conditional366;
struct list_item$1charp* prev_it_247;
_Bool _if_conditional367;
_Bool _if_conditional368;
struct list$1charp* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_234, 0, sizeof(int));
memset(&it_237, 0, sizeof(struct list_item$1charp*));
memset(&i_238, 0, sizeof(int));
memset(&prev_it_239, 0, sizeof(struct list_item$1charp*));
memset(&it_240, 0, sizeof(struct list_item$1charp*));
memset(&i_241, 0, sizeof(int));
memset(&prev_it_242, 0, sizeof(struct list_item$1charp*));
memset(&it_243, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_244, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_245, 0, sizeof(struct list_item$1charp*));
memset(&i_246, 0, sizeof(int));
memset(&prev_it_247, 0, sizeof(struct list_item$1charp*));
                                                                            if(_if_conditional351=head<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional351) {
                                                                                head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional352=tail<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional352) {
                                                                                tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional353=head>tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional353) {
                                                                                tmp_234=tail;
                                                                                __freed_obj__ = 0;
                                                                                tail=head;
                                                                                __freed_obj__ = 0;
                                                                                head=tmp_234;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional354=head<0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional354) {
                                                                                head=0;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional355=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional355) {
                                                                                tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional356=head==tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional356) {
                                                                                __result127__ = __result_obj__ = self;
                                                                                __freed_obj__ = 0;
                                                                                return __result127__;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional357=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional357) {
                                                                                list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional358=head==0,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional358) {
                                                                                    it_237=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                                                    __freed_obj__ = 0;
                                                                                    i_238=0;
                                                                                    __freed_obj__ = 0;
                                                                                    while(_while_condtional40=it_237!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _while_condtional40) {
                                                                                        if(_if_conditional359=i_238<tail,                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional359) {
                                                                                            prev_it_239=it_237;
                                                                                            __freed_obj__ = 0;
                                                                                            it_237=((struct list_item$1charp*)come_null_check(it_237, "./comelang2.h", 543))->next;
                                                                                            __freed_obj__ = 0;
                                                                                            i_238++;
                                                                                            __freed_obj__ = 0;
                                                                                            if(prev_it_239 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_239, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            __freed_obj__ = 0;
                                                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        else {
                                                                                            if(_if_conditional360=i_238==tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional360) {
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_237;
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                                                __freed_obj__ = 0;
                                                                                                break;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_237=((struct list_item$1charp*)come_null_check(it_237, "./comelang2.h", 556))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_238++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional361=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional361) {
                                                                                        it_240=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                                                        __freed_obj__ = 0;
                                                                                        i_241=0;
                                                                                        __freed_obj__ = 0;
                                                                                        while(_while_condtional41=it_240!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _while_condtional41) {
                                                                                            if(_if_conditional362=i_241==head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional362) {
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_240, "./comelang2.h", 566))->prev;
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional363=i_241>=head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional363) {
                                                                                                prev_it_242=it_240;
                                                                                                __freed_obj__ = 0;
                                                                                                it_240=((struct list_item$1charp*)come_null_check(it_240, "./comelang2.h", 573))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_241++;
                                                                                                __freed_obj__ = 0;
                                                                                                if(prev_it_242 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_242, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_240=((struct list_item$1charp*)come_null_check(it_240, "./comelang2.h", 581))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_241++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    else {
                                                                                        it_243=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                                                        __freed_obj__ = 0;
                                                                                        head_prev_it_244=((void*)0);
                                                                                        __freed_obj__ = 0;
                                                                                        tail_it_245=((void*)0);
                                                                                        __freed_obj__ = 0;
                                                                                        i_246=0;
                                                                                        __freed_obj__ = 0;
                                                                                        while(_while_condtional42=it_243!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _while_condtional42) {
                                                                                            if(_if_conditional364=i_246==head,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional364) {
                                                                                                head_prev_it_244=((struct list_item$1charp*)come_null_check(it_243, "./comelang2.h", 596))->prev;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional365=i_246==tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional365) {
                                                                                                tail_it_245=it_243;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                            if(_if_conditional366=i_246>=head&&i_246<tail,                                                                                            __freed_obj__ = 0, 
                                                                                            _if_conditional366) {
                                                                                                prev_it_247=it_243;
                                                                                                __freed_obj__ = 0;
                                                                                                it_243=((struct list_item$1charp*)come_null_check(it_243, "./comelang2.h", 606))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_246++;
                                                                                                __freed_obj__ = 0;
                                                                                                if(prev_it_247 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_247, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                                __freed_obj__ = 0;
                                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            else {
                                                                                                it_243=((struct list_item$1charp*)come_null_check(it_243, "./comelang2.h", 614))->next;
                                                                                                __freed_obj__ = 0;
                                                                                                i_246++;
                                                                                                __freed_obj__ = 0;
                                                                                            }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional367=head_prev_it_244!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional367) {
                                                                                            ((struct list_item$1charp*)come_null_check(head_prev_it_244, "./comelang2.h", 620))->next=tail_it_245;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional368=tail_it_245!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional368) {
                                                                                            ((struct list_item$1charp*)come_null_check(tail_it_245, "./comelang2.h", 623))->prev=head_prev_it_244;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            __result129__ = __result_obj__ = self;
                                                                            __freed_obj__ = 0;
                                                                            return __result129__;
                                                                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_235;
_Bool _while_condtional39;
struct list_item$1charp* prev_it_236;
struct list$1charp* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_235, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_236, 0, sizeof(struct list_item$1charp*));
                                                                                    it_235=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                                                    __freed_obj__ = 0;
                                                                                    while(_while_condtional39=it_235!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _while_condtional39) {
                                                                                        prev_it_236=it_235;
                                                                                        __freed_obj__ = 0;
                                                                                        it_235=((struct list_item$1charp*)come_null_check(it_235, "./comelang2.h", 479))->next;
                                                                                        __freed_obj__ = 0;
                                                                                        if(prev_it_236 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_236, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                                                    __freed_obj__ = 0;
                                                                                    __result128__ = __result_obj__ = self;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result128__;
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
_Bool _if_conditional374;
char* result_249;
char* __result131__;
_Bool _if_conditional375;
char* __result132__;
char* result_250;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_249, 0, sizeof(char*));
memset(&result_250, 0, sizeof(char*));
                                                if(_if_conditional374=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional374) {
                                                    __freed_obj__ = 0;
                                                    memset(&result_249,0,sizeof(char*));
                                                    __freed_obj__ = 0;
                                                    __result131__ = __result_obj__ = result_249;
                                                    __freed_obj__ = 0;
                                                    return __result131__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                                                __freed_obj__ = 0;
                                                if(_if_conditional375=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                                                __freed_obj__ = 0, 
                                                _if_conditional375) {
                                                    __result132__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                                    __freed_obj__ = 0;
                                                    return __result132__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                memset(&result_250,0,sizeof(char*));
                                                __freed_obj__ = 0;
                                                __result133__ = __result_obj__ = result_250;
                                                __freed_obj__ = 0;
                                                return __result133__;
                                                __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                __result134__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                                                __freed_obj__ = 0;
                                                return __result134__;
                                                __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional376;
char* result_252;
char* __result135__;
_Bool _if_conditional377;
char* __result136__;
char* result_253;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_252, 0, sizeof(char*));
memset(&result_253, 0, sizeof(char*));
                                                if(_if_conditional376=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional376) {
                                                    __freed_obj__ = 0;
                                                    memset(&result_252,0,sizeof(char*));
                                                    __freed_obj__ = 0;
                                                    __result135__ = __result_obj__ = result_252;
                                                    __freed_obj__ = 0;
                                                    return __result135__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                                __freed_obj__ = 0;
                                                if(_if_conditional377=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                                                __freed_obj__ = 0, 
                                                _if_conditional377) {
                                                    __result136__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                                    __freed_obj__ = 0;
                                                    return __result136__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __freed_obj__ = 0;
                                                memset(&result_253,0,sizeof(char*));
                                                __freed_obj__ = 0;
                                                __result137__ = __result_obj__ = result_253;
                                                __freed_obj__ = 0;
                                                return __result137__;
                                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional380;
void* right_value322;
struct list_item$1charp* litem_254;
_Bool _if_conditional381;
void* right_value323;
struct list_item$1charp* litem_255;
void* right_value324;
struct list_item$1charp* litem_256;
struct list$1charp* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value322, 0, sizeof(void*));
memset(&litem_254, 0, sizeof(struct list_item$1charp*));
memset(&right_value323, 0, sizeof(void*));
memset(&litem_255, 0, sizeof(struct list_item$1charp*));
memset(&right_value324, 0, sizeof(void*));
memset(&litem_256, 0, sizeof(struct list_item$1charp*));
                                                    if(_if_conditional380=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional380) {
                                                        litem_254=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value322=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
                                                        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value322;
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_254, "./comelang2.h", 274))->prev=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_254, "./comelang2.h", 275))->next=((void*)0);
                                                        __freed_obj__ = 0;
                                                        ((struct list_item$1charp*)come_null_check(litem_254, "./comelang2.h", 276))->item=item;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_254;
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_254;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional381=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                                                        __freed_obj__ = 0, 
                                                        _if_conditional381) {
                                                            litem_255=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value323=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
                                                            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value323;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_255, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_255, "./comelang2.h", 285))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_255, "./comelang2.h", 286))->item=item;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_255;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_255;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            litem_256=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value324=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                                                            if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value324;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_256, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_256, "./comelang2.h", 295))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(litem_256, "./comelang2.h", 296))->item=item;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_256;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_256;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                                                    __freed_obj__ = 0;
                                                    __result138__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result138__;
                                                    __freed_obj__ = 0;
}

