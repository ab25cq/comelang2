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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
};
struct optional$2sTypephbool
{
    struct sType* v1;
    _Bool v2;
};
struct sStoreFieldNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    char* mName;
    int sline;
    char* sname;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
};
struct sNullCheckNode
{
    struct sNode* mLeft;
    _Bool mOnlyNullCecker;
    int sline;
    char* sname;
};
struct sExceptionGetValueNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sLoadFieldNode
{
    struct sNode* mLeft;
    char* mName;
    int sline;
    char* sname;
};
struct sStoreArrayNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct optional$2CVALUEphbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct sLoadArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLoadRangeArrayNode
{
    struct sNode* mLeft;
    struct list$1sNodeph* mArrayNum;
    _Bool mQuote;
    int sline;
    char* sname;
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info);

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
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

_Bool sStoreFieldNode_terminated();

char* sStoreFieldNode_kind();

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info);

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info);

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info);

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info);

_Bool sNullCheckNode_terminated();

char* sNullCheckNode_kind();

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info);

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info);

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info);

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info);

_Bool sExceptionGetValueNode_terminated();

_Bool compiletime_get_exception_value(struct sInfo* info);

char* sExceptionGetValueNode_kind();

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info);

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info);

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info);

_Bool sLoadFieldNode_terminated();

char* sLoadFieldNode_kind();

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info);

static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info);

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info);

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sStoreArrayNode_terminated();

char* sStoreArrayNode_kind();

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info);

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEphboolp_finalize(struct optional$2CVALUEphbool* self);
static struct CVALUE* optional$2CVALUEphbool_value(struct optional$2CVALUEphbool* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info);

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info);

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadArrayNode_terminated();

char* sLoadArrayNode_kind();

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info);

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info);

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info);

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info);

_Bool sLoadRangeArrayNode_terminated();

char* sLoadRangeArrayNode_kind();

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info);

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info);

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self);
static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self);
struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self);
static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self);
static void sStoreArrayNode_finalize(struct sStoreArrayNode* self);
static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self);
static void sLoadArrayNode_finalize(struct sLoadArrayNode* self);
static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self);
static void sNullCheckNode_finalize(struct sNullCheckNode* self);
static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self);
static void sStoreFieldNode_finalize(struct sStoreFieldNode* self);
static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self);
static void sLoadFieldNode_finalize(struct sLoadFieldNode* self);
static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self);
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

_Bool operator_overload_fun2(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* middle_value, struct CVALUE* right_value, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
struct sClass* klass_30;
char* class_name_31;
char* fun_name2_32;
struct sFun* operator_fun_33;
_Bool _if_conditional92;
_Bool _if_conditional93;
void* right_value45;
char* none_generics_name_34;
void* right_value46;
struct sType* obj_type_35;
void* right_value47;
char* __dec_obj29;
void* right_value48;
char* fun_name3_36;
void* right_value50;
struct sGenericsFun* generics_fun_40;
_Bool _if_conditional108;
void* right_value51;
_Bool _if_conditional109;
_Bool __result37__;
void* right_value61;
void* right_value62;
char* __dec_obj30;
int i_45;
_Bool _for_condtionalA1;
void* right_value63;
char* new_fun_name_46;
void* right_value64;
_Bool _if_conditional115;
void* right_value65;
char* __dec_obj31;
_Bool _if_conditional116;
void* right_value66;
_Bool result_47;
_Bool _if_conditional117;
void* right_value67;
struct CVALUE* come_value_48;
char* left_value2_49;
void* right_value68;
void* right_value69;
void* right_value74;
void* right_value75;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __dec_obj33;
_Bool _if_conditional127;
void* right_value76;
char* __dec_obj34;
_Bool _if_conditional128;
void* right_value77;
char* __dec_obj35;
void* right_value78;
char* __dec_obj36;
_Bool _if_conditional129;
void* right_value79;
char* __dec_obj37;
void* right_value80;
char* __dec_obj38;
void* right_value81;
char* __dec_obj39;
char* middle_value2_54;
void* right_value82;
void* right_value83;
void* right_value84;
void* right_value85;
struct optional$2sTypephbool* __exception_result_var_a3;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
char* __dec_obj40;
_Bool _if_conditional133;
void* right_value86;
char* __dec_obj41;
_Bool _if_conditional134;
void* right_value87;
char* __dec_obj42;
void* right_value88;
char* __dec_obj43;
_Bool _if_conditional135;
void* right_value89;
char* __dec_obj44;
void* right_value90;
char* __dec_obj45;
void* right_value91;
char* __dec_obj46;
char* right_value2_55;
void* right_value92;
void* right_value93;
void* right_value94;
void* right_value95;
struct optional$2sTypephbool* __exception_result_var_a4;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
char* __dec_obj47;
_Bool _if_conditional139;
void* right_value96;
char* __dec_obj48;
_Bool _if_conditional140;
void* right_value97;
char* __dec_obj49;
void* right_value98;
char* __dec_obj50;
_Bool _if_conditional141;
void* right_value99;
char* __dec_obj51;
void* right_value100;
char* __dec_obj52;
void* right_value101;
char* __dec_obj53;
_Bool _if_conditional142;
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
void* right_value107;
void* right_value108;
char* __dec_obj54;
void* right_value109;
void* right_value110;
void* right_value111;
void* right_value112;
void* right_value113;
char* __dec_obj55;
void* right_value114;
struct sType* result_type1_56;
void* right_value115;
struct sType* result_type2_57;
void* right_value116;
struct sType* __dec_obj56;
_Bool _if_conditional143;
void* right_value117;
char* __dec_obj57;
_Bool _if_conditional144;
void* right_value118;
char* __dec_obj58;
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&fun_name2_32, 0, sizeof(char*));
memset(&operator_fun_33, 0, sizeof(struct sFun*));
memset(&right_value45, 0, sizeof(void*));
memset(&none_generics_name_34, 0, sizeof(char*));
memset(&right_value46, 0, sizeof(void*));
memset(&obj_type_35, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&fun_name3_36, 0, sizeof(char*));
memset(&right_value50, 0, sizeof(void*));
memset(&generics_fun_40, 0, sizeof(struct sGenericsFun*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&i_45, 0, sizeof(int));
memset(&right_value63, 0, sizeof(void*));
memset(&new_fun_name_46, 0, sizeof(char*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&result_47, 0, sizeof(_Bool));
memset(&right_value67, 0, sizeof(void*));
memset(&come_value_48, 0, sizeof(struct CVALUE*));
memset(&left_value2_49, 0, sizeof(char*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&middle_value2_54, 0, sizeof(char*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value2_55, 0, sizeof(char*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&result_type1_56, 0, sizeof(struct sType*));
memset(&right_value115, 0, sizeof(void*));
memset(&result_type2_57, 0, sizeof(struct sType*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional91=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_29, "18field.c", 11))->mNoSolvedGenericsType, "18field.c", 11))->v1,    __freed_obj__ = 0, 
    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_29, "18field.c", 8))->mNoSolvedGenericsType, "18field.c", 8))->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_30=((struct sType*)come_null_check(type, "18field.c", 11))->mClass;
    __freed_obj__ = 0;
    class_name_31=((struct sClass*)come_null_check(klass_30, "18field.c", 12))->mName;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    operator_fun_33=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional92=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 21))->mNoSolvedGenericsType, "18field.c", 21))->v1,    __freed_obj__ = 0, 
    _if_conditional92) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 18))->mNoSolvedGenericsType, "18field.c", 18))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional93=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 58))->mGenericsTypes, "18field.c", 58)))>0,    __freed_obj__ = 0, 
    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 22))->mClass, "18field.c", 22))->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,((struct sInfo*)come_null_check(info, "18field.c", 24))->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value47;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value48;
        __freed_obj__ = 0;
        generics_fun_40=((struct sGenericsFun*)(right_value50=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 29))->generics_funcs, "18field.c", 29)),fun_name3_36,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value50;
        __freed_obj__ = 0;
        if(_if_conditional108=generics_fun_40,        __freed_obj__ = 0, 
        _if_conditional108) {
            if(_if_conditional109=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(fun_name2_32)))),generics_fun_40,obj_type_35,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51),
            (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value51, 
            __freed_obj__ = 0, 
            _if_conditional109) {
                __result37__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        operator_fun_33=optional$2sFunpbool_value((come_push_stackframe("18field.c", 37),((struct optional$2sFunpbool*)(right_value61=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 37))->funcs,fun_name2_32)))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value61;
        __freed_obj__ = 0;
        if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj30=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value62=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value62;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_45=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        i_45>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA1;        i_45-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_46=(char*)come_increment_ref_count(((char*)(right_value63=xsprintf("%s_v%d",fun_name2_32,i_45))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value63;
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_33=optional$2sFunpbool_value((come_push_stackframe("18field.c", 45),((struct optional$2sFunpbool*)(right_value64=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 45))->funcs,new_fun_name_46)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value64;
            __freed_obj__ = 0;
            if(_if_conditional115=operator_fun_33,            __freed_obj__ = 0, 
            _if_conditional115) {
                __dec_obj31=fun_name2_32;
                fun_name2_32=(char*)come_increment_ref_count(((char*)(right_value65=__builtin_string(new_fun_name_46))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value65;
                __freed_obj__ = 0;
                if(new_fun_name_46 && !__freed_obj__) { new_fun_name_46 = come_decrement_ref_count(new_fun_name_46, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_46 && !__freed_obj__) { new_fun_name_46 = come_decrement_ref_count(new_fun_name_46, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional116=operator_fun_33==((void*)0),        __freed_obj__ = 0, 
        _if_conditional116) {
            come_clear_stackframe();
            operator_fun_33=optional$2sFunpbool_value((come_push_stackframe("18field.c", 54),((struct optional$2sFunpbool*)(right_value66=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 54))->funcs,fun_name2_32)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_47=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional117=operator_fun_33,    __freed_obj__ = 0, 
    _if_conditional117) {
        come_value_48=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value67=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 61))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value69=xsprintf("\%s is assigned to",((char*)(right_value68=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 63),((struct optional$2sTypephbool*)(right_value74=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 63))->mParamTypes,0))))),((struct CVALUE*)come_null_check(left_value, "18field.c", 63))->type,left_value,(_Bool)0,info);
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value68;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value69;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value74;
        __freed_obj__ = 0;
        if(_if_conditional124=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 95),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value75=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 95))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "18field.c", 95))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 95))->type, "18field.c", 95))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value75),
        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[4] = right_value75, 
        __freed_obj__ = 0, 
        _if_conditional124) {
            if(_if_conditional125=((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->var,            __freed_obj__ = 0, 
            _if_conditional125) {
                if(_if_conditional126=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional126) {
                    __dec_obj33=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName=((void*)0);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional127=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional127) {
                        __dec_obj34=((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value=(char*)come_increment_ref_count(((char*)(right_value76=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value,info))));
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value76;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional128=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 82))->var, "18field.c", 82))->mType, "18field.c", 82))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional128) {
                            __dec_obj35=((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value=(char*)come_increment_ref_count(((char*)(right_value77=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value,info))));
                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj36=((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value=(char*)come_increment_ref_count(((char*)(right_value78=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value,info))));
                            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
                            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value78;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional129=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 89))->type, "18field.c", 89))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional129) {
                }
                else {
                    __dec_obj37=((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value;
                    ((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value,info))));
                    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value79;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj38=left_value2_49;
            left_value2_49=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->c_value))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value80;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj39=left_value2_49;
            left_value2_49=(char*)come_increment_ref_count(((char*)(right_value81=string_clone(((struct CVALUE*)come_null_check(left_value, "18field.c", 93))->c_value))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value81;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value83=xsprintf("\%s is assigned to",((char*)(right_value82=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 96),((struct optional$2sTypephbool*)(right_value84=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 96))->mParamTypes,1))))),((struct CVALUE*)come_null_check(middle_value, "18field.c", 96))->type,middle_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value82;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value83;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value84;
        __freed_obj__ = 0;
        if(_if_conditional130=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 128),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value85=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 128))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_a3)), "18field.c", 128))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 128))->type, "18field.c", 128))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value85),
        (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[8] = right_value85, 
        __freed_obj__ = 0, 
        _if_conditional130) {
            if(_if_conditional131=((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->var,            __freed_obj__ = 0, 
            _if_conditional131) {
                if(_if_conditional132=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional132) {
                    __dec_obj40=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName=((void*)0);
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional133=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __dec_obj41=((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value;
                        ((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value=(char*)come_increment_ref_count(((char*)(right_value86=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value,info))));
                        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value86;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional134=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 115))->var, "18field.c", 115))->mType, "18field.c", 115))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional134) {
                            __dec_obj42=((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value=(char*)come_increment_ref_count(((char*)(right_value87=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value,info))));
                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value87;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj43=((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value=(char*)come_increment_ref_count(((char*)(right_value88=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value,info))));
                            if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value88;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional135=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 122))->type, "18field.c", 122))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional135) {
                }
                else {
                    __dec_obj44=((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value;
                    ((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value=(char*)come_increment_ref_count(((char*)(right_value89=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value,info))));
                    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value89;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj45=middle_value2_54;
            middle_value2_54=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s",((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->c_value))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value90;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj46=middle_value2_54;
            middle_value2_54=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(((struct CVALUE*)come_null_check(middle_value, "18field.c", 126))->c_value))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value91;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value93=xsprintf("\%s is assigned to",((char*)(right_value92=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 129),((struct optional$2sTypephbool*)(right_value94=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 129))->mParamTypes,2))))),((struct CVALUE*)come_null_check(right_value, "18field.c", 129))->type,right_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value92);
        if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value92;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value93;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value94);
        if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value94;
        __freed_obj__ = 0;
        if(_if_conditional136=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("18field.c", 162),__exception_result_var_a4=((struct optional$2sTypephbool*)(right_value95=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 162))->mParamTypes,2))), come_pop_stackframe(), __exception_result_var_a4)), "18field.c", 162))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 162))->type, "18field.c", 162))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value95),
        (right_value95 && right_value95 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[12] = right_value95, 
        __freed_obj__ = 0, 
        _if_conditional136) {
            if(_if_conditional137=((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->var,            __freed_obj__ = 0, 
            _if_conditional137) {
                if(_if_conditional138=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional138) {
                    __dec_obj47=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName=((void*)0);
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional139=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        __dec_obj48=((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value;
                        ((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value=(char*)come_increment_ref_count(((char*)(right_value96=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value,info))));
                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value96;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional140=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 148))->var, "18field.c", 148))->mType, "18field.c", 148))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional140) {
                            __dec_obj49=((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value=(char*)come_increment_ref_count(((char*)(right_value97=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value,info))));
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value97;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj50=((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value=(char*)come_increment_ref_count(((char*)(right_value98=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value,info))));
                            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                            if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value98;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional141=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 155))->type, "18field.c", 155))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional141) {
                }
                else {
                    __dec_obj51=((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value=(char*)come_increment_ref_count(((char*)(right_value99=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value,info))));
                    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value99;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj52=right_value2_55;
            right_value2_55=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s",((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->c_value))));
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj53=right_value2_55;
            right_value2_55=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(((struct CVALUE*)come_null_check(right_value, "18field.c", 159))->c_value))));
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value101;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional142=gComeDebug,        __freed_obj__ = 0, 
        _if_conditional142) {
            __dec_obj54=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 163))->c_value;
            ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 163))->c_value=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("(gCallerSName[0] = \"\%s\}\", gCallerSLine[0] = \%s, \%s(\%s,\%s,\%s))",((char*)(right_value102=string_to_string(((struct sInfo*)come_null_check(info, "18field.c", 163))->sname))),((char*)(right_value103=int_to_string(((struct sInfo*)come_null_check(info, "18field.c", 163))->sline))),((char*)(right_value104=string_to_string(fun_name2_32))),((char*)(right_value105=string_to_string(left_value2_49))),((char*)(right_value106=string_to_string(middle_value2_54))),((char*)(right_value107=string_to_string(right_value2_55)))))));
            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
            if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value102;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value103);
            if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value103;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value104);
            if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value104;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value105);
            if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value105;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value106;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value107);
            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value107;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value108);
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value108;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj55=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 166))->c_value;
            ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 166))->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value109=string_to_string(fun_name2_32))),((char*)(right_value110=string_to_string(left_value2_49))),((char*)(right_value111=string_to_string(middle_value2_54))),((char*)(right_value112=string_to_string(right_value2_55)))))));
            if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value109;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value110;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value111);
            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value111;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value112);
            if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { right_value112 = come_decrement_ref_count(right_value112, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value112;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value113);
            if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value113;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type1_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 169))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value114);
        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value114;
        __freed_obj__ = 0;
        result_type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=solve_generics(result_type1_56,generics_type_29,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value115);
        if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value115;
        __freed_obj__ = 0;
        __dec_obj56=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 173))->type;
        ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 173))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value116=sType_clone(result_type2_57))));
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value116);
        if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value116;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 174))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional143=((struct sType*)come_null_check(result_type2_57, "18field.c", 180))->mHeap,        __freed_obj__ = 0, 
        _if_conditional143) {
            __dec_obj57=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 177))->c_value;
            ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 177))->c_value=(char*)come_increment_ref_count(((char*)(right_value117=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_48, "18field.c", 177))->c_value,(struct sType*)come_increment_ref_count(result_type2_57),info))));
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
            if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value117;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional144=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 184))->mResultType, "18field.c", 184))->mException,        __freed_obj__ = 0, 
        _if_conditional144) {
            __dec_obj58=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 181))->c_value;
            ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 181))->c_value=(char*)come_increment_ref_count(((char*)(right_value118=append_exception_value(((struct CVALUE*)come_null_check(come_value_48, "18field.c", 181))->c_value,((struct CVALUE*)come_null_check(come_value_48, "18field.c", 181))->type,info))));
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
            if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value118;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_48, "18field.c", 184))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 186))->stack, "18field.c", 186)),(struct CVALUE*)come_increment_ref_count(come_value_48));
        __freed_obj__ = 0;
        result_47=(_Bool)1;
        __freed_obj__ = 0;
        if(come_value_48 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_48, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_49 && !__freed_obj__) { left_value2_49 = come_decrement_ref_count(left_value2_49, (void*)0, (void*)0, 0, 0, 0); }
        if(middle_value2_54 && !__freed_obj__) { middle_value2_54 = come_decrement_ref_count(middle_value2_54, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_55 && !__freed_obj__) { right_value2_55 = come_decrement_ref_count(right_value2_55, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type1_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type1_56, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result51__ = result_47;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result51__;
    __freed_obj__ = 0;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sType* __result12__;
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
struct sType* __result29__;
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
            __result12__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result12__;
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
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional47=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional52=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional54=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional81=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
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
        if(_if_conditional90=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
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
        __result29__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result29__;
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
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional9) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional12) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional18) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional19) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional20) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
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
                    if(_if_conditional7=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
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
                            if(_if_conditional11=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
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
                            if(_if_conditional13=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
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
                            if(_if_conditional16=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
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
struct tuple1$1sTypeph* __result13__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
                if(_if_conditional24=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional24) {
                    __result13__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result13__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value11;
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
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
                __result14__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result14__;
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
                    if(_if_conditional25=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
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
struct list$1sTypeph* __result15__;
void* right_value16;
void* right_value17;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    __result15__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
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
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 197)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 197))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 199))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result18__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result18__;
                __freed_obj__ = 0;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result16__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result16__;
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
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len==0,                        __freed_obj__ = 0, 
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
                            if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len==1,                            __freed_obj__ = 0, 
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
                        __result17__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result17__;
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
struct list$1sNodeph* __result19__;
void* right_value23;
void* right_value24;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sNodeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
                if(_if_conditional34=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
                    __result19__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result19__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
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
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 197)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 197))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = 0;
                    it_19=((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 199))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result24__ = __result_obj__ = result_18;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result24__;
                __freed_obj__ = 0;
                if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result20__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result20__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result20__;
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
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len==0,                        __freed_obj__ = 0, 
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
                            if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len==1,                            __freed_obj__ = 0, 
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
                        __result21__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result21__;
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
struct sNode* __result22__;
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
struct sNode* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            __result22__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result22__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
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
                        __result23__ = __result_obj__ = result_23;
                        if(result_23 && !__freed_obj__) { result_23 = come_decrement_ref_count(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result23__;
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
struct list$1charph* __result25__;
void* right_value32;
void* right_value33;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
                if(_if_conditional49=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional49) {
                    __result25__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
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
                    list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 197)),(char*)come_increment_ref_count(((char*)(right_value37=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 197))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
                    __freed_obj__ = 0;
                    it_25=((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 199))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result28__ = __result_obj__ = result_24;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result28__;
                __freed_obj__ = 0;
                if(result_24 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result26__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result26__;
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
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len==0,                        __freed_obj__ = 0, 
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
                            if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len==1,                            __freed_obj__ = 0, 
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
                        __result27__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result27__;
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
int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result30__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 415))->len;
        __freed_obj__ = 0;
        return __result30__;
        __freed_obj__ = 0;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
void* right_value49;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional96;
struct sGenericsFun* __result33__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sGenericsFun* __result34__;
struct sGenericsFun* __result35__;
struct sGenericsFun* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
memset(&right_value49, 0, sizeof(void*));
            hash_37=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1263)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1263))->size;
            __freed_obj__ = 0;
            it_38=hash_37;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional94=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1286))->item_existance[it_38],                __freed_obj__ = 0, 
                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1274),__exception_result_var_a1=((struct optional$2boolbool*)(right_value49=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1274))->keys[it_38], "./comelang2.h", 1274)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49),
                    (right_value49 && right_value49 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value49, 
                    __freed_obj__ = 0, 
                    _if_conditional96) {
                        __result33__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1271))->items[it_38];
                        __freed_obj__ = 0;
                        return __result33__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_38++;
                    __freed_obj__ = 0;
                    if(_if_conditional97=it_38>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1282))->size,                    __freed_obj__ = 0, 
                    _if_conditional97) {
                        it_38=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional98=it_38==hash_37,                        __freed_obj__ = 0, 
                        _if_conditional98) {
                            __result34__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result34__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result35__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result35__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result36__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
_Bool default_value_39;
_Bool __result31__;
_Bool __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(_Bool));
                        if(_if_conditional95=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional95) {
                            __freed_obj__ = 0;
                            memset(&default_value_39,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result31__ = default_value_39;
                            __freed_obj__ = 0;
                            return __result31__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result32__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                            __freed_obj__ = 0;
                            return __result32__;
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

static void sGenericsFun_finalize(struct sGenericsFun* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
_Bool _if_conditional106;
_Bool _if_conditional107;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional99=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional104=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional104) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional105=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional105) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional106) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional107=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional107) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_41;
unsigned int hash_42;
unsigned int it_43;
_Bool _while_condtional8;
_Bool _if_conditional110;
void* right_value52;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional111;
void* right_value53;
void* right_value54;
struct optional$2sFunpbool* __result39__;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value55;
void* right_value56;
struct optional$2sFunpbool* __result40__;
void* right_value57;
void* right_value58;
struct optional$2sFunpbool* __result41__;
void* right_value59;
void* right_value60;
struct optional$2sFunpbool* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(struct sFun*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&it_43, 0, sizeof(unsigned int));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
            __freed_obj__ = 0;
            memset(&default_value_41,0,sizeof(struct sFun*));
            __freed_obj__ = 0;
            hash_42=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1589)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1589))->size;
            __freed_obj__ = 0;
            it_43=hash_42;
            __freed_obj__ = 0;
            while(_while_condtional8=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional8) {
                if(_if_conditional110=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1612))->item_existance[it_43],                __freed_obj__ = 0, 
                _if_conditional110) {
                    if(_if_conditional111=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b1=((struct optional$2boolbool*)(right_value52=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_43], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b1)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52),
                    (right_value52 && right_value52 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value52, 
                    __freed_obj__ = 0, 
                    _if_conditional111) {
                        __result39__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value54=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value53=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1597)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1597))->items[it_43],(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                        return __result39__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_43++;
                    __freed_obj__ = 0;
                    if(_if_conditional112=it_43>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1608))->size,                    __freed_obj__ = 0, 
                    _if_conditional112) {
                        it_43=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional113=it_43==hash_42,                        __freed_obj__ = 0, 
                        _if_conditional113) {
                            __result40__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1606), ((struct optional$2sFunpbool*)(right_value56=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value55=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1606))),default_value_41,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value55;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
                            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value56;
                            __freed_obj__ = 0;
                            return __result40__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result41__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1610), ((struct optional$2sFunpbool*)(right_value58=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value57=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1610))),default_value_41,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value57;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value58;
                    __freed_obj__ = 0;
                    return __result41__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result42__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1614), ((struct optional$2sFunpbool*)(right_value60=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value59=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1614))),default_value_41,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value60;
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result38__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result38__;
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
_Bool _if_conditional114;
struct sFun* default_value_44;
struct sFun* __result43__;
struct sFun* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_44, 0, sizeof(struct sFun*));
            if(_if_conditional114=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                __freed_obj__ = 0;
                memset(&default_value_44,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = default_value_44;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
            }
            else {
                __result44__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result44__;
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
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional118=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional119=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional120;
struct list_item$1sTypeph* it_50;
int i_51;
_Bool _while_condtional9;
_Bool _if_conditional121;
void* right_value70;
void* right_value71;
struct optional$2sTypephbool* __result46__;
struct sType* default_value_52;
void* right_value72;
void* right_value73;
struct optional$2sTypephbool* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_50, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_51, 0, sizeof(int));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&default_value_52, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
            if(_if_conditional120=position<0,            __freed_obj__ = 0, 
            _if_conditional120) {
                position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 740))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_50=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 743))->head;
            __freed_obj__ = 0;
            i_51=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_50!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional121=position==i_51,                __freed_obj__ = 0, 
                _if_conditional121) {
                    __result46__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value71=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value70=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_50, "./comelang2.h", 747))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value70;
                    __freed_obj__ = 0;
                    return __result46__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_50=((struct list_item$1sTypeph*)come_null_check(it_50, "./comelang2.h", 749))->next;
                __freed_obj__ = 0;
                i_51++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_52,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result47__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sTypephbool*)(right_value73=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value72=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_52),(_Bool)0))));
            if(default_value_52 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value72;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value73;
            __freed_obj__ = 0;
            return __result47__;
            __freed_obj__ = 0;
            if(default_value_52 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj32;
struct optional$2sTypephbool* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj32=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result45__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result45__;
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
_Bool _if_conditional122;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional122=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional122) {
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
_Bool _if_conditional123;
struct sType* default_value_53;
struct sType* __result48__;
struct sType* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_53, 0, sizeof(struct sType*));
            if(_if_conditional123=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional123) {
                __freed_obj__ = 0;
                memset(&default_value_53,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result48__ = __result_obj__ = default_value_53;
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
            }
            else {
                __result49__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
void* right_value119;
struct list_item$1CVALUEph* litem_58;
struct CVALUE* __dec_obj59;
_Bool _if_conditional147;
void* right_value120;
struct list_item$1CVALUEph* litem_59;
struct CVALUE* __dec_obj60;
void* right_value121;
struct list_item$1CVALUEph* litem_60;
struct CVALUE* __dec_obj61;
struct list$1CVALUEph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value120, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value121, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional145=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 307))->len==0,            __freed_obj__ = 0, 
            _if_conditional145) {
                litem_58=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value119=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
                if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value119;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 279))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 280))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj59=((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 281))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 281))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj59) { come_call_finalizer(CVALUE_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_58;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head=litem_58;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional147=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 307))->len==1,                __freed_obj__ = 0, 
                _if_conditional147) {
                    litem_59=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value120=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
                    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value120;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 289))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 290))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj60=((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 291))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 291))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj60) { come_call_finalizer(CVALUE_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_59;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_59;
                    __freed_obj__ = 0;
                }
                else {
                    litem_60=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value121=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 299))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 300))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj61=((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 301))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 301))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj61) { come_call_finalizer(CVALUE_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_60;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_60;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 307))->len++;
            __freed_obj__ = 0;
            __result50__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result50__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional146;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional146=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional146) {
                        if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

struct sStoreFieldNode* sStoreFieldNode_initialize(struct sStoreFieldNode* self, struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value122;
char* __dec_obj62;
void* right_value123;
struct sNode* __dec_obj63;
void* right_value124;
struct sNode* __dec_obj64;
void* right_value125;
char* __dec_obj65;
struct sStoreFieldNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->sline=((struct sInfo*)come_null_check(info, "18field.c", 206))->sline;
    __freed_obj__ = 0;
    __dec_obj62=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 207))->sname;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 207))->sname=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 207))->sname))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    __dec_obj63=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 209))->mLeft;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 209))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value123=sNode_clone(left))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value123;
    __freed_obj__ = 0;
    __dec_obj64=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 210))->mRight;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 210))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(right))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value124;
    __freed_obj__ = 0;
    __dec_obj65=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 211))->mName;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 211))->mName=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(name))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value125;
    __freed_obj__ = 0;
    __result52__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sStoreFieldNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result53__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
    __result54__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sStoreFieldNode")));
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

