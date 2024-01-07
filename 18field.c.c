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
struct sRangeCheckNode
{
    struct sNode* mLeft;
    struct sNode* mBegin;
    struct sNode* mEnd;
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

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info);

_Bool sRangeCheckNode_terminated();

char* sRangeCheckNode_kind();

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info);

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info);

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info);

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
static void sRangeCheckNode_finalize(struct sRangeCheckNode* self);
static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self);
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
_Bool __result38__;
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
void* right_value102;
void* right_value103;
void* right_value104;
void* right_value105;
void* right_value106;
char* __dec_obj54;
void* right_value107;
struct sType* result_type1_56;
void* right_value108;
struct sType* result_type2_57;
void* right_value109;
struct sType* __dec_obj55;
_Bool _if_conditional142;
void* right_value110;
char* __dec_obj56;
_Bool _if_conditional143;
void* right_value111;
char* __dec_obj57;
_Bool __result52__;
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
memset(&result_type1_56, 0, sizeof(struct sType*));
memset(&right_value108, 0, sizeof(void*));
memset(&result_type2_57, 0, sizeof(struct sType*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    __freed_obj__ = 0, 
    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_30=type->mClass;
    __freed_obj__ = 0;
    class_name_31=klass_30->mName;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    operator_fun_33=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    __freed_obj__ = 0, 
    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    __freed_obj__ = 0, 
    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
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
        generics_fun_40=((struct sGenericsFun*)(right_value50=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0))));
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
                __result38__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result38__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        operator_fun_33=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value61=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32))));
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
            operator_fun_33=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value64=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_46))));
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
            operator_fun_33=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value66=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_32))));
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
        check_assign_type(((char*)(right_value69=xsprintf("\%s is assigned to",((char*)(right_value68=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value74=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0)))),left_value->type,left_value,(_Bool)0,info);
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
        if(_if_conditional124=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value75=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,0))))->mHeap&&left_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value75),
        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[4] = right_value75, 
        __freed_obj__ = 0, 
        _if_conditional124) {
            if(_if_conditional125=left_value->var,            __freed_obj__ = 0, 
            _if_conditional125) {
                if(_if_conditional126=left_value->var->mType->mDelegate,                __freed_obj__ = 0, 
                _if_conditional126) {
                    __dec_obj33=left_value->var->mCValueName;
                    left_value->var->mCValueName=((void*)0);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional127=left_value->var->mType->mShare,                    __freed_obj__ = 0, 
                    _if_conditional127) {
                        __dec_obj34=left_value->c_value;
                        left_value->c_value=(char*)come_increment_ref_count(((char*)(right_value76=increment_ref_count_object(left_value->type,left_value->c_value,info))));
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value76;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional128=left_value->var->mType->mClone,                        __freed_obj__ = 0, 
                        _if_conditional128) {
                            __dec_obj35=left_value->c_value;
                            left_value->c_value=(char*)come_increment_ref_count(((char*)(right_value77=increment_ref_count_object(left_value->type,left_value->c_value,info))));
                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj36=left_value->c_value;
                            left_value->c_value=(char*)come_increment_ref_count(((char*)(right_value78=increment_ref_count_object(left_value->type,left_value->c_value,info))));
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
                if(_if_conditional129=left_value->type->mDelegate,                __freed_obj__ = 0, 
                _if_conditional129) {
                }
                else {
                    __dec_obj37=left_value->c_value;
                    left_value->c_value=(char*)come_increment_ref_count(((char*)(right_value79=increment_ref_count_object(left_value->type,left_value->c_value,info))));
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
            left_value2_49=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s",left_value->c_value))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value80;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj39=left_value2_49;
            left_value2_49=(char*)come_increment_ref_count(((char*)(right_value81=string_clone(left_value->c_value))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value81;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value83=xsprintf("\%s is assigned to",((char*)(right_value82=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value84=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1)))),middle_value->type,middle_value,(_Bool)0,info);
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
        if(_if_conditional130=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value85=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,1))))->mHeap&&middle_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value85),
        (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[8] = right_value85, 
        __freed_obj__ = 0, 
        _if_conditional130) {
            if(_if_conditional131=middle_value->var,            __freed_obj__ = 0, 
            _if_conditional131) {
                if(_if_conditional132=middle_value->var->mType->mDelegate,                __freed_obj__ = 0, 
                _if_conditional132) {
                    __dec_obj40=middle_value->var->mCValueName;
                    middle_value->var->mCValueName=((void*)0);
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional133=middle_value->var->mType->mShare,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __dec_obj41=middle_value->c_value;
                        middle_value->c_value=(char*)come_increment_ref_count(((char*)(right_value86=increment_ref_count_object(middle_value->type,middle_value->c_value,info))));
                        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value86;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional134=middle_value->var->mType->mClone,                        __freed_obj__ = 0, 
                        _if_conditional134) {
                            __dec_obj42=middle_value->c_value;
                            middle_value->c_value=(char*)come_increment_ref_count(((char*)(right_value87=increment_ref_count_object(middle_value->type,middle_value->c_value,info))));
                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value87;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj43=middle_value->c_value;
                            middle_value->c_value=(char*)come_increment_ref_count(((char*)(right_value88=increment_ref_count_object(middle_value->type,middle_value->c_value,info))));
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
                if(_if_conditional135=middle_value->type->mDelegate,                __freed_obj__ = 0, 
                _if_conditional135) {
                }
                else {
                    __dec_obj44=middle_value->c_value;
                    middle_value->c_value=(char*)come_increment_ref_count(((char*)(right_value89=increment_ref_count_object(middle_value->type,middle_value->c_value,info))));
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
            middle_value2_54=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s",middle_value->c_value))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
            if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value90;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj46=middle_value2_54;
            middle_value2_54=(char*)come_increment_ref_count(((char*)(right_value91=string_clone(middle_value->c_value))));
            if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value91;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value93=xsprintf("\%s is assigned to",((char*)(right_value92=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value94=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2)))),right_value->type,right_value,(_Bool)0,info);
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
        if(_if_conditional136=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value95=list$1sTypephp_operator_load_element(operator_fun_33->mParamTypes,2))))->mHeap&&right_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value95),
        (right_value95 && right_value95 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[12] = right_value95, 
        __freed_obj__ = 0, 
        _if_conditional136) {
            if(_if_conditional137=right_value->var,            __freed_obj__ = 0, 
            _if_conditional137) {
                if(_if_conditional138=right_value->var->mType->mDelegate,                __freed_obj__ = 0, 
                _if_conditional138) {
                    __dec_obj47=right_value->var->mCValueName;
                    right_value->var->mCValueName=((void*)0);
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional139=right_value->var->mType->mShare,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        __dec_obj48=right_value->c_value;
                        right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value96=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value96;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional140=right_value->var->mType->mClone,                        __freed_obj__ = 0, 
                        _if_conditional140) {
                            __dec_obj49=right_value->c_value;
                            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value97=increment_ref_count_object(right_value->type,right_value->c_value,info))));
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value97;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj50=right_value->c_value;
                            right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value98=increment_ref_count_object(right_value->type,right_value->c_value,info))));
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
                if(_if_conditional141=right_value->type->mDelegate,                __freed_obj__ = 0, 
                _if_conditional141) {
                }
                else {
                    __dec_obj51=right_value->c_value;
                    right_value->c_value=(char*)come_increment_ref_count(((char*)(right_value99=increment_ref_count_object(right_value->type,right_value->c_value,info))));
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
            right_value2_55=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s",right_value->c_value))));
            if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj53=right_value2_55;
            right_value2_55=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(right_value->c_value))));
            if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value101;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj54=come_value_48->c_value;
        come_value_48->c_value=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value102=string_to_string(fun_name2_32))),((char*)(right_value103=string_to_string(left_value2_49))),((char*)(right_value104=string_to_string(middle_value2_54))),((char*)(right_value105=string_to_string(right_value2_55)))))));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value102);
        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value102;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value103);
        if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value103;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value104);
        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value104;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value105);
        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[16] = right_value105;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value106);
        if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[17] = right_value106;
        __freed_obj__ = 0;
        result_type1_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(operator_fun_33->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value107;
        __freed_obj__ = 0;
        result_type2_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=solve_generics(result_type1_56,generics_type_29,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value108;
        __freed_obj__ = 0;
        __dec_obj55=come_value_48->type;
        come_value_48->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(result_type2_57))));
        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value109;
        __freed_obj__ = 0;
        come_value_48->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional142=result_type2_57->mHeap,        __freed_obj__ = 0, 
        _if_conditional142) {
            __dec_obj56=come_value_48->c_value;
            come_value_48->c_value=(char*)come_increment_ref_count(((char*)(right_value110=append_object_to_right_values(come_value_48->c_value,(struct sType*)come_increment_ref_count(result_type2_57),info))));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value110;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional143=operator_fun_33->mResultType->mException||gComeDebug,        __freed_obj__ = 0, 
        _if_conditional143) {
            __dec_obj57=come_value_48->c_value;
            come_value_48->c_value=(char*)come_increment_ref_count(((char*)(right_value111=append_exception_value(come_value_48->c_value,come_value_48->type,info))));
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value111;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_48->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_48));
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
    __result52__ = result_47;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_32 && !__freed_obj__) { fun_name2_32 = come_decrement_ref_count(fun_name2_32, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result52__;
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
            result_5->mClass=self->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value13;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value30;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional46=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value40;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            result_5->mUnsigned=self->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            result_5->mShort=self->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            result_5->mLong=self->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            result_5->mLongLong=self->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            result_5->mConstant=self->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            result_5->mRegister=self->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            result_5->mVolatile=self->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            result_5->mStatic=self->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            result_5->mExtern=self->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            result_5->mRestrict=self->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            result_5->mImmutable=self->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            result_5->mHeap=self->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            result_5->mDummyHeap=self->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            result_5->mDelegate=self->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            result_5->mShare=self->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            result_5->mClone=self->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            result_5->mNoHeap=self->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            result_5->mRefference=self->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            result_5->mException=self->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            result_5->mPointerNum=self->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0)&&self->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            __dec_obj25=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mSizeNum))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            __dec_obj26=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(self->mOriginalTypeName))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            result_5->mFunctionParam=self->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            result_5->mAllocaValue=self->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            result_5->mGenericsStruct=self->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            result_5->mComeMemCore=self->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional88=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional88) {
            result_5->mInline=self->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional89=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional89) {
            result_5->mNullValue=self->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional90) {
            __dec_obj27=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mAsmName))));
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
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional9) {
                if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional12) {
                if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional18) {
                if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional19) {
                if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional20) {
                if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional21) {
                if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
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
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional7) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    it_6=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_6!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_7=it_6;
                        __freed_obj__ = 0;
                        it_6=it_6->next;
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
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional11) {
                                if(self->item && !__freed_obj__) { come_call_finalizer(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                    it_8=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional2=it_8!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional2) {
                        prev_it_9=it_8;
                        __freed_obj__ = 0;
                        it_8=it_8->next;
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
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional13) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0); } 
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
                    it_10=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_10!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        prev_it_11=it_10;
                        __freed_obj__ = 0;
                        it_10=it_10->next;
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
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional16) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
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
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
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
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional25) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
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
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17;
                __freed_obj__ = 0;
                it_14=self->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
                    __freed_obj__ = 0;
                    it_14=it_14->next;
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
                    self->head=((void*)0);
                    __freed_obj__ = 0;
                    self->tail=((void*)0);
                    __freed_obj__ = 0;
                    self->len=0;
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
                        if(_if_conditional31=self->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18;
                            __freed_obj__ = 0;
                            litem_15->prev=((void*)0);
                            __freed_obj__ = 0;
                            litem_15->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            self->tail=litem_15;
                            __freed_obj__ = 0;
                            self->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                litem_16->prev=self->head;
                                __freed_obj__ = 0;
                                litem_16->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                self->tail=litem_16;
                                __freed_obj__ = 0;
                                self->head->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                litem_17->prev=self->tail;
                                __freed_obj__ = 0;
                                litem_17->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                self->tail->next=litem_17;
                                __freed_obj__ = 0;
                                self->tail=litem_17;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        self->len++;
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
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
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
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24;
                __freed_obj__ = 0;
                it_19=self->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_19!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = 0;
                    it_19=it_19->next;
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
                    self->head=((void*)0);
                    __freed_obj__ = 0;
                    self->tail=((void*)0);
                    __freed_obj__ = 0;
                    self->len=0;
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
                        if(_if_conditional35=self->len==0,                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25;
                            __freed_obj__ = 0;
                            litem_20->prev=((void*)0);
                            __freed_obj__ = 0;
                            litem_20->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            self->tail=litem_20;
                            __freed_obj__ = 0;
                            self->head=litem_20;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                litem_21->prev=self->head;
                                __freed_obj__ = 0;
                                litem_21->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_21;
                                __freed_obj__ = 0;
                                self->head->next=litem_21;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27;
                                __freed_obj__ = 0;
                                litem_22->prev=self->tail;
                                __freed_obj__ = 0;
                                litem_22->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail->next=litem_22;
                                __freed_obj__ = 0;
                                self->tail=litem_22;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        self->len++;
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
                        if(_if_conditional38=self!=((void*)0)&&self->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional39) {
                            result_23->finalize=self->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional40) {
                            result_23->clone=self->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional41=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            result_23->compile=self->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional42=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional42) {
                            result_23->sline=self->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional43=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional43) {
                            result_23->sname=self->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional44=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional44) {
                            result_23->terminated=self->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional45=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional45) {
                            result_23->kind=self->kind;
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
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
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
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
                it_25=self->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_25!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
                    __freed_obj__ = 0;
                    it_25=it_25->next;
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
                    self->head=((void*)0);
                    __freed_obj__ = 0;
                    self->tail=((void*)0);
                    __freed_obj__ = 0;
                    self->len=0;
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
                        if(_if_conditional50=self->len==0,                        __freed_obj__ = 0, 
                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34;
                            __freed_obj__ = 0;
                            litem_26->prev=((void*)0);
                            __freed_obj__ = 0;
                            litem_26->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            self->tail=litem_26;
                            __freed_obj__ = 0;
                            self->head=litem_26;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                litem_27->prev=self->head;
                                __freed_obj__ = 0;
                                litem_27->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_27;
                                __freed_obj__ = 0;
                                self->head->next=litem_27;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36;
                                __freed_obj__ = 0;
                                litem_28->prev=self->tail;
                                __freed_obj__ = 0;
                                litem_28->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail->next=litem_28;
                                __freed_obj__ = 0;
                                self->tail=litem_28;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        self->len++;
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
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result31__ = self->len;
        __freed_obj__ = 0;
        return __result31__;
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
_Bool _if_conditional96;
struct sGenericsFun* __result34__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sGenericsFun* __result35__;
struct sGenericsFun* __result36__;
struct sGenericsFun* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
memset(&right_value49, 0, sizeof(void*));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            __freed_obj__ = 0;
            it_38=hash_37;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                __freed_obj__ = 0, 
                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value(((struct optional$2boolbool*)(right_value49=string_equals(self->keys[it_38],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49),
                    (right_value49 && right_value49 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value49, 
                    __freed_obj__ = 0, 
                    _if_conditional96) {
                        __result34__ = __result_obj__ = self->items[it_38];
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_38++;
                    __freed_obj__ = 0;
                    if(_if_conditional97=it_38>=self->size,                    __freed_obj__ = 0, 
                    _if_conditional97) {
                        it_38=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional98=it_38==hash_37,                        __freed_obj__ = 0, 
                        _if_conditional98) {
                            __result35__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result35__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result36__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result36__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result37__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result37__;
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
_Bool __result32__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(_Bool));
                        if(_if_conditional95=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional95) {
                            __freed_obj__ = 0;
                            memset(&default_value_39,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result32__ = default_value_39;
                            __freed_obj__ = 0;
                            return __result32__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result33__ = self->v1;
                            __freed_obj__ = 0;
                            return __result33__;
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
            if(_if_conditional99=self!=((void*)0)&&self->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&self->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0)&&self->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&self->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional104=self!=((void*)0)&&self->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional104) {
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional105=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional105) {
                if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=self!=((void*)0)&&self->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional106) {
                if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional107=self!=((void*)0)&&self->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional107) {
                if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional111;
void* right_value53;
void* right_value54;
struct optional$2sFunpbool* __result40__;
_Bool _if_conditional112;
_Bool _if_conditional113;
void* right_value55;
void* right_value56;
struct optional$2sFunpbool* __result41__;
void* right_value57;
void* right_value58;
struct optional$2sFunpbool* __result42__;
void* right_value59;
void* right_value60;
struct optional$2sFunpbool* __result43__;
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
            hash_42=string_get_hash_key(((char*)key))%self->size;
            __freed_obj__ = 0;
            it_43=hash_42;
            __freed_obj__ = 0;
            while(_while_condtional8=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional8) {
                if(_if_conditional110=self->item_existance[it_43],                __freed_obj__ = 0, 
                _if_conditional110) {
                    if(_if_conditional111=optional$2boolbool_value(((struct optional$2boolbool*)(right_value52=string_equals(self->keys[it_43],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52),
                    (right_value52 && right_value52 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value52, 
                    __freed_obj__ = 0, 
                    _if_conditional111) {
                        __result40__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value54=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value53=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1600)))),self->items[it_43],(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                        return __result40__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_43++;
                    __freed_obj__ = 0;
                    if(_if_conditional112=it_43>=self->size,                    __freed_obj__ = 0, 
                    _if_conditional112) {
                        it_43=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional113=it_43==hash_42,                        __freed_obj__ = 0, 
                        _if_conditional113) {
                            __result41__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value56=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value55=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_41,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value55;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
                            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value56;
                            __freed_obj__ = 0;
                            return __result41__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result42__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sFunpbool*)(right_value58=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value57=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1613))),default_value_41,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value57;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value58;
                    __freed_obj__ = 0;
                    return __result42__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result43__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sFunpbool*)(right_value60=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value59=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1617))),default_value_41,(_Bool)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value60;
            __freed_obj__ = 0;
            return __result43__;
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            self->v1=v1;
                            __freed_obj__ = 0;
                            self->v2=v2;
                            __freed_obj__ = 0;
                            __result39__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result39__;
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
struct sFun* __result44__;
struct sFun* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_44, 0, sizeof(struct sFun*));
            if(_if_conditional114=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                __freed_obj__ = 0;
                memset(&default_value_44,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                __result44__ = __result_obj__ = default_value_44;
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
            }
            else {
                __result45__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result45__;
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
            if(_if_conditional118=self!=((void*)0)&&self->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional119=self!=((void*)0)&&self->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct optional$2sTypephbool* __result47__;
struct sType* default_value_52;
void* right_value72;
void* right_value73;
struct optional$2sTypephbool* __result48__;
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
                position+=self->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_50=self->head;
            __freed_obj__ = 0;
            i_51=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_50!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional121=position==i_51,                __freed_obj__ = 0, 
                _if_conditional121) {
                    __result47__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value71=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value70=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(it_50->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value70;
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_50=it_50->next;
                __freed_obj__ = 0;
                i_51++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_52,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result48__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sTypephbool*)(right_value73=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value72=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_52),(_Bool)0))));
            if(default_value_52 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value72;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value73;
            __freed_obj__ = 0;
            return __result48__;
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
struct optional$2sTypephbool* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj32=self->v1;
                        self->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->v2=v2;
                        __freed_obj__ = 0;
                        __result46__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result46__;
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
                            if(_if_conditional122=self!=((void*)0)&&self->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional122) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
struct sType* __result49__;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_53, 0, sizeof(struct sType*));
            if(_if_conditional123=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional123) {
                __freed_obj__ = 0;
                memset(&default_value_53,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result49__ = __result_obj__ = default_value_53;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
            }
            else {
                __result50__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result50__;
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
_Bool _if_conditional144;
void* right_value112;
struct list_item$1CVALUEph* litem_58;
struct CVALUE* __dec_obj58;
_Bool _if_conditional146;
void* right_value113;
struct list_item$1CVALUEph* litem_59;
struct CVALUE* __dec_obj59;
void* right_value114;
struct list_item$1CVALUEph* litem_60;
struct CVALUE* __dec_obj60;
struct list$1CVALUEph* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&litem_58, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value113, 0, sizeof(void*));
memset(&litem_59, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional144=self->len==0,            __freed_obj__ = 0, 
            _if_conditional144) {
                litem_58=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value112=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value112;
                __freed_obj__ = 0;
                litem_58->prev=((void*)0);
                __freed_obj__ = 0;
                litem_58->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj58=litem_58->item;
                litem_58->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj58) { come_call_finalizer(CVALUE_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail=litem_58;
                __freed_obj__ = 0;
                self->head=litem_58;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional146=self->len==1,                __freed_obj__ = 0, 
                _if_conditional146) {
                    litem_59=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value113=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value113;
                    __freed_obj__ = 0;
                    litem_59->prev=self->head;
                    __freed_obj__ = 0;
                    litem_59->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj59=litem_59->item;
                    litem_59->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj59) { come_call_finalizer(CVALUE_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    self->tail=litem_59;
                    __freed_obj__ = 0;
                    self->head->next=litem_59;
                    __freed_obj__ = 0;
                }
                else {
                    litem_60=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value114=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value114;
                    __freed_obj__ = 0;
                    litem_60->prev=self->tail;
                    __freed_obj__ = 0;
                    litem_60->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj60=litem_60->item;
                    litem_60->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj60) { come_call_finalizer(CVALUE_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    self->tail->next=litem_60;
                    __freed_obj__ = 0;
                    self->tail=litem_60;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->len++;
            __freed_obj__ = 0;
            __result51__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result51__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional145=self!=((void*)0)&&self->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional145) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
void* right_value115;
char* __dec_obj61;
void* right_value116;
struct sNode* __dec_obj62;
void* right_value117;
struct sNode* __dec_obj63;
void* right_value118;
char* __dec_obj64;
struct sStoreFieldNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(info->sname))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    __dec_obj62=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(left))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value116;
    __freed_obj__ = 0;
    __dec_obj63=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(right))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value117;
    __freed_obj__ = 0;
    __dec_obj64=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(name))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value118;
    __freed_obj__ = 0;
    __result53__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result53__;
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
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result54__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value119;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
    __result55__ = __result_obj__ = ((char*)(right_value119=__builtin_string("sStoreFieldNode")));
    __freed_obj__ = 0;
    return __result55__;
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
void* right_value120;
char* name_63;
_Bool _if_conditional151;
_Bool __result56__;
void* right_value121;
struct CVALUE* left_value_64;
_Bool _if_conditional152;
_Bool __result57__;
void* right_value122;
struct CVALUE* right_value_65;
struct sType* right_type_66;
struct sType* left_type_67;
void* right_value123;
struct sType* left_type2_68;
struct sClass* klass_69;
void* right_value133;
struct sType* field_type_74;
int index_75;
char* child_field_name_76;
void* right_value134;
_Bool _if_conditional158;
_Bool __result65__;
struct list$1tuple2$2charphsTypephph* o2_saved_77;
struct tuple2$2charphsTypeph* field_80;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_83;
struct sType* field_type2_84;
_Bool _if_conditional163;
void* right_value135;
struct sType* __dec_obj65;
_Bool _if_conditional167;
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
_Bool _if_conditional168;
void* right_value136;
char* __dec_obj66;
void* right_value137;
struct sType* __dec_obj67;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value138;
struct sType* __dec_obj68;
_Bool _if_conditional171;
_Bool __result74__;
void* right_value139;
struct CVALUE* come_value_96;
_Bool _if_conditional172;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool __result75__;
void* right_value140;
void* right_value141;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value142;
char* c_value_97;
_Bool _if_conditional178;
_Bool _if_conditional179;
char* __dec_obj69;
_Bool _if_conditional180;
void* right_value143;
char* __dec_obj70;
_Bool _if_conditional181;
void* right_value144;
char* __dec_obj71;
void* right_value145;
char* __dec_obj72;
_Bool _if_conditional182;
void* right_value146;
char* __dec_obj73;
void* right_value147;
char* __dec_obj74;
void* right_value148;
char* c_value_98;
_Bool _if_conditional183;
_Bool _if_conditional184;
char* __dec_obj75;
_Bool _if_conditional185;
void* right_value149;
char* __dec_obj76;
_Bool _if_conditional186;
void* right_value150;
char* __dec_obj77;
void* right_value151;
char* __dec_obj78;
_Bool _if_conditional187;
void* right_value152;
char* __dec_obj79;
void* right_value153;
char* __dec_obj80;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value154;
char* c_value_99;
_Bool _if_conditional190;
_Bool _if_conditional191;
char* __dec_obj81;
_Bool _if_conditional192;
void* right_value155;
char* __dec_obj82;
_Bool _if_conditional193;
void* right_value156;
char* __dec_obj83;
void* right_value157;
char* __dec_obj84;
_Bool _if_conditional194;
void* right_value158;
char* __dec_obj85;
void* right_value159;
char* __dec_obj86;
void* right_value160;
char* c_value_100;
void* right_value161;
char* __dec_obj87;
void* right_value162;
char* __dec_obj88;
_Bool __result76__;
int right_value_id_101;
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value163;
char* c_value_102;
void* right_value164;
char* __dec_obj89;
void* right_value165;
char* c_value_103;
void* right_value166;
char* __dec_obj90;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value167;
char* c_value_104;
void* right_value168;
char* __dec_obj91;
void* right_value169;
char* c_value_105;
void* right_value170;
char* __dec_obj92;
_Bool __result77__;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value171;
char* __dec_obj93;
void* right_value172;
char* __dec_obj94;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value173;
char* __dec_obj95;
void* right_value174;
char* __dec_obj96;
_Bool __result78__;
void* right_value175;
struct sType* __dec_obj97;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_61, 0, sizeof(struct sNode*));
memset(&right_62, 0, sizeof(struct sNode*));
memset(&right_value120, 0, sizeof(void*));
memset(&name_63, 0, sizeof(char*));
memset(&right_value121, 0, sizeof(void*));
memset(&left_value_64, 0, sizeof(struct CVALUE*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value_65, 0, sizeof(struct CVALUE*));
memset(&right_type_66, 0, sizeof(struct sType*));
memset(&left_type_67, 0, sizeof(struct sType*));
memset(&right_value123, 0, sizeof(void*));
memset(&left_type2_68, 0, sizeof(struct sType*));
memset(&klass_69, 0, sizeof(struct sClass*));
memset(&right_value133, 0, sizeof(void*));
memset(&field_type_74, 0, sizeof(struct sType*));
memset(&index_75, 0, sizeof(int));
memset(&child_field_name_76, 0, sizeof(char*));
memset(&right_value134, 0, sizeof(void*));
memset(&o2_saved_77, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_80, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_83, 0, sizeof(char*));
memset(&field_type2_84, 0, sizeof(struct sType*));
memset(&field_name_83, 0, sizeof(char*));
memset(&field_type2_84, 0, sizeof(struct sType*));
memset(&right_value135, 0, sizeof(void*));
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
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&come_value_96, 0, sizeof(struct CVALUE*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
memset(&c_value_97, 0, sizeof(char*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&c_value_98, 0, sizeof(char*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&c_value_99, 0, sizeof(char*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&c_value_100, 0, sizeof(char*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value_id_101, 0, sizeof(int));
memset(&right_value163, 0, sizeof(void*));
memset(&c_value_102, 0, sizeof(char*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&c_value_103, 0, sizeof(char*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&c_value_104, 0, sizeof(char*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&c_value_105, 0, sizeof(char*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
    left_61=self->mLeft;
    __freed_obj__ = 0;
    right_62=self->mRight;
    __freed_obj__ = 0;
    name_63=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    if(_if_conditional151=!node_compile(left_61,info),    __freed_obj__ = 0, 
    _if_conditional151) {
        __result56__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional152=!node_compile(right_62,info),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result57__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value122;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_66=right_value_65->type;
    __freed_obj__ = 0;
    left_type_67=left_value_64->type;
    __freed_obj__ = 0;
    left_type2_68=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=solve_generics(left_type_67,left_type_67,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value123;
    __freed_obj__ = 0;
    klass_69=left_type2_68->mClass;
    __freed_obj__ = 0;
    klass_69=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value133=map$2charphsClassphp_operator_load_element(info->classes,klass_69->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value133;
    __freed_obj__ = 0;
    field_type_74=((void*)0);
    __freed_obj__ = 0;
    index_75=0;
    __freed_obj__ = 0;
    child_field_name_76=((void*)0);
    __freed_obj__ = 0;
    klass_69=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value134=map$2charphsClassphp_operator_load_element(info->classes,klass_69->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value134;
    __freed_obj__ = 0;
    if(_if_conditional158=klass_69->mFields==((void*)0),    __freed_obj__ = 0, 
    _if_conditional158) {
        err_msg(info,"%s fields are null",klass_69->mName);
        __freed_obj__ = 0;
        __result65__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    for(
    o2_saved_77=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_69->mFields)),field_80=list$1tuple2$2charphsTypephph_begin((o2_saved_77)) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !list$1tuple2$2charphsTypephph_end((o2_saved_77)) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    field_80=list$1tuple2$2charphsTypephph_next((o2_saved_77)) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=field_80;
        field_name_83=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_84=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional163=string_operator_equals(field_name_83,name_63),        __freed_obj__ = 0, 
        _if_conditional163) {
            __dec_obj65=field_type_74;
            field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(field_type2_84))));
            if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value135;
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
    if(_if_conditional167=index_75==list$1tuple2$2charphsTypephph_length(klass_69->mFields),    __freed_obj__ = 0, 
    _if_conditional167) {
        index_75=0;
        __freed_obj__ = 0;
        for(
        o2_saved_87=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_69->mFields)),field_88=list$1tuple2$2charphsTypephph_begin((o2_saved_87)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !list$1tuple2$2charphsTypephph_end((o2_saved_87)) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        field_88=list$1tuple2$2charphsTypephph_next((o2_saved_87)) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=field_88;
            field_name_89=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            field_type2_90=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            klass2_91=field_type2_90->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_92=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_91->mFields)),field2_93=list$1tuple2$2charphsTypephph_begin((o2_saved_92)) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            !list$1tuple2$2charphsTypephph_end((o2_saved_92)) ,            __freed_obj__ = 0, 
            _for_condtionalA4;            field2_93=list$1tuple2$2charphsTypephph_next((o2_saved_92)) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var3=field2_93;
                field_name2_94=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                field_type3_95=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = 0;
                if(_if_conditional168=string_operator_equals(field_name2_94,name_63),                __freed_obj__ = 0, 
                _if_conditional168) {
                    __dec_obj66=child_field_name_76;
                    child_field_name_76=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(field_name_89))));
                    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value136;
                    __freed_obj__ = 0;
                    __dec_obj67=field_type_74;
                    field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_clone(field_type3_95))));
                    if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
                    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value137;
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
            if(_if_conditional169=child_field_name_76,            __freed_obj__ = 0, 
            _if_conditional169) {
                if(field_name_89 && !__freed_obj__) { field_name_89 = come_decrement_ref_count(field_name_89, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_90, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional170=string_operator_equals(field_name_89,name_63),            __freed_obj__ = 0, 
            _if_conditional170) {
                __dec_obj68=field_type_74;
                field_type_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(field_type2_90))));
                if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
                if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value138;
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
        if(_if_conditional171=index_75==list$1tuple2$2charphsTypephph_length(klass_69->mFields),        __freed_obj__ = 0, 
        _if_conditional171) {
            err_msg(info,"field not found(%s) in %s(1)",name_63,klass_69->mName);
            __freed_obj__ = 0;
            __result74__ = (_Bool)0;
            if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result74__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 306))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value139;
    __freed_obj__ = 0;
    if(_if_conditional172=field_type_74->mHeap&&!right_type_66->mHeap,    __freed_obj__ = 0, 
    _if_conditional172) {
        if(_if_conditional173=string_operator_equals(right_type_66->mClass->mName,"void")&&right_type_66->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional173) {
        }
        else {
            if(_if_conditional174=!right_type_66->mDelegate&&!right_type_66->mShare,            __freed_obj__ = 0, 
            _if_conditional174) {
                err_msg(info,"require right value as heap object(%s)",name_63);
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
    }
    __freed_obj__ = 0;
    check_assign_type(((char*)(right_value141=xsprintf("\%s is assigned to",((char*)(right_value140=string_to_string(name_63)))))),field_type_74,right_type_66,right_value_65,(_Bool)0,info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value140;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value141;
    __freed_obj__ = 0;
    if(_if_conditional175=field_type_74->mHeap&&right_type_66->mHeap&&field_type_74->mPointerNum>0&&right_type_66->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional175) {
        if(_if_conditional176=left_value_64->type->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional176) {
            if(_if_conditional177=child_field_name_76,            __freed_obj__ = 0, 
            _if_conditional177) {
                c_value_97=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s->%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value142;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_74,c_value_97,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional178=right_value_65->var,                __freed_obj__ = 0, 
                _if_conditional178) {
                    if(_if_conditional179=right_value_65->var->mType->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        __dec_obj69=right_value_65->var->mCValueName;
                        right_value_65->var->mCValueName=((void*)0);
                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional180=right_value_65->var->mType->mShare,                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            __dec_obj70=right_value_65->c_value;
                            right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value143=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value143;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional181=right_value_65->var->mType->mClone,                            __freed_obj__ = 0, 
                            _if_conditional181) {
                                __dec_obj71=right_value_65->c_value;
                                right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value144=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value144;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj72=right_value_65->c_value;
                                right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value145=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                                if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value145;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional182=right_value_65->type->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                    }
                    else {
                        __dec_obj73=right_value_65->c_value;
                        right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value146=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value146;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj74=come_value_96->c_value;
                come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s->%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value147);
                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value147;
                __freed_obj__ = 0;
                if(c_value_97 && !__freed_obj__) { c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_98=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("%s->%s",left_value_64->c_value,name_63))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value148;
                __freed_obj__ = 0;
                decrement_ref_count_object(field_type_74,c_value_98,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional183=right_value_65->var,                __freed_obj__ = 0, 
                _if_conditional183) {
                    if(_if_conditional184=right_value_65->var->mType->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional184) {
                        __dec_obj75=right_value_65->var->mCValueName;
                        right_value_65->var->mCValueName=((void*)0);
                        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional185=right_value_65->var->mType->mShare,                        __freed_obj__ = 0, 
                        _if_conditional185) {
                            __dec_obj76=right_value_65->c_value;
                            right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value149=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value149;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional186=right_value_65->var->mType->mClone,                            __freed_obj__ = 0, 
                            _if_conditional186) {
                                __dec_obj77=right_value_65->c_value;
                                right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value150=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value150;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj78=right_value_65->c_value;
                                right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value151=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                                if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                                if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value151;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional187=right_value_65->type->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional187) {
                    }
                    else {
                        __dec_obj79=right_value_65->c_value;
                        right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value152=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value152;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj80=come_value_96->c_value;
                come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s->%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value153;
                __freed_obj__ = 0;
                if(c_value_98 && !__freed_obj__) { c_value_98 = come_decrement_ref_count(c_value_98, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional188=left_value_64->type->mPointerNum==0,            __freed_obj__ = 0, 
            _if_conditional188) {
                if(_if_conditional189=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional189) {
                    c_value_99=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s.%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value154;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_99,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional190=right_value_65->var,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        if(_if_conditional191=right_value_65->var->mType->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional191) {
                            __dec_obj81=right_value_65->var->mCValueName;
                            right_value_65->var->mCValueName=((void*)0);
                            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional192=right_value_65->var->mType->mShare,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                __dec_obj82=right_value_65->c_value;
                                right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value155=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value155;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional193=right_value_65->var->mType->mClone,                                __freed_obj__ = 0, 
                                _if_conditional193) {
                                    __dec_obj83=right_value_65->c_value;
                                    right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value156=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value156;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj84=right_value_65->c_value;
                                    right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value157=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                                    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
                                    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value157;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional194=right_value_65->type->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional194) {
                        }
                        else {
                            __dec_obj85=right_value_65->c_value;
                            right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value158=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                            if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value158;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj86=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s.%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value159);
                    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value159;
                    __freed_obj__ = 0;
                    if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_100=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s.%s",left_value_64->c_value,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value160;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_100,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj87=right_value_65->c_value;
                    right_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value161=increment_ref_count_object(right_value_65->type,right_value_65->c_value,info))));
                    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value161;
                    __freed_obj__ = 0;
                    __dec_obj88=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s.%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value162);
                    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value162;
                    __freed_obj__ = 0;
                    if(c_value_100 && !__freed_obj__) { c_value_100 = come_decrement_ref_count(c_value_100, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,left_value_64->type->mPointerNum);
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
        right_value_id_101=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_65->c_value));
        __freed_obj__ = 0;
        if(_if_conditional195=right_value_id_101!=-1,        __freed_obj__ = 0, 
        _if_conditional195) {
            remove_object_from_right_values(right_value_id_101,info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional196=field_type_74->mHeap&&field_type_74->mPointerNum>0&&right_type_66->mPointerNum>0&&string_operator_equals(right_type_66->mClass->mName,"void"),        __freed_obj__ = 0, 
        _if_conditional196) {
            if(_if_conditional197=left_value_64->type->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional197) {
                if(_if_conditional198=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional198) {
                    c_value_102=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s->%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value163;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_102,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj89=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("%s->%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value164;
                    __freed_obj__ = 0;
                    if(c_value_102 && !__freed_obj__) { c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_103=(char*)come_increment_ref_count(((char*)(right_value165=xsprintf("%s->%s",left_value_64->c_value,name_63))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value165;
                    __freed_obj__ = 0;
                    decrement_ref_count_object(field_type_74,c_value_103,info,(_Bool)0);
                    __freed_obj__ = 0;
                    __dec_obj90=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value166=xsprintf("%s->%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
                    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value166;
                    __freed_obj__ = 0;
                    if(c_value_103 && !__freed_obj__) { c_value_103 = come_decrement_ref_count(c_value_103, (void*)0, (void*)0, 0, 0, 0); }
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional199=left_value_64->type->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    if(_if_conditional200=child_field_name_76,                    __freed_obj__ = 0, 
                    _if_conditional200) {
                        c_value_104=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s.%s.%s",left_value_64->c_value,child_field_name_76,name_63))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value167;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_74,c_value_104,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj91=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value168=xsprintf("%s.%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value168;
                        __freed_obj__ = 0;
                        if(c_value_104 && !__freed_obj__) { c_value_104 = come_decrement_ref_count(c_value_104, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_105=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s.%s",left_value_64->c_value,name_63))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value169;
                        __freed_obj__ = 0;
                        decrement_ref_count_object(field_type_74,c_value_105,info,(_Bool)0);
                        __freed_obj__ = 0;
                        __dec_obj92=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s.%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
                        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value170;
                        __freed_obj__ = 0;
                        if(c_value_105 && !__freed_obj__) { c_value_105 = come_decrement_ref_count(c_value_105, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,left_value_64->type->mPointerNum);
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
        else {
            if(_if_conditional201=left_value_64->type->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional201) {
                if(_if_conditional202=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional202) {
                    __dec_obj93=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s->%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value171;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj94=come_value_96->c_value;
                    come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s->%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value172;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional203=left_value_64->type->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional203) {
                    if(_if_conditional204=child_field_name_76,                    __freed_obj__ = 0, 
                    _if_conditional204) {
                        __dec_obj95=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s.%s.%s=%s",left_value_64->c_value,child_field_name_76,name_63,right_value_65->c_value))));
                        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value173;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj96=come_value_96->c_value;
                        come_value_96->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s.%s=%s",left_value_64->c_value,name_63,right_value_65->c_value))));
                        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value174;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,left_value_64->type->mPointerNum);
                    __freed_obj__ = 0;
                    __result78__ = (_Bool)0;
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
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj97=come_value_96->type;
    come_value_96->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(field_type_74))));
    if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value175;
    __freed_obj__ = 0;
    come_value_96->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_96));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",come_value_96->c_value);
    __freed_obj__ = 0;
    __result79__ = (_Bool)1;
    if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_68 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_76 && !__freed_obj__) { child_field_name_76 = come_decrement_ref_count(child_field_name_76, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result79__;
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
_Bool _if_conditional153;
void* right_value124;
_Bool _if_conditional154;
void* right_value125;
void* right_value126;
struct optional$2sClasspbool* __result59__;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value127;
void* right_value128;
struct optional$2sClasspbool* __result60__;
void* right_value129;
void* right_value130;
struct optional$2sClasspbool* __result61__;
void* right_value131;
void* right_value132;
struct optional$2sClasspbool* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_70, 0, sizeof(struct sClass*));
memset(&hash_71, 0, sizeof(unsigned int));
memset(&it_72, 0, sizeof(unsigned int));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
        __freed_obj__ = 0;
        memset(&default_value_70,0,sizeof(struct sClass*));
        __freed_obj__ = 0;
        hash_71=string_get_hash_key(((char*)key))%self->size;
        __freed_obj__ = 0;
        it_72=hash_71;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional153=self->item_existance[it_72],            __freed_obj__ = 0, 
            _if_conditional153) {
                if(_if_conditional154=optional$2boolbool_value(((struct optional$2boolbool*)(right_value124=string_equals(self->keys[it_72],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124),
                (right_value124 && right_value124 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value124, 
                __freed_obj__ = 0, 
                _if_conditional154) {
                    __result59__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value126=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value125=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1600)))),self->items[it_72],(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125;
                    __freed_obj__ = 0;
                    return __result59__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_72++;
                __freed_obj__ = 0;
                if(_if_conditional155=it_72>=self->size,                __freed_obj__ = 0, 
                _if_conditional155) {
                    it_72=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional156=it_72==hash_71,                    __freed_obj__ = 0, 
                    _if_conditional156) {
                        __result60__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value128=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value127=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_70,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value127;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
                        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value128;
                        __freed_obj__ = 0;
                        return __result60__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result61__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sClasspbool*)(right_value130=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value129=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1613))),default_value_70,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value129;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
                if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value130;
                __freed_obj__ = 0;
                return __result61__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result62__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sClasspbool*)(right_value132=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value131=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1617))),default_value_70,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value132;
        __freed_obj__ = 0;
        return __result62__;
        __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->v1=v1;
                        __freed_obj__ = 0;
                        self->v2=v2;
                        __freed_obj__ = 0;
                        __result58__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result58__;
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
_Bool _if_conditional157;
struct sClass* default_value_73;
struct sClass* __result63__;
struct sClass* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(struct sClass*));
        if(_if_conditional157=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional157) {
            __freed_obj__ = 0;
            memset(&default_value_73,0,sizeof(struct sClass*));
            __freed_obj__ = 0;
            __result63__ = __result_obj__ = default_value_73;
            __freed_obj__ = 0;
            return __result63__;
            __freed_obj__ = 0;
        }
        else {
            __result64__ = __result_obj__ = self->v1;
            __freed_obj__ = 0;
            return __result64__;
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
_Bool _if_conditional159;
struct tuple2$2charphsTypeph* result_78;
struct tuple2$2charphsTypeph* __result66__;
_Bool _if_conditional160;
struct tuple2$2charphsTypeph* __result67__;
struct tuple2$2charphsTypeph* result_79;
struct tuple2$2charphsTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional159=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional159) {
            __freed_obj__ = 0;
            memset(&result_78,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result66__ = __result_obj__ = result_78;
            __freed_obj__ = 0;
            return __result66__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->it=self->head;
        __freed_obj__ = 0;
        if(_if_conditional160=self->it,        __freed_obj__ = 0, 
        _if_conditional160) {
            __result67__ = __result_obj__ = self->it->item;
            __freed_obj__ = 0;
            return __result67__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result68__ = __result_obj__ = result_79;
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result69__ = self==((void*)0)||self->it==((void*)0);
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
struct tuple2$2charphsTypeph* result_81;
struct tuple2$2charphsTypeph* __result70__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* __result71__;
struct tuple2$2charphsTypeph* result_82;
struct tuple2$2charphsTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional161=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional161) {
            __freed_obj__ = 0;
            memset(&result_81,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result70__ = __result_obj__ = result_81;
            __freed_obj__ = 0;
            return __result70__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->it=self->it->next;
        __freed_obj__ = 0;
        if(_if_conditional162=self->it,        __freed_obj__ = 0, 
        _if_conditional162) {
            __result71__ = __result_obj__ = self->it->item;
            __freed_obj__ = 0;
            return __result71__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result72__ = __result_obj__ = result_82;
        __freed_obj__ = 0;
        return __result72__;
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
        it_85=self->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_85!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_86=it_85;
            __freed_obj__ = 0;
            it_85=it_85->next;
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
_Bool _if_conditional164;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional164=self!=((void*)0)&&self->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional164) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional165=self!=((void*)0)&&self->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional165) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional166=self!=((void*)0)&&self->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional166) {
                            if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
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
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result73__ = self->len;
        __freed_obj__ = 0;
        return __result73__;
        __freed_obj__ = 0;
}

int sStoreFieldNode_sline(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = self->sline;
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

char* sStoreFieldNode_sname(struct sStoreFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value176;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
    __result81__ = __result_obj__ = ((char*)(right_value176=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

struct sNullCheckNode* sNullCheckNode_initialize(struct sNullCheckNode* self, struct sNode* left, _Bool only_null_checker, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value177;
char* __dec_obj98;
void* right_value178;
struct sNode* __dec_obj99;
struct sNullCheckNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj98=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(info->sname))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value177;
    __freed_obj__ = 0;
    __dec_obj99=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(left))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value178;
    __freed_obj__ = 0;
    self->mOnlyNullCecker=only_null_checker;
    __freed_obj__ = 0;
    __result82__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullCheckNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result83__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value179;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
    __result84__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sNullCheckNode")));
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

_Bool sNullCheckNode_compile(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_106;
_Bool _if_conditional207;
_Bool __result85__;
void* right_value180;
struct CVALUE* left_value_107;
_Bool _if_conditional208;
void* right_value181;
char* method_name_108;
void* right_value183;
_Bool _if_conditional213;
struct sType* obj_type_111;
_Bool _if_conditional229;
struct sType* obj_type2_112;
void* right_value184;
void* right_value185;
char* __dec_obj100;
void* right_value186;
struct sFun* fun_113;
_Bool _if_conditional230;
_Bool __result90__;
void* right_value187;
struct sType* type_114;
void* right_value188;
struct CVALUE* come_value_115;
void* right_value189;
char* __dec_obj101;
void* right_value190;
struct sType* __dec_obj102;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value191;
struct CVALUE* come_value_116;
void* right_value192;
void* right_value193;
char* __dec_obj103;
void* right_value194;
struct sType* __dec_obj104;
_Bool __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_106, 0, sizeof(struct sNode*));
memset(&right_value180, 0, sizeof(void*));
memset(&left_value_107, 0, sizeof(struct CVALUE*));
memset(&right_value181, 0, sizeof(void*));
memset(&method_name_108, 0, sizeof(char*));
memset(&right_value183, 0, sizeof(void*));
memset(&obj_type_111, 0, sizeof(struct sType*));
memset(&obj_type2_112, 0, sizeof(struct sType*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&fun_113, 0, sizeof(struct sFun*));
memset(&right_value187, 0, sizeof(void*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&right_value188, 0, sizeof(void*));
memset(&come_value_115, 0, sizeof(struct CVALUE*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    left_106=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional207=!node_compile(left_106,info),    __freed_obj__ = 0, 
    _if_conditional207) {
        __result85__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result85__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional208=!self->mOnlyNullCecker&&left_value_107->type->mNoSolvedGenericsType&&left_value_107->type->mNoSolvedGenericsType->v1&&left_value_107->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_107->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    __freed_obj__ = 0, 
    _if_conditional208) {
        method_name_108=(char*)come_increment_ref_count(((char*)(right_value181=create_method_name(left_value_107->type,(_Bool)0,"expect",info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181;
        __freed_obj__ = 0;
        if(_if_conditional213=((struct sFun*)(right_value183=map$2charphsFunph_at(info->funcs,method_name_108,((void*)0))))==((void*)0),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183),
        (right_value183 && right_value183 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[1] = right_value183, 
        __freed_obj__ = 0, 
        _if_conditional213) {
            obj_type_111=left_value_107->type->mNoSolvedGenericsType->v1;
            __freed_obj__ = 0;
            if(_if_conditional229=list$1sTypeph_length(obj_type_111->mGenericsTypes)>0,            __freed_obj__ = 0, 
            _if_conditional229) {
                obj_type2_112=left_value_107->type;
                __freed_obj__ = 0;
                __dec_obj100=method_name_108;
                method_name_108=(char*)come_increment_ref_count(((char*)(right_value185=make_generics_function(obj_type2_112,(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string("expect")))),info))));
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
                if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value184;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value185;
                __freed_obj__ = 0;
            }
            else {
                err_msg(info,"require expect implementation(%s)",left_value_107->type->mClass->mName);
                __freed_obj__ = 0;
                exit(1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fun_113=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value186=map$2charphsFunphp_operator_load_element(info->funcs,method_name_108))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value186;
        __freed_obj__ = 0;
        if(_if_conditional230=fun_113==((void*)0),        __freed_obj__ = 0, 
        _if_conditional230) {
            err_msg(info,"function not found(%s)",method_name_108);
            __freed_obj__ = 0;
            __result90__ = (_Bool)1;
            if(method_name_108 && !__freed_obj__) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result90__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        type_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value187=solve_generics(fun_113->mResultType,left_value_107->type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value187;
        __freed_obj__ = 0;
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value188;
        __freed_obj__ = 0;
        __dec_obj101=come_value_115->c_value;
        come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s(%s)",method_name_108,left_value_107->c_value))));
        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value189;
        __freed_obj__ = 0;
        __dec_obj102=come_value_115->type;
        come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(type_114))));
        if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value190;
        __freed_obj__ = 0;
        come_value_115->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_115->c_value);
        __freed_obj__ = 0;
        if(method_name_108 && !__freed_obj__) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
        if(type_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional231=!gComeDebug,        __freed_obj__ = 0, 
        _if_conditional231) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_107));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional232=left_value_107->type->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional232) {
                come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 587))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value191;
                __freed_obj__ = 0;
                __dec_obj103=come_value_116->c_value;
                come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value192=make_type_name_string(left_value_107->type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),left_value_107->c_value,info->sname,info->sline))));
                if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value192;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value193;
                __freed_obj__ = 0;
                __dec_obj104=come_value_116->type;
                come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(left_value_107->type))));
                if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value194;
                __freed_obj__ = 0;
                come_value_116->var=((void*)0);
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
                __freed_obj__ = 0;
                add_come_last_code(info,"%s;\n",come_value_116->c_value);
                __freed_obj__ = 0;
                if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_107));
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result92__ = (_Bool)1;
    if(left_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result92__;
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
_Bool _if_conditional209;
void* right_value182;
_Bool _if_conditional210;
struct sFun* __result86__;
_Bool _if_conditional211;
_Bool _if_conditional212;
struct sFun* __result87__;
struct sFun* __result88__;
struct sFun* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_109, 0, sizeof(unsigned int));
memset(&it_110, 0, sizeof(unsigned int));
memset(&right_value182, 0, sizeof(void*));
            hash_109=string_get_hash_key(((char*)key))%self->size;
            __freed_obj__ = 0;
            it_110=hash_109;
            __freed_obj__ = 0;
            while(_while_condtional12=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional209=self->item_existance[it_110],                __freed_obj__ = 0, 
                _if_conditional209) {
                    if(_if_conditional210=optional$2boolbool_value(((struct optional$2boolbool*)(right_value182=string_equals(self->keys[it_110],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182),
                    (right_value182 && right_value182 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value182, 
                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __result86__ = __result_obj__ = self->items[it_110];
                        __freed_obj__ = 0;
                        return __result86__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_110++;
                    __freed_obj__ = 0;
                    if(_if_conditional211=it_110>=self->size,                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        it_110=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional212=it_110==hash_109,                        __freed_obj__ = 0, 
                        _if_conditional212) {
                            __result87__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result87__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result88__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result88__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result89__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result89__;
            __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
_Bool _if_conditional220;
_Bool _if_conditional223;
_Bool _if_conditional224;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional214=self!=((void*)0)&&self->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&self->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0)&&self->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional217=self!=((void*)0)&&self->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&self->mLambdaType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0)&&self->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional223=self!=((void*)0)&&self->mSource!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&self->mSourceHead!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional225=self!=((void*)0)&&self->mSourceHead2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional225) {
                if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional226=self!=((void*)0)&&self->mSourceDefer!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional227=self!=((void*)0)&&self->mComeHeader!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional227) {
                if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&self->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
                if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional221=self!=((void*)0)&&self->mNodes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional221) {
                        if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional222=self!=((void*)0)&&self->mVarTable!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional222) {
                        if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
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
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional233=!self->v2,                    __freed_obj__ = 0, 
                    _if_conditional233) {
                        puts("Exception: at");
                        __freed_obj__ = 0;
                        exception_stackframe();
                        __freed_obj__ = 0;
                        puts("abort.");
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result91__ = __result_obj__ = self->v1;
                    __freed_obj__ = 0;
                    return __result91__;
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
                    if(_if_conditional234=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional234) {
                        if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
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
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = self->sline;
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

char* sNullCheckNode_sname(struct sNullCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value195;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

struct sRangeCheckNode* sRangeCheckNode_initialize(struct sRangeCheckNode* self, struct sNode* left, struct sNode* begin, struct sNode* end, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value196;
char* __dec_obj105;
void* right_value197;
struct sNode* __dec_obj106;
void* right_value198;
struct sNode* __dec_obj107;
void* right_value199;
struct sNode* __dec_obj108;
struct sRangeCheckNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj105=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196;
    __freed_obj__ = 0;
    __dec_obj106=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(left))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value197;
    __freed_obj__ = 0;
    __dec_obj107=self->mBegin;
    self->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(begin))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value198;
    __freed_obj__ = 0;
    __dec_obj108=self->mEnd;
    self->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(end))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value199;
    __freed_obj__ = 0;
    __result95__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sRangeCheckNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

char* sRangeCheckNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value200;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value200=__builtin_string("sRangeCheckNode")));
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

_Bool sRangeCheckNode_compile(struct sRangeCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_117;
_Bool _if_conditional239;
_Bool __result98__;
void* right_value201;
struct CVALUE* left_value_118;
struct sNode* begin_119;
_Bool _if_conditional240;
_Bool __result99__;
void* right_value202;
struct CVALUE* begin_value_120;
struct sNode* end_121;
_Bool _if_conditional241;
_Bool __result100__;
void* right_value203;
struct CVALUE* end_value_122;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value204;
struct CVALUE* come_value_123;
void* right_value205;
void* right_value206;
char* __dec_obj109;
void* right_value207;
struct sType* __dec_obj110;
void* right_value208;
struct CVALUE* come_value_124;
void* right_value209;
void* right_value210;
char* __dec_obj111;
void* right_value211;
struct sType* __dec_obj112;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_117, 0, sizeof(struct sNode*));
memset(&right_value201, 0, sizeof(void*));
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&begin_119, 0, sizeof(struct sNode*));
memset(&right_value202, 0, sizeof(void*));
memset(&begin_value_120, 0, sizeof(struct CVALUE*));
memset(&end_121, 0, sizeof(struct sNode*));
memset(&right_value203, 0, sizeof(void*));
memset(&end_value_122, 0, sizeof(struct CVALUE*));
memset(&right_value204, 0, sizeof(void*));
memset(&come_value_123, 0, sizeof(struct CVALUE*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&come_value_124, 0, sizeof(struct CVALUE*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
    left_117=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional239=!node_compile(left_117,info),    __freed_obj__ = 0, 
    _if_conditional239) {
        __result98__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    begin_119=self->mBegin;
    __freed_obj__ = 0;
    if(_if_conditional240=!node_compile(begin_119,info),    __freed_obj__ = 0, 
    _if_conditional240) {
        __result99__ = (_Bool)0;
        if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result99__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    begin_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value202;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    end_121=self->mEnd;
    __freed_obj__ = 0;
    if(_if_conditional241=!node_compile(end_121,info),    __freed_obj__ = 0, 
    _if_conditional241) {
        __result100__ = (_Bool)0;
        if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(begin_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    end_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value203;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional242=left_value_118->type->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional242) {
        if(_if_conditional243=!gComeDebug,        __freed_obj__ = 0, 
        _if_conditional243) {
            come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 677))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value204;
            __freed_obj__ = 0;
            __dec_obj109=come_value_123->c_value;
            come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value206=xsprintf("(*((%s)%s))",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value205=make_type_name_string(left_value_118->type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),left_value_118->c_value))));
            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value205;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value206);
            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value206;
            __freed_obj__ = 0;
            left_value_118->type->mPointerNum--;
            __freed_obj__ = 0;
            __dec_obj110=come_value_123->type;
            come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(left_value_118->type))));
            if(__dec_obj110) { come_call_finalizer(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value207);
            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value207;
            __freed_obj__ = 0;
            come_value_123->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",come_value_123->c_value);
            __freed_obj__ = 0;
            if(come_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 690))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
            if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value208;
            __freed_obj__ = 0;
            __dec_obj111=come_value_124->c_value;
            come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("(*((%s)come_range_check(%s, %s, %s, \"%s\", %d)))",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value209=make_type_name_string(left_value_118->type,(_Bool)0,(_Bool)0,(_Bool)0,info)))),left_value_118->c_value,begin_value_120->c_value,end_value_122->c_value,info->sname,info->sline))));
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value209;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value210;
            __freed_obj__ = 0;
            left_value_118->type->mPointerNum--;
            __freed_obj__ = 0;
            __dec_obj112=come_value_124->type;
            come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(left_value_118->type))));
            if(__dec_obj112) { come_call_finalizer(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value211);
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value211;
            __freed_obj__ = 0;
            come_value_124->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",come_value_124->c_value);
            __freed_obj__ = 0;
            if(come_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    else {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_118));
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result101__ = (_Bool)1;
    if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,end_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
    if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(begin_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,begin_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(end_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,end_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRangeCheckNode_sline(struct sRangeCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = self->sline;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

char* sRangeCheckNode_sname(struct sRangeCheckNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value212;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value212, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value213;
char* __dec_obj113;
void* right_value214;
struct sNode* __dec_obj114;
struct sExceptionGetValueNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(info->sname))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213;
    __freed_obj__ = 0;
    __dec_obj114=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(left))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value214;
    __freed_obj__ = 0;
    __result104__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result105__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
}

_Bool compiletime_get_exception_value(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value215;
struct CVALUE* left_value_125;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value216;
char* method_name_126;
void* right_value217;
_Bool _if_conditional248;
struct sType* obj_type_127;
_Bool _if_conditional249;
struct sType* obj_type2_128;
void* right_value218;
void* right_value219;
char* __dec_obj115;
void* right_value220;
struct sFun* fun_129;
_Bool _if_conditional250;
_Bool __result106__;
void* right_value221;
struct sType* type_130;
void* right_value222;
struct CVALUE* come_value_131;
void* right_value223;
char* __dec_obj116;
void* right_value224;
struct sType* __dec_obj117;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value215, 0, sizeof(void*));
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&right_value216, 0, sizeof(void*));
memset(&method_name_126, 0, sizeof(char*));
memset(&right_value217, 0, sizeof(void*));
memset(&obj_type_127, 0, sizeof(struct sType*));
memset(&obj_type2_128, 0, sizeof(struct sType*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&fun_129, 0, sizeof(struct sFun*));
memset(&right_value221, 0, sizeof(void*));
memset(&type_130, 0, sizeof(struct sType*));
memset(&right_value222, 0, sizeof(void*));
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
    left_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value215;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if(_if_conditional246=left_value_125==((void*)0),    __freed_obj__ = 0, 
    _if_conditional246) {
    }
    else {
        if(_if_conditional247=left_value_125->type->mNoSolvedGenericsType&&left_value_125->type->mNoSolvedGenericsType->v1&&left_value_125->type->mNoSolvedGenericsType->v1->mClass&&string_operator_equals(left_value_125->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),        __freed_obj__ = 0, 
        _if_conditional247) {
            method_name_126=(char*)come_increment_ref_count(((char*)(right_value216=create_method_name(left_value_125->type,(_Bool)0,"expect",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
            if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value216;
            __freed_obj__ = 0;
            if(_if_conditional248=((struct sFun*)(right_value217=map$2charphsFunph_at(info->funcs,method_name_126,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217),
            (right_value217 && right_value217 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value217, 
            __freed_obj__ = 0, 
            _if_conditional248) {
                obj_type_127=left_value_125->type->mNoSolvedGenericsType->v1;
                __freed_obj__ = 0;
                if(_if_conditional249=list$1sTypeph_length(obj_type_127->mGenericsTypes)>0,                __freed_obj__ = 0, 
                _if_conditional249) {
                    obj_type2_128=left_value_125->type;
                    __freed_obj__ = 0;
                    __dec_obj115=method_name_126;
                    method_name_126=(char*)come_increment_ref_count(((char*)(right_value219=make_generics_function(obj_type2_128,(char*)come_increment_ref_count(((char*)(right_value218=__builtin_string("value")))),info))));
                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value218;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
                    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value219;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require expect implementation(%s)",left_value_125->type->mClass->mName);
                    __freed_obj__ = 0;
                    exit(1);
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            fun_129=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value220=map$2charphsFunphp_operator_load_element(info->funcs,method_name_126))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value220;
            __freed_obj__ = 0;
            if(_if_conditional250=fun_129==((void*)0),            __freed_obj__ = 0, 
            _if_conditional250) {
                err_msg(info,"function not found(%s)",method_name_126);
                __freed_obj__ = 0;
                __result106__ = (_Bool)1;
                if(method_name_126 && !__freed_obj__) { method_name_126 = come_decrement_ref_count(method_name_126, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result106__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_130=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=solve_generics(fun_129->mResultType,left_value_125->type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value221;
            __freed_obj__ = 0;
            come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 773))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value222);
            if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value222;
            __freed_obj__ = 0;
            __dec_obj116=come_value_131->c_value;
            come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value223=xsprintf("%s(%s)",method_name_126,left_value_125->c_value))));
            if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value223);
            if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value223;
            __freed_obj__ = 0;
            __dec_obj117=come_value_131->type;
            come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value224=sType_clone(type_130))));
            if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value224);
            if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value224;
            __freed_obj__ = 0;
            come_value_131->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",come_value_131->c_value);
            __freed_obj__ = 0;
            if(method_name_126 && !__freed_obj__) { method_name_126 = come_decrement_ref_count(method_name_126, (void*)0, (void*)0, 0, 0, 0); }
            if(type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_125));
            __freed_obj__ = 0;
            add_come_last_code(info,"%s;\n",left_value_125->c_value);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result107__ = (_Bool)1;
    if(left_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(left_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value225;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
    __result108__ = __result_obj__ = ((char*)(right_value225=__builtin_string("sExceptionGetValueNode")));
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_132;
_Bool _if_conditional251;
_Bool __result109__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_132, 0, sizeof(struct sNode*));
    left_132=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional251=!node_compile(left_132,info),    __freed_obj__ = 0, 
    _if_conditional251) {
        __result109__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result110__ = compiletime_get_exception_value(info);
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = self->sline;
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value226;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(right_value226=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value227;
void* right_value228;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value234;
struct sNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 820);
    _inf_obj_value1=come_increment_ref_count(((struct sStoreFieldNode*)(right_value228=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value227=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 820)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result115__ = __result_obj__ = ((struct sNode*)(right_value234=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value228;
    __freed_obj__ = 0;
    return __result115__;
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
void* right_value235;
char* __dec_obj122;
void* right_value236;
struct sNode* __dec_obj123;
void* right_value237;
char* __dec_obj124;
struct sLoadFieldNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(info->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235;
    __freed_obj__ = 0;
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value236;
    __freed_obj__ = 0;
    __dec_obj124=self->mName;
    self->mName=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(name))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value237;
    __freed_obj__ = 0;
    __result116__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result116__;
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
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value238;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value238=__builtin_string("sLoadFieldNode")));
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_134;
void* right_value239;
char* name_135;
_Bool _if_conditional265;
_Bool __result119__;
void* right_value240;
struct CVALUE* left_value_136;
struct sType* left_type_137;
void* right_value241;
struct sType* left_type2_138;
struct sClass* klass_139;
void* right_value242;
struct sType* field_type_140;
int index_141;
char* child_field_name_142;
void* right_value243;
struct list$1tuple2$2charphsTypephph* o2_saved_143;
struct tuple2$2charphsTypeph* field_144;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* field_name_145;
struct sType* field_type2_146;
_Bool _if_conditional266;
void* right_value244;
struct sType* __dec_obj125;
_Bool _if_conditional267;
struct list$1tuple2$2charphsTypephph* o2_saved_147;
struct tuple2$2charphsTypeph* field_148;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* field_name_149;
struct sType* field_type2_150;
struct sClass* klass2_151;
struct list$1tuple2$2charphsTypephph* o2_saved_152;
struct tuple2$2charphsTypeph* field2_153;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* field_name2_154;
struct sType* field_type3_155;
_Bool _if_conditional268;
void* right_value245;
char* __dec_obj126;
void* right_value246;
struct sType* __dec_obj127;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value247;
struct sType* __dec_obj128;
_Bool _if_conditional271;
_Bool __result120__;
void* right_value248;
struct CVALUE* come_value_156;
_Bool _if_conditional272;
_Bool _if_conditional273;
void* right_value249;
char* __dec_obj129;
void* right_value250;
char* __dec_obj130;
_Bool _if_conditional274;
void* right_value251;
char* __dec_obj131;
void* right_value252;
char* __dec_obj132;
void* right_value253;
struct sType* __dec_obj133;
_Bool _if_conditional275;
void* right_value254;
struct sType* __dec_obj134;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_134, 0, sizeof(struct sNode*));
memset(&right_value239, 0, sizeof(void*));
memset(&name_135, 0, sizeof(char*));
memset(&right_value240, 0, sizeof(void*));
memset(&left_value_136, 0, sizeof(struct CVALUE*));
memset(&left_type_137, 0, sizeof(struct sType*));
memset(&right_value241, 0, sizeof(void*));
memset(&left_type2_138, 0, sizeof(struct sType*));
memset(&klass_139, 0, sizeof(struct sClass*));
memset(&right_value242, 0, sizeof(void*));
memset(&field_type_140, 0, sizeof(struct sType*));
memset(&index_141, 0, sizeof(int));
memset(&child_field_name_142, 0, sizeof(char*));
memset(&right_value243, 0, sizeof(void*));
memset(&o2_saved_143, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_144, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type2_146, 0, sizeof(struct sType*));
memset(&field_name_145, 0, sizeof(char*));
memset(&field_type2_146, 0, sizeof(struct sType*));
memset(&right_value244, 0, sizeof(void*));
memset(&o2_saved_147, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_149, 0, sizeof(char*));
memset(&field_type2_150, 0, sizeof(struct sType*));
memset(&field_name_149, 0, sizeof(char*));
memset(&field_type2_150, 0, sizeof(struct sType*));
memset(&klass2_151, 0, sizeof(struct sClass*));
memset(&o2_saved_152, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field2_153, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name2_154, 0, sizeof(char*));
memset(&field_type3_155, 0, sizeof(struct sType*));
memset(&field_name2_154, 0, sizeof(char*));
memset(&field_type3_155, 0, sizeof(struct sType*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&come_value_156, 0, sizeof(struct CVALUE*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
    left_134=self->mLeft;
    __freed_obj__ = 0;
    name_135=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(self->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value239;
    __freed_obj__ = 0;
    if(_if_conditional265=!node_compile(left_134,info),    __freed_obj__ = 0, 
    _if_conditional265) {
        __result119__ = (_Bool)0;
        if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result119__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value240;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_137=left_value_136->type;
    __freed_obj__ = 0;
    left_type2_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=solve_generics(left_type_137,left_type_137,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value241;
    __freed_obj__ = 0;
    klass_139=left_type2_138->mClass;
    __freed_obj__ = 0;
    klass_139=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value242=map$2charphsClassphp_operator_load_element(info->classes,klass_139->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value242;
    __freed_obj__ = 0;
    field_type_140=((void*)0);
    __freed_obj__ = 0;
    index_141=0;
    __freed_obj__ = 0;
    child_field_name_142=((void*)0);
    __freed_obj__ = 0;
    klass_139=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value243=map$2charphsClassphp_operator_load_element(info->classes,klass_139->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value243;
    __freed_obj__ = 0;
    for(
    o2_saved_143=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_139->mFields)),field_144=list$1tuple2$2charphsTypephph_begin((o2_saved_143)) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !list$1tuple2$2charphsTypephph_end((o2_saved_143)) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    field_144=list$1tuple2$2charphsTypephph_next((o2_saved_143)) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var4=field_144;
        field_name_145=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
        field_type2_146=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
        __freed_obj__ = 0;
        if(_if_conditional266=string_operator_equals(field_name_145,name_135),        __freed_obj__ = 0, 
        _if_conditional266) {
            __dec_obj125=field_type_140;
            field_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(field_type2_146))));
            if(__dec_obj125) { come_call_finalizer(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
            if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value244;
            __freed_obj__ = 0;
            if(field_name_145 && !__freed_obj__) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        index_141++;
        __freed_obj__ = 0;
        if(field_name_145 && !__freed_obj__) { field_name_145 = come_decrement_ref_count(field_name_145, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type2_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_143 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional267=index_141==list$1tuple2$2charphsTypephph_length(klass_139->mFields),    __freed_obj__ = 0, 
    _if_conditional267) {
        index_141=0;
        __freed_obj__ = 0;
        for(
        o2_saved_147=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_139->mFields)),field_148=list$1tuple2$2charphsTypephph_begin((o2_saved_147)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !list$1tuple2$2charphsTypephph_end((o2_saved_147)) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        field_148=list$1tuple2$2charphsTypephph_next((o2_saved_147)) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var5=field_148;
            field_name_149=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
            field_type2_150=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
            __freed_obj__ = 0;
            klass2_151=field_type2_150->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_152=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass2_151->mFields)),field2_153=list$1tuple2$2charphsTypephph_begin((o2_saved_152)) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA7=            !list$1tuple2$2charphsTypephph_end((o2_saved_152)) ,            __freed_obj__ = 0, 
            _for_condtionalA7;            field2_153=list$1tuple2$2charphsTypephph_next((o2_saved_152)) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var6=field2_153;
                field_name2_154=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type3_155=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                __freed_obj__ = 0;
                if(_if_conditional268=string_operator_equals(field_name2_154,name_135),                __freed_obj__ = 0, 
                _if_conditional268) {
                    __dec_obj126=child_field_name_142;
                    child_field_name_142=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(field_name_149))));
                    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value245;
                    __freed_obj__ = 0;
                    __dec_obj127=field_type_140;
                    field_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value246=sType_clone(field_type3_155))));
                    if(__dec_obj127) { come_call_finalizer(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
                    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value246;
                    __freed_obj__ = 0;
                    if(field_name2_154 && !__freed_obj__) { field_name2_154 = come_decrement_ref_count(field_name2_154, (void*)0, (void*)0, 0, 0, 0); }
                    if(field_type3_155 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(field_name2_154 && !__freed_obj__) { field_name2_154 = come_decrement_ref_count(field_name2_154, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type3_155 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type3_155, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(o2_saved_152 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_152, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional269=child_field_name_142,            __freed_obj__ = 0, 
            _if_conditional269) {
                if(field_name_149 && !__freed_obj__) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional270=string_operator_equals(field_name_149,name_135),            __freed_obj__ = 0, 
            _if_conditional270) {
                __dec_obj128=field_type_140;
                field_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value247=sType_clone(field_type2_150))));
                if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value247;
                __freed_obj__ = 0;
                if(field_name_149 && !__freed_obj__) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
                if(field_type2_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            index_141++;
            __freed_obj__ = 0;
            if(field_name_149 && !__freed_obj__) { field_name_149 = come_decrement_ref_count(field_name_149, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type2_150 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type2_150, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_147 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_147, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional271=index_141==list$1tuple2$2charphsTypephph_length(klass_139->mFields),        __freed_obj__ = 0, 
        _if_conditional271) {
            err_msg(info,"field not found(%s) in %s(2)",name_135,klass_139->mName);
            __freed_obj__ = 0;
            __result120__ = (_Bool)0;
            if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_136 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_142 && !__freed_obj__) { child_field_name_142 = come_decrement_ref_count(child_field_name_142, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result120__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 922))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value248;
    __freed_obj__ = 0;
    if(_if_conditional272=left_value_136->type->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional272) {
        if(_if_conditional273=child_field_name_142,        __freed_obj__ = 0, 
        _if_conditional273) {
            __dec_obj129=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("%s->%s.%s",left_value_136->c_value,child_field_name_142,name_135))));
            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
            if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value249;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj130=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("%s->%s",left_value_136->c_value,name_135))));
            if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value250;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional274=child_field_name_142,        __freed_obj__ = 0, 
        _if_conditional274) {
            __dec_obj131=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s.%s.%s",left_value_136->c_value,child_field_name_142,name_135))));
            if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value251;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj132=come_value_156->c_value;
            come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value252=xsprintf("%s.%s",left_value_136->c_value,name_135))));
            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value252;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj133=come_value_156->type;
    come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(field_type_140))));
    if(__dec_obj133) { come_call_finalizer(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value253);
    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value253;
    __freed_obj__ = 0;
    come_value_156->var=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional275=list$1sNodeph_length(come_value_156->type->mArrayNum)==1,    __freed_obj__ = 0, 
    _if_conditional275) {
        __dec_obj134=come_value_156->type->mOriginalLoadVarType->v1;
        come_value_156->type->mOriginalLoadVarType->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(come_value_156->type))));
        if(__dec_obj134) { come_call_finalizer(sType_finalize,__dec_obj134, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254;
        __freed_obj__ = 0;
        list$1sNodeph_reset(come_value_156->type->mArrayNum);
        __freed_obj__ = 0;
        come_value_156->type->mPointerNum++;
        __freed_obj__ = 0;
        come_value_156->type->mOriginalTypeNamePointerNum=come_value_156->type->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
    __freed_obj__ = 0;
    __result123__ = (_Bool)1;
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_136 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_142 && !__freed_obj__) { child_field_name_142 = come_decrement_ref_count(child_field_name_142, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
    if(name_135 && !__freed_obj__) { name_135 = come_decrement_ref_count(name_135, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_136 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_142 && !__freed_obj__) { child_field_name_142 = come_decrement_ref_count(child_field_name_142, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result121__ = self->len;
        __freed_obj__ = 0;
        return __result121__;
        __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_157;
_Bool _while_condtional13;
struct list_item$1sNodeph* prev_it_158;
struct list$1sNodeph* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_157, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_158, 0, sizeof(struct list_item$1sNodeph*));
            it_157=self->head;
            __freed_obj__ = 0;
            while(_while_condtional13=it_157!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional13) {
                prev_it_158=it_157;
                __freed_obj__ = 0;
                it_157=it_157->next;
                __freed_obj__ = 0;
                if(prev_it_158 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->head=((void*)0);
            __freed_obj__ = 0;
            self->tail=((void*)0);
            __freed_obj__ = 0;
            self->len=0;
            __freed_obj__ = 0;
            __result122__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = self->sline;
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value255;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value255, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(right_value255=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value256;
char* __dec_obj135;
void* right_value257;
struct sNode* __dec_obj136;
void* right_value258;
struct sNode* __dec_obj137;
void* right_value259;
struct list$1sNodeph* __dec_obj138;
struct sStoreArrayNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj135=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(info->sname))));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value256;
    __freed_obj__ = 0;
    __dec_obj136=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=sNode_clone(left))));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value257;
    __freed_obj__ = 0;
    __dec_obj137=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(right))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value258;
    __freed_obj__ = 0;
    __dec_obj138=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value259=list$1sNodephp_clone(array_num))));
    if(__dec_obj138) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value259;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __result126__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result126__;
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
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value260;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value260, 0, sizeof(void*));
    __result128__ = __result_obj__ = ((char*)(right_value260=__builtin_string("sStoreArrayNode")));
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

_Bool sStoreArrayNode_compile(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_159;
struct sNode* right_160;
struct list$1sNodeph* array_num_nodes_161;
_Bool _if_conditional280;
_Bool __result129__;
void* right_value261;
struct CVALUE* left_value_162;
struct sType* left_type_163;
void* right_value262;
void* right_value263;
struct list$1CVALUEph* array_num_166;
struct list$1sNodeph* o2_saved_167;
struct sNode* it_170;
_Bool _for_condtionalA8;
_Bool _if_conditional285;
_Bool __result138__;
void* right_value264;
struct CVALUE* c_value_173;
_Bool _if_conditional286;
_Bool __result139__;
void* right_value265;
struct CVALUE* right_value_174;
struct sType* right_type_175;
struct sClass* klass_176;
void* right_value266;
struct sType* type_177;
char* fun_name_178;
_Bool calling_fun_179;
_Bool _if_conditional287;
void* right_value271;
_Bool _if_conditional292;
void* right_value272;
struct CVALUE* come_value_184;
_Bool _if_conditional293;
int i_185;
_Bool _for_condtionalA9;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value273;
void* right_value274;
struct buffer* buf_198;
struct list$1CVALUEph* o2_saved_199;
struct CVALUE* it_202;
_Bool _for_condtionalA10;
void* right_value275;
void* right_value276;
char* left_value_code_205;
void* right_value277;
_Bool _if_conditional318;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
char* __dec_obj140;
_Bool _if_conditional322;
void* right_value278;
char* __dec_obj141;
_Bool _if_conditional323;
void* right_value279;
char* __dec_obj142;
void* right_value280;
char* __dec_obj143;
_Bool _if_conditional324;
void* right_value281;
char* __dec_obj144;
void* right_value282;
char* __dec_obj145;
_Bool _if_conditional325;
_Bool _if_conditional326;
_Bool _if_conditional327;
char* __dec_obj146;
_Bool _if_conditional328;
void* right_value283;
char* __dec_obj147;
_Bool _if_conditional329;
void* right_value284;
char* __dec_obj148;
void* right_value285;
char* __dec_obj149;
_Bool _if_conditional330;
void* right_value286;
char* __dec_obj150;
void* right_value287;
char* __dec_obj151;
_Bool __result155__;
int right_value_id_206;
_Bool _if_conditional331;
_Bool _if_conditional332;
void* right_value288;
char* __dec_obj152;
_Bool _if_conditional333;
void* right_value289;
char* __dec_obj153;
_Bool __result156__;
void* right_value290;
struct sType* result_type_207;
void* right_value291;
void* right_value292;
struct list$1sNodeph* __dec_obj154;
struct sType* __dec_obj155;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_159, 0, sizeof(struct sNode*));
memset(&right_160, 0, sizeof(struct sNode*));
memset(&array_num_nodes_161, 0, sizeof(struct list$1sNodeph*));
memset(&right_value261, 0, sizeof(void*));
memset(&left_value_162, 0, sizeof(struct CVALUE*));
memset(&left_type_163, 0, sizeof(struct sType*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&array_num_166, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_167, 0, sizeof(struct list$1sNodeph*));
memset(&it_170, 0, sizeof(struct sNode*));
memset(&right_value264, 0, sizeof(void*));
memset(&c_value_173, 0, sizeof(struct CVALUE*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value_174, 0, sizeof(struct CVALUE*));
memset(&right_type_175, 0, sizeof(struct sType*));
memset(&klass_176, 0, sizeof(struct sClass*));
memset(&right_value266, 0, sizeof(void*));
memset(&type_177, 0, sizeof(struct sType*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&calling_fun_179, 0, sizeof(_Bool));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&come_value_184, 0, sizeof(struct CVALUE*));
memset(&i_185, 0, sizeof(int));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&buf_198, 0, sizeof(struct buffer*));
memset(&o2_saved_199, 0, sizeof(struct list$1CVALUEph*));
memset(&it_202, 0, sizeof(struct CVALUE*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&left_value_code_205, 0, sizeof(char*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value_id_206, 0, sizeof(int));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&result_type_207, 0, sizeof(struct sType*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
    left_159=self->mLeft;
    __freed_obj__ = 0;
    right_160=self->mRight;
    __freed_obj__ = 0;
    array_num_nodes_161=self->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional280=!node_compile(left_159,info),    __freed_obj__ = 0, 
    _if_conditional280) {
        __result129__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result129__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value261;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_163=left_value_162->type;
    __freed_obj__ = 0;
    array_num_166=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value263=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value262=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1015))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value262);
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value262;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value263);
    if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value263;
    __freed_obj__ = 0;
    for(
    o2_saved_167=(array_num_nodes_161),it_170=list$1sNodeph_begin((o2_saved_167)) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !list$1sNodeph_end((o2_saved_167)) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_170=list$1sNodeph_next((o2_saved_167)) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional285=!node_compile(it_170,info),        __freed_obj__ = 0, 
        _if_conditional285) {
            __result138__ = (_Bool)0;
            if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result138__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_173=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value264;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(array_num_166,(struct CVALUE*)come_increment_ref_count(c_value_173));
        __freed_obj__ = 0;
        if(c_value_173 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_173, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional286=!node_compile(right_160,info),    __freed_obj__ = 0, 
    _if_conditional286) {
        __result139__ = (_Bool)0;
        if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result139__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value265;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_type_175=right_value_174->type;
    __freed_obj__ = 0;
    klass_176=left_value_162->type->mClass;
    __freed_obj__ = 0;
    type_177=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(left_value_162->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value266;
    __freed_obj__ = 0;
    fun_name_178="operator_store_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional287=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional287) {
        calling_fun_179=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_179=operator_overload_fun2(type_177,fun_name_178,left_value_162,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value271=list$1CVALUEphp_operator_load_element(array_num_166,0)))),right_value_174,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value271;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional292=!calling_fun_179,    __freed_obj__ = 0, 
    _if_conditional292) {
        come_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1051))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value272;
        __freed_obj__ = 0;
        if(_if_conditional293=list$1sNodeph_length(left_type_163->mArrayNum)>0,        __freed_obj__ = 0, 
        _if_conditional293) {
            for(
            i_185=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA9=            i_185<list$1CVALUEph_length(array_num_166) ,            __freed_obj__ = 0, 
            _for_condtionalA9;            i_185++ ,            __freed_obj__ = 0, 
            0            ){
                list$1sNodeph_delete(left_type_163->mArrayNum,-1,-1);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional312=left_type_163->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional312) {
                left_type_163->mPointerNum-=list$1CVALUEph_length(array_num_166);
                __freed_obj__ = 0;
                if(_if_conditional313=left_type_163->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional313) {
                    left_type_163->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buf_198=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value274=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value273=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1072))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value273;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value274;
        __freed_obj__ = 0;
        buffer_append_str(buf_198,left_value_162->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_199=(struct list$1CVALUEph*)come_increment_ref_count((array_num_166)),it_202=list$1CVALUEph_begin((o2_saved_199)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_199)) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_202=list$1CVALUEph_next((o2_saved_199)) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(buf_198,((char*)(right_value275=xsprintf("[%s]",it_202->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
            if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value275;
            __freed_obj__ = 0;
        }
        if(o2_saved_199 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_205=(char*)come_increment_ref_count(((char*)(right_value276=buffer_to_string(buf_198))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value276;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value277=xsprintf("array is assinged to"))),left_type_163,right_type_175,right_value_174,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value277;
        __freed_obj__ = 0;
        if(_if_conditional318=left_type_163->mHeap&&right_type_175->mHeap&&left_type_163->mPointerNum>0&&right_type_175->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional318) {
            if(_if_conditional319=left_value_162->type->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional319) {
                decrement_ref_count_object(left_type_163,left_value_code_205,info,(_Bool)0);
                __freed_obj__ = 0;
                if(_if_conditional320=right_value_174->var,                __freed_obj__ = 0, 
                _if_conditional320) {
                    if(_if_conditional321=right_value_174->var->mType->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional321) {
                        __dec_obj140=right_value_174->var->mCValueName;
                        right_value_174->var->mCValueName=((void*)0);
                        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional322=right_value_174->var->mType->mShare,                        __freed_obj__ = 0, 
                        _if_conditional322) {
                            __dec_obj141=right_value_174->c_value;
                            right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value278=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                            if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value278;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional323=right_value_174->var->mType->mClone,                            __freed_obj__ = 0, 
                            _if_conditional323) {
                                __dec_obj142=right_value_174->c_value;
                                right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value279=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                                if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value279;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj143=right_value_174->c_value;
                                right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value280=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
                                if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value280;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional324=right_value_174->type->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional324) {
                    }
                    else {
                        __dec_obj144=right_value_174->c_value;
                        right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value281=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
                        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value281;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj145=come_value_184->c_value;
                come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value282=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value282;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional325=left_value_162->type->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional325) {
                    decrement_ref_count_object(left_type_163,left_value_code_205,info,(_Bool)0);
                    __freed_obj__ = 0;
                    if(_if_conditional326=right_value_174->var,                    __freed_obj__ = 0, 
                    _if_conditional326) {
                        if(_if_conditional327=right_value_174->var->mType->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional327) {
                            __dec_obj146=right_value_174->var->mCValueName;
                            right_value_174->var->mCValueName=((void*)0);
                            if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional328=right_value_174->var->mType->mShare,                            __freed_obj__ = 0, 
                            _if_conditional328) {
                                __dec_obj147=right_value_174->c_value;
                                right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value283=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                                if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value283;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional329=right_value_174->var->mType->mClone,                                __freed_obj__ = 0, 
                                _if_conditional329) {
                                    __dec_obj148=right_value_174->c_value;
                                    right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value284=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
                                    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value284;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj149=right_value_174->c_value;
                                    right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value285=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                                    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
                                    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value285;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional330=right_value_174->type->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional330) {
                        }
                        else {
                            __dec_obj150=right_value_174->c_value;
                            right_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value286=increment_ref_count_object(right_value_174->type,right_value_174->c_value,info))));
                            if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                            if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value286;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj151=come_value_184->c_value;
                    come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
                    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value287;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_205,left_value_162->type->mPointerNum);
                    __freed_obj__ = 0;
                    __result155__ = (_Bool)0;
                    if(come_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_198 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_205 && !__freed_obj__) { left_value_code_205 = come_decrement_ref_count(left_value_code_205, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result155__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            right_value_id_206=get_right_value_id_from_obj((char*)come_increment_ref_count(right_value_174->c_value));
            __freed_obj__ = 0;
            if(_if_conditional331=right_value_id_206!=-1,            __freed_obj__ = 0, 
            _if_conditional331) {
                remove_object_from_right_values(right_value_id_206,info);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional332=left_value_162->type->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional332) {
                __dec_obj152=come_value_184->c_value;
                come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value288=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
                if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value288;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional333=left_value_162->type->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional333) {
                    __dec_obj153=come_value_184->c_value;
                    come_value_184->c_value=(char*)come_increment_ref_count(((char*)(right_value289=xsprintf("%s=%s",left_value_code_205,right_value_174->c_value))));
                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
                    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value289;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_205,left_value_162->type->mPointerNum);
                    __freed_obj__ = 0;
                    __result156__ = (_Bool)0;
                    if(come_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_198 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_198, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_205 && !__freed_obj__) { left_value_code_205 = come_decrement_ref_count(left_value_code_205, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result156__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_207=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(left_type_163))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value290;
        __freed_obj__ = 0;
        __dec_obj154=result_type_207->mArrayNum;
        result_type_207->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value292=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value291=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1166))))))));
        if(__dec_obj154) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value291);
        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value291;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value292;
        __freed_obj__ = 0;
        __dec_obj155=come_value_184->type;
        come_value_184->type=(struct sType*)come_increment_ref_count(result_type_207);
        if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_value_184->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_184));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_184->c_value);
        __freed_obj__ = 0;
        if(come_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_198 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_205 && !__freed_obj__) { left_value_code_205 = come_decrement_ref_count(left_value_code_205, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_207 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result157__ = (_Bool)1;
    if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
    if(left_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_166 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        __freed_obj__ = 0;
        self->tail=((void*)0);
        __freed_obj__ = 0;
        self->len=0;
        __freed_obj__ = 0;
        __result130__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_164;
_Bool _while_condtional14;
struct list_item$1CVALUEph* prev_it_165;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_164, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_165, 0, sizeof(struct list_item$1CVALUEph*));
            it_164=self->head;
            __freed_obj__ = 0;
            while(_while_condtional14=it_164!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional14) {
                prev_it_165=it_164;
                __freed_obj__ = 0;
                it_164=it_164->next;
                __freed_obj__ = 0;
                if(prev_it_165 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_165, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional281;
struct sNode* result_168;
struct sNode* __result131__;
_Bool _if_conditional282;
struct sNode* __result132__;
struct sNode* result_169;
struct sNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_168, 0, sizeof(struct sNode*));
memset(&result_169, 0, sizeof(struct sNode*));
        if(_if_conditional281=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional281) {
            __freed_obj__ = 0;
            memset(&result_168,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result131__ = __result_obj__ = result_168;
            __freed_obj__ = 0;
            return __result131__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->it=self->head;
        __freed_obj__ = 0;
        if(_if_conditional282=self->it,        __freed_obj__ = 0, 
        _if_conditional282) {
            __result132__ = __result_obj__ = self->it->item;
            __freed_obj__ = 0;
            return __result132__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_169,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result133__ = __result_obj__ = result_169;
        __freed_obj__ = 0;
        return __result133__;
        __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result134__ = self==((void*)0)||self->it==((void*)0);
        __freed_obj__ = 0;
        return __result134__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
struct sNode* result_171;
struct sNode* __result135__;
_Bool _if_conditional284;
struct sNode* __result136__;
struct sNode* result_172;
struct sNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_171, 0, sizeof(struct sNode*));
memset(&result_172, 0, sizeof(struct sNode*));
        if(_if_conditional283=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional283) {
            __freed_obj__ = 0;
            memset(&result_171,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result135__ = __result_obj__ = result_171;
            __freed_obj__ = 0;
            return __result135__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->it=self->it->next;
        __freed_obj__ = 0;
        if(_if_conditional284=self->it,        __freed_obj__ = 0, 
        _if_conditional284) {
            __result136__ = __result_obj__ = self->it->item;
            __freed_obj__ = 0;
            return __result136__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_172,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result137__ = __result_obj__ = result_172;
        __freed_obj__ = 0;
        return __result137__;
        __freed_obj__ = 0;
}

static struct optional$2CVALUEphbool* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional288;
struct list_item$1CVALUEph* it_180;
int i_181;
_Bool _while_condtional15;
_Bool _if_conditional289;
void* right_value267;
void* right_value268;
struct optional$2CVALUEphbool* __result141__;
struct CVALUE* default_value_182;
void* right_value269;
void* right_value270;
struct optional$2CVALUEphbool* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_180, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_181, 0, sizeof(int));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&default_value_182, 0, sizeof(struct CVALUE*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
            if(_if_conditional288=position<0,            __freed_obj__ = 0, 
            _if_conditional288) {
                position+=self->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_180=self->head;
            __freed_obj__ = 0;
            i_181=0;
            __freed_obj__ = 0;
            while(_while_condtional15=it_180!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional15) {
                if(_if_conditional289=position==i_181,                __freed_obj__ = 0, 
                _if_conditional289) {
                    __result141__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value268=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value267=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 747)))),(struct CVALUE*)come_increment_ref_count(it_180->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value267;
                    __freed_obj__ = 0;
                    return __result141__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_180=it_180->next;
                __freed_obj__ = 0;
                i_181++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_182,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result142__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2CVALUEphbool*)(right_value270=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value269=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 755))),(struct CVALUE*)come_increment_ref_count(default_value_182),(_Bool)0))));
            if(default_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
            if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value269;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value270);
            if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value270;
            __freed_obj__ = 0;
            return __result142__;
            __freed_obj__ = 0;
            if(default_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* __dec_obj139;
struct optional$2CVALUEphbool* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj139=self->v1;
                        self->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj139) { come_call_finalizer(CVALUE_finalize,__dec_obj139, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->v2=v2;
                        __freed_obj__ = 0;
                        __result140__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result140__;
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
_Bool _if_conditional290;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional290=self!=((void*)0)&&self->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional290) {
                                if(self->v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional291;
struct CVALUE* default_value_183;
struct CVALUE* __result143__;
struct CVALUE* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_183, 0, sizeof(struct CVALUE*));
            if(_if_conditional291=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional291) {
                __freed_obj__ = 0;
                memset(&default_value_183,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result143__ = __result_obj__ = default_value_183;
                __freed_obj__ = 0;
                return __result143__;
                __freed_obj__ = 0;
            }
            else {
                __result144__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result144__;
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
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result145__ = self->len;
                __freed_obj__ = 0;
                return __result145__;
                __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_delete(struct list$1sNodeph* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
_Bool _if_conditional295;
_Bool _if_conditional296;
int tmp_186;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
struct list$1sNodeph* __result146__;
_Bool _if_conditional300;
_Bool _if_conditional301;
struct list_item$1sNodeph* it_187;
int i_188;
_Bool _while_condtional16;
_Bool _if_conditional302;
struct list_item$1sNodeph* prev_it_189;
_Bool _if_conditional303;
_Bool _if_conditional304;
struct list_item$1sNodeph* it_190;
int i_191;
_Bool _while_condtional17;
_Bool _if_conditional305;
_Bool _if_conditional306;
struct list_item$1sNodeph* prev_it_192;
struct list_item$1sNodeph* it_193;
struct list_item$1sNodeph* head_prev_it_194;
struct list_item$1sNodeph* tail_it_195;
int i_196;
_Bool _while_condtional18;
_Bool _if_conditional307;
_Bool _if_conditional308;
_Bool _if_conditional309;
struct list_item$1sNodeph* prev_it_197;
_Bool _if_conditional310;
_Bool _if_conditional311;
struct list$1sNodeph* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_186, 0, sizeof(int));
memset(&it_187, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_188, 0, sizeof(int));
memset(&prev_it_189, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_190, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_191, 0, sizeof(int));
memset(&prev_it_192, 0, sizeof(struct list_item$1sNodeph*));
memset(&it_193, 0, sizeof(struct list_item$1sNodeph*));
memset(&head_prev_it_194, 0, sizeof(struct list_item$1sNodeph*));
memset(&tail_it_195, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_196, 0, sizeof(int));
memset(&prev_it_197, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional294=head<0,                    __freed_obj__ = 0, 
                    _if_conditional294) {
                        head+=self->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional295=tail<0,                    __freed_obj__ = 0, 
                    _if_conditional295) {
                        tail+=self->len+1;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional296=head>tail,                    __freed_obj__ = 0, 
                    _if_conditional296) {
                        tmp_186=tail;
                        __freed_obj__ = 0;
                        tail=head;
                        __freed_obj__ = 0;
                        head=tmp_186;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional297=head<0,                    __freed_obj__ = 0, 
                    _if_conditional297) {
                        head=0;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional298=tail>self->len,                    __freed_obj__ = 0, 
                    _if_conditional298) {
                        tail=self->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional299=head==tail,                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        __result146__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result146__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional300=head==0&&tail==self->len,                    __freed_obj__ = 0, 
                    _if_conditional300) {
                        list$1sNodeph_reset(self);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional301=head==0,                        __freed_obj__ = 0, 
                        _if_conditional301) {
                            it_187=self->head;
                            __freed_obj__ = 0;
                            i_188=0;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_187!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional302=i_188<tail,                                __freed_obj__ = 0, 
                                _if_conditional302) {
                                    prev_it_189=it_187;
                                    __freed_obj__ = 0;
                                    it_187=it_187->next;
                                    __freed_obj__ = 0;
                                    i_188++;
                                    __freed_obj__ = 0;
                                    if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    self->len--;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional303=i_188==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional303) {
                                        self->head=it_187;
                                        __freed_obj__ = 0;
                                        self->head->prev=((void*)0);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_187=it_187->next;
                                        __freed_obj__ = 0;
                                        i_188++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional304=tail==self->len,                            __freed_obj__ = 0, 
                            _if_conditional304) {
                                it_190=self->head;
                                __freed_obj__ = 0;
                                i_191=0;
                                __freed_obj__ = 0;
                                while(_while_condtional17=it_190!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional17) {
                                    if(_if_conditional305=i_191==head,                                    __freed_obj__ = 0, 
                                    _if_conditional305) {
                                        self->tail=it_190->prev;
                                        __freed_obj__ = 0;
                                        self->tail->next=((void*)0);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional306=i_191>=head,                                    __freed_obj__ = 0, 
                                    _if_conditional306) {
                                        prev_it_192=it_190;
                                        __freed_obj__ = 0;
                                        it_190=it_190->next;
                                        __freed_obj__ = 0;
                                        i_191++;
                                        __freed_obj__ = 0;
                                        if(prev_it_192 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        self->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_190=it_190->next;
                                        __freed_obj__ = 0;
                                        i_191++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                it_193=self->head;
                                __freed_obj__ = 0;
                                head_prev_it_194=((void*)0);
                                __freed_obj__ = 0;
                                tail_it_195=((void*)0);
                                __freed_obj__ = 0;
                                i_196=0;
                                __freed_obj__ = 0;
                                while(_while_condtional18=it_193!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional18) {
                                    if(_if_conditional307=i_196==head,                                    __freed_obj__ = 0, 
                                    _if_conditional307) {
                                        head_prev_it_194=it_193->prev;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional308=i_196==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional308) {
                                        tail_it_195=it_193;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional309=i_196>=head&&i_196<tail,                                    __freed_obj__ = 0, 
                                    _if_conditional309) {
                                        prev_it_197=it_193;
                                        __freed_obj__ = 0;
                                        it_193=it_193->next;
                                        __freed_obj__ = 0;
                                        i_196++;
                                        __freed_obj__ = 0;
                                        if(prev_it_197 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_197, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        self->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_193=it_193->next;
                                        __freed_obj__ = 0;
                                        i_196++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional310=head_prev_it_194!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional310) {
                                    head_prev_it_194->next=tail_it_195;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional311=tail_it_195!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional311) {
                                    tail_it_195->prev=head_prev_it_194;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result147__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result147__;
                    __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional314;
struct CVALUE* result_200;
struct CVALUE* __result148__;
_Bool _if_conditional315;
struct CVALUE* __result149__;
struct CVALUE* result_201;
struct CVALUE* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_200, 0, sizeof(struct CVALUE*));
memset(&result_201, 0, sizeof(struct CVALUE*));
            if(_if_conditional314=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional314) {
                __freed_obj__ = 0;
                memset(&result_200,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result148__ = __result_obj__ = result_200;
                __freed_obj__ = 0;
                return __result148__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->head;
            __freed_obj__ = 0;
            if(_if_conditional315=self->it,            __freed_obj__ = 0, 
            _if_conditional315) {
                __result149__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_201,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result150__ = __result_obj__ = result_201;
            __freed_obj__ = 0;
            return __result150__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result151__ = self==((void*)0)||self->it==((void*)0);
            __freed_obj__ = 0;
            return __result151__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional316;
struct CVALUE* result_203;
struct CVALUE* __result152__;
_Bool _if_conditional317;
struct CVALUE* __result153__;
struct CVALUE* result_204;
struct CVALUE* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_203, 0, sizeof(struct CVALUE*));
memset(&result_204, 0, sizeof(struct CVALUE*));
            if(_if_conditional316=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional316) {
                __freed_obj__ = 0;
                memset(&result_203,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result152__ = __result_obj__ = result_203;
                __freed_obj__ = 0;
                return __result152__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->it->next;
            __freed_obj__ = 0;
            if(_if_conditional317=self->it,            __freed_obj__ = 0, 
            _if_conditional317) {
                __result153__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result153__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_204,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result154__ = __result_obj__ = result_204;
            __freed_obj__ = 0;
            return __result154__;
            __freed_obj__ = 0;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = self->sline;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value293;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value293, 0, sizeof(void*));
    __result159__ = __result_obj__ = ((char*)(right_value293=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value294;
char* __dec_obj156;
void* right_value295;
struct list$1sNodeph* __dec_obj157;
void* right_value296;
struct sNode* __dec_obj158;
struct sLoadArrayNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj156=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string(info->sname))));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value294;
    __freed_obj__ = 0;
    __dec_obj157=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value295=list$1sNodephp_clone(array_num))));
    if(__dec_obj157) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value295;
    __freed_obj__ = 0;
    __dec_obj158=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(left))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value296;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __result160__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result160__;
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
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result161__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value297;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value297, 0, sizeof(void*));
    __result162__ = __result_obj__ = ((char*)(right_value297=__builtin_string("sLoadArrayNode")));
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
}

_Bool sLoadArrayNode_compile(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_208;
struct list$1sNodeph* array_num_nodes_209;
_Bool _if_conditional337;
_Bool __result163__;
void* right_value298;
struct CVALUE* left_value_210;
void* right_value299;
struct sType* left_type_211;
void* right_value300;
void* right_value301;
struct list$1CVALUEph* array_num_212;
struct list$1sNodeph* o2_saved_213;
struct sNode* it_214;
_Bool _for_condtionalA11;
_Bool _if_conditional338;
_Bool __result164__;
void* right_value302;
struct CVALUE* c_value_215;
void* right_value303;
struct sType* type_216;
char* fun_name_217;
_Bool calling_fun_218;
_Bool _if_conditional339;
void* right_value304;
_Bool _if_conditional340;
void* right_value305;
struct CVALUE* come_value_219;
void* right_value306;
void* right_value307;
struct buffer* buf_220;
struct list$1CVALUEph* o2_saved_221;
struct CVALUE* it_222;
_Bool _for_condtionalA12;
void* right_value308;
void* right_value309;
char* left_value_code_223;
void* right_value310;
char* __dec_obj159;
void* right_value311;
struct sType* result_type_224;
_Bool _if_conditional341;
struct sType* __dec_obj160;
_Bool _if_conditional342;
int n_225;
_Bool _if_conditional343;
void* right_value312;
struct sType* __dec_obj161;
_Bool _if_conditional344;
void* right_value313;
struct sType* __dec_obj162;
_Bool _if_conditional345;
int i_226;
_Bool _for_condtionalA13;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
_Bool _if_conditional349;
void* right_value314;
struct sType* __dec_obj163;
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_208, 0, sizeof(struct sNode*));
memset(&array_num_nodes_209, 0, sizeof(struct list$1sNodeph*));
memset(&right_value298, 0, sizeof(void*));
memset(&left_value_210, 0, sizeof(struct CVALUE*));
memset(&right_value299, 0, sizeof(void*));
memset(&left_type_211, 0, sizeof(struct sType*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&array_num_212, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_213, 0, sizeof(struct list$1sNodeph*));
memset(&it_214, 0, sizeof(struct sNode*));
memset(&right_value302, 0, sizeof(void*));
memset(&c_value_215, 0, sizeof(struct CVALUE*));
memset(&right_value303, 0, sizeof(void*));
memset(&type_216, 0, sizeof(struct sType*));
memset(&fun_name_217, 0, sizeof(char*));
memset(&calling_fun_218, 0, sizeof(_Bool));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&come_value_219, 0, sizeof(struct CVALUE*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&buf_220, 0, sizeof(struct buffer*));
memset(&o2_saved_221, 0, sizeof(struct list$1CVALUEph*));
memset(&it_222, 0, sizeof(struct CVALUE*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&left_value_code_223, 0, sizeof(char*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&result_type_224, 0, sizeof(struct sType*));
memset(&n_225, 0, sizeof(int));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&i_226, 0, sizeof(int));
memset(&right_value314, 0, sizeof(void*));
    left_208=self->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_209=self->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional337=!node_compile(left_208,info),    __freed_obj__ = 0, 
    _if_conditional337) {
        __result163__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result163__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value298;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_211=(struct sType*)come_increment_ref_count(((struct sType*)(right_value299=sType_clone(left_value_210->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value299;
    __freed_obj__ = 0;
    array_num_212=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value301=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value300=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1235))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value300;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value301;
    __freed_obj__ = 0;
    for(
    o2_saved_213=(array_num_nodes_209),it_214=list$1sNodeph_begin((o2_saved_213)) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    !list$1sNodeph_end((o2_saved_213)) ,    __freed_obj__ = 0, 
    _for_condtionalA11;    it_214=list$1sNodeph_next((o2_saved_213)) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional338=!node_compile(it_214,info),        __freed_obj__ = 0, 
        _if_conditional338) {
            __result164__ = (_Bool)0;
            if(left_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_212, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result164__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_215=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value302;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(array_num_212,(struct CVALUE*)come_increment_ref_count(c_value_215));
        __freed_obj__ = 0;
        if(c_value_215 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_value_210->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value303);
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value303;
    __freed_obj__ = 0;
    fun_name_217="operator_load_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional339=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional339) {
        calling_fun_218=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_218=operator_overload_fun(type_216,fun_name_217,left_value_210,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value304=list$1CVALUEphp_operator_load_element(array_num_212,0)))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value304;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional340=!calling_fun_218,    __freed_obj__ = 0, 
    _if_conditional340) {
        come_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value305=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1260))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value305;
        __freed_obj__ = 0;
        buf_220=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value307=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value306=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1262))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value306);
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value306;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value307);
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value307;
        __freed_obj__ = 0;
        buffer_append_str(buf_220,left_value_210->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_221=(struct list$1CVALUEph*)come_increment_ref_count((array_num_212)),it_222=list$1CVALUEph_begin((o2_saved_221)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !list$1CVALUEph_end((o2_saved_221)) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_222=list$1CVALUEph_next((o2_saved_221)) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(buf_220,((char*)(right_value308=xsprintf("[%s]",it_222->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value308;
            __freed_obj__ = 0;
        }
        if(o2_saved_221 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_221, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_223=(char*)come_increment_ref_count(((char*)(right_value309=buffer_to_string(buf_220))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value309;
        __freed_obj__ = 0;
        __dec_obj159=come_value_219->c_value;
        come_value_219->c_value=(char*)come_increment_ref_count(((char*)(right_value310=xsprintf("%s",left_value_code_223))));
        if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value310;
        __freed_obj__ = 0;
        result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(left_type_211))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value311;
        __freed_obj__ = 0;
        if(_if_conditional341=result_type_224->mOriginalLoadVarType->v1,        __freed_obj__ = 0, 
        _if_conditional341) {
            __dec_obj160=result_type_224;
            result_type_224=(struct sType*)come_increment_ref_count(result_type_224->mOriginalLoadVarType->v1);
            if(__dec_obj160) { come_call_finalizer(sType_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional342=list$1sNodeph_length(result_type_224->mArrayNum)>0,        __freed_obj__ = 0, 
        _if_conditional342) {
            n_225=list$1sNodeph_length(result_type_224->mArrayNum)-list$1CVALUEph_length(array_num_212);
            __freed_obj__ = 0;
            if(_if_conditional343=n_225==0,            __freed_obj__ = 0, 
            _if_conditional343) {
                __dec_obj161=result_type_224;
                result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=sType_clone(left_type_211))));
                if(__dec_obj161) { come_call_finalizer(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
                if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value312;
                __freed_obj__ = 0;
                if(_if_conditional344=left_type_211->mOriginalLoadVarType->v1,                __freed_obj__ = 0, 
                _if_conditional344) {
                    __dec_obj162=result_type_224;
                    result_type_224=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(left_type_211->mOriginalLoadVarType->v1))));
                    if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
                    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value313;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(result_type_224->mArrayNum);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional345=n_225>0,                __freed_obj__ = 0, 
                _if_conditional345) {
                    for(
                    i_226=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA13=                    i_226<n_225 ,                    __freed_obj__ = 0, 
                    _for_condtionalA13;                    i_226++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(result_type_224->mArrayNum,-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional346=n_225<0,                    __freed_obj__ = 0, 
                    _if_conditional346) {
                        list$1sNodeph_reset(result_type_224->mArrayNum);
                        __freed_obj__ = 0;
                        result_type_224->mPointerNum+=n_225;
                        __freed_obj__ = 0;
                        if(_if_conditional347=result_type_224->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional347) {
                            result_type_224->mPointerNum=0;
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
            if(_if_conditional348=result_type_224->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional348) {
                result_type_224->mPointerNum-=list$1CVALUEph_length(array_num_212);
                __freed_obj__ = 0;
                if(_if_conditional349=result_type_224->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional349) {
                    result_type_224->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj163=come_value_219->type;
        come_value_219->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(result_type_224))));
        if(__dec_obj163) { come_call_finalizer(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value314;
        __freed_obj__ = 0;
        come_value_219->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_219));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_219->c_value);
        __freed_obj__ = 0;
        if(come_value_219 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_220 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_220, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_223 && !__freed_obj__) { left_value_code_223 = come_decrement_ref_count(left_value_code_223, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_224 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result165__ = (_Bool)1;
    if(left_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
    if(left_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_212 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadArrayNode_sline(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result166__ = self->sline;
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value315;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value315, 0, sizeof(void*));
    __result167__ = __result_obj__ = ((char*)(right_value315=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value316;
char* __dec_obj164;
void* right_value317;
struct list$1sNodeph* __dec_obj165;
void* right_value318;
struct sNode* __dec_obj166;
struct sLoadRangeArrayNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj164=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(info->sname))));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value316;
    __freed_obj__ = 0;
    __dec_obj165=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value317=list$1sNodephp_clone(array_num))));
    if(__dec_obj165) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj165, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value317);
    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value317;
    __freed_obj__ = 0;
    __dec_obj166=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(left))));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value318);
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value318;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __result168__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result168__;
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
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result169__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value319;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value319, 0, sizeof(void*));
    __result170__ = __result_obj__ = ((char*)(right_value319=__builtin_string("sLoadRangeArrayNode")));
    __freed_obj__ = 0;
    return __result170__;
    __freed_obj__ = 0;
}

_Bool sLoadRangeArrayNode_compile(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_227;
struct list$1sNodeph* array_num_nodes_228;
_Bool _if_conditional353;
_Bool __result171__;
void* right_value320;
struct CVALUE* left_value_229;
void* right_value321;
struct sType* left_type_230;
void* right_value322;
void* right_value323;
struct list$1CVALUEph* array_num_231;
struct list$1sNodeph* o2_saved_232;
struct sNode* it_233;
_Bool _for_condtionalA14;
_Bool _if_conditional354;
_Bool __result172__;
void* right_value324;
struct CVALUE* c_value_234;
void* right_value325;
struct sType* type_235;
char* fun_name_236;
_Bool calling_fun_237;
_Bool _if_conditional355;
void* right_value326;
void* right_value327;
_Bool _if_conditional356;
void* right_value328;
struct CVALUE* come_value_238;
void* right_value329;
void* right_value330;
struct buffer* buf_239;
struct list$1CVALUEph* o2_saved_240;
struct CVALUE* it_241;
_Bool _for_condtionalA15;
void* right_value331;
void* right_value332;
char* left_value_code_242;
void* right_value333;
char* __dec_obj167;
void* right_value334;
struct sType* result_type_243;
_Bool _if_conditional357;
struct sType* __dec_obj168;
_Bool _if_conditional358;
int n_244;
_Bool _if_conditional359;
void* right_value335;
struct sType* __dec_obj169;
_Bool _if_conditional360;
void* right_value336;
struct sType* __dec_obj170;
_Bool _if_conditional361;
int i_245;
_Bool _for_condtionalA16;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
_Bool _if_conditional365;
void* right_value337;
struct sType* __dec_obj171;
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_227, 0, sizeof(struct sNode*));
memset(&array_num_nodes_228, 0, sizeof(struct list$1sNodeph*));
memset(&right_value320, 0, sizeof(void*));
memset(&left_value_229, 0, sizeof(struct CVALUE*));
memset(&right_value321, 0, sizeof(void*));
memset(&left_type_230, 0, sizeof(struct sType*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value323, 0, sizeof(void*));
memset(&array_num_231, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_232, 0, sizeof(struct list$1sNodeph*));
memset(&it_233, 0, sizeof(struct sNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&c_value_234, 0, sizeof(struct CVALUE*));
memset(&right_value325, 0, sizeof(void*));
memset(&type_235, 0, sizeof(struct sType*));
memset(&fun_name_236, 0, sizeof(char*));
memset(&calling_fun_237, 0, sizeof(_Bool));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&come_value_238, 0, sizeof(struct CVALUE*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&buf_239, 0, sizeof(struct buffer*));
memset(&o2_saved_240, 0, sizeof(struct list$1CVALUEph*));
memset(&it_241, 0, sizeof(struct CVALUE*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&left_value_code_242, 0, sizeof(char*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&result_type_243, 0, sizeof(struct sType*));
memset(&n_244, 0, sizeof(int));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&i_245, 0, sizeof(int));
memset(&right_value337, 0, sizeof(void*));
    left_227=self->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_228=self->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional353=!node_compile(left_227,info),    __freed_obj__ = 0, 
    _if_conditional353) {
        __result171__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result171__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value320;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(left_value_229->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value321);
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value321;
    __freed_obj__ = 0;
    array_num_231=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value323=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value322=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1382))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value322);
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value322;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value323);
    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value323;
    __freed_obj__ = 0;
    for(
    o2_saved_232=(array_num_nodes_228),it_233=list$1sNodeph_begin((o2_saved_232)) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    !list$1sNodeph_end((o2_saved_232)) ,    __freed_obj__ = 0, 
    _for_condtionalA14;    it_233=list$1sNodeph_next((o2_saved_232)) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional354=!node_compile(it_233,info),        __freed_obj__ = 0, 
        _if_conditional354) {
            __result172__ = (_Bool)0;
            if(left_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_231 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result172__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value324=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value324;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(array_num_231,(struct CVALUE*)come_increment_ref_count(c_value_234));
        __freed_obj__ = 0;
        if(c_value_234 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(left_value_229->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value325);
    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value325;
    __freed_obj__ = 0;
    fun_name_236="operator_load_range_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional355=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional355) {
        calling_fun_237=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_237=operator_overload_fun2(type_235,fun_name_236,left_value_229,optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value326=list$1CVALUEphp_operator_load_element(array_num_231,0)))),optional$2CVALUEphbool_value(((struct optional$2CVALUEphbool*)(right_value327=list$1CVALUEphp_operator_load_element(array_num_231,1)))),info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value326;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value327;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional356=!calling_fun_237,    __freed_obj__ = 0, 
    _if_conditional356) {
        come_value_238=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1407))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value328;
        __freed_obj__ = 0;
        buf_239=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value330=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value329=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1409))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value329);
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value329;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value330);
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value330;
        __freed_obj__ = 0;
        buffer_append_str(buf_239,left_value_229->c_value);
        __freed_obj__ = 0;
        for(
        o2_saved_240=(struct list$1CVALUEph*)come_increment_ref_count((array_num_231)),it_241=list$1CVALUEph_begin((o2_saved_240)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        !list$1CVALUEph_end((o2_saved_240)) ,        __freed_obj__ = 0, 
        _for_condtionalA15;        it_241=list$1CVALUEph_next((o2_saved_240)) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(buf_239,((char*)(right_value331=xsprintf("[%s]",it_241->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value331;
            __freed_obj__ = 0;
        }
        if(o2_saved_240 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_240, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_242=(char*)come_increment_ref_count(((char*)(right_value332=buffer_to_string(buf_239))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value332);
        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value332;
        __freed_obj__ = 0;
        __dec_obj167=come_value_238->c_value;
        come_value_238->c_value=(char*)come_increment_ref_count(((char*)(right_value333=xsprintf("%s",left_value_code_242))));
        if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value333);
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value333;
        __freed_obj__ = 0;
        result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value334=sType_clone(left_type_230))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value334);
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value334;
        __freed_obj__ = 0;
        if(_if_conditional357=result_type_243->mOriginalLoadVarType->v1,        __freed_obj__ = 0, 
        _if_conditional357) {
            __dec_obj168=result_type_243;
            result_type_243=(struct sType*)come_increment_ref_count(result_type_243->mOriginalLoadVarType->v1);
            if(__dec_obj168) { come_call_finalizer(sType_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional358=list$1sNodeph_length(result_type_243->mArrayNum)>0,        __freed_obj__ = 0, 
        _if_conditional358) {
            n_244=list$1sNodeph_length(result_type_243->mArrayNum)-list$1CVALUEph_length(array_num_231);
            __freed_obj__ = 0;
            if(_if_conditional359=n_244==0,            __freed_obj__ = 0, 
            _if_conditional359) {
                __dec_obj169=result_type_243;
                result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(left_type_230))));
                if(__dec_obj169) { come_call_finalizer(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value335;
                __freed_obj__ = 0;
                if(_if_conditional360=left_type_230->mOriginalLoadVarType->v1,                __freed_obj__ = 0, 
                _if_conditional360) {
                    __dec_obj170=result_type_243;
                    result_type_243=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(left_type_230->mOriginalLoadVarType->v1))));
                    if(__dec_obj170) { come_call_finalizer(sType_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
                    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value336;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1sNodeph_reset(result_type_243->mArrayNum);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional361=n_244>0,                __freed_obj__ = 0, 
                _if_conditional361) {
                    for(
                    i_245=0 ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA16=                    i_245<n_244 ,                    __freed_obj__ = 0, 
                    _for_condtionalA16;                    i_245++ ,                    __freed_obj__ = 0, 
                    0                    ){
                        list$1sNodeph_delete(result_type_243->mArrayNum,-1,-1);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional362=n_244<0,                    __freed_obj__ = 0, 
                    _if_conditional362) {
                        list$1sNodeph_reset(result_type_243->mArrayNum);
                        __freed_obj__ = 0;
                        result_type_243->mPointerNum+=n_244;
                        __freed_obj__ = 0;
                        if(_if_conditional363=result_type_243->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional363) {
                            result_type_243->mPointerNum=0;
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
            if(_if_conditional364=result_type_243->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional364) {
                result_type_243->mPointerNum-=list$1CVALUEph_length(array_num_231);
                __freed_obj__ = 0;
                if(_if_conditional365=result_type_243->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional365) {
                    result_type_243->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj171=come_value_238->type;
        come_value_238->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(result_type_243))));
        if(__dec_obj171) { come_call_finalizer(sType_finalize,__dec_obj171, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value337);
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value337;
        __freed_obj__ = 0;
        come_value_238->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_238));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_238->c_value);
        __freed_obj__ = 0;
        if(come_value_238 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_238, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_239 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_239, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_242 && !__freed_obj__) { left_value_code_242 = come_decrement_ref_count(left_value_code_242, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_243 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result173__ = (_Bool)1;
    if(left_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_231 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result173__;
    __freed_obj__ = 0;
    if(left_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_231 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLoadRangeArrayNode_sline(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result174__ = self->sline;
    __freed_obj__ = 0;
    return __result174__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value338;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value338, 0, sizeof(void*));
    __result175__ = __result_obj__ = ((char*)(right_value338=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result175__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result176__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result176__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    err_msg(info,"parse_method_call is failed");
    __freed_obj__ = 0;
    exit(2);
    __freed_obj__ = 0;
    __result177__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result177__;
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
_Bool _if_conditional366;
char* p_246;
int sline_247;
_Bool _if_conditional367;
void* right_value339;
char* word_248;
_Bool _if_conditional368;
void* right_value340;
void* right_value341;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value345;
struct sNode* __dec_obj174;
void* right_value346;
void* right_value347;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value351;
struct sNode* __dec_obj177;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value352;
void* right_value353;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value357;
struct sNode* __dec_obj180;
struct sNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_246, 0, sizeof(char*));
memset(&sline_247, 0, sizeof(int));
memset(&right_value339, 0, sizeof(void*));
memset(&word_248, 0, sizeof(char*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
    if(_if_conditional366=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),    __freed_obj__ = 0, 
    _if_conditional366) {
        p_246=info->p;
        __freed_obj__ = 0;
        sline_247=info->sline;
        __freed_obj__ = 0;
        info->p++;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        if(_if_conditional367=xisalpha(*info->p)||*info->p==95,        __freed_obj__ = 0, 
        _if_conditional367) {
            word_248=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value339=parse_word(info)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
            if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value339;
            __freed_obj__ = 0;
            if(_if_conditional368=(string_operator_equals(word_248,"expect")||string_operator_equals(word_248,"value")||string_operator_equals(word_248,"catch"))&&(*info->p==40||*info->p==123),            __freed_obj__ = 0, 
            _if_conditional368) {
                info->p=p_246;
                __freed_obj__ = 0;
                info->sline=sline_247;
                __freed_obj__ = 0;
            }
            else {
                info->p=p_246;
                __freed_obj__ = 0;
                info->sline=sline_247;
                __freed_obj__ = 0;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1515);
                _inf_obj_value2=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value341=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value340=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1515)))),node,info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj174=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=_inf_value2)));
                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
                if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value340;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value341);
                if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value341;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value345);
                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value345;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_248 && !__freed_obj__) { word_248 = come_decrement_ref_count(word_248, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            info->p=p_246;
            __freed_obj__ = 0;
            info->sline=sline_247;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1522);
            _inf_obj_value3=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value347=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value346=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1522)))),node,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj177=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=_inf_value3)));
            if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
            if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value346;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value347);
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value347;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value351);
            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value351;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional381=*info->p==33&&*(info->p+1)!=61&&*(info->p+1)!=123,        __freed_obj__ = 0, 
        _if_conditional381) {
        }
        else {
            if(_if_conditional382=node==((void*)0),            __freed_obj__ = 0, 
            _if_conditional382) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1530);
                _inf_obj_value4=come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value353=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value352=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1530)))),node,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj180=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=_inf_value4)));
                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value352;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value353);
                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value353;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value357);
                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value357;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result184__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result184__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sExceptionGetValueNode_finalize(struct sExceptionGetValueNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional383;
_Bool _if_conditional384;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional383=self!=((void*)0)&&self->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional383) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional384=self!=((void*)0)&&self->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional384) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional385;
struct sExceptionGetValueNode* __result182__;
void* right_value354;
struct sExceptionGetValueNode* result_251;
_Bool _if_conditional386;
void* right_value355;
struct sNode* __dec_obj178;
_Bool _if_conditional387;
_Bool _if_conditional388;
void* right_value356;
char* __dec_obj179;
struct sExceptionGetValueNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value354, 0, sizeof(void*));
memset(&result_251, 0, sizeof(struct sExceptionGetValueNode*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
                    if(_if_conditional385=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        __result182__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result182__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_251=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value354=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value354;
                    __freed_obj__ = 0;
                    if(_if_conditional386=self!=((void*)0)&&self->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional386) {
                        __dec_obj178=result_251->mLeft;
                        result_251->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNode_clone(self->mLeft))));
                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                        if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value355;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional387=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional387) {
                        result_251->sline=self->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional388=self!=((void*)0)&&self->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional388) {
                        __dec_obj179=result_251->sname;
                        result_251->sname=(char*)come_increment_ref_count(((char*)(right_value356=string_clone(self->sname))));
                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value356;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result183__ = __result_obj__ = result_251;
                    if(result_251 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result183__;
                    __freed_obj__ = 0;
                    if(result_251 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _while_condtional19;
_Bool range_array_252;
char* p_253;
int sline_254;
_Bool _if_conditional389;
_Bool no_comma_255;
_Bool no_output_err_256;
_Bool no_output_come_code_257;
void* right_value358;
struct sNode* exp_258;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool quote_259;
_Bool _if_conditional392;
void* right_value359;
void* right_value360;
struct list$1sNodeph* array_num_260;
void* right_value361;
struct sNode* node2_261;
_Bool _if_conditional395;
void* right_value365;
struct sNode* node3_265;
void* right_value366;
void* right_value367;
void* right_value368;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value373;
struct sNode* __dec_obj187;
_Bool _if_conditional406;
_Bool quote_268;
_Bool _if_conditional407;
_Bool range_269;
void* right_value374;
void* right_value375;
struct list$1sNodeph* array_num_270;
_Bool _while_condtional20;
_Bool range_array2_271;
char* p_272;
int sline_273;
_Bool _if_conditional408;
_Bool no_comma_274;
_Bool no_output_err_275;
_Bool no_output_come_code_276;
void* right_value376;
struct sNode* exp_277;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value377;
struct sNode* node2_278;
_Bool _if_conditional412;
_Bool _if_conditional413;
void* right_value378;
struct sNode* right_node_279;
void* right_value379;
void* right_value380;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value386;
struct sNode* __dec_obj192;
void* right_value387;
void* right_value388;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value393;
struct sNode* __dec_obj196;
void* right_value394;
struct sNode* __dec_obj197;
_Bool _if_conditional434;
_Bool no_comma_282;
void* right_value395;
struct sNode* begin_283;
void* right_value396;
void* right_value397;
struct sNode* end_284;
void* right_value398;
void* right_value399;
void* right_value400;
struct sNode* _inf_value8;
struct sRangeCheckNode* _inf_obj_value8;
void* right_value406;
struct sNode* __dec_obj202;
_Bool _if_conditional445;
void* right_value407;
void* right_value408;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value412;
struct sNode* __dec_obj205;
_Bool _if_conditional453;
_Bool _if_conditional454;
void* right_value413;
void* right_value414;
void* right_value415;
struct sNode* _inf_value10;
struct sNullCheckNode* _inf_obj_value10;
void* right_value419;
struct sNode* __dec_obj208;
void* right_value420;
char* field_name_288;
_Bool _if_conditional462;
void* right_value421;
struct sNode* right_node_289;
void* right_value422;
void* right_value423;
struct sNode* _inf_value11;
struct sStoreFieldNode* _inf_obj_value11;
void* right_value429;
struct sNode* __dec_obj213;
_Bool _if_conditional473;
_Bool _if_conditional474;
void* right_value430;
void* right_value431;
struct sNode* __dec_obj214;
_Bool _if_conditional475;
void* right_value432;
void* right_value433;
struct sNode* __dec_obj215;
void* right_value434;
void* right_value435;
struct sNode* __dec_obj216;
void* right_value436;
void* right_value437;
struct sNode* _inf_value12;
struct sLoadFieldNode* _inf_obj_value12;
void* right_value442;
struct sNode* __dec_obj220;
void* right_value443;
struct sNode* node2_292;
_Bool _if_conditional484;
struct sNode* __dec_obj221;
struct sNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&range_array_252, 0, sizeof(_Bool));
memset(&p_253, 0, sizeof(char*));
memset(&sline_254, 0, sizeof(int));
memset(&no_comma_255, 0, sizeof(_Bool));
memset(&no_output_err_256, 0, sizeof(_Bool));
memset(&no_output_come_code_257, 0, sizeof(_Bool));
memset(&right_value358, 0, sizeof(void*));
memset(&exp_258, 0, sizeof(struct sNode*));
memset(&quote_259, 0, sizeof(_Bool));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&array_num_260, 0, sizeof(struct list$1sNodeph*));
memset(&right_value361, 0, sizeof(void*));
memset(&node2_261, 0, sizeof(struct sNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&node3_265, 0, sizeof(struct sNode*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&quote_268, 0, sizeof(_Bool));
memset(&range_269, 0, sizeof(_Bool));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&array_num_270, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_271, 0, sizeof(_Bool));
memset(&p_272, 0, sizeof(char*));
memset(&sline_273, 0, sizeof(int));
memset(&no_comma_274, 0, sizeof(_Bool));
memset(&no_output_err_275, 0, sizeof(_Bool));
memset(&no_output_come_code_276, 0, sizeof(_Bool));
memset(&right_value376, 0, sizeof(void*));
memset(&exp_277, 0, sizeof(struct sNode*));
memset(&right_value377, 0, sizeof(void*));
memset(&node2_278, 0, sizeof(struct sNode*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_node_279, 0, sizeof(struct sNode*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&no_comma_282, 0, sizeof(_Bool));
memset(&right_value395, 0, sizeof(void*));
memset(&begin_283, 0, sizeof(struct sNode*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&end_284, 0, sizeof(struct sNode*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&field_name_288, 0, sizeof(char*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_node_289, 0, sizeof(struct sNode*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&node2_292, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        range_array_252=(_Bool)0;
        __freed_obj__ = 0;
        {
            p_253=info->p;
            __freed_obj__ = 0;
            sline_254=info->sline;
            __freed_obj__ = 0;
            if(_if_conditional389=*info->p==91,            __freed_obj__ = 0, 
            _if_conditional389) {
                info->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                no_comma_255=info->no_comma;
                __freed_obj__ = 0;
                no_output_err_256=info->no_output_err;
                __freed_obj__ = 0;
                no_output_come_code_257=info->no_output_come_code;
                __freed_obj__ = 0;
                info->no_output_err=(_Bool)1;
                __freed_obj__ = 0;
                info->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                info->no_output_come_code=(_Bool)1;
                __freed_obj__ = 0;
                exp_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value358;
                __freed_obj__ = 0;
                info->no_comma=no_comma_255;
                __freed_obj__ = 0;
                info->no_output_err=no_output_err_256;
                __freed_obj__ = 0;
                info->no_output_come_code=no_output_come_code_257;
                __freed_obj__ = 0;
                if(_if_conditional390=*info->p==46&&*(info->p+1)==46,                __freed_obj__ = 0, 
                _if_conditional390) {
                    range_array_252=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(exp_258 && !__freed_obj__) { exp_258 = come_decrement_ref_count(exp_258, ((struct sNode*)exp_258)->finalize, ((struct sNode*)exp_258)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
            info->p=p_253;
            __freed_obj__ = 0;
            info->sline=sline_254;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional391=range_array_252&&(*info->p==92&&*(info->p+1)==91||*info->p==91),        __freed_obj__ = 0, 
        _if_conditional391) {
            quote_259=*info->p==92;
            __freed_obj__ = 0;
            if(_if_conditional392=quote_259,            __freed_obj__ = 0, 
            _if_conditional392) {
                info->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            info->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            array_num_260=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value360=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value359=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1576))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value359;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value360);
            if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value360;
            __freed_obj__ = 0;
            skip_pointer_attribute(info);
            __freed_obj__ = 0;
            node2_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value361);
            if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value361;
            __freed_obj__ = 0;
            list$1sNodeph_push_back(array_num_260,(struct sNode*)come_increment_ref_count(node2_261));
            __freed_obj__ = 0;
            if(_if_conditional395=*info->p==46&&*(info->p+1)==46,            __freed_obj__ = 0, 
            _if_conditional395) {
                info->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                skip_pointer_attribute(info);
                __freed_obj__ = 0;
                node3_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value365;
                __freed_obj__ = 0;
                list$1sNodeph_push_back(array_num_260,(struct sNode*)come_increment_ref_count(node3_265));
                __freed_obj__ = 0;
                optional$2intbool_value(((struct optional$2intbool*)(right_value366=expected_next_character(93,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value366);
                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value366;
                __freed_obj__ = 0;
                if(node3_265 && !__freed_obj__) { node3_265 = come_decrement_ref_count(node3_265, ((struct sNode*)node3_265)->finalize, ((struct sNode*)node3_265)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1597);
            _inf_obj_value5=come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value368=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value367=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1597)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_260),quote_259,info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj187=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=_inf_value5)));
            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value367);
            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value367;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value368);
            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value368;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value373);
            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[5] = right_value373;
            __freed_obj__ = 0;
            if(array_num_260 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_260, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node2_261 && !__freed_obj__) { node2_261 = come_decrement_ref_count(node2_261, ((struct sNode*)node2_261)->finalize, ((struct sNode*)node2_261)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional406=!range_array_252&&(*info->p==92&&*(info->p+1)==91||*info->p==91),            __freed_obj__ = 0, 
            _if_conditional406) {
                quote_268=*info->p==92;
                __freed_obj__ = 0;
                if(_if_conditional407=quote_268,                __freed_obj__ = 0, 
                _if_conditional407) {
                    info->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                range_269=(_Bool)0;
                __freed_obj__ = 0;
                array_num_270=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value375=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value374=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1608))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value374;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value375);
                if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value375;
                __freed_obj__ = 0;
                while(_while_condtional20=1,                __freed_obj__ = 0, 
                _while_condtional20) {
                    range_array2_271=(_Bool)0;
                    __freed_obj__ = 0;
                    {
                        p_272=info->p;
                        __freed_obj__ = 0;
                        sline_273=info->sline;
                        __freed_obj__ = 0;
                        if(_if_conditional408=*info->p==91,                        __freed_obj__ = 0, 
                        _if_conditional408) {
                            info->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            no_comma_274=info->no_comma;
                            __freed_obj__ = 0;
                            no_output_err_275=info->no_output_err;
                            __freed_obj__ = 0;
                            no_output_come_code_276=info->no_output_come_code;
                            __freed_obj__ = 0;
                            info->no_output_err=(_Bool)1;
                            __freed_obj__ = 0;
                            info->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            info->no_output_come_code=(_Bool)1;
                            __freed_obj__ = 0;
                            exp_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value376;
                            __freed_obj__ = 0;
                            info->no_comma=no_comma_274;
                            __freed_obj__ = 0;
                            info->no_output_err=no_output_err_275;
                            __freed_obj__ = 0;
                            info->no_output_come_code=no_output_come_code_276;
                            __freed_obj__ = 0;
                            if(_if_conditional409=*info->p==46&&*(info->p+1)==46,                            __freed_obj__ = 0, 
                            _if_conditional409) {
                                range_array2_271=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(exp_277 && !__freed_obj__) { exp_277 = come_decrement_ref_count(exp_277, ((struct sNode*)exp_277)->finalize, ((struct sNode*)exp_277)->_protocol_obj, 0, 0, 0); } 
                        }
                        __freed_obj__ = 0;
                        info->p=p_272;
                        __freed_obj__ = 0;
                        info->sline=sline_273;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional410=range_array2_271,                    __freed_obj__ = 0, 
                    _if_conditional410) {
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional411=*info->p==91,                        __freed_obj__ = 0, 
                        _if_conditional411) {
                            info->p++;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            skip_pointer_attribute(info);
                            __freed_obj__ = 0;
                            node2_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
                            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value377;
                            __freed_obj__ = 0;
                            list$1sNodeph_push_back(array_num_270,(struct sNode*)come_increment_ref_count(node2_278));
                            __freed_obj__ = 0;
                            if(_if_conditional412=*info->p==93,                            __freed_obj__ = 0, 
                            _if_conditional412) {
                                info->p++;
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
                            if(node2_278 && !__freed_obj__) { node2_278 = come_decrement_ref_count(node2_278, ((struct sNode*)node2_278)->finalize, ((struct sNode*)node2_278)->_protocol_obj, 0, 0, 0); } 
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
                if(_if_conditional413=*info->p==61&&*(info->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional413) {
                    info->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    right_node_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value378;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1676);
                    _inf_obj_value6=come_increment_ref_count(((struct sStoreArrayNode*)(right_value380=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value379=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1676)))),node,(struct sNode*)come_increment_ref_count(right_node_279),(struct list$1sNodeph*)come_increment_ref_count(array_num_270),quote_268,info))));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj192=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=_inf_value6)));
                    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value379);
                    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value379;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value380);
                    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value380;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value386);
                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value386;
                    __freed_obj__ = 0;
                    if(right_node_279 && !__freed_obj__) { right_node_279 = come_decrement_ref_count(right_node_279, ((struct sNode*)right_node_279)->finalize, ((struct sNode*)right_node_279)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1679);
                    _inf_obj_value7=come_increment_ref_count(((struct sLoadArrayNode*)(right_value388=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value387=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1679)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_270),quote_268,info))));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj196=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=_inf_value7)));
                    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value387;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value388);
                    if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value388;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value393);
                    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value393;
                    __freed_obj__ = 0;
                    __dec_obj197=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=exception_get_value((struct sNode*)come_increment_ref_count(node),info))));
                    if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value394);
                    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value394;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(array_num_270 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_270, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional434=*info->p==33&&*(info->p+1)==123,                __freed_obj__ = 0, 
                _if_conditional434) {
                    info->p+=2;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    no_comma_282=info->no_comma;
                    __freed_obj__ = 0;
                    info->no_comma=(_Bool)1;
                    __freed_obj__ = 0;
                    begin_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value395);
                    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value395;
                    __freed_obj__ = 0;
                    info->no_comma=no_comma_282;
                    __freed_obj__ = 0;
                    optional$2intbool_value(((struct optional$2intbool*)(right_value396=expected_next_character(44,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value396);
                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value396;
                    __freed_obj__ = 0;
                    end_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value397);
                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value397;
                    __freed_obj__ = 0;
                    optional$2intbool_value(((struct optional$2intbool*)(right_value398=expected_next_character(125,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value398);
                    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value398;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1701);
                    _inf_obj_value8=come_increment_ref_count(((struct sRangeCheckNode*)(right_value400=sRangeCheckNode_initialize((struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value399=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "18field.c", 1701)))),node,begin_283,end_284,info))));
                    _inf_value8->_protocol_obj=_inf_obj_value8;
                    _inf_value8->finalize=(void*)sRangeCheckNode_finalize;
                    _inf_value8->clone=(void*)sRangeCheckNode_clone;
                    _inf_value8->compile=(void*)sRangeCheckNode_compile;
                    _inf_value8->sline=(void*)sRangeCheckNode_sline;
                    _inf_value8->sname=(void*)sRangeCheckNode_sname;
                    _inf_value8->terminated=(void*)sRangeCheckNode_terminated;
                    _inf_value8->kind=(void*)sRangeCheckNode_kind;
                    __dec_obj202=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=_inf_value8)));
                    if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value399);
                    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value399;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value400);
                    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[5] = right_value400;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value406);
                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[6] = right_value406;
                    __freed_obj__ = 0;
                    if(begin_283 && !__freed_obj__) { begin_283 = come_decrement_ref_count(begin_283, ((struct sNode*)begin_283)->finalize, ((struct sNode*)begin_283)->_protocol_obj, 0, 0, 0); } 
                    if(end_284 && !__freed_obj__) { end_284 = come_decrement_ref_count(end_284, ((struct sNode*)end_284)->finalize, ((struct sNode*)end_284)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional445=*info->p==33&&*(info->p+1)!=61,                    __freed_obj__ = 0, 
                    _if_conditional445) {
                        info->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        parse_sharp_v5(info);
                        __freed_obj__ = 0;
                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1709);
                        _inf_obj_value9=come_increment_ref_count(((struct sNullCheckNode*)(right_value408=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value407=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1709)))),node,(_Bool)0,info))));
                        _inf_value9->_protocol_obj=_inf_obj_value9;
                        _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value9->clone=(void*)sNullCheckNode_clone;
                        _inf_value9->compile=(void*)sNullCheckNode_compile;
                        _inf_value9->sline=(void*)sNullCheckNode_sline;
                        _inf_value9->sname=(void*)sNullCheckNode_sname;
                        _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value9->kind=(void*)sNullCheckNode_kind;
                        __dec_obj205=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=_inf_value9)));
                        if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                        if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value407;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value408);
                        if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value408;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value412);
                        if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value412;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional453=(*info->p==46&&*(info->p+1)!=46)||(*info->p==45&&*(info->p+1)==62),                        __freed_obj__ = 0, 
                        _if_conditional453) {
                            if(_if_conditional454=*info->p==46,                            __freed_obj__ = 0, 
                            _if_conditional454) {
                                info->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                            }
                            else {
                                info->p+=2;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1721);
                            _inf_obj_value10=come_increment_ref_count(((struct sNullCheckNode*)(right_value415=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value413=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1721)))),((struct sNode*)(right_value414=sNode_clone(node))),(_Bool)1,info))));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sNullCheckNode_finalize;
                            _inf_value10->clone=(void*)sNullCheckNode_clone;
                            _inf_value10->compile=(void*)sNullCheckNode_compile;
                            _inf_value10->sline=(void*)sNullCheckNode_sline;
                            _inf_value10->sname=(void*)sNullCheckNode_sname;
                            _inf_value10->terminated=(void*)sNullCheckNode_terminated;
                            _inf_value10->kind=(void*)sNullCheckNode_kind;
                            __dec_obj208=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=_inf_value10)));
                            if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value413);
                            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value413;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value414);
                            if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[1] = right_value414;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value415);
                            if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value415;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value419);
                            if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value419;
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            field_name_288=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value420=parse_word(info)))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value420);
                            if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value420;
                            __freed_obj__ = 0;
                            parse_sharp_v5(info);
                            __freed_obj__ = 0;
                            if(_if_conditional462=*info->p==61&&*(info->p+1)!=61,                            __freed_obj__ = 0, 
                            _if_conditional462) {
                                info->p++;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                parse_sharp_v5(info);
                                __freed_obj__ = 0;
                                right_node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value421);
                                if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value421;
                                __freed_obj__ = 0;
                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1737);
                                _inf_obj_value11=come_increment_ref_count(((struct sStoreFieldNode*)(right_value423=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value422=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1737)))),node,(struct sNode*)come_increment_ref_count(right_node_289),(char*)come_increment_ref_count(field_name_288),info))));
                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                _inf_value11->finalize=(void*)sStoreFieldNode_finalize;
                                _inf_value11->clone=(void*)sStoreFieldNode_clone;
                                _inf_value11->compile=(void*)sStoreFieldNode_compile;
                                _inf_value11->sline=(void*)sStoreFieldNode_sline;
                                _inf_value11->sname=(void*)sStoreFieldNode_sname;
                                _inf_value11->terminated=(void*)sStoreFieldNode_terminated;
                                _inf_value11->kind=(void*)sStoreFieldNode_kind;
                                __dec_obj213=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value429=_inf_value11)));
                                if(__dec_obj213) { __dec_obj213 = come_decrement_ref_count(__dec_obj213, ((struct sNode*)__dec_obj213)->finalize, ((struct sNode*)__dec_obj213)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value422);
                                if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value422;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value423);
                                if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value423;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value429);
                                if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { right_value429 = come_decrement_ref_count(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[3] = right_value429;
                                __freed_obj__ = 0;
                                if(right_node_289 && !__freed_obj__) { right_node_289 = come_decrement_ref_count(right_node_289, ((struct sNode*)right_node_289)->finalize, ((struct sNode*)right_node_289)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional473=*info->p==40||*info->p==123||(*info->p==45&&*(info->p+1)==62&&*(info->p+2)==40),                                __freed_obj__ = 0, 
                                _if_conditional473) {
                                    if(_if_conditional474=string_operator_equals(field_name_288,"if"),                                    __freed_obj__ = 0, 
                                    _if_conditional474) {
                                        __dec_obj214=node;
                                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=sNode_clone(node)))),info))));
                                        if(__dec_obj214) { __dec_obj214 = come_decrement_ref_count(__dec_obj214, ((struct sNode*)__dec_obj214)->finalize, ((struct sNode*)__dec_obj214)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value430);
                                        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value430;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value431);
                                        if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[1] = right_value431;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        if(_if_conditional475=string_operator_equals(field_name_288,"elif"),                                        __freed_obj__ = 0, 
                                        _if_conditional475) {
                                            __dec_obj215=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=sNode_clone(node)))),info))));
                                            if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value432);
                                            if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value432;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value433);
                                            if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[1] = right_value433;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            __dec_obj216=node;
                                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_288),info))));
                                            if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value434);
                                            if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { right_value434 = come_decrement_ref_count(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value434;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value435);
                                            if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[1] = right_value435;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                else {
                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1751);
                                    _inf_obj_value12=come_increment_ref_count(((struct sLoadFieldNode*)(right_value437=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value436=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1751)))),node,(char*)come_increment_ref_count(field_name_288),info))));
                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                    _inf_value12->finalize=(void*)sLoadFieldNode_finalize;
                                    _inf_value12->clone=(void*)sLoadFieldNode_clone;
                                    _inf_value12->compile=(void*)sLoadFieldNode_compile;
                                    _inf_value12->sline=(void*)sLoadFieldNode_sline;
                                    _inf_value12->sname=(void*)sLoadFieldNode_sname;
                                    _inf_value12->terminated=(void*)sLoadFieldNode_terminated;
                                    _inf_value12->kind=(void*)sLoadFieldNode_kind;
                                    __dec_obj220=node;
                                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=_inf_value12)));
                                    if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value436);
                                    if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value436;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value437);
                                    if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value437;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value442);
                                    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value442;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(field_name_288 && !__freed_obj__) { field_name_288 = come_decrement_ref_count(field_name_288, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            node2_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value443);
                            if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value443;
                            __freed_obj__ = 0;
                            if(_if_conditional484=node2_292==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional484) {
                                if(node2_292 && !__freed_obj__) { node2_292 = come_decrement_ref_count(node2_292, ((struct sNode*)node2_292)->finalize, ((struct sNode*)node2_292)->_protocol_obj, 0, 0, 0); } 
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __dec_obj221=node;
                            node=(struct sNode*)come_increment_ref_count(node2_292);
                            if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            if(node2_292 && !__freed_obj__) { node2_292 = come_decrement_ref_count(node2_292, ((struct sNode*)node2_292)->finalize, ((struct sNode*)node2_292)->_protocol_obj, 0, 0, 0); } 
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
    __result204__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result204__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional393;
void* right_value362;
struct list_item$1sNodeph* litem_262;
struct sNode* __dec_obj181;
_Bool _if_conditional394;
void* right_value363;
struct list_item$1sNodeph* litem_263;
struct sNode* __dec_obj182;
void* right_value364;
struct list_item$1sNodeph* litem_264;
struct sNode* __dec_obj183;
struct list$1sNodeph* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value362, 0, sizeof(void*));
memset(&litem_262, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value363, 0, sizeof(void*));
memset(&litem_263, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value364, 0, sizeof(void*));
memset(&litem_264, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional393=self->len==0,                __freed_obj__ = 0, 
                _if_conditional393) {
                    litem_262=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value362=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value362;
                    __freed_obj__ = 0;
                    litem_262->prev=((void*)0);
                    __freed_obj__ = 0;
                    litem_262->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj181=litem_262->item;
                    litem_262->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    self->tail=litem_262;
                    __freed_obj__ = 0;
                    self->head=litem_262;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional394=self->len==1,                    __freed_obj__ = 0, 
                    _if_conditional394) {
                        litem_263=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value363=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value363;
                        __freed_obj__ = 0;
                        litem_263->prev=self->head;
                        __freed_obj__ = 0;
                        litem_263->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj182=litem_263->item;
                        litem_263->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        self->tail=litem_263;
                        __freed_obj__ = 0;
                        self->head->next=litem_263;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_264=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value364=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value364;
                        __freed_obj__ = 0;
                        litem_264->prev=self->tail;
                        __freed_obj__ = 0;
                        litem_264->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj183=litem_264->item;
                        litem_264->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        self->tail->next=litem_264;
                        __freed_obj__ = 0;
                        self->tail=litem_264;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                __result185__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result185__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional396;
int default_value_266;
int __result186__;
int __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_266, 0, sizeof(int));
                    if(_if_conditional396=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional396) {
                        __freed_obj__ = 0;
                        memset(&default_value_266,0,sizeof(int));
                        __freed_obj__ = 0;
                        __result186__ = default_value_266;
                        __freed_obj__ = 0;
                        return __result186__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result187__ = self->v1;
                        __freed_obj__ = 0;
                        return __result187__;
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
_Bool _if_conditional397;
_Bool _if_conditional398;
_Bool _if_conditional399;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional397=self!=((void*)0)&&self->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional397) {
                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional398=self!=((void*)0)&&self->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional398) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional399=self!=((void*)0)&&self->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional399) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional400;
