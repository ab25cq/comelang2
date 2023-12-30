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
struct sWhileNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mBlock;
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

struct sWhileNode* sWhileNode_initialize(struct sWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static struct sVar* sVar_clone(struct sVar* self);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
_Bool sWhileNode_terminated();

char* sWhileNode_kind();

_Bool sWhileNode_compile(struct sWhileNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
int sWhileNode_sline(struct sWhileNode* self, struct sInfo* info);

char* sWhileNode_sname(struct sWhileNode* self, struct sInfo* info);

struct optional$2sNodephbool* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sWhileNode_finalize(struct sWhileNode* self);
static struct sWhileNode* sWhileNode_clone(struct sWhileNode* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_09whilec(struct __current_stack1__* parent);

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
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1987))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1989))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1989))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1990))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1990))->memory, "./comelang2.h", 1990))->buf;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = result_0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
    if(result_0 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1997))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 1999))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 1999))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2000))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2000))->memory, "./comelang2.h", 2000))->buf;
    __freed_obj__ = 0;
    __result8__ = __result_obj__ = result_1;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
    if(result_1 && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,result_1, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2007))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2009))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2009))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2010))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2010))->memory, "./comelang2.h", 2010))->buf;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = result_2;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
    if(result_2 && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,result_2, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2017))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2019))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2019))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2020))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2020))->memory, "./comelang2.h", 2020))->buf;
    __freed_obj__ = 0;
    __result10__ = __result_obj__ = result_3;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
    if(result_3 && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,result_3, (void*)0, (void*)0, 0, 0, 0, 0); }
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2027))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2029))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2029))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2030))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2030))->memory, "./comelang2.h", 2030))->buf;
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

