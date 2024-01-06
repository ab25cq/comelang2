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
static inline _Bool die(char* msg){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("./comelang2.h", 107),perror(msg),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 108),stackframe(),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("./comelang2.h", 109),exit(4),come_pop_stackframe());
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1994))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1996))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1996))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value1;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1997))->p=((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_0, "./comelang2.h", 1997))->memory, "./comelang2.h", 1997))->buf;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2004))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2006))->memory;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2006))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value3;
    __freed_obj__ = 0;
    ((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2007))->p=(char*)((struct buffer*)come_null_check(((struct smart_pointer$1char*)come_null_check(result_1, "./comelang2.h", 2007))->memory, "./comelang2.h", 2007))->buf;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2014))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2016))->memory;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2016))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    ((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2017))->p=(short short*)((struct buffer*)come_null_check(((struct smart_pointer$1short*)come_null_check(result_2, "./comelang2.h", 2017))->memory, "./comelang2.h", 2017))->buf;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2024))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2026))->memory;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2026))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value7;
    __freed_obj__ = 0;
    ((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2027))->p=(int*)((struct buffer*)come_null_check(((struct smart_pointer$1int*)come_null_check(result_3, "./comelang2.h", 2027))->memory, "./comelang2.h", 2027))->buf;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2034))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2036))->memory;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2036))->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value9;
    __freed_obj__ = 0;
    ((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2037))->p=(long*)((struct buffer*)come_null_check(((struct smart_pointer$1long*)come_null_check(result_4, "./comelang2.h", 2037))->memory, "./comelang2.h", 2037))->buf;
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
int __exception_result_var_b7;
_Bool _if_conditional93;
void* right_value45;
char* __exception_result_var_b8;
char* none_generics_name_34;
void* right_value46;
struct sType* __exception_result_var_b9;
struct sType* obj_type_35;
void* right_value47;
char* __exception_result_var_b10;
char* __dec_obj29;
void* right_value48;
char* __exception_result_var_b11;
char* fun_name3_36;
void* right_value50;
struct sGenericsFun* __exception_result_var_b15;
struct sGenericsFun* generics_fun_40;
_Bool _if_conditional108;
void* right_value51;
char* __exception_result_var_b16;
_Bool __exception_result_var_b17;
_Bool _if_conditional109;
_Bool __result38__;
void* right_value61;
struct optional$2sFunpbool* __exception_result_var_b21;
void* right_value62;
char* __exception_result_var_b23;
char* __dec_obj30;
int i_45;
_Bool _for_condtionalA1;
void* right_value63;
char* __exception_result_var_b24;
char* new_fun_name_46;
void* right_value64;
struct optional$2sFunpbool* __exception_result_var_b25;
_Bool _if_conditional115;
void* right_value65;
char* __exception_result_var_b26;
char* __dec_obj31;
_Bool _if_conditional116;
void* right_value66;
struct optional$2sFunpbool* __exception_result_var_b27;
_Bool result_47;
_Bool _if_conditional117;
void* right_value67;
struct CVALUE* come_value_48;
char* left_value2_49;
void* right_value68;
void* right_value69;
void* right_value74;
struct optional$2sTypephbool* __exception_result_var_b29;
void* right_value75;
struct optional$2sTypephbool* __exception_result_var_b31;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
char* __dec_obj33;
_Bool _if_conditional127;
void* right_value76;
char* __exception_result_var_b32;
char* __dec_obj34;
_Bool _if_conditional128;
void* right_value77;
char* __exception_result_var_b33;
char* __dec_obj35;
void* right_value78;
char* __exception_result_var_b34;
char* __dec_obj36;
_Bool _if_conditional129;
void* right_value79;
char* __exception_result_var_b35;
char* __dec_obj37;
void* right_value80;
char* __exception_result_var_b36;
char* __dec_obj38;
void* right_value81;
char* __dec_obj39;
char* middle_value2_54;
void* right_value82;
void* right_value83;
void* right_value84;
struct optional$2sTypephbool* __exception_result_var_b37;
void* right_value85;
struct optional$2sTypephbool* __exception_result_var_b38;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
char* __dec_obj40;
_Bool _if_conditional133;
void* right_value86;
char* __exception_result_var_b39;
char* __dec_obj41;
_Bool _if_conditional134;
void* right_value87;
char* __exception_result_var_b40;
char* __dec_obj42;
void* right_value88;
char* __exception_result_var_b41;
char* __dec_obj43;
_Bool _if_conditional135;
void* right_value89;
char* __exception_result_var_b42;
char* __dec_obj44;
void* right_value90;
char* __exception_result_var_b43;
char* __dec_obj45;
void* right_value91;
char* __dec_obj46;
char* right_value2_55;
void* right_value92;
void* right_value93;
void* right_value94;
struct optional$2sTypephbool* __exception_result_var_b44;
void* right_value95;
struct optional$2sTypephbool* __exception_result_var_b45;
_Bool _if_conditional136;
_Bool _if_conditional137;
_Bool _if_conditional138;
char* __dec_obj47;
_Bool _if_conditional139;
void* right_value96;
char* __exception_result_var_b46;
char* __dec_obj48;
_Bool _if_conditional140;
void* right_value97;
char* __exception_result_var_b47;
char* __dec_obj49;
void* right_value98;
char* __exception_result_var_b48;
char* __dec_obj50;
_Bool _if_conditional141;
void* right_value99;
char* __exception_result_var_b49;
char* __dec_obj51;
void* right_value100;
char* __exception_result_var_b50;
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
struct sType* __exception_result_var_b51;
struct sType* result_type2_57;
void* right_value109;
struct sType* __dec_obj55;
_Bool _if_conditional142;
void* right_value110;
char* __exception_result_var_b52;
char* __dec_obj56;
_Bool _if_conditional143;
void* right_value111;
char* __exception_result_var_b53;
char* __dec_obj57;
struct list$1CVALUEph* __exception_result_var_b54;
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
    if(_if_conditional91=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_29, "18field.c", 7))->mNoSolvedGenericsType, "18field.c", 7))->v1,    __freed_obj__ = 0, 
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
    if(_if_conditional92=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 17))->mNoSolvedGenericsType, "18field.c", 17))->v1,    __freed_obj__ = 0, 
    _if_conditional92) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 18))->mNoSolvedGenericsType, "18field.c", 18))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional93=(come_push_stackframe("18field.c", 21),__exception_result_var_b7=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 21))->mGenericsTypes, "18field.c", 21))), come_pop_stackframe(), __exception_result_var_b7)>0,    __freed_obj__ = 0, 
    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 22),__exception_result_var_b8=((char*)(right_value45=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "18field.c", 22))->mClass, "18field.c", 22))->mName))), come_pop_stackframe(), __exception_result_var_b8));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 24),__exception_result_var_b9=((struct sType*)(right_value46=solve_generics(type,((struct sInfo*)come_null_check(info, "18field.c", 24))->generics_type,info))), come_pop_stackframe(), __exception_result_var_b9));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_32;
        fun_name2_32=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 26),__exception_result_var_b10=((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))), come_pop_stackframe(), __exception_result_var_b10));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value47;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 27),__exception_result_var_b11=((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))), come_pop_stackframe(), __exception_result_var_b11));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value48;
        __freed_obj__ = 0;
        generics_fun_40=(come_push_stackframe("18field.c", 29),__exception_result_var_b15=((struct sGenericsFun*)(right_value50=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 29))->generics_funcs, "18field.c", 29)),fun_name3_36,((void*)0)))), come_pop_stackframe(), __exception_result_var_b15);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value50;
        __freed_obj__ = 0;
        if(_if_conditional108=generics_fun_40,        __freed_obj__ = 0, 
        _if_conditional108) {
            if(_if_conditional109=!(come_push_stackframe("18field.c", 32),__exception_result_var_b17=create_generics_fun((char*)come_increment_ref_count((come_push_stackframe("18field.c", 32),__exception_result_var_b16=((char*)(right_value51=__builtin_string(fun_name2_32))), come_pop_stackframe(), __exception_result_var_b16)),generics_fun_40,obj_type_35,info), come_pop_stackframe(), __exception_result_var_b17),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51),
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
        operator_fun_33=optional$2sFunpbool_value((come_push_stackframe("18field.c", 37),__exception_result_var_b21=((struct optional$2sFunpbool*)(right_value61=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 37))->funcs,fun_name2_32))), come_pop_stackframe(), __exception_result_var_b21));
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
        fun_name2_32=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 40),__exception_result_var_b23=((char*)(right_value62=create_method_name(type,(_Bool)0,fun_name,info))), come_pop_stackframe(), __exception_result_var_b23));
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
            new_fun_name_46=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 44),__exception_result_var_b24=((char*)(right_value63=xsprintf("%s_v%d",fun_name2_32,i_45))), come_pop_stackframe(), __exception_result_var_b24));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value63;
            __freed_obj__ = 0;
            operator_fun_33=optional$2sFunpbool_value((come_push_stackframe("18field.c", 45),__exception_result_var_b25=((struct optional$2sFunpbool*)(right_value64=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 45))->funcs,new_fun_name_46))), come_pop_stackframe(), __exception_result_var_b25));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value64;
            __freed_obj__ = 0;
            if(_if_conditional115=operator_fun_33,            __freed_obj__ = 0, 
            _if_conditional115) {
                __dec_obj31=fun_name2_32;
                fun_name2_32=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 48),__exception_result_var_b26=((char*)(right_value65=__builtin_string(new_fun_name_46))), come_pop_stackframe(), __exception_result_var_b26));
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
            operator_fun_33=optional$2sFunpbool_value((come_push_stackframe("18field.c", 54),__exception_result_var_b27=((struct optional$2sFunpbool*)(right_value66=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 54))->funcs,fun_name2_32))), come_pop_stackframe(), __exception_result_var_b27));
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
        (come_push_stackframe("18field.c", 63),check_assign_type(((char*)(right_value69=xsprintf("\%s is assigned to",((char*)(right_value68=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 63),__exception_result_var_b29=((struct optional$2sTypephbool*)(right_value74=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 63))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_b29)),((struct CVALUE*)come_null_check(left_value, "18field.c", 63))->type,left_value,(_Bool)0,info),come_pop_stackframe());
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
        if(_if_conditional124=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("18field.c", 64),__exception_result_var_b31=((struct optional$2sTypephbool*)(right_value75=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 64))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_b31)), "18field.c", 64))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 64))->type, "18field.c", 64))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value75),
        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[4] = right_value75, 
        __freed_obj__ = 0, 
        _if_conditional124) {
            if(_if_conditional125=((struct CVALUE*)come_null_check(left_value, "18field.c", 65))->var,            __freed_obj__ = 0, 
            _if_conditional125) {
                if(_if_conditional126=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 66))->var, "18field.c", 66))->mType, "18field.c", 66))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional126) {
                    __dec_obj33=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 67))->var, "18field.c", 67))->mCValueName=((void*)0);
                    if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional127=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 69))->var, "18field.c", 69))->mType, "18field.c", 69))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional127) {
                        __dec_obj34=((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 70),__exception_result_var_b32=((char*)(right_value76=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 70))->c_value,info))), come_pop_stackframe(), __exception_result_var_b32));
                        if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
                        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value76;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional128=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 72))->var, "18field.c", 72))->mType, "18field.c", 72))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional128) {
                            __dec_obj35=((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 73),__exception_result_var_b33=((char*)(right_value77=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 73))->c_value,info))), come_pop_stackframe(), __exception_result_var_b33));
                            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value77;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj36=((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 76),__exception_result_var_b34=((char*)(right_value78=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 76))->c_value,info))), come_pop_stackframe(), __exception_result_var_b34));
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
                if(_if_conditional129=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "18field.c", 84))->type, "18field.c", 84))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional129) {
                }
                else {
                    __dec_obj37=((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value;
                    ((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 87),__exception_result_var_b35=((char*)(right_value79=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->type,((struct CVALUE*)come_null_check(left_value, "18field.c", 87))->c_value,info))), come_pop_stackframe(), __exception_result_var_b35));
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
            left_value2_49=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 90),__exception_result_var_b36=((char*)(right_value80=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "18field.c", 90))->c_value))), come_pop_stackframe(), __exception_result_var_b36));
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
        (come_push_stackframe("18field.c", 96),check_assign_type(((char*)(right_value83=xsprintf("\%s is assigned to",((char*)(right_value82=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 96),__exception_result_var_b37=((struct optional$2sTypephbool*)(right_value84=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 96))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_b37)),((struct CVALUE*)come_null_check(middle_value, "18field.c", 96))->type,middle_value,(_Bool)0,info),come_pop_stackframe());
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
        if(_if_conditional130=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("18field.c", 97),__exception_result_var_b38=((struct optional$2sTypephbool*)(right_value85=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 97))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_b38)), "18field.c", 97))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 97))->type, "18field.c", 97))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value85),
        (right_value85 && right_value85 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[8] = right_value85, 
        __freed_obj__ = 0, 
        _if_conditional130) {
            if(_if_conditional131=((struct CVALUE*)come_null_check(middle_value, "18field.c", 98))->var,            __freed_obj__ = 0, 
            _if_conditional131) {
                if(_if_conditional132=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 99))->var, "18field.c", 99))->mType, "18field.c", 99))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional132) {
                    __dec_obj40=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 100))->var, "18field.c", 100))->mCValueName=((void*)0);
                    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional133=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 102))->var, "18field.c", 102))->mType, "18field.c", 102))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional133) {
                        __dec_obj41=((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value;
                        ((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 103),__exception_result_var_b39=((char*)(right_value86=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 103))->c_value,info))), come_pop_stackframe(), __exception_result_var_b39));
                        if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
                        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value86;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional134=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 105))->var, "18field.c", 105))->mType, "18field.c", 105))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional134) {
                            __dec_obj42=((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 106),__exception_result_var_b40=((char*)(right_value87=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 106))->c_value,info))), come_pop_stackframe(), __exception_result_var_b40));
                            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
                            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value87;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj43=((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value;
                            ((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 109),__exception_result_var_b41=((char*)(right_value88=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 109))->c_value,info))), come_pop_stackframe(), __exception_result_var_b41));
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
                if(_if_conditional135=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(middle_value, "18field.c", 117))->type, "18field.c", 117))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional135) {
                }
                else {
                    __dec_obj44=((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value;
                    ((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 120),__exception_result_var_b42=((char*)(right_value89=increment_ref_count_object(((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->type,((struct CVALUE*)come_null_check(middle_value, "18field.c", 120))->c_value,info))), come_pop_stackframe(), __exception_result_var_b42));
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
            middle_value2_54=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 123),__exception_result_var_b43=((char*)(right_value90=xsprintf("%s",((struct CVALUE*)come_null_check(middle_value, "18field.c", 123))->c_value))), come_pop_stackframe(), __exception_result_var_b43));
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
        (come_push_stackframe("18field.c", 129),check_assign_type(((char*)(right_value93=xsprintf("\%s is assigned to",((char*)(right_value92=string_to_string(fun_name2_32)))))),optional$2sTypephbool_value((come_push_stackframe("18field.c", 129),__exception_result_var_b44=((struct optional$2sTypephbool*)(right_value94=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 129))->mParamTypes,2))), come_pop_stackframe(), __exception_result_var_b44)),((struct CVALUE*)come_null_check(right_value, "18field.c", 129))->type,right_value,(_Bool)0,info),come_pop_stackframe());
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
        if(_if_conditional136=((struct sType*)come_null_check(optional$2sTypephbool_value((come_push_stackframe("18field.c", 130),__exception_result_var_b45=((struct optional$2sTypephbool*)(right_value95=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 130))->mParamTypes,2))), come_pop_stackframe(), __exception_result_var_b45)), "18field.c", 130))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 130))->type, "18field.c", 130))->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value95),
        (right_value95 && right_value95 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[12] = right_value95, 
        __freed_obj__ = 0, 
        _if_conditional136) {
            if(_if_conditional137=((struct CVALUE*)come_null_check(right_value, "18field.c", 131))->var,            __freed_obj__ = 0, 
            _if_conditional137) {
                if(_if_conditional138=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 132))->var, "18field.c", 132))->mType, "18field.c", 132))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional138) {
                    __dec_obj47=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 133))->var, "18field.c", 133))->mCValueName=((void*)0);
                    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional139=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 135))->var, "18field.c", 135))->mType, "18field.c", 135))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional139) {
                        __dec_obj48=((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value;
                        ((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 136),__exception_result_var_b46=((char*)(right_value96=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 136))->c_value,info))), come_pop_stackframe(), __exception_result_var_b46));
                        if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value96;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional140=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 138))->var, "18field.c", 138))->mType, "18field.c", 138))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional140) {
                            __dec_obj49=((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 139),__exception_result_var_b47=((char*)(right_value97=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 139))->c_value,info))), come_pop_stackframe(), __exception_result_var_b47));
                            if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
                            if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value97;
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj50=((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 142),__exception_result_var_b48=((char*)(right_value98=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 142))->c_value,info))), come_pop_stackframe(), __exception_result_var_b48));
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
                if(_if_conditional141=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "18field.c", 150))->type, "18field.c", 150))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional141) {
                }
                else {
                    __dec_obj51=((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 153),__exception_result_var_b49=((char*)(right_value99=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->type,((struct CVALUE*)come_null_check(right_value, "18field.c", 153))->c_value,info))), come_pop_stackframe(), __exception_result_var_b49));
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
            right_value2_55=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 156),__exception_result_var_b50=((char*)(right_value100=xsprintf("%s",((struct CVALUE*)come_null_check(right_value, "18field.c", 156))->c_value))), come_pop_stackframe(), __exception_result_var_b50));
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
        __dec_obj54=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 162))->c_value;
        ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 162))->c_value=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("\%s(\%s,\%s,\%s)",((char*)(right_value102=string_to_string(fun_name2_32))),((char*)(right_value103=string_to_string(left_value2_49))),((char*)(right_value104=string_to_string(middle_value2_54))),((char*)(right_value105=string_to_string(right_value2_55)))))));
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
        result_type1_56=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 164))->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value107);
        if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[18] = right_value107;
        __freed_obj__ = 0;
        result_type2_57=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 166),__exception_result_var_b51=((struct sType*)(right_value108=solve_generics(result_type1_56,generics_type_29,info))), come_pop_stackframe(), __exception_result_var_b51));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value108);
        if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[19] = right_value108;
        __freed_obj__ = 0;
        __dec_obj55=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 168))->type;
        ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 168))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value109=sType_clone(result_type2_57))));
        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[20] = right_value109;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 169))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional142=((struct sType*)come_null_check(result_type2_57, "18field.c", 171))->mHeap,        __freed_obj__ = 0, 
        _if_conditional142) {
            __dec_obj56=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 172))->c_value;
            ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 172))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 172),__exception_result_var_b52=((char*)(right_value110=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_48, "18field.c", 172))->c_value,(struct sType*)come_increment_ref_count(result_type2_57),info))), come_pop_stackframe(), __exception_result_var_b52));
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
            if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value110;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional143=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_33, "18field.c", 175))->mResultType, "18field.c", 175))->mException||gComeDebug,        __freed_obj__ = 0, 
        _if_conditional143) {
            __dec_obj57=((struct CVALUE*)come_null_check(come_value_48, "18field.c", 176))->c_value;
            ((struct CVALUE*)come_null_check(come_value_48, "18field.c", 176))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 176),__exception_result_var_b53=((char*)(right_value111=append_exception_value(((struct CVALUE*)come_null_check(come_value_48, "18field.c", 176))->c_value,((struct CVALUE*)come_null_check(come_value_48, "18field.c", 176))->type,info))), come_pop_stackframe(), __exception_result_var_b53));
            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
            if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value111;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 179),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_48, "18field.c", 179))->c_value),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 181),__exception_result_var_b54=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 181))->stack, "18field.c", 181)),(struct CVALUE*)come_increment_ref_count(come_value_48)), come_pop_stackframe(), __exception_result_var_b54);
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
                    it_6=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 173))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_6!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_7=it_6;
                        __freed_obj__ = 0;
                        it_6=((struct list_item$1sTypeph*)come_null_check(it_6, "./comelang2.h", 176))->next;
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
                    it_8=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 173))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional2=it_8!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional2) {
                        prev_it_9=it_8;
                        __freed_obj__ = 0;
                        it_8=((struct list_item$1sNodeph*)come_null_check(it_8, "./comelang2.h", 176))->next;
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
                    it_10=((struct list$1charph*)come_null_check(self, "./comelang2.h", 173))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_10!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        prev_it_11=it_10;
                        __freed_obj__ = 0;
                        it_10=((struct list_item$1charph*)come_null_check(it_10, "./comelang2.h", 176))->next;
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
                result_13=(struct list$1sTypeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 192),__exception_result_var_b1=((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 192))), "./comelang2.h", 192)))))), come_pop_stackframe(), __exception_result_var_b1));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17;
                __freed_obj__ = 0;
                it_14=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 194))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    (come_push_stackframe("./comelang2.h", 196),__exception_result_var_b2=list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_13, "./comelang2.h", 196)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 196))->item))))), come_pop_stackframe(), __exception_result_var_b2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sTypeph*)come_null_check(it_14, "./comelang2.h", 198))->next;
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
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 154))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 155))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 156))->len=0;
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
                        if(_if_conditional31=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 205))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 206))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 208))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 209))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj10=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 210))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 210))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 212))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 213))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 215))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 216))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 218))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 219))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 220))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 220))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 222))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 223))->head, "./comelang2.h", 223))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 226))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 228))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 229))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 230))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_17, "./comelang2.h", 230))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->tail, "./comelang2.h", 232))->next=litem_17;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 233))->tail=litem_17;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 236))->len++;
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
                result_18=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 192),__exception_result_var_b3=((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 192))), "./comelang2.h", 192)))))), come_pop_stackframe(), __exception_result_var_b3));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24;
                __freed_obj__ = 0;
                it_19=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 194))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_19!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    (come_push_stackframe("./comelang2.h", 196),__exception_result_var_b4=list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_18, "./comelang2.h", 196)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 196))->item))))), come_pop_stackframe(), __exception_result_var_b4);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = 0;
                    it_19=((struct list_item$1sNodeph*)come_null_check(it_19, "./comelang2.h", 198))->next;
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
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 154))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 155))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 156))->len=0;
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
                        if(_if_conditional35=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 205))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 206))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 208))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 209))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 210))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 210))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 212))->tail=litem_20;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 213))->head=litem_20;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional36=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 215))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 216))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 218))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 219))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 220))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 220))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 222))->tail=litem_21;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 223))->head, "./comelang2.h", 223))->next=litem_21;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 226))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 228))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 229))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 230))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_22, "./comelang2.h", 230))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->tail, "./comelang2.h", 232))->next=litem_22;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 233))->tail=litem_22;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 236))->len++;
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
                result_24=(struct list$1charph*)come_increment_ref_count((come_push_stackframe("./comelang2.h", 192),__exception_result_var_b5=((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 192))), "./comelang2.h", 192)))))), come_pop_stackframe(), __exception_result_var_b5));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
                it_25=((struct list$1charph*)come_null_check(self, "./comelang2.h", 194))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_25!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    (come_push_stackframe("./comelang2.h", 196),__exception_result_var_b6=list$1charph_add(((struct list$1charph*)come_null_check(result_24, "./comelang2.h", 196)),(char*)come_increment_ref_count(((char*)(right_value37=string_clone(((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 196))->item))))), come_pop_stackframe(), __exception_result_var_b6);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
                    __freed_obj__ = 0;
                    it_25=((struct list_item$1charph*)come_null_check(it_25, "./comelang2.h", 198))->next;
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
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 154))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 156))->len=0;
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
                        if(_if_conditional50=((struct list$1charph*)come_null_check(self, "./comelang2.h", 205))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 206))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 208))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 209))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj19=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 210))->item;
                            ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 210))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 212))->tail=litem_26;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 213))->head=litem_26;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 215))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 216))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 218))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 219))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj20=((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 220))->item;
                                ((struct list_item$1charph*)come_null_check(litem_27, "./comelang2.h", 220))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 222))->tail=litem_27;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 223))->head, "./comelang2.h", 223))->next=litem_27;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 226))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 228))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 229))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj21=((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 230))->item;
                                ((struct list_item$1charph*)come_null_check(litem_28, "./comelang2.h", 230))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->tail, "./comelang2.h", 232))->next=litem_28;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 233))->tail=litem_28;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 236))->len++;
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
        __result31__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 414))->len;
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
unsigned int __exception_result_var_b12;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
void* right_value49;
struct optional$2boolbool* __exception_result_var_b13;
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
            hash_37=(come_push_stackframe("./comelang2.h", 1262),__exception_result_var_b12=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1262))), come_pop_stackframe(), __exception_result_var_b12)%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1262))->size;
            __freed_obj__ = 0;
            it_38=hash_37;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional94=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->item_existance[it_38],                __freed_obj__ = 0, 
                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1268),__exception_result_var_b13=((struct optional$2boolbool*)(right_value49=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1268))->keys[it_38], "./comelang2.h", 1268)),key))), come_pop_stackframe(), __exception_result_var_b13)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49),
                    (right_value49 && right_value49 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value49, 
                    __freed_obj__ = 0, 
                    _if_conditional96) {
                        __result34__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1270))->items[it_38];
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_38++;
                    __freed_obj__ = 0;
                    if(_if_conditional97=it_38>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1275))->size,                    __freed_obj__ = 0, 
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
void* __exception_result_var_b14;
_Bool __result32__;
_Bool __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(_Bool));
                        if(_if_conditional95=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional95) {
                            __freed_obj__ = 0;
                            (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b14=memset(&default_value_39,0,sizeof(_Bool)), come_pop_stackframe(), __exception_result_var_b14);
                            __freed_obj__ = 0;
                            __result32__ = default_value_39;
                            __freed_obj__ = 0;
                            return __result32__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result33__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 67))->v1;
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
            if(_if_conditional99=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional104=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional104) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional105=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional105) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional106=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional106) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional107=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
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
void* __exception_result_var_b18;
unsigned int __exception_result_var_b19;
unsigned int hash_42;
unsigned int it_43;
_Bool _while_condtional8;
_Bool _if_conditional110;
void* right_value52;
struct optional$2boolbool* __exception_result_var_b20;
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
            (come_push_stackframe("./comelang2.h", 1589),__exception_result_var_b18=memset(&default_value_41,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b18);
            __freed_obj__ = 0;
            hash_42=(come_push_stackframe("./comelang2.h", 1591),__exception_result_var_b19=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1591))), come_pop_stackframe(), __exception_result_var_b19)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1591))->size;
            __freed_obj__ = 0;
            it_43=hash_42;
            __freed_obj__ = 0;
            while(_while_condtional8=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional8) {
                if(_if_conditional110=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->item_existance[it_43],                __freed_obj__ = 0, 
                _if_conditional110) {
                    if(_if_conditional111=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1597),__exception_result_var_b20=((struct optional$2boolbool*)(right_value52=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1597))->keys[it_43], "./comelang2.h", 1597)),key))), come_pop_stackframe(), __exception_result_var_b20)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52),
                    (right_value52 && right_value52 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value52, 
                    __freed_obj__ = 0, 
                    _if_conditional111) {
                        __result40__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value54=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value53=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1599)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1599))->items[it_43],(_Bool)1)));
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
                    if(_if_conditional112=it_43>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1604))->size,                    __freed_obj__ = 0, 
                    _if_conditional112) {
                        it_43=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional113=it_43==hash_42,                        __freed_obj__ = 0, 
                        _if_conditional113) {
                            __result41__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1608), ((struct optional$2sFunpbool*)(right_value56=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value55=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1608))),default_value_41,(_Bool)0))));
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
                    __result42__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1612), ((struct optional$2sFunpbool*)(right_value58=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value57=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1612))),default_value_41,(_Bool)0))));
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
            __result43__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1616), ((struct optional$2sFunpbool*)(right_value60=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value59=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1616))),default_value_41,(_Bool)0))));
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
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                            __freed_obj__ = 0;
                            ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