struct sLoadRangeArrayNode* __result188__;
void* right_value369;
struct sLoadRangeArrayNode* result_267;
_Bool _if_conditional401;
void* right_value370;
struct sNode* __dec_obj184;
_Bool _if_conditional402;
void* right_value371;
struct list$1sNodeph* __dec_obj185;
_Bool _if_conditional403;
_Bool _if_conditional404;
_Bool _if_conditional405;
void* right_value372;
char* __dec_obj186;
struct sLoadRangeArrayNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value369, 0, sizeof(void*));
memset(&result_267, 0, sizeof(struct sLoadRangeArrayNode*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
                if(_if_conditional400=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional400) {
                    __result188__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result188__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_267=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value369=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value369;
                __freed_obj__ = 0;
                if(_if_conditional401=self!=((void*)0)&&self->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional401) {
                    __dec_obj184=result_267->mLeft;
                    result_267->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=sNode_clone(self->mLeft))));
                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value370;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional402=self!=((void*)0)&&self->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional402) {
                    __dec_obj185=result_267->mArrayNum;
                    result_267->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value371=list$1sNodephp_clone(self->mArrayNum))));
                    if(__dec_obj185) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj185, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value371;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional403=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional403) {
                    result_267->mQuote=self->mQuote;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional404=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional404) {
                    result_267->sline=self->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional405=self!=((void*)0)&&self->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional405) {
                    __dec_obj186=result_267->sname;
                    result_267->sname=(char*)come_increment_ref_count(((char*)(right_value372=string_clone(self->sname))));
                    if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value372;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result189__ = __result_obj__ = result_267;
                if(result_267 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result189__;
                __freed_obj__ = 0;
                if(result_267 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_267, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional414;
_Bool _if_conditional415;
_Bool _if_conditional416;
_Bool _if_conditional417;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional414=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional414) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional415=self!=((void*)0)&&self->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional415) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional416=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional416) {
                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional417=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional417) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional418;