struct sWhileNode* sWhileNode_initialize(struct sWhileNode* self, struct sNode* expression_node, struct sBlock* block, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value84;
struct sBlock* __dec_obj40;
struct sWhileNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
    ((struct sWhileNode*)come_null_check(self, "09while.c", 15))->sline=((struct sInfo*)come_null_check(info, "09while.c", 15))->sline;
    __freed_obj__ = 0;
    __dec_obj6=((struct sWhileNode*)come_null_check(self, "09while.c", 16))->sname;
    ((struct sWhileNode*)come_null_check(self, "09while.c", 16))->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(((struct sInfo*)come_null_check(info, "09while.c", 16))->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __dec_obj7=((struct sWhileNode*)come_null_check(self, "09while.c", 18))->mExpressionNode;
    ((struct sWhileNode*)come_null_check(self, "09while.c", 18))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value12;
    __freed_obj__ = 0;
    __dec_obj40=((struct sWhileNode*)come_null_check(self, "09while.c", 19))->mBlock;
    ((struct sWhileNode*)come_null_check(self, "09while.c", 19))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value84=sBlock_clone(block))));
    if(__dec_obj40) { come_call_finalizer(sBlock_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value84;
    __freed_obj__ = 0;
    __result72__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sWhileNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sNode* __result12__;
void* right_value11;
struct sNode* result_5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional13;
struct sNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional5) {
            __result12__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result12__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value11;
        __freed_obj__ = 0;
        if(_if_conditional6=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional6) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional7=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional7) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional8=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional8) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional9=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional9) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional10=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional10) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional11=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional11) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional12=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional12) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional13=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional13) {
            ((struct sNode*)come_null_check(result_5, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result13__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result13__;
        __freed_obj__ = 0;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0); } 
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional14;
struct sBlock* __result14__;
void* right_value13;
struct sBlock* result_6;
_Bool _if_conditional18;
void* right_value20;
struct list$1sNodeph* __dec_obj11;
_Bool _if_conditional22;
void* right_value83;
struct sVarTable* __dec_obj39;
struct sBlock* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&result_6, 0, sizeof(struct sBlock*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
        if(_if_conditional14=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional14) {
            __result14__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result14__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_6=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value13=(struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
        if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value13;
        __freed_obj__ = 0;
        if(_if_conditional18=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mNodes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional18) {
            __dec_obj11=((struct sBlock*)come_null_check(result_6, "sBlock_clone", 4))->mNodes;
            ((struct sBlock*)come_null_check(result_6, "sBlock_clone", 4))->mNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 4))->mNodes))));
            if(__dec_obj11) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional22=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_clone", 6))->mVarTable!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional22) {
            __dec_obj39=((struct sBlock*)come_null_check(result_6, "sBlock_clone", 5))->mVarTable;
            ((struct sBlock*)come_null_check(result_6, "sBlock_clone", 5))->mVarTable=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value83=sVarTable_clone(((struct sBlock*)come_null_check(self, "sBlock_clone", 5))->mVarTable))));
            if(__dec_obj39) { come_call_finalizer(sVarTable_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value83;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result71__ = __result_obj__ = result_6;
        if(result_6 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result71__;
        __freed_obj__ = 0;
        if(result_6 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,result_6, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional15=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_7;
_Bool _while_condtional1;
struct list_item$1sNodeph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1sNodeph*));
                    it_7=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_7!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_8=it_7;
                        __freed_obj__ = 0;
                        it_7=((struct list_item$1sNodeph*)come_null_check(it_7, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional16=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional16) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional19;
struct list$1sNodeph* __result15__;
void* right_value14;
void* right_value15;
struct list$1sNodeph* result_9;
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
void* right_value19;
struct list$1sNodeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&result_9, 0, sizeof(struct list$1sNodeph*));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
                if(_if_conditional19=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    __result15__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value15;
                __freed_obj__ = 0;
                it_10=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional2=it_10!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional2) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_9, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value19;
                    __freed_obj__ = 0;
                    it_10=((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result18__ = __result_obj__ = result_9;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result18__;
                __freed_obj__ = 0;
                if(result_9 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result16__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result16__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
void* right_value16;
struct list_item$1sNodeph* litem_11;
struct sNode* __dec_obj8;
_Bool _if_conditional21;
void* right_value17;
struct list_item$1sNodeph* litem_12;
struct sNode* __dec_obj9;
void* right_value18;
struct list_item$1sNodeph* litem_13;
struct sNode* __dec_obj10;
struct list$1sNodeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_13, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional20=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional20) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value16;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj8=((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_11;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_11;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional21=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional21) {
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value17;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_12;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_12;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value18;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_13;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_13;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result17__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result17__;
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

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional23;
struct sVarTable* __result19__;
void* right_value21;
struct sVarTable* result_14;
_Bool _if_conditional24;
void* right_value82;
struct map$2charphsVarph* __dec_obj38;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
struct sVarTable* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_14, 0, sizeof(struct sVarTable*));
memset(&right_value82, 0, sizeof(void*));
                if(_if_conditional23=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional23) {
                    __result19__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result19__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_14=(struct sVarTable*)come_increment_ref_count(((struct sVarTable*)(right_value21=(struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
                if(_if_conditional24=self!=((void*)0)&&((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mVars!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional24) {
                    __dec_obj38=((struct sVarTable*)come_null_check(result_14, "sVarTable_clone", 4))->mVars;
                    ((struct sVarTable*)come_null_check(result_14, "sVarTable_clone", 4))->mVars=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value82=map$2charphsVarphp_clone(((struct sVarTable*)come_null_check(self, "sVarTable_clone", 4))->mVars))));
                    if(__dec_obj38) { come_call_finalizer(map$2charphsVarph_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
                    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value82;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional171=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional171) {
                    ((struct sVarTable*)come_null_check(result_14, "sVarTable_clone", 5))->mGlobal=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 5))->mGlobal;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional172=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional172) {
                    ((struct sVarTable*)come_null_check(result_14, "sVarTable_clone", 6))->mParent=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 6))->mParent;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional173=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional173) {
                    ((struct sVarTable*)come_null_check(result_14, "sVarTable_clone", 7))->mID=((struct sVarTable*)come_null_check(self, "sVarTable_clone", 7))->mID;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result70__ = __result_obj__ = result_14;
                if(result_14 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result70__;
                __freed_obj__ = 0;
                if(result_14 && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,result_14, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
struct map$2charphsVarph* __result20__;
void* right_value22;
void* right_value28;
struct map$2charphsVarph* result_24;
char* it_27;
_Bool _for_condtionalA4;
struct sVar* default_value_30;
void* right_value30;
struct sVar* it2_34;
void* right_value81;
struct map$2charphsVarph* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct map$2charphsVarph*));
memset(&it_27, 0, sizeof(char*));
memset(&default_value_30, 0, sizeof(struct sVar*));
memset(&right_value30, 0, sizeof(void*));
memset(&it2_34, 0, sizeof(struct sVar*));
memset(&right_value81, 0, sizeof(void*));
                        if(_if_conditional25=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional25) {
                            __result20__ = __result_obj__ = ((void*)0);
                            __freed_obj__ = 0;
                            return __result20__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1215))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value28;
                        __freed_obj__ = 0;
                        for(
                        it_27=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA4=                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA4;                        it_27=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            __freed_obj__ = 0;
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            __freed_obj__ = 0;
                            it2_34=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value30=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1221)),it_27,default_value_30))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value30;
                            __freed_obj__ = 0;
                            map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(result_24, "./comelang2.h", 1223)),it_27,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value81=sVar_clone(it2_34)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value81);
                            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value81;
                            __freed_obj__ = 0;
                            if(it2_34 && !__freed_obj__) { come_call_finalizer(sVar_finalize,it2_34, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
                        __freed_obj__ = 0;
                        __result69__ = __result_obj__ = result_24;
                        if(result_24 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result69__;
                        __freed_obj__ = 0;
                        if(result_24 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value23;
void* right_value24;
void* right_value25;
int i_19;
_Bool _for_condtionalA1;
void* right_value26;
void* right_value27;
struct list$1charp* __dec_obj12;
struct map$2charphsVarph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value25, 0, sizeof(void*));
memset(&i_19, 0, sizeof(int));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1122))->keys=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1122))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value23;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1123))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1123))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value24;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1124))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1124))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value25;
                            __freed_obj__ = 0;
                            for(
                            i_19=0 ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA1=                            i_19<1024 ,                            __freed_obj__ = 0, 
                            _for_condtionalA1;                            i_19++ ,                            __freed_obj__ = 0, 
                            0                            ){
                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1128))->item_existance[i_19]=(_Bool)0;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1131))->size=1024;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1132))->len=0;
                            __freed_obj__ = 0;
                            __dec_obj12=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1134))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1134))))))));
                            if(__dec_obj12) { come_call_finalizer(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value26);
                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value26;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value27;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1136))->it=0;
                            __freed_obj__ = 0;
                            __result22__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result22__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional44;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional26=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional26) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional27=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mCValueName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional27) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 1))->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional28=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional28) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sVar*)come_null_check(self, "sVar_finalize", 2))->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional44=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_finalize", 4))->mFunName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional44) {
                                    if(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName && !__freed_obj__) { ((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName = come_decrement_ref_count(((struct sVar*)come_null_check(self, "sVar_finalize", 3))->mFunName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional29;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional29) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional31=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional31) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional32=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional32) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional33) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional35=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional35) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional36=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional36) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional37) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional39) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional40=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional40) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional41=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional41) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional42=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional42) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional43) {
                                            if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional30=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional30) {
                                                    if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_15;
_Bool _while_condtional3;
struct list_item$1sTypeph* prev_it_16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_16, 0, sizeof(struct list_item$1sTypeph*));
                                                it_15=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional3=it_15!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional3) {
                                                    prev_it_16=it_15;
                                                    __freed_obj__ = 0;
                                                    it_15=((struct list_item$1sTypeph*)come_null_check(it_15, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional34=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional34) {
                                                            if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_17;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_17, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_18, 0, sizeof(struct list_item$1charph*));
                                                it_17=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional4=it_17!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional4) {
                                                    prev_it_18=it_17;
                                                    __freed_obj__ = 0;
                                                    it_17=((struct list_item$1charph*)come_null_check(it_17, "./comelang2.h", 172))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_18 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional38;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional38=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional38) {
                                                            if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                __freed_obj__ = 0;
                                __result21__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result21__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_20;
_Bool _while_condtional5;
struct list_item$1charp* prev_it_21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_20, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_21, 0, sizeof(struct list_item$1charp*));
                                    it_20=((struct list$1charp*)come_null_check(self, "./comelang2.h", 169))->head;
                                    __freed_obj__ = 0;
                                    while(_while_condtional5=it_20!=((void*)0),                                    __freed_obj__ = 0, 
                                    _while_condtional5) {
                                        prev_it_21=it_20;
                                        __freed_obj__ = 0;
                                        it_20=((struct list_item$1charp*)come_null_check(it_20, "./comelang2.h", 172))->next;
                                        __freed_obj__ = 0;
                                        if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
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

static void list$1charp_finalize(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_22;
_Bool _for_condtionalA2;
_Bool _if_conditional45;
_Bool _if_conditional46;
int i_23;
_Bool _for_condtionalA3;
_Bool _if_conditional47;
_Bool _if_conditional48;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_22, 0, sizeof(int));
memset(&i_23, 0, sizeof(int));
                                for(
                                i_22=0 ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA2=                                i_22<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1172))->size ,                                __freed_obj__ = 0, 
                                _for_condtionalA2;                                i_22++ ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional45=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1171))->item_existance[i_22],                                    __freed_obj__ = 0, 
                                    _if_conditional45) {
                                        if(_if_conditional46=1,                                        __freed_obj__ = 0, 
                                        _if_conditional46) {
                                            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_22] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1168))->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0); }
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
                                i_23=0 ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA3=                                i_23<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1181))->size ,                                __freed_obj__ = 0, 
                                _for_condtionalA3;                                i_23++ ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional47=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1180))->item_existance[i_23],                                    __freed_obj__ = 0, 
                                    _if_conditional47) {
                                        if(_if_conditional48=1,                                        __freed_obj__ = 0, 
                                        _if_conditional48) {
                                            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_23] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_23] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->keys[i_23], (void*)0, (void*)0, 0, 0, 0); }
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

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional49;
char* result_25;
char* __result23__;
_Bool _if_conditional50;
char* __result24__;
char* result_26;
char* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_25, 0, sizeof(char*));
memset(&result_26, 0, sizeof(char*));
                            if(_if_conditional49=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional49) {
                                __freed_obj__ = 0;
                                memset(&result_25,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result23__ = __result_obj__ = result_25;
                                __freed_obj__ = 0;
                                return __result23__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1336))->key_list, "./comelang2.h", 1336))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional50=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1342))->key_list, "./comelang2.h", 1342))->it,                            __freed_obj__ = 0, 
                            _if_conditional50) {
                                __result24__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1339))->key_list, "./comelang2.h", 1339))->it, "./comelang2.h", 1339))->item;
                                __freed_obj__ = 0;
                                return __result24__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_26,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result25__ = __result_obj__ = result_26;
                            __freed_obj__ = 0;
                            return __result25__;
                            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result26__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1365))->key_list, "./comelang2.h", 1365))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result26__;
                            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