void* __exception_result_var_b22;
struct sFun* __result44__;
struct sFun* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_44, 0, sizeof(struct sFun*));
            if(_if_conditional114=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional114) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b22=memset(&default_value_44,0,sizeof(struct sFun*)), come_pop_stackframe(), __exception_result_var_b22);
                __freed_obj__ = 0;
                __result44__ = __result_obj__ = default_value_44;
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
            }
            else {
                __result45__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 67))->v1;
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
            if(_if_conditional118=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional119=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type!=((void*)0),            __freed_obj__ = 0, 
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
struct optional$2sTypephbool* __result47__;
struct sType* default_value_52;
void* __exception_result_var_b28;
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
                position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 739))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_50=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 742))->head;
            __freed_obj__ = 0;
            i_51=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_50!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional121=position==i_51,                __freed_obj__ = 0, 
                _if_conditional121) {
                    __result47__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value71=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value70=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 746)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_50, "./comelang2.h", 746))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value70;
                    __freed_obj__ = 0;
                    return __result47__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_50=((struct list_item$1sTypeph*)come_null_check(it_50, "./comelang2.h", 748))->next;
                __freed_obj__ = 0;
                i_51++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 753),__exception_result_var_b28=memset(&default_value_52,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b28);
            __freed_obj__ = 0;
            __result48__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 754), ((struct optional$2sTypephbool*)(right_value73=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value72=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 754))),(struct sType*)come_increment_ref_count(default_value_52),(_Bool)0))));
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
                        __dec_obj32=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 40))->v1;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 40))->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
                            if(_if_conditional122=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1!=((void*)0),                            __freed_obj__ = 0, 
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
void* __exception_result_var_b30;
struct sType* __result49__;
struct sType* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_53, 0, sizeof(struct sType*));
            if(_if_conditional123=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional123) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b30=memset(&default_value_53,0,sizeof(struct sType*)), come_pop_stackframe(), __exception_result_var_b30);
                __freed_obj__ = 0;
                __result49__ = __result_obj__ = default_value_53;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
            }
            else {
                __result50__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 67))->v1;
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
            if(_if_conditional144=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 275))->len==0,            __freed_obj__ = 0, 
            _if_conditional144) {
                litem_58=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value112=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 276))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
                if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value112;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 278))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 279))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj58=((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 280))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_58, "./comelang2.h", 280))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj58) { come_call_finalizer(CVALUE_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 282))->tail=litem_58;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 283))->head=litem_58;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional146=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 285))->len==1,                __freed_obj__ = 0, 
                _if_conditional146) {
                    litem_59=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value113=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 286))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
                    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value113;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 288))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 289))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj59=((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 290))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_59, "./comelang2.h", 290))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj59) { come_call_finalizer(CVALUE_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 292))->tail=litem_59;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 293))->head, "./comelang2.h", 293))->next=litem_59;
                    __freed_obj__ = 0;
                }
                else {
                    litem_60=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value114=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 296))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
                    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value114;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 298))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 299))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj60=((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 300))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 300))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj60) { come_call_finalizer(CVALUE_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->tail, "./comelang2.h", 302))->next=litem_60;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 303))->tail=litem_60;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 306))->len++;
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
                    if(_if_conditional145=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional145) {
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
void* right_value115;
char* __exception_result_var_b55;
char* __dec_obj61;
void* right_value116;
struct sNode* __dec_obj62;
void* right_value117;
struct sNode* __dec_obj63;
void* right_value118;
char* __exception_result_var_b56;
char* __dec_obj64;
struct sStoreFieldNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 201))->sline=((struct sInfo*)come_null_check(info, "18field.c", 201))->sline;
    __freed_obj__ = 0;
    __dec_obj61=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 202))->sname=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 202),__exception_result_var_b55=((char*)(right_value115=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 202))->sname))), come_pop_stackframe(), __exception_result_var_b55));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    __dec_obj62=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 204))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(left))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value116;
    __freed_obj__ = 0;
    __dec_obj63=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 205))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(right))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value117;
    __freed_obj__ = 0;
    __dec_obj64=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName;
    ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 206))->mName=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 206),__exception_result_var_b56=((char*)(right_value118=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b56));
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
char* __exception_result_var_b57;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
    __result55__ = __result_obj__ = (come_push_stackframe("18field.c", 218),__exception_result_var_b57=((char*)(right_value119=__builtin_string("sStoreFieldNode"))), come_pop_stackframe(), __exception_result_var_b57);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
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
char* __exception_result_var_b58;
char* name_63;
_Bool __exception_result_var_b59;
_Bool _if_conditional151;
_Bool __result56__;
void* right_value121;
struct CVALUE* __exception_result_var_b60;
struct CVALUE* left_value_64;
_Bool __exception_result_var_b61;
_Bool _if_conditional152;
_Bool __result57__;
void* right_value122;
struct CVALUE* __exception_result_var_b62;
struct CVALUE* right_value_65;
struct sType* right_type_66;
struct sType* left_type_67;
void* right_value123;
struct sType* __exception_result_var_b63;
struct sType* left_type2_68;
struct sClass* klass_69;
void* right_value133;
struct optional$2sClasspbool* __exception_result_var_b67;
struct sType* field_type_74;
int index_75;
char* child_field_name_76;
void* right_value134;
struct optional$2sClasspbool* __exception_result_var_b69;
_Bool _if_conditional158;
_Bool __result65__;
struct list$1tuple2$2charphsTypephph* o2_saved_77;
struct tuple2$2charphsTypeph* __exception_result_var_b72;
struct tuple2$2charphsTypeph* field_80;
_Bool __exception_result_var_b73;
_Bool _for_condtionalA2;
struct tuple2$2charphsTypeph* __exception_result_var_b76;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_83;
struct sType* field_type2_84;
_Bool __exception_result_var_b77;
_Bool _if_conditional163;
void* right_value135;
struct sType* __dec_obj65;
int __exception_result_var_b78;
_Bool _if_conditional167;
struct list$1tuple2$2charphsTypephph* o2_saved_87;
struct tuple2$2charphsTypeph* __exception_result_var_b79;
struct tuple2$2charphsTypeph* field_88;
_Bool __exception_result_var_b80;
_Bool _for_condtionalA3;
struct tuple2$2charphsTypeph* __exception_result_var_b81;
struct tuple2$2charphsTypeph* multiple_assgin_var2;
char* field_name_89;
struct sType* field_type2_90;
struct sClass* klass2_91;
struct list$1tuple2$2charphsTypephph* o2_saved_92;
struct tuple2$2charphsTypeph* __exception_result_var_b82;
struct tuple2$2charphsTypeph* field2_93;
_Bool __exception_result_var_b83;
_Bool _for_condtionalA4;
struct tuple2$2charphsTypeph* __exception_result_var_b84;
struct tuple2$2charphsTypeph* multiple_assgin_var3;
char* field_name2_94;
struct sType* field_type3_95;
_Bool __exception_result_var_b85;
_Bool _if_conditional168;
void* right_value136;
char* __exception_result_var_b86;
char* __dec_obj66;
void* right_value137;
struct sType* __dec_obj67;
_Bool _if_conditional169;
_Bool __exception_result_var_b87;
_Bool _if_conditional170;
void* right_value138;
struct sType* __dec_obj68;
int __exception_result_var_b88;
_Bool _if_conditional171;
_Bool __result74__;
void* right_value139;
struct CVALUE* come_value_96;
_Bool _if_conditional172;
_Bool __exception_result_var_b89;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool __result75__;
void* right_value140;
void* right_value141;
_Bool _if_conditional175;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value142;
char* __exception_result_var_b90;
char* c_value_97;
_Bool _if_conditional178;
_Bool _if_conditional179;
char* __dec_obj69;
_Bool _if_conditional180;
void* right_value143;
char* __exception_result_var_b91;
char* __dec_obj70;
_Bool _if_conditional181;
void* right_value144;
char* __exception_result_var_b92;
char* __dec_obj71;
void* right_value145;
char* __exception_result_var_b93;
char* __dec_obj72;
_Bool _if_conditional182;
void* right_value146;
char* __exception_result_var_b94;
char* __dec_obj73;
void* right_value147;
char* __exception_result_var_b95;
char* __dec_obj74;
void* right_value148;
char* __exception_result_var_b96;
char* c_value_98;
_Bool _if_conditional183;
_Bool _if_conditional184;
char* __dec_obj75;
_Bool _if_conditional185;
void* right_value149;
char* __exception_result_var_b97;
char* __dec_obj76;
_Bool _if_conditional186;
void* right_value150;
char* __exception_result_var_b98;
char* __dec_obj77;
void* right_value151;
char* __exception_result_var_b99;
char* __dec_obj78;
_Bool _if_conditional187;
void* right_value152;
char* __exception_result_var_b100;
char* __dec_obj79;
void* right_value153;
char* __exception_result_var_b101;
char* __dec_obj80;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value154;
char* __exception_result_var_b102;
char* c_value_99;
_Bool _if_conditional190;
_Bool _if_conditional191;
char* __dec_obj81;
_Bool _if_conditional192;
void* right_value155;
char* __exception_result_var_b103;
char* __dec_obj82;
_Bool _if_conditional193;
void* right_value156;
char* __exception_result_var_b104;
char* __dec_obj83;
void* right_value157;
char* __exception_result_var_b105;
char* __dec_obj84;
_Bool _if_conditional194;
void* right_value158;
char* __exception_result_var_b106;
char* __dec_obj85;
void* right_value159;
char* __exception_result_var_b107;
char* __dec_obj86;
void* right_value160;
char* __exception_result_var_b108;
char* c_value_100;
void* right_value161;
char* __exception_result_var_b109;
char* __dec_obj87;
void* right_value162;
char* __exception_result_var_b110;
char* __dec_obj88;
_Bool __result76__;
int __exception_result_var_b111;
int right_value_id_101;
_Bool _if_conditional195;
_Bool __exception_result_var_b112;
_Bool _if_conditional196;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value163;
char* __exception_result_var_b113;
char* c_value_102;
void* right_value164;
char* __exception_result_var_b114;
char* __dec_obj89;
void* right_value165;
char* __exception_result_var_b115;
char* c_value_103;
void* right_value166;
char* __exception_result_var_b116;
char* __dec_obj90;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value167;
char* __exception_result_var_b117;
char* c_value_104;
void* right_value168;
char* __exception_result_var_b118;
char* __dec_obj91;
void* right_value169;
char* __exception_result_var_b119;
char* c_value_105;
void* right_value170;
char* __exception_result_var_b120;
char* __dec_obj92;
_Bool __result77__;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value171;
char* __exception_result_var_b121;
char* __dec_obj93;
void* right_value172;
char* __exception_result_var_b122;
char* __dec_obj94;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value173;
char* __exception_result_var_b123;
char* __dec_obj95;
void* right_value174;
char* __exception_result_var_b124;
char* __dec_obj96;
_Bool __result78__;
void* right_value175;
struct sType* __dec_obj97;
struct list$1CVALUEph* __exception_result_var_b125;
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
    left_61=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 223))->mLeft;
    __freed_obj__ = 0;
    right_62=((struct sStoreFieldNode*)come_null_check(self, "18field.c", 224))->mRight;
    __freed_obj__ = 0;
    name_63=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 225),__exception_result_var_b58=((char*)(right_value120=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 225))->mName))), come_pop_stackframe(), __exception_result_var_b58));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    if(_if_conditional151=!(come_push_stackframe("18field.c", 227),__exception_result_var_b59=node_compile(left_61,info), come_pop_stackframe(), __exception_result_var_b59),    __freed_obj__ = 0, 
    _if_conditional151) {
        __result56__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_64=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 231),__exception_result_var_b60=((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b60));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 232),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    if(_if_conditional152=!(come_push_stackframe("18field.c", 234),__exception_result_var_b61=node_compile(right_62,info), come_pop_stackframe(), __exception_result_var_b61),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result57__ = (_Bool)0;
        if(name_63 && !__freed_obj__) { name_63 = come_decrement_ref_count(name_63, (void*)0, (void*)0, 0, 0, 0); }
        if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_65=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 238),__exception_result_var_b62=((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b62));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value122;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 239),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    right_type_66=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 241))->type;
    __freed_obj__ = 0;
    left_type_67=((struct CVALUE*)come_null_check(left_value_64, "18field.c", 243))->type;
    __freed_obj__ = 0;
    left_type2_68=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 245),__exception_result_var_b63=((struct sType*)(right_value123=solve_generics(left_type_67,left_type_67,info))), come_pop_stackframe(), __exception_result_var_b63));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value123;
    __freed_obj__ = 0;
    klass_69=((struct sType*)come_null_check(left_type2_68, "18field.c", 247))->mClass;
    __freed_obj__ = 0;
    klass_69=optional$2sClasspbool_value((come_push_stackframe("18field.c", 248),__exception_result_var_b67=((struct optional$2sClasspbool*)(right_value133=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 248))->classes,((struct sClass*)come_null_check(klass_69, "18field.c", 248))->mName))), come_pop_stackframe(), __exception_result_var_b67));
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
    klass_69=optional$2sClasspbool_value((come_push_stackframe("18field.c", 253),__exception_result_var_b69=((struct optional$2sClasspbool*)(right_value134=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 253))->classes,((struct sClass*)come_null_check(klass_69, "18field.c", 253))->mName))), come_pop_stackframe(), __exception_result_var_b69));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value134;
    __freed_obj__ = 0;
    if(_if_conditional158=((struct sClass*)come_null_check(klass_69, "18field.c", 255))->mFields==((void*)0),    __freed_obj__ = 0, 
    _if_conditional158) {
        (come_push_stackframe("18field.c", 256),err_msg(info,"%s fields are null",((struct sClass*)come_null_check(klass_69, "18field.c", 256))->mName),come_pop_stackframe());
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
    o2_saved_77=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_69, "18field.c", 260))->mFields)),field_80=(come_push_stackframe("18field.c", 260),__exception_result_var_b72=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "18field.c", 260))), come_pop_stackframe(), __exception_result_var_b72) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    !(come_push_stackframe("18field.c", 260),__exception_result_var_b73=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "18field.c", 260))), come_pop_stackframe(), __exception_result_var_b73) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    field_80=(come_push_stackframe("18field.c", 260),__exception_result_var_b76=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_77), "18field.c", 260))), come_pop_stackframe(), __exception_result_var_b76) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=field_80;
        field_name_83=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type2_84=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional163=(come_push_stackframe("18field.c", 263),__exception_result_var_b77=string_operator_equals(field_name_83,name_63), come_pop_stackframe(), __exception_result_var_b77),        __freed_obj__ = 0, 
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
    if(_if_conditional167=index_75==(come_push_stackframe("18field.c", 271),__exception_result_var_b78=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_69, "18field.c", 271))->mFields, "18field.c", 271))), come_pop_stackframe(), __exception_result_var_b78),    __freed_obj__ = 0, 
    _if_conditional167) {
        index_75=0;
        __freed_obj__ = 0;
        for(
        o2_saved_87=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_69, "18field.c", 273))->mFields)),field_88=(come_push_stackframe("18field.c", 273),__exception_result_var_b79=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 273))), come_pop_stackframe(), __exception_result_var_b79) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA3=        !(come_push_stackframe("18field.c", 273),__exception_result_var_b80=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 273))), come_pop_stackframe(), __exception_result_var_b80) ,        __freed_obj__ = 0, 
        _for_condtionalA3;        field_88=(come_push_stackframe("18field.c", 273),__exception_result_var_b81=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_87), "18field.c", 273))), come_pop_stackframe(), __exception_result_var_b81) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=field_88;
            field_name_89=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            field_type2_90=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            klass2_91=((struct sType*)come_null_check(field_type2_90, "18field.c", 276))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_92=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_91, "18field.c", 278))->mFields)),field2_93=(come_push_stackframe("18field.c", 278),__exception_result_var_b82=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_92), "18field.c", 278))), come_pop_stackframe(), __exception_result_var_b82) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA4=            !(come_push_stackframe("18field.c", 278),__exception_result_var_b83=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_92), "18field.c", 278))), come_pop_stackframe(), __exception_result_var_b83) ,            __freed_obj__ = 0, 
            _for_condtionalA4;            field2_93=(come_push_stackframe("18field.c", 278),__exception_result_var_b84=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_92), "18field.c", 278))), come_pop_stackframe(), __exception_result_var_b84) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var3=field2_93;
                field_name2_94=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
                field_type3_95=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = 0;
                if(_if_conditional168=(come_push_stackframe("18field.c", 281),__exception_result_var_b85=string_operator_equals(field_name2_94,name_63), come_pop_stackframe(), __exception_result_var_b85),                __freed_obj__ = 0, 
                _if_conditional168) {
                    __dec_obj66=child_field_name_76;
                    child_field_name_76=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 282),__exception_result_var_b86=((char*)(right_value136=__builtin_string(field_name_89))), come_pop_stackframe(), __exception_result_var_b86));
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
            if(_if_conditional170=(come_push_stackframe("18field.c", 292),__exception_result_var_b87=string_operator_equals(field_name_89,name_63), come_pop_stackframe(), __exception_result_var_b87),            __freed_obj__ = 0, 
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
        if(_if_conditional171=index_75==(come_push_stackframe("18field.c", 300),__exception_result_var_b88=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_69, "18field.c", 300))->mFields, "18field.c", 300))), come_pop_stackframe(), __exception_result_var_b88),        __freed_obj__ = 0, 
        _if_conditional171) {
            (come_push_stackframe("18field.c", 301),err_msg(info,"field not found(%s) in %s(1)",name_63,((struct sClass*)come_null_check(klass_69, "18field.c", 301))->mName),come_pop_stackframe());
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
    if(_if_conditional172=((struct sType*)come_null_check(field_type_74, "18field.c", 308))->mHeap&&!((struct sType*)come_null_check(right_type_66, "18field.c", 308))->mHeap,    __freed_obj__ = 0, 
    _if_conditional172) {
        if(_if_conditional173=(come_push_stackframe("18field.c", 309),__exception_result_var_b89=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_66, "18field.c", 309))->mClass, "18field.c", 309))->mName,"void"), come_pop_stackframe(), __exception_result_var_b89)&&((struct sType*)come_null_check(right_type_66, "18field.c", 309))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional173) {
        }
        else {
            if(_if_conditional174=!((struct sType*)come_null_check(right_type_66, "18field.c", 313))->mDelegate&&!((struct sType*)come_null_check(right_type_66, "18field.c", 313))->mShare,            __freed_obj__ = 0, 
            _if_conditional174) {
                (come_push_stackframe("18field.c", 314),err_msg(info,"require right value as heap object(%s)",name_63),come_pop_stackframe());
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
    (come_push_stackframe("18field.c", 320),check_assign_type(((char*)(right_value141=xsprintf("\%s is assigned to",((char*)(right_value140=string_to_string(name_63)))))),field_type_74,right_type_66,right_value_65,(_Bool)0,info),come_pop_stackframe());
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value140;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value141;
    __freed_obj__ = 0;
    if(_if_conditional175=((struct sType*)come_null_check(field_type_74, "18field.c", 321))->mHeap&&((struct sType*)come_null_check(right_type_66, "18field.c", 321))->mHeap&&((struct sType*)come_null_check(field_type_74, "18field.c", 321))->mPointerNum>0&&((struct sType*)come_null_check(right_type_66, "18field.c", 321))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional175) {
        if(_if_conditional176=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 323))->type, "18field.c", 323))->mPointerNum==1,        __freed_obj__ = 0, 
        _if_conditional176) {
            if(_if_conditional177=child_field_name_76,            __freed_obj__ = 0, 
            _if_conditional177) {
                c_value_97=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 325),__exception_result_var_b90=((char*)(right_value142=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 325))->c_value,child_field_name_76,name_63))), come_pop_stackframe(), __exception_result_var_b90));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
                if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value142;
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 326),decrement_ref_count_object(field_type_74,c_value_97,info,(_Bool)0),come_pop_stackframe());
                __freed_obj__ = 0;
                if(_if_conditional178=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 327))->var,                __freed_obj__ = 0, 
                _if_conditional178) {
                    if(_if_conditional179=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 328))->var, "18field.c", 328))->mType, "18field.c", 328))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        __dec_obj69=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 329))->var, "18field.c", 329))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 329))->var, "18field.c", 329))->mCValueName=((void*)0);
                        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional180=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 331))->var, "18field.c", 331))->mType, "18field.c", 331))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            __dec_obj70=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 332))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 332))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 332),__exception_result_var_b91=((char*)(right_value143=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 332))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 332))->c_value,info))), come_pop_stackframe(), __exception_result_var_b91));
                            if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
                            if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value143;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional181=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 334))->var, "18field.c", 334))->mType, "18field.c", 334))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional181) {
                                __dec_obj71=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 335))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 335))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 335),__exception_result_var_b92=((char*)(right_value144=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 335))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 335))->c_value,info))), come_pop_stackframe(), __exception_result_var_b92));
                                if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
                                if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value144;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj72=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 338))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 338))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 338),__exception_result_var_b93=((char*)(right_value145=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 338))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 338))->c_value,info))), come_pop_stackframe(), __exception_result_var_b93));
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
                    if(_if_conditional182=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 346))->type, "18field.c", 346))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                    }
                    else {
                        __dec_obj73=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 349))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 349))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 349),__exception_result_var_b94=((char*)(right_value146=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 349))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 349))->c_value,info))), come_pop_stackframe(), __exception_result_var_b94));
                        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
                        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value146;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj74=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 352))->c_value;
                ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 352))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 352),__exception_result_var_b95=((char*)(right_value147=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 352))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 352))->c_value))), come_pop_stackframe(), __exception_result_var_b95));
                if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value147);
                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value147;
                __freed_obj__ = 0;
                if(c_value_97 && !__freed_obj__) { c_value_97 = come_decrement_ref_count(c_value_97, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                c_value_98=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 355),__exception_result_var_b96=((char*)(right_value148=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 355))->c_value,name_63))), come_pop_stackframe(), __exception_result_var_b96));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value148;
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 356),decrement_ref_count_object(field_type_74,c_value_98,info,(_Bool)0),come_pop_stackframe());
                __freed_obj__ = 0;
                if(_if_conditional183=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 357))->var,                __freed_obj__ = 0, 
                _if_conditional183) {
                    if(_if_conditional184=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 358))->var, "18field.c", 358))->mType, "18field.c", 358))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional184) {
                        __dec_obj75=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 359))->var, "18field.c", 359))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 359))->var, "18field.c", 359))->mCValueName=((void*)0);
                        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional185=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 361))->var, "18field.c", 361))->mType, "18field.c", 361))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional185) {
                            __dec_obj76=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 362))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 362))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 362),__exception_result_var_b97=((char*)(right_value149=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 362))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 362))->c_value,info))), come_pop_stackframe(), __exception_result_var_b97));
                            if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value149;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional186=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 364))->var, "18field.c", 364))->mType, "18field.c", 364))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional186) {
                                __dec_obj77=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 365))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 365))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 365),__exception_result_var_b98=((char*)(right_value150=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 365))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 365))->c_value,info))), come_pop_stackframe(), __exception_result_var_b98));
                                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
                                if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value150;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj78=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 368))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 368))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 368),__exception_result_var_b99=((char*)(right_value151=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 368))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 368))->c_value,info))), come_pop_stackframe(), __exception_result_var_b99));
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
                    if(_if_conditional187=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 376))->type, "18field.c", 376))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional187) {
                    }
                    else {
                        __dec_obj79=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 379))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 379))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 379),__exception_result_var_b100=((char*)(right_value152=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 379))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 379))->c_value,info))), come_pop_stackframe(), __exception_result_var_b100));
                        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
                        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value152;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj80=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 382))->c_value;
                ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 382))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 382),__exception_result_var_b101=((char*)(right_value153=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 382))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 382))->c_value))), come_pop_stackframe(), __exception_result_var_b101));
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
            if(_if_conditional188=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 385))->type, "18field.c", 385))->mPointerNum==0,            __freed_obj__ = 0, 
            _if_conditional188) {
                if(_if_conditional189=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional189) {
                    c_value_99=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 387),__exception_result_var_b102=((char*)(right_value154=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 387))->c_value,child_field_name_76,name_63))), come_pop_stackframe(), __exception_result_var_b102));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
                    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value154;
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 388),decrement_ref_count_object(field_type_74,c_value_99,info,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                    if(_if_conditional190=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 389))->var,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        if(_if_conditional191=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 390))->var, "18field.c", 390))->mType, "18field.c", 390))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional191) {
                            __dec_obj81=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 391))->var, "18field.c", 391))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 391))->var, "18field.c", 391))->mCValueName=((void*)0);
                            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional192=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 393))->var, "18field.c", 393))->mType, "18field.c", 393))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                __dec_obj82=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 394))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 394))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 394),__exception_result_var_b103=((char*)(right_value155=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 394))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 394))->c_value,info))), come_pop_stackframe(), __exception_result_var_b103));
                                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value155;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional193=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 396))->var, "18field.c", 396))->mType, "18field.c", 396))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional193) {
                                    __dec_obj83=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 397))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 397))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 397),__exception_result_var_b104=((char*)(right_value156=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 397))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 397))->c_value,info))), come_pop_stackframe(), __exception_result_var_b104));
                                    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value156;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj84=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 400))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 400))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 400),__exception_result_var_b105=((char*)(right_value157=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 400))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 400))->c_value,info))), come_pop_stackframe(), __exception_result_var_b105));
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
                        if(_if_conditional194=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 408))->type, "18field.c", 408))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional194) {
                        }
                        else {
                            __dec_obj85=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 411))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 411))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 411),__exception_result_var_b106=((char*)(right_value158=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 411))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 411))->c_value,info))), come_pop_stackframe(), __exception_result_var_b106));
                            if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
                            if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value158;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj86=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 414))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 414))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 414),__exception_result_var_b107=((char*)(right_value159=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 414))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 414))->c_value))), come_pop_stackframe(), __exception_result_var_b107));
                    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value159);
                    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value159;
                    __freed_obj__ = 0;
                    if(c_value_99 && !__freed_obj__) { c_value_99 = come_decrement_ref_count(c_value_99, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_100=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 417),__exception_result_var_b108=((char*)(right_value160=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 417))->c_value,name_63))), come_pop_stackframe(), __exception_result_var_b108));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value160;
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 418),decrement_ref_count_object(field_type_74,c_value_100,info,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                    __dec_obj87=((struct CVALUE*)come_null_check(right_value_65, "18field.c", 419))->c_value;
                    ((struct CVALUE*)come_null_check(right_value_65, "18field.c", 419))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 419),__exception_result_var_b109=((char*)(right_value161=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 419))->type,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 419))->c_value,info))), come_pop_stackframe(), __exception_result_var_b109));
                    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
                    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value161;
                    __freed_obj__ = 0;
                    __dec_obj88=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 420))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 420))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 420),__exception_result_var_b110=((char*)(right_value162=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 420))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 420))->c_value))), come_pop_stackframe(), __exception_result_var_b110));
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
                (come_push_stackframe("18field.c", 424),err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 424))->type, "18field.c", 424))->mPointerNum),come_pop_stackframe());
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
        right_value_id_101=(come_push_stackframe("18field.c", 427),__exception_result_var_b111=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_65, "18field.c", 427))->c_value)), come_pop_stackframe(), __exception_result_var_b111);
        __freed_obj__ = 0;
        if(_if_conditional195=right_value_id_101!=-1,        __freed_obj__ = 0, 
        _if_conditional195) {
            (come_push_stackframe("18field.c", 430),remove_object_from_right_values(right_value_id_101,info),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional196=((struct sType*)come_null_check(field_type_74, "18field.c", 433))->mHeap&&((struct sType*)come_null_check(field_type_74, "18field.c", 433))->mPointerNum>0&&((struct sType*)come_null_check(right_type_66, "18field.c", 433))->mPointerNum>0&&(come_push_stackframe("18field.c", 433),__exception_result_var_b112=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(right_type_66, "18field.c", 433))->mClass, "18field.c", 433))->mName,"void"), come_pop_stackframe(), __exception_result_var_b112),        __freed_obj__ = 0, 
        _if_conditional196) {
            if(_if_conditional197=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 435))->type, "18field.c", 435))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional197) {
                if(_if_conditional198=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional198) {
                    c_value_102=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 437),__exception_result_var_b113=((char*)(right_value163=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 437))->c_value,child_field_name_76,name_63))), come_pop_stackframe(), __exception_result_var_b113));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
                    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value163;
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 438),decrement_ref_count_object(field_type_74,c_value_102,info,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                    __dec_obj89=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 439))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 439))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 439),__exception_result_var_b114=((char*)(right_value164=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 439))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 439))->c_value))), come_pop_stackframe(), __exception_result_var_b114));
                    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
                    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value164;
                    __freed_obj__ = 0;
                    if(c_value_102 && !__freed_obj__) { c_value_102 = come_decrement_ref_count(c_value_102, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    c_value_103=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 442),__exception_result_var_b115=((char*)(right_value165=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 442))->c_value,name_63))), come_pop_stackframe(), __exception_result_var_b115));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
                    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value165;
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 443),decrement_ref_count_object(field_type_74,c_value_103,info,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                    __dec_obj90=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 444))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 444))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 444),__exception_result_var_b116=((char*)(right_value166=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 444))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 444))->c_value))), come_pop_stackframe(), __exception_result_var_b116));
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
                if(_if_conditional199=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 447))->type, "18field.c", 447))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    if(_if_conditional200=child_field_name_76,                    __freed_obj__ = 0, 
                    _if_conditional200) {
                        c_value_104=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 449),__exception_result_var_b117=((char*)(right_value167=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 449))->c_value,child_field_name_76,name_63))), come_pop_stackframe(), __exception_result_var_b117));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value167;
                        __freed_obj__ = 0;
                        (come_push_stackframe("18field.c", 450),decrement_ref_count_object(field_type_74,c_value_104,info,(_Bool)0),come_pop_stackframe());
                        __freed_obj__ = 0;
                        __dec_obj91=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 451))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 451))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 451),__exception_result_var_b118=((char*)(right_value168=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 451))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 451))->c_value))), come_pop_stackframe(), __exception_result_var_b118));
                        if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
                        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value168;
                        __freed_obj__ = 0;
                        if(c_value_104 && !__freed_obj__) { c_value_104 = come_decrement_ref_count(c_value_104, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        c_value_105=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 454),__exception_result_var_b119=((char*)(right_value169=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 454))->c_value,name_63))), come_pop_stackframe(), __exception_result_var_b119));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
                        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value169;
                        __freed_obj__ = 0;
                        (come_push_stackframe("18field.c", 455),decrement_ref_count_object(field_type_74,c_value_105,info,(_Bool)0),come_pop_stackframe());
                        __freed_obj__ = 0;
                        __dec_obj92=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 456))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 456))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 456),__exception_result_var_b120=((char*)(right_value170=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 456))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 456))->c_value))), come_pop_stackframe(), __exception_result_var_b120));
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
                    (come_push_stackframe("18field.c", 460),err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 460))->type, "18field.c", 460))->mPointerNum),come_pop_stackframe());
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
            if(_if_conditional201=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 465))->type, "18field.c", 465))->mPointerNum==1,            __freed_obj__ = 0, 
            _if_conditional201) {
                if(_if_conditional202=child_field_name_76,                __freed_obj__ = 0, 
                _if_conditional202) {
                    __dec_obj93=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 467))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 467))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 467),__exception_result_var_b121=((char*)(right_value171=xsprintf("%s->%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 467))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 467))->c_value))), come_pop_stackframe(), __exception_result_var_b121));
                    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value171;
                    __freed_obj__ = 0;
                }
                else {
                    __dec_obj94=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 470))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 470))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 470),__exception_result_var_b122=((char*)(right_value172=xsprintf("%s->%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 470))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 470))->c_value))), come_pop_stackframe(), __exception_result_var_b122));
                    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value172;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional203=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 473))->type, "18field.c", 473))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional203) {
                    if(_if_conditional204=child_field_name_76,                    __freed_obj__ = 0, 
                    _if_conditional204) {
                        __dec_obj95=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 475))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 475))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 475),__exception_result_var_b123=((char*)(right_value173=xsprintf("%s.%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 475))->c_value,child_field_name_76,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 475))->c_value))), come_pop_stackframe(), __exception_result_var_b123));
                        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value173;
                        __freed_obj__ = 0;
                    }
                    else {
                        __dec_obj96=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 478))->c_value;
                        ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 478))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 478),__exception_result_var_b124=((char*)(right_value174=xsprintf("%s.%s=%s",((struct CVALUE*)come_null_check(left_value_64, "18field.c", 478))->c_value,name_63,((struct CVALUE*)come_null_check(right_value_65, "18field.c", 478))->c_value))), come_pop_stackframe(), __exception_result_var_b124));
                        if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value174;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    (come_push_stackframe("18field.c", 482),err_msg(info,"Invalid left_type. The field name is %s. The pointer num is %d.",name_63,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_64, "18field.c", 482))->type, "18field.c", 482))->mPointerNum),come_pop_stackframe());
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
    __dec_obj97=((struct CVALUE*)come_null_check(come_value_96, "18field.c", 487))->type;
    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 487))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(field_type_74))));
    if(__dec_obj97) { come_call_finalizer(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value175;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_96, "18field.c", 488))->var=((void*)0);
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 490),__exception_result_var_b125=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 490))->stack, "18field.c", 490)),(struct CVALUE*)come_increment_ref_count(come_value_96)), come_pop_stackframe(), __exception_result_var_b125);
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 492),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_96, "18field.c", 492))->c_value),come_pop_stackframe());
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
void* __exception_result_var_b64;
unsigned int __exception_result_var_b65;
unsigned int hash_71;
unsigned int it_72;
_Bool _while_condtional10;
_Bool _if_conditional153;
void* right_value124;
struct optional$2boolbool* __exception_result_var_b66;
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
        (come_push_stackframe("./comelang2.h", 1589),__exception_result_var_b64=memset(&default_value_70,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b64);
        __freed_obj__ = 0;
        hash_71=(come_push_stackframe("./comelang2.h", 1591),__exception_result_var_b65=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1591))), come_pop_stackframe(), __exception_result_var_b65)%((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1591))->size;
        __freed_obj__ = 0;
        it_72=hash_71;
        __freed_obj__ = 0;
        while(_while_condtional10=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional10) {
            if(_if_conditional153=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1595))->item_existance[it_72],            __freed_obj__ = 0, 
            _if_conditional153) {
                if(_if_conditional154=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1597),__exception_result_var_b66=((struct optional$2boolbool*)(right_value124=string_equals(((char*)come_null_check(((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1597))->keys[it_72], "./comelang2.h", 1597)),key))), come_pop_stackframe(), __exception_result_var_b66)),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124),
                (right_value124 && right_value124 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value124, 
                __freed_obj__ = 0, 
                _if_conditional154) {
                    __result59__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value126=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value125=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1599)))),((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1599))->items[it_72],(_Bool)1)));
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
                if(_if_conditional155=it_72>=((struct map$2charphsClassph*)come_null_check(self, "./comelang2.h", 1604))->size,                __freed_obj__ = 0, 
                _if_conditional155) {
                    it_72=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional156=it_72==hash_71,                    __freed_obj__ = 0, 
                    _if_conditional156) {
                        __result60__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1608), ((struct optional$2sClasspbool*)(right_value128=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value127=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1608))),default_value_70,(_Bool)0))));
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
                __result61__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1612), ((struct optional$2sClasspbool*)(right_value130=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value129=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1612))),default_value_70,(_Bool)0))));
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
        __result62__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1616), ((struct optional$2sClasspbool*)(right_value132=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value131=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1616))),default_value_70,(_Bool)0))));
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
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 40))->v1=v1;
                        __freed_obj__ = 0;
                        ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
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
void* __exception_result_var_b68;
struct sClass* __result63__;
struct sClass* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_73, 0, sizeof(struct sClass*));
        if(_if_conditional157=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional157) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b68=memset(&default_value_73,0,sizeof(struct sClass*)), come_pop_stackframe(), __exception_result_var_b68);
            __freed_obj__ = 0;
            __result63__ = __result_obj__ = default_value_73;
            __freed_obj__ = 0;
            return __result63__;
            __freed_obj__ = 0;
        }
        else {
            __result64__ = __result_obj__ = ((struct optional$2sClasspbool*)come_null_check(self, "./comelang2.h", 67))->v1;
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
void* __exception_result_var_b70;
struct tuple2$2charphsTypeph* __result66__;
_Bool _if_conditional160;
struct tuple2$2charphsTypeph* __result67__;
struct tuple2$2charphsTypeph* result_79;
void* __exception_result_var_b71;
struct tuple2$2charphsTypeph* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_79, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional159=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional159) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 337),__exception_result_var_b70=memset(&result_78,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b70);
            __freed_obj__ = 0;
            __result66__ = __result_obj__ = result_78;
            __freed_obj__ = 0;
            return __result66__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 340))->it=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 340))->head;
        __freed_obj__ = 0;
        if(_if_conditional160=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional160) {
            __result67__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 343))->it, "./comelang2.h", 343))->item;
            __freed_obj__ = 0;
            return __result67__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 347),__exception_result_var_b71=memset(&result_79,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b71);
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
        __result69__ = self==((void*)0)||((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 370))->it==((void*)0);
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
void* __exception_result_var_b74;
struct tuple2$2charphsTypeph* __result70__;
_Bool _if_conditional162;
struct tuple2$2charphsTypeph* __result71__;
struct tuple2$2charphsTypeph* result_82;
void* __exception_result_var_b75;
struct tuple2$2charphsTypeph* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_81, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_82, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional161=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional161) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 354),__exception_result_var_b74=memset(&result_81,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b74);
            __freed_obj__ = 0;
            __result70__ = __result_obj__ = result_81;
            __freed_obj__ = 0;
            return __result70__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 358))->it=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 358))->it, "./comelang2.h", 358))->next;
        __freed_obj__ = 0;
        if(_if_conditional162=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional162) {
            __result71__ = __result_obj__ = ((struct list_item$1tuple2$2charphsTypephph*)come_null_check(((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->item;
            __freed_obj__ = 0;
            return __result71__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 365),__exception_result_var_b75=memset(&result_82,0,sizeof(struct tuple2$2charphsTypeph*)), come_pop_stackframe(), __exception_result_var_b75);
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
        it_85=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 173))->head;
        __freed_obj__ = 0;
        while(_while_condtional11=it_85!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional11) {
            prev_it_86=it_85;
            __freed_obj__ = 0;
            it_85=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_85, "./comelang2.h", 176))->next;
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
                if(_if_conditional164=self!=((void*)0)&&((struct list_item$1tuple2$2charphsTypephph*)come_null_check(self, "list_item$1tuple2$2charphsTypephphp_finalize", 0))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional164) {
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
_Bool _if_conditional165;
_Bool _if_conditional166;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional165=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional165) {
                            if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional166=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional166) {
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
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result73__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 414))->len;
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
    __result80__ = ((struct sStoreFieldNode*)come_null_check(self, "18field.c", 499))->sline;
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
char* __exception_result_var_b126;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
    __result81__ = __result_obj__ = (come_push_stackframe("18field.c", 504),__exception_result_var_b126=((char*)(right_value176=__builtin_string(((struct sStoreFieldNode*)come_null_check(self, "18field.c", 504))->sname))), come_pop_stackframe(), __exception_result_var_b126);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value176;
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
char* __exception_result_var_b127;
char* __dec_obj98;
void* right_value178;
struct sNode* __dec_obj99;
struct sNullCheckNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 519))->sline=((struct sInfo*)come_null_check(info, "18field.c", 519))->sline;
    __freed_obj__ = 0;
    __dec_obj98=((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 520))->sname=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 520),__exception_result_var_b127=((char*)(right_value177=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 520))->sname))), come_pop_stackframe(), __exception_result_var_b127));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value177;
    __freed_obj__ = 0;
    __dec_obj99=((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 522))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(left))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value178;
    __freed_obj__ = 0;
    ((struct sNullCheckNode*)come_null_check(self, "18field.c", 523))->mOnlyNullCecker=only_null_checker;
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
char* __exception_result_var_b128;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
    __result84__ = __result_obj__ = (come_push_stackframe("18field.c", 535),__exception_result_var_b128=((char*)(right_value179=__builtin_string("sNullCheckNode"))), come_pop_stackframe(), __exception_result_var_b128);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179;
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
_Bool __exception_result_var_b129;
_Bool _if_conditional207;
_Bool __result85__;
void* right_value180;
struct CVALUE* __exception_result_var_b130;
struct CVALUE* left_value_107;
_Bool __exception_result_var_b131;
_Bool _if_conditional208;
void* right_value181;
char* __exception_result_var_b132;
char* method_name_108;
void* right_value183;
struct sFun* __exception_result_var_b135;
_Bool _if_conditional213;
struct sType* obj_type_111;
int __exception_result_var_b136;
_Bool _if_conditional229;
struct sType* obj_type2_112;
void* right_value184;
char* __exception_result_var_b137;
void* right_value185;
char* __exception_result_var_b138;
char* __dec_obj100;
void* right_value186;
struct optional$2sFunpbool* __exception_result_var_b139;
struct sFun* fun_113;
_Bool _if_conditional230;
_Bool __result90__;
void* right_value187;
struct sType* __exception_result_var_b140;
struct sType* type_114;
void* right_value188;
struct CVALUE* come_value_115;
void* right_value189;
char* __exception_result_var_b141;
char* __dec_obj101;
void* right_value190;
struct sType* __dec_obj102;
struct list$1CVALUEph* __exception_result_var_b142;
_Bool _if_conditional231;
struct list$1CVALUEph* __exception_result_var_b143;
_Bool _if_conditional232;
void* right_value191;
struct CVALUE* come_value_116;
void* right_value192;
struct optional$2charphbool* __exception_result_var_b144;
void* right_value193;
char* __exception_result_var_b147;
char* __dec_obj103;
void* right_value194;
struct sType* __dec_obj104;
struct list$1CVALUEph* __exception_result_var_b148;
struct list$1CVALUEph* __exception_result_var_b149;
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
    left_106=((struct sNullCheckNode*)come_null_check(self, "18field.c", 540))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional207=!(come_push_stackframe("18field.c", 542),__exception_result_var_b129=node_compile(left_106,info), come_pop_stackframe(), __exception_result_var_b129),    __freed_obj__ = 0, 
    _if_conditional207) {
        __result85__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result85__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_107=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 546),__exception_result_var_b130=((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b130));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 547),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    if(_if_conditional208=!((struct sNullCheckNode*)come_null_check(self, "18field.c", 549))->mOnlyNullCecker&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 549))->type, "18field.c", 549))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 549))->type, "18field.c", 549))->mNoSolvedGenericsType, "18field.c", 549))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 549))->type, "18field.c", 549))->mNoSolvedGenericsType, "18field.c", 549))->v1, "18field.c", 549))->mClass&&(come_push_stackframe("18field.c", 549),__exception_result_var_b131=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 549))->type, "18field.c", 549))->mNoSolvedGenericsType, "18field.c", 549))->v1, "18field.c", 549))->mClass, "18field.c", 549))->mName,"optional"), come_pop_stackframe(), __exception_result_var_b131),    __freed_obj__ = 0, 
    _if_conditional208) {
        method_name_108=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 550),__exception_result_var_b132=((char*)(right_value181=create_method_name(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 550))->type,(_Bool)0,"expect",info))), come_pop_stackframe(), __exception_result_var_b132));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181;
        __freed_obj__ = 0;
        if(_if_conditional213=(come_push_stackframe("18field.c", 552),__exception_result_var_b135=((struct sFun*)(right_value183=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 552))->funcs, "18field.c", 552)),method_name_108,((void*)0)))), come_pop_stackframe(), __exception_result_var_b135)==((void*)0),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183),
        (right_value183 && right_value183 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[1] = right_value183, 
        __freed_obj__ = 0, 
        _if_conditional213) {
            obj_type_111=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 553))->type, "18field.c", 553))->mNoSolvedGenericsType, "18field.c", 553))->v1;
            __freed_obj__ = 0;
            if(_if_conditional229=(come_push_stackframe("18field.c", 554),__exception_result_var_b136=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_111, "18field.c", 554))->mGenericsTypes, "18field.c", 554))), come_pop_stackframe(), __exception_result_var_b136)>0,            __freed_obj__ = 0, 
            _if_conditional229) {
                obj_type2_112=((struct CVALUE*)come_null_check(left_value_107, "18field.c", 555))->type;
                __freed_obj__ = 0;
                __dec_obj100=method_name_108;
                method_name_108=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 556),__exception_result_var_b138=((char*)(right_value185=make_generics_function(obj_type2_112,(char*)come_increment_ref_count((come_push_stackframe("18field.c", 556),__exception_result_var_b137=((char*)(right_value184=__builtin_string("expect"))), come_pop_stackframe(), __exception_result_var_b137)),info))), come_pop_stackframe(), __exception_result_var_b138));
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
                (come_push_stackframe("18field.c", 559),err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 559))->type, "18field.c", 559))->mClass, "18field.c", 559))->mName),come_pop_stackframe());
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 560),exit(1),come_pop_stackframe());
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        fun_113=optional$2sFunpbool_value((come_push_stackframe("18field.c", 564),__exception_result_var_b139=((struct optional$2sFunpbool*)(right_value186=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 564))->funcs,method_name_108))), come_pop_stackframe(), __exception_result_var_b139));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value186;
        __freed_obj__ = 0;
        if(_if_conditional230=fun_113==((void*)0),        __freed_obj__ = 0, 
        _if_conditional230) {
            (come_push_stackframe("18field.c", 567),err_msg(info,"function not found(%s)",method_name_108),come_pop_stackframe());
            __freed_obj__ = 0;
            __result90__ = (_Bool)1;
            if(method_name_108 && !__freed_obj__) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result90__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        type_114=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 571),__exception_result_var_b140=((struct sType*)(right_value187=solve_generics(((struct sFun*)come_null_check(fun_113, "18field.c", 571))->mResultType,((struct CVALUE*)come_null_check(left_value_107, "18field.c", 571))->type,info))), come_pop_stackframe(), __exception_result_var_b140));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value187;
        __freed_obj__ = 0;
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 573))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value188);
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value188;
        __freed_obj__ = 0;
        __dec_obj101=((struct CVALUE*)come_null_check(come_value_115, "18field.c", 575))->c_value;
        ((struct CVALUE*)come_null_check(come_value_115, "18field.c", 575))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 575),__exception_result_var_b141=((char*)(right_value189=xsprintf("%s(%s)",method_name_108,((struct CVALUE*)come_null_check(left_value_107, "18field.c", 575))->c_value))), come_pop_stackframe(), __exception_result_var_b141));
        if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value189;
        __freed_obj__ = 0;
        __dec_obj102=((struct CVALUE*)come_null_check(come_value_115, "18field.c", 576))->type;
        ((struct CVALUE*)come_null_check(come_value_115, "18field.c", 576))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(type_114))));
        if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value190;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_115, "18field.c", 577))->var=((void*)0);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 579),__exception_result_var_b142=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 579))->stack, "18field.c", 579)),(struct CVALUE*)come_increment_ref_count(come_value_115)), come_pop_stackframe(), __exception_result_var_b142);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 581),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_115, "18field.c", 581))->c_value),come_pop_stackframe());
        __freed_obj__ = 0;
        if(method_name_108 && !__freed_obj__) { method_name_108 = come_decrement_ref_count(method_name_108, (void*)0, (void*)0, 0, 0, 0); }
        if(type_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional231=!gComeDebug,        __freed_obj__ = 0, 
        _if_conditional231) {
            (come_push_stackframe("18field.c", 584),__exception_result_var_b143=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 584))->stack, "18field.c", 584)),(struct CVALUE*)come_increment_ref_count(left_value_107)), come_pop_stackframe(), __exception_result_var_b143);
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional232=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 586))->type, "18field.c", 586))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional232) {
                come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 587))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value191;
                __freed_obj__ = 0;
                __dec_obj103=((struct CVALUE*)come_null_check(come_value_116, "18field.c", 589))->c_value;
                ((struct CVALUE*)come_null_check(come_value_116, "18field.c", 589))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 589),__exception_result_var_b147=((char*)(right_value193=xsprintf("((%s)come_null_check(%s, \"%s\", %d))",optional$2charphbool_expect((come_push_stackframe("18field.c", 589),__exception_result_var_b144=((struct optional$2charphbool*)(right_value192=make_type_name_string(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 589))->type,(_Bool)0,(_Bool)0,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b144)),((struct CVALUE*)come_null_check(left_value_107, "18field.c", 589))->c_value,((struct sInfo*)come_null_check(info, "18field.c", 589))->sname,((struct sInfo*)come_null_check(info, "18field.c", 589))->sline))), come_pop_stackframe(), __exception_result_var_b147));
                if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value192;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value193;
                __freed_obj__ = 0;
                __dec_obj104=((struct CVALUE*)come_null_check(come_value_116, "18field.c", 590))->type;
                ((struct CVALUE*)come_null_check(come_value_116, "18field.c", 590))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(((struct CVALUE*)come_null_check(left_value_107, "18field.c", 590))->type))));
                if(__dec_obj104) { come_call_finalizer(sType_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value194;
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_116, "18field.c", 591))->var=((void*)0);
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 593),__exception_result_var_b148=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 593))->stack, "18field.c", 593)),(struct CVALUE*)come_increment_ref_count(come_value_116)), come_pop_stackframe(), __exception_result_var_b148);
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 595),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_116, "18field.c", 595))->c_value),come_pop_stackframe());
                __freed_obj__ = 0;
                if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                (come_push_stackframe("18field.c", 598),__exception_result_var_b149=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 598))->stack, "18field.c", 598)),(struct CVALUE*)come_increment_ref_count(left_value_107)), come_pop_stackframe(), __exception_result_var_b149);
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
unsigned int __exception_result_var_b133;
unsigned int hash_109;
unsigned int it_110;
_Bool _while_condtional12;
_Bool _if_conditional209;
void* right_value182;
struct optional$2boolbool* __exception_result_var_b134;
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
            hash_109=(come_push_stackframe("./comelang2.h", 1262),__exception_result_var_b133=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1262))), come_pop_stackframe(), __exception_result_var_b133)%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1262))->size;
            __freed_obj__ = 0;
            it_110=hash_109;
            __freed_obj__ = 0;
            while(_while_condtional12=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional12) {
                if(_if_conditional209=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1266))->item_existance[it_110],                __freed_obj__ = 0, 
                _if_conditional209) {
                    if(_if_conditional210=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1268),__exception_result_var_b134=((struct optional$2boolbool*)(right_value182=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1268))->keys[it_110], "./comelang2.h", 1268)),key))), come_pop_stackframe(), __exception_result_var_b134)),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182),
                    (right_value182 && right_value182 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value182, 
                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __result86__ = __result_obj__ = ((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1270))->items[it_110];
                        __freed_obj__ = 0;
                        return __result86__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_110++;
                    __freed_obj__ = 0;
                    if(_if_conditional211=it_110>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1275))->size,                    __freed_obj__ = 0, 
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
            if(_if_conditional214=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional214) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 0))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional215=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional215) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 1))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional216=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional216) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 2))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional217=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional217) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 3))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional218=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional218) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 4))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional219=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional219) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 5))->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional220=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional220) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 6))->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional223=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional223) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 7))->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional224=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional224) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 8))->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional225=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional225) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 9))->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional226=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional226) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,((struct sFun*)come_null_check(self, "sFun_finalize", 10))->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional227=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional227) {
                if(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader && !__freed_obj__) { ((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader = come_decrement_ref_count(((struct sFun*)come_null_check(self, "sFun_finalize", 11))->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional228=self!=((void*)0)&&((struct sFun*)come_null_check(self, "sFun_finalize", 12))->mDeclareSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional228) {
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
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional221=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional221) {
                        if(((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sBlock*)come_null_check(self, "sBlock_finalize", 0))->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional222=self!=((void*)0)&&((struct sBlock*)come_null_check(self, "sBlock_finalize", 1))->mVarTable!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional222) {
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
int __exception_result_var_b145;
int __exception_result_var_b146;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional233=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 72))->v2,                    __freed_obj__ = 0, 
                    _if_conditional233) {
                        (come_push_stackframe("./comelang2.h", 73),__exception_result_var_b145=puts("Exception: at"), come_pop_stackframe(), __exception_result_var_b145);
                        __freed_obj__ = 0;
                        (come_push_stackframe("./comelang2.h", 74),exception_stackframe(),come_pop_stackframe());
                        __freed_obj__ = 0;
                        (come_push_stackframe("./comelang2.h", 75),__exception_result_var_b146=puts("abort."), come_pop_stackframe(), __exception_result_var_b146);
                        __freed_obj__ = 0;
                        (come_push_stackframe("./comelang2.h", 76),exit(2),come_pop_stackframe());
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result91__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 78))->v1;
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
                    if(_if_conditional234=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1!=((void*)0),                    __freed_obj__ = 0, 
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
int __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = ((struct sNullCheckNode*)come_null_check(self, "18field.c", 606))->sline;
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
char* __exception_result_var_b150;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
    __result94__ = __result_obj__ = (come_push_stackframe("18field.c", 611),__exception_result_var_b150=((char*)(right_value195=__builtin_string(((struct sNullCheckNode*)come_null_check(self, "18field.c", 611))->sname))), come_pop_stackframe(), __exception_result_var_b150);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

struct sExceptionGetValueNode* sExceptionGetValueNode_initialize(struct sExceptionGetValueNode* self, struct sNode* left, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value196;
char* __exception_result_var_b151;
char* __dec_obj105;
void* right_value197;
struct sNode* __dec_obj106;
struct sExceptionGetValueNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 624))->sline=((struct sInfo*)come_null_check(info, "18field.c", 624))->sline;
    __freed_obj__ = 0;
    __dec_obj105=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 625))->sname;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 625))->sname=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 625),__exception_result_var_b151=((char*)(right_value196=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 625))->sname))), come_pop_stackframe(), __exception_result_var_b151));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196;
    __freed_obj__ = 0;
    __dec_obj106=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 627))->mLeft;
    ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 627))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(left))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value197;
    __freed_obj__ = 0;
    __result95__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sExceptionGetValueNode_terminated(){
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

_Bool compiletime_get_exception_value(struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value198;
struct CVALUE* __exception_result_var_b152;
struct CVALUE* left_value_117;
_Bool _if_conditional237;
_Bool __exception_result_var_b153;
_Bool _if_conditional238;
void* right_value199;
char* __exception_result_var_b154;
char* method_name_118;
void* right_value200;
struct sFun* __exception_result_var_b155;
_Bool _if_conditional239;
struct sType* obj_type_119;
int __exception_result_var_b156;
_Bool _if_conditional240;
struct sType* obj_type2_120;
void* right_value201;
char* __exception_result_var_b157;
void* right_value202;
char* __exception_result_var_b158;
char* __dec_obj107;
void* right_value203;
struct optional$2sFunpbool* __exception_result_var_b159;
struct sFun* fun_121;
_Bool _if_conditional241;
_Bool __result97__;
void* right_value204;
struct sType* __exception_result_var_b160;
struct sType* type_122;
void* right_value205;
struct CVALUE* come_value_123;
void* right_value206;
char* __exception_result_var_b161;
char* __dec_obj108;
void* right_value207;
struct sType* __dec_obj109;
struct list$1CVALUEph* __exception_result_var_b162;
struct list$1CVALUEph* __exception_result_var_b163;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value198, 0, sizeof(void*));
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_value199, 0, sizeof(void*));
memset(&method_name_118, 0, sizeof(char*));
memset(&right_value200, 0, sizeof(void*));
memset(&obj_type_119, 0, sizeof(struct sType*));
memset(&obj_type2_120, 0, sizeof(struct sType*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&fun_121, 0, sizeof(struct sFun*));
memset(&right_value204, 0, sizeof(void*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&right_value205, 0, sizeof(void*));
memset(&come_value_123, 0, sizeof(struct CVALUE*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
    left_value_117=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 639),__exception_result_var_b152=((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b152));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 640),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    if(_if_conditional237=left_value_117==((void*)0),    __freed_obj__ = 0, 
    _if_conditional237) {
    }
    else {
        if(_if_conditional238=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 644))->type, "18field.c", 644))->mNoSolvedGenericsType&&((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 644))->type, "18field.c", 644))->mNoSolvedGenericsType, "18field.c", 644))->v1&&((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 644))->type, "18field.c", 644))->mNoSolvedGenericsType, "18field.c", 644))->v1, "18field.c", 644))->mClass&&(come_push_stackframe("18field.c", 644),__exception_result_var_b153=string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 644))->type, "18field.c", 644))->mNoSolvedGenericsType, "18field.c", 644))->v1, "18field.c", 644))->mClass, "18field.c", 644))->mName,"optional"), come_pop_stackframe(), __exception_result_var_b153),        __freed_obj__ = 0, 
        _if_conditional238) {
            method_name_118=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 645),__exception_result_var_b154=((char*)(right_value199=create_method_name(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 645))->type,(_Bool)0,"expect",info))), come_pop_stackframe(), __exception_result_var_b154));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
            if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value199;
            __freed_obj__ = 0;
            if(_if_conditional239=(come_push_stackframe("18field.c", 647),__exception_result_var_b155=((struct sFun*)(right_value200=map$2charphsFunph_at(((struct map$2charphsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 647))->funcs, "18field.c", 647)),method_name_118,((void*)0)))), come_pop_stackframe(), __exception_result_var_b155)==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200),
            (right_value200 && right_value200 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value200, 
            __freed_obj__ = 0, 
            _if_conditional239) {
                obj_type_119=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 648))->type, "18field.c", 648))->mNoSolvedGenericsType, "18field.c", 648))->v1;
                __freed_obj__ = 0;
                if(_if_conditional240=(come_push_stackframe("18field.c", 649),__exception_result_var_b156=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(obj_type_119, "18field.c", 649))->mGenericsTypes, "18field.c", 649))), come_pop_stackframe(), __exception_result_var_b156)>0,                __freed_obj__ = 0, 
                _if_conditional240) {
                    obj_type2_120=((struct CVALUE*)come_null_check(left_value_117, "18field.c", 650))->type;
                    __freed_obj__ = 0;
                    __dec_obj107=method_name_118;
                    method_name_118=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 651),__exception_result_var_b158=((char*)(right_value202=make_generics_function(obj_type2_120,(char*)come_increment_ref_count((come_push_stackframe("18field.c", 651),__exception_result_var_b157=((char*)(right_value201=__builtin_string("value"))), come_pop_stackframe(), __exception_result_var_b157)),info))), come_pop_stackframe(), __exception_result_var_b158));
                    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value201;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
                    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value202;
                    __freed_obj__ = 0;
                }
                else {
                    (come_push_stackframe("18field.c", 654),err_msg(info,"require expect implementation(%s)",((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_117, "18field.c", 654))->type, "18field.c", 654))->mClass, "18field.c", 654))->mName),come_pop_stackframe());
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 655),exit(1),come_pop_stackframe());
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            fun_121=optional$2sFunpbool_value((come_push_stackframe("18field.c", 659),__exception_result_var_b159=((struct optional$2sFunpbool*)(right_value203=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 659))->funcs,method_name_118))), come_pop_stackframe(), __exception_result_var_b159));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value203;
            __freed_obj__ = 0;
            if(_if_conditional241=fun_121==((void*)0),            __freed_obj__ = 0, 
            _if_conditional241) {
                (come_push_stackframe("18field.c", 662),err_msg(info,"function not found(%s)",method_name_118),come_pop_stackframe());
                __freed_obj__ = 0;
                __result97__ = (_Bool)1;
                if(method_name_118 && !__freed_obj__) { method_name_118 = come_decrement_ref_count(method_name_118, (void*)0, (void*)0, 0, 0, 0); }
                if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result97__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            type_122=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 666),__exception_result_var_b160=((struct sType*)(right_value204=solve_generics(((struct sFun*)come_null_check(fun_121, "18field.c", 666))->mResultType,((struct CVALUE*)come_null_check(left_value_117, "18field.c", 666))->type,info))), come_pop_stackframe(), __exception_result_var_b160));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value204;
            __freed_obj__ = 0;
            come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 668))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value205);
            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value205;
            __freed_obj__ = 0;
            __dec_obj108=((struct CVALUE*)come_null_check(come_value_123, "18field.c", 670))->c_value;
            ((struct CVALUE*)come_null_check(come_value_123, "18field.c", 670))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 670),__exception_result_var_b161=((char*)(right_value206=xsprintf("%s(%s)",method_name_118,((struct CVALUE*)come_null_check(left_value_117, "18field.c", 670))->c_value))), come_pop_stackframe(), __exception_result_var_b161));
            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value206);
            if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value206;
            __freed_obj__ = 0;
            __dec_obj109=((struct CVALUE*)come_null_check(come_value_123, "18field.c", 671))->type;
            ((struct CVALUE*)come_null_check(come_value_123, "18field.c", 671))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value207=sType_clone(type_122))));
            if(__dec_obj109) { come_call_finalizer(sType_finalize,__dec_obj109, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value207);
            if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value207;
            __freed_obj__ = 0;
            ((struct CVALUE*)come_null_check(come_value_123, "18field.c", 672))->var=((void*)0);
            __freed_obj__ = 0;
            (come_push_stackframe("18field.c", 674),__exception_result_var_b162=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 674))->stack, "18field.c", 674)),(struct CVALUE*)come_increment_ref_count(come_value_123)), come_pop_stackframe(), __exception_result_var_b162);
            __freed_obj__ = 0;
            (come_push_stackframe("18field.c", 676),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_123, "18field.c", 676))->c_value),come_pop_stackframe());
            __freed_obj__ = 0;
            if(method_name_118 && !__freed_obj__) { method_name_118 = come_decrement_ref_count(method_name_118, (void*)0, (void*)0, 0, 0, 0); }
            if(type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            (come_push_stackframe("18field.c", 679),__exception_result_var_b163=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 679))->stack, "18field.c", 679)),(struct CVALUE*)come_increment_ref_count(left_value_117)), come_pop_stackframe(), __exception_result_var_b163);
            __freed_obj__ = 0;
            (come_push_stackframe("18field.c", 681),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(left_value_117, "18field.c", 681))->c_value),come_pop_stackframe());
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result98__ = (_Bool)1;
    if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
    if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
}

char* sExceptionGetValueNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value208;
char* __exception_result_var_b164;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value208, 0, sizeof(void*));
    __result99__ = __result_obj__ = (come_push_stackframe("18field.c", 689),__exception_result_var_b164=((char*)(right_value208=__builtin_string("sExceptionGetValueNode"))), come_pop_stackframe(), __exception_result_var_b164);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value208;
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

_Bool sExceptionGetValueNode_compile(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_124;
_Bool __exception_result_var_b165;
_Bool _if_conditional242;
_Bool __result100__;
_Bool __exception_result_var_b166;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_124, 0, sizeof(struct sNode*));
    left_124=((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 694))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional242=!(come_push_stackframe("18field.c", 696),__exception_result_var_b165=node_compile(left_124,info), come_pop_stackframe(), __exception_result_var_b165),    __freed_obj__ = 0, 
    _if_conditional242) {
        __result100__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result101__ = (come_push_stackframe("18field.c", 700),__exception_result_var_b166=compiletime_get_exception_value(info), come_pop_stackframe(), __exception_result_var_b166);
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

int sExceptionGetValueNode_sline(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = ((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 705))->sline;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

char* sExceptionGetValueNode_sname(struct sExceptionGetValueNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value209;
char* __exception_result_var_b167;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
    __result103__ = __result_obj__ = (come_push_stackframe("18field.c", 710),__exception_result_var_b167=((char*)(right_value209=__builtin_string(((struct sExceptionGetValueNode*)come_null_check(self, "18field.c", 710))->sname))), come_pop_stackframe(), __exception_result_var_b167);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value209;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value210;
void* right_value211;
struct sStoreFieldNode* __exception_result_var_b168;
struct sNode* _inf_value1;
struct sStoreFieldNode* _inf_obj_value1;
void* right_value217;
struct sNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 715);
    _inf_obj_value1=come_increment_ref_count((come_push_stackframe("18field.c", 715),__exception_result_var_b168=((struct sStoreFieldNode*)(right_value211=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value210=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 715)))),left,(struct sNode*)come_increment_ref_count(right),(char*)come_increment_ref_count(name),info))), come_pop_stackframe(), __exception_result_var_b168));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStoreFieldNode_finalize;
    _inf_value1->clone=(void*)sStoreFieldNode_clone;
    _inf_value1->compile=(void*)sStoreFieldNode_compile;
    _inf_value1->sline=(void*)sStoreFieldNode_sline;
    _inf_value1->sname=(void*)sStoreFieldNode_sname;
    _inf_value1->terminated=(void*)sStoreFieldNode_terminated;
    _inf_value1->kind=(void*)sStoreFieldNode_kind;
    __result106__ = __result_obj__ = ((struct sNode*)(right_value217=_inf_value1));
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value210;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value211;
    __freed_obj__ = 0;
    return __result106__;
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
void* right_value218;
char* __exception_result_var_b169;
char* __dec_obj114;
void* right_value219;
struct sNode* __dec_obj115;
void* right_value220;
char* __exception_result_var_b170;
char* __dec_obj116;
struct sLoadFieldNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 729))->sline=((struct sInfo*)come_null_check(info, "18field.c", 729))->sline;
    __freed_obj__ = 0;
    __dec_obj114=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->sname;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 730))->sname=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 730),__exception_result_var_b169=((char*)(right_value218=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 730))->sname))), come_pop_stackframe(), __exception_result_var_b169));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    __dec_obj115=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 732))->mLeft;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 732))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(left))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value219;
    __freed_obj__ = 0;
    __dec_obj116=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 733))->mName;
    ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 733))->mName=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 733),__exception_result_var_b170=((char*)(right_value220=__builtin_string(name))), come_pop_stackframe(), __exception_result_var_b170));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value220;
    __freed_obj__ = 0;
    __result107__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(name && !__freed_obj__) { name = come_decrement_ref_count(name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result107__;
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
_Bool __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result108__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value221;
char* __exception_result_var_b171;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value221, 0, sizeof(void*));
    __result109__ = __result_obj__ = (come_push_stackframe("18field.c", 745),__exception_result_var_b171=((char*)(right_value221=__builtin_string("sLoadFieldNode"))), come_pop_stackframe(), __exception_result_var_b171);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

_Bool sLoadFieldNode_compile(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_126;
void* right_value222;
char* __exception_result_var_b172;
char* name_127;
_Bool __exception_result_var_b173;
_Bool _if_conditional256;
_Bool __result110__;
void* right_value223;
struct CVALUE* __exception_result_var_b174;
struct CVALUE* left_value_128;
struct sType* left_type_129;
void* right_value224;
struct sType* __exception_result_var_b175;
struct sType* left_type2_130;
struct sClass* klass_131;
void* right_value225;
struct optional$2sClasspbool* __exception_result_var_b176;
struct sType* field_type_132;
int index_133;
char* child_field_name_134;
void* right_value226;
struct optional$2sClasspbool* __exception_result_var_b177;
struct list$1tuple2$2charphsTypephph* o2_saved_135;
struct tuple2$2charphsTypeph* __exception_result_var_b178;
struct tuple2$2charphsTypeph* field_136;
_Bool __exception_result_var_b179;
_Bool _for_condtionalA5;
struct tuple2$2charphsTypeph* __exception_result_var_b180;
struct tuple2$2charphsTypeph* multiple_assgin_var4;
char* field_name_137;
struct sType* field_type2_138;
_Bool __exception_result_var_b181;
_Bool _if_conditional257;
void* right_value227;
struct sType* __dec_obj117;
int __exception_result_var_b182;
_Bool _if_conditional258;
struct list$1tuple2$2charphsTypephph* o2_saved_139;
struct tuple2$2charphsTypeph* __exception_result_var_b183;
struct tuple2$2charphsTypeph* field_140;
_Bool __exception_result_var_b184;
_Bool _for_condtionalA6;
struct tuple2$2charphsTypeph* __exception_result_var_b185;
struct tuple2$2charphsTypeph* multiple_assgin_var5;
char* field_name_141;
struct sType* field_type2_142;
struct sClass* klass2_143;
struct list$1tuple2$2charphsTypephph* o2_saved_144;
struct tuple2$2charphsTypeph* __exception_result_var_b186;
struct tuple2$2charphsTypeph* field2_145;
_Bool __exception_result_var_b187;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* __exception_result_var_b188;
struct tuple2$2charphsTypeph* multiple_assgin_var6;
char* field_name2_146;
struct sType* field_type3_147;
_Bool __exception_result_var_b189;
_Bool _if_conditional259;
void* right_value228;
char* __exception_result_var_b190;
char* __dec_obj118;
void* right_value229;
struct sType* __dec_obj119;
_Bool _if_conditional260;
_Bool __exception_result_var_b191;
_Bool _if_conditional261;
void* right_value230;
struct sType* __dec_obj120;
int __exception_result_var_b192;
_Bool _if_conditional262;
_Bool __result111__;
void* right_value231;
struct CVALUE* come_value_148;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value232;
char* __exception_result_var_b193;
char* __dec_obj121;
void* right_value233;
char* __exception_result_var_b194;
char* __dec_obj122;
_Bool _if_conditional265;
void* right_value234;
char* __exception_result_var_b195;
char* __dec_obj123;
void* right_value235;
char* __exception_result_var_b196;
char* __dec_obj124;
void* right_value236;
struct sType* __dec_obj125;
int __exception_result_var_b197;
_Bool _if_conditional266;
void* right_value237;
struct sType* __dec_obj126;
struct list$1sNodeph* __exception_result_var_b198;
struct list$1CVALUEph* __exception_result_var_b199;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_126, 0, sizeof(struct sNode*));
memset(&right_value222, 0, sizeof(void*));
memset(&name_127, 0, sizeof(char*));
memset(&right_value223, 0, sizeof(void*));
memset(&left_value_128, 0, sizeof(struct CVALUE*));
memset(&left_type_129, 0, sizeof(struct sType*));
memset(&right_value224, 0, sizeof(void*));
memset(&left_type2_130, 0, sizeof(struct sType*));
memset(&klass_131, 0, sizeof(struct sClass*));
memset(&right_value225, 0, sizeof(void*));
memset(&field_type_132, 0, sizeof(struct sType*));
memset(&index_133, 0, sizeof(int));
memset(&child_field_name_134, 0, sizeof(char*));
memset(&right_value226, 0, sizeof(void*));
memset(&o2_saved_135, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&field_136, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&field_name_137, 0, sizeof(char*));
memset(&field_type2_138, 0, sizeof(struct sType*));
memset(&right_value227, 0, sizeof(void*));
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
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&come_value_148, 0, sizeof(struct CVALUE*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
    left_126=((struct sLoadFieldNode*)come_null_check(self, "18field.c", 750))->mLeft;
    __freed_obj__ = 0;
    name_127=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 751),__exception_result_var_b172=((char*)(right_value222=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 751))->mName))), come_pop_stackframe(), __exception_result_var_b172));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value222;
    __freed_obj__ = 0;
    if(_if_conditional256=!(come_push_stackframe("18field.c", 753),__exception_result_var_b173=node_compile(left_126,info), come_pop_stackframe(), __exception_result_var_b173),    __freed_obj__ = 0, 
    _if_conditional256) {
        __result110__ = (_Bool)0;
        if(name_127 && !__freed_obj__) { name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_128=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 757),__exception_result_var_b174=((struct CVALUE*)(right_value223=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b174));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value223;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 758),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    left_type_129=((struct CVALUE*)come_null_check(left_value_128, "18field.c", 760))->type;
    __freed_obj__ = 0;
    left_type2_130=(struct sType*)come_increment_ref_count((come_push_stackframe("18field.c", 762),__exception_result_var_b175=((struct sType*)(right_value224=solve_generics(left_type_129,left_type_129,info))), come_pop_stackframe(), __exception_result_var_b175));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value224;
    __freed_obj__ = 0;
    klass_131=((struct sType*)come_null_check(left_type2_130, "18field.c", 764))->mClass;
    __freed_obj__ = 0;
    klass_131=optional$2sClasspbool_value((come_push_stackframe("18field.c", 765),__exception_result_var_b176=((struct optional$2sClasspbool*)(right_value225=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 765))->classes,((struct sClass*)come_null_check(klass_131, "18field.c", 765))->mName))), come_pop_stackframe(), __exception_result_var_b176));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value225;
    __freed_obj__ = 0;
    field_type_132=((void*)0);
    __freed_obj__ = 0;
    index_133=0;
    __freed_obj__ = 0;
    child_field_name_134=((void*)0);
    __freed_obj__ = 0;
    klass_131=optional$2sClasspbool_value((come_push_stackframe("18field.c", 770),__exception_result_var_b177=((struct optional$2sClasspbool*)(right_value226=map$2charphsClassphp_operator_load_element(((struct sInfo*)come_null_check(info, "18field.c", 770))->classes,((struct sClass*)come_null_check(klass_131, "18field.c", 770))->mName))), come_pop_stackframe(), __exception_result_var_b177));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value226;
    __freed_obj__ = 0;
    for(
    o2_saved_135=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "18field.c", 771))->mFields)),field_136=(come_push_stackframe("18field.c", 771),__exception_result_var_b178=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_135), "18field.c", 771))), come_pop_stackframe(), __exception_result_var_b178) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA5=    !(come_push_stackframe("18field.c", 771),__exception_result_var_b179=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_135), "18field.c", 771))), come_pop_stackframe(), __exception_result_var_b179) ,    __freed_obj__ = 0, 
    _for_condtionalA5;    field_136=(come_push_stackframe("18field.c", 771),__exception_result_var_b180=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_135), "18field.c", 771))), come_pop_stackframe(), __exception_result_var_b180) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var4=field_136;
        field_name_137=(char*)come_increment_ref_count(multiple_assgin_var4->v1);
        field_type2_138=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v2);
        __freed_obj__ = 0;
        if(_if_conditional257=(come_push_stackframe("18field.c", 774),__exception_result_var_b181=string_operator_equals(field_name_137,name_127), come_pop_stackframe(), __exception_result_var_b181),        __freed_obj__ = 0, 
        _if_conditional257) {
            __dec_obj117=field_type_132;
            field_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value227=sType_clone(field_type2_138))));
            if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
            if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value227;
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
    if(_if_conditional258=index_133==(come_push_stackframe("18field.c", 782),__exception_result_var_b182=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_131, "18field.c", 782))->mFields, "18field.c", 782))), come_pop_stackframe(), __exception_result_var_b182),    __freed_obj__ = 0, 
    _if_conditional258) {
        index_133=0;
        __freed_obj__ = 0;
        for(
        o2_saved_139=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass_131, "18field.c", 784))->mFields)),field_140=(come_push_stackframe("18field.c", 784),__exception_result_var_b183=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 784))), come_pop_stackframe(), __exception_result_var_b183) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !(come_push_stackframe("18field.c", 784),__exception_result_var_b184=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 784))), come_pop_stackframe(), __exception_result_var_b184) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        field_140=(come_push_stackframe("18field.c", 784),__exception_result_var_b185=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_139), "18field.c", 784))), come_pop_stackframe(), __exception_result_var_b185) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var5=field_140;
            field_name_141=(char*)come_increment_ref_count(multiple_assgin_var5->v1);
            field_type2_142=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v2);
            __freed_obj__ = 0;
            klass2_143=((struct sType*)come_null_check(field_type2_142, "18field.c", 787))->mClass;
            __freed_obj__ = 0;
            for(
            o2_saved_144=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((((struct sClass*)come_null_check(klass2_143, "18field.c", 789))->mFields)),field2_145=(come_push_stackframe("18field.c", 789),__exception_result_var_b186=list$1tuple2$2charphsTypephph_begin(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "18field.c", 789))), come_pop_stackframe(), __exception_result_var_b186) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA7=            !(come_push_stackframe("18field.c", 789),__exception_result_var_b187=list$1tuple2$2charphsTypephph_end(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "18field.c", 789))), come_pop_stackframe(), __exception_result_var_b187) ,            __freed_obj__ = 0, 
            _for_condtionalA7;            field2_145=(come_push_stackframe("18field.c", 789),__exception_result_var_b188=list$1tuple2$2charphsTypephph_next(((struct list$1tuple2$2charphsTypephph*)come_null_check((o2_saved_144), "18field.c", 789))), come_pop_stackframe(), __exception_result_var_b188) ,            __freed_obj__ = 0, 
            0            ){
                multiple_assgin_var6=field2_145;
                field_name2_146=(char*)come_increment_ref_count(multiple_assgin_var6->v1);
                field_type3_147=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v2);
                __freed_obj__ = 0;
                if(_if_conditional259=(come_push_stackframe("18field.c", 792),__exception_result_var_b189=string_operator_equals(field_name2_146,name_127), come_pop_stackframe(), __exception_result_var_b189),                __freed_obj__ = 0, 
                _if_conditional259) {
                    __dec_obj118=child_field_name_134;
                    child_field_name_134=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 793),__exception_result_var_b190=((char*)(right_value228=__builtin_string(field_name_141))), come_pop_stackframe(), __exception_result_var_b190));
                    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
                    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value228;
                    __freed_obj__ = 0;
                    __dec_obj119=field_type_132;
                    field_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(field_type3_147))));
                    if(__dec_obj119) { come_call_finalizer(sType_finalize,__dec_obj119, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
                    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value229;
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
            if(_if_conditional261=(come_push_stackframe("18field.c", 803),__exception_result_var_b191=string_operator_equals(field_name_141,name_127), come_pop_stackframe(), __exception_result_var_b191),            __freed_obj__ = 0, 
            _if_conditional261) {
                __dec_obj120=field_type_132;
                field_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(field_type2_142))));
                if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value230;
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
        if(_if_conditional262=index_133==(come_push_stackframe("18field.c", 811),__exception_result_var_b192=list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_131, "18field.c", 811))->mFields, "18field.c", 811))), come_pop_stackframe(), __exception_result_var_b192),        __freed_obj__ = 0, 
        _if_conditional262) {
            (come_push_stackframe("18field.c", 812),err_msg(info,"field not found(%s) in %s(2)",name_127,((struct sClass*)come_null_check(klass_131, "18field.c", 812))->mName),come_pop_stackframe());
            __freed_obj__ = 0;
            __result111__ = (_Bool)0;
            if(name_127 && !__freed_obj__) { name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, 0); }
            if(left_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type2_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_130, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(field_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(child_field_name_134 && !__freed_obj__) { child_field_name_134 = come_decrement_ref_count(child_field_name_134, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result111__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 817))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value231;
    __freed_obj__ = 0;
    if(_if_conditional263=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_128, "18field.c", 819))->type, "18field.c", 819))->mPointerNum>0,    __freed_obj__ = 0, 
    _if_conditional263) {
        if(_if_conditional264=child_field_name_134,        __freed_obj__ = 0, 
        _if_conditional264) {
            __dec_obj121=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 821))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 821))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 821),__exception_result_var_b193=((char*)(right_value232=xsprintf("%s->%s.%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 821))->c_value,child_field_name_134,name_127))), come_pop_stackframe(), __exception_result_var_b193));
            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value232;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj122=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 824))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 824))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 824),__exception_result_var_b194=((char*)(right_value233=xsprintf("%s->%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 824))->c_value,name_127))), come_pop_stackframe(), __exception_result_var_b194));
            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value233;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional265=child_field_name_134,        __freed_obj__ = 0, 
        _if_conditional265) {
            __dec_obj123=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 829))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 829))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 829),__exception_result_var_b195=((char*)(right_value234=xsprintf("%s.%s.%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 829))->c_value,child_field_name_134,name_127))), come_pop_stackframe(), __exception_result_var_b195));
            if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
            if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value234;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj124=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 832))->c_value;
            ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 832))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 832),__exception_result_var_b196=((char*)(right_value235=xsprintf("%s.%s",((struct CVALUE*)come_null_check(left_value_128, "18field.c", 832))->c_value,name_127))), come_pop_stackframe(), __exception_result_var_b196));
            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
            if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value235;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj125=((struct CVALUE*)come_null_check(come_value_148, "18field.c", 835))->type;
    ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 835))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(field_type_132))));
    if(__dec_obj125) { come_call_finalizer(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value236;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_148, "18field.c", 836))->var=((void*)0);
    __freed_obj__ = 0;
    if(_if_conditional266=(come_push_stackframe("18field.c", 838),__exception_result_var_b197=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 838))->type, "18field.c", 838))->mArrayNum, "18field.c", 838))), come_pop_stackframe(), __exception_result_var_b197)==1,    __freed_obj__ = 0, 
    _if_conditional266) {
        __dec_obj126=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 839))->type, "18field.c", 839))->mOriginalLoadVarType, "18field.c", 839))->v1;
        ((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 839))->type, "18field.c", 839))->mOriginalLoadVarType, "18field.c", 839))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value237=sType_clone(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 839))->type))));
        if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value237;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 841),__exception_result_var_b198=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 841))->type, "18field.c", 841))->mArrayNum, "18field.c", 841))), come_pop_stackframe(), __exception_result_var_b198);
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 842))->type, "18field.c", 842))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 843))->type, "18field.c", 843))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_148, "18field.c", 843))->type, "18field.c", 843))->mPointerNum;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 846),__exception_result_var_b199=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 846))->stack, "18field.c", 846)),(struct CVALUE*)come_increment_ref_count(come_value_148)), come_pop_stackframe(), __exception_result_var_b199);
    __freed_obj__ = 0;
    __result114__ = (_Bool)1;
    if(name_127 && !__freed_obj__) { name_127 = come_decrement_ref_count(name_127, (void*)0, (void*)0, 0, 0, 0); }
    if(left_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type2_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type2_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(field_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(child_field_name_134 && !__freed_obj__) { child_field_name_134 = come_decrement_ref_count(child_field_name_134, (void*)0, (void*)0, 0, 0, 0); }
    if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result114__;
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
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result112__ = ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 414))->len;
        __freed_obj__ = 0;
        return __result112__;
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
struct list$1sNodeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_149, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_150, 0, sizeof(struct list_item$1sNodeph*));
            it_149=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 480))->head;
            __freed_obj__ = 0;
            while(_while_condtional13=it_149!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional13) {
                prev_it_150=it_149;
                __freed_obj__ = 0;
                it_149=((struct list_item$1sNodeph*)come_null_check(it_149, "./comelang2.h", 483))->next;
                __freed_obj__ = 0;
                if(prev_it_150 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_150, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 487))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 488))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 490))->len=0;
            __freed_obj__ = 0;
            __result113__ = __result_obj__ = self;
            __freed_obj__ = 0;
            return __result113__;
            __freed_obj__ = 0;
}