struct sStoreArrayNode* __result190__;
void* right_value381;
struct sStoreArrayNode* result_280;
_Bool _if_conditional419;
void* right_value382;
struct sNode* __dec_obj188;
_Bool _if_conditional420;
void* right_value383;
struct sNode* __dec_obj189;
_Bool _if_conditional421;
void* right_value384;
struct list$1sNodeph* __dec_obj190;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value385;
char* __dec_obj191;
struct sStoreArrayNode* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value381, 0, sizeof(void*));
memset(&result_280, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
                        if(_if_conditional418=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional418) {
                            __result190__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result190__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_280=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value381=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value381);
                        if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value381;
                        __freed_obj__ = 0;
                        if(_if_conditional419=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional419) {
                            __dec_obj188=result_280->mLeft;
                            result_280->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=sNode_clone(self->mLeft))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value382);
                            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value382;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional420=self!=((void*)0)&&self->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional420) {
                            __dec_obj189=result_280->mRight;
                            result_280->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mRight))));
                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value383);
                            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value383;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional421=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional421) {
                            __dec_obj190=result_280->mArrayNum;
                            result_280->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value384=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj190) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj190, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
                            if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value384;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional422=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional422) {
                            result_280->mQuote=self->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional423=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            result_280->sline=self->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional424=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional424) {
                            __dec_obj191=result_280->sname;
                            result_280->sname=(char*)come_increment_ref_count(((char*)(right_value385=string_clone(self->sname))));
                            if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value385);
                            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value385;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result191__ = __result_obj__ = result_280;
                        if(result_280 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result191__;
                        __freed_obj__ = 0;
                        if(result_280 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional425=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional425) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional426=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional426) {
                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional427) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional428;