char* result_28;
char* __result27__;
_Bool _if_conditional52;
char* __result28__;
char* result_29;
char* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_28, 0, sizeof(char*));
memset(&result_29, 0, sizeof(char*));
                            if(_if_conditional51=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                __freed_obj__ = 0;
                                memset(&result_28,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result27__ = __result_obj__ = result_28;
                                __freed_obj__ = 0;
                                return __result27__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1353))->key_list, "./comelang2.h", 1353))->it, "./comelang2.h", 1353))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional52=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1359))->key_list, "./comelang2.h", 1359))->it,                            __freed_obj__ = 0, 
                            _if_conditional52) {
                                __result28__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1356))->key_list, "./comelang2.h", 1356))->it, "./comelang2.h", 1356))->item;
                                __freed_obj__ = 0;
                                return __result28__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&result_29,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result29__ = __result_obj__ = result_29;
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_31;
unsigned int it_32;
_Bool _while_condtional6;
_Bool _if_conditional53;
void* right_value29;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional55;
struct sVar* __result32__;
_Bool _if_conditional56;
_Bool _if_conditional57;
struct sVar* __result33__;
struct sVar* __result34__;
struct sVar* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_31, 0, sizeof(unsigned int));
memset(&it_32, 0, sizeof(unsigned int));
memset(&right_value29, 0, sizeof(void*));
                                hash_31=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1258))->size;
                                __freed_obj__ = 0;
                                it_32=hash_31;
                                __freed_obj__ = 0;
                                while(_while_condtional6=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional6) {
                                    if(_if_conditional53=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_32],                                    __freed_obj__ = 0, 
                                    _if_conditional53) {
                                        if(_if_conditional55=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value29=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_32], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29),
                                        (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value29, 
                                        __freed_obj__ = 0, 
                                        _if_conditional55) {
                                            __result32__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1266))->items[it_32];
                                            __freed_obj__ = 0;
                                            return __result32__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_32++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional56=it_32>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1277))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional56) {
                                            it_32=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional57=it_32==hash_31,                                            __freed_obj__ = 0, 
                                            _if_conditional57) {
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
_Bool _if_conditional54;
_Bool default_value_33;
_Bool __result30__;
_Bool __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_33, 0, sizeof(_Bool));
                                            if(_if_conditional54=self==((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional54) {
                                                __freed_obj__ = 0;
                                                memset(&default_value_33,0,sizeof(_Bool));
                                                __freed_obj__ = 0;
                                                __result30__ = default_value_33;
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

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
unsigned int hash_46;
int it_47;
_Bool _while_condtional8;
_Bool _if_conditional62;
void* right_value36;
struct optional$2boolbool* __exception_result_var_a2;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool same_key_exist_64;
char* it2_67;
_Bool _for_condtionalA6;
void* right_value38;
struct optional$2boolbool* __exception_result_var_a4;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct map$2charphsVarph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_46, 0, sizeof(unsigned int));
memset(&it_47, 0, sizeof(int));
memset(&right_value36, 0, sizeof(void*));
memset(&same_key_exist_64, 0, sizeof(_Bool));
memset(&it2_67, 0, sizeof(char*));
memset(&right_value38, 0, sizeof(void*));
                                if(_if_conditional58=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->len*2>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size,                                __freed_obj__ = 0, 
                                _if_conditional58) {
                                    map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1498)));
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                hash_46=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1500)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1500))->size;
                                __freed_obj__ = 0;
                                it_47=hash_46;
                                __freed_obj__ = 0;
                                while(_while_condtional8=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional8) {
                                    if(_if_conditional62=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1556))->item_existance[it_47],                                    __freed_obj__ = 0, 
                                    _if_conditional62) {
                                        if(_if_conditional63=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1527),__exception_result_var_a2=((struct optional$2boolbool*)(right_value36=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1527))->keys[it_47], "./comelang2.h", 1527)),key))), come_pop_stackframe(), __exception_result_var_a2)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36),
                                        (right_value36 && right_value36 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value36, 
                                        __freed_obj__ = 0, 
                                        _if_conditional63) {
                                            if(_if_conditional64=1,                                            __freed_obj__ = 0, 
                                            _if_conditional64) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_47] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_47] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1509))->keys[it_47], (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->key_list, "./comelang2.h", 1510)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1510))->keys[it_47]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1511))->keys[it_47]=(char*)come_increment_ref_count(key);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->key_list, "./comelang2.h", 1514)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_47]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->keys[it_47]=key;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional84=1,                                            __freed_obj__ = 0, 
                                            _if_conditional84) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_47] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1518))->items[it_47], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1519))->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1522))->items[it_47]=item;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_47++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional85=it_47>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1536))->size,                                        __freed_obj__ = 0, 
                                        _if_conditional85) {
                                            it_47=0;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional86=it_47==hash_46,                                            __freed_obj__ = 0, 
                                            _if_conditional86) {
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
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1538))->item_existance[it_47]=(_Bool)1;
                                        __freed_obj__ = 0;
                                        if(_if_conditional87=1,                                        __freed_obj__ = 0, 
                                        _if_conditional87) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1540))->keys[it_47]=(char*)come_increment_ref_count(key);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1543))->keys[it_47]=key;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional88=1,                                        __freed_obj__ = 0, 
                                        _if_conditional88) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1546))->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1549))->items[it_47]=item;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1552))->len++;
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                same_key_exist_64=(_Bool)0;
                                __freed_obj__ = 0;
                                for(
                                it2_67=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA6=                                !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA6;                                it2_67=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1566))->key_list, "./comelang2.h", 1566))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional93=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1564),__exception_result_var_a4=((struct optional$2boolbool*)(right_value38=string_equals(((char*)come_null_check(it2_67, "./comelang2.h", 1564)),key))), come_pop_stackframe(), __exception_result_var_a4)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38),
                                    (right_value38 && right_value38 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                    __right_value_freed_obj[0] = right_value38, 
                                    __freed_obj__ = 0, 
                                    _if_conditional93) {
                                        same_key_exist_64=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional94=!same_key_exist_64,                                __freed_obj__ = 0, 
                                _if_conditional94) {
                                    list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1567))->key_list, "./comelang2.h", 1567)),key);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result48__ = __result_obj__ = self;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result48__;
                                __freed_obj__ = 0;
                                if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                                if(item && !__freed_obj__) { come_call_finalizer(sVar_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_35;
void* right_value31;
char** keys_36;
void* right_value32;
struct sVar** items_37;
void* right_value33;
_Bool* item_existance_38;
int len_39;
char* it_40;
_Bool _for_condtionalA5;
struct sVar* default_value_41;
void* right_value34;
struct sVar* it2_42;
unsigned int hash_43;
int n_44;
_Bool _while_condtional7;
_Bool _if_conditional59;
_Bool _if_conditional60;
_Bool _if_conditional61;
struct sVar* default_value_45;
void* right_value35;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_35, 0, sizeof(int));
memset(&right_value31, 0, sizeof(void*));
memset(&keys_36, 0, sizeof(char**));
memset(&right_value32, 0, sizeof(void*));
memset(&items_37, 0, sizeof(struct sVar**));
memset(&right_value33, 0, sizeof(void*));
memset(&item_existance_38, 0, sizeof(_Bool*));
memset(&len_39, 0, sizeof(int));
memset(&it_40, 0, sizeof(char*));
memset(&default_value_41, 0, sizeof(struct sVar*));
memset(&right_value34, 0, sizeof(void*));
memset(&it2_42, 0, sizeof(struct sVar*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&n_44, 0, sizeof(int));
memset(&default_value_45, 0, sizeof(struct sVar*));
memset(&right_value35, 0, sizeof(void*));
                                        size_35=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1369))->size*10;
                                        __freed_obj__ = 0;
                                        keys_36=(char**)come_increment_ref_count(((char**)(right_value31=(char**)come_calloc(1, sizeof(char*)*(1*(size_35)), "./comelang2.h", 1370))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value31;
                                        __freed_obj__ = 0;
                                        items_37=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value32=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_35)), "./comelang2.h", 1371))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
                                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value32;
                                        __freed_obj__ = 0;
                                        item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value33=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_35)), "./comelang2.h", 1372))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value33);
                                        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value33;
                                        __freed_obj__ = 0;
                                        len_39=0;
                                        __freed_obj__ = 0;
                                        for(
                                        it_40=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0;                                        _for_condtionalA5=                                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        _for_condtionalA5;                                        it_40=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))) ,                                        __freed_obj__ = 0, 
                                        0                                        ){
                                            __freed_obj__ = 0;
                                            memset(&default_value_41,0,sizeof(struct sVar*));
                                            __freed_obj__ = 0;
                                            it2_42=((struct sVar*)(right_value34=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1379)),it_40,default_value_41)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value34;
                                            __freed_obj__ = 0;
                                            hash_43=string_get_hash_key(((char*)come_null_check(it_40, "./comelang2.h", 1380)))%size_35;
                                            __freed_obj__ = 0;
                                            n_44=hash_43;
                                            __freed_obj__ = 0;
                                            while(_while_condtional7=(_Bool)1,                                            __freed_obj__ = 0, 
                                            _while_condtional7) {
                                                if(_if_conditional59=item_existance_38[n_44],                                                __freed_obj__ = 0, 
                                                _if_conditional59) {
                                                    n_44++;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional60=n_44>=size_35,                                                    __freed_obj__ = 0, 
                                                    _if_conditional60) {
                                                        n_44=0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional61=n_44==hash_43,                                                        __freed_obj__ = 0, 
                                                        _if_conditional61) {
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
                                                    item_existance_38[n_44]=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                    keys_36[n_44]=it_40;
                                                    __freed_obj__ = 0;
                                                    __freed_obj__ = 0;
                                                    items_37[n_44]=((struct sVar*)(right_value35=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1400)),it_40,default_value_45)));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                                    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value35;
                                                    __freed_obj__ = 0;
                                                    len_39++;
                                                    __freed_obj__ = 0;
                                                    break;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1408))->items);
                                        __freed_obj__ = 0;
                                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1409))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1410))->keys);
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1412))->keys=keys_36;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items=items_37;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance=item_existance_38;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1416))->size=size_35;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->len=len_39;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_48;
struct list_item$1charp* it_49;
_Bool _while_condtional9;
void* right_value37;
struct optional$2boolbool* __exception_result_var_a3;
_Bool _if_conditional65;
struct list$1charp* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_48, 0, sizeof(int));
memset(&it_49, 0, sizeof(struct list_item$1charp*));
memset(&right_value37, 0, sizeof(void*));
                                                    it2_48=0;
                                                    __freed_obj__ = 0;
                                                    it_49=((struct list$1charp*)come_null_check(self, "./comelang2.h", 492))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional9=it_49!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional9) {
                                                        if(_if_conditional65=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 498),__exception_result_var_a3=((struct optional$2boolbool*)(right_value37=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_49, "./comelang2.h", 498))->item, "./comelang2.h", 498)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37),
                                                        (right_value37 && right_value37 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value37, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional65) {
                                                            list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 495)),it2_48,it2_48+1);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        it2_48++;
                                                        __freed_obj__ = 0;
                                                        it_49=((struct list_item$1charp*)come_null_check(it_49, "./comelang2.h", 500))->next;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    __result39__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result39__;
                                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional66;