_Bool sStoreFieldNode_compile(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_61;
struct sNode* right_62;
void* right_value127;
char* name_63;
_Bool _if_conditional152;
_Bool __result55__;
void* right_value128;
struct CVALUE* left_value_64;
_Bool _if_conditional153;
_Bool __result56__;
void* right_value129;
struct CVALUE* right_value_65;
struct sType* right_type_66;
struct sType* left_type_67;
void* right_value130;
struct sType* left_type2_68;
struct sClass* klass_69;
void* right_value140;
struct sType* field_type_74;
int index_75;
char* child_field_name_76;
void* right_value141;
_Bool _if_conditional159;
_Bool __result64__;
struct list$1tuple2$2charphsTypephph* o2_saved_77;
struct tuple2$2charphsTypeph* field_80;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_83;
struct sType* field_type2_84;
_Bool _if_conditional164;
void* right_value142;
struct sType* __dec_obj66;
_Bool _if_conditional168;
struct list$1tuple2$2charphsTypephph* o2_saved_87;
struct tuple2$2charphsTypeph* field_88;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* field_name_89;
struct sType* field_type2_90;
struct sClass* klass2_91;
struct list$1tuple2$2charphsTypephph* o2_saved_92;
struct tuple2$2charphsTypeph* field2_93;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* field_name2_94;
struct sType* field_type3_95;
_Bool _if_conditional169;
void* right_value143;
char* __dec_obj67;
void* right_value144;
struct sType* __dec_obj68;
_Bool _if_conditional170;
_Bool _if_conditional171;
void* right_value145;
struct sType* __dec_obj69;
_Bool _if_conditional172;
_Bool __result73__;
void* right_value146;
struct CVALUE* come_value_96;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
_Bool __result74__;
void* right_value147;
void* right_value148;
_Bool _if_conditional176;
_Bool _if_conditional177;
_Bool _if_conditional178;
void* right_value149;
char* c_value_97;
_Bool _if_conditional179;
_Bool _if_conditional180;
char* __dec_obj70;
_Bool _if_conditional181;
void* right_value150;
char* __dec_obj71;
_Bool _if_conditional182;
void* right_value151;
char* __dec_obj72;
void* right_value152;
char* __dec_obj73;
_Bool _if_conditional183;
void* right_value153;
char* __dec_obj74;
void* right_value154;
char* __dec_obj75;
void* right_value155;
char* c_value_98;
_Bool _if_conditional184;
_Bool _if_conditional185;
char* __dec_obj76;
_Bool _if_conditional186;
void* right_value156;
char* __dec_obj77;
_Bool _if_conditional187;
void* right_value157;
char* __dec_obj78;
void* right_value158;
char* __dec_obj79;
_Bool _if_conditional188;
void* right_value159;
char* __dec_obj80;
void* right_value160;
char* __dec_obj81;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value161;
char* c_value_99;
_Bool _if_conditional191;
_Bool _if_conditional192;
char* __dec_obj82;
_Bool _if_conditional193;
void* right_value162;
char* __dec_obj83;
_Bool _if_conditional194;
void* right_value163;
char* __dec_obj84;
void* right_value164;
char* __dec_obj85;
_Bool _if_conditional195;
void* right_value165;
char* __dec_obj86;
void* right_value166;
char* __dec_obj87;
void* right_value167;
char* c_value_100;
void* right_value168;
char* __dec_obj88;
void* right_value169;
char* __dec_obj89;
_Bool __result75__;
int right_value_id_101;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
_Bool _if_conditional199;
void* right_value170;
char* c_value_102;
void* right_value171;
char* __dec_obj90;
void* right_value172;
char* c_value_103;
void* right_value173;
char* __dec_obj91;
_Bool _if_conditional200;
_Bool _if_conditional201;
void* right_value174;
char* c_value_104;
void* right_value175;
char* __dec_obj92;
void* right_value176;
char* c_value_105;
void* right_value177;
char* __dec_obj93;
_Bool __result76__;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value178;
char* __dec_obj94;
void* right_value179;
char* __dec_obj95;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value180;
char* __dec_obj96;
void* right_value181;
char* __dec_obj97;
_Bool __result77__;
void* right_value182;
struct sType* __dec_obj98;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_61, 0, sizeof(struct sNode*));
memset(&right_62, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&name_63, 0, sizeof(char*));
memset(&right_value128, 0, sizeof(void*));
memset(&left_value_64, 0, sizeof(struct CVALUE*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value_65, 0, sizeof(struct CVALUE*));
memset(&right_type_66, 0, sizeof(struct sType*));
memset(&left_type_67, 0, sizeof(struct sType*));
memset(&right_value130, 0, sizeof(void*));
memset(&left_type2_68, 0, sizeof(struct sType*));
memset(&klass_69, 0, sizeof(struct sClass*));
memset(&right_value140, 0, sizeof(void*));
memset(&field_type_74, 0, sizeof(struct sType*));
memset(&index_75, 0, sizeof(int));
memset(&child_field_name_76, 0, sizeof(char*));
memset(&right_value141, 0, sizeof(void*));
memset(&o2_saved_77, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_80, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_83, 0, sizeof(char*));
memset(&field_type2_84, 0, sizeof(struct sType*));
memset(&field_name_83, 0, sizeof(char*));
memset(&field_type2_84, 0, sizeof(struct sType*));
memset(&right_value142, 0, sizeof(void*));
memset(&o2_saved_87, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_88, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_89, 0, sizeof(char*));
memset(&field_type2_90, 0, sizeof(struct sType*));
memset(&field_name_89, 0, sizeof(char*));
memset(&field_type2_90, 0, sizeof(struct sType*));
memset(&klass2_91, 0, sizeof(struct sClass*));
memset(&o2_saved_92, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_93, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_94, 0, sizeof(char*));
memset(&field_type3_95, 0, sizeof(struct sType*));
memset(&field_name2_94, 0, sizeof(char*));
memset(&field_type3_95, 0, sizeof(struct sType*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&come_value_96, 0, sizeof(struct CVALUE*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&c_value_97, 0, sizeof(char*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&c_value_98, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&c_value_99, 0, sizeof(char*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&c_value_100, 0, sizeof(char*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value_id_101, 0, sizeof(int));
memset(&right_value170, 0, sizeof(void*));
memset(&c_value_102, 0, sizeof(char*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&c_value_103, 0, sizeof(char*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&c_value_104, 0, sizeof(char*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&c_value_105, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
    left_61=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 228))->mLeft;
    __freed_obj__ = 0;
    right_62=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 229))->mRight;
    __freed_obj__ = 0;
    name_63=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 230))->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    if(_if_conditional152=!((struct sNode*)come_null_check(left_61, "18field.c", 236))->compile(((struct sNode*)come_null_check(left_61, "18field.c", 236))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result55__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result55__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional153=!((struct sNode*)come_null_check(right_62, "18field.c", 243))->compile(((struct sNode*)come_null_check(right_62, "18field.c", 243))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional153) {
        __result56__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value129;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_66=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 246))->type;
    __freed_obj__ = 0;
    left_type_67=((struct CVALUE*)come_null_check(left_value_64, "18field.c", 248))->type;
    __freed_obj__ = 0;
    left_type2_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=solve_generics(left_type_67,left_type_67,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value130;
    __freed_obj__ = 0;
    klass_69=((struct sType*)come_null_check(left_type2_68, "18field.c", 252))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_69=optional$2sClasspbool_value((come_push_stackframe("18field.c", 253),((struct optional$2sClasspbool*)(right_value140=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 253))->classes,((struct sClass*)come_null_check(klass_69, "18field.c", 253))->mName)))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value140;
    __freed_obj__ = 0;
    field_type_74=((void*)0);
    __freed_obj__ = 0;
    index_75=0;
    __freed_obj__ = 0;
    child_field_name_76=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_69=optional$2sClasspbool_value((come_push_stackframe("18field.c", 258),((struct optional$2sClasspbool*)(right_value141=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 258))->classes,((struct sClass*)come_null_check(klass_69, "18field.c", 258))->mName)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value141;
    __freed_obj__ = 0;
    if(_if_conditional159=((struct sClass*)come_null_check(klass_69, "18field.c", 265))->mFields==((void*)0),    __freed_obj__ = 0, 
    _if_conditional159) {
        err_msg(info,"%s fields are null",((struct sClass*)come_null_check(klass_69, "18field.c", 261))->mName);
        __freed_obj__ = 0;
        __result64__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result64__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    o2_saved_77=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_69, "18field.c", 276))->mFields)),field_80=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "18field.c", 276))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "18field.c", 276))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    field_80=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "18field.c", 276))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=field_80;
        field_name_83=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_84=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional164=string_operator_equals(field_name_83,name_63),        __freed_obj__ = 0, 
        _if_conditional164) {
            __dec_obj66=field_type_74;
            field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(field_type2_84))));
            if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
            if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value142;
            __freed_obj__ = 0;
            if(field_name_83 && !__freed_obj__) { field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_84, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_75++;
        __freed_obj__ = 0;
        if(field_name_83 && !__freed_obj__) { field_name_83 = come_decrement_ref_count(field_name_83, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_77 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional168=index_75==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_69, "18field.c", 311))->mFields, "18field.c", 311))),    __freed_obj__ = 0, 
    _if_conditional168) {
        index_75=0;
        __freed_obj__ = 0;
        for(
        o2_saved_87=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_69, "18field.c", 305))->mFields)),field_88=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 305))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 305))) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        field_88=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 305))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=field_88;
            field_name_89=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            field_type2_90=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            klass2_91=((struct sType*)come_null_check(field_type2_90, "18field.c", 281))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_92=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_91, "18field.c", 293))->mFields)),field2_93=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_92), "18field.c", 293))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_92), "18field.c", 293))) ,            __freed_obj__ = 0, 
            _for_condtionalA4;            field2_93=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_92), "18field.c", 293))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var3=field2_93;
                field_name2_94=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                field_type3_95=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = 0;
                if(_if_conditional169=string_operator_equals(field_name2_94,name_63),                __freed_obj__ = 0, 
                _if_conditional169) {
                    __dec_obj67=child_field_name_76;
                    child_field_name_76=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(field_name_89))));
                    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value143;
                    __freed_obj__ = 0;
                    __dec_obj68=field_type_74;
                    field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(field_type3_95))));
                    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
                    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value144;
                    __freed_obj__ = 0;
                    if(field_name2_94 && !__freed_obj__) { field_name2_94 = come_decrement_ref_count(field_name2_94, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_95, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_94 && !__freed_obj__) { field_name2_94 = come_decrement_ref_count(field_name2_94, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_95, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_92 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_92, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional170=child_field_name_76,            __freed_obj__ = 0, 
            _if_conditional170) {
                if(field_name_89 && !__freed_obj__) { field_name_89 = come_decrement_ref_count(field_name_89, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional171=string_operator_equals(field_name_89,name_63),            __freed_obj__ = 0, 
            _if_conditional171) {
                __dec_obj69=field_type_74;
                field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(field_type2_90))));
                if(__dec_obj69) { come_call_finalizer(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value145;
                __freed_obj__ = 0;
                if(field_name_89 && !__freed_obj__) { field_name_89 = come_decrement_ref_count(field_name_89, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_75++;
            __freed_obj__ = 0;
            if(field_name_89 && !__freed_obj__) { field_name_89 = come_decrement_ref_count(field_name_89, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_90, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_87 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_87, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional172=index_75==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_69, "18field.c", 309))->mFields, "18field.c", 309))),        __freed_obj__ = 0, 
        _if_conditional172) {
            err_msg(info,"field not found(%s) in %s(1)",name_63,((struct sClass*)come_null_check(klass_69, "18field.c", 306))->mName);
            __freed_obj__ = 0;
            __result73__ = (_Bool)0;
            if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result73__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 311))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value146;
    __freed_obj__ = 0;
    if(_if_conditional173=((struct sType*)come_null_check(field_type_74, "18field.c", 325))->mHeap&&!((struct sType*)come_null_check(right_type_66, "18field.c", 325))->mHeap,    __freed_obj__ = 0, 
    _if_conditional173) {
        if(_if_conditional174=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_66, "18field.c", 323))->mClass, "18field.c", 323))->mName,"void")&&((struct sType*)come_null_check(right_type_66, "18field.c", 323))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional174) {
        }
        else {
            if(_if_conditional175=!((struct sType*)come_null_check(right_type_66, "18field.c", 322))->mDelegate&&!((struct sType*)come_null_check(right_type_66, "18field.c", 322))->mShare,            __freed_obj__ = 0, 
            _if_conditional175) {
                err_msg(info,"require right value as heap object(%s)",name_63);
                __freed_obj__ = 0;
                __result74__ = (_Bool)0;
                if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result74__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    check_assign_type(((char*)(right_value148=xsprintf("\%s is assigned to",((char*)(right_value147=string_to_string(name_63)))))),field_type_74,right_type_66,right_value_65,(_Bool)0,info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value147;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value148;
    __freed_obj__ = 0;
    if(_if_conditional176=((struct sType*)come_null_check(field_type_74, "18field.c", 492))->mHeap&&((struct sType*)come_null_check(right_type_66, "18field.c", 492))->mHeap&&((struct sType*)come_null_check(field_type_74, "18field.c", 492))->mPointerNum>0&&((struct sType*)come_null_check(right_type_66, "18field.c", 492))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional176) {
        if(_if_conditional177=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 432))->type, "18field.c", 432))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional177) {
            if(_if_conditional178=child_field_name_76,            __freed_obj__ = 0, 
            _if_conditional178) {
                c_value_97=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 330))->c_value,child_field_name_76,name_63))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value149;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_74,c_value_97,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional179=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 357))->var,                __freed_obj__ = 0, 
                _if_conditional179) {
                    if(_if_conditional180=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 349))->var, "18field.c", 349))->mType, "18field.c", 349))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional180) {
                        __dec_obj70=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 334))->var, "18field.c", 334))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 334))->var, "18field.c", 334))->mCValueName=((void*)0);
                        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional181=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 349))->var, "18field.c", 349))->mType, "18field.c", 349))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional181) {
                            __dec_obj71=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 337))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 337))->c_value=(char*)come_increment_ref_count(((char*)(right_value150=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 337))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 337))->c_value,info))));
                            if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                            if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value150;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional182=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 349))->var, "18field.c", 349))->mType, "18field.c", 349))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional182) {
                                __dec_obj72=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 340))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 340))->c_value=(char*)come_increment_ref_count(((char*)(right_value151=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 340))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 340))->c_value,info))));
                                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value151;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj73=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 343))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 343))->c_value=(char*)come_increment_ref_count(((char*)(right_value152=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 343))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 343))->c_value,info))));
                                if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                                if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value152;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional183=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 356))->type, "18field.c", 356))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional183) {
                    }
                    else {
                        __dec_obj74=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 354))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 354))->c_value=(char*)come_increment_ref_count(((char*)(right_value153=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 354))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 354))->c_value,info))));
                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
                        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value153;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj75=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 357))->c_value;
                ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 357))->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 357))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 357))->c_value))));
                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
                if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value154;
                __freed_obj__ = 0;
                if(c_value_97 && !__freed_obj__) { c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_98=(char*)come_increment_ref_count(((char*)(right_value155=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 360))->c_value,name_63))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value155;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_74,c_value_98,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional184=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 387))->var,                __freed_obj__ = 0, 
                _if_conditional184) {
                    if(_if_conditional185=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 379))->var, "18field.c", 379))->mType, "18field.c", 379))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional185) {
                        __dec_obj76=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 364))->var, "18field.c", 364))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 364))->var, "18field.c", 364))->mCValueName=((void*)0);
                        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional186=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 379))->var, "18field.c", 379))->mType, "18field.c", 379))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional186) {
                            __dec_obj77=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 367))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 367))->c_value=(char*)come_increment_ref_count(((char*)(right_value156=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 367))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 367))->c_value,info))));
                            if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                            if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value156;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional187=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 379))->var, "18field.c", 379))->mType, "18field.c", 379))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional187) {
                                __dec_obj78=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 370))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 370))->c_value=(char*)come_increment_ref_count(((char*)(right_value157=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 370))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 370))->c_value,info))));
                                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value157;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj79=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 373))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 373))->c_value=(char*)come_increment_ref_count(((char*)(right_value158=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 373))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 373))->c_value,info))));
                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
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
                else {
                    if(_if_conditional188=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 386))->type, "18field.c", 386))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional188) {
                    }
                    else {
                        __dec_obj80=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 384))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 384))->c_value=(char*)come_increment_ref_count(((char*)(right_value159=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 384))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 384))->c_value,info))));
                        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
                        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value159;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj81=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 387))->c_value;
                ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 387))->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 387))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 387))->c_value))));
                if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value160;
                __freed_obj__ = 0;
                if(c_value_98 && !__freed_obj__) { c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional189=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 432))->type, "18field.c", 432))->mPointerNum==0,            __freed_obj__ = 0, 
            _if_conditional189) {
                if(_if_conditional190=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional190) {
                    c_value_99=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 392))->c_value,child_field_name_76,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value161;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_99,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional191=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 419))->var,                    __freed_obj__ = 0, 
                    _if_conditional191) {
                        if(_if_conditional192=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 411))->var, "18field.c", 411))->mType, "18field.c", 411))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            __dec_obj82=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 396))->var, "18field.c", 396))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 396))->var, "18field.c", 396))->mCValueName=((void*)0);
                            if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional193=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 411))->var, "18field.c", 411))->mType, "18field.c", 411))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional193) {
                                __dec_obj83=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 399))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 399))->c_value=(char*)come_increment_ref_count(((char*)(right_value162=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 399))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 399))->c_value,info))));
                                if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value162;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional194=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 411))->var, "18field.c", 411))->mType, "18field.c", 411))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional194) {
                                    __dec_obj84=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 402))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 402))->c_value=(char*)come_increment_ref_count(((char*)(right_value163=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 402))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 402))->c_value,info))));
                                    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                                    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value163;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj85=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 405))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 405))->c_value=(char*)come_increment_ref_count(((char*)(right_value164=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 405))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 405))->c_value,info))));
                                    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
                                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value164;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional195=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 418))->type, "18field.c", 418))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional195) {
                        }
                        else {
                            __dec_obj86=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 416))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 416))->c_value=(char*)come_increment_ref_count(((char*)(right_value165=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 416))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 416))->c_value,info))));
                            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value165;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj87=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 419))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 419))->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 419))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 419))->c_value))));
                    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
                    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value166;
                    __freed_obj__ = 0;
                    if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_100=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 422))->c_value,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value167;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_100,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj88=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 424))->c_value;
                    ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 424))->c_value=(char*)come_increment_ref_count(((char*)(right_value168=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 424))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 424))->c_value,info))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
                    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value168;
                    __freed_obj__ = 0;
                    __dec_obj89=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 425))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 425))->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 425))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 425))->c_value))));
                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value169);
                    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value169;
                    __freed_obj__ = 0;
                    if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 429))->type, "18field.c", 429))->mPointerNum);
                __freed_obj__ = 0;
                __result75__ = (_Bool)0;
                if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result75__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        right_value_id_101=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 432))->c_value));
        __freed_obj__ = 0;
        if(_if_conditional196=right_value_id_101!=-1,        __freed_obj__ = 0, 
        _if_conditional196) {
            remove_object_from_right_values(right_value_id_101,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional197=((struct sType*)come_null_check(field_type_74, "18field.c", 492))->mHeap&&((struct sType*)come_null_check(field_type_74, "18field.c", 492))->mPointerNum>0&&((struct sType*)come_null_check(right_type_66, "18field.c", 492))->mPointerNum>0&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_66, "18field.c", 492))->mClass, "18field.c", 492))->mName,"void"),        __freed_obj__ = 0, 
        _if_conditional197) {
            if(_if_conditional198=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 468))->type, "18field.c", 468))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional198) {
                if(_if_conditional199=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional199) {
                    c_value_102=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 442))->c_value,child_field_name_76,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
                    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value170;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_102,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj90=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 444))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 444))->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 444))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 444))->c_value))));
                    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value171;
                    __freed_obj__ = 0;
                    if(c_value_102 && !__freed_obj__) { c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_103=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 447))->c_value,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value172;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_103,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj91=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 449))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 449))->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 449))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 449))->c_value))));
                    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value173);
                    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value173;
                    __freed_obj__ = 0;
                    if(c_value_103 && !__freed_obj__) { c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional200=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 468))->type, "18field.c", 468))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional200) {
                    if(_if_conditional201=child_field_name_76,                    __freed_obj__ = 0, 
                    _if_conditional201) {
                        c_value_104=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 454))->c_value,child_field_name_76,name_63))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value174;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_74,c_value_104,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj92=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 456))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 456))->c_value=(char*)come_increment_ref_count(((char*)(right_value175=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 456))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 456))->c_value))));
                        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value175);
                        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value175;
                        __freed_obj__ = 0;
                        if(c_value_104 && !__freed_obj__) { c_value_104 = come_decrement_ref_count(c_value_104, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_105=(char*)come_increment_ref_count(((char*)(right_value176=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 459))->c_value,name_63))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value176;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_74,c_value_105,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj93=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 461))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 461))->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 461))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 461))->c_value))));
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value177);
                        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value177;
                        __freed_obj__ = 0;
                        if(c_value_105 && !__freed_obj__) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 465))->type, "18field.c", 465))->mPointerNum);
                    __freed_obj__ = 0;
                    __result76__ = (_Bool)0;
                    if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result76__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional202=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 490))->type, "18field.c", 490))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional202) {
                if(_if_conditional203=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional203) {
                    __dec_obj94=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 472))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 472))->c_value=(char*)come_increment_ref_count(((char*)(right_value178=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 472))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 472))->c_value))));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value178;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj95=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 475))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 475))->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 475))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 475))->c_value))));
                    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value179;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional204=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 490))->type, "18field.c", 490))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional204) {
                    if(_if_conditional205=child_field_name_76,                    __freed_obj__ = 0, 
                    _if_conditional205) {
                        __dec_obj96=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 480))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 480))->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 480))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 480))->c_value))));
                        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value180;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj97=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 483))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 483))->c_value=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 483))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 483))->c_value))));
                        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value181;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 487))->type, "18field.c", 487))->mPointerNum);
                    __freed_obj__ = 0;
                    __result77__ = (_Bool)0;
                    if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
                    if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result77__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj98=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 492))->type;
    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 492))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(field_type_74))));
    if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value182;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 493))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 495))->stack, "18field.c", 495)),(struct CVALUE*)come_increment_ref_count(come_value_96));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_96, "18field.c", 497))->c_value);
    __freed_obj__ = 0;
    __result78__ = (_Bool)1;
    if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_70;
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional10;
_Bool _if_conditional154;
void* right_value131;
struct optional$2boolbool* __exception_result_var_b2;
_Bool _if_conditional155;
void* right_value132;
void* right_value133;
struct optional$2sClasspbool* __result58__;
_Bool _if_conditional156;
_Bool _if_conditional157;
void* right_value134;
void* right_value135;
struct optional$2sClasspbool* __result59__;
void* right_value136;
void* right_value137;
struct optional$2sClasspbool* __result60__;
void* right_value138;
void* right_value139;
struct optional$2sClasspbool* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_70, 0, sizeof(struct sClass*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_70,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_71=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1589)))%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1589))->size;
        __freed_obj__ = 0;
        it_72=hash_71;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional154=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1612))->item_existance[it_72],            __freed_obj__ = 0, 
            _if_conditional154) {
                if(_if_conditional155=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1600),__exception_result_var_b2=((struct optional$2boolbool*)(right_value131=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1600))->keys[it_72], "./comelang2.h", 1600)),key))), come_pop_stackframe(), __exception_result_var_b2)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131),
                (right_value131 && right_value131 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value131, 
                __freed_obj__ = 0, 
                _if_conditional155) {
                    __result58__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value133=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value132=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1597)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1597))->items[it_72],(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
                    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value132;
                    __freed_obj__ = 0;
                    return __result58__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_72++;
                __freed_obj__ = 0;
                if(_if_conditional156=it_72>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1608))->size,                __freed_obj__ = 0, 
                _if_conditional156) {
                    it_72=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional157=it_72==hash_71,                    __freed_obj__ = 0, 
                    _if_conditional157) {
                        __result59__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1606), ((struct optional$2sClasspbool*)(right_value135=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value134=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1606))),default_value_70,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value134;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
                        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value135;
                        __freed_obj__ = 0;
                        return __result59__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result60__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1610), ((struct optional$2sClasspbool*)(right_value137=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value136=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1610))),default_value_70,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value136;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value137;
                __freed_obj__ = 0;
                return __result60__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result61__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1614), ((struct optional$2sClasspbool*)(right_value139=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value138=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1614))),default_value_70,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value138;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value139;
        __freed_obj__ = 0;
        return __result61__;
        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result57__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result57__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional158;