int sLoadFieldNode_sline(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = ((struct sLoadFieldNode*)come_null_check(self, "18field.c", 853))->sline;
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

char* sLoadFieldNode_sname(struct sLoadFieldNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value238;
char* __exception_result_var_b200;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value238, 0, sizeof(void*));
    __result116__ = __result_obj__ = (come_push_stackframe("18field.c", 858),__exception_result_var_b200=((char*)(right_value238=__builtin_string(((struct sLoadFieldNode*)come_null_check(self, "18field.c", 858))->sname))), come_pop_stackframe(), __exception_result_var_b200);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value238;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

struct sStoreArrayNode* sStoreArrayNode_initialize(struct sStoreArrayNode* self, struct sNode* left, struct sNode* right, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value239;
char* __exception_result_var_b201;
char* __dec_obj127;
void* right_value240;
struct sNode* __dec_obj128;
void* right_value241;
struct sNode* __dec_obj129;
void* right_value242;
struct list$1sNodeph* __dec_obj130;
struct sStoreArrayNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 874))->sline=((struct sInfo*)come_null_check(info, "18field.c", 874))->sline;
    __freed_obj__ = 0;
    __dec_obj127=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->sname;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 875))->sname=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 875),__exception_result_var_b201=((char*)(right_value239=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 875))->sname))), come_pop_stackframe(), __exception_result_var_b201));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value239;
    __freed_obj__ = 0;
    __dec_obj128=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 877))->mLeft;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 877))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value240;
    __freed_obj__ = 0;
    __dec_obj129=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 878))->mRight;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 878))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value241;
    __freed_obj__ = 0;
    __dec_obj130=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 879))->mArrayNum;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 879))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value242=list$1sNodephp_clone(array_num))));
    if(__dec_obj130) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value242;
    __freed_obj__ = 0;
    ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 880))->mQuote=quote;
    __freed_obj__ = 0;
    __result117__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result117__;
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
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value243;
char* __exception_result_var_b202;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
    __result119__ = __result_obj__ = (come_push_stackframe("18field.c", 892),__exception_result_var_b202=((char*)(right_value243=__builtin_string("sStoreArrayNode"))), come_pop_stackframe(), __exception_result_var_b202);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243;
    __freed_obj__ = 0;
    return __result119__;
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
_Bool __exception_result_var_b203;
_Bool _if_conditional271;
_Bool __result120__;
void* right_value244;
struct CVALUE* __exception_result_var_b204;
struct CVALUE* left_value_154;
struct sType* left_type_155;
void* right_value245;
void* right_value246;
struct list$1CVALUEph* __exception_result_var_b205;
struct list$1CVALUEph* array_num_158;
struct list$1sNodeph* o2_saved_159;
struct sNode* __exception_result_var_b208;
struct sNode* it_162;
_Bool __exception_result_var_b209;
_Bool _for_condtionalA8;
struct sNode* __exception_result_var_b212;
_Bool __exception_result_var_b213;
_Bool _if_conditional276;
_Bool __result129__;
void* right_value247;
struct CVALUE* __exception_result_var_b214;
struct CVALUE* c_value_165;
struct list$1CVALUEph* __exception_result_var_b215;
_Bool __exception_result_var_b216;
_Bool _if_conditional277;
_Bool __result130__;
void* right_value248;
struct CVALUE* __exception_result_var_b217;
struct CVALUE* right_value_166;
struct sType* right_type_167;
struct sClass* klass_168;
void* right_value249;
struct sType* type_169;
char* fun_name_170;
_Bool calling_fun_171;
_Bool _if_conditional278;
void* right_value254;
struct optional$2CVALUEphbool* __exception_result_var_b219;
_Bool __exception_result_var_b221;
_Bool _if_conditional283;
void* right_value255;
struct CVALUE* come_value_176;
int __exception_result_var_b222;
_Bool _if_conditional284;
int i_177;
int __exception_result_var_b223;
_Bool _for_condtionalA9;
struct list$1sNodeph* __exception_result_var_b225;
_Bool _if_conditional303;
int __exception_result_var_b226;
_Bool _if_conditional304;
void* right_value256;
void* right_value257;
struct buffer* __exception_result_var_b227;
struct buffer* buf_190;
struct buffer* __exception_result_var_b228;
struct list$1CVALUEph* o2_saved_191;
struct CVALUE* __exception_result_var_b231;
struct CVALUE* it_194;
_Bool __exception_result_var_b232;
_Bool _for_condtionalA10;
struct CVALUE* __exception_result_var_b235;
void* right_value258;
char* __exception_result_var_b236;
struct buffer* __exception_result_var_b237;
void* right_value259;
char* __exception_result_var_b238;
char* left_value_code_197;
void* right_value260;
_Bool _if_conditional309;
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
char* __dec_obj132;
_Bool _if_conditional313;
void* right_value261;
char* __exception_result_var_b239;
char* __dec_obj133;
_Bool _if_conditional314;
void* right_value262;
char* __exception_result_var_b240;
char* __dec_obj134;
void* right_value263;
char* __exception_result_var_b241;
char* __dec_obj135;
_Bool _if_conditional315;
void* right_value264;
char* __exception_result_var_b242;
char* __dec_obj136;
void* right_value265;
char* __exception_result_var_b243;
char* __dec_obj137;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
char* __dec_obj138;
_Bool _if_conditional319;
void* right_value266;
char* __exception_result_var_b244;
char* __dec_obj139;
_Bool _if_conditional320;
void* right_value267;
char* __exception_result_var_b245;
char* __dec_obj140;
void* right_value268;
char* __exception_result_var_b246;
char* __dec_obj141;
_Bool _if_conditional321;
void* right_value269;
char* __exception_result_var_b247;
char* __dec_obj142;
void* right_value270;
char* __exception_result_var_b248;
char* __dec_obj143;
_Bool __result146__;
int __exception_result_var_b249;
int right_value_id_198;
_Bool _if_conditional322;
_Bool _if_conditional323;
void* right_value271;
char* __exception_result_var_b250;
char* __dec_obj144;
_Bool _if_conditional324;
void* right_value272;
char* __exception_result_var_b251;
char* __dec_obj145;
_Bool __result147__;
void* right_value273;
struct sType* result_type_199;
void* right_value274;
void* right_value275;
struct list$1sNodeph* __exception_result_var_b252;
struct list$1sNodeph* __dec_obj146;
struct sType* __dec_obj147;
struct list$1CVALUEph* __exception_result_var_b253;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_151, 0, sizeof(struct sNode*));
memset(&right_152, 0, sizeof(struct sNode*));
memset(&array_num_nodes_153, 0, sizeof(struct list$1sNodeph*));
memset(&right_value244, 0, sizeof(void*));
memset(&left_value_154, 0, sizeof(struct CVALUE*));
memset(&left_type_155, 0, sizeof(struct sType*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&array_num_158, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_159, 0, sizeof(struct list$1sNodeph*));
memset(&it_162, 0, sizeof(struct sNode*));
memset(&right_value247, 0, sizeof(void*));
memset(&c_value_165, 0, sizeof(struct CVALUE*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value_166, 0, sizeof(struct CVALUE*));
memset(&right_type_167, 0, sizeof(struct sType*));
memset(&klass_168, 0, sizeof(struct sClass*));
memset(&right_value249, 0, sizeof(void*));
memset(&type_169, 0, sizeof(struct sType*));
memset(&fun_name_170, 0, sizeof(char*));
memset(&calling_fun_171, 0, sizeof(_Bool));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&come_value_176, 0, sizeof(struct CVALUE*));
memset(&i_177, 0, sizeof(int));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&buf_190, 0, sizeof(struct buffer*));
memset(&o2_saved_191, 0, sizeof(struct list$1CVALUEph*));
memset(&it_194, 0, sizeof(struct CVALUE*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&left_value_code_197, 0, sizeof(char*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value_id_198, 0, sizeof(int));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&result_type_199, 0, sizeof(struct sType*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
    left_151=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 897))->mLeft;
    __freed_obj__ = 0;
    right_152=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 898))->mRight;
    __freed_obj__ = 0;
    array_num_nodes_153=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 899))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional271=!(come_push_stackframe("18field.c", 901),__exception_result_var_b203=node_compile(left_151,info), come_pop_stackframe(), __exception_result_var_b203),    __freed_obj__ = 0, 
    _if_conditional271) {
        __result120__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result120__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_154=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 905),__exception_result_var_b204=((struct CVALUE*)(right_value244=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b204));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value244;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 906),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    left_type_155=((struct CVALUE*)come_null_check(left_value_154, "18field.c", 908))->type;
    __freed_obj__ = 0;
    array_num_158=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("18field.c", 910),__exception_result_var_b205=((struct list$1CVALUEph*)(right_value246=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value245=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 910))))))), come_pop_stackframe(), __exception_result_var_b205));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value245;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value246;
    __freed_obj__ = 0;
    for(
    o2_saved_159=(array_num_nodes_153),it_162=(come_push_stackframe("18field.c", 912),__exception_result_var_b208=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_159), "18field.c", 912))), come_pop_stackframe(), __exception_result_var_b208) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA8=    !(come_push_stackframe("18field.c", 912),__exception_result_var_b209=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_159), "18field.c", 912))), come_pop_stackframe(), __exception_result_var_b209) ,    __freed_obj__ = 0, 
    _for_condtionalA8;    it_162=(come_push_stackframe("18field.c", 912),__exception_result_var_b212=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_159), "18field.c", 912))), come_pop_stackframe(), __exception_result_var_b212) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional276=!(come_push_stackframe("18field.c", 913),__exception_result_var_b213=node_compile(it_162,info), come_pop_stackframe(), __exception_result_var_b213),        __freed_obj__ = 0, 
        _if_conditional276) {
            __result129__ = (_Bool)0;
            if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result129__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_165=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 917),__exception_result_var_b214=((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b214));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
        if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value247;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 918),dec_stack_ptr(1,info),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 920),__exception_result_var_b215=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_158, "18field.c", 920)),(struct CVALUE*)come_increment_ref_count(c_value_165)), come_pop_stackframe(), __exception_result_var_b215);
        __freed_obj__ = 0;
        if(c_value_165 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_165, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    if(_if_conditional277=!(come_push_stackframe("18field.c", 923),__exception_result_var_b216=node_compile(right_152,info), come_pop_stackframe(), __exception_result_var_b216),    __freed_obj__ = 0, 
    _if_conditional277) {
        __result130__ = (_Bool)0;
        if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_166=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 927),__exception_result_var_b217=((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b217));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value248;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 928),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    right_type_167=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 930))->type;
    __freed_obj__ = 0;
    klass_168=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 932))->type, "18field.c", 932))->mClass;
    __freed_obj__ = 0;
    type_169=(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 934))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value249;
    __freed_obj__ = 0;
    fun_name_170="operator_store_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional278=((struct sStoreArrayNode*)come_null_check(self, "18field.c", 938))->mQuote,    __freed_obj__ = 0, 
    _if_conditional278) {
        calling_fun_171=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_171=(come_push_stackframe("18field.c", 942),__exception_result_var_b221=operator_overload_fun2(type_169,fun_name_170,left_value_154,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 942),__exception_result_var_b219=((struct optional$2CVALUEphbool*)(right_value254=list$1CVALUEphp_operator_load_element(array_num_158,0))), come_pop_stackframe(), __exception_result_var_b219)),right_value_166,info), come_pop_stackframe(), __exception_result_var_b221);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional283=!calling_fun_171,    __freed_obj__ = 0, 
    _if_conditional283) {
        come_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 946))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value255;
        __freed_obj__ = 0;
        if(_if_conditional284=(come_push_stackframe("18field.c", 954),__exception_result_var_b222=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_155, "18field.c", 954))->mArrayNum, "18field.c", 954))), come_pop_stackframe(), __exception_result_var_b222)>0,        __freed_obj__ = 0, 
        _if_conditional284) {
            for(
            i_177=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA9=            i_177<(come_push_stackframe("18field.c", 955),__exception_result_var_b223=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_158, "18field.c", 955))), come_pop_stackframe(), __exception_result_var_b223) ,            __freed_obj__ = 0, 
            _for_condtionalA9;            i_177++ ,            __freed_obj__ = 0, 
            0            ){
                (come_push_stackframe("18field.c", 956),__exception_result_var_b225=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(left_type_155, "18field.c", 956))->mArrayNum, "18field.c", 956)),-1,-1), come_pop_stackframe(), __exception_result_var_b225);
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional303=((struct sType*)come_null_check(left_type_155, "18field.c", 959))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional303) {
                ((struct sType*)come_null_check(left_type_155, "18field.c", 960))->mPointerNum-=(come_push_stackframe("18field.c", 960),__exception_result_var_b226=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_158, "18field.c", 960))), come_pop_stackframe(), __exception_result_var_b226);
                __freed_obj__ = 0;
                if(_if_conditional304=((struct sType*)come_null_check(left_type_155, "18field.c", 962))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional304) {
                    ((struct sType*)come_null_check(left_type_155, "18field.c", 963))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        buf_190=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 967),__exception_result_var_b227=((struct buffer*)(right_value257=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value256=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 967))))))), come_pop_stackframe(), __exception_result_var_b227));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value256;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value257;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 969),__exception_result_var_b228=buffer_append_str(((struct buffer*)come_null_check(buf_190, "18field.c", 969)),((struct CVALUE*)come_null_check(left_value_154, "18field.c", 969))->c_value), come_pop_stackframe(), __exception_result_var_b228);
        __freed_obj__ = 0;
        for(
        o2_saved_191=(struct list$1CVALUEph*)come_increment_ref_count((array_num_158)),it_194=(come_push_stackframe("18field.c", 971),__exception_result_var_b231=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_191), "18field.c", 971))), come_pop_stackframe(), __exception_result_var_b231) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        !(come_push_stackframe("18field.c", 971),__exception_result_var_b232=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_191), "18field.c", 971))), come_pop_stackframe(), __exception_result_var_b232) ,        __freed_obj__ = 0, 
        _for_condtionalA10;        it_194=(come_push_stackframe("18field.c", 971),__exception_result_var_b235=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_191), "18field.c", 971))), come_pop_stackframe(), __exception_result_var_b235) ,        __freed_obj__ = 0, 
        0        ){
            (come_push_stackframe("18field.c", 972),__exception_result_var_b237=buffer_append_str(((struct buffer*)come_null_check(buf_190, "18field.c", 972)),(come_push_stackframe("18field.c", 972),__exception_result_var_b236=((char*)(right_value258=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_194, "18field.c", 972))->c_value))), come_pop_stackframe(), __exception_result_var_b236)), come_pop_stackframe(), __exception_result_var_b237);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
            if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value258;
            __freed_obj__ = 0;
        }
        if(o2_saved_191 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_197=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 975),__exception_result_var_b238=((char*)(right_value259=buffer_to_string(((struct buffer*)come_null_check(buf_190, "18field.c", 975))))), come_pop_stackframe(), __exception_result_var_b238));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value259;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 977),check_assign_type(((char*)(right_value260=xsprintf("array is assinged to"))),left_type_155,right_type_167,right_value_166,(_Bool)0,info),come_pop_stackframe());
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value260;
        __freed_obj__ = 0;
        if(_if_conditional309=((struct sType*)come_null_check(left_type_155, "18field.c", 978))->mHeap&&((struct sType*)come_null_check(right_type_167, "18field.c", 978))->mHeap&&((struct sType*)come_null_check(left_type_155, "18field.c", 978))->mPointerNum>0&&((struct sType*)come_null_check(right_type_167, "18field.c", 978))->mPointerNum>0,        __freed_obj__ = 0, 
        _if_conditional309) {
            if(_if_conditional310=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 980))->type, "18field.c", 980))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional310) {
                (come_push_stackframe("18field.c", 981),decrement_ref_count_object(left_type_155,left_value_code_197,info,(_Bool)0),come_pop_stackframe());
                __freed_obj__ = 0;
                if(_if_conditional311=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 982))->var,                __freed_obj__ = 0, 
                _if_conditional311) {
                    if(_if_conditional312=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 983))->var, "18field.c", 983))->mType, "18field.c", 983))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        __dec_obj132=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 984))->var, "18field.c", 984))->mCValueName;
                        ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 984))->var, "18field.c", 984))->mCValueName=((void*)0);
                        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional313=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 986))->var, "18field.c", 986))->mType, "18field.c", 986))->mShare,                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            __dec_obj133=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 987))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 987))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 987),__exception_result_var_b239=((char*)(right_value261=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 987))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 987))->c_value,info))), come_pop_stackframe(), __exception_result_var_b239));
                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value261;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional314=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 989))->var, "18field.c", 989))->mType, "18field.c", 989))->mClone,                            __freed_obj__ = 0, 
                            _if_conditional314) {
                                __dec_obj134=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 990))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 990))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 990),__exception_result_var_b240=((char*)(right_value262=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 990))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 990))->c_value,info))), come_pop_stackframe(), __exception_result_var_b240));
                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                                if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value262;
                                __freed_obj__ = 0;
                            }
                            else {
                                __dec_obj135=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 993))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 993))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 993),__exception_result_var_b241=((char*)(right_value263=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 993))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 993))->c_value,info))), come_pop_stackframe(), __exception_result_var_b241));
                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                                if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value263;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional315=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1001))->type, "18field.c", 1001))->mDelegate,                    __freed_obj__ = 0, 
                    _if_conditional315) {
                    }
                    else {
                        __dec_obj136=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1004))->c_value;
                        ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1004))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1004),__exception_result_var_b242=((char*)(right_value264=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1004))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1004))->c_value,info))), come_pop_stackframe(), __exception_result_var_b242));
                        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value264;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __dec_obj137=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1007))->c_value;
                ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1007))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1007),__exception_result_var_b243=((char*)(right_value265=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1007))->c_value))), come_pop_stackframe(), __exception_result_var_b243));
                if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
                if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value265;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional316=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1009))->type, "18field.c", 1009))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional316) {
                    (come_push_stackframe("18field.c", 1010),decrement_ref_count_object(left_type_155,left_value_code_197,info,(_Bool)0),come_pop_stackframe());
                    __freed_obj__ = 0;
                    if(_if_conditional317=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1011))->var,                    __freed_obj__ = 0, 
                    _if_conditional317) {
                        if(_if_conditional318=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1012))->var, "18field.c", 1012))->mType, "18field.c", 1012))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional318) {
                            __dec_obj138=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1013))->var, "18field.c", 1013))->mCValueName;
                            ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1013))->var, "18field.c", 1013))->mCValueName=((void*)0);
                            if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional319=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1015))->var, "18field.c", 1015))->mType, "18field.c", 1015))->mShare,                            __freed_obj__ = 0, 
                            _if_conditional319) {
                                __dec_obj139=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1016))->c_value;
                                ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1016))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1016),__exception_result_var_b244=((char*)(right_value266=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1016))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1016))->c_value,info))), come_pop_stackframe(), __exception_result_var_b244));
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                                if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value266;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional320=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1018))->var, "18field.c", 1018))->mType, "18field.c", 1018))->mClone,                                __freed_obj__ = 0, 
                                _if_conditional320) {
                                    __dec_obj140=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1019))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1019))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1019),__exception_result_var_b245=((char*)(right_value267=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1019))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1019))->c_value,info))), come_pop_stackframe(), __exception_result_var_b245));
                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value267;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj141=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1022))->c_value;
                                    ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1022))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1022),__exception_result_var_b246=((char*)(right_value268=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1022))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1022))->c_value,info))), come_pop_stackframe(), __exception_result_var_b246));
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value268;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional321=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1030))->type, "18field.c", 1030))->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional321) {
                        }
                        else {
                            __dec_obj142=((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1033))->c_value;
                            ((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1033))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1033),__exception_result_var_b247=((char*)(right_value269=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1033))->type,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1033))->c_value,info))), come_pop_stackframe(), __exception_result_var_b247));
                            if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                            if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value269;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj143=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1036))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1036))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1036),__exception_result_var_b248=((char*)(right_value270=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1036))->c_value))), come_pop_stackframe(), __exception_result_var_b248));
                    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
                    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value270;
                    __freed_obj__ = 0;
                }
                else {
                    (come_push_stackframe("18field.c", 1039),err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(1)",left_value_code_197,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1039))->type, "18field.c", 1039))->mPointerNum),come_pop_stackframe());
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
            right_value_id_198=(come_push_stackframe("18field.c", 1042),__exception_result_var_b249=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1042))->c_value)), come_pop_stackframe(), __exception_result_var_b249);
            __freed_obj__ = 0;
            if(_if_conditional322=right_value_id_198!=-1,            __freed_obj__ = 0, 
            _if_conditional322) {
                (come_push_stackframe("18field.c", 1045),remove_object_from_right_values(right_value_id_198,info),come_pop_stackframe());
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional323=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1049))->type, "18field.c", 1049))->mPointerNum>=1,            __freed_obj__ = 0, 
            _if_conditional323) {
                __dec_obj144=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1050))->c_value;
                ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1050))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1050),__exception_result_var_b250=((char*)(right_value271=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1050))->c_value))), come_pop_stackframe(), __exception_result_var_b250));
                if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value271;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional324=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1052))->type, "18field.c", 1052))->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional324) {
                    __dec_obj145=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1053))->c_value;
                    ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1053))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1053),__exception_result_var_b251=((char*)(right_value272=xsprintf("%s=%s",left_value_code_197,((struct CVALUE*)come_null_check(right_value_166, "18field.c", 1053))->c_value))), come_pop_stackframe(), __exception_result_var_b251));
                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
                    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value272;
                    __freed_obj__ = 0;
                }
                else {
                    (come_push_stackframe("18field.c", 1056),err_msg(info,"Invalid left_type. The name is %s. The pointer num is %d.(2)",left_value_code_197,((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_154, "18field.c", 1056))->type, "18field.c", 1056))->mPointerNum),come_pop_stackframe());
                    __freed_obj__ = 0;
                    __result147__ = (_Bool)0;
                    if(come_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(buf_190 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(left_value_code_197 && !__freed_obj__) { left_value_code_197 = come_decrement_ref_count(left_value_code_197, (void*)0, (void*)0, 0, 0, 0); }
                    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result147__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_199=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(left_type_155))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value273;
        __freed_obj__ = 0;
        __dec_obj146=((struct sType*)come_null_check(result_type_199, "18field.c", 1061))->mArrayNum;
        ((struct sType*)come_null_check(result_type_199, "18field.c", 1061))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("18field.c", 1061),__exception_result_var_b252=((struct list$1sNodeph*)(right_value275=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value274=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1061))))))), come_pop_stackframe(), __exception_result_var_b252));
        if(__dec_obj146) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value274;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value275;
        __freed_obj__ = 0;
        __dec_obj147=((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1062))->type;
        ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1062))->type=(struct sType*)come_increment_ref_count(result_type_199);
        if(__dec_obj147) { come_call_finalizer(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1063))->var=((void*)0);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1065),__exception_result_var_b253=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1065))->stack, "18field.c", 1065)),(struct CVALUE*)come_increment_ref_count(come_value_176)), come_pop_stackframe(), __exception_result_var_b253);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1067),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_176, "18field.c", 1067))->c_value),come_pop_stackframe());
        __freed_obj__ = 0;
        if(come_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_190 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_197 && !__freed_obj__) { left_value_code_197 = come_decrement_ref_count(left_value_code_197, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_199 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result148__ = (_Bool)1;
    if(left_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_158 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result148__;
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
struct list$1CVALUEph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 154))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 155))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 156))->len=0;
        __freed_obj__ = 0;
        __result121__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result121__;
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
            it_156=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 173))->head;
            __freed_obj__ = 0;
            while(_while_condtional14=it_156!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional14) {
                prev_it_157=it_156;
                __freed_obj__ = 0;
                it_156=((struct list_item$1CVALUEph*)come_null_check(it_156, "./comelang2.h", 176))->next;
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
void* __exception_result_var_b206;
struct sNode* __result122__;
_Bool _if_conditional273;
struct sNode* __result123__;
struct sNode* result_161;
void* __exception_result_var_b207;
struct sNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_160, 0, sizeof(struct sNode*));
memset(&result_161, 0, sizeof(struct sNode*));
        if(_if_conditional272=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional272) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 337),__exception_result_var_b206=memset(&result_160,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b206);
            __freed_obj__ = 0;
            __result122__ = __result_obj__ = result_160;
            __freed_obj__ = 0;
            return __result122__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 340))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 340))->head;
        __freed_obj__ = 0;
        if(_if_conditional273=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional273) {
            __result123__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 343))->it, "./comelang2.h", 343))->item;
            __freed_obj__ = 0;
            return __result123__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 347),__exception_result_var_b207=memset(&result_161,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b207);
        __freed_obj__ = 0;
        __result124__ = __result_obj__ = result_161;
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result125__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 370))->it==((void*)0);
        __freed_obj__ = 0;
        return __result125__;
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
void* __exception_result_var_b210;
struct sNode* __result126__;
_Bool _if_conditional275;
struct sNode* __result127__;
struct sNode* result_164;
void* __exception_result_var_b211;
struct sNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_163, 0, sizeof(struct sNode*));
memset(&result_164, 0, sizeof(struct sNode*));
        if(_if_conditional274=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional274) {
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 354),__exception_result_var_b210=memset(&result_163,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b210);
            __freed_obj__ = 0;
            __result126__ = __result_obj__ = result_163;
            __freed_obj__ = 0;
            return __result126__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 358))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 358))->it, "./comelang2.h", 358))->next;
        __freed_obj__ = 0;
        if(_if_conditional275=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional275) {
            __result127__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->item;
            __freed_obj__ = 0;
            return __result127__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        (come_push_stackframe("./comelang2.h", 365),__exception_result_var_b211=memset(&result_164,0,sizeof(struct sNode*)), come_pop_stackframe(), __exception_result_var_b211);
        __freed_obj__ = 0;
        __result128__ = __result_obj__ = result_164;
        __freed_obj__ = 0;
        return __result128__;
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
void* right_value250;
void* right_value251;
struct optional$2CVALUEphbool* __result132__;
struct CVALUE* default_value_174;
void* __exception_result_var_b218;
void* right_value252;
void* right_value253;
struct optional$2CVALUEphbool* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_172, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_173, 0, sizeof(int));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&default_value_174, 0, sizeof(struct CVALUE*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
            if(_if_conditional279=position<0,            __freed_obj__ = 0, 
            _if_conditional279) {
                position+=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 739))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_172=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 742))->head;
            __freed_obj__ = 0;
            i_173=0;
            __freed_obj__ = 0;
            while(_while_condtional15=it_172!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional15) {
                if(_if_conditional280=position==i_173,                __freed_obj__ = 0, 
                _if_conditional280) {
                    __result132__ = __result_obj__ = ((struct optional$2CVALUEphbool*)(right_value251=optional$2CVALUEphbool_initialize((struct optional$2CVALUEphbool*)come_increment_ref_count(((struct optional$2CVALUEphbool*)(right_value250=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 746)))),(struct CVALUE*)come_increment_ref_count(((struct list_item$1CVALUEph*)come_null_check(it_172, "./comelang2.h", 746))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value250;
                    __freed_obj__ = 0;
                    return __result132__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_172=((struct list_item$1CVALUEph*)come_null_check(it_172, "./comelang2.h", 748))->next;
                __freed_obj__ = 0;
                i_173++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 753),__exception_result_var_b218=memset(&default_value_174,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b218);
            __freed_obj__ = 0;
            __result133__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 754), ((struct optional$2CVALUEphbool*)(right_value253=optional$2CVALUEphbool_initialize(((struct optional$2CVALUEphbool*)(right_value252=(struct optional$2CVALUEphbool*)come_calloc(1, sizeof(struct optional$2CVALUEphbool)*(1), "./comelang2.h", 754))),(struct CVALUE*)come_increment_ref_count(default_value_174),(_Bool)0))));
            if(default_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value252;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value253);
            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value253;
            __freed_obj__ = 0;
            return __result133__;
            __freed_obj__ = 0;
            if(default_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2CVALUEphbool* optional$2CVALUEphbool_initialize(struct optional$2CVALUEphbool* self, struct CVALUE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* __dec_obj131;
struct optional$2CVALUEphbool* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj131=((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 40))->v1;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 40))->v1=(struct CVALUE*)come_increment_ref_count(v1);
                        if(__dec_obj131) { come_call_finalizer(CVALUE_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 41))->v2=v2;
                        __freed_obj__ = 0;
                        __result131__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result131__;
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
                            if(_if_conditional281=self!=((void*)0)&&((struct optional$2CVALUEphbool*)come_null_check(self, "optional$2CVALUEphboolp_finalize", 0))->v1!=((void*)0),                            __freed_obj__ = 0, 
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
void* __exception_result_var_b220;
struct CVALUE* __result134__;
struct CVALUE* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_175, 0, sizeof(struct CVALUE*));
            if(_if_conditional282=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional282) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b220=memset(&default_value_175,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b220);
                __freed_obj__ = 0;
                __result134__ = __result_obj__ = default_value_175;
                __freed_obj__ = 0;
                return __result134__;
                __freed_obj__ = 0;
            }
            else {
                __result135__ = __result_obj__ = ((struct optional$2CVALUEphbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                __freed_obj__ = 0;
                return __result135__;
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
int __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result136__ = ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 414))->len;
                __freed_obj__ = 0;
                return __result136__;
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
struct list$1sNodeph* __result137__;
_Bool _if_conditional291;
struct list$1sNodeph* __exception_result_var_b224;
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
struct list$1sNodeph* __result138__;
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
                        head+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 512))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional286=tail<0,                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        tail+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 515))->len+1;
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
                    if(_if_conditional289=tail>((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 528))->len,                    __freed_obj__ = 0, 
                    _if_conditional289) {
                        tail=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 529))->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional290=head==tail,                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        __result137__ = __result_obj__ = self;
                        __freed_obj__ = 0;
                        return __result137__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional291=head==0&&tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 536))->len,                    __freed_obj__ = 0, 
                    _if_conditional291) {
                        (come_push_stackframe("./comelang2.h", 538),__exception_result_var_b224=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 538))), come_pop_stackframe(), __exception_result_var_b224);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional292=head==0,                        __freed_obj__ = 0, 
                        _if_conditional292) {
                            it_179=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 541))->head;
                            __freed_obj__ = 0;
                            i_180=0;
                            __freed_obj__ = 0;
                            while(_while_condtional16=it_179!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional16) {
                                if(_if_conditional293=i_180<tail,                                __freed_obj__ = 0, 
                                _if_conditional293) {
                                    prev_it_181=it_179;
                                    __freed_obj__ = 0;
                                    it_179=((struct list_item$1sNodeph*)come_null_check(it_179, "./comelang2.h", 547))->next;
                                    __freed_obj__ = 0;
                                    i_180++;
                                    __freed_obj__ = 0;
                                    if(prev_it_181 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 552))->len--;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional294=i_180==tail,                                    __freed_obj__ = 0, 
                                    _if_conditional294) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 555))->head=it_179;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 556))->head, "./comelang2.h", 556))->prev=((void*)0);
                                        __freed_obj__ = 0;
                                        break;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_179=((struct list_item$1sNodeph*)come_null_check(it_179, "./comelang2.h", 560))->next;
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
                            if(_if_conditional295=tail==((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 565))->len,                            __freed_obj__ = 0, 
                            _if_conditional295) {
                                it_182=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 566))->head;
                                __freed_obj__ = 0;
                                i_183=0;
                                __freed_obj__ = 0;
                                while(_while_condtional17=it_182!=((void*)0),                                __freed_obj__ = 0, 
                                _while_condtional17) {
                                    if(_if_conditional296=i_183==head,                                    __freed_obj__ = 0, 
                                    _if_conditional296) {
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 570))->tail=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 570))->prev;
                                        __freed_obj__ = 0;
                                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 571))->tail, "./comelang2.h", 571))->next=((void*)0);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional297=i_183>=head,                                    __freed_obj__ = 0, 
                                    _if_conditional297) {
                                        prev_it_184=it_182;
                                        __freed_obj__ = 0;
                                        it_182=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 577))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                        if(prev_it_184 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_184, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 582))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_182=((struct list_item$1sNodeph*)come_null_check(it_182, "./comelang2.h", 585))->next;
                                        __freed_obj__ = 0;
                                        i_183++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                it_185=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 591))->head;
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
                                        head_prev_it_186=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 600))->prev;
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
                                        it_185=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 610))->next;
                                        __freed_obj__ = 0;
                                        i_188++;
                                        __freed_obj__ = 0;
                                        if(prev_it_189 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 615))->len--;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        it_185=((struct list_item$1sNodeph*)come_null_check(it_185, "./comelang2.h", 618))->next;
                                        __freed_obj__ = 0;
                                        i_188++;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional301=head_prev_it_186!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional301) {
                                    ((struct list_item$1sNodeph*)come_null_check(head_prev_it_186, "./comelang2.h", 624))->next=tail_it_187;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional302=tail_it_187!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional302) {
                                    ((struct list_item$1sNodeph*)come_null_check(tail_it_187, "./comelang2.h", 627))->prev=head_prev_it_186;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result138__ = __result_obj__ = self;
                    __freed_obj__ = 0;
                    return __result138__;
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
void* __exception_result_var_b229;
struct CVALUE* __result139__;
_Bool _if_conditional306;
struct CVALUE* __result140__;
struct CVALUE* result_193;
void* __exception_result_var_b230;
struct CVALUE* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_192, 0, sizeof(struct CVALUE*));
memset(&result_193, 0, sizeof(struct CVALUE*));
            if(_if_conditional305=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional305) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 337),__exception_result_var_b229=memset(&result_192,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b229);
                __freed_obj__ = 0;
                __result139__ = __result_obj__ = result_192;
                __freed_obj__ = 0;
                return __result139__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 340))->it=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 340))->head;
            __freed_obj__ = 0;
            if(_if_conditional306=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 342))->it,            __freed_obj__ = 0, 
            _if_conditional306) {
                __result140__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 343))->it, "./comelang2.h", 343))->item;
                __freed_obj__ = 0;
                return __result140__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 347),__exception_result_var_b230=memset(&result_193,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b230);
            __freed_obj__ = 0;
            __result141__ = __result_obj__ = result_193;
            __freed_obj__ = 0;
            return __result141__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result142__ = self==((void*)0)||((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 370))->it==((void*)0);
            __freed_obj__ = 0;
            return __result142__;
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
void* __exception_result_var_b233;
struct CVALUE* __result143__;
_Bool _if_conditional308;
struct CVALUE* __result144__;
struct CVALUE* result_196;
void* __exception_result_var_b234;
struct CVALUE* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_195, 0, sizeof(struct CVALUE*));
memset(&result_196, 0, sizeof(struct CVALUE*));
            if(_if_conditional307=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional307) {
                __freed_obj__ = 0;
                (come_push_stackframe("./comelang2.h", 354),__exception_result_var_b233=memset(&result_195,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b233);
                __freed_obj__ = 0;
                __result143__ = __result_obj__ = result_195;
                __freed_obj__ = 0;
                return __result143__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 358))->it=((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 358))->it, "./comelang2.h", 358))->next;
            __freed_obj__ = 0;
            if(_if_conditional308=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 360))->it,            __freed_obj__ = 0, 
            _if_conditional308) {
                __result144__ = __result_obj__ = ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 361))->it, "./comelang2.h", 361))->item;
                __freed_obj__ = 0;
                return __result144__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            (come_push_stackframe("./comelang2.h", 365),__exception_result_var_b234=memset(&result_196,0,sizeof(struct CVALUE*)), come_pop_stackframe(), __exception_result_var_b234);
            __freed_obj__ = 0;
            __result145__ = __result_obj__ = result_196;
            __freed_obj__ = 0;
            return __result145__;
            __freed_obj__ = 0;
}