_Bool _if_conditional67;
_Bool _if_conditional68;
int tmp_50;
_Bool _if_conditional69;
_Bool _if_conditional70;
_Bool _if_conditional71;
struct list$1charp* __result36__;
_Bool _if_conditional72;
_Bool _if_conditional73;
struct list_item$1charp* it_53;
int i_54;
_Bool _while_condtional11;
_Bool _if_conditional74;
struct list_item$1charp* prev_it_55;
_Bool _if_conditional75;
_Bool _if_conditional76;
struct list_item$1charp* it_56;
int i_57;
_Bool _while_condtional12;
_Bool _if_conditional77;
_Bool _if_conditional78;
struct list_item$1charp* prev_it_58;
struct list_item$1charp* it_59;
struct list_item$1charp* head_prev_it_60;
struct list_item$1charp* tail_it_61;
int i_62;
_Bool _while_condtional13;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
struct list_item$1charp* prev_it_63;
_Bool _if_conditional82;
_Bool _if_conditional83;
struct list$1charp* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_50, 0, sizeof(int));
memset(&it_53, 0, sizeof(struct list_item$1charp*));
memset(&i_54, 0, sizeof(int));
memset(&prev_it_55, 0, sizeof(struct list_item$1charp*));
memset(&it_56, 0, sizeof(struct list_item$1charp*));
memset(&i_57, 0, sizeof(int));
memset(&prev_it_58, 0, sizeof(struct list_item$1charp*));
memset(&it_59, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_60, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_61, 0, sizeof(struct list_item$1charp*));
memset(&i_62, 0, sizeof(int));
memset(&prev_it_63, 0, sizeof(struct list_item$1charp*));
                                                                if(_if_conditional66=head<0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional66) {
                                                                    head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 508))->len;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional67=tail<0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional67) {
                                                                    tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 511))->len+1;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional68=head>tail,                                                                __freed_obj__ = 0, 
                                                                _if_conditional68) {
                                                                    tmp_50=tail;
                                                                    __freed_obj__ = 0;
                                                                    tail=head;
                                                                    __freed_obj__ = 0;
                                                                    head=tmp_50;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional69=head<0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional69) {
                                                                    head=0;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional70=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 528))->len,                                                                __freed_obj__ = 0, 
                                                                _if_conditional70) {
                                                                    tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 525))->len;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional71=head==tail,                                                                __freed_obj__ = 0, 
                                                                _if_conditional71) {
                                                                    __result36__ = __result_obj__ = self;
                                                                    __freed_obj__ = 0;
                                                                    return __result36__;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional72=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                __freed_obj__ = 0, 
                                                                _if_conditional72) {
                                                                    list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 534)));
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional73=head==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional73) {
                                                                        it_53=((struct list$1charp*)come_null_check(self, "./comelang2.h", 537))->head;
                                                                        __freed_obj__ = 0;
                                                                        i_54=0;
                                                                        __freed_obj__ = 0;
                                                                        while(_while_condtional11=it_53!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _while_condtional11) {
                                                                            if(_if_conditional74=i_54<tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional74) {
                                                                                prev_it_55=it_53;
                                                                                __freed_obj__ = 0;
                                                                                it_53=((struct list_item$1charp*)come_null_check(it_53, "./comelang2.h", 543))->next;
                                                                                __freed_obj__ = 0;
                                                                                i_54++;
                                                                                __freed_obj__ = 0;
                                                                                if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                __freed_obj__ = 0;
                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 548))->len--;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional75=i_54==tail,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional75) {
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 551))->head=it_53;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 552))->head, "./comelang2.h", 552))->prev=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                    break;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_53=((struct list_item$1charp*)come_null_check(it_53, "./comelang2.h", 556))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_54++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional76=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 627))->len,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional76) {
                                                                            it_56=((struct list$1charp*)come_null_check(self, "./comelang2.h", 562))->head;
                                                                            __freed_obj__ = 0;
                                                                            i_57=0;
                                                                            __freed_obj__ = 0;
                                                                            while(_while_condtional12=it_56!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _while_condtional12) {
                                                                                if(_if_conditional77=i_57==head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional77) {
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 566))->tail=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 566))->prev;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->tail, "./comelang2.h", 567))->next=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional78=i_57>=head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional78) {
                                                                                    prev_it_58=it_56;
                                                                                    __freed_obj__ = 0;
                                                                                    it_56=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 573))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_57++;
                                                                                    __freed_obj__ = 0;
                                                                                    if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 578))->len--;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_56=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 581))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_57++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            it_59=((struct list$1charp*)come_null_check(self, "./comelang2.h", 587))->head;
                                                                            __freed_obj__ = 0;
                                                                            head_prev_it_60=((void*)0);
                                                                            __freed_obj__ = 0;
                                                                            tail_it_61=((void*)0);
                                                                            __freed_obj__ = 0;
                                                                            i_62=0;
                                                                            __freed_obj__ = 0;
                                                                            while(_while_condtional13=it_59!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _while_condtional13) {
                                                                                if(_if_conditional79=i_62==head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional79) {
                                                                                    head_prev_it_60=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 596))->prev;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional80=i_62==tail,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional80) {
                                                                                    tail_it_61=it_59;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional81=i_62>=head&&i_62<tail,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional81) {
                                                                                    prev_it_63=it_59;
                                                                                    __freed_obj__ = 0;
                                                                                    it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 606))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_62++;
                                                                                    __freed_obj__ = 0;
                                                                                    if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 611))->len--;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 614))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_62++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional82=head_prev_it_60!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional82) {
                                                                                ((struct list_item$1charp*)come_null_check(head_prev_it_60, "./comelang2.h", 620))->next=tail_it_61;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional83=tail_it_61!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional83) {
                                                                                ((struct list_item$1charp*)come_null_check(tail_it_61, "./comelang2.h", 623))->prev=head_prev_it_60;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                __result38__ = __result_obj__ = self;
                                                                __freed_obj__ = 0;
                                                                return __result38__;
                                                                __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_51;
_Bool _while_condtional10;
struct list_item$1charp* prev_it_52;
struct list$1charp* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_51, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_52, 0, sizeof(struct list_item$1charp*));
                                                                        it_51=((struct list$1charp*)come_null_check(self, "./comelang2.h", 476))->head;
                                                                        __freed_obj__ = 0;
                                                                        while(_while_condtional10=it_51!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _while_condtional10) {
                                                                            prev_it_52=it_51;
                                                                            __freed_obj__ = 0;
                                                                            it_51=((struct list_item$1charp*)come_null_check(it_51, "./comelang2.h", 479))->next;
                                                                            __freed_obj__ = 0;
                                                                            if(prev_it_52 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 486))->len=0;
                                                                        __freed_obj__ = 0;
                                                                        __result37__ = __result_obj__ = self;
                                                                        __freed_obj__ = 0;
                                                                        return __result37__;
                                                                        __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional89;