struct sLoadArrayNode* __result192__;
void* right_value389;
struct sLoadArrayNode* result_281;
_Bool _if_conditional429;
void* right_value390;
struct sNode* __dec_obj193;
_Bool _if_conditional430;
void* right_value391;
struct list$1sNodeph* __dec_obj194;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
void* right_value392;
char* __dec_obj195;
struct sLoadArrayNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value389, 0, sizeof(void*));
memset(&result_281, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
                        if(_if_conditional428=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional428) {
                            __result192__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result192__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_281=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value389=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
                        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value389;
                        __freed_obj__ = 0;
                        if(_if_conditional429=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional429) {
                            __dec_obj193=result_281->mLeft;
                            result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=sNode_clone(self->mLeft))));
                            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
                            if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value390;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional430=self!=((void*)0)&&self->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional430) {
                            __dec_obj194=result_281->mArrayNum;
                            result_281->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value391=list$1sNodephp_clone(self->mArrayNum))));
                            if(__dec_obj194) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj194, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
                            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value391;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional431=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional431) {
                            result_281->mQuote=self->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional432=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional432) {
                            result_281->sline=self->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional433=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional433) {
                            __dec_obj195=result_281->sname;
                            result_281->sname=(char*)come_increment_ref_count(((char*)(right_value392=string_clone(self->sname))));
                            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
                            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value392;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result193__ = __result_obj__ = result_281;
                        if(result_281 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result193__;
                        __freed_obj__ = 0;
                        if(result_281 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRangeCheckNode_finalize(struct sRangeCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional435=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional435) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional436=self!=((void*)0)&&self->mBegin!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional436) {
                            if(self->mBegin && !__freed_obj__) { self->mBegin = come_decrement_ref_count(self->mBegin, ((struct sNode*)self->mBegin)->finalize, ((struct sNode*)self->mBegin)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional437=self!=((void*)0)&&self->mEnd!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional437) {
                            if(self->mEnd && !__freed_obj__) { self->mEnd = come_decrement_ref_count(self->mEnd, ((struct sNode*)self->mEnd)->finalize, ((struct sNode*)self->mEnd)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional438) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sRangeCheckNode* sRangeCheckNode_clone(struct sRangeCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional439;
struct sRangeCheckNode* __result194__;
void* right_value401;
struct sRangeCheckNode* result_285;
_Bool _if_conditional440;
void* right_value402;
struct sNode* __dec_obj198;
_Bool _if_conditional441;
void* right_value403;
struct sNode* __dec_obj199;
_Bool _if_conditional442;
void* right_value404;
struct sNode* __dec_obj200;
_Bool _if_conditional443;
_Bool _if_conditional444;
void* right_value405;
char* __dec_obj201;
struct sRangeCheckNode* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value401, 0, sizeof(void*));
memset(&result_285, 0, sizeof(struct sRangeCheckNode*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
                        if(_if_conditional439=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional439) {
                            __result194__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result194__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_285=(struct sRangeCheckNode*)come_increment_ref_count(((struct sRangeCheckNode*)(right_value401=(struct sRangeCheckNode*)come_calloc(1, sizeof(struct sRangeCheckNode)*(1), "sRangeCheckNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
                        if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value401;
                        __freed_obj__ = 0;
                        if(_if_conditional440=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional440) {
                            __dec_obj198=result_285->mLeft;
                            result_285->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(self->mLeft))));
                            if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value402);
                            if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value402;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional441=self!=((void*)0)&&self->mBegin!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional441) {
                            __dec_obj199=result_285->mBegin;
                            result_285->mBegin=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNode_clone(self->mBegin))));
                            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                            if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { right_value403 = come_decrement_ref_count(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value403;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional442=self!=((void*)0)&&self->mEnd!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional442) {
                            __dec_obj200=result_285->mEnd;
                            result_285->mEnd=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=sNode_clone(self->mEnd))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value404);
                            if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value404;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional443=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional443) {
                            result_285->sline=self->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional444=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional444) {
                            __dec_obj201=result_285->sname;
                            result_285->sname=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->sname))));
                            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                            if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value405;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result195__ = __result_obj__ = result_285;
                        if(result_285 && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result195__;
                        __freed_obj__ = 0;
                        if(result_285 && !__freed_obj__) { come_call_finalizer(sRangeCheckNode_finalize,result_285, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional455;
_Bool _if_conditional456;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional455=self!=((void*)0)&&self->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional455) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional456=self!=((void*)0)&&self->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional456) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional457;
struct sNullCheckNode* __result198__;
void* right_value416;
struct sNullCheckNode* result_287;
_Bool _if_conditional458;
void* right_value417;
struct sNode* __dec_obj206;
_Bool _if_conditional459;
_Bool _if_conditional460;
_Bool _if_conditional461;
void* right_value418;
char* __dec_obj207;
struct sNullCheckNode* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value416, 0, sizeof(void*));
memset(&result_287, 0, sizeof(struct sNullCheckNode*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
                                if(_if_conditional457=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional457) {
                                    __result198__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result198__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_287=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value416=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                                if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value416;
                                __freed_obj__ = 0;
                                if(_if_conditional458=self!=((void*)0)&&self->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional458) {
                                    __dec_obj206=result_287->mLeft;
                                    result_287->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=sNode_clone(self->mLeft))));
                                    if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value417);
                                    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value417;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional459=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional459) {
                                    result_287->mOnlyNullCecker=self->mOnlyNullCecker;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional460=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional460) {
                                    result_287->sline=self->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional461=self!=((void*)0)&&self->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional461) {
                                    __dec_obj207=result_287->sname;
                                    result_287->sname=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(self->sname))));
                                    if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count(__dec_obj207, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value418);
                                    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value418;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result199__ = __result_obj__ = result_287;
                                if(result_287 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_287, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result199__;
                                __freed_obj__ = 0;
                                if(result_287 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_287, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional463;
_Bool _if_conditional464;
_Bool _if_conditional465;
_Bool _if_conditional466;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional463=self!=((void*)0)&&self->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional463) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional464=self!=((void*)0)&&self->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional464) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional465=self!=((void*)0)&&self->mName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional465) {
                                        if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional466=self!=((void*)0)&&self->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional466) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional467;