int sStoreArrayNode_sline(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = ((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1075))->sline;
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

char* sStoreArrayNode_sname(struct sStoreArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value276;
char* __exception_result_var_b254;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
    __result150__ = __result_obj__ = (come_push_stackframe("18field.c", 1080),__exception_result_var_b254=((char*)(right_value276=__builtin_string(((struct sStoreArrayNode*)come_null_check(self, "18field.c", 1080))->sname))), come_pop_stackframe(), __exception_result_var_b254);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

struct sLoadArrayNode* sLoadArrayNode_initialize(struct sLoadArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value277;
char* __exception_result_var_b255;
char* __dec_obj148;
void* right_value278;
struct list$1sNodeph* __dec_obj149;
void* right_value279;
struct sNode* __dec_obj150;
struct sLoadArrayNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1095))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1095))->sline;
    __freed_obj__ = 0;
    __dec_obj148=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1096))->sname;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1096))->sname=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1096),__exception_result_var_b255=((char*)(right_value277=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1096))->sname))), come_pop_stackframe(), __exception_result_var_b255));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value277;
    __freed_obj__ = 0;
    __dec_obj149=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1098))->mArrayNum;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1098))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value278=list$1sNodephp_clone(array_num))));
    if(__dec_obj149) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value278;
    __freed_obj__ = 0;
    __dec_obj150=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1100))->mLeft;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1100))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNode_clone(left))));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value279);
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value279;
    __freed_obj__ = 0;
    ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1101))->mQuote=quote;
    __freed_obj__ = 0;
    __result151__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result151__;
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
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result152__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value280;
char* __exception_result_var_b256;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value280, 0, sizeof(void*));
    __result153__ = __result_obj__ = (come_push_stackframe("18field.c", 1113),__exception_result_var_b256=((char*)(right_value280=__builtin_string("sLoadArrayNode"))), come_pop_stackframe(), __exception_result_var_b256);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value280;
    __freed_obj__ = 0;
    return __result153__;
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
_Bool __exception_result_var_b257;
_Bool _if_conditional328;
_Bool __result154__;
void* right_value281;
struct CVALUE* __exception_result_var_b258;
struct CVALUE* left_value_202;
void* right_value282;
struct sType* left_type_203;
void* right_value283;
void* right_value284;
struct list$1CVALUEph* __exception_result_var_b259;
struct list$1CVALUEph* array_num_204;
struct list$1sNodeph* o2_saved_205;
struct sNode* __exception_result_var_b260;
struct sNode* it_206;
_Bool __exception_result_var_b261;
_Bool _for_condtionalA11;
struct sNode* __exception_result_var_b262;
_Bool __exception_result_var_b263;
_Bool _if_conditional329;
_Bool __result155__;
void* right_value285;
struct CVALUE* __exception_result_var_b264;
struct CVALUE* c_value_207;
struct list$1CVALUEph* __exception_result_var_b265;
void* right_value286;
struct sType* type_208;
char* fun_name_209;
_Bool calling_fun_210;
_Bool _if_conditional330;
void* right_value287;
struct optional$2CVALUEphbool* __exception_result_var_b266;
_Bool __exception_result_var_b267;
_Bool _if_conditional331;
void* right_value288;
struct CVALUE* come_value_211;
void* right_value289;
void* right_value290;
struct buffer* __exception_result_var_b268;
struct buffer* buf_212;
struct buffer* __exception_result_var_b269;
struct list$1CVALUEph* o2_saved_213;
struct CVALUE* __exception_result_var_b270;
struct CVALUE* it_214;
_Bool __exception_result_var_b271;
_Bool _for_condtionalA12;
struct CVALUE* __exception_result_var_b272;
void* right_value291;
char* __exception_result_var_b273;
struct buffer* __exception_result_var_b274;
void* right_value292;
char* __exception_result_var_b275;
char* left_value_code_215;
void* right_value293;
char* __exception_result_var_b276;
char* __dec_obj151;
void* right_value294;
struct sType* result_type_216;
_Bool _if_conditional332;
struct sType* __dec_obj152;
int __exception_result_var_b277;
_Bool _if_conditional333;
int __exception_result_var_b278;
int __exception_result_var_b279;
int n_217;
_Bool _if_conditional334;
void* right_value295;
struct sType* __dec_obj153;
_Bool _if_conditional335;
void* right_value296;
struct sType* __dec_obj154;
struct list$1sNodeph* __exception_result_var_b280;
_Bool _if_conditional336;
int i_218;
_Bool _for_condtionalA13;
struct list$1sNodeph* __exception_result_var_b281;
_Bool _if_conditional337;
struct list$1sNodeph* __exception_result_var_b282;
_Bool _if_conditional338;
_Bool _if_conditional339;
int __exception_result_var_b283;
_Bool _if_conditional340;
void* right_value297;
struct sType* __dec_obj155;
struct list$1CVALUEph* __exception_result_var_b284;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_200, 0, sizeof(struct sNode*));
memset(&array_num_nodes_201, 0, sizeof(struct list$1sNodeph*));
memset(&right_value281, 0, sizeof(void*));
memset(&left_value_202, 0, sizeof(struct CVALUE*));
memset(&right_value282, 0, sizeof(void*));
memset(&left_type_203, 0, sizeof(struct sType*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
memset(&array_num_204, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_205, 0, sizeof(struct list$1sNodeph*));
memset(&it_206, 0, sizeof(struct sNode*));
memset(&right_value285, 0, sizeof(void*));
memset(&c_value_207, 0, sizeof(struct CVALUE*));
memset(&right_value286, 0, sizeof(void*));
memset(&type_208, 0, sizeof(struct sType*));
memset(&fun_name_209, 0, sizeof(char*));
memset(&calling_fun_210, 0, sizeof(_Bool));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&come_value_211, 0, sizeof(struct CVALUE*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&buf_212, 0, sizeof(struct buffer*));
memset(&o2_saved_213, 0, sizeof(struct list$1CVALUEph*));
memset(&it_214, 0, sizeof(struct CVALUE*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
memset(&left_value_code_215, 0, sizeof(char*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&result_type_216, 0, sizeof(struct sType*));
memset(&n_217, 0, sizeof(int));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&i_218, 0, sizeof(int));
memset(&right_value297, 0, sizeof(void*));
    left_200=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1118))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_201=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1119))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional328=!(come_push_stackframe("18field.c", 1121),__exception_result_var_b257=node_compile(left_200,info), come_pop_stackframe(), __exception_result_var_b257),    __freed_obj__ = 0, 
    _if_conditional328) {
        __result154__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result154__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_202=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 1125),__exception_result_var_b258=((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b258));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value281;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 1126),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    left_type_203=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(((struct CVALUE*)come_null_check(left_value_202, "18field.c", 1128))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value282;
    __freed_obj__ = 0;
    array_num_204=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("18field.c", 1130),__exception_result_var_b259=((struct list$1CVALUEph*)(right_value284=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value283=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1130))))))), come_pop_stackframe(), __exception_result_var_b259));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value283);
    if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value283;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value284;
    __freed_obj__ = 0;
    for(
    o2_saved_205=(array_num_nodes_201),it_206=(come_push_stackframe("18field.c", 1132),__exception_result_var_b260=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_205), "18field.c", 1132))), come_pop_stackframe(), __exception_result_var_b260) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA11=    !(come_push_stackframe("18field.c", 1132),__exception_result_var_b261=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_205), "18field.c", 1132))), come_pop_stackframe(), __exception_result_var_b261) ,    __freed_obj__ = 0, 
    _for_condtionalA11;    it_206=(come_push_stackframe("18field.c", 1132),__exception_result_var_b262=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_205), "18field.c", 1132))), come_pop_stackframe(), __exception_result_var_b262) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional329=!(come_push_stackframe("18field.c", 1133),__exception_result_var_b263=node_compile(it_206,info), come_pop_stackframe(), __exception_result_var_b263),        __freed_obj__ = 0, 
        _if_conditional329) {
            __result155__ = (_Bool)0;
            if(left_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_204 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_204, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result155__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_207=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 1137),__exception_result_var_b264=((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b264));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value285;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1138),dec_stack_ptr(1,info),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1140),__exception_result_var_b265=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_204, "18field.c", 1140)),(struct CVALUE*)come_increment_ref_count(c_value_207)), come_pop_stackframe(), __exception_result_var_b265);
        __freed_obj__ = 0;
        if(c_value_207 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_208=(struct sType*)come_increment_ref_count(((struct sType*)(right_value286=sType_clone(((struct CVALUE*)come_null_check(left_value_202, "18field.c", 1143))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value286;
    __freed_obj__ = 0;
    fun_name_209="operator_load_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional330=((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1147))->mQuote,    __freed_obj__ = 0, 
    _if_conditional330) {
        calling_fun_210=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_210=(come_push_stackframe("18field.c", 1151),__exception_result_var_b267=operator_overload_fun(type_208,fun_name_209,left_value_202,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1151),__exception_result_var_b266=((struct optional$2CVALUEphbool*)(right_value287=list$1CVALUEphp_operator_load_element(array_num_204,0))), come_pop_stackframe(), __exception_result_var_b266)),info), come_pop_stackframe(), __exception_result_var_b267);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value287;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional331=!calling_fun_210,    __freed_obj__ = 0, 
    _if_conditional331) {
        come_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1155))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value288;
        __freed_obj__ = 0;
        buf_212=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 1157),__exception_result_var_b268=((struct buffer*)(right_value290=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value289=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1157))))))), come_pop_stackframe(), __exception_result_var_b268));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
        if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value289;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value290);
        if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value290;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1159),__exception_result_var_b269=buffer_append_str(((struct buffer*)come_null_check(buf_212, "18field.c", 1159)),((struct CVALUE*)come_null_check(left_value_202, "18field.c", 1159))->c_value), come_pop_stackframe(), __exception_result_var_b269);
        __freed_obj__ = 0;
        for(
        o2_saved_213=(struct list$1CVALUEph*)come_increment_ref_count((array_num_204)),it_214=(come_push_stackframe("18field.c", 1161),__exception_result_var_b270=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_213), "18field.c", 1161))), come_pop_stackframe(), __exception_result_var_b270) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA12=        !(come_push_stackframe("18field.c", 1161),__exception_result_var_b271=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_213), "18field.c", 1161))), come_pop_stackframe(), __exception_result_var_b271) ,        __freed_obj__ = 0, 
        _for_condtionalA12;        it_214=(come_push_stackframe("18field.c", 1161),__exception_result_var_b272=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_213), "18field.c", 1161))), come_pop_stackframe(), __exception_result_var_b272) ,        __freed_obj__ = 0, 
        0        ){
            (come_push_stackframe("18field.c", 1162),__exception_result_var_b274=buffer_append_str(((struct buffer*)come_null_check(buf_212, "18field.c", 1162)),(come_push_stackframe("18field.c", 1162),__exception_result_var_b273=((char*)(right_value291=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_214, "18field.c", 1162))->c_value))), come_pop_stackframe(), __exception_result_var_b273)), come_pop_stackframe(), __exception_result_var_b274);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value291;
            __freed_obj__ = 0;
        }
        if(o2_saved_213 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_213, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_215=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1165),__exception_result_var_b275=((char*)(right_value292=buffer_to_string(((struct buffer*)come_null_check(buf_212, "18field.c", 1165))))), come_pop_stackframe(), __exception_result_var_b275));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value292;
        __freed_obj__ = 0;
        __dec_obj151=((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1167))->c_value;
        ((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1167))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1167),__exception_result_var_b276=((char*)(right_value293=xsprintf("%s",left_value_code_215))), come_pop_stackframe(), __exception_result_var_b276));
        if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value293;
        __freed_obj__ = 0;
        result_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(left_type_203))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value294;
        __freed_obj__ = 0;
        if(_if_conditional332=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1171))->mOriginalLoadVarType, "18field.c", 1171))->v1,        __freed_obj__ = 0, 
        _if_conditional332) {
            __dec_obj152=result_type_216;
            result_type_216=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1172))->mOriginalLoadVarType, "18field.c", 1172))->v1);
            if(__dec_obj152) { come_call_finalizer(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional333=(come_push_stackframe("18field.c", 1175),__exception_result_var_b277=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1175))->mArrayNum, "18field.c", 1175))), come_pop_stackframe(), __exception_result_var_b277)>0,        __freed_obj__ = 0, 
        _if_conditional333) {
            n_217=(come_push_stackframe("18field.c", 1176),__exception_result_var_b278=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1176))->mArrayNum, "18field.c", 1176))), come_pop_stackframe(), __exception_result_var_b278)-(come_push_stackframe("18field.c", 1176),__exception_result_var_b279=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_204, "18field.c", 1176))), come_pop_stackframe(), __exception_result_var_b279);
            __freed_obj__ = 0;
            if(_if_conditional334=n_217==0,            __freed_obj__ = 0, 
            _if_conditional334) {
                __dec_obj153=result_type_216;
                result_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(left_type_203))));
                if(__dec_obj153) { come_call_finalizer(sType_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
                if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value295;
                __freed_obj__ = 0;
                if(_if_conditional335=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_203, "18field.c", 1180))->mOriginalLoadVarType, "18field.c", 1180))->v1,                __freed_obj__ = 0, 
                _if_conditional335) {
                    __dec_obj154=result_type_216;
                    result_type_216=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_203, "18field.c", 1181))->mOriginalLoadVarType, "18field.c", 1181))->v1))));
                    if(__dec_obj154) { come_call_finalizer(sType_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
                    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value296;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 1183),__exception_result_var_b280=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1183))->mArrayNum, "18field.c", 1183))), come_pop_stackframe(), __exception_result_var_b280);
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
                        (come_push_stackframe("18field.c", 1187),__exception_result_var_b281=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1187))->mArrayNum, "18field.c", 1187)),-1,-1), come_pop_stackframe(), __exception_result_var_b281);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional337=n_217<0,                    __freed_obj__ = 0, 
                    _if_conditional337) {
                        (come_push_stackframe("18field.c", 1191),__exception_result_var_b282=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_216, "18field.c", 1191))->mArrayNum, "18field.c", 1191))), come_pop_stackframe(), __exception_result_var_b282);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_216, "18field.c", 1192))->mPointerNum+=n_217;
                        __freed_obj__ = 0;
                        if(_if_conditional338=((struct sType*)come_null_check(result_type_216, "18field.c", 1194))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            ((struct sType*)come_null_check(result_type_216, "18field.c", 1195))->mPointerNum=0;
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
            if(_if_conditional339=((struct sType*)come_null_check(result_type_216, "18field.c", 1200))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional339) {
                ((struct sType*)come_null_check(result_type_216, "18field.c", 1201))->mPointerNum-=(come_push_stackframe("18field.c", 1201),__exception_result_var_b283=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_204, "18field.c", 1201))), come_pop_stackframe(), __exception_result_var_b283);
                __freed_obj__ = 0;
                if(_if_conditional340=((struct sType*)come_null_check(result_type_216, "18field.c", 1203))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional340) {
                    ((struct sType*)come_null_check(result_type_216, "18field.c", 1204))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj155=((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1209))->type;
        ((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1209))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value297=sType_clone(result_type_216))));
        if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value297);
        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value297;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1210))->var=((void*)0);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1212),__exception_result_var_b284=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1212))->stack, "18field.c", 1212)),(struct CVALUE*)come_increment_ref_count(come_value_211)), come_pop_stackframe(), __exception_result_var_b284);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1214),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_211, "18field.c", 1214))->c_value),come_pop_stackframe());
        __freed_obj__ = 0;
        if(come_value_211 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_212 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_212, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_215 && !__freed_obj__) { left_value_code_215 = come_decrement_ref_count(left_value_code_215, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_216 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result156__ = (_Bool)1;
    if(left_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_204 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_208 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result156__;
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
int __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result157__ = ((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1222))->sline;
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

char* sLoadArrayNode_sname(struct sLoadArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value298;
char* __exception_result_var_b285;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value298, 0, sizeof(void*));
    __result158__ = __result_obj__ = (come_push_stackframe("18field.c", 1227),__exception_result_var_b285=((char*)(right_value298=__builtin_string(((struct sLoadArrayNode*)come_null_check(self, "18field.c", 1227))->sname))), come_pop_stackframe(), __exception_result_var_b285);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value298;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

struct sLoadRangeArrayNode* sLoadRangeArrayNode_initialize(struct sLoadRangeArrayNode* self, struct sNode* left, struct list$1sNodeph* array_num, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value299;
char* __exception_result_var_b286;
char* __dec_obj156;
void* right_value300;
struct list$1sNodeph* __dec_obj157;
void* right_value301;
struct sNode* __dec_obj158;
struct sLoadRangeArrayNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1242))->sline=((struct sInfo*)come_null_check(info, "18field.c", 1242))->sline;
    __freed_obj__ = 0;
    __dec_obj156=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1243))->sname;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1243))->sname=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1243),__exception_result_var_b286=((char*)(right_value299=__builtin_string(((struct sInfo*)come_null_check(info, "18field.c", 1243))->sname))), come_pop_stackframe(), __exception_result_var_b286));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value299;
    __freed_obj__ = 0;
    __dec_obj157=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1245))->mArrayNum;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1245))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value300=list$1sNodephp_clone(array_num))));
    if(__dec_obj157) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value300;
    __freed_obj__ = 0;
    __dec_obj158=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1247))->mLeft;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1247))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=sNode_clone(left))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value301;
    __freed_obj__ = 0;
    ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1248))->mQuote=quote;
    __freed_obj__ = 0;
    __result159__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(array_num && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result159__;
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
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result160__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value302;
char* __exception_result_var_b287;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value302, 0, sizeof(void*));
    __result161__ = __result_obj__ = (come_push_stackframe("18field.c", 1260),__exception_result_var_b287=((char*)(right_value302=__builtin_string("sLoadRangeArrayNode"))), come_pop_stackframe(), __exception_result_var_b287);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value302;
    __freed_obj__ = 0;
    return __result161__;
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
_Bool __exception_result_var_b288;
_Bool _if_conditional344;
_Bool __result162__;
void* right_value303;
struct CVALUE* __exception_result_var_b289;
struct CVALUE* left_value_221;
void* right_value304;
struct sType* left_type_222;
void* right_value305;
void* right_value306;
struct list$1CVALUEph* __exception_result_var_b290;
struct list$1CVALUEph* array_num_223;
struct list$1sNodeph* o2_saved_224;
struct sNode* __exception_result_var_b291;
struct sNode* it_225;
_Bool __exception_result_var_b292;
_Bool _for_condtionalA14;
struct sNode* __exception_result_var_b293;
_Bool __exception_result_var_b294;
_Bool _if_conditional345;
_Bool __result163__;
void* right_value307;
struct CVALUE* __exception_result_var_b295;
struct CVALUE* c_value_226;
struct list$1CVALUEph* __exception_result_var_b296;
void* right_value308;
struct sType* type_227;
char* fun_name_228;
_Bool calling_fun_229;
_Bool _if_conditional346;
void* right_value309;
struct optional$2CVALUEphbool* __exception_result_var_b297;
void* right_value310;
struct optional$2CVALUEphbool* __exception_result_var_b298;
_Bool __exception_result_var_b299;
_Bool _if_conditional347;
void* right_value311;
struct CVALUE* come_value_230;
void* right_value312;
void* right_value313;
struct buffer* __exception_result_var_b300;
struct buffer* buf_231;
struct buffer* __exception_result_var_b301;
struct list$1CVALUEph* o2_saved_232;
struct CVALUE* __exception_result_var_b302;
struct CVALUE* it_233;
_Bool __exception_result_var_b303;
_Bool _for_condtionalA15;
struct CVALUE* __exception_result_var_b304;
void* right_value314;
char* __exception_result_var_b305;
struct buffer* __exception_result_var_b306;
void* right_value315;
char* __exception_result_var_b307;
char* left_value_code_234;
void* right_value316;
char* __exception_result_var_b308;
char* __dec_obj159;
void* right_value317;
struct sType* result_type_235;
_Bool _if_conditional348;
struct sType* __dec_obj160;
int __exception_result_var_b309;
_Bool _if_conditional349;
int __exception_result_var_b310;
int __exception_result_var_b311;
int n_236;
_Bool _if_conditional350;
void* right_value318;
struct sType* __dec_obj161;
_Bool _if_conditional351;
void* right_value319;
struct sType* __dec_obj162;
struct list$1sNodeph* __exception_result_var_b312;
_Bool _if_conditional352;
int i_237;
_Bool _for_condtionalA16;
struct list$1sNodeph* __exception_result_var_b313;
_Bool _if_conditional353;
struct list$1sNodeph* __exception_result_var_b314;
_Bool _if_conditional354;
_Bool _if_conditional355;
int __exception_result_var_b315;
_Bool _if_conditional356;
void* right_value320;
struct sType* __dec_obj163;
struct list$1CVALUEph* __exception_result_var_b316;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_219, 0, sizeof(struct sNode*));
memset(&array_num_nodes_220, 0, sizeof(struct list$1sNodeph*));
memset(&right_value303, 0, sizeof(void*));
memset(&left_value_221, 0, sizeof(struct CVALUE*));
memset(&right_value304, 0, sizeof(void*));
memset(&left_type_222, 0, sizeof(struct sType*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&array_num_223, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_224, 0, sizeof(struct list$1sNodeph*));
memset(&it_225, 0, sizeof(struct sNode*));
memset(&right_value307, 0, sizeof(void*));
memset(&c_value_226, 0, sizeof(struct CVALUE*));
memset(&right_value308, 0, sizeof(void*));
memset(&type_227, 0, sizeof(struct sType*));
memset(&fun_name_228, 0, sizeof(char*));
memset(&calling_fun_229, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&come_value_230, 0, sizeof(struct CVALUE*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&buf_231, 0, sizeof(struct buffer*));
memset(&o2_saved_232, 0, sizeof(struct list$1CVALUEph*));
memset(&it_233, 0, sizeof(struct CVALUE*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&left_value_code_234, 0, sizeof(char*));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&result_type_235, 0, sizeof(struct sType*));
memset(&n_236, 0, sizeof(int));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&i_237, 0, sizeof(int));
memset(&right_value320, 0, sizeof(void*));
    left_219=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1265))->mLeft;
    __freed_obj__ = 0;
    array_num_nodes_220=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1266))->mArrayNum;
    __freed_obj__ = 0;
    if(_if_conditional344=!(come_push_stackframe("18field.c", 1268),__exception_result_var_b288=node_compile(left_219,info), come_pop_stackframe(), __exception_result_var_b288),    __freed_obj__ = 0, 
    _if_conditional344) {
        __result162__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result162__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_221=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 1272),__exception_result_var_b289=((struct CVALUE*)(right_value303=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b289));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value303;
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 1273),dec_stack_ptr(1,info),come_pop_stackframe());
    __freed_obj__ = 0;
    left_type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(((struct CVALUE*)come_null_check(left_value_221, "18field.c", 1275))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value304);
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value304;
    __freed_obj__ = 0;
    array_num_223=(struct list$1CVALUEph*)come_increment_ref_count((come_push_stackframe("18field.c", 1277),__exception_result_var_b290=((struct list$1CVALUEph*)(right_value306=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value305=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "18field.c", 1277))))))), come_pop_stackframe(), __exception_result_var_b290));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value305);
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value305;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value306;
    __freed_obj__ = 0;
    for(
    o2_saved_224=(array_num_nodes_220),it_225=(come_push_stackframe("18field.c", 1279),__exception_result_var_b291=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_224), "18field.c", 1279))), come_pop_stackframe(), __exception_result_var_b291) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA14=    !(come_push_stackframe("18field.c", 1279),__exception_result_var_b292=list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_224), "18field.c", 1279))), come_pop_stackframe(), __exception_result_var_b292) ,    __freed_obj__ = 0, 
    _for_condtionalA14;    it_225=(come_push_stackframe("18field.c", 1279),__exception_result_var_b293=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_224), "18field.c", 1279))), come_pop_stackframe(), __exception_result_var_b293) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional345=!(come_push_stackframe("18field.c", 1280),__exception_result_var_b294=node_compile(it_225,info), come_pop_stackframe(), __exception_result_var_b294),        __freed_obj__ = 0, 
        _if_conditional345) {
            __result163__ = (_Bool)0;
            if(left_value_221 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(left_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(array_num_223 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result163__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        c_value_226=(struct CVALUE*)come_increment_ref_count((come_push_stackframe("18field.c", 1284),__exception_result_var_b295=((struct CVALUE*)(right_value307=get_value_from_stack(-1,info))), come_pop_stackframe(), __exception_result_var_b295));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value307;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1285),dec_stack_ptr(1,info),come_pop_stackframe());
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1287),__exception_result_var_b296=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(array_num_223, "18field.c", 1287)),(struct CVALUE*)come_increment_ref_count(c_value_226)), come_pop_stackframe(), __exception_result_var_b296);
        __freed_obj__ = 0;
        if(c_value_226 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,c_value_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    type_227=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(((struct CVALUE*)come_null_check(left_value_221, "18field.c", 1290))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value308;
    __freed_obj__ = 0;
    fun_name_228="operator_load_range_element";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional346=((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1294))->mQuote,    __freed_obj__ = 0, 
    _if_conditional346) {
        calling_fun_229=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_229=(come_push_stackframe("18field.c", 1298),__exception_result_var_b299=operator_overload_fun2(type_227,fun_name_228,left_value_221,optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1298),__exception_result_var_b297=((struct optional$2CVALUEphbool*)(right_value309=list$1CVALUEphp_operator_load_element(array_num_223,0))), come_pop_stackframe(), __exception_result_var_b297)),optional$2CVALUEphbool_value((come_push_stackframe("18field.c", 1298),__exception_result_var_b298=((struct optional$2CVALUEphbool*)(right_value310=list$1CVALUEphp_operator_load_element(array_num_223,1))), come_pop_stackframe(), __exception_result_var_b298)),info), come_pop_stackframe(), __exception_result_var_b299);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value309;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEphboolp_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value310;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional347=!calling_fun_229,    __freed_obj__ = 0, 
    _if_conditional347) {
        come_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "18field.c", 1302))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value311;
        __freed_obj__ = 0;
        buf_231=(struct buffer*)come_increment_ref_count((come_push_stackframe("18field.c", 1304),__exception_result_var_b300=((struct buffer*)(right_value313=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value312=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "18field.c", 1304))))))), come_pop_stackframe(), __exception_result_var_b300));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value312);
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value312;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value313);
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value313;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1306),__exception_result_var_b301=buffer_append_str(((struct buffer*)come_null_check(buf_231, "18field.c", 1306)),((struct CVALUE*)come_null_check(left_value_221, "18field.c", 1306))->c_value), come_pop_stackframe(), __exception_result_var_b301);
        __freed_obj__ = 0;
        for(
        o2_saved_232=(struct list$1CVALUEph*)come_increment_ref_count((array_num_223)),it_233=(come_push_stackframe("18field.c", 1308),__exception_result_var_b302=list$1CVALUEph_begin(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "18field.c", 1308))), come_pop_stackframe(), __exception_result_var_b302) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        !(come_push_stackframe("18field.c", 1308),__exception_result_var_b303=list$1CVALUEph_end(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "18field.c", 1308))), come_pop_stackframe(), __exception_result_var_b303) ,        __freed_obj__ = 0, 
        _for_condtionalA15;        it_233=(come_push_stackframe("18field.c", 1308),__exception_result_var_b304=list$1CVALUEph_next(((struct list$1CVALUEph*)come_null_check((o2_saved_232), "18field.c", 1308))), come_pop_stackframe(), __exception_result_var_b304) ,        __freed_obj__ = 0, 
        0        ){
            (come_push_stackframe("18field.c", 1309),__exception_result_var_b306=buffer_append_str(((struct buffer*)come_null_check(buf_231, "18field.c", 1309)),(come_push_stackframe("18field.c", 1309),__exception_result_var_b305=((char*)(right_value314=xsprintf("[%s]",((struct CVALUE*)come_null_check(it_233, "18field.c", 1309))->c_value))), come_pop_stackframe(), __exception_result_var_b305)), come_pop_stackframe(), __exception_result_var_b306);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
            if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value314;
            __freed_obj__ = 0;
        }
        if(o2_saved_232 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_232, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        left_value_code_234=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1312),__exception_result_var_b307=((char*)(right_value315=buffer_to_string(((struct buffer*)come_null_check(buf_231, "18field.c", 1312))))), come_pop_stackframe(), __exception_result_var_b307));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value315;
        __freed_obj__ = 0;
        __dec_obj159=((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1314))->c_value;
        ((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1314))->c_value=(char*)come_increment_ref_count((come_push_stackframe("18field.c", 1314),__exception_result_var_b308=((char*)(right_value316=xsprintf("%s",left_value_code_234))), come_pop_stackframe(), __exception_result_var_b308));
        if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value316;
        __freed_obj__ = 0;
        result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=sType_clone(left_type_222))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value317);
        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value317;
        __freed_obj__ = 0;
        if(_if_conditional348=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1318))->mOriginalLoadVarType, "18field.c", 1318))->v1,        __freed_obj__ = 0, 
        _if_conditional348) {
            __dec_obj160=result_type_235;
            result_type_235=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1319))->mOriginalLoadVarType, "18field.c", 1319))->v1);
            if(__dec_obj160) { come_call_finalizer(sType_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional349=(come_push_stackframe("18field.c", 1322),__exception_result_var_b309=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1322))->mArrayNum, "18field.c", 1322))), come_pop_stackframe(), __exception_result_var_b309)>0,        __freed_obj__ = 0, 
        _if_conditional349) {
            n_236=(come_push_stackframe("18field.c", 1323),__exception_result_var_b310=list$1sNodeph_length(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1323))->mArrayNum, "18field.c", 1323))), come_pop_stackframe(), __exception_result_var_b310)-(come_push_stackframe("18field.c", 1323),__exception_result_var_b311=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_223, "18field.c", 1323))), come_pop_stackframe(), __exception_result_var_b311);
            __freed_obj__ = 0;
            if(_if_conditional350=n_236==0,            __freed_obj__ = 0, 
            _if_conditional350) {
                __dec_obj161=result_type_235;
                result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(left_type_222))));
                if(__dec_obj161) { come_call_finalizer(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
                if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value318;
                __freed_obj__ = 0;
                if(_if_conditional351=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_222, "18field.c", 1327))->mOriginalLoadVarType, "18field.c", 1327))->v1,                __freed_obj__ = 0, 
                _if_conditional351) {
                    __dec_obj162=result_type_235;
                    result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value319=sType_clone(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(left_type_222, "18field.c", 1328))->mOriginalLoadVarType, "18field.c", 1328))->v1))));
                    if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
                    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value319;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 1330),__exception_result_var_b312=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1330))->mArrayNum, "18field.c", 1330))), come_pop_stackframe(), __exception_result_var_b312);
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
                        (come_push_stackframe("18field.c", 1334),__exception_result_var_b313=list$1sNodeph_delete(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1334))->mArrayNum, "18field.c", 1334)),-1,-1), come_pop_stackframe(), __exception_result_var_b313);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional353=n_236<0,                    __freed_obj__ = 0, 
                    _if_conditional353) {
                        (come_push_stackframe("18field.c", 1338),__exception_result_var_b314=list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(result_type_235, "18field.c", 1338))->mArrayNum, "18field.c", 1338))), come_pop_stackframe(), __exception_result_var_b314);
                        __freed_obj__ = 0;
                        ((struct sType*)come_null_check(result_type_235, "18field.c", 1339))->mPointerNum+=n_236;
                        __freed_obj__ = 0;
                        if(_if_conditional354=((struct sType*)come_null_check(result_type_235, "18field.c", 1341))->mPointerNum<0,                        __freed_obj__ = 0, 
                        _if_conditional354) {
                            ((struct sType*)come_null_check(result_type_235, "18field.c", 1342))->mPointerNum=0;
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
            if(_if_conditional355=((struct sType*)come_null_check(result_type_235, "18field.c", 1347))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional355) {
                ((struct sType*)come_null_check(result_type_235, "18field.c", 1348))->mPointerNum-=(come_push_stackframe("18field.c", 1348),__exception_result_var_b315=list$1CVALUEph_length(((struct list$1CVALUEph*)come_null_check(array_num_223, "18field.c", 1348))), come_pop_stackframe(), __exception_result_var_b315);
                __freed_obj__ = 0;
                if(_if_conditional356=((struct sType*)come_null_check(result_type_235, "18field.c", 1350))->mPointerNum<0,                __freed_obj__ = 0, 
                _if_conditional356) {
                    ((struct sType*)come_null_check(result_type_235, "18field.c", 1351))->mPointerNum=0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj163=((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1356))->type;
        ((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1356))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(result_type_235))));
        if(__dec_obj163) { come_call_finalizer(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value320;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1357))->var=((void*)0);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1359),__exception_result_var_b316=list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "18field.c", 1359))->stack, "18field.c", 1359)),(struct CVALUE*)come_increment_ref_count(come_value_230)), come_pop_stackframe(), __exception_result_var_b316);
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1361),add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_230, "18field.c", 1361))->c_value),come_pop_stackframe());
        __freed_obj__ = 0;
        if(come_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_231 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_231, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value_code_234 && !__freed_obj__) { left_value_code_234 = come_decrement_ref_count(left_value_code_234, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result164__ = (_Bool)1;
    if(left_value_221 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_221, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(array_num_223 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,array_num_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_227 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result164__;
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
int __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result165__ = ((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1369))->sline;
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

char* sLoadRangeArrayNode_sname(struct sLoadRangeArrayNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value321;
char* __exception_result_var_b317;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value321, 0, sizeof(void*));
    __result166__ = __result_obj__ = (come_push_stackframe("18field.c", 1374),__exception_result_var_b317=((char*)(right_value321=__builtin_string(((struct sLoadRangeArrayNode*)come_null_check(self, "18field.c", 1374))->sname))), come_pop_stackframe(), __exception_result_var_b317);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value321;
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result167__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    (come_push_stackframe("18field.c", 1384),err_msg(info,"parse_method_call is failed"),come_pop_stackframe());
    __freed_obj__ = 0;
    (come_push_stackframe("18field.c", 1385),exit(2),come_pop_stackframe());
    __freed_obj__ = 0;
    __result168__ = __result_obj__ = (struct sNode*)((void*)0);
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result168__;
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
_Bool __exception_result_var_b318;
_Bool _if_conditional358;
void* right_value322;
struct optional$2charphbool* __exception_result_var_b319;
char* word_240;
_Bool __exception_result_var_b320;
_Bool __exception_result_var_b321;
_Bool __exception_result_var_b322;
_Bool _if_conditional359;
void* right_value323;
void* right_value324;
struct sExceptionGetValueNode* __exception_result_var_b323;
struct sNode* _inf_value2;
struct sExceptionGetValueNode* _inf_obj_value2;
void* right_value328;
struct sNode* __dec_obj166;
void* right_value329;
void* right_value330;
struct sExceptionGetValueNode* __exception_result_var_b324;
struct sNode* _inf_value3;
struct sExceptionGetValueNode* _inf_obj_value3;
void* right_value334;
struct sNode* __dec_obj169;
_Bool _if_conditional372;
_Bool _if_conditional373;
void* right_value335;
void* right_value336;
struct sExceptionGetValueNode* __exception_result_var_b325;
struct sNode* _inf_value4;
struct sExceptionGetValueNode* _inf_obj_value4;
void* right_value340;
struct sNode* __dec_obj172;
struct sNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&p_238, 0, sizeof(char*));
memset(&sline_239, 0, sizeof(int));
memset(&right_value322, 0, sizeof(void*));
memset(&word_240, 0, sizeof(char*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
    if(_if_conditional357=(*((struct sInfo*)come_null_check(info, "18field.c", 1392))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1392))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1392))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1392))->p+1)==62),    __freed_obj__ = 0, 
    _if_conditional357) {
        p_238=((struct sInfo*)come_null_check(info, "18field.c", 1393))->p;
        __freed_obj__ = 0;
        sline_239=((struct sInfo*)come_null_check(info, "18field.c", 1394))->sline;
        __freed_obj__ = 0;
        ((struct sInfo*)come_null_check(info, "18field.c", 1396))->p++;
        __freed_obj__ = 0;
        (come_push_stackframe("18field.c", 1397),skip_spaces_and_lf(info),come_pop_stackframe());
        __freed_obj__ = 0;
        if(_if_conditional358=(come_push_stackframe("18field.c", 1399),__exception_result_var_b318=xisalpha(*((struct sInfo*)come_null_check(info, "18field.c", 1399))->p), come_pop_stackframe(), __exception_result_var_b318)||*((struct sInfo*)come_null_check(info, "18field.c", 1399))->p==95,        __freed_obj__ = 0, 
        _if_conditional358) {
            word_240=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1400),__exception_result_var_b319=((struct optional$2charphbool*)(right_value322=parse_word(info))), come_pop_stackframe(), __exception_result_var_b319)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
            if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value322;
            __freed_obj__ = 0;
            if(_if_conditional359=((come_push_stackframe("18field.c", 1402),__exception_result_var_b320=string_operator_equals(word_240,"expect"), come_pop_stackframe(), __exception_result_var_b320)||(come_push_stackframe("18field.c", 1402),__exception_result_var_b321=string_operator_equals(word_240,"value"), come_pop_stackframe(), __exception_result_var_b321)||(come_push_stackframe("18field.c", 1402),__exception_result_var_b322=string_operator_equals(word_240,"catch"), come_pop_stackframe(), __exception_result_var_b322))&&(*((struct sInfo*)come_null_check(info, "18field.c", 1402))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1402))->p==123),            __freed_obj__ = 0, 
            _if_conditional359) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1403))->p=p_238;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1404))->sline=sline_239;
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "18field.c", 1407))->p=p_238;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1408))->sline=sline_239;
                __freed_obj__ = 0;
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1410);
                _inf_obj_value2=come_increment_ref_count((come_push_stackframe("18field.c", 1410),__exception_result_var_b323=((struct sExceptionGetValueNode*)(right_value324=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value323=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1410)))),node,info))), come_pop_stackframe(), __exception_result_var_b323));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value2->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value2->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value2->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value2->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value2->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value2->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj166=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=_inf_value2)));
                if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
                if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value323;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value324);
                if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value324;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value328);
                if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value328;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(word_240 && !__freed_obj__) { word_240 = come_decrement_ref_count(word_240, (void*)0, (void*)0, 0, 0, 0); }
        }
        else {
            ((struct sInfo*)come_null_check(info, "18field.c", 1414))->p=p_238;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1415))->sline=sline_239;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1417);
            _inf_obj_value3=come_increment_ref_count((come_push_stackframe("18field.c", 1417),__exception_result_var_b324=((struct sExceptionGetValueNode*)(right_value330=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value329=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1417)))),node,info))), come_pop_stackframe(), __exception_result_var_b324));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sExceptionGetValueNode_finalize;
            _inf_value3->clone=(void*)sExceptionGetValueNode_clone;
            _inf_value3->compile=(void*)sExceptionGetValueNode_compile;
            _inf_value3->sline=(void*)sExceptionGetValueNode_sline;
            _inf_value3->sname=(void*)sExceptionGetValueNode_sname;
            _inf_value3->terminated=(void*)sExceptionGetValueNode_terminated;
            _inf_value3->kind=(void*)sExceptionGetValueNode_kind;
            __dec_obj169=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=_inf_value3)));
            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value329;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value330;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value334);
            if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value334;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional372=*((struct sInfo*)come_null_check(info, "18field.c", 1420))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1420))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional372) {
        }
        else {
            if(_if_conditional373=node==((void*)0),            __freed_obj__ = 0, 
            _if_conditional373) {
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1425);
                _inf_obj_value4=come_increment_ref_count((come_push_stackframe("18field.c", 1425),__exception_result_var_b325=((struct sExceptionGetValueNode*)(right_value336=sExceptionGetValueNode_initialize((struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value335=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "18field.c", 1425)))),node,info))), come_pop_stackframe(), __exception_result_var_b325));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sExceptionGetValueNode_finalize;
                _inf_value4->clone=(void*)sExceptionGetValueNode_clone;
                _inf_value4->compile=(void*)sExceptionGetValueNode_compile;
                _inf_value4->sline=(void*)sExceptionGetValueNode_sline;
                _inf_value4->sname=(void*)sExceptionGetValueNode_sname;
                _inf_value4->terminated=(void*)sExceptionGetValueNode_terminated;
                _inf_value4->kind=(void*)sExceptionGetValueNode_kind;
                __dec_obj172=node;
                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=_inf_value4)));
                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
                if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value335;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value336);
                if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value336;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value340);
                if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value340;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result175__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result175__;
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
                    if(_if_conditional374=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional374) {
                        if(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional375=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_finalize", 1))->sname!=((void*)0),                    __freed_obj__ = 0, 
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
struct sExceptionGetValueNode* __result173__;
void* right_value337;
struct sExceptionGetValueNode* result_243;
_Bool _if_conditional377;
void* right_value338;
struct sNode* __dec_obj170;
_Bool _if_conditional378;
_Bool _if_conditional379;
void* right_value339;
char* __dec_obj171;
struct sExceptionGetValueNode* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value337, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct sExceptionGetValueNode*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
                    if(_if_conditional376=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional376) {
                        __result173__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result173__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_243=(struct sExceptionGetValueNode*)come_increment_ref_count(((struct sExceptionGetValueNode*)(right_value337=(struct sExceptionGetValueNode*)come_calloc(1, sizeof(struct sExceptionGetValueNode)*(1), "sExceptionGetValueNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value337;
                    __freed_obj__ = 0;
                    if(_if_conditional377=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 4))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional377) {
                        __dec_obj170=((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 4))->mLeft;
                        ((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=sNode_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 4))->mLeft))));
                        if(__dec_obj170) { __dec_obj170 = come_decrement_ref_count(__dec_obj170, ((struct sNode*)__dec_obj170)->finalize, ((struct sNode*)__dec_obj170)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
                        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value338;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional378=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional378) {
                        ((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 5))->sline=((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 5))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional379=self!=((void*)0)&&((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 6))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional379) {
                        __dec_obj171=((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 6))->sname;
                        ((struct sExceptionGetValueNode*)come_null_check(result_243, "sExceptionGetValueNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value339=string_clone(((struct sExceptionGetValueNode*)come_null_check(self, "sExceptionGetValueNode_clone", 6))->sname))));
                        if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
                        if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value339;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result174__ = __result_obj__ = result_243;
                    if(result_243 && !__freed_obj__) { come_call_finalizer(sExceptionGetValueNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result174__;
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
_Bool range_array_244;
char* p_245;
int sline_246;
_Bool _if_conditional380;
_Bool no_comma_247;
_Bool no_output_err_248;
_Bool no_output_come_code_249;
void* right_value341;
struct sNode* __exception_result_var_b326;
struct sNode* exp_250;
_Bool _if_conditional381;
_Bool _if_conditional382;
_Bool quote_251;
_Bool _if_conditional383;
void* right_value342;
void* right_value343;
struct list$1sNodeph* __exception_result_var_b327;
struct list$1sNodeph* array_num_252;
void* right_value344;
struct sNode* __exception_result_var_b328;
struct sNode* node2_253;
struct list$1sNodeph* __exception_result_var_b329;
_Bool _if_conditional386;
void* right_value348;
struct sNode* __exception_result_var_b330;
struct sNode* node3_257;
struct list$1sNodeph* __exception_result_var_b331;
void* right_value349;
struct optional$2intbool* __exception_result_var_b332;
void* right_value350;
void* right_value351;
struct sLoadRangeArrayNode* __exception_result_var_b334;
struct sNode* _inf_value5;
struct sLoadRangeArrayNode* _inf_obj_value5;
void* right_value356;
struct sNode* __dec_obj179;
_Bool _if_conditional397;
_Bool quote_260;
_Bool _if_conditional398;
_Bool range_261;
void* right_value357;
void* right_value358;
struct list$1sNodeph* __exception_result_var_b335;
struct list$1sNodeph* array_num_262;
_Bool _while_condtional20;
_Bool range_array2_263;
char* p_264;
int sline_265;
_Bool _if_conditional399;
_Bool no_comma_266;
_Bool no_output_err_267;
_Bool no_output_come_code_268;
void* right_value359;
struct sNode* __exception_result_var_b336;
struct sNode* exp_269;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value360;
struct sNode* __exception_result_var_b337;
struct sNode* node2_270;
struct list$1sNodeph* __exception_result_var_b338;
_Bool _if_conditional403;
_Bool _if_conditional404;
void* right_value361;
struct sNode* __exception_result_var_b339;
struct sNode* right_node_271;
void* right_value362;
void* right_value363;
struct sStoreArrayNode* __exception_result_var_b340;
struct sNode* _inf_value6;
struct sStoreArrayNode* _inf_obj_value6;
void* right_value369;
struct sNode* __dec_obj184;
void* right_value370;
void* right_value371;
struct sLoadArrayNode* __exception_result_var_b341;
struct sNode* _inf_value7;
struct sLoadArrayNode* _inf_obj_value7;
void* right_value376;
struct sNode* __dec_obj188;
void* right_value377;
struct sNode* __exception_result_var_b342;
struct sNode* __dec_obj189;
_Bool _if_conditional425;
void* right_value378;
void* right_value379;
struct sNullCheckNode* __exception_result_var_b343;
struct sNode* _inf_value8;
struct sNullCheckNode* _inf_obj_value8;
void* right_value383;
struct sNode* __dec_obj192;
_Bool _if_conditional433;
_Bool _if_conditional434;
void* right_value384;
void* right_value385;
void* right_value386;
struct sNullCheckNode* __exception_result_var_b344;
struct sNode* _inf_value9;
struct sNullCheckNode* _inf_obj_value9;
void* right_value390;
struct sNode* __dec_obj195;
void* right_value391;
struct optional$2charphbool* __exception_result_var_b345;
char* field_name_276;
_Bool _if_conditional442;
void* right_value392;
struct sNode* __exception_result_var_b346;
struct sNode* right_node_277;
void* right_value393;
void* right_value394;
struct sStoreFieldNode* __exception_result_var_b347;
struct sNode* _inf_value10;
struct sStoreFieldNode* _inf_obj_value10;
void* right_value400;
struct sNode* __dec_obj200;
_Bool _if_conditional453;
_Bool __exception_result_var_b348;
_Bool _if_conditional454;
void* right_value401;
void* right_value402;
struct sNode* __exception_result_var_b349;
struct sNode* __dec_obj201;
_Bool __exception_result_var_b350;
_Bool _if_conditional455;
void* right_value403;
void* right_value404;
struct sNode* __exception_result_var_b351;
struct sNode* __dec_obj202;
void* right_value405;
void* right_value406;
struct sNode* __exception_result_var_b352;
struct sNode* __dec_obj203;
void* right_value407;
void* right_value408;
struct sLoadFieldNode* __exception_result_var_b353;
struct sNode* _inf_value11;
struct sLoadFieldNode* _inf_obj_value11;
void* right_value413;
struct sNode* __dec_obj207;
void* right_value414;
struct sNode* __exception_result_var_b354;
struct sNode* node2_280;
_Bool _if_conditional464;
struct sNode* __dec_obj208;
struct sNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&range_array_244, 0, sizeof(_Bool));
memset(&p_245, 0, sizeof(char*));
memset(&sline_246, 0, sizeof(int));
memset(&no_comma_247, 0, sizeof(_Bool));
memset(&no_output_err_248, 0, sizeof(_Bool));
memset(&no_output_come_code_249, 0, sizeof(_Bool));
memset(&right_value341, 0, sizeof(void*));
memset(&exp_250, 0, sizeof(struct sNode*));
memset(&quote_251, 0, sizeof(_Bool));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
memset(&array_num_252, 0, sizeof(struct list$1sNodeph*));
memset(&right_value344, 0, sizeof(void*));
memset(&node2_253, 0, sizeof(struct sNode*));
memset(&right_value348, 0, sizeof(void*));
memset(&node3_257, 0, sizeof(struct sNode*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&quote_260, 0, sizeof(_Bool));
memset(&range_261, 0, sizeof(_Bool));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&array_num_262, 0, sizeof(struct list$1sNodeph*));
memset(&range_array2_263, 0, sizeof(_Bool));
memset(&p_264, 0, sizeof(char*));
memset(&sline_265, 0, sizeof(int));
memset(&no_comma_266, 0, sizeof(_Bool));
memset(&no_output_err_267, 0, sizeof(_Bool));
memset(&no_output_come_code_268, 0, sizeof(_Bool));
memset(&right_value359, 0, sizeof(void*));
memset(&exp_269, 0, sizeof(struct sNode*));
memset(&right_value360, 0, sizeof(void*));
memset(&node2_270, 0, sizeof(struct sNode*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_node_271, 0, sizeof(struct sNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&field_name_276, 0, sizeof(char*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_node_277, 0, sizeof(struct sNode*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&node2_280, 0, sizeof(struct sNode*));
    while(_while_condtional19=(_Bool)1,    __freed_obj__ = 0, 
    _while_condtional19) {
        range_array_244=(_Bool)0;
        __freed_obj__ = 0;
        {
            p_245=((struct sInfo*)come_null_check(info, "18field.c", 1436))->p;
            __freed_obj__ = 0;
            sline_246=((struct sInfo*)come_null_check(info, "18field.c", 1437))->sline;
            __freed_obj__ = 0;
            if(_if_conditional380=*((struct sInfo*)come_null_check(info, "18field.c", 1439))->p==91,            __freed_obj__ = 0, 
            _if_conditional380) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1440))->p++;
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 1441),skip_spaces_and_lf(info),come_pop_stackframe());
                __freed_obj__ = 0;
                no_comma_247=((struct sInfo*)come_null_check(info, "18field.c", 1443))->no_comma;
                __freed_obj__ = 0;
                no_output_err_248=((struct sInfo*)come_null_check(info, "18field.c", 1444))->no_output_err;
                __freed_obj__ = 0;
                no_output_come_code_249=((struct sInfo*)come_null_check(info, "18field.c", 1445))->no_output_come_code;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1446))->no_output_err=(_Bool)1;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1447))->no_comma=(_Bool)1;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1448))->no_output_come_code=(_Bool)1;
                __freed_obj__ = 0;
                exp_250=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1449),__exception_result_var_b326=((struct sNode*)(right_value341=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b326));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { right_value341 = come_decrement_ref_count(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value341;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1450))->no_comma=no_comma_247;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1451))->no_output_err=no_output_err_248;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "18field.c", 1452))->no_output_come_code=no_output_come_code_249;
                __freed_obj__ = 0;
                if(_if_conditional381=*((struct sInfo*)come_null_check(info, "18field.c", 1454))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1454))->p+1)==46,                __freed_obj__ = 0, 
                _if_conditional381) {
                    range_array_244=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(exp_250 && !__freed_obj__) { exp_250 = come_decrement_ref_count(exp_250, ((struct sNode*)exp_250)->finalize, ((struct sNode*)exp_250)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1459))->p=p_245;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1460))->sline=sline_246;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional382=range_array_244&&(*((struct sInfo*)come_null_check(info, "18field.c", 1463))->p==92&&*(((struct sInfo*)come_null_check(info, "18field.c", 1463))->p+1)==91||*((struct sInfo*)come_null_check(info, "18field.c", 1463))->p==91),        __freed_obj__ = 0, 
        _if_conditional382) {
            quote_251=*((struct sInfo*)come_null_check(info, "18field.c", 1464))->p==92;
            __freed_obj__ = 0;
            if(_if_conditional383=quote_251,            __freed_obj__ = 0, 
            _if_conditional383) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1466))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "18field.c", 1468))->p++;
            __freed_obj__ = 0;
            (come_push_stackframe("18field.c", 1469),skip_spaces_and_lf(info),come_pop_stackframe());
            __freed_obj__ = 0;
            array_num_252=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("18field.c", 1471),__exception_result_var_b327=((struct list$1sNodeph*)(right_value343=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value342=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1471))))))), come_pop_stackframe(), __exception_result_var_b327));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value342;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value343);
            if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value343;
            __freed_obj__ = 0;
            (come_push_stackframe("18field.c", 1473),skip_pointer_attribute(info),come_pop_stackframe());
            __freed_obj__ = 0;
            node2_253=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1475),__exception_result_var_b328=((struct sNode*)(right_value344=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b328));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value344);
            if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value344;
            __freed_obj__ = 0;
            (come_push_stackframe("18field.c", 1477),__exception_result_var_b329=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_252, "18field.c", 1477)),(struct sNode*)come_increment_ref_count(node2_253)), come_pop_stackframe(), __exception_result_var_b329);
            __freed_obj__ = 0;
            if(_if_conditional386=*((struct sInfo*)come_null_check(info, "18field.c", 1479))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1479))->p+1)==46,            __freed_obj__ = 0, 
            _if_conditional386) {
                ((struct sInfo*)come_null_check(info, "18field.c", 1480))->p+=2;
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 1481),skip_spaces_and_lf(info),come_pop_stackframe());
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 1483),skip_pointer_attribute(info),come_pop_stackframe());
                __freed_obj__ = 0;
                node3_257=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1485),__exception_result_var_b330=((struct sNode*)(right_value348=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b330));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value348;
                __freed_obj__ = 0;
                (come_push_stackframe("18field.c", 1487),__exception_result_var_b331=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_252, "18field.c", 1487)),(struct sNode*)come_increment_ref_count(node3_257)), come_pop_stackframe(), __exception_result_var_b331);
                __freed_obj__ = 0;
                optional$2intbool_value((come_push_stackframe("18field.c", 1489),__exception_result_var_b332=((struct optional$2intbool*)(right_value349=expected_next_character(93,info))), come_pop_stackframe(), __exception_result_var_b332));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value349);
                if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value349;
                __freed_obj__ = 0;
                if(node3_257 && !__freed_obj__) { node3_257 = come_decrement_ref_count(node3_257, ((struct sNode*)node3_257)->finalize, ((struct sNode*)node3_257)->_protocol_obj, 0, 0, 0); } 
            }
            __freed_obj__ = 0;
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1492);
            _inf_obj_value5=come_increment_ref_count((come_push_stackframe("18field.c", 1492),__exception_result_var_b334=((struct sLoadRangeArrayNode*)(right_value351=sLoadRangeArrayNode_initialize((struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value350=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "18field.c", 1492)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_252),quote_251,info))), come_pop_stackframe(), __exception_result_var_b334));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sLoadRangeArrayNode_finalize;
            _inf_value5->clone=(void*)sLoadRangeArrayNode_clone;
            _inf_value5->compile=(void*)sLoadRangeArrayNode_compile;
            _inf_value5->sline=(void*)sLoadRangeArrayNode_sline;
            _inf_value5->sname=(void*)sLoadRangeArrayNode_sname;
            _inf_value5->terminated=(void*)sLoadRangeArrayNode_terminated;
            _inf_value5->kind=(void*)sLoadRangeArrayNode_kind;
            __dec_obj179=node;
            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=_inf_value5)));
            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value350);
            if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value350;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value351);
            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value351;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value356);
            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[5] = right_value356;
            __freed_obj__ = 0;
            if(array_num_252 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_252, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node2_253 && !__freed_obj__) { node2_253 = come_decrement_ref_count(node2_253, ((struct sNode*)node2_253)->finalize, ((struct sNode*)node2_253)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional397=!range_array_244&&(*((struct sInfo*)come_null_check(info, "18field.c", 1496))->p==92&&*(((struct sInfo*)come_null_check(info, "18field.c", 1496))->p+1)==91||*((struct sInfo*)come_null_check(info, "18field.c", 1496))->p==91),            __freed_obj__ = 0, 
            _if_conditional397) {
                quote_260=*((struct sInfo*)come_null_check(info, "18field.c", 1497))->p==92;
                __freed_obj__ = 0;
                if(_if_conditional398=quote_260,                __freed_obj__ = 0, 
                _if_conditional398) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1499))->p++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                range_261=(_Bool)0;
                __freed_obj__ = 0;
                array_num_262=(struct list$1sNodeph*)come_increment_ref_count((come_push_stackframe("18field.c", 1503),__exception_result_var_b335=((struct list$1sNodeph*)(right_value358=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value357=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "18field.c", 1503))))))), come_pop_stackframe(), __exception_result_var_b335));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value357;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value358);
                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value358;
                __freed_obj__ = 0;
                while(_while_condtional20=1,                __freed_obj__ = 0, 
                _while_condtional20) {
                    range_array2_263=(_Bool)0;
                    __freed_obj__ = 0;
                    {
                        p_264=((struct sInfo*)come_null_check(info, "18field.c", 1507))->p;
                        __freed_obj__ = 0;
                        sline_265=((struct sInfo*)come_null_check(info, "18field.c", 1508))->sline;
                        __freed_obj__ = 0;
                        if(_if_conditional399=*((struct sInfo*)come_null_check(info, "18field.c", 1510))->p==91,                        __freed_obj__ = 0, 
                        _if_conditional399) {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1511))->p++;
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1512),skip_spaces_and_lf(info),come_pop_stackframe());
                            __freed_obj__ = 0;
                            no_comma_266=((struct sInfo*)come_null_check(info, "18field.c", 1514))->no_comma;
                            __freed_obj__ = 0;
                            no_output_err_267=((struct sInfo*)come_null_check(info, "18field.c", 1515))->no_output_err;
                            __freed_obj__ = 0;
                            no_output_come_code_268=((struct sInfo*)come_null_check(info, "18field.c", 1516))->no_output_come_code;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "18field.c", 1517))->no_output_err=(_Bool)1;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "18field.c", 1518))->no_comma=(_Bool)1;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "18field.c", 1519))->no_output_come_code=(_Bool)1;
                            __freed_obj__ = 0;
                            exp_269=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1520),__exception_result_var_b336=((struct sNode*)(right_value359=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b336));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value359;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "18field.c", 1521))->no_comma=no_comma_266;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "18field.c", 1522))->no_output_err=no_output_err_267;
                            __freed_obj__ = 0;
                            ((struct sInfo*)come_null_check(info, "18field.c", 1523))->no_output_come_code=no_output_come_code_268;
                            __freed_obj__ = 0;
                            if(_if_conditional400=*((struct sInfo*)come_null_check(info, "18field.c", 1525))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1525))->p+1)==46,                            __freed_obj__ = 0, 
                            _if_conditional400) {
                                range_array2_263=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(exp_269 && !__freed_obj__) { exp_269 = come_decrement_ref_count(exp_269, ((struct sNode*)exp_269)->finalize, ((struct sNode*)exp_269)->_protocol_obj, 0, 0, 0); } 
                        }
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "18field.c", 1530))->p=p_264;
                        __freed_obj__ = 0;
                        ((struct sInfo*)come_null_check(info, "18field.c", 1531))->sline=sline_265;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional401=range_array2_263,                    __freed_obj__ = 0, 
                    _if_conditional401) {
                        break;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional402=*((struct sInfo*)come_null_check(info, "18field.c", 1537))->p==91,                        __freed_obj__ = 0, 
                        _if_conditional402) {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1538))->p++;
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1539),skip_spaces_and_lf(info),come_pop_stackframe());
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1541),skip_pointer_attribute(info),come_pop_stackframe());
                            __freed_obj__ = 0;
                            node2_270=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1543),__exception_result_var_b337=((struct sNode*)(right_value360=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b337));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                            if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value360;
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1545),__exception_result_var_b338=list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(array_num_262, "18field.c", 1545)),(struct sNode*)come_increment_ref_count(node2_270)), come_pop_stackframe(), __exception_result_var_b338);
                            __freed_obj__ = 0;
                            if(_if_conditional403=*((struct sInfo*)come_null_check(info, "18field.c", 1547))->p==93,                            __freed_obj__ = 0, 
                            _if_conditional403) {
                                ((struct sInfo*)come_null_check(info, "18field.c", 1548))->p++;
                                __freed_obj__ = 0;
                                (come_push_stackframe("18field.c", 1549),skip_spaces_and_lf(info),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            else {
                                (come_push_stackframe("18field.c", 1552),err_msg(info,"require ] character"),come_pop_stackframe());
                                __freed_obj__ = 0;
                                (come_push_stackframe("18field.c", 1553),exit(2),come_pop_stackframe());
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(node2_270 && !__freed_obj__) { node2_270 = come_decrement_ref_count(node2_270, ((struct sNode*)node2_270)->finalize, ((struct sNode*)node2_270)->_protocol_obj, 0, 0, 0); } 
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
                if(_if_conditional404=*((struct sInfo*)come_null_check(info, "18field.c", 1561))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1561))->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional404) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1562))->p++;
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 1563),skip_spaces_and_lf(info),come_pop_stackframe());
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 1565),parse_sharp_v5(info),come_pop_stackframe());
                    __freed_obj__ = 0;
                    right_node_271=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1567),__exception_result_var_b339=((struct sNode*)(right_value361=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b339));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value361;
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 1569),parse_sharp_v5(info),come_pop_stackframe());
                    __freed_obj__ = 0;
                    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1571);
                    _inf_obj_value6=come_increment_ref_count((come_push_stackframe("18field.c", 1571),__exception_result_var_b340=((struct sStoreArrayNode*)(right_value363=sStoreArrayNode_initialize((struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value362=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "18field.c", 1571)))),node,(struct sNode*)come_increment_ref_count(right_node_271),(struct list$1sNodeph*)come_increment_ref_count(array_num_262),quote_260,info))), come_pop_stackframe(), __exception_result_var_b340));
                    _inf_value6->_protocol_obj=_inf_obj_value6;
                    _inf_value6->finalize=(void*)sStoreArrayNode_finalize;
                    _inf_value6->clone=(void*)sStoreArrayNode_clone;
                    _inf_value6->compile=(void*)sStoreArrayNode_compile;
                    _inf_value6->sline=(void*)sStoreArrayNode_sline;
                    _inf_value6->sname=(void*)sStoreArrayNode_sname;
                    _inf_value6->terminated=(void*)sStoreArrayNode_terminated;
                    _inf_value6->kind=(void*)sStoreArrayNode_kind;
                    __dec_obj184=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=_inf_value6)));
                    if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value362);
                    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value362;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value363);
                    if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value363;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value369);
                    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value369;
                    __freed_obj__ = 0;
                    if(right_node_271 && !__freed_obj__) { right_node_271 = come_decrement_ref_count(right_node_271, ((struct sNode*)right_node_271)->finalize, ((struct sNode*)right_node_271)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1574);
                    _inf_obj_value7=come_increment_ref_count((come_push_stackframe("18field.c", 1574),__exception_result_var_b341=((struct sLoadArrayNode*)(right_value371=sLoadArrayNode_initialize((struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value370=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "18field.c", 1574)))),node,(struct list$1sNodeph*)come_increment_ref_count(array_num_262),quote_260,info))), come_pop_stackframe(), __exception_result_var_b341));
                    _inf_value7->_protocol_obj=_inf_obj_value7;
                    _inf_value7->finalize=(void*)sLoadArrayNode_finalize;
                    _inf_value7->clone=(void*)sLoadArrayNode_clone;
                    _inf_value7->compile=(void*)sLoadArrayNode_compile;
                    _inf_value7->sline=(void*)sLoadArrayNode_sline;
                    _inf_value7->sname=(void*)sLoadArrayNode_sname;
                    _inf_value7->terminated=(void*)sLoadArrayNode_terminated;
                    _inf_value7->kind=(void*)sLoadArrayNode_kind;
                    __dec_obj188=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=_inf_value7)));
                    if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value370;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value371);
                    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value371;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value376);
                    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value376;
                    __freed_obj__ = 0;
                    __dec_obj189=node;
                    node=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1577),__exception_result_var_b342=((struct sNode*)(right_value377=exception_get_value((struct sNode*)come_increment_ref_count(node),info))), come_pop_stackframe(), __exception_result_var_b342));
                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value377);
                    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value377;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(array_num_262 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,array_num_262, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional425=*((struct sInfo*)come_null_check(info, "18field.c", 1579))->p==33&&*(((struct sInfo*)come_null_check(info, "18field.c", 1579))->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional425) {
                    ((struct sInfo*)come_null_check(info, "18field.c", 1580))->p++;
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 1581),skip_spaces_and_lf(info),come_pop_stackframe());
                    __freed_obj__ = 0;
                    (come_push_stackframe("18field.c", 1583),parse_sharp_v5(info),come_pop_stackframe());
                    __freed_obj__ = 0;
                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1585);
                    _inf_obj_value8=come_increment_ref_count((come_push_stackframe("18field.c", 1585),__exception_result_var_b343=((struct sNullCheckNode*)(right_value379=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value378=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1585)))),node,(_Bool)0,info))), come_pop_stackframe(), __exception_result_var_b343));
                    _inf_value8->_protocol_obj=_inf_obj_value8;
                    _inf_value8->finalize=(void*)sNullCheckNode_finalize;
                    _inf_value8->clone=(void*)sNullCheckNode_clone;
                    _inf_value8->compile=(void*)sNullCheckNode_compile;
                    _inf_value8->sline=(void*)sNullCheckNode_sline;
                    _inf_value8->sname=(void*)sNullCheckNode_sname;
                    _inf_value8->terminated=(void*)sNullCheckNode_terminated;
                    _inf_value8->kind=(void*)sNullCheckNode_kind;
                    __dec_obj192=node;
                    node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=_inf_value8)));
                    if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value378;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value379);
                    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value379;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value383);
                    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value383;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional433=(*((struct sInfo*)come_null_check(info, "18field.c", 1587))->p==46&&*(((struct sInfo*)come_null_check(info, "18field.c", 1587))->p+1)!=46)||(*((struct sInfo*)come_null_check(info, "18field.c", 1587))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1587))->p+1)==62),                    __freed_obj__ = 0, 
                    _if_conditional433) {
                        if(_if_conditional434=*((struct sInfo*)come_null_check(info, "18field.c", 1588))->p==46,                        __freed_obj__ = 0, 
                        _if_conditional434) {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1589))->p++;
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1590),skip_spaces_and_lf(info),come_pop_stackframe());
                            __freed_obj__ = 0;
                        }
                        else {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1593))->p+=2;
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1594),skip_spaces_and_lf(info),come_pop_stackframe());
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1597);
                        _inf_obj_value9=come_increment_ref_count((come_push_stackframe("18field.c", 1597),__exception_result_var_b344=((struct sNullCheckNode*)(right_value386=sNullCheckNode_initialize((struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value384=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "18field.c", 1597)))),((struct sNode*)(right_value385=sNode_clone(node))),(_Bool)1,info))), come_pop_stackframe(), __exception_result_var_b344));
                        _inf_value9->_protocol_obj=_inf_obj_value9;
                        _inf_value9->finalize=(void*)sNullCheckNode_finalize;
                        _inf_value9->clone=(void*)sNullCheckNode_clone;
                        _inf_value9->compile=(void*)sNullCheckNode_compile;
                        _inf_value9->sline=(void*)sNullCheckNode_sline;
                        _inf_value9->sname=(void*)sNullCheckNode_sname;
                        _inf_value9->terminated=(void*)sNullCheckNode_terminated;
                        _inf_value9->kind=(void*)sNullCheckNode_kind;
                        __dec_obj195=node;
                        node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=_inf_value9)));
                        if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value384;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value385);
                        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[1] = right_value385;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value386);
                        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value386;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value390);
                        if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value390;
                        __freed_obj__ = 0;
                        (come_push_stackframe("18field.c", 1599),parse_sharp_v5(info),come_pop_stackframe());
                        __freed_obj__ = 0;
                        field_name_276=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("18field.c", 1601),__exception_result_var_b345=((struct optional$2charphbool*)(right_value391=parse_word(info))), come_pop_stackframe(), __exception_result_var_b345)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value391);
                        if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value391;
                        __freed_obj__ = 0;
                        (come_push_stackframe("18field.c", 1603),parse_sharp_v5(info),come_pop_stackframe());
                        __freed_obj__ = 0;
                        if(_if_conditional442=*((struct sInfo*)come_null_check(info, "18field.c", 1605))->p==61&&*(((struct sInfo*)come_null_check(info, "18field.c", 1605))->p+1)!=61,                        __freed_obj__ = 0, 
                        _if_conditional442) {
                            ((struct sInfo*)come_null_check(info, "18field.c", 1606))->p++;
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1607),skip_spaces_and_lf(info),come_pop_stackframe());
                            __freed_obj__ = 0;
                            (come_push_stackframe("18field.c", 1609),parse_sharp_v5(info),come_pop_stackframe());
                            __freed_obj__ = 0;
                            right_node_277=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1611),__exception_result_var_b346=((struct sNode*)(right_value392=expression_v13(info))), come_pop_stackframe(), __exception_result_var_b346));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value392);
                            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value392;
                            __freed_obj__ = 0;
                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1613);
                            _inf_obj_value10=come_increment_ref_count((come_push_stackframe("18field.c", 1613),__exception_result_var_b347=((struct sStoreFieldNode*)(right_value394=sStoreFieldNode_initialize((struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value393=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "18field.c", 1613)))),node,(struct sNode*)come_increment_ref_count(right_node_277),(char*)come_increment_ref_count(field_name_276),info))), come_pop_stackframe(), __exception_result_var_b347));
                            _inf_value10->_protocol_obj=_inf_obj_value10;
                            _inf_value10->finalize=(void*)sStoreFieldNode_finalize;
                            _inf_value10->clone=(void*)sStoreFieldNode_clone;
                            _inf_value10->compile=(void*)sStoreFieldNode_compile;
                            _inf_value10->sline=(void*)sStoreFieldNode_sline;
                            _inf_value10->sname=(void*)sStoreFieldNode_sname;
                            _inf_value10->terminated=(void*)sStoreFieldNode_terminated;
                            _inf_value10->kind=(void*)sStoreFieldNode_kind;
                            __dec_obj200=node;
                            node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=_inf_value10)));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value393);
                            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value393;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value394);
                            if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value394;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value400);
                            if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { right_value400 = come_decrement_ref_count(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value400;
                            __freed_obj__ = 0;
                            if(right_node_277 && !__freed_obj__) { right_node_277 = come_decrement_ref_count(right_node_277, ((struct sNode*)right_node_277)->finalize, ((struct sNode*)right_node_277)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional453=*((struct sInfo*)come_null_check(info, "18field.c", 1615))->p==40||*((struct sInfo*)come_null_check(info, "18field.c", 1615))->p==123||(*((struct sInfo*)come_null_check(info, "18field.c", 1615))->p==45&&*(((struct sInfo*)come_null_check(info, "18field.c", 1615))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "18field.c", 1615))->p+2)==40),                            __freed_obj__ = 0, 
                            _if_conditional453) {
                                if(_if_conditional454=(come_push_stackframe("18field.c", 1616),__exception_result_var_b348=string_operator_equals(field_name_276,"if"), come_pop_stackframe(), __exception_result_var_b348),                                __freed_obj__ = 0, 
                                _if_conditional454) {
                                    __dec_obj201=node;
                                    node=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1617),__exception_result_var_b349=((struct sNode*)(right_value402=parse_if_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=sNode_clone(node)))),info))), come_pop_stackframe(), __exception_result_var_b349));
                                    if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
                                    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value401;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value402);
                                    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[1] = right_value402;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional455=(come_push_stackframe("18field.c", 1619),__exception_result_var_b350=string_operator_equals(field_name_276,"elif"), come_pop_stackframe(), __exception_result_var_b350),                                    __freed_obj__ = 0, 
                                    _if_conditional455) {
                                        __dec_obj202=node;
                                        node=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1620),__exception_result_var_b351=((struct sNode*)(right_value404=parse_elif_method_call((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNode_clone(node)))),info))), come_pop_stackframe(), __exception_result_var_b351));
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
                                        __dec_obj203=node;
                                        node=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1623),__exception_result_var_b352=((struct sNode*)(right_value406=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(node)))),(char*)come_increment_ref_count(field_name_276),info))), come_pop_stackframe(), __exception_result_var_b352));
                                        if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                                        if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value405;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
                                        if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[1] = right_value406;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "18field.c", 1627);
                                _inf_obj_value11=come_increment_ref_count((come_push_stackframe("18field.c", 1627),__exception_result_var_b353=((struct sLoadFieldNode*)(right_value408=sLoadFieldNode_initialize((struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value407=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "18field.c", 1627)))),node,(char*)come_increment_ref_count(field_name_276),info))), come_pop_stackframe(), __exception_result_var_b353));
                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                _inf_value11->finalize=(void*)sLoadFieldNode_finalize;
                                _inf_value11->clone=(void*)sLoadFieldNode_clone;
                                _inf_value11->compile=(void*)sLoadFieldNode_compile;
                                _inf_value11->sline=(void*)sLoadFieldNode_sline;
                                _inf_value11->sname=(void*)sLoadFieldNode_sname;
                                _inf_value11->terminated=(void*)sLoadFieldNode_terminated;
                                _inf_value11->kind=(void*)sLoadFieldNode_kind;
                                __dec_obj207=node;
                                node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=_inf_value11)));
                                if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                                if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value407;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value408);
                                if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value408;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value413);
                                if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value413;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(field_name_276 && !__freed_obj__) { field_name_276 = come_decrement_ref_count(field_name_276, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        node2_280=(struct sNode*)come_increment_ref_count((come_push_stackframe("18field.c", 1631),__exception_result_var_b354=((struct sNode*)(right_value414=post_position_operator2_v19((struct sNode*)come_increment_ref_count(node),info))), come_pop_stackframe(), __exception_result_var_b354));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                        if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value414;
                        __freed_obj__ = 0;
                        if(_if_conditional464=node2_280==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional464) {
                            if(node2_280 && !__freed_obj__) { node2_280 = come_decrement_ref_count(node2_280, ((struct sNode*)node2_280)->finalize, ((struct sNode*)node2_280)->_protocol_obj, 0, 0, 0); } 
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __dec_obj208=node;
                        node=(struct sNode*)come_increment_ref_count(node2_280);
                        if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        if(node2_280 && !__freed_obj__) { node2_280 = come_decrement_ref_count(node2_280, ((struct sNode*)node2_280)->finalize, ((struct sNode*)node2_280)->_protocol_obj, 0, 0, 0); } 
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
    __result193__ = __result_obj__ = node;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result193__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional384;
void* right_value345;
struct list_item$1sNodeph* litem_254;
struct sNode* __dec_obj173;
_Bool _if_conditional385;
void* right_value346;
struct list_item$1sNodeph* litem_255;
struct sNode* __dec_obj174;
void* right_value347;
struct list_item$1sNodeph* litem_256;
struct sNode* __dec_obj175;
struct list$1sNodeph* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value345, 0, sizeof(void*));
memset(&litem_254, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value346, 0, sizeof(void*));
memset(&litem_255, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value347, 0, sizeof(void*));
memset(&litem_256, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional384=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 275))->len==0,                __freed_obj__ = 0, 
                _if_conditional384) {
                    litem_254=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 276))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value345;
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_254, "./comelang2.h", 278))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sNodeph*)come_null_check(litem_254, "./comelang2.h", 279))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj173=((struct list_item$1sNodeph*)come_null_check(litem_254, "./comelang2.h", 280))->item;
                    ((struct list_item$1sNodeph*)come_null_check(litem_254, "./comelang2.h", 280))->item=(struct sNode*)come_increment_ref_count(item);
                    if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 282))->tail=litem_254;
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 283))->head=litem_254;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional385=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 285))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        litem_255=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 286))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value346;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_255, "./comelang2.h", 288))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 288))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_255, "./comelang2.h", 289))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj174=((struct list_item$1sNodeph*)come_null_check(litem_255, "./comelang2.h", 290))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_255, "./comelang2.h", 290))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 292))->tail=litem_255;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 293))->head, "./comelang2.h", 293))->next=litem_255;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_256=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 296))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                        if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value347;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_256, "./comelang2.h", 298))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 298))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_256, "./comelang2.h", 299))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj175=((struct list_item$1sNodeph*)come_null_check(litem_256, "./comelang2.h", 300))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_256, "./comelang2.h", 300))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 302))->tail, "./comelang2.h", 302))->next=litem_256;
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 303))->tail=litem_256;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 306))->len++;
                __freed_obj__ = 0;
                __result176__ = __result_obj__ = self;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = 0;
                return __result176__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional387;