char* result_65;
char* __result40__;
_Bool _if_conditional90;
char* __result41__;
char* result_66;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_65, 0, sizeof(char*));
memset(&result_66, 0, sizeof(char*));
                                    if(_if_conditional89=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional89) {
                                        __freed_obj__ = 0;
                                        memset(&result_65,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result40__ = __result_obj__ = result_65;
                                        __freed_obj__ = 0;
                                        return __result40__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 336))->head;
                                    __freed_obj__ = 0;
                                    if(_if_conditional90=((struct list$1charp*)come_null_check(self, "./comelang2.h", 342))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional90) {
                                        __result41__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
                                        __freed_obj__ = 0;
                                        return __result41__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_66,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result42__ = __result_obj__ = result_66;
                                    __freed_obj__ = 0;
                                    return __result42__;
                                    __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result43__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
                                    __freed_obj__ = 0;
                                    return __result43__;
                                    __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional91;
char* result_68;
char* __result44__;
_Bool _if_conditional92;
char* __result45__;
char* result_69;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_68, 0, sizeof(char*));
memset(&result_69, 0, sizeof(char*));
                                    if(_if_conditional91=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional91) {
                                        __freed_obj__ = 0;
                                        memset(&result_68,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result44__ = __result_obj__ = result_68;
                                        __freed_obj__ = 0;
                                        return __result44__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
                                    __freed_obj__ = 0;
                                    if(_if_conditional92=((struct list$1charp*)come_null_check(self, "./comelang2.h", 360))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional92) {
                                        __result45__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
                                        __freed_obj__ = 0;
                                        return __result45__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_69,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result46__ = __result_obj__ = result_69;
                                    __freed_obj__ = 0;
                                    return __result46__;
                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
void* right_value39;
struct list_item$1charp* litem_70;
_Bool _if_conditional96;
void* right_value40;
struct list_item$1charp* litem_71;
void* right_value41;
struct list_item$1charp* litem_72;
struct list$1charp* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_70, 0, sizeof(struct list_item$1charp*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_71, 0, sizeof(struct list_item$1charp*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_72, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional95=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==0,                                        __freed_obj__ = 0, 
                                        _if_conditional95) {
                                            litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value39=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 272))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value39;
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_70, "./comelang2.h", 274))->prev=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_70, "./comelang2.h", 275))->next=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_70, "./comelang2.h", 276))->item=item;
                                            __freed_obj__ = 0;
                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 278))->tail=litem_70;
                                            __freed_obj__ = 0;
                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 279))->head=litem_70;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional96=((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len==1,                                            __freed_obj__ = 0, 
                                            _if_conditional96) {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value40=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 282))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value40;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 284))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 285))->next=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 286))->item=item;
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 288))->tail=litem_71;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_71;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                litem_72=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value41=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 292))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value41;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 294))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->tail;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 295))->next=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 296))->item=item;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_72;
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail=litem_72;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 302))->len++;
                                        __freed_obj__ = 0;
                                        __result47__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result47__;
                                        __freed_obj__ = 0;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