struct sStoreFieldNode* __result200__;
void* right_value424;
struct sStoreFieldNode* result_290;
_Bool _if_conditional468;
void* right_value425;
struct sNode* __dec_obj209;
_Bool _if_conditional469;
void* right_value426;
struct sNode* __dec_obj210;
_Bool _if_conditional470;
void* right_value427;
char* __dec_obj211;
_Bool _if_conditional471;
_Bool _if_conditional472;
void* right_value428;
char* __dec_obj212;
struct sStoreFieldNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value424, 0, sizeof(void*));
memset(&result_290, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value428, 0, sizeof(void*));
                                    if(_if_conditional467=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional467) {
                                        __result200__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result200__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_290=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value424=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value424);
                                    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value424;
                                    __freed_obj__ = 0;
                                    if(_if_conditional468=self!=((void*)0)&&self->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional468) {
                                        __dec_obj209=result_290->mLeft;
                                        result_290->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=sNode_clone(self->mLeft))));
                                        if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value425);
                                        if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value425;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional469=self!=((void*)0)&&self->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional469) {
                                        __dec_obj210=result_290->mRight;
                                        result_290->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=sNode_clone(self->mRight))));
                                        if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value426);
                                        if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value426;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional470=self!=((void*)0)&&self->mName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional470) {
                                        __dec_obj211=result_290->mName;
                                        result_290->mName=(char*)come_increment_ref_count(((char*)(right_value427=string_clone(self->mName))));
                                        if(__dec_obj211) { __dec_obj211 = come_decrement_ref_count(__dec_obj211, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value427);
                                        if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value427;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional471=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional471) {
                                        result_290->sline=self->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional472=self!=((void*)0)&&self->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional472) {
                                        __dec_obj212=result_290->sname;
                                        result_290->sname=(char*)come_increment_ref_count(((char*)(right_value428=string_clone(self->sname))));
                                        if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count(__dec_obj212, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
                                        if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value428;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result201__ = __result_obj__ = result_290;
                                    if(result_290 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_290, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result201__;
                                    __freed_obj__ = 0;
                                    if(result_290 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_290, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional476=self!=((void*)0)&&self->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional476) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional477=self!=((void*)0)&&self->mName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional477) {
                                            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional478=self!=((void*)0)&&self->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional478) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional479;
struct sLoadFieldNode* __result202__;
void* right_value438;
struct sLoadFieldNode* result_291;
_Bool _if_conditional480;
void* right_value439;
struct sNode* __dec_obj217;
_Bool _if_conditional481;
void* right_value440;
char* __dec_obj218;
_Bool _if_conditional482;
_Bool _if_conditional483;
void* right_value441;
char* __dec_obj219;
struct sLoadFieldNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value438, 0, sizeof(void*));
memset(&result_291, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
                                        if(_if_conditional479=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional479) {
                                            __result202__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result202__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_291=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value438=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value438);
                                        if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value438;
                                        __freed_obj__ = 0;
                                        if(_if_conditional480=self!=((void*)0)&&self->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional480) {
                                            __dec_obj217=result_291->mLeft;
                                            result_291->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=sNode_clone(self->mLeft))));
                                            if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                                            if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { right_value439 = come_decrement_ref_count(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value439;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional481=self!=((void*)0)&&self->mName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional481) {
                                            __dec_obj218=result_291->mName;
                                            result_291->mName=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(self->mName))));
                                            if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
                                            if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value440;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional482=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional482) {
                                            result_291->sline=self->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional483=self!=((void*)0)&&self->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional483) {
                                            __dec_obj219=result_291->sname;
                                            result_291->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                                            if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value441);
                                            if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value441;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result203__ = __result_obj__ = result_291;
                                        if(result_291 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result203__;
                                        __freed_obj__ = 0;
                                        if(result_291 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_291, (void*)0, (void*)0, 0, 0, 0, 0); }
}