struct sClass* default_value_73;
struct sClass* __result62__;
struct sClass* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(struct sClass*));
        if(_if_conditional158=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional158) {
            __freed_obj__ = 0;
            memset(&default_value_73,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result62__ = __result_obj__ = default_value_73;
            __freed_obj__ = 0;
            return __result62__;
            __freed_obj__ = 0;
        }
        else {
            __result63__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 65))->v1;
            __freed_obj__ = 0;
            return __result63__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional160;
struct tuple2$2charphsTypeph* result_78;
struct tuple2$2charphsTypeph* __result65__;
_Bool _if_conditional161;
struct tuple2$2charphsTypeph* __result66__;
struct tuple2$2charphsTypeph* result_79;
struct tuple2$2charphsTypeph* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional160=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional160) {
            __freed_obj__ = 0;
            memset(&result_78,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result65__ = __result_obj__ = result_78;
            __freed_obj__ = 0;
            return __result65__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 341))->head;
        __freed_obj__ = 0;
        if(_if_conditional161=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 347))->it,        __freed_obj__ = 0, 
        _if_conditional161) {
            __result66__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
            __freed_obj__ = 0;
            return __result66__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result67__ = __result_obj__ = result_79;
        __freed_obj__ = 0;
        return __result67__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result68__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* result_81;
struct tuple2$2charphsTypeph* __result69__;
_Bool _if_conditional163;
struct tuple2$2charphsTypeph* __result70__;
struct tuple2$2charphsTypeph* result_82;
struct tuple2$2charphsTypeph* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional162=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional162) {
            __freed_obj__ = 0;
            memset(&result_81,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result69__ = __result_obj__ = result_81;
            __freed_obj__ = 0;
            return __result69__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
        __freed_obj__ = 0;
        if(_if_conditional163=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 365))->it,        __freed_obj__ = 0, 
        _if_conditional163) {
            __result70__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
            __freed_obj__ = 0;
            return __result70__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result71__ = __result_obj__ = result_82;
        __freed_obj__ = 0;
        return __result71__;
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_85;
_Bool _while_condtional11;
struct list_item$1tuple2$2charphsTypephph* prev_it_86;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_85, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_86, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        it_85=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 174))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_85!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_86=it_85;
            __freed_obj__ = 0;
            it_85=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_85, "./comelang2.h", 177))->next;
            __freed_obj__ = 0;
            if(prev_it_86 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_86, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional165;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional165=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional165) {
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
_Bool _if_conditional166;
_Bool _if_conditional167;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional166=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional167=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional167) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result72__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 415))->len;
        __freed_obj__ = 0;
        return __result72__;
        __freed_obj__ = 0;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 504))->sline;
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value183;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
    __result80__ = __result_obj__ = ((char*)(right_value183=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 509))->sname)));
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value184;
char* __dec_obj99;
void* right_value185;
struct sNode* __dec_obj100;
struct sNullCheckNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 524))->sline=((struct sInfo*)come_null_check(info, "18field.c", 524))->sline;
    __freed_obj__ = 0;
    __dec_obj99=((struct sNullCheckNode*)come_null_check(self, "18field.c", 525))->sname;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 525))->sname=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 525))->sname))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184;
    __freed_obj__ = 0;
    __dec_obj100=((struct sNullCheckNode*)come_null_check(self, "18field.c", 527))->mLeft;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 527))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value185;
    __freed_obj__ = 0;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 528))->mOnlyNullCecker=only_null_checker;
    __freed_obj__ = 0;
    __result81__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value186;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value186=__builtin_string("sNullCheckNode")));
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_106;
_Bool _if_conditional208;
_Bool __result84__;
void* right_value187;
struct CVALUE* left_value_107;
_Bool _if_conditional209;
void* right_value188;
char* method_name_108;
void* right_value190;
_Bool _if_conditional214;
struct sType* obj_type_111;
_Bool _if_conditional230;
struct sType* obj_type2_112;
void* right_value191;
void* right_value192;
char* __dec_obj101;
void* right_value193;
struct sFun* fun_113;
_Bool _if_conditional231;
_Bool __result89__;
void* right_value194;
struct sType* type_114;
void* right_value195;
struct CVALUE* come_value_115;
void* right_value196;
char* __dec_obj102;
void* right_value197;
struct sType* __dec_obj103;
_Bool _if_conditional232;
void* right_value198;
struct CVALUE* come_value_116;
void* right_value199;
void* right_value200;
char* __dec_obj104;
void* right_value201;
struct sType* __dec_obj105;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_106, 0, sizeof(struct sNode*));
memset(&right_value187, 0, sizeof(void*));
memset(&left_value_107, 0, sizeof(struct CVALUE*));
memset(&right_value188, 0, sizeof(void*));
memset(&method_name_108, 0, sizeof(char*));
memset(&right_value190, 0, sizeof(void*));
memset(&obj_type_111, 0, sizeof(struct sType*));
memset(&obj_type2_112, 0, sizeof(struct sType*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&fun_113, 0, sizeof(struct sFun*));
memset(&right_value194, 0, sizeof(void*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&right_value195, 0, sizeof(void*));
memset(&come_value_115, 0, sizeof(struct CVALUE*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
    left_106=((struct sNullCheckNode*)come_null_check(self, "18field.c", 545))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional208=!((struct sNode*)come_null_check(left_106, "18field.c", 551))->compile(((struct sNode*)come_null_check(left_106, "18field.c", 551))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional208) {
        __result84__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result84__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value187;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional209=!((struct sNullCheckNode*)come_null_check(self, "18field.c", 603))->mOnlyNullCecker&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 603))->type, "18field.c", 603))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 603))->type, "18field.c", 603))->mNoSolvedGenericsType, "18field.c", 603))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 603))->type, "18field.c", 603))->mNoSolvedGenericsType, "18field.c", 603))->v1, "18field.c", 603))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 603))->type, "18field.c", 603))->mNoSolvedGenericsType, "18field.c", 603))->v1, "18field.c", 603))->mClass, "18field.c", 603))->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional209) {
        method_name_108=(char*)come_increment_ref_count(((char*)(right_value188=create_method_name(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 555))->type,(_Bool)0,"expect",info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value188;
        __freed_obj__ = 0;
        if(_if_conditional214=((struct sFun*)(right_value190=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 569))->funcs, "18field.c", 569)),method_name_108,((void*)0))))==((void*)0),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190),
        (right_value190 && right_value190 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[1] = right_value190, 
        __freed_obj__ = 0, 
        _if_conditional214) {
            obj_type_111=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 558))->type, "18field.c", 558))->mNoSolvedGenericsType, "18field.c", 558))->v1;
            __freed_obj__ = 0;
            if(_if_conditional230=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_111, "18field.c", 567))->mGenericsTypes, "18field.c", 567)))>0,            __freed_obj__ = 0, 
            _if_conditional230) {
                obj_type2_112=((struct CVALUE*)come_null_check(left_value_107, "18field.c", 560))->type;
                __freed_obj__ = 0;
                __dec_obj101=method_name_108;
                method_name_108=(char*)come_increment_ref_count(((char*)(right_value192=make_generics_function(obj_type2_112,(char*)come_increment_ref_count(((char*)(right_value191=__builtin_string("expect")))),info))));
                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value191;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value192;
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 564))->type, "18field.c", 564))->mClass, "18field.c", 564))->mName);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        come_clear_stackframe();
        fun_113=optional$2sFunpbool_value((come_push_stackframe("18field.c", 569),((struct optional$2sFunpbool*)(right_value193=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 569))->funcs,method_name_108)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value193;
        __freed_obj__ = 0;
        if(_if_conditional231=fun_113==((void*)0),        __freed_obj__ = 0, 
        _if_conditional231) {
            err_msg(info,"function not found(%s)",method_name_108);
            __freed_obj__ = 0;
            __result89__ = (_Bool)1;
            if(method_name_108 && !__freed_obj__) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result89__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=solve_generics(((struct sFun*)come_null_check(fun_113, "18field.c", 576))->mResultType,((struct CVALUE*)come_null_check(left_value_107, "18field.c", 576))->type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value194;
        __freed_obj__ = 0;
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 578))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value195;
        __freed_obj__ = 0;
        __dec_obj102=((struct CVALUE*)come_null_check(come_value_115, "18field.c", 580))->c_value;
        ((struct CVALUE*)come_null_check(come_value_115, "18field.c", 580))->c_value=(char*)come_increment_ref_count(((char*)(right_value196=xsprintf("%s(%s)",method_name_108,((struct CVALUE*)come_null_check(left_value_107, "18field.c", 580))->c_value))));
        if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value196;
        __freed_obj__ = 0;
        __dec_obj103=((struct CVALUE*)come_null_check(come_value_115, "18field.c", 581))->type;
        ((struct CVALUE*)come_null_check(come_value_115, "18field.c", 581))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(type_114))));
        if(__dec_obj103) { come_call_finalizer(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value197);
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value197;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_115, "18field.c", 582))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 584))->stack, "18field.c", 584)),(struct CVALUE*)come_increment_ref_count(come_value_115));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_115, "18field.c", 586))->c_value);
        __freed_obj__ = 0;
        if(method_name_108 && !__freed_obj__) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
        if(type_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional232=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 603))->type, "18field.c", 603))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional232) {
            come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 589))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
            if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value198;
            __freed_obj__ = 0;
            come_clear_stackframe();
            __dec_obj104=((struct CVALUE*)come_null_check(come_value_116, "18field.c", 591))->c_value;
            ((struct CVALUE*)come_null_check(come_value_116, "18field.c", 591))->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",optional$2charphbool_expect((come_push_stackframe("18field.c", 591),((struct optional$2charphbool*)(right_value199=make_type_name_string(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 591))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))))),((struct CVALUE*)come_null_check(left_value_107, "18field.c", 591))->c_value,((struct sInfo*)come_null_check(info, "18field.c", 591))->sname,((struct sInfo*)come_null_check(info, "18field.c", 591))->sline))));
            if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value199);
            if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value199;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value200);
            if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value200;
            __freed_obj__ = 0;
            __dec_obj105=((struct CVALUE*)come_null_check(come_value_116, "18field.c", 592))->type;
            ((struct CVALUE*)come_null_check(come_value_116, "18field.c", 592))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 592))->type))));
            if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value201;
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_116, "18field.c", 593))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 595))->stack, "18field.c", 595)),(struct CVALUE*)come_increment_ref_count(come_value_116));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_116, "18field.c", 597))->c_value);
            __freed_obj__ = 0;
            if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 600))->stack, "18field.c", 600)),(struct CVALUE*)come_increment_ref_count(left_value_107));
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result91__ = (_Bool)1;
    if(left_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
    if(left_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_109;
unsigned int it_110;
_Bool _while_condtional12;
_Bool _if_conditional210;
void* right_value189;
struct optional$2boolbool* __exception_result_var_a5;
_Bool _if_conditional211;
struct sFun* __result85__;
_Bool _if_conditional212;
_Bool _if_conditional213;
struct sFun* __result86__;
struct sFun* __result87__;
struct sFun* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_109, 0, sizeof(unsigned int));
memset(&it_110, 0, sizeof(unsigned int));
memset(&right_value189, 0, sizeof(void*));
            hash_109=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1263)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1263))->size;
            __freed_obj__ = 0;
            it_110=hash_109;
            __freed_obj__ = 0;
            while(_while_condtional12=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional210=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1286))->item_existance[it_110],                __freed_obj__ = 0, 
                _if_conditional210) {
                    if(_if_conditional211=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1274),__exception_result_var_a5=((struct optional$2boolbool*)(right_value189=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1274))->keys[it_110], "./comelang2.h", 1274)),key))), come_pop_stackframe(), __exception_result_var_a5)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189),
                    (right_value189 && right_value189 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value189, 
                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        __result85__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1271))->items[it_110];
                        __freed_obj__ = 0;
                        return __result85__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_110++;
                    __freed_obj__ = 0;
                    if(_if_conditional212=it_110>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1282))->size,                    __freed_obj__ = 0, 
                    _if_conditional212) {
                        it_110=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional213=it_110==hash_109,                        __freed_obj__ = 0, 
                        _if_conditional213) {
                            __result86__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result86__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result87__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result87__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result88__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result88__;
            __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional215=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional217=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mLambdaType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional221=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional221) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSource!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional225=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional225) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional226=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceHead2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional227=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mSourceDefer!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional227) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mComeHeader!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional229=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 13))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional229) {
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
_Bool _if_conditional222;
_Bool _if_conditional223;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional222=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mNodes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional222) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional223=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 2))->mVarTable!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional223) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional233;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional233=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,                __freed_obj__ = 0, 
                _if_conditional233) {
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
                __result90__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
                __freed_obj__ = 0;
                return __result90__;
                __freed_obj__ = 0;
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
                if(_if_conditional234=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional234) {
                    if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sNullCheckNode_sline(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result92__ = ((struct sNullCheckNode*)come_null_check(self, "18field.c", 608))->sline;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value202;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
    __result93__ = __result_obj__ = ((char*)(right_value202=__builtin_string(((struct sNullCheckNode*)come_null_check(self, "18field.c", 613))->sname)));
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value203;
char* __dec_obj106;
void* right_value204;
struct sNode* __dec_obj107;
struct sExceptionGetValueNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 626))->sline=((struct sInfo*)come_null_check(info, "18field.c", 626))->sline;
    __freed_obj__ = 0;
    __dec_obj106=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 627))->sname;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 627))->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 627))->sname))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203;
    __freed_obj__ = 0;
    __dec_obj107=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 629))->mLeft;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 629))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(left))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value204;
    __freed_obj__ = 0;
    __result94__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result95__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value205;