struct sVar* __result49__;
void* right_value42;
struct sVar* result_73;
_Bool _if_conditional98;
void* right_value43;
char* __dec_obj13;
_Bool _if_conditional99;
void* right_value44;
char* __dec_obj14;
_Bool _if_conditional100;
void* right_value79;
struct sType* __dec_obj36;
_Bool _if_conditional164;
_Bool _if_conditional165;
_Bool _if_conditional166;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value80;
char* __dec_obj37;
struct sVar* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value42, 0, sizeof(void*));
memset(&result_73, 0, sizeof(struct sVar*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
                                if(_if_conditional97=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional97) {
                                    __result49__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result49__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_73=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value42=(struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value42;
                                __freed_obj__ = 0;
                                if(_if_conditional98=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 5))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional98) {
                                    __dec_obj13=((struct sVar*)come_null_check(result_73, "sVar_clone", 4))->mName;
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 4))->mName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 4))->mName))));
                                    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                                    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value43;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional99=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 6))->mCValueName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional99) {
                                    __dec_obj14=((struct sVar*)come_null_check(result_73, "sVar_clone", 5))->mCValueName;
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 5))->mCValueName=(char*)come_increment_ref_count(((char*)(right_value44=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 5))->mCValueName))));
                                    if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                                    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { right_value44 = come_decrement_ref_count(right_value44, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value44;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional100=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 7))->mType!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional100) {
                                    __dec_obj36=((struct sVar*)come_null_check(result_73, "sVar_clone", 6))->mType;
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 6))->mType=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(((struct sVar*)come_null_check(self, "sVar_clone", 6))->mType))));
                                    if(__dec_obj36) { come_call_finalizer(sType_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value79;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional164=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional164) {
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 7))->mBlockLevel=((struct sVar*)come_null_check(self, "sVar_clone", 7))->mBlockLevel;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional165=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional165) {
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 8))->mGlobal=((struct sVar*)come_null_check(self, "sVar_clone", 8))->mGlobal;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional166=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional166) {
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 9))->mAllocaValue=((struct sVar*)come_null_check(self, "sVar_clone", 9))->mAllocaValue;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional167=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional167) {
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 10))->mFunctionParam=((struct sVar*)come_null_check(self, "sVar_clone", 10))->mFunctionParam;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional168=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional168) {
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 11))->mNoFree=((struct sVar*)come_null_check(self, "sVar_clone", 11))->mNoFree;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional169=self!=((void*)0)&&((struct sVar*)come_null_check(self, "sVar_clone", 13))->mFunName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional169) {
                                    __dec_obj37=((struct sVar*)come_null_check(result_73, "sVar_clone", 12))->mFunName;
                                    ((struct sVar*)come_null_check(result_73, "sVar_clone", 12))->mFunName=(char*)come_increment_ref_count(((char*)(right_value80=string_clone(((struct sVar*)come_null_check(self, "sVar_clone", 12))->mFunName))));
                                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value80;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result68__ = __result_obj__ = result_73;
                                if(result_73 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_73, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result68__;
                                __freed_obj__ = 0;
                                if(result_73 && !__freed_obj__) { come_call_finalizer(sVar_finalize,result_73, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
struct sType* __result50__;
void* right_value45;
struct sType* result_74;
_Bool _if_conditional102;
_Bool _if_conditional103;
void* right_value48;
struct tuple1$1sTypeph* __dec_obj16;
_Bool _if_conditional107;
void* right_value51;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional110;
void* right_value52;
char* __dec_obj19;
_Bool _if_conditional111;
void* right_value59;
struct list$1sTypeph* __dec_obj23;
_Bool _if_conditional115;
void* right_value63;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional117;
_Bool _if_conditional118;
void* right_value64;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional119;
void* right_value71;
struct list$1charph* __dec_obj29;
_Bool _if_conditional123;
void* right_value74;
struct tuple1$1sTypeph* __dec_obj31;
_Bool _if_conditional126;
_Bool _if_conditional127;
void* right_value75;
struct sNode* __dec_obj32;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
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
void* right_value76;
struct sNode* __dec_obj33;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value77;
char* __dec_obj34;
_Bool _if_conditional155;
_Bool _if_conditional156;
_Bool _if_conditional157;
_Bool _if_conditional158;
_Bool _if_conditional159;
_Bool _if_conditional160;
_Bool _if_conditional161;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value78;
char* __dec_obj35;
struct sType* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&result_74, 0, sizeof(struct sType*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
                                        if(_if_conditional101=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional101) {
                                            __result50__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result50__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                                        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value45;
                                        __freed_obj__ = 0;
                                        if(_if_conditional102=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional102) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional103=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional103) {
                                            __dec_obj16=((struct sType*)come_null_check(result_74, "sType_clone", 5))->mNoSolvedGenericsType;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value48=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
                                            if(__dec_obj16) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value48;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional107=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional107) {
                                            __dec_obj18=((struct sType*)come_null_check(result_74, "sType_clone", 6))->mOriginalLoadVarType;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value51=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
                                            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                                            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value51;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional110=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional110) {
                                            __dec_obj19=((struct sType*)come_null_check(result_74, "sType_clone", 7))->mGenericsName;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value52=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
                                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                                            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value52;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional111=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional111) {
                                            __dec_obj23=((struct sType*)come_null_check(result_74, "sType_clone", 8))->mGenericsTypes;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
                                            if(__dec_obj23) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                                            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value59;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional115=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional115) {
                                            __dec_obj24=((struct sType*)come_null_check(result_74, "sType_clone", 9))->mArrayNum;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=list$1sNodeph_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
                                            if(__dec_obj24) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value63;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional117=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional117) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional118=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional118) {
                                            __dec_obj25=((struct sType*)come_null_check(result_74, "sType_clone", 11))->mParamTypes;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value64=list$1sTypeph_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
                                            if(__dec_obj25) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                                            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value64;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional119=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional119) {
                                            __dec_obj29=((struct sType*)come_null_check(result_74, "sType_clone", 12))->mParamNames;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value71=list$1charph_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
                                            if(__dec_obj29) { come_call_finalizer(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value71;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional123=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional123) {
                                            __dec_obj31=((struct sType*)come_null_check(result_74, "sType_clone", 13))->mResultType;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value74=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
                                            if(__dec_obj31) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
                                            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value74;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional126=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional126) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional127=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional127) {
                                            __dec_obj32=((struct sType*)come_null_check(result_74, "sType_clone", 15))->mAlignas;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
                                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                                            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value75;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional128=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional128) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional129=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional129) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional130=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional130) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional131=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional131) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional132=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional132) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional133=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional133) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional134=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional134) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional135=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional135) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional136=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional136) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional137=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional137) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional138=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional138) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional139=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional139) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional140=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional140) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional141=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional141) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional142=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional142) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional143=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional143) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional144=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional144) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional145=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional145) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional146=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional146) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional147=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional147) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional148=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional148) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional149=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional149) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional150=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional150) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional151=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional151) {
                                            __dec_obj33=((struct sType*)come_null_check(result_74, "sType_clone", 39))->mSizeNum;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
                                            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                                            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value76;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional152=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional152) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional153=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional153) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional154=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional154) {
                                            __dec_obj34=((struct sType*)come_null_check(result_74, "sType_clone", 42))->mOriginalTypeName;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value77=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
                                            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value77;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional155=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional155) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional156=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional156) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional157=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional157) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional158=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional158) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional159=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional159) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional160=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional160) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional161=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional161) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional162=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional162) {
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional163=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional163) {
                                            __dec_obj35=((struct sType*)come_null_check(result_74, "sType_clone", 51))->mAsmName;
                                            ((struct sType*)come_null_check(result_74, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
                                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value78;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result67__ = __result_obj__ = result_74;
                                        if(result_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_74, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result67__;
                                        __freed_obj__ = 0;
                                        if(result_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional105=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional105) {
                                                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
struct list$1sTypeph* __result55__;
void* right_value53;
void* right_value54;
struct list$1sTypeph* result_77;
struct list_item$1sTypeph* it_78;
_Bool _while_condtional14;
void* right_value58;
struct list$1sTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&result_77, 0, sizeof(struct list$1sTypeph*));
memset(&it_78, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value58, 0, sizeof(void*));
                                                if(_if_conditional112=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional112) {
                                                    __result55__ = __result_obj__ = ((void*)0);
                                                    __freed_obj__ = 0;
                                                    return __result55__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_77=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value53=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value53;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                                                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value54;
                                                __freed_obj__ = 0;
                                                it_78=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_78!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_77, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_78, "./comelang2.h", 192))->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                                                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value58;
                                                    __freed_obj__ = 0;
                                                    it_78=((struct list_item$1sTypeph*)come_null_check(it_78, "./comelang2.h", 194))->next;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result58__ = __result_obj__ = result_77;
                                                if(result_77 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_77, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result58__;
                                                __freed_obj__ = 0;
                                                if(result_77 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result56__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result56__;
                                                    __freed_obj__ = 0;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
void* right_value55;
struct list_item$1sTypeph* litem_79;
struct sType* __dec_obj20;
_Bool _if_conditional114;
void* right_value56;
struct list_item$1sTypeph* litem_80;
struct sType* __dec_obj21;
void* right_value57;
struct list_item$1sTypeph* litem_81;
struct sType* __dec_obj22;
struct list$1sTypeph* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&litem_79, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value56, 0, sizeof(void*));
memset(&litem_80, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value57, 0, sizeof(void*));
memset(&litem_81, 0, sizeof(struct list_item$1sTypeph*));
                                                        if(_if_conditional113=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional113) {
                                                            litem_79=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value55;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 204))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 205))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj20=((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 206))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj20) { come_call_finalizer(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_79;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_79;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional114=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                            __freed_obj__ = 0, 
                                                            _if_conditional114) {
                                                                litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                                                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value56;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 215))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj21=((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 216))->item;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_80;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_80;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                                                                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value57;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 225))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj22=((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 226))->item;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_81;
                                                                __freed_obj__ = 0;
                                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_81;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                        __freed_obj__ = 0;
                                                        __result57__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result57__;
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
_Bool _if_conditional116;
struct list$1sNodeph* __result59__;
void* right_value60;
void* right_value61;
struct list$1sNodeph* result_82;
struct list_item$1sNodeph* it_83;
_Bool _while_condtional15;
void* right_value62;
struct list$1sNodeph* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_82, 0, sizeof(struct list$1sNodeph*));
memset(&it_83, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value62, 0, sizeof(void*));
                                                if(_if_conditional116=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional116) {
                                                    __result59__ = __result_obj__ = ((void*)0);
                                                    __freed_obj__ = 0;
                                                    return __result59__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_82=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value61=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value60=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                                                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value60;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                                                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value61;
                                                __freed_obj__ = 0;
                                                it_83=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional15=it_83!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional15) {
                                                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_82, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_83, "./comelang2.h", 192))->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value62;
                                                    __freed_obj__ = 0;
                                                    it_83=((struct list_item$1sNodeph*)come_null_check(it_83, "./comelang2.h", 194))->next;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result60__ = __result_obj__ = result_82;
                                                if(result_82 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_82, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result60__;
                                                __freed_obj__ = 0;
                                                if(result_82 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
struct list$1charph* __result61__;
void* right_value65;
void* right_value66;
struct list$1charph* result_84;
struct list_item$1charph* it_85;
_Bool _while_condtional16;
void* right_value70;
struct list$1charph* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&result_84, 0, sizeof(struct list$1charph*));
memset(&it_85, 0, sizeof(struct list_item$1charph*));
memset(&right_value70, 0, sizeof(void*));
                                                if(_if_conditional120=self==((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional120) {
                                                    __result61__ = __result_obj__ = ((void*)0);
                                                    __freed_obj__ = 0;
                                                    return __result61__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_84=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value66=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value65=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                                                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value65;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
                                                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value66;
                                                __freed_obj__ = 0;
                                                it_85=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional16=it_85!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional16) {
                                                    list$1charph_add(((struct list$1charph*)come_null_check(result_84, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value70=string_clone(((struct list_item$1charph*)come_null_check(it_85, "./comelang2.h", 192))->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                                                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value70;
                                                    __freed_obj__ = 0;
                                                    it_85=((struct list_item$1charph*)come_null_check(it_85, "./comelang2.h", 194))->next;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result64__ = __result_obj__ = result_84;
                                                if(result_84 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_84, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result64__;
                                                __freed_obj__ = 0;
                                                if(result_84 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_84, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result62__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result62__;
                                                    __freed_obj__ = 0;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
void* right_value67;
struct list_item$1charph* litem_86;
char* __dec_obj26;
_Bool _if_conditional122;
void* right_value68;
struct list_item$1charph* litem_87;
char* __dec_obj27;
void* right_value69;
struct list_item$1charph* litem_88;
char* __dec_obj28;
struct list$1charph* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&litem_86, 0, sizeof(struct list_item$1charph*));
memset(&right_value68, 0, sizeof(void*));
memset(&litem_87, 0, sizeof(struct list_item$1charph*));
memset(&right_value69, 0, sizeof(void*));
memset(&litem_88, 0, sizeof(struct list_item$1charph*));
                                                        if(_if_conditional121=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional121) {
                                                            litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value67;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 204))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 205))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj26=((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 206))->item;
                                                            ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_86;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_86;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional122=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                                                            __freed_obj__ = 0, 
                                                            _if_conditional122) {
                                                                litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                                                                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value68;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 215))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj27=((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 216))->item;
                                                                ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_87;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_87;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value69=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                                                                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value69;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 225))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj28=((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 226))->item;
                                                                ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_88;
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_88;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                                                        __freed_obj__ = 0;
                                                        __result63__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result63__;
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
_Bool _if_conditional124;
struct tuple1$1sTypeph* __result65__;
void* right_value72;
struct tuple1$1sTypeph* result_89;
_Bool _if_conditional125;
void* right_value73;
struct sType* __dec_obj30;
struct tuple1$1sTypeph* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
memset(&result_89, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value73, 0, sizeof(void*));
                                                if(_if_conditional124=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional124) {
                                                    __result65__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result65__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_89=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value72=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value72;
                                                __freed_obj__ = 0;
                                                if(_if_conditional125=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional125) {
                                                    __dec_obj30=((struct tuple1$1sTypeph*)come_null_check(result_89, "tuple1$1sTypephp_clone", 4))->v1;
                                                    ((struct tuple1$1sTypeph*)come_null_check(result_89, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value73=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                                                    if(__dec_obj30) { come_call_finalizer(sType_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                                                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value73;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result66__ = __result_obj__ = result_89;
                                                if(result_89 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result66__;
                                                __freed_obj__ = 0;
                                                if(result_89 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional170=self!=((void*)0)&&((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 1))->key_list!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional170) {
                            if(((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "map$2charphsVarph_finalize", 0))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

_Bool sWhileNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result73__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

char* sWhileNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value85;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value85, 0, sizeof(void*));
    __result74__ = __result_obj__ = ((char*)(right_value85=__builtin_string("sWhileNode")));
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

_Bool sWhileNode_compile(struct sWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool in_loop_90;
struct sNode* expression_node_91;
_Bool _if_conditional177;
_Bool __result75__;
void* right_value86;
struct CVALUE* conditional_value_92;
struct sBlock* block_93;
static int num_while_condtional_94=0;
int num_while_conditional_stack_95;
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&in_loop_90, 0, sizeof(_Bool));
memset(&expression_node_91, 0, sizeof(struct sNode*));
memset(&right_value86, 0, sizeof(void*));
memset(&conditional_value_92, 0, sizeof(struct CVALUE*));
memset(&block_93, 0, sizeof(struct sBlock*));
memset(&num_while_conditional_stack_95, 0, sizeof(int));
    in_loop_90=((struct sInfo*)come_null_check(info, "09while.c", 36))->in_loop;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "09while.c", 37))->in_loop=(_Bool)1;
    __freed_obj__ = 0;
    expression_node_91=((struct sWhileNode*)come_null_check(self, "09while.c", 40))->mExpressionNode;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "09while.c", 42))->without_semicolon=(_Bool)1;
    __freed_obj__ = 0;
    if(_if_conditional177=!((struct sNode*)come_null_check(expression_node_91, "09while.c", 46))->compile(((struct sNode*)come_null_check(expression_node_91, "09while.c", 46))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional177) {
        __result75__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result75__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "09while.c", 46))->without_semicolon=(_Bool)0;
    __freed_obj__ = 0;
    conditional_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value86=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value86;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    block_93=((struct sWhileNode*)come_null_check(self, "09while.c", 51))->mBlock;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"_Bool _while_condtional%d;\n",++num_while_condtional_94);
    __freed_obj__ = 0;
    num_while_conditional_stack_95=num_while_condtional_94;
    __freed_obj__ = 0;
    add_come_code(info,"while(_while_condtional%d=%s,",num_while_condtional_94,((struct CVALUE*)come_null_check(conditional_value_92, "09while.c", 57))->c_value);
    __freed_obj__ = 0;
    add_last_code_to_source_with_comma(info);
    __freed_obj__ = 0;
    free_right_value_objects(info,(_Bool)1);
    __freed_obj__ = 0;
    add_come_code(info,"_while_condtional%d) {\n",num_while_conditional_stack_95);
    __freed_obj__ = 0;
    transpile_block(block_93,((void*)0),((void*)0),info,(_Bool)0,(_Bool)1);
    __freed_obj__ = 0;
    add_come_code(info,"}\n");
    __freed_obj__ = 0;
    transpiler_clear_last_code(info);
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "09while.c", 68))->in_loop=in_loop_90;
    __freed_obj__ = 0;
    __result76__ = (_Bool)1;
    if(conditional_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
    if(conditional_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional178=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional178) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional179=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional179) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

int sWhileNode_sline(struct sWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = ((struct sWhileNode*)come_null_check(self, "09while.c", 75))->sline;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

char* sWhileNode_sname(struct sWhileNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value87;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value87, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value87=__builtin_string(((struct sWhileNode*)come_null_check(self, "09while.c", 80))->sname)));
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

struct optional$2sNodephbool* string_node_v9(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
void* right_value88;
char* sname_96;
int sline_97;
void* right_value89;
void* right_value90;
struct sNode* expression_node_99;
void* right_value91;
void* right_value92;
struct sBlock* block_100;
void* right_value93;
void* right_value94;
struct sNode* _inf_value1;
struct sWhileNode* _inf_obj_value1;
void* right_value99;
void* right_value100;
void* right_value101;
struct optional$2sNodephbool* __result84__;
void* right_value102;
struct __current_stack1__ __current_stack1__;
void* right_value105;
struct sNode* result_102;
void* right_value106;
void* right_value107;
struct optional$2sNodephbool* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&sname_96, 0, sizeof(char*));
memset(&sline_97, 0, sizeof(int));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&expression_node_99, 0, sizeof(struct sNode*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&block_100, 0, sizeof(struct sBlock*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value105, 0, sizeof(void*));
memset(&result_102, 0, sizeof(struct sNode*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    if(_if_conditional180=charp_operator_equals(buf,"while"),    __freed_obj__ = 0, 
    _if_conditional180) {
        sname_96=(char*)come_increment_ref_count(((char*)(right_value88=string_clone(((struct sInfo*)come_null_check(info, "09while.c", 86))->sname))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value88;
        __freed_obj__ = 0;
        sline_97=((struct sInfo*)come_null_check(info, "09while.c", 87))->sline;
        __freed_obj__ = 0;
        optional$2intbool_value((come_push_stackframe("09while.c", 89),((struct optional$2intbool*)(right_value89=expected_next_character(40,info)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value89;
        __freed_obj__ = 0;
        expression_node_99=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value90=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, ((struct sNode*)right_value90)->finalize, ((struct sNode*)right_value90)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value90;
        __freed_obj__ = 0;
        optional$2intbool_value((come_push_stackframe("09while.c", 94),((struct optional$2intbool*)(right_value91=expected_next_character(41,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value91;
        __freed_obj__ = 0;
        block_100=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value92=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value92);
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value92;
        __freed_obj__ = 0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "09while.c", 98);
        _inf_obj_value1=come_increment_ref_count(((struct sWhileNode*)(right_value94=sWhileNode_initialize((struct sWhileNode*)come_increment_ref_count(((struct sWhileNode*)(right_value93=(struct sWhileNode*)come_calloc(1, sizeof(struct sWhileNode)*(1), "09while.c", 98)))),(struct sNode*)come_increment_ref_count(expression_node_99),block_100,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sWhileNode_finalize;
        _inf_value1->clone=(void*)sWhileNode_clone;
        _inf_value1->compile=(void*)sWhileNode_compile;
        _inf_value1->sline=(void*)sWhileNode_sline;
        _inf_value1->sname=(void*)sWhileNode_sname;
        _inf_value1->terminated=(void*)sWhileNode_terminated;
        _inf_value1->kind=(void*)sWhileNode_kind;
        __result84__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value101=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value100=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "09while.c", 98)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value99=_inf_value1))),(_Bool)1)));
        if(sname_96 && !__freed_obj__) { sname_96 = come_decrement_ref_count(sname_96, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_99 && !__freed_obj__) { expression_node_99 = come_decrement_ref_count(expression_node_99, ((struct sNode*)expression_node_99)->finalize, ((struct sNode*)expression_node_99)->_protocol_obj, 0, 0, 0); } 
        if(block_100 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_100, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWhileNode_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value93;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value94);
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWhileNode_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value94;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value99);
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, ((struct sNode*)right_value99)->finalize, ((struct sNode*)right_value99)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[7] = right_value99;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value100);
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value100;
        __freed_obj__ = 0;
        return __result84__;
        __freed_obj__ = 0;
        if(sname_96 && !__freed_obj__) { sname_96 = come_decrement_ref_count(sname_96, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_99 && !__freed_obj__) { expression_node_99 = come_decrement_ref_count(expression_node_99, ((struct sNode*)expression_node_99)->finalize, ((struct sNode*)expression_node_99)->_protocol_obj, 0, 0, 0); } 
        if(block_100 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,block_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_102=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("09while.c", 105),((struct optional$2sNodephbool*)(right_value102=string_node_v8(buf,head,head_sline,info)))), "09while.c", 105)),&__current_stack1__,(void*)method_block1_09whilec))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct optional$2sNodephbool*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value102;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value105;
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value107=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value106=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "09while.c", 105)))),(struct sNode*)come_increment_ref_count(result_102),(_Bool)1)));
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, ((struct sNode*)result_102)->finalize, ((struct sNode*)result_102)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value106;
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
    if(result_102 && !__freed_obj__) { result_102 = come_decrement_ref_count(result_102, ((struct sNode*)result_102)->finalize, ((struct sNode*)result_102)->_protocol_obj, 0, 0, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional181;
int default_value_98;
int __result79__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_98, 0, sizeof(int));
            if(_if_conditional181=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional181) {
                __freed_obj__ = 0;
                memset(&default_value_98,0,sizeof(int));
                __freed_obj__ = 0;
                __result79__ = default_value_98;
                __freed_obj__ = 0;
                return __result79__;
                __freed_obj__ = 0;
            }
            else {
                __result80__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result80__;
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

static void sWhileNode_finalize(struct sWhileNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional182=self!=((void*)0)&&((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 1))->mExpressionNode!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional182) {
                if(((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 0))->mExpressionNode && !__freed_obj__) { ((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 0))->mExpressionNode = come_decrement_ref_count(((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 0))->mExpressionNode, ((struct sNode*)((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 0))->mExpressionNode)->finalize, ((struct sNode*)((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 0))->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional183=self!=((void*)0)&&((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 2))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional183) {
                if(((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 1))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 1))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional184=self!=((void*)0)&&((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 3))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional184) {
                if(((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 2))->sname && !__freed_obj__) { ((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 2))->sname = come_decrement_ref_count(((struct sWhileNode*)come_null_check(self, "sWhileNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sWhileNode* sWhileNode_clone(struct sWhileNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
struct sWhileNode* __result81__;
void* right_value95;
struct sWhileNode* result_101;
_Bool _if_conditional186;
void* right_value96;
struct sNode* __dec_obj41;
_Bool _if_conditional187;
void* right_value97;
struct sBlock* __dec_obj42;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value98;
char* __dec_obj43;
struct sWhileNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct sWhileNode*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
            if(_if_conditional185=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional185) {
                __result81__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result81__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_101=(struct sWhileNode*)come_increment_ref_count(((struct sWhileNode*)(right_value95=(struct sWhileNode*)come_calloc(1, sizeof(struct sWhileNode)*(1), "sWhileNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
            if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWhileNode_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value95;
            __freed_obj__ = 0;
            if(_if_conditional186=self!=((void*)0)&&((struct sWhileNode*)come_null_check(self, "sWhileNode_clone", 5))->mExpressionNode!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional186) {
                __dec_obj41=((struct sWhileNode*)come_null_check(result_101, "sWhileNode_clone", 4))->mExpressionNode;
                ((struct sWhileNode*)come_null_check(result_101, "sWhileNode_clone", 4))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value96=sNode_clone(((struct sWhileNode*)come_null_check(self, "sWhileNode_clone", 4))->mExpressionNode))));
                if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, ((struct sNode*)right_value96)->finalize, ((struct sNode*)right_value96)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value96;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional187=self!=((void*)0)&&((struct sWhileNode*)come_null_check(self, "sWhileNode_clone", 6))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional187) {
                __dec_obj42=((struct sWhileNode*)come_null_check(result_101, "sWhileNode_clone", 5))->mBlock;
                ((struct sWhileNode*)come_null_check(result_101, "sWhileNode_clone", 5))->mBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value97=sBlock_clone(((struct sWhileNode*)come_null_check(self, "sWhileNode_clone", 5))->mBlock))));
                if(__dec_obj42) { come_call_finalizer(sBlock_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value97;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional188=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional188) {
                ((struct sWhileNode*)come_null_check(result_101, "sWhileNode_clone", 6))->sline=((struct sWhileNode*)come_null_check(self, "sWhileNode_clone", 6))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional189=self!=((void*)0)&&((struct sWhileNode*)come_null_check(self, "sWhileNode_clone", 8))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional189) {
                __dec_obj43=((struct sWhileNode*)come_null_check(result_101, "sWhileNode_clone", 7))->sname;
                ((struct sWhileNode*)come_null_check(result_101, "sWhileNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value98=string_clone(((struct sWhileNode*)come_null_check(self, "sWhileNode_clone", 7))->sname))));
                if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result82__ = __result_obj__ = result_101;
            if(result_101 && !__freed_obj__) { come_call_finalizer(sWhileNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result82__;
            __freed_obj__ = 0;
            if(result_101 && !__freed_obj__) { come_call_finalizer(sWhileNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj44;
struct optional$2sNodephbool* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj44=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional190;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional190=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional190) {
                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
_Bool _if_conditional192;
struct sNode* __result85__;
struct sNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional191=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional191) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional192=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional192) {
                __result85__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result85__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result86__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result86__;
        __freed_obj__ = 0;
}

void method_block1_09whilec(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
void* right_value104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value103;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value104;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("09while.c", 103), ((struct optional$2voidpbool*)(right_value104=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value103=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "09while.c", 103))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result87__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result87__;
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