int default_value_258;
void* __exception_result_var_b333;
int __result177__;
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_258, 0, sizeof(int));
                    if(_if_conditional387=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional387) {
                        __freed_obj__ = 0;
                        (come_push_stackframe("./comelang2.h", 63),__exception_result_var_b333=memset(&default_value_258,0,sizeof(int)), come_pop_stackframe(), __exception_result_var_b333);
                        __freed_obj__ = 0;
                        __result177__ = default_value_258;
                        __freed_obj__ = 0;
                        return __result177__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result178__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 67))->v1;
                        __freed_obj__ = 0;
                        return __result178__;
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
_Bool _if_conditional388;
_Bool _if_conditional389;
_Bool _if_conditional390;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional388=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional388) {
                    if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional389=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional389) {
                    if(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional390=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_finalize", 2))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional390) {
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
_Bool _if_conditional391;
struct sLoadRangeArrayNode* __result179__;
void* right_value352;
struct sLoadRangeArrayNode* result_259;
_Bool _if_conditional392;
void* right_value353;
struct sNode* __dec_obj176;
_Bool _if_conditional393;
void* right_value354;
struct list$1sNodeph* __dec_obj177;
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
void* right_value355;
char* __dec_obj178;
struct sLoadRangeArrayNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value352, 0, sizeof(void*));
memset(&result_259, 0, sizeof(struct sLoadRangeArrayNode*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
                if(_if_conditional391=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional391) {
                    __result179__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result179__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_259=(struct sLoadRangeArrayNode*)come_increment_ref_count(((struct sLoadRangeArrayNode*)(right_value352=(struct sLoadRangeArrayNode*)come_calloc(1, sizeof(struct sLoadRangeArrayNode)*(1), "sLoadRangeArrayNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value352;
                __freed_obj__ = 0;
                if(_if_conditional392=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 4))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional392) {
                    __dec_obj176=((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 4))->mLeft;
                    ((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=sNode_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 4))->mLeft))));
                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
                    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value353;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional393=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional393) {
                    __dec_obj177=((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 5))->mArrayNum;
                    ((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value354=list$1sNodephp_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 5))->mArrayNum))));
                    if(__dec_obj177) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj177, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value354;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional394=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional394) {
                    ((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 6))->mQuote=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 6))->mQuote;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional395=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional395) {
                    ((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 7))->sline=((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 7))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional396=self!=((void*)0)&&((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 8))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional396) {
                    __dec_obj178=((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 8))->sname;
                    ((struct sLoadRangeArrayNode*)come_null_check(result_259, "sLoadRangeArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value355=string_clone(((struct sLoadRangeArrayNode*)come_null_check(self, "sLoadRangeArrayNode_clone", 8))->sname))));
                    if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value355;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result180__ = __result_obj__ = result_259;
                if(result_259 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result180__;
                __freed_obj__ = 0;
                if(result_259 && !__freed_obj__) { come_call_finalizer(sLoadRangeArrayNode_finalize,result_259, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreArrayNode_finalize(struct sStoreArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional405;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional405=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional405) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional406=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional406) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional407=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional407) {
                            if(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 2))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional408=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional408) {
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
_Bool _if_conditional409;
struct sStoreArrayNode* __result181__;
void* right_value364;
struct sStoreArrayNode* result_272;
_Bool _if_conditional410;
void* right_value365;
struct sNode* __dec_obj180;
_Bool _if_conditional411;
void* right_value366;
struct sNode* __dec_obj181;
_Bool _if_conditional412;
void* right_value367;
struct list$1sNodeph* __dec_obj182;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value368;
char* __dec_obj183;
struct sStoreArrayNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value364, 0, sizeof(void*));
memset(&result_272, 0, sizeof(struct sStoreArrayNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
                        if(_if_conditional409=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional409) {
                            __result181__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result181__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_272=(struct sStoreArrayNode*)come_increment_ref_count(((struct sStoreArrayNode*)(right_value364=(struct sStoreArrayNode*)come_calloc(1, sizeof(struct sStoreArrayNode)*(1), "sStoreArrayNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value364;
                        __freed_obj__ = 0;
                        if(_if_conditional410=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 4))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional410) {
                            __dec_obj180=((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 4))->mLeft;
                            ((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value365;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional411=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional411) {
                            __dec_obj181=((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 5))->mRight;
                            ((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=sNode_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 5))->mRight))));
                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value366;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional412=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional412) {
                            __dec_obj182=((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 6))->mArrayNum;
                            ((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 6))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value367=list$1sNodephp_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 6))->mArrayNum))));
                            if(__dec_obj182) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj182, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value367;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional413=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional413) {
                            ((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 7))->mQuote=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 7))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional414=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional414) {
                            ((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 8))->sline=((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional415=self!=((void*)0)&&((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional415) {
                            __dec_obj183=((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 9))->sname;
                            ((struct sStoreArrayNode*)come_null_check(result_272, "sStoreArrayNode_clone", 9))->sname=(char*)come_increment_ref_count(((char*)(right_value368=string_clone(((struct sStoreArrayNode*)come_null_check(self, "sStoreArrayNode_clone", 9))->sname))));
                            if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value368;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result182__ = __result_obj__ = result_272;
                        if(result_272 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_272, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result182__;
                        __freed_obj__ = 0;
                        if(result_272 && !__freed_obj__) { come_call_finalizer(sStoreArrayNode_finalize,result_272, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadArrayNode_finalize(struct sLoadArrayNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional416=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional416) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional417=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional417) {
                            if(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 1))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional418=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_finalize", 2))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional418) {
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
_Bool _if_conditional419;
struct sLoadArrayNode* __result183__;
void* right_value372;
struct sLoadArrayNode* result_273;
_Bool _if_conditional420;
void* right_value373;
struct sNode* __dec_obj185;
_Bool _if_conditional421;
void* right_value374;
struct list$1sNodeph* __dec_obj186;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value375;
char* __dec_obj187;
struct sLoadArrayNode* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value372, 0, sizeof(void*));
memset(&result_273, 0, sizeof(struct sLoadArrayNode*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
                        if(_if_conditional419=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional419) {
                            __result183__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result183__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_273=(struct sLoadArrayNode*)come_increment_ref_count(((struct sLoadArrayNode*)(right_value372=(struct sLoadArrayNode*)come_calloc(1, sizeof(struct sLoadArrayNode)*(1), "sLoadArrayNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                        if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value372;
                        __freed_obj__ = 0;
                        if(_if_conditional420=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 4))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional420) {
                            __dec_obj185=((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 4))->mLeft;
                            ((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=sNode_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 4))->mLeft))));
                            if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value373;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional421=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mArrayNum!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional421) {
                            __dec_obj186=((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 5))->mArrayNum;
                            ((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 5))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value374=list$1sNodephp_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 5))->mArrayNum))));
                            if(__dec_obj186) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj186, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value374;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional422=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional422) {
                            ((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 6))->mQuote=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional423=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            ((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 7))->sline=((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional424=self!=((void*)0)&&((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional424) {
                            __dec_obj187=((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 8))->sname;
                            ((struct sLoadArrayNode*)come_null_check(result_273, "sLoadArrayNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(((struct sLoadArrayNode*)come_null_check(self, "sLoadArrayNode_clone", 8))->sname))));
                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value375;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result184__ = __result_obj__ = result_273;
                        if(result_273 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_273, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result184__;
                        __freed_obj__ = 0;
                        if(result_273 && !__freed_obj__) { come_call_finalizer(sLoadArrayNode_finalize,result_273, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNullCheckNode_finalize(struct sNullCheckNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional435;
_Bool _if_conditional436;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional435=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional435) {
                                if(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional436=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_finalize", 1))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional436) {
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
_Bool _if_conditional437;
struct sNullCheckNode* __result187__;
void* right_value387;
struct sNullCheckNode* result_275;
_Bool _if_conditional438;
void* right_value388;
struct sNode* __dec_obj193;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value389;
char* __dec_obj194;
struct sNullCheckNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value387, 0, sizeof(void*));
memset(&result_275, 0, sizeof(struct sNullCheckNode*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
                            if(_if_conditional437=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional437) {
                                __result187__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result187__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_275=(struct sNullCheckNode*)come_increment_ref_count(((struct sNullCheckNode*)(right_value387=(struct sNullCheckNode*)come_calloc(1, sizeof(struct sNullCheckNode)*(1), "sNullCheckNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value387;
                            __freed_obj__ = 0;
                            if(_if_conditional438=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 4))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional438) {
                                __dec_obj193=((struct sNullCheckNode*)come_null_check(result_275, "sNullCheckNode_clone", 4))->mLeft;
                                ((struct sNullCheckNode*)come_null_check(result_275, "sNullCheckNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=sNode_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 4))->mLeft))));
                                if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
                                if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value388;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional439=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional439) {
                                ((struct sNullCheckNode*)come_null_check(result_275, "sNullCheckNode_clone", 5))->mOnlyNullCecker=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 5))->mOnlyNullCecker;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional440=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional440) {
                                ((struct sNullCheckNode*)come_null_check(result_275, "sNullCheckNode_clone", 6))->sline=((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 6))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional441=self!=((void*)0)&&((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 7))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional441) {
                                __dec_obj194=((struct sNullCheckNode*)come_null_check(result_275, "sNullCheckNode_clone", 7))->sname;
                                ((struct sNullCheckNode*)come_null_check(result_275, "sNullCheckNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(((struct sNullCheckNode*)come_null_check(self, "sNullCheckNode_clone", 7))->sname))));
                                if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
                                if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value389;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result188__ = __result_obj__ = result_275;
                            if(result_275 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result188__;
                            __freed_obj__ = 0;
                            if(result_275 && !__freed_obj__) { come_call_finalizer(sNullCheckNode_finalize,result_275, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sStoreFieldNode_finalize(struct sStoreFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional443=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional443) {
                                    if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional444=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional444) {
                                    if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional445=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional445) {
                                    if(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName && !__freed_obj__) { ((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName = come_decrement_ref_count(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional446=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional446) {
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
_Bool _if_conditional447;
struct sStoreFieldNode* __result189__;
void* right_value395;
struct sStoreFieldNode* result_278;
_Bool _if_conditional448;
void* right_value396;
struct sNode* __dec_obj196;
_Bool _if_conditional449;
void* right_value397;
struct sNode* __dec_obj197;
_Bool _if_conditional450;
void* right_value398;
char* __dec_obj198;
_Bool _if_conditional451;
_Bool _if_conditional452;
void* right_value399;
char* __dec_obj199;
struct sStoreFieldNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value395, 0, sizeof(void*));
memset(&result_278, 0, sizeof(struct sStoreFieldNode*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
                                if(_if_conditional447=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional447) {
                                    __result189__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result189__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_278=(struct sStoreFieldNode*)come_increment_ref_count(((struct sStoreFieldNode*)(right_value395=(struct sStoreFieldNode*)come_calloc(1, sizeof(struct sStoreFieldNode)*(1), "sStoreFieldNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value395);
                                if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value395;
                                __freed_obj__ = 0;
                                if(_if_conditional448=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 4))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional448) {
                                    __dec_obj196=((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 4))->mLeft;
                                    ((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 4))->mLeft))));
                                    if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value396);
                                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value396;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional449=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional449) {
                                    __dec_obj197=((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 5))->mRight;
                                    ((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=sNode_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 5))->mRight))));
                                    if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                                    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value397;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional450=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mName!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional450) {
                                    __dec_obj198=((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 6))->mName;
                                    ((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 6))->mName=(char*)come_increment_ref_count(((char*)(right_value398=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 6))->mName))));
                                    if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
                                    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value398;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional451=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional451) {
                                    ((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 7))->sline=((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 7))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional452=self!=((void*)0)&&((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional452) {
                                    __dec_obj199=((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 8))->sname;
                                    ((struct sStoreFieldNode*)come_null_check(result_278, "sStoreFieldNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(((struct sStoreFieldNode*)come_null_check(self, "sStoreFieldNode_clone", 8))->sname))));
                                    if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
                                    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value399;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result190__ = __result_obj__ = result_278;
                                if(result_278 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result190__;
                                __freed_obj__ = 0;
                                if(result_278 && !__freed_obj__) { come_call_finalizer(sStoreFieldNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLoadFieldNode_finalize(struct sLoadFieldNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional456;
_Bool _if_conditional457;
_Bool _if_conditional458;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional456=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional456) {
                                        if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional457=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional457) {
                                        if(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName && !__freed_obj__) { ((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName = come_decrement_ref_count(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 1))->mName, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional458=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_finalize", 2))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional458) {
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
_Bool _if_conditional459;
struct sLoadFieldNode* __result191__;
void* right_value409;
struct sLoadFieldNode* result_279;
_Bool _if_conditional460;
void* right_value410;
struct sNode* __dec_obj204;
_Bool _if_conditional461;
void* right_value411;
char* __dec_obj205;
_Bool _if_conditional462;
_Bool _if_conditional463;
void* right_value412;
char* __dec_obj206;
struct sLoadFieldNode* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value409, 0, sizeof(void*));
memset(&result_279, 0, sizeof(struct sLoadFieldNode*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
                                    if(_if_conditional459=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional459) {
                                        __result191__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result191__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_279=(struct sLoadFieldNode*)come_increment_ref_count(((struct sLoadFieldNode*)(right_value409=(struct sLoadFieldNode*)come_calloc(1, sizeof(struct sLoadFieldNode)*(1), "sLoadFieldNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value409);
                                    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value409;
                                    __freed_obj__ = 0;
                                    if(_if_conditional460=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 4))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional460) {
                                        __dec_obj204=((struct sLoadFieldNode*)come_null_check(result_279, "sLoadFieldNode_clone", 4))->mLeft;
                                        ((struct sLoadFieldNode*)come_null_check(result_279, "sLoadFieldNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=sNode_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 4))->mLeft))));
                                        if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value410);
                                        if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value410;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional461=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mName!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional461) {
                                        __dec_obj205=((struct sLoadFieldNode*)come_null_check(result_279, "sLoadFieldNode_clone", 5))->mName;
                                        ((struct sLoadFieldNode*)come_null_check(result_279, "sLoadFieldNode_clone", 5))->mName=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 5))->mName))));
                                        if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count(__dec_obj205, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
                                        if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value411;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional462=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional462) {
                                        ((struct sLoadFieldNode*)come_null_check(result_279, "sLoadFieldNode_clone", 6))->sline=((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 6))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional463=self!=((void*)0)&&((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional463) {
                                        __dec_obj206=((struct sLoadFieldNode*)come_null_check(result_279, "sLoadFieldNode_clone", 7))->sname;
                                        ((struct sLoadFieldNode*)come_null_check(result_279, "sLoadFieldNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value412=string_clone(((struct sLoadFieldNode*)come_null_check(self, "sLoadFieldNode_clone", 7))->sname))));
                                        if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                                        if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value412;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result192__ = __result_obj__ = result_279;
                                    if(result_279 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result192__;
                                    __freed_obj__ = 0;
                                    if(result_279 && !__freed_obj__) { come_call_finalizer(sLoadFieldNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 0, 0); }
}