struct CVALUE* left_value_117;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value206;
char* method_name_118;
void* right_value207;
_Bool _if_conditional239;
struct sType* obj_type_119;
_Bool _if_conditional240;
struct sType* obj_type2_120;
void* right_value208;
void* right_value209;
char* __dec_obj108;
void* right_value210;
struct sFun* fun_121;
_Bool _if_conditional241;
_Bool __result96__;
void* right_value211;
struct sType* type_122;
void* right_value212;
struct CVALUE* come_value_123;
void* right_value213;
char* __dec_obj109;
void* right_value214;
struct sType* __dec_obj110;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_value206, 0, sizeof(void*));
memset(&method_name_118, 0, sizeof(char*));
memset(&right_value207, 0, sizeof(void*));
memset(&obj_type_119, 0, sizeof(struct sType*));
memset(&obj_type2_120, 0, sizeof(struct sType*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&fun_121, 0, sizeof(struct sFun*));
memset(&right_value211, 0, sizeof(void*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&right_value212, 0, sizeof(void*));
memset(&come_value_123, 0, sizeof(struct CVALUE*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    left_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional237=left_value_117==((void*)0),    __freed_obj__ = 0, 
    _if_conditional237) {
    }
    else {
        if(_if_conditional238=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 686))->type, "18field.c", 686))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 686))->type, "18field.c", 686))->mNoSolvedGenericsType, "18field.c", 686))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 686))->type, "18field.c", 686))->mNoSolvedGenericsType, "18field.c", 686))->v1, "18field.c", 686))->mClass&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 686))->type, "18field.c", 686))->mNoSolvedGenericsType, "18field.c", 686))->v1, "18field.c", 686))->mClass, "18field.c", 686))->mName,"optional"),        __freed_obj__ = 0, 
        _if_conditional238) {
            method_name_118=(char*)come_increment_ref_count(((char*)(right_value206=create_method_name(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 647))->type,(_Bool)0,"expect",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value206;
            __freed_obj__ = 0;
            if(_if_conditional239=((struct sFun*)(right_value207=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 661))->funcs, "18field.c", 661)),method_name_118,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207),
            (right_value207 && right_value207 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value207, 
            __freed_obj__ = 0, 
            _if_conditional239) {
                obj_type_119=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 650))->type, "18field.c", 650))->mNoSolvedGenericsType, "18field.c", 650))->v1;
                __freed_obj__ = 0;
                if(_if_conditional240=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_119, "18field.c", 659))->mGenericsTypes, "18field.c", 659)))>0,                __freed_obj__ = 0, 
                _if_conditional240) {
                    obj_type2_120=((struct CVALUE*)come_null_check(left_value_117, "18field.c", 652))->type;
                    __freed_obj__ = 0;
                    __dec_obj108=method_name_118;
                    method_name_118=(char*)come_increment_ref_count(((char*)(right_value209=make_generics_function(obj_type2_120,(char*)come_increment_ref_count(((char*)(right_value208=__builtin_string("value")))),info))));
                    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
                    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value208;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
                    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value209;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 656))->type, "18field.c", 656))->mClass, "18field.c", 656))->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            fun_121=optional$2sFunpbool_value((come_push_stackframe("18field.c", 661),((struct optional$2sFunpbool*)(right_value210=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 661))->funcs,method_name_118)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value210;
            __freed_obj__ = 0;
            if(_if_conditional241=fun_121==((void*)0),            __freed_obj__ = 0, 
            _if_conditional241) {
                err_msg(info,"function not found(%s)",method_name_118);
                __freed_obj__ = 0;
                __result96__ = (_Bool)1;
                if(method_name_118 && !__freed_obj__) { method_name_118 = come_decrement_ref_count(method_name_118, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result96__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_122=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=solve_generics(((struct sFun*)come_null_check(fun_121, "18field.c", 668))->mResultType,((struct CVALUE*)come_null_check(left_value_117, "18field.c", 668))->type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value211);
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value211;
            __freed_obj__ = 0;
            come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 670))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value212);
            if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value212;
            __freed_obj__ = 0;
            __dec_obj109=((struct CVALUE*)come_null_check(come_value_123, "18field.c", 672))->c_value;
            ((struct CVALUE*)come_null_check(come_value_123, "18field.c", 672))->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s(%s)",method_name_118,((struct CVALUE*)come_null_check(left_value_117, "18field.c", 672))->c_value))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value213);
            if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value213;
            __freed_obj__ = 0;
            __dec_obj110=((struct CVALUE*)come_null_check(come_value_123, "18field.c", 673))->type;
            ((struct CVALUE*)come_null_check(come_value_123, "18field.c", 673))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type_122))));
            if(__dec_obj110) { come_call_finalizer(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value214);
            if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value214;
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_123, "18field.c", 674))->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 676))->stack, "18field.c", 676)),(struct CVALUE*)come_increment_ref_count(come_value_123));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_123, "18field.c", 678))->c_value);
            __freed_obj__ = 0;
            if(method_name_118 && !__freed_obj__) { method_name_118 = come_decrement_ref_count(method_name_118, (void*)0, (void*)0, 0, 0, 0); }
            if(type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 681))->stack, "18field.c", 681)),(struct CVALUE*)come_increment_ref_count(left_value_117));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(left_value_117, "18field.c", 683))->c_value);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result97__ = (_Bool)1;
    if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
    if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value215;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value215, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(right_value215=__builtin_string("sExceptionGetValueNode")));
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_124;
_Bool _if_conditional242;
_Bool __result99__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_124, 0, sizeof(struct sNode*));
    left_124=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 696))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional242=!((struct sNode*)come_null_check(left_124, "18field.c", 702))->compile(((struct sNode*)come_null_check(left_124, "18field.c", 702))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional242) {
        __result99__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result99__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result100__ = compiletime_get_exception_value(info);
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result101__ = ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 707))->sline;
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value216;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value216, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(right_value216=__builtin_string(((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 712))->sname)));
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value217;
void* right_value218;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value224;
struct sNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 717);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value218=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value217=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 717)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result105__ = __result_obj__ = ((struct sNode*)(right_value224=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value217;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value218;
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sLoadFieldNode* sLoadFieldNode_initialize(struct sLoadFieldNode* self, struct sNode* left, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value225;
char* __dec_obj115;
void* right_value226;
struct sNode* __dec_obj116;
void* right_value227;
char* __dec_obj117;
struct sLoadFieldNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 731))->sline=((struct sInfo*)come_null_check(info, "18field.c", 731))->sline;
    __freed_obj__ = 0;
    __dec_obj115=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 732))->sname;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 732))->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 732))->sname))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value225;
    __freed_obj__ = 0;
    __dec_obj116=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 734))->mLeft;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 734))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(left))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value226;
    __freed_obj__ = 0;
    __dec_obj117=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 735))->mName;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 735))->mName=(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string(name))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value227;
    __freed_obj__ = 0;
    __result106__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sLoadFieldNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result107__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value228;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
    __result108__ = __result_obj__ = ((char*)(right_value228=__builtin_string("sLoadFieldNode")));
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_126;
void* right_value229;
char* name_127;
_Bool _if_conditional256;
_Bool __result109__;
void* right_value230;
struct CVALUE* left_value_128;
struct sType* left_type_129;
void* right_value231;
struct sType* left_type2_130;
struct sClass* klass_131;
void* right_value232;
struct sType* field_type_132;
int index_133;
char* child_field_name_134;
void* right_value233;
struct list$1tuple2$2charphsTypephph* o2_saved_135;
struct tuple2$2charphsTypeph* field_136;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* field_name_137;
struct sType* field_type2_138;
_Bool _if_conditional257;
void* right_value234;
struct sType* __dec_obj118;
_Bool _if_conditional258;
struct list$1tuple2$2charphsTypephph* o2_saved_139;
struct tuple2$2charphsTypeph* field_140;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* field_name_141;
struct sType* field_type2_142;
struct sClass* klass2_143;
struct list$1tuple2$2charphsTypephph* o2_saved_144;
struct tuple2$2charphsTypeph* field2_145;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* field_name2_146;
struct sType* field_type3_147;
_Bool _if_conditional259;
void* right_value235;
char* __dec_obj119;
void* right_value236;
struct sType* __dec_obj120;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value237;
struct sType* __dec_obj121;
_Bool _if_conditional262;
_Bool __result110__;
void* right_value238;
struct CVALUE* come_value_148;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value239;
char* __dec_obj122;
void* right_value240;
char* __dec_obj123;
_Bool _if_conditional265;
void* right_value241;
char* __dec_obj124;
void* right_value242;
char* __dec_obj125;
void* right_value243;
struct sType* __dec_obj126;
_Bool _if_conditional266;
void* right_value244;
struct sType* __dec_obj127;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_126, 0, sizeof(struct sNode*));
memset(&right_value229, 0, sizeof(void*));
memset(&name_127, 0, sizeof(char*));
memset(&right_value230, 0, sizeof(void*));
memset(&left_value_128, 0, sizeof(struct CVALUE*));
memset(&left_type_129, 0, sizeof(struct sType*));
memset(&right_value231, 0, sizeof(void*));
memset(&left_type2_130, 0, sizeof(struct sType*));
memset(&klass_131, 0, sizeof(struct sClass*));
memset(&right_value232, 0, sizeof(void*));
memset(&field_type_132, 0, sizeof(struct sType*));
memset(&index_133, 0, sizeof(int));
memset(&child_field_name_134, 0, sizeof(char*));
memset(&right_value233, 0, sizeof(void*));
memset(&o2_saved_135, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_136, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&right_value234, 0, sizeof(void*));
memset(&o2_saved_139, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_140, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_141, 0, sizeof(char*));
memset(&field_type2_142, 0, sizeof(struct sType*));
memset(&field_name_141, 0, sizeof(char*));
memset(&field_type2_142, 0, sizeof(struct sType*));
memset(&klass2_143, 0, sizeof(struct sClass*));
memset(&o2_saved_144, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_145, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_146, 0, sizeof(char*));
memset(&field_type3_147, 0, sizeof(struct sType*));
memset(&field_name2_146, 0, sizeof(char*));
memset(&field_type3_147, 0, sizeof(struct sType*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
    left_126=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 752))->mLeft;
    __freed_obj__ = 0;
    name_127=(char*)come_increment_ref_count(((char*)(right_value229=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 753))->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value229;
    __freed_obj__ = 0;
    if(_if_conditional256=!((struct sNode*)come_null_check(left_126, "18field.c", 759))->compile(((struct sNode*)come_null_check(left_126, "18field.c", 759))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional256) {
        __result109__ = (_Bool)0;
        if(name_127 && !__freed_obj__) { name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value230;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_129=((struct CVALUE*)come_null_check(left_value_128, "18field.c", 762))->type;
    __freed_obj__ = 0;
    left_type2_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value231=solve_generics(left_type_129,left_type_129,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value231;
    __freed_obj__ = 0;
    klass_131=((struct sType*)come_null_check(left_type2_130, "18field.c", 766))->mClass;
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_131=optional$2sClasspbool_value((come_push_stackframe("18field.c", 767),((struct optional$2sClasspbool*)(right_value232=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 767))->classes,((struct sClass*)come_null_check(klass_131, "18field.c", 767))->mName)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value232;
    __freed_obj__ = 0;
    field_type_132=((void*)0);
    __freed_obj__ = 0;
    index_133=0;
    __freed_obj__ = 0;
    child_field_name_134=((void*)0);
    __freed_obj__ = 0;
    come_clear_stackframe();
    klass_131=optional$2sClasspbool_value((come_push_stackframe("18field.c", 772),((struct optional$2sClasspbool*)(right_value233=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 772))->classes,((struct sClass*)come_null_check(klass_131, "18field.c", 772))->mName)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value233;
    __freed_obj__ = 0;
    for(
    o2_saved_135=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "18field.c", 784))->mFields)),field_136=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_135), "18field.c", 784))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_135), "18field.c", 784))) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    field_136=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_135), "18field.c", 784))) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var4=field_136;
        field_name_137=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
        field_type2_138=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
        __freed_obj__ = 0;
        if(_if_conditional257=string_operator_equals(field_name_137,name_127),        __freed_obj__ = 0, 
        _if_conditional257) {
            __dec_obj118=field_type_132;
            field_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(field_type2_138))));
            if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
            if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value234;
            __freed_obj__ = 0;
            if(field_name_137 && !__freed_obj__) { field_name_137 = come_decrement_ref_count(field_name_137, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_133++;
        __freed_obj__ = 0;
        if(field_name_137 && !__freed_obj__) { field_name_137 = come_decrement_ref_count(field_name_137, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_135 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional258=index_133==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_131, "18field.c", 819))->mFields, "18field.c", 819))),    __freed_obj__ = 0, 
    _if_conditional258) {
        index_133=0;
        __freed_obj__ = 0;
        for(
        o2_saved_139=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "18field.c", 813))->mFields)),field_140=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 813))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 813))) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        field_140=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 813))) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var5=field_140;
            field_name_141=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
            field_type2_142=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
            __freed_obj__ = 0;
            klass2_143=((struct sType*)come_null_check(field_type2_142, "18field.c", 789))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_144=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_143, "18field.c", 801))->mFields)),field2_145=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "18field.c", 801))) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "18field.c", 801))) ,            __freed_obj__ = 0, 
            _for_condtionalA7;            field2_145=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "18field.c", 801))) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var6=field2_145;
                field_name2_146=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type3_147=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                __freed_obj__ = 0;
                if(_if_conditional259=string_operator_equals(field_name2_146,name_127),                __freed_obj__ = 0, 
                _if_conditional259) {
                    __dec_obj119=child_field_name_134;
                    child_field_name_134=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(field_name_141))));
                    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value235;
                    __freed_obj__ = 0;
                    __dec_obj120=field_type_132;
                    field_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(field_type3_147))));
                    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value236;
                    __freed_obj__ = 0;
                    if(field_name2_146 && !__freed_obj__) { field_name2_146 = come_decrement_ref_count(field_name2_146, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_147, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_146 && !__freed_obj__) { field_name2_146 = come_decrement_ref_count(field_name2_146, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_147 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_147, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_144 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_144, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional260=child_field_name_134,            __freed_obj__ = 0, 
            _if_conditional260) {
                if(field_name_141 && !__freed_obj__) { field_name_141 = come_decrement_ref_count(field_name_141, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional261=string_operator_equals(field_name_141,name_127),            __freed_obj__ = 0, 
            _if_conditional261) {
                __dec_obj121=field_type_132;
                field_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(field_type2_142))));
                if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value237;
                __freed_obj__ = 0;
                if(field_name_141 && !__freed_obj__) { field_name_141 = come_decrement_ref_count(field_name_141, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_142, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_133++;
            __freed_obj__ = 0;
            if(field_name_141 && !__freed_obj__) { field_name_141 = come_decrement_ref_count(field_name_141, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_142 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_142, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_139 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_139, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional262=index_133==list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_131, "18field.c", 817))->mFields, "18field.c", 817))),        __freed_obj__ = 0, 
        _if_conditional262) {
            err_msg(info,"field not found(%s) in %s(2)",name_127,((struct sClass*)come_null_check(klass_131, "18field.c", 814))->mName);
            __freed_obj__ = 0;
            __result110__ = (_Bool)0;
            if(name_127 && !__freed_obj__) { name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_130, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_134 && !__freed_obj__) { child_field_name_134 = come_decrement_ref_count(child_field_name_134, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result110__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 819))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value238;
    __freed_obj__ = 0;
    if(_if_conditional263=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_128, "18field.c", 837))->type, "18field.c", 837))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional263) {
        if(_if_conditional264=child_field_name_134,        __freed_obj__ = 0, 
        _if_conditional264) {
            __dec_obj122=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 823))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 823))->c_value=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 823))->c_value,child_field_name_134,name_127))));
            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
            if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value239;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj123=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 826))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 826))->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 826))->c_value,name_127))));
            if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
            if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value240;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional265=child_field_name_134,        __freed_obj__ = 0, 
        _if_conditional265) {
            __dec_obj124=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 831))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 831))->c_value=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 831))->c_value,child_field_name_134,name_127))));
            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value241;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj125=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 834))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 834))->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 834))->c_value,name_127))));
            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value242;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj126=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 837))->type;
    ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 837))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(field_type_132))));
    if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value243;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 838))->var=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional266=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 848))->type, "18field.c", 848))->mArrayNum, "18field.c", 848)))==1,    __freed_obj__ = 0, 
    _if_conditional266) {
        __dec_obj127=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 841))->type, "18field.c", 841))->mOriginalLoadVarType, "18field.c", 841))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 841))->type, "18field.c", 841))->mOriginalLoadVarType, "18field.c", 841))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 841))->type))));
        if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = 0;
        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 843))->type, "18field.c", 843))->mArrayNum, "18field.c", 843)));
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 844))->type, "18field.c", 844))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 845))->type, "18field.c", 845))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 845))->type, "18field.c", 845))->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 848))->stack, "18field.c", 848)),(struct CVALUE*)come_increment_ref_count(come_value_148));
    __freed_obj__ = 0;
    __result113__ = (_Bool)1;
    if(name_127 && !__freed_obj__) { name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_134 && !__freed_obj__) { child_field_name_134 = come_decrement_ref_count(child_field_name_134, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(name_127 && !__freed_obj__) { name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_134 && !__freed_obj__) { child_field_name_134 = come_decrement_ref_count(child_field_name_134, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result111__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 415))->len;
        __freed_obj__ = 0;
        return __result111__;
        __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_149;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_150;
struct list$1sNodeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_149, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_150, 0, sizeof(struct list_item$1sNodeph*));
            it_149=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 481))->head;
            __freed_obj__ = 0;
            while(_while_condtional13=it_149!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional13) {
                prev_it_150=it_149;
                __freed_obj__ = 0;
                it_149=((struct list_item$1sNodeph*)come_null_check(it_149, "./comelang2.h", 484))->next;
                __freed_obj__ = 0;
                if(prev_it_150 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 488))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 489))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 491))->len=0;
            __freed_obj__ = 0;
            __result112__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 855))->sline;
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value245;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value245, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value245=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 860))->sname)));
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value246;
char* __dec_obj128;
void* right_value247;
struct sNode* __dec_obj129;
void* right_value248;
struct sNode* __dec_obj130;
void* right_value249;
struct list$1sNodeph* __dec_obj131;
struct sStoreArrayNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 876))->sline=((struct sInfo*)come_null_check(info, "18field.c", 876))->sline;
    __freed_obj__ = 0;
    __dec_obj128=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 877))->sname;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 877))->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 877))->sname))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value246;
    __freed_obj__ = 0;
    __dec_obj129=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 879))->mLeft;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 879))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=sNode_clone(left))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value247;
    __freed_obj__ = 0;
    __dec_obj130=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 880))->mRight;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 880))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(right))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value248;
    __freed_obj__ = 0;
    __dec_obj131=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 881))->mArrayNum;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 881))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value249=list$1sNodephp_clone(array_num))));
    if(__dec_obj131) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value249;
    __freed_obj__ = 0;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 882))->mQuote=quote;
    __freed_obj__ = 0;
    __result116__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sStoreArrayNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value250;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value250=__builtin_string("sStoreArrayNode")));
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_151;
struct sNode* right_152;
struct list$1sNodeph* array_num_nodes_153;
_Bool _if_conditional271;
_Bool __result119__;
void* right_value251;
struct CVALUE* left_value_154;
struct sType* left_type_155;
void* right_value252;
void* right_value253;
struct list$1CVALUEph* array_num_158;
struct list$1sNodeph* o2_saved_159;
struct sNode* it_162;
_Bool _for_condtionalA8;
_Bool _if_conditional276;
_Bool __result128__;
void* right_value254;
struct CVALUE* c_value_165;
_Bool _if_conditional277;
_Bool __result129__;
void* right_value255;
struct CVALUE* right_value_166;
struct sType* right_type_167;
struct sClass* klass_168;
void* right_value256;
struct sType* type_169;
char* fun_name_170;
_Bool calling_fun_171;
_Bool _if_conditional278;
void* right_value261;
_Bool _if_conditional283;
void* right_value262;
struct CVALUE* come_value_176;
_Bool _if_conditional284;
int i_177;
_Bool _for_condtionalA9;
_Bool _if_conditional303;
_Bool _if_conditional304;
void* right_value263;
void* right_value264;
struct buffer* buf_190;
struct list$1CVALUEph* o2_saved_191;
struct CVALUE* it_194;
_Bool _for_condtionalA10;
void* right_value265;
void* right_value266;
char* left_value_code_197;
void* right_value267;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
char* __dec_obj133;
_Bool _if_conditional313;
void* right_value268;
char* __dec_obj134;
_Bool _if_conditional314;
void* right_value269;
char* __dec_obj135;
void* right_value270;
char* __dec_obj136;
_Bool _if_conditional315;
void* right_value271;
char* __dec_obj137;
void* right_value272;
char* __dec_obj138;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
char* __dec_obj139;
_Bool _if_conditional319;
void* right_value273;
char* __dec_obj140;
_Bool _if_conditional320;
void* right_value274;
char* __dec_obj141;
void* right_value275;
char* __dec_obj142;
_Bool _if_conditional321;
void* right_value276;
char* __dec_obj143;
void* right_value277;
char* __dec_obj144;
_Bool __result145__;
int right_value_id_198;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value278;
char* __dec_obj145;
_Bool _if_conditional324;
void* right_value279;
char* __dec_obj146;
_Bool __result146__;
void* right_value280;
struct sType* result_type_199;
void* right_value281;
void* right_value282;
struct list$1sNodeph* __dec_obj147;
struct sType* __dec_obj148;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_151, 0, sizeof(struct sNode*));
memset(&right_152, 0, sizeof(struct sNode*));
memset(&array_num_nodes_153, 0, sizeof(struct list$1sNodeph*));
memset(&right_value251, 0, sizeof(void*));
memset(&left_value_154, 0, sizeof(struct CVALUE*));
memset(&left_type_155, 0, sizeof(struct sType*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&array_num_158, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_159, 0, sizeof(struct list$1sNodeph*));
memset(&it_162, 0, sizeof(struct sNode*));
memset(&right_value254, 0, sizeof(void*));
memset(&c_value_165, 0, sizeof(struct CVALUE*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value_166, 0, sizeof(struct CVALUE*));
memset(&right_type_167, 0, sizeof(struct sType*));
memset(&klass_168, 0, sizeof(struct sClass*));
memset(&right_value256, 0, sizeof(void*));
memset(&type_169, 0, sizeof(struct sType*));
memset(&fun_name_170, 0, sizeof(char*));
memset(&calling_fun_171, 0, sizeof(_Bool));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&come_value_176, 0, sizeof(struct CVALUE*));
memset(&i_177, 0, sizeof(int));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&buf_190, 0, sizeof(struct buffer*));
memset(&o2_saved_191, 0, sizeof(struct list$1CVALUEph*));
memset(&it_194, 0, sizeof(struct CVALUE*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&left_value_code_197, 0, sizeof(char*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value_id_198, 0, sizeof(int));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&result_type_199, 0, sizeof(struct sType*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
    left_151=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 899))->mLeft;
    __freed_obj__ = 0;
    right_152=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 900))->mRight;
    __freed_obj__ = 0;
    array_num_nodes_153=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 901))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional271=!((struct sNode*)come_null_check(left_151, "18field.c", 907))->compile(((struct sNode*)come_null_check(left_151, "18field.c", 907))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional271) {
        __result119__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result119__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value251;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_155=((struct CVALUE*)come_null_check(left_value_154, "18field.c", 910))->type;
    __freed_obj__ = 0;
    array_num_158=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value253=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value252=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 912))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value252;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value253);
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value253;
    __freed_obj__ = 0;
    for(
    o2_saved_159=(array_num_nodes_153),it_162=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_159), "18field.c", 925))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_159), "18field.c", 925))) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_162=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_159), "18field.c", 925))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional276=!((struct sNode*)come_null_check(it_162, "18field.c", 919))->compile(((struct sNode*)come_null_check(it_162, "18field.c", 919))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional276) {
            __result128__ = (_Bool)0;
            if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result128__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_158, "18field.c", 922)),(struct CVALUE*)come_increment_ref_count(c_value_165));
        __freed_obj__ = 0;
        if(c_value_165 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_165, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional277=!((struct sNode*)come_null_check(right_152, "18field.c", 929))->compile(((struct sNode*)come_null_check(right_152, "18field.c", 929))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional277) {
        __result129__ = (_Bool)0;
        if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result129__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value255;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_167=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 932))->type;
    __freed_obj__ = 0;
    klass_168=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 934))->type, "18field.c", 934))->mClass;
    __freed_obj__ = 0;
    type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 936))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value256;
    __freed_obj__ = 0;
    fun_name_170="operator_store_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional278=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 947))->mQuote,    __freed_obj__ = 0, 
    _if_conditional278) {
        calling_fun_171=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_171=operator_overload_fun2(type_169,fun_name_170,left_value_154,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 944),((struct optional$2CVALUEphbool*)(right_value261=list$1CVALUEphp_operator_load_element(array_num_158,0))))),right_value_166,info);
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value261;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional283=!calling_fun_171,    __freed_obj__ = 0, 
    _if_conditional283) {
        come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 948))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262;
        __freed_obj__ = 0;
        if(_if_conditional284=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_155, "18field.c", 969))->mArrayNum, "18field.c", 969)))>0,        __freed_obj__ = 0, 
        _if_conditional284) {
            for(
            i_177=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA9=            i_177<list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_158, "18field.c", 960))) ,            __freed_obj__ = 0, 
            _for_condtionalA9;            i_177++ ,            __freed_obj__ = 0, 
            0            ){
                list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_155, "18field.c", 958))->mArrayNum, "18field.c", 958)),-1,-1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional303=((struct sType*)come_null_check(left_type_155, "18field.c", 969))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional303) {
                ((struct sType*)come_null_check(left_type_155, "18field.c", 962))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_158, "18field.c", 962)));
                __freed_obj__ = 0;
                if(_if_conditional304=((struct sType*)come_null_check(left_type_155, "18field.c", 967))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional304) {
                    ((struct sType*)come_null_check(left_type_155, "18field.c", 965))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buf_190=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value264=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value263=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 969))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value263;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value264;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_190, "18field.c", 971)),((struct CVALUE*)come_null_check(left_value_154, "18field.c", 971))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_191=(struct list$1CVALUEph*)come_increment_ref_count((array_num_158)),it_194=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_191), "18field.c", 977))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_191), "18field.c", 977))) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_194=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_191), "18field.c", 977))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_190, "18field.c", 974)),((char*)(right_value265=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_194, "18field.c", 974))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value265;
            __freed_obj__ = 0;
        }
        if(o2_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_197=(char*)come_increment_ref_count(((char*)(right_value266=buffer_to_string(((struct buffer*)come_null_check(buf_190, "18field.c", 977))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value266;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value267=xsprintf("array is assinged to"))),left_type_155,right_type_167,right_value_166,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value267;
        __freed_obj__ = 0;
        if(_if_conditional309=((struct sType*)come_null_check(left_type_155, "18field.c", 1062))->mHeap&&((struct sType*)come_null_check(right_type_167, "18field.c", 1062))->mHeap&&((struct sType*)come_null_check(left_type_155, "18field.c", 1062))->mPointerNum>0&&((struct sType*)come_null_check(right_type_167, "18field.c", 1062))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional309) {
            if(_if_conditional310=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1044))->type, "18field.c", 1044))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional310) {
                decrement_ref_count_object(left_type_155,left_value_code_197,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional311=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1009))->var,                __freed_obj__ = 0, 
                _if_conditional311) {
                    if(_if_conditional312=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1001))->var, "18field.c", 1001))->mType, "18field.c", 1001))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        __dec_obj133=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 986))->var, "18field.c", 986))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 986))->var, "18field.c", 986))->mCValueName=((void*)0);
                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional313=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1001))->var, "18field.c", 1001))->mType, "18field.c", 1001))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            __dec_obj134=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 989))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 989))->c_value=(char*)come_increment_ref_count(((char*)(right_value268=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 989))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 989))->c_value,info))));
                            if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                            if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value268;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional314=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1001))->var, "18field.c", 1001))->mType, "18field.c", 1001))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional314) {
                                __dec_obj135=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 992))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 992))->c_value=(char*)come_increment_ref_count(((char*)(right_value269=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 992))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 992))->c_value,info))));
                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                                if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value269;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj136=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 995))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 995))->c_value=(char*)come_increment_ref_count(((char*)(right_value270=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 995))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 995))->c_value,info))));
                                if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
                                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value270;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional315=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1008))->type, "18field.c", 1008))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional315) {
                    }
                    else {
                        __dec_obj137=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1006))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1006))->c_value=(char*)come_increment_ref_count(((char*)(right_value271=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1006))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1006))->c_value,info))));
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value271;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj138=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1009))->c_value;
                ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1009))->c_value=(char*)come_increment_ref_count(((char*)(right_value272=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1009))->c_value))));
                if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
                if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value272;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional316=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1044))->type, "18field.c", 1044))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional316) {
                    decrement_ref_count_object(left_type_155,left_value_code_197,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional317=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1038))->var,                    __freed_obj__ = 0, 
                    _if_conditional317) {
                        if(_if_conditional318=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1030))->var, "18field.c", 1030))->mType, "18field.c", 1030))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            __dec_obj139=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1015))->var, "18field.c", 1015))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1015))->var, "18field.c", 1015))->mCValueName=((void*)0);
                            if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional319=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1030))->var, "18field.c", 1030))->mType, "18field.c", 1030))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional319) {
                                __dec_obj140=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1018))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1018))->c_value=(char*)come_increment_ref_count(((char*)(right_value273=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1018))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1018))->c_value,info))));
                                if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
                                if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value273;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional320=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1030))->var, "18field.c", 1030))->mType, "18field.c", 1030))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional320) {
                                    __dec_obj141=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1021))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1021))->c_value=(char*)come_increment_ref_count(((char*)(right_value274=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1021))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1021))->c_value,info))));
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
                                    if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value274;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj142=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1024))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1024))->c_value=(char*)come_increment_ref_count(((char*)(right_value275=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1024))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1024))->c_value,info))));
                                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
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
                    }
                    else {
                        if(_if_conditional321=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1037))->type, "18field.c", 1037))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional321) {
                        }
                        else {
                            __dec_obj143=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1035))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1035))->c_value=(char*)come_increment_ref_count(((char*)(right_value276=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1035))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1035))->c_value,info))));
                            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
                            if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value276;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj144=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1038))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1038))->c_value=(char*)come_increment_ref_count(((char*)(right_value277=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1038))->c_value))));
                    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
                    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value277;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_197,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1041))->type, "18field.c", 1041))->mPointerNum);
                    __freed_obj__ = 0;
                    __result145__ = (_Bool)0;
                    if(come_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_190 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_197 && !__freed_obj__) { left_value_code_197 = come_decrement_ref_count(left_value_code_197, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result145__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_id_198=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1044))->c_value));
            __freed_obj__ = 0;
            if(_if_conditional322=right_value_id_198!=-1,            __freed_obj__ = 0, 
            _if_conditional322) {
                remove_object_from_right_values(right_value_id_198,info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional323=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1061))->type, "18field.c", 1061))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional323) {
                __dec_obj145=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1052))->c_value;
                ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1052))->c_value=(char*)come_increment_ref_count(((char*)(right_value278=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1052))->c_value))));
                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value278;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional324=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1061))->type, "18field.c", 1061))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional324) {
                    __dec_obj146=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1055))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1055))->c_value=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1055))->c_value))));
                    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value279;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_197,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1058))->type, "18field.c", 1058))->mPointerNum);
                    __freed_obj__ = 0;
                    __result146__ = (_Bool)0;
                    if(come_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_190 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_197 && !__freed_obj__) { left_value_code_197 = come_decrement_ref_count(left_value_code_197, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result146__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(left_type_155))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value280);
        if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value280;
        __freed_obj__ = 0;
        __dec_obj147=((struct sType*)come_null_check(result_type_199, "18field.c", 1063))->mArrayNum;
        ((struct sType*)come_null_check(result_type_199, "18field.c", 1063))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value282=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value281=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1063))))))));
        if(__dec_obj147) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value281;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value282);
        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value282;
        __freed_obj__ = 0;
        __dec_obj148=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1064))->type;
        ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1064))->type=(struct sType*)come_increment_ref_count(result_type_199);
        if(__dec_obj148) { come_call_finalizer(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1065))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1067))->stack, "18field.c", 1067)),(struct CVALUE*)come_increment_ref_count(come_value_176));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1069))->c_value);
        __freed_obj__ = 0;
        if(come_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_190 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_197 && !__freed_obj__) { left_value_code_197 = come_decrement_ref_count(left_value_code_197, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result147__ = (_Bool)1;
    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 157))->len=0;
        __freed_obj__ = 0;
        __result120__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result120__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_156;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_157;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_156, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_157, 0, sizeof(struct list_item$1CVALUEph*));
            it_156=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 174))->head;
            __freed_obj__ = 0;
            while(_while_condtional14=it_156!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional14) {
                prev_it_157=it_156;
                __freed_obj__ = 0;
                it_156=((struct list_item$1CVALUEph*)come_null_check(it_156, "./comelang2.h", 177))->next;
                __freed_obj__ = 0;
                if(prev_it_157 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional272;
struct sNode* result_160;
struct sNode* __result121__;
_Bool _if_conditional273;
struct sNode* __result122__;
struct sNode* result_161;
struct sNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_160, 0, sizeof(struct sNode*));
memset(&result_161, 0, sizeof(struct sNode*));
        if(_if_conditional272=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional272) {
            __freed_obj__ = 0;
            memset(&result_160,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result121__ = __result_obj__ = result_160;
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 341))->head;
        __freed_obj__ = 0;
        if(_if_conditional273=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 347))->it,        __freed_obj__ = 0, 
        _if_conditional273) {
            __result122__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_161,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result123__ = __result_obj__ = result_161;
        __freed_obj__ = 0;
        return __result123__;
        __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result124__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
struct sNode* result_163;
struct sNode* __result125__;
_Bool _if_conditional275;
struct sNode* __result126__;
struct sNode* result_164;
struct sNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_163, 0, sizeof(struct sNode*));
memset(&result_164, 0, sizeof(struct sNode*));
        if(_if_conditional274=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            __freed_obj__ = 0;
            memset(&result_163,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result125__ = __result_obj__ = result_163;
            __freed_obj__ = 0;
            return __result125__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
        __freed_obj__ = 0;
        if(_if_conditional275=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 365))->it,        __freed_obj__ = 0, 
        _if_conditional275) {
            __result126__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
            __freed_obj__ = 0;
            return __result126__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_164,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result127__ = __result_obj__ = result_164;
        __freed_obj__ = 0;
        return __result127__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
struct list_item$1CVALUEph* it_172;
int i_173;
_Bool _while_condtional15;
_Bool _if_conditional280;
void* right_value257;
void* right_value258;
struct optional$2CVALUEphbool* __result131__;
struct CVALUE* default_value_174;
void* right_value259;
void* right_value260;
struct optional$2CVALUEphbool* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_172, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_173, 0, sizeof(int));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&default_value_174, 0, sizeof(struct CVALUE*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
            if(_if_conditional279=position<0,            __freed_obj__ = 0, 
            _if_conditional279) {
                position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 740))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_172=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 743))->head;
            __freed_obj__ = 0;
            i_173=0;
            __freed_obj__ = 0;
            while(_while_condtional15=it_172!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional15) {
                if(_if_conditional280=position==i_173,                __freed_obj__ = 0, 
                _if_conditional280) {
                    __result131__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value258=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value257=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 747)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_172, "./comelang2.h", 747))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value257;
                    __freed_obj__ = 0;
                    return __result131__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_172=((struct list_item$1CVALUEph*)come_null_check(it_172, "./comelang2.h", 749))->next;
                __freed_obj__ = 0;
                i_173++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_174,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result132__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2CVALUEphbool*)(right_value260=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value259=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 755))),(struct CVALUE*)come_increment_ref_count(default_value_174),(_Bool)0))));
            if(default_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
            if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value259;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value260);
            if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value260;
            __freed_obj__ = 0;
            return __result132__;
            __freed_obj__ = 0;
            if(default_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* __dec_obj132;
struct optional$2CVALUEphbool* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj132=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj132) { come_call_finalizer(CVALUE_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result130__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result130__;
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
_Bool _if_conditional281;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional281=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional281) {
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
_Bool _if_conditional282;
struct CVALUE* default_value_175;
struct CVALUE* __result133__;
struct CVALUE* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_175, 0, sizeof(struct CVALUE*));
            if(_if_conditional282=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional282) {
                __freed_obj__ = 0;
                memset(&default_value_175,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result133__ = __result_obj__ = default_value_175;
                __freed_obj__ = 0;
                return __result133__;
                __freed_obj__ = 0;
            }
            else {
                __result134__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result134__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result135__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 415))->len;
                __freed_obj__ = 0;
                return __result135__;
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional285;
_Bool _if_conditional286;
_Bool _if_conditional287;
int tmp_178;
_Bool _if_conditional288;
_Bool _if_conditional289;
_Bool _if_conditional290;
struct list$1sNodeph* __result136__;
_Bool _if_conditional291;
_Bool _if_conditional292;
struct list_item$1sNodeph* it_179;
int i_180;
_Bool _while_condtional16;
_Bool _if_conditional293;
struct list_item$1sNodeph* prev_it_181;
_Bool _if_conditional294;
_Bool _if_conditional295;
struct list_item$1sNodeph* it_182;
int i_183;
_Bool _while_condtional17;
_Bool _if_conditional296;
_Bool _if_conditional297;
struct list_item$1sNodeph* prev_it_184;
struct list_item$1sNodeph* it_185;
struct list_item$1sNodeph* head_prev_it_186;
struct list_item$1sNodeph* tail_it_187;
int i_188;
_Bool _while_condtional18;
_Bool _if_conditional298;
_Bool _if_conditional299;
_Bool _if_conditional300;
struct list_item$1sNodeph* prev_it_189;
_Bool _if_conditional301;
_Bool _if_conditional302;
struct list$1sNodeph* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_178, 0, sizeof(int));
memset(&it_179, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_180, 0, sizeof(int));
memset(&prev_it_181, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_182, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_183, 0, sizeof(int));
memset(&prev_it_184, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_185, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_186, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional285=head<0,                    __freed_obj__ = 0, 
                    _if_conditional285) {
                        head+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 513))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional286=tail<0,                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        tail+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 516))->len+1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional287=head>tail,                    __freed_obj__ = 0, 
                    _if_conditional287) {
                        tmp_178=tail;
                        __freed_obj__ = 0;
                        tail=head;
                        __freed_obj__ = 0;
                        head=tmp_178;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional288=head<0,                    __freed_obj__ = 0, 
                    _if_conditional288) {
                        head=0;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional289=tail>((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 533))->len,                    __freed_obj__ = 0, 
                    _if_conditional289) {
                        tail=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 530))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional290=head==tail,                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        __result136__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result136__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional291=head==0&&tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 632))->len,                    __freed_obj__ = 0, 
                    _if_conditional291) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 539)));
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional292=head==0,                        __freed_obj__ = 0, 
                        _if_conditional292) {
                            it_179=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 542))->head;
                            __freed_obj__ = 0;
                            i_180=0;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_179!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional293=i_180<tail,                                __freed_obj__ = 0, 
                                _if_conditional293) {
                                    prev_it_181=it_179;
                                    __freed_obj__ = 0;
                                    it_179=((struct list_item$1sNodeph*)come_null_check(it_179, "./comelang2.h", 548))->next;
                                    __freed_obj__ = 0;
                                    i_180++;
                                    __freed_obj__ = 0;
                                    if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 553))->len--;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional294=i_180==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional294) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 556))->head=it_179;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 557))->head, "./comelang2.h", 557))->prev=((void*)0);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_179=((struct list_item$1sNodeph*)come_null_check(it_179, "./comelang2.h", 561))->next;
                                        __freed_obj__ = 0;
                                        i_180++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional295=tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 632))->len,                            __freed_obj__ = 0, 
                            _if_conditional295) {
                                it_182=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 567))->head;
                                __freed_obj__ = 0;
                                i_183=0;
                                __freed_obj__ = 0;
                                while(_while_condtional17=it_182!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional17) {
                                    if(_if_conditional296=i_183==head,                                    __freed_obj__ = 0, 
                                    _if_conditional296) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 571))->tail=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 571))->prev;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 572))->tail, "./comelang2.h", 572))->next=((void*)0);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional297=i_183>=head,                                    __freed_obj__ = 0, 
                                    _if_conditional297) {
                                        prev_it_184=it_182;
                                        __freed_obj__ = 0;
                                        it_182=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 578))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                        if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 583))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_182=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 586))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                it_185=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 592))->head;
                                __freed_obj__ = 0;
                                head_prev_it_186=((void*)0);
                                __freed_obj__ = 0;
                                tail_it_187=((void*)0);
                                __freed_obj__ = 0;
                                i_188=0;
                                __freed_obj__ = 0;
                                while(_while_condtional18=it_185!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional18) {
                                    if(_if_conditional298=i_188==head,                                    __freed_obj__ = 0, 
                                    _if_conditional298) {
                                        head_prev_it_186=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 601))->prev;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional299=i_188==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional299) {
                                        tail_it_187=it_185;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional300=i_188>=head&&i_188<tail,                                    __freed_obj__ = 0, 
                                    _if_conditional300) {
                                        prev_it_189=it_185;
                                        __freed_obj__ = 0;
                                        it_185=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 611))->next;
                                        __freed_obj__ = 0;
                                        i_188++;
                                        __freed_obj__ = 0;
                                        if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 616))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_185=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 619))->next;
                                        __freed_obj__ = 0;
                                        i_188++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional301=head_prev_it_186!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional301) {
                                    ((struct list_item$1sNodeph*)come_null_check(head_prev_it_186, "./comelang2.h", 625))->next=tail_it_187;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional302=tail_it_187!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional302) {
                                    ((struct list_item$1sNodeph*)come_null_check(tail_it_187, "./comelang2.h", 628))->prev=head_prev_it_186;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result137__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result137__;
                    __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
struct CVALUE* result_192;
struct CVALUE* __result138__;
_Bool _if_conditional306;
struct CVALUE* __result139__;
struct CVALUE* result_193;
struct CVALUE* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_192, 0, sizeof(struct CVALUE*));
memset(&result_193, 0, sizeof(struct CVALUE*));
            if(_if_conditional305=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional305) {
                __freed_obj__ = 0;
                memset(&result_192,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result138__ = __result_obj__ = result_192;
                __freed_obj__ = 0;
                return __result138__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 341))->head;
            __freed_obj__ = 0;
            if(_if_conditional306=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 347))->it,            __freed_obj__ = 0, 
            _if_conditional306) {
                __result139__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
                __freed_obj__ = 0;
                return __result139__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_193,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result140__ = __result_obj__ = result_193;
            __freed_obj__ = 0;
            return __result140__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result141__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
            __freed_obj__ = 0;
            return __result141__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional307;
struct CVALUE* result_195;
struct CVALUE* __result142__;
_Bool _if_conditional308;
struct CVALUE* __result143__;
struct CVALUE* result_196;
struct CVALUE* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_195, 0, sizeof(struct CVALUE*));
memset(&result_196, 0, sizeof(struct CVALUE*));
            if(_if_conditional307=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional307) {
                __freed_obj__ = 0;
                memset(&result_195,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result142__ = __result_obj__ = result_195;
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
            __freed_obj__ = 0;
            if(_if_conditional308=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 365))->it,            __freed_obj__ = 0, 
            _if_conditional308) {
                __result143__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
                __freed_obj__ = 0;
                return __result143__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_196,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result144__ = __result_obj__ = result_196;
            __freed_obj__ = 0;
            return __result144__;
            __freed_obj__ = 0;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result148__ = ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1077))->sline;
    __freed_obj__ = 0;
    return __result148__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value283;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
    __result149__ = __result_obj__ = ((char*)(right_value283=__builtin_string(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1082))->sname)));
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value284;
char* __dec_obj149;
void* right_value285;
struct list$1sNodeph* __dec_obj150;
void* right_value286;
struct sNode* __dec_obj151;
struct sLoadArrayNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1097))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1097))->sline;
    __freed_obj__ = 0;
    __dec_obj149=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1098))->sname;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1098))->sname=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1098))->sname))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value284;
    __freed_obj__ = 0;
    __dec_obj150=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1100))->mArrayNum;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1100))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value285=list$1sNodephp_clone(array_num))));
    if(__dec_obj150) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value285;
    __freed_obj__ = 0;
    __dec_obj151=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1102))->mLeft;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1102))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(left))));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value286;
    __freed_obj__ = 0;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1103))->mQuote=quote;
    __freed_obj__ = 0;
    __result150__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadArrayNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value287;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value287, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value287=__builtin_string("sLoadArrayNode")));
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_200;
struct list$1sNodeph* array_num_nodes_201;
_Bool _if_conditional328;
_Bool __result153__;
void* right_value288;
struct CVALUE* left_value_202;
void* right_value289;
struct sType* left_type_203;
void* right_value290;
void* right_value291;
struct list$1CVALUEph* array_num_204;
struct list$1sNodeph* o2_saved_205;
struct sNode* it_206;
_Bool _for_condtionalA11;
_Bool _if_conditional329;
_Bool __result154__;
void* right_value292;
struct CVALUE* c_value_207;
void* right_value293;
struct sType* type_208;
char* fun_name_209;
_Bool calling_fun_210;
_Bool _if_conditional330;
void* right_value294;
_Bool _if_conditional331;
void* right_value295;
struct CVALUE* come_value_211;
void* right_value296;
void* right_value297;
struct buffer* buf_212;
struct list$1CVALUEph* o2_saved_213;
struct CVALUE* it_214;
_Bool _for_condtionalA12;
void* right_value298;
void* right_value299;
char* left_value_code_215;
void* right_value300;
char* __dec_obj152;
void* right_value301;
struct sType* result_type_216;
_Bool _if_conditional332;
struct sType* __dec_obj153;
_Bool _if_conditional333;
int n_217;
_Bool _if_conditional334;
void* right_value302;
struct sType* __dec_obj154;
_Bool _if_conditional335;
void* right_value303;
struct sType* __dec_obj155;
_Bool _if_conditional336;
int i_218;
_Bool _for_condtionalA13;
_Bool _if_conditional337;
_Bool _if_conditional338;
_Bool _if_conditional339;
_Bool _if_conditional340;
void* right_value304;
struct sType* __dec_obj156;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_200, 0, sizeof(struct sNode*));
memset(&array_num_nodes_201, 0, sizeof(struct list$1sNodeph*));
memset(&right_value288, 0, sizeof(void*));
memset(&left_value_202, 0, sizeof(struct CVALUE*));
memset(&right_value289, 0, sizeof(void*));
memset(&left_type_203, 0, sizeof(struct sType*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&array_num_204, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_205, 0, sizeof(struct list$1sNodeph*));
memset(&it_206, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&c_value_207, 0, sizeof(struct CVALUE*));
memset(&right_value293, 0, sizeof(void*));
memset(&type_208, 0, sizeof(struct sType*));
memset(&fun_name_209, 0, sizeof(char*));
memset(&calling_fun_210, 0, sizeof(_Bool));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&come_value_211, 0, sizeof(struct CVALUE*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&buf_212, 0, sizeof(struct buffer*));
memset(&o2_saved_213, 0, sizeof(struct list$1CVALUEph*));
memset(&it_214, 0, sizeof(struct CVALUE*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
memset(&left_value_code_215, 0, sizeof(char*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&result_type_216, 0, sizeof(struct sType*));
memset(&n_217, 0, sizeof(int));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&i_218, 0, sizeof(int));
memset(&right_value304, 0, sizeof(void*));
    left_200=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1120))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_201=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1121))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional328=!((struct sNode*)come_null_check(left_200, "18field.c", 1127))->compile(((struct sNode*)come_null_check(left_200, "18field.c", 1127))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional328) {
        __result153__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result153__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value288;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value289=sType_clone(((struct CVALUE*)come_null_check(left_value_202, "18field.c", 1130))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value289;
    __freed_obj__ = 0;
    array_num_204=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value291=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value290=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1132))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value290);
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value290;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value291);
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value291;
    __freed_obj__ = 0;
    for(
    o2_saved_205=(array_num_nodes_201),it_206=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_205), "18field.c", 1145))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_205), "18field.c", 1145))) ,    __freed_obj__ = 0, 
    _for_condtionalA11;    it_206=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_205), "18field.c", 1145))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional329=!((struct sNode*)come_null_check(it_206, "18field.c", 1139))->compile(((struct sNode*)come_null_check(it_206, "18field.c", 1139))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional329) {
            __result154__ = (_Bool)0;
            if(left_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_204 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_204, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result154__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value292;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_204, "18field.c", 1142)),(struct CVALUE*)come_increment_ref_count(c_value_207));
        __freed_obj__ = 0;
        if(c_value_207 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_208=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(((struct CVALUE*)come_null_check(left_value_202, "18field.c", 1145))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value293);
    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value293;
    __freed_obj__ = 0;
    fun_name_209="operator_load_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional330=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1156))->mQuote,    __freed_obj__ = 0, 
    _if_conditional330) {
        calling_fun_210=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        calling_fun_210=operator_overload_fun(type_208,fun_name_209,left_value_202,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1153),((struct optional$2CVALUEphbool*)(right_value294=list$1CVALUEphp_operator_load_element(array_num_204,0))))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value294;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional331=!calling_fun_210,    __freed_obj__ = 0, 
    _if_conditional331) {
        come_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1157))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value295;
        __freed_obj__ = 0;
        buf_212=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value297=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value296=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1159))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value296);
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value296;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value297);
        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value297;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_212, "18field.c", 1161)),((struct CVALUE*)come_null_check(left_value_202, "18field.c", 1161))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_213=(struct list$1CVALUEph*)come_increment_ref_count((array_num_204)),it_214=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_213), "18field.c", 1167))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_213), "18field.c", 1167))) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_214=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_213), "18field.c", 1167))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_212, "18field.c", 1164)),((char*)(right_value298=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_214, "18field.c", 1164))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value298;
            __freed_obj__ = 0;
        }
        if(o2_saved_213 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_213, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_215=(char*)come_increment_ref_count(((char*)(right_value299=buffer_to_string(((struct buffer*)come_null_check(buf_212, "18field.c", 1167))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value299);
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value299;
        __freed_obj__ = 0;
        __dec_obj152=((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1169))->c_value;
        ((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1169))->c_value=(char*)come_increment_ref_count(((char*)(right_value300=xsprintf("%s",left_value_code_215))));
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value300);
        if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value300;
        __freed_obj__ = 0;
        result_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(left_type_203))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value301;
        __freed_obj__ = 0;
        if(_if_conditional332=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1177))->mOriginalLoadVarType, "18field.c", 1177))->v1,        __freed_obj__ = 0, 
        _if_conditional332) {
            __dec_obj153=result_type_216;
            result_type_216=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1174))->mOriginalLoadVarType, "18field.c", 1174))->v1);
            if(__dec_obj153) { come_call_finalizer(sType_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional333=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1211))->mArrayNum, "18field.c", 1211)))>0,        __freed_obj__ = 0, 
        _if_conditional333) {
            n_217=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1178))->mArrayNum, "18field.c", 1178)))-list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_204, "18field.c", 1178)));
            __freed_obj__ = 0;
            if(_if_conditional334=n_217==0,            __freed_obj__ = 0, 
            _if_conditional334) {
                __dec_obj154=result_type_216;
                result_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_clone(left_type_203))));
                if(__dec_obj154) { come_call_finalizer(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value302;
                __freed_obj__ = 0;
                if(_if_conditional335=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_203, "18field.c", 1185))->mOriginalLoadVarType, "18field.c", 1185))->v1,                __freed_obj__ = 0, 
                _if_conditional335) {
                    __dec_obj155=result_type_216;
                    result_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_203, "18field.c", 1183))->mOriginalLoadVarType, "18field.c", 1183))->v1))));
                    if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
                    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value303;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1185))->mArrayNum, "18field.c", 1185)));
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional336=n_217>0,                __freed_obj__ = 0, 
                _if_conditional336) {
                    for(
                    i_218=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA13=                    i_218<n_217 ,                    __freed_obj__ = 0, 
                    _for_condtionalA13;                    i_218++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1189))->mArrayNum, "18field.c", 1189)),-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional337=n_217<0,                    __freed_obj__ = 0, 
                    _if_conditional337) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1193))->mArrayNum, "18field.c", 1193)));
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_216, "18field.c", 1194))->mPointerNum+=n_217;
                        __freed_obj__ = 0;
                        if(_if_conditional338=((struct sType*)come_null_check(result_type_216, "18field.c", 1199))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            ((struct sType*)come_null_check(result_type_216, "18field.c", 1197))->mPointerNum=0;
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
            if(_if_conditional339=((struct sType*)come_null_check(result_type_216, "18field.c", 1209))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional339) {
                ((struct sType*)come_null_check(result_type_216, "18field.c", 1203))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_204, "18field.c", 1203)));
                __freed_obj__ = 0;
                if(_if_conditional340=((struct sType*)come_null_check(result_type_216, "18field.c", 1208))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional340) {
                    ((struct sType*)come_null_check(result_type_216, "18field.c", 1206))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj156=((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1211))->type;
        ((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1211))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(result_type_216))));
        if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value304;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1212))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1214))->stack, "18field.c", 1214)),(struct CVALUE*)come_increment_ref_count(come_value_211));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1216))->c_value);
        __freed_obj__ = 0;
        if(come_value_211 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_212 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_212, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_215 && !__freed_obj__) { left_value_code_215 = come_decrement_ref_count(left_value_code_215, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result155__ = (_Bool)1;
    if(left_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_204 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
    if(left_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_204 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result156__ = ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1224))->sline;
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value305;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value305, 0, sizeof(void*));
    __result157__ = __result_obj__ = ((char*)(right_value305=__builtin_string(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1229))->sname)));
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value306;
char* __dec_obj157;
void* right_value307;
struct list$1sNodeph* __dec_obj158;
void* right_value308;
struct sNode* __dec_obj159;
struct sLoadRangeArrayNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1244))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1244))->sline;
    __freed_obj__ = 0;
    __dec_obj157=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1245))->sname;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1245))->sname=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1245))->sname))));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value306;
    __freed_obj__ = 0;
    __dec_obj158=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1247))->mArrayNum;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1247))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value307=list$1sNodephp_clone(array_num))));
    if(__dec_obj158) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value307;
    __freed_obj__ = 0;
    __dec_obj159=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1249))->mLeft;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1249))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(left))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value308;
    __freed_obj__ = 0;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1250))->mQuote=quote;
    __freed_obj__ = 0;
    __result158__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sLoadRangeArrayNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result159__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value309;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
    __result160__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sLoadRangeArrayNode")));
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_219;
struct list$1sNodeph* array_num_nodes_220;
_Bool _if_conditional344;
_Bool __result161__;
void* right_value310;
struct CVALUE* left_value_221;
void* right_value311;
struct sType* left_type_222;
void* right_value312;
void* right_value313;
struct list$1CVALUEph* array_num_223;
struct list$1sNodeph* o2_saved_224;
struct sNode* it_225;
_Bool _for_condtionalA14;
_Bool _if_conditional345;
_Bool __result162__;
void* right_value314;
struct CVALUE* c_value_226;
void* right_value315;
struct sType* type_227;
char* fun_name_228;
_Bool calling_fun_229;
_Bool _if_conditional346;
void* right_value316;
void* right_value317;
_Bool _if_conditional347;
void* right_value318;
struct CVALUE* come_value_230;
void* right_value319;
void* right_value320;
struct buffer* buf_231;
struct list$1CVALUEph* o2_saved_232;
struct CVALUE* it_233;
_Bool _for_condtionalA15;
void* right_value321;
void* right_value322;
char* left_value_code_234;
void* right_value323;
char* __dec_obj160;
void* right_value324;
struct sType* result_type_235;
_Bool _if_conditional348;
struct sType* __dec_obj161;
_Bool _if_conditional349;
int n_236;
_Bool _if_conditional350;
void* right_value325;
struct sType* __dec_obj162;
_Bool _if_conditional351;
void* right_value326;
struct sType* __dec_obj163;
_Bool _if_conditional352;
int i_237;
_Bool _for_condtionalA16;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value327;
struct sType* __dec_obj164;
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_219, 0, sizeof(struct sNode*));
memset(&array_num_nodes_220, 0, sizeof(struct list$1sNodeph*));
memset(&right_value310, 0, sizeof(void*));
memset(&left_value_221, 0, sizeof(struct CVALUE*));
memset(&right_value311, 0, sizeof(void*));
memset(&left_type_222, 0, sizeof(struct sType*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&array_num_223, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_224, 0, sizeof(struct list$1sNodeph*));
memset(&it_225, 0, sizeof(struct sNode*));
memset(&right_value314, 0, sizeof(void*));
memset(&c_value_226, 0, sizeof(struct CVALUE*));
memset(&right_value315, 0, sizeof(void*));
memset(&type_227, 0, sizeof(struct sType*));
memset(&fun_name_228, 0, sizeof(char*));
memset(&calling_fun_229, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&come_value_230, 0, sizeof(struct CVALUE*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&buf_231, 0, sizeof(struct buffer*));
memset(&o2_saved_232, 0, sizeof(struct list$1CVALUEph*));
memset(&it_233, 0, sizeof(struct CVALUE*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&left_value_code_234, 0, sizeof(char*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&result_type_235, 0, sizeof(struct sType*));
memset(&n_236, 0, sizeof(int));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&i_237, 0, sizeof(int));
memset(&right_value327, 0, sizeof(void*));
    left_219=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1267))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_220=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1268))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional344=!((struct sNode*)come_null_check(left_219, "18field.c", 1274))->compile(((struct sNode*)come_null_check(left_219, "18field.c", 1274))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional344) {
        __result161__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result161__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_221=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value310;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(((struct CVALUE*)come_null_check(left_value_221, "18field.c", 1277))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value311;
    __freed_obj__ = 0;
    array_num_223=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value313=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value312=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1279))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value312;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value313);
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value313;
    __freed_obj__ = 0;
    for(
    o2_saved_224=(array_num_nodes_220),it_225=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_224), "18field.c", 1292))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_224), "18field.c", 1292))) ,    __freed_obj__ = 0, 
    _for_condtionalA14;    it_225=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_224), "18field.c", 1292))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional345=!((struct sNode*)come_null_check(it_225, "18field.c", 1286))->compile(((struct sNode*)come_null_check(it_225, "18field.c", 1286))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional345) {
            __result162__ = (_Bool)0;
            if(left_value_221 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_223 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result162__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value314=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value314;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_223, "18field.c", 1289)),(struct CVALUE*)come_increment_ref_count(c_value_226));
        __freed_obj__ = 0;
        if(c_value_226 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value315=sType_clone(((struct CVALUE*)come_null_check(left_value_221, "18field.c", 1292))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value315);
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value315;
    __freed_obj__ = 0;
    fun_name_228="operator_load_range_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional346=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1303))->mQuote,    __freed_obj__ = 0, 
    _if_conditional346) {
        calling_fun_229=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        come_clear_stackframe();
        come_clear_stackframe();
        calling_fun_229=operator_overload_fun2(type_227,fun_name_228,left_value_221,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1300),((struct optional$2CVALUEphbool*)(right_value316=list$1CVALUEphp_operator_load_element(array_num_223,0))))),optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1300),((struct optional$2CVALUEphbool*)(right_value317=list$1CVALUEphp_operator_load_element(array_num_223,1))))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value316;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value317);
        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value317;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional347=!calling_fun_229,    __freed_obj__ = 0, 
    _if_conditional347) {
        come_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1304))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value318;
        __freed_obj__ = 0;
        buf_231=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value320=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1306))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value319);
        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value319;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value320;
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(buf_231, "18field.c", 1308)),((struct CVALUE*)come_null_check(left_value_221, "18field.c", 1308))->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_232=(struct list$1CVALUEph*)come_increment_ref_count((array_num_223)),it_233=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "18field.c", 1314))) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        !list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "18field.c", 1314))) ,        __freed_obj__ = 0, 
        _for_condtionalA15;        it_233=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "18field.c", 1314))) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(((struct buffer*)come_null_check(buf_231, "18field.c", 1311)),((char*)(right_value321=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_233, "18field.c", 1311))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
            if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value321;
            __freed_obj__ = 0;
        }
        if(o2_saved_232 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_232, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_234=(char*)come_increment_ref_count(((char*)(right_value322=buffer_to_string(((struct buffer*)come_null_check(buf_231, "18field.c", 1314))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value322);
        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value322;
        __freed_obj__ = 0;
        __dec_obj160=((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1316))->c_value;
        ((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1316))->c_value=(char*)come_increment_ref_count(((char*)(right_value323=xsprintf("%s",left_value_code_234))));
        if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value323;
        __freed_obj__ = 0;
        result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value324=sType_clone(left_type_222))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value324;
        __freed_obj__ = 0;
        if(_if_conditional348=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1324))->mOriginalLoadVarType, "18field.c", 1324))->v1,        __freed_obj__ = 0, 
        _if_conditional348) {
            __dec_obj161=result_type_235;
            result_type_235=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1321))->mOriginalLoadVarType, "18field.c", 1321))->v1);
            if(__dec_obj161) { come_call_finalizer(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional349=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1358))->mArrayNum, "18field.c", 1358)))>0,        __freed_obj__ = 0, 
        _if_conditional349) {
            n_236=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1325))->mArrayNum, "18field.c", 1325)))-list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_223, "18field.c", 1325)));
            __freed_obj__ = 0;
            if(_if_conditional350=n_236==0,            __freed_obj__ = 0, 
            _if_conditional350) {
                __dec_obj162=result_type_235;
                result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(left_type_222))));
                if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value325;
                __freed_obj__ = 0;
                if(_if_conditional351=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_222, "18field.c", 1332))->mOriginalLoadVarType, "18field.c", 1332))->v1,                __freed_obj__ = 0, 
                _if_conditional351) {
                    __dec_obj163=result_type_235;
                    result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_222, "18field.c", 1330))->mOriginalLoadVarType, "18field.c", 1330))->v1))));
                    if(__dec_obj163) { come_call_finalizer(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
                    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value326;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1332))->mArrayNum, "18field.c", 1332)));
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional352=n_236>0,                __freed_obj__ = 0, 
                _if_conditional352) {
                    for(
                    i_237=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA16=                    i_237<n_236 ,                    __freed_obj__ = 0, 
                    _for_condtionalA16;                    i_237++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1336))->mArrayNum, "18field.c", 1336)),-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional353=n_236<0,                    __freed_obj__ = 0, 
                    _if_conditional353) {
                        list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1340))->mArrayNum, "18field.c", 1340)));
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_235, "18field.c", 1341))->mPointerNum+=n_236;
                        __freed_obj__ = 0;
                        if(_if_conditional354=((struct sType*)come_null_check(result_type_235, "18field.c", 1346))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional354) {
                            ((struct sType*)come_null_check(result_type_235, "18field.c", 1344))->mPointerNum=0;
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
            if(_if_conditional355=((struct sType*)come_null_check(result_type_235, "18field.c", 1356))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional355) {
                ((struct sType*)come_null_check(result_type_235, "18field.c", 1350))->mPointerNum-=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_223, "18field.c", 1350)));
                __freed_obj__ = 0;
                if(_if_conditional356=((struct sType*)come_null_check(result_type_235, "18field.c", 1355))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional356) {
                    ((struct sType*)come_null_check(result_type_235, "18field.c", 1353))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj164=((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1358))->type;
        ((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1358))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value327=sType_clone(result_type_235))));
        if(__dec_obj164) { come_call_finalizer(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value327;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1359))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1361))->stack, "18field.c", 1361)),(struct CVALUE*)come_increment_ref_count(come_value_230));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1363))->c_value);
        __freed_obj__ = 0;
        if(come_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_231 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_231, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_234 && !__freed_obj__) { left_value_code_234 = come_decrement_ref_count(left_value_code_234, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result163__ = (_Bool)1;
    if(left_value_221 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_223 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_227 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
    if(left_value_221 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_223 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_227 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result164__ = ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1371))->sline;
    __freed_obj__ = 0;
    return __result164__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value328;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value328, 0, sizeof(void*));
    __result165__ = __result_obj__ = ((char*)(right_value328=__builtin_string(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1376))->sname)));
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result166__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    err_msg(info,"parse_method_call is failed");
    __freed_obj__ = 0;
    exit(2);
    __freed_obj__ = 0;
    __result167__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
}

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional357;
char* p_238;
int sline_239;
_Bool _if_conditional358;
void* right_value329;
char* word_240;
_Bool _if_conditional359;
void* right_value330;
void* right_value331;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value335;
struct sNode* __dec_obj167;
void* right_value336;
void* right_value337;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value341;
struct sNode* __dec_obj170;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value342;
void* right_value343;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value347;
struct sNode* __dec_obj173;
struct sNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_238, 0, sizeof(char*));
memset(&sline_239, 0, sizeof(int));
memset(&right_value329, 0, sizeof(void*));
memset(&word_240, 0, sizeof(char*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
    if(_if_conditional357=(*((struct sInfo*)come_null_check(info, "18field.c", 1430))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1430))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1430))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1430))->p+1)==62),    __freed_obj__ = 0, 
    _if_conditional357) {
        p_238=((struct sInfo*)come_null_check(info, "18field.c", 1395))->p;
        __freed_obj__ = 0;
        sline_239=((struct sInfo*)come_null_check(info, "18field.c", 1396))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "18field.c", 1398))->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional358=xisalpha(*((struct sInfo*)come_null_check(info, "18field.c", 1421))->p)||*((struct sInfo*)come_null_check(info, "18field.c", 1421))->p==95,        __freed_obj__ = 0, 
        _if_conditional358) {
            come_clear_stackframe();
            word_240=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1402),((struct optional$2charphbool*)(right_value329=parse_word(info))))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value329;
            __freed_obj__ = 0;
            if(_if_conditional359=(string_operator_equals(word_240,"expect")||string_operator_equals(word_240,"value")||string_operator_equals(word_240,"catch"))&&(*((struct sInfo*)come_null_check(info, "18field.c", 1414))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1414))->p==123),            __freed_obj__ = 0, 
            _if_conditional359) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1405))->p=p_238;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1406))->sline=sline_239;
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "18field.c", 1409))->p=p_238;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1410))->sline=sline_239;
                __freed_obj__ = 0;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1412);
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value331=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value330=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1412)))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj167=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=_inf_value2)));
                if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
                if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value330;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value331);
                if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value331;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value335);
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value335;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_240 && !__freed_obj__) { word_240 = come_decrement_ref_count(word_240, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "18field.c", 1416))->p=p_238;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1417))->sline=sline_239;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1419);
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value337=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value336=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1419)))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj170=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value341=_inf_value3)));
            if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
            if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value336;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value337);
            if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value337;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value341);
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value341;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional372=*((struct sInfo*)come_null_check(info, "18field.c", 1430))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1430))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional372) {
        }
        else {
            if(_if_conditional373=node==((void*)0),            __freed_obj__ = 0, 
            _if_conditional373) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1427);
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value343=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value342=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1427)))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj173=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=_inf_value4)));
                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value342;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value343);
                if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value343;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value347);
                if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value347;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result174__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result174__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional374;
_Bool _if_conditional375;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional374=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional374) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional375=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 2))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional375) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sExceptionGetValueNode* sExceptionGetValueNode_clone(struct sExceptionGetValueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional376;
struct sExceptionGetValueNode* __result172__;
void* right_value344;
struct sExceptionGetValueNode* result_243;
_Bool _if_conditional377;
void* right_value345;
struct sNode* __dec_obj171;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value346;
char* __dec_obj172;
struct sExceptionGetValueNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value344, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct sExceptionGetValueNode*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
                    if(_if_conditional376=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional376) {
                        __result172__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result172__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_243=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value344=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value344;
                    __freed_obj__ = 0;
                    if(_if_conditional377=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional377) {
                        __dec_obj171=((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 4))->mLeft;
                        ((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNode_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 4))->mLeft))));
                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value345;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional378=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional378) {
                        ((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 5))->sline=((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional379=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 7))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional379) {
                        __dec_obj172=((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 6))->sname;
                        ((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value346=string_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 6))->sname))));
                        if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value346;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result173__ = __result_obj__ = result_243;
                    if(result_243 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result173__;
                    __freed_obj__ = 0;
                    if(result_243 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional19;
_Bool _if_conditional380;
_Bool quote_244;
_Bool _if_conditional381;
_Bool range_245;
void* right_value348;
void* right_value349;
struct list$1sNodeph* array_num_246;
_Bool _while_condtional20;
_Bool _if_conditional382;
void* right_value350;
struct sNode* node_247;
_Bool _if_conditional385;
void* right_value354;
struct sNode* node2_251;
void* right_value355;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value356;
void* right_value357;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value362;
struct sNode* __dec_obj180;
_Bool _if_conditional398;
void* right_value363;
struct sNode* right_node_254;
void* right_value364;
void* right_value365;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value371;
struct sNode* __dec_obj185;
void* right_value372;
void* right_value373;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value378;
struct sNode* __dec_obj189;
void* right_value379;
struct sNode* __dec_obj190;
_Bool _if_conditional419;
void* right_value380;
void* right_value381;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value385;
struct sNode* __dec_obj193;
_Bool _if_conditional427;
_Bool _if_conditional428;
void* right_value386;
void* right_value387;
void* right_value388;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value392;
struct sNode* __dec_obj196;
void* right_value393;
char* field_name_259;
_Bool _if_conditional436;
void* right_value394;
struct sNode* right_node_260;
void* right_value395;
void* right_value396;
struct sNode* _inf_value10;
struct sStoreFieldNode* _inf_obj_value10;
void* right_value402;
struct sNode* __dec_obj201;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value403;
void* right_value404;
struct sNode* __dec_obj202;
_Bool _if_conditional449;
void* right_value405;
void* right_value406;
struct sNode* __dec_obj203;
void* right_value407;
void* right_value408;
struct sNode* __dec_obj204;
void* right_value409;
void* right_value410;
struct sNode* _inf_value11;
struct sLoadFieldNode* _inf_obj_value11;
void* right_value415;
struct sNode* __dec_obj208;
void* right_value416;
struct sNode* node2_263;
_Bool _if_conditional458;
struct sNode* __dec_obj209;
struct sNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&quote_244, 0, sizeof(_Bool));
memset(&range_245, 0, sizeof(_Bool));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&array_num_246, 0, sizeof(struct list$1sNodeph*));
memset(&right_value350, 0, sizeof(void*));
memset(&node_247, 0, sizeof(struct sNode*));
memset(&right_value354, 0, sizeof(void*));
memset(&node2_251, 0, sizeof(struct sNode*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_node_254, 0, sizeof(struct sNode*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&field_name_259, 0, sizeof(char*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_node_260, 0, sizeof(struct sNode*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&node2_263, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        if(_if_conditional380=*((struct sInfo*)come_null_check(info, "18field.c", 1570))->p==92&&*(((struct sInfo*)come_null_check(info, "18field.c", 1570))->p+1)==91||*((struct sInfo*)come_null_check(info, "18field.c", 1570))->p==91,        __freed_obj__ = 0, 
        _if_conditional380) {
            quote_244=*((struct sInfo*)come_null_check(info, "18field.c", 1437))->p==92;
            __freed_obj__ = 0;
            if(_if_conditional381=quote_244,            __freed_obj__ = 0, 
            _if_conditional381) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1439))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            range_245=(_Bool)0;
            __freed_obj__ = 0;
            array_num_246=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value349=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value348=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1443))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
            if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value348;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value349);
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value349;
            __freed_obj__ = 0;
            while(_while_condtional20=1,            __freed_obj__ = 0, 
            _while_condtional20) {
                if(_if_conditional382=*((struct sInfo*)come_null_check(info, "18field.c", 1485))->p==91,                __freed_obj__ = 0, 
                _if_conditional382) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1446))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    skip_pointer_attribute(info);
                    __freed_obj__ = 0;
                    node_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value350;
                    __freed_obj__ = 0;
                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_246, "18field.c", 1453)),(struct sNode*)come_increment_ref_count(node_247));
                    __freed_obj__ = 0;
                    if(_if_conditional385=*((struct sInfo*)come_null_check(info, "18field.c", 1481))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1481))->p+1)==46,                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1456))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        skip_pointer_attribute(info);
                        __freed_obj__ = 0;
                        node2_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value354;
                        __freed_obj__ = 0;
                        list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_246, "18field.c", 1463)),(struct sNode*)come_increment_ref_count(node2_251));
                        __freed_obj__ = 0;
                        come_clear_stackframe();
                        optional$2intbool_value((come_push_stackframe("18field.c", 1465),((struct optional$2intbool*)(right_value355=expected_next_character(93,info)))));
                        come_pop_stackframe();
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value355);
                        if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value355;
                        __freed_obj__ = 0;
                        range_245=(_Bool)1;
                        __freed_obj__ = 0;
                        if(node2_251 && !__freed_obj__) { node2_251 = come_decrement_ref_count(node2_251, ((struct sNode*)node2_251)->finalize, ((struct sNode*)node2_251)->_protocol_obj, 0, 0, 0); } 
                        if(node_247 && !__freed_obj__) { node_247 = come_decrement_ref_count(node_247, ((struct sNode*)node_247)->finalize, ((struct sNode*)node_247)->_protocol_obj, 0, 0, 0); } 
                        break;
                        __freed_obj__ = 0;
                        if(node2_251 && !__freed_obj__) { node2_251 = come_decrement_ref_count(node2_251, ((struct sNode*)node2_251)->finalize, ((struct sNode*)node2_251)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional387=*((struct sInfo*)come_null_check(info, "18field.c", 1480))->p==93,                        __freed_obj__ = 0, 
                        _if_conditional387) {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1473))->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        else {
                            err_msg(info,"require ] character");
                            __freed_obj__ = 0;
                            exit(2);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(node_247 && !__freed_obj__) { node_247 = come_decrement_ref_count(node_247, ((struct sNode*)node_247)->finalize, ((struct sNode*)node_247)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional388=range_245,            __freed_obj__ = 0, 
            _if_conditional388) {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1488);
                _inf_obj_value5=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value357=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value356=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1488)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_246),quote_244,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
                _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
                _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
                _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
                _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
                _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
                _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
                __dec_obj180=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=_inf_value5)));
                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value356;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value357);
                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value357;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value362);
                if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value362;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional398=*((struct sInfo*)come_null_check(info, "18field.c", 1509))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1509))->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional398) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1493))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    right_node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                    if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value363;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1502);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreArrayNode*)(right_value365=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value364=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1502)))),node,(struct sNode*)come_increment_ref_count(right_node_254),(struct list$1sNodeph*)come_increment_ref_count(array_num_246),quote_244,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj185=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value6)));
                    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value364);
                    if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value364;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value365);
                    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value365;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value371);
                    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value371;
                    __freed_obj__ = 0;
                    if(right_node_254 && !__freed_obj__) { right_node_254 = come_decrement_ref_count(right_node_254, ((struct sNode*)right_node_254)->finalize, ((struct sNode*)right_node_254)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1505);
                    _inf_obj_value7=come_increment_ref_count(((struct sLoadArrayNode*)(right_value373=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value372=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1505)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_246),quote_244,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj189=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=_inf_value7)));
                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value372;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value373);
                    if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value373;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value378);
                    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value378;
                    __freed_obj__ = 0;
                    __dec_obj190=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                    if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value379);
                    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value379;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(array_num_246 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_246, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional419=*((struct sInfo*)come_null_check(info, "18field.c", 1570))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1570))->p+1)!=61,            __freed_obj__ = 0, 
            _if_conditional419) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1511))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1516);
                _inf_obj_value8=come_increment_ref_count(((struct sNullCheckNode*)(right_value381=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value380=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1516)))),node,(_Bool)0,info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                _inf_value8->clone=(void*)sNullCheckNode_clone;
                _inf_value8->compile=(void*)sNullCheckNode_compile;
                _inf_value8->sline=(void*)sNullCheckNode_sline;
                _inf_value8->sname=(void*)sNullCheckNode_sname;
                _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                _inf_value8->kind=(void*)sNullCheckNode_kind;
                __dec_obj193=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=_inf_value8)));
                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value380;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value381);
                if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value381;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value385);
                if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value385;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional427=(*((struct sInfo*)come_null_check(info, "18field.c", 1570))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1570))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1570))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1570))->p+1)==62),                __freed_obj__ = 0, 
                _if_conditional427) {
                    if(_if_conditional428=*((struct sInfo*)come_null_check(info, "18field.c", 1528))->p==46,                    __freed_obj__ = 0, 
                    _if_conditional428) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1520))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1524))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1528);
                    _inf_obj_value9=come_increment_ref_count(((struct sNullCheckNode*)(right_value388=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value386=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1528)))),((struct sNode*)(right_value387=sNode_clone(node))),(_Bool)1,info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value9->clone=(void*)sNullCheckNode_clone;
                    _inf_value9->compile=(void*)sNullCheckNode_compile;
                    _inf_value9->sline=(void*)sNullCheckNode_sline;
                    _inf_value9->sname=(void*)sNullCheckNode_sname;
                    _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                    _inf_value9->kind=(void*)sNullCheckNode_kind;
                    __dec_obj196=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=_inf_value9)));
                    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value386;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value387);
                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value387;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value388);
                    if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value388;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value392);
                    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value392;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    field_name_259=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1532),((struct optional$2charphbool*)(right_value393=parse_word(info))))));
                    come_pop_stackframe();
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value393);
                    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value393;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    if(_if_conditional436=*((struct sInfo*)come_null_check(info, "18field.c", 1560))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1560))->p+1)!=61,                    __freed_obj__ = 0, 
                    _if_conditional436) {
                        ((struct sInfo*)come_null_check(info, "18field.c", 1537))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        right_node_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value394);
                        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value394;
                        __freed_obj__ = 0;
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1544);
                        _inf_obj_value10=come_increment_ref_count(((struct sStoreFieldNode*)(right_value396=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value395=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1544)))),node,(struct sNode*)come_increment_ref_count(right_node_260),(char*)come_increment_ref_count(field_name_259),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sStoreFieldNode_finalize;
                        _inf_value10->clone=(void*)sStoreFieldNode_clone;
                        _inf_value10->compile=(void*)sStoreFieldNode_compile;
                        _inf_value10->sline=(void*)sStoreFieldNode_sline;
                        _inf_value10->sname=(void*)sStoreFieldNode_sname;
                        _inf_value10->terminated=(void*)sStoreFieldNode_terminated;
                        _inf_value10->kind=(void*)sStoreFieldNode_kind;
                        __dec_obj201=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=_inf_value10)));
                        if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value395);
                        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value395;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value396);
                        if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value396;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value402);
                        if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value402;
                        __freed_obj__ = 0;
                        if(right_node_260 && !__freed_obj__) { right_node_260 = come_decrement_ref_count(right_node_260, ((struct sNode*)right_node_260)->finalize, ((struct sNode*)right_node_260)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional447=*((struct sInfo*)come_null_check(info, "18field.c", 1560))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1560))->p==123||(*((struct sInfo*)come_null_check(info, "18field.c", 1560))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1560))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "18field.c", 1560))->p+2)==40),                        __freed_obj__ = 0, 
                        _if_conditional447) {
                            if(_if_conditional448=string_operator_equals(field_name_259,"if"),                            __freed_obj__ = 0, 
                            _if_conditional448) {
                                __dec_obj202=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNode_clone(node)))),info))));
                                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                                if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { right_value403 = come_decrement_ref_count(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value403;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value404);
                                if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[1] = right_value404;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional449=string_operator_equals(field_name_259,"elif"),                                __freed_obj__ = 0, 
                                _if_conditional449) {
                                    __dec_obj203=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(node)))),info))));
                                    if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                                    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value405;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
                                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[1] = right_value406;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj204=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_259),info))));
                                    if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                                    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value407;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value408);
                                    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[1] = right_value408;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1558);
                            _inf_obj_value11=come_increment_ref_count(((struct sLoadFieldNode*)(right_value410=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value409=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1558)))),node,(char*)come_increment_ref_count(field_name_259),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sLoadFieldNode_finalize;
                            _inf_value11->clone=(void*)sLoadFieldNode_clone;
                            _inf_value11->compile=(void*)sLoadFieldNode_compile;
                            _inf_value11->sline=(void*)sLoadFieldNode_sline;
                            _inf_value11->sname=(void*)sLoadFieldNode_sname;
                            _inf_value11->terminated=(void*)sLoadFieldNode_terminated;
                            _inf_value11->kind=(void*)sLoadFieldNode_kind;
                            __dec_obj208=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=_inf_value11)));
                            if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value409);
                            if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value409;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value410);
                            if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value410;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value415);
                            if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value415;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(field_name_259 && !__freed_obj__) { field_name_259 = come_decrement_ref_count(field_name_259, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    node2_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value416;
                    __freed_obj__ = 0;
                    if(_if_conditional458=node2_263==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional458) {
                        if(node2_263 && !__freed_obj__) { node2_263 = come_decrement_ref_count(node2_263, ((struct sNode*)node2_263)->finalize, ((struct sNode*)node2_263)->_protocol_obj, 0, 0, 0); } 
                        break;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj209=node;
                    node=(struct sNode*)come_increment_ref_count(node2_263);
                    if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    if(node2_263 && !__freed_obj__) { node2_263 = come_decrement_ref_count(node2_263, ((struct sNode*)node2_263)->finalize, ((struct sNode*)node2_263)->_protocol_obj, 0, 0, 0); } 
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result192__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result192__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional383;
void* right_value351;
struct list_item$1sNodeph* litem_248;
struct sNode* __dec_obj174;
_Bool _if_conditional384;
void* right_value352;
struct list_item$1sNodeph* litem_249;
struct sNode* __dec_obj175;
void* right_value353;
struct list_item$1sNodeph* litem_250;
struct sNode* __dec_obj176;
struct list$1sNodeph* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value351, 0, sizeof(void*));
memset(&litem_248, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value352, 0, sizeof(void*));
memset(&litem_249, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value353, 0, sizeof(void*));
memset(&litem_250, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional383=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 307))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional383) {
                            litem_248=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value351=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 277))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
                            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value351;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_248, "./comelang2.h", 279))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_248, "./comelang2.h", 280))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj174=((struct list_item$1sNodeph*)come_null_check(litem_248, "./comelang2.h", 281))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_248, "./comelang2.h", 281))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_248;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head=litem_248;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional384=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 307))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional384) {
                                litem_249=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value352=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 287))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value352;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_249, "./comelang2.h", 289))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_249, "./comelang2.h", 290))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj175=((struct list_item$1sNodeph*)come_null_check(litem_249, "./comelang2.h", 291))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_249, "./comelang2.h", 291))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_249;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_249;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_250=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value353=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 297))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
                                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value353;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_250, "./comelang2.h", 299))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_250, "./comelang2.h", 300))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj176=((struct list_item$1sNodeph*)come_null_check(litem_250, "./comelang2.h", 301))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_250, "./comelang2.h", 301))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_250;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_250;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 307))->len++;
                        __freed_obj__ = 0;
                        __result175__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result175__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional386;
int default_value_252;
int __result176__;
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_252, 0, sizeof(int));
                            if(_if_conditional386=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional386) {
                                __freed_obj__ = 0;
                                memset(&default_value_252,0,sizeof(int));
                                __freed_obj__ = 0;
                                __result176__ = default_value_252;
                                __freed_obj__ = 0;
                                return __result176__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result177__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                                __freed_obj__ = 0;
                                return __result177__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
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

static void sLoadRangeArrayNode_finalize(struct sLoadRangeArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional389=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional389) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional390=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional390) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional391=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional391) {
                        if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sLoadRangeArrayNode* sLoadRangeArrayNode_clone(struct sLoadRangeArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional392;
struct sLoadRangeArrayNode* __result178__;
void* right_value358;
struct sLoadRangeArrayNode* result_253;
_Bool _if_conditional393;
void* right_value359;
struct sNode* __dec_obj177;
_Bool _if_conditional394;
void* right_value360;
struct list$1sNodeph* __dec_obj178;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value361;
char* __dec_obj179;
struct sLoadRangeArrayNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value358, 0, sizeof(void*));
memset(&result_253, 0, sizeof(struct sLoadRangeArrayNode*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
                    if(_if_conditional392=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional392) {
                        __result178__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result178__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_253=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value358=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
                    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value358;
                    __freed_obj__ = 0;
                    if(_if_conditional393=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional393) {
                        __dec_obj177=((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 4))->mLeft;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=sNode_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 4))->mLeft))));
                        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                        if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value359;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional394=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6))->mArrayNum!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional394) {
                        __dec_obj178=((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 5))->mArrayNum;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value360=list$1sNodephp_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mArrayNum))));
                        if(__dec_obj178) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj178, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                        if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value360;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional395=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional395) {
                        ((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 6))->mQuote=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional396=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional396) {
                        ((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 7))->sline=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional397=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional397) {
                        __dec_obj179=((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 8))->sname;
                        ((struct sLoadRangeArrayNode*)come_null_check(result_253, "sLoadRangeArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 8))->sname))));
                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value361;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result179__ = __result_obj__ = result_253;
                    if(result_253 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result179__;
                    __freed_obj__ = 0;
                    if(result_253 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional399=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional399) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional400=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional400) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional401=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional401) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional402=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 4))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional402) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sStoreArrayNode* sStoreArrayNode_clone(struct sStoreArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional403;
struct sStoreArrayNode* __result180__;
void* right_value366;
struct sStoreArrayNode* result_255;
_Bool _if_conditional404;
void* right_value367;
struct sNode* __dec_obj181;
_Bool _if_conditional405;
void* right_value368;
struct sNode* __dec_obj182;
_Bool _if_conditional406;
void* right_value369;
struct list$1sNodeph* __dec_obj183;
_Bool _if_conditional407;
_Bool _if_conditional408;
_Bool _if_conditional409;
void* right_value370;
char* __dec_obj184;
struct sStoreArrayNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value366, 0, sizeof(void*));
memset(&result_255, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                        if(_if_conditional403=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional403) {
                            __result180__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result180__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_255=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value366=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value366;
                        __freed_obj__ = 0;
                        if(_if_conditional404=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional404) {
                            __dec_obj181=((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 4))->mLeft;
                            ((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value367;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional405=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional405) {
                            __dec_obj182=((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 5))->mRight;
                            ((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mRight))));
                            if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value368;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional406=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional406) {
                            __dec_obj183=((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 6))->mArrayNum;
                            ((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 6))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value369=list$1sNodephp_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mArrayNum))));
                            if(__dec_obj183) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj183, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                            if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value369;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional407=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional407) {
                            ((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 7))->mQuote=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional408=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional408) {
                            ((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 8))->sline=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional409=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 10))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional409) {
                            __dec_obj184=((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 9))->sname;
                            ((struct sStoreArrayNode*)come_null_check(result_255, "sStoreArrayNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 9))->sname))));
                            if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value370;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result181__ = __result_obj__ = result_255;
                        if(result_255 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_255, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result181__;
                        __freed_obj__ = 0;
                        if(result_255 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_255, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional410=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional410) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional411=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional411) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional412=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional412) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sLoadArrayNode* sLoadArrayNode_clone(struct sLoadArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional413;
struct sLoadArrayNode* __result182__;
void* right_value374;
struct sLoadArrayNode* result_256;
_Bool _if_conditional414;
void* right_value375;
struct sNode* __dec_obj186;
_Bool _if_conditional415;
void* right_value376;
struct list$1sNodeph* __dec_obj187;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value377;
char* __dec_obj188;
struct sLoadArrayNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value374, 0, sizeof(void*));
memset(&result_256, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
                        if(_if_conditional413=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional413) {
                            __result182__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result182__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_256=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value374=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value374;
                        __freed_obj__ = 0;
                        if(_if_conditional414=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional414) {
                            __dec_obj186=((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 4))->mLeft;
                            ((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=sNode_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value375;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional415=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional415) {
                            __dec_obj187=((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 5))->mArrayNum;
                            ((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value376=list$1sNodephp_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mArrayNum))));
                            if(__dec_obj187) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value376;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional416=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional416) {
                            ((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 6))->mQuote=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional417=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional417) {
                            ((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 7))->sline=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional418=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional418) {
                            __dec_obj188=((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 8))->sname;
                            ((struct sLoadArrayNode*)come_null_check(result_256, "sLoadArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value377=string_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8))->sname))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
                            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value377;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result183__ = __result_obj__ = result_256;
                        if(result_256 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result183__;
                        __freed_obj__ = 0;
                        if(result_256 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional429;
_Bool _if_conditional430;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional429=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional429) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional430=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 2))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional430) {
                            if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sNullCheckNode* sNullCheckNode_clone(struct sNullCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional431;
struct sNullCheckNode* __result186__;
void* right_value389;
struct sNullCheckNode* result_258;
_Bool _if_conditional432;
void* right_value390;
struct sNode* __dec_obj194;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value391;
char* __dec_obj195;
struct sNullCheckNode* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value389, 0, sizeof(void*));
memset(&result_258, 0, sizeof(struct sNullCheckNode*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
                        if(_if_conditional431=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional431) {
                            __result186__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result186__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_258=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value389=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
                        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value389;
                        __freed_obj__ = 0;
                        if(_if_conditional432=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional432) {
                            __dec_obj194=((struct sNullCheckNode*)come_null_check(result_258, "sNullCheckNode_clone", 4))->mLeft;
                            ((struct sNullCheckNode*)come_null_check(result_258, "sNullCheckNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=sNode_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 4))->mLeft))));
                            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
                            if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value390;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional433=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional433) {
                            ((struct sNullCheckNode*)come_null_check(result_258, "sNullCheckNode_clone", 5))->mOnlyNullCecker=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mOnlyNullCecker;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional434=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional434) {
                            ((struct sNullCheckNode*)come_null_check(result_258, "sNullCheckNode_clone", 6))->sline=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 6))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional435=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 8))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional435) {
                            __dec_obj195=((struct sNullCheckNode*)come_null_check(result_258, "sNullCheckNode_clone", 7))->sname;
                            ((struct sNullCheckNode*)come_null_check(result_258, "sNullCheckNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 7))->sname))));
                            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
                            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value391;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result187__ = __result_obj__ = result_258;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result187__;
                        __freed_obj__ = 0;
                        if(result_258 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_258, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional437;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional437=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional437) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional438=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional438) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional439=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional439) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional440=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 4))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional440) {
                                if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sStoreFieldNode* sStoreFieldNode_clone(struct sStoreFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional441;
struct sStoreFieldNode* __result188__;
void* right_value397;
struct sStoreFieldNode* result_261;
_Bool _if_conditional442;
void* right_value398;
struct sNode* __dec_obj197;
_Bool _if_conditional443;
void* right_value399;
struct sNode* __dec_obj198;
_Bool _if_conditional444;
void* right_value400;
char* __dec_obj199;
_Bool _if_conditional445;
_Bool _if_conditional446;
void* right_value401;
char* __dec_obj200;
struct sStoreFieldNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value397, 0, sizeof(void*));
memset(&result_261, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
                            if(_if_conditional441=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional441) {
                                __result188__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result188__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_261=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value397=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                            if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value397;
                            __freed_obj__ = 0;
                            if(_if_conditional442=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional442) {
                                __dec_obj197=((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 4))->mLeft;
                                ((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 4))->mLeft))));
                                if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
                                if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value398;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional443=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional443) {
                                __dec_obj198=((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 5))->mRight;
                                ((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mRight))));
                                if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
                                if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value399;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional444=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional444) {
                                __dec_obj199=((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 6))->mName;
                                ((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 6))->mName=(char*)come_increment_ref_count(((char*)(right_value400=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mName))));
                                if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value400);
                                if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { right_value400 = come_decrement_ref_count(right_value400, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value400;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional445=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional445) {
                                ((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 7))->sline=((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional446=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional446) {
                                __dec_obj200=((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 8))->sname;
                                ((struct sStoreFieldNode*)come_null_check(result_261, "sStoreFieldNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value401=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8))->sname))));
                                if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
                                if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value401;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result189__ = __result_obj__ = result_261;
                            if(result_261 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result189__;
                            __freed_obj__ = 0;
                            if(result_261 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional450;
_Bool _if_conditional451;
_Bool _if_conditional452;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional450=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional450) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional451=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional451) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional452=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional452) {
                                    if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sLoadFieldNode* sLoadFieldNode_clone(struct sLoadFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional453;
struct sLoadFieldNode* __result190__;
void* right_value411;
struct sLoadFieldNode* result_262;
_Bool _if_conditional454;
void* right_value412;
struct sNode* __dec_obj205;
_Bool _if_conditional455;
void* right_value413;
char* __dec_obj206;
_Bool _if_conditional456;
_Bool _if_conditional457;
void* right_value414;
char* __dec_obj207;
struct sLoadFieldNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value411, 0, sizeof(void*));
memset(&result_262, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
                                if(_if_conditional453=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional453) {
                                    __result190__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result190__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_262=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value411=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
                                if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value411;
                                __freed_obj__ = 0;
                                if(_if_conditional454=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional454) {
                                    __dec_obj205=((struct sLoadFieldNode*)come_null_check(result_262, "sLoadFieldNode_clone", 4))->mLeft;
                                    ((struct sLoadFieldNode*)come_null_check(result_262, "sLoadFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=sNode_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 4))->mLeft))));
                                    if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value412;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional455=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional455) {
                                    __dec_obj206=((struct sLoadFieldNode*)come_null_check(result_262, "sLoadFieldNode_clone", 5))->mName;
                                    ((struct sLoadFieldNode*)come_null_check(result_262, "sLoadFieldNode_clone", 5))->mName=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mName))));
                                    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value413);
                                    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value413;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional456=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional456) {
                                    ((struct sLoadFieldNode*)come_null_check(result_262, "sLoadFieldNode_clone", 6))->sline=((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional457=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 8))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional457) {
                                    __dec_obj207=((struct sLoadFieldNode*)come_null_check(result_262, "sLoadFieldNode_clone", 7))->sname;
                                    ((struct sLoadFieldNode*)come_null_check(result_262, "sLoadFieldNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value414=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7))->sname))));
                                    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                                    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value414;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result191__ = __result_obj__ = result_262;
                                if(result_262 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result191__;
                                __freed_obj__ = 0;
                                if(result_262 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 0, 0); }
}

