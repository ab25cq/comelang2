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
struct sPlusPlusNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sMinusMinusNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
};
struct sPlusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sMinusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sMultEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sDivEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sModEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sLShifEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sRShiftEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sXorEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sOrEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sAndEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sExpEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
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

void skip_pointer_attribute(struct sInfo* info);

struct sNode* parse_normal_block(struct sInfo* info);

void check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, _Bool check_no_pointer, struct sInfo* info);

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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, struct sInfo* info);

static struct sNode* sNode_clone(struct sNode* self);
_Bool sPlusPlusNode_terminated();

char* sPlusPlusNode_kind();

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
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
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info);

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info);

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, struct sInfo* info);

_Bool sMinusMinusNode_terminated();

char* sMinusMinusNode_kind();

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info);

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sPlusEqualNode_terminated();

char* sPlusEqualNode_kind();

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info);

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sMinusEqualNode_terminated();

char* sMinusEqualNode_kind();

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info);

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sMultEqualNode_terminated();

char* sMultEqualNode_kind();

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info);

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sDivEqualNode_terminated();

char* sDivEqualNode_kind();

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info);

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sModEqualNode_terminated();

char* sModEqualNode_kind();

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info);

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sLShifEqualNode_terminated();

char* sLShifEqualNode_kind();

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info);

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sRShiftEqualNode_terminated();

char* sRShiftEqualNode_kind();

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info);

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sXorEqualNode_terminated();

char* sXorEqualNode_kind();

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info);

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sOrEqualNode_terminated();

char* sOrEqualNode_kind();

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info);

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sAndEqualNode_terminated();

char* sAndEqualNode_kind();

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info);

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sExpEqualNode_terminated();

char* sExpEqualNode_kind();

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info);

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info);

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self);
static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self);
static void sMinusMinusNode_finalize(struct sMinusMinusNode* self);
static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self);
static void sPlusEqualNode_finalize(struct sPlusEqualNode* self);
static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self);
static void sMinusEqualNode_finalize(struct sMinusEqualNode* self);
static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self);
static void sMultEqualNode_finalize(struct sMultEqualNode* self);
static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self);
static void sDivEqualNode_finalize(struct sDivEqualNode* self);
static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self);
static void sModEqualNode_finalize(struct sModEqualNode* self);
static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self);
static void sLShifEqualNode_finalize(struct sLShifEqualNode* self);
static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self);
static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self);
static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self);
static void sXorEqualNode_finalize(struct sXorEqualNode* self);
static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self);
static void sAndEqualNode_finalize(struct sAndEqualNode* self);
static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self);
static void sOrEqualNode_finalize(struct sOrEqualNode* self);
static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self);
static void sExpEqualNode_finalize(struct sExpEqualNode* self);
static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self);
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







struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
char* __dec_obj1;
void* right_value2;
struct sNode* __dec_obj2;
struct sPlusPlusNode* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&right_value2, 0, sizeof(void*));
    ((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 13))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 13))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 14))->sname;
    ((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 14))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 14))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj2=((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 16))->mLeft;
    ((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 16))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value2=sNode_clone(left))));
    if(__dec_obj2) { __dec_obj2 = come_decrement_ref_count(__dec_obj2, ((struct sNode*)__dec_obj2)->finalize, ((struct sNode*)__dec_obj2)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { right_value2 = come_decrement_ref_count(right_value2, ((struct sNode*)right_value2)->finalize, ((struct sNode*)right_value2)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value2;
    __freed_obj__ = 0;
    __result9__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional1;
struct sNode* __result7__;
void* right_value1;
struct sNode* result_0;
_Bool _if_conditional2;
_Bool _if_conditional3;
_Bool _if_conditional4;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional8;
_Bool _if_conditional9;
struct sNode* __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sNode*));
        if(_if_conditional1=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional1) {
            __result7__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result7__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_0=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
        if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { right_value1 = come_decrement_ref_count(right_value1, ((struct sNode*)right_value1)->finalize, ((struct sNode*)right_value1)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value1;
        __freed_obj__ = 0;
        if(_if_conditional2=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional2) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional3=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional3) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional4=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional4) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional5=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional5) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional6=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional6) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional7=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional7) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional8=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional8) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional9=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional9) {
            ((struct sNode*)come_null_check(result_0, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result8__ = __result_obj__ = result_0;
        if(result_0 && !__freed_obj__) { result_0 = come_decrement_ref_count(result_0, ((struct sNode*)result_0)->finalize, ((struct sNode*)result_0)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result8__;
        __freed_obj__ = 0;
        if(result_0 && !__freed_obj__) { result_0 = come_decrement_ref_count(result_0, ((struct sNode*)result_0)->finalize, ((struct sNode*)result_0)->_protocol_obj, 0, 0, 0); } 
}

_Bool sPlusPlusNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result10__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}

char* sPlusPlusNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value3;
char* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
    __result11__ = __result_obj__ = ((char*)(right_value3=__builtin_string("sPlusPlusNode")));
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_1;
_Bool _if_conditional12;
_Bool __result12__;
void* right_value4;
struct CVALUE* left_value_2;
void* right_value5;
struct CVALUE* come_value_9;
void* right_value6;
char* __dec_obj3;
void* right_value40;
struct sType* __dec_obj26;
_Bool __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_1, 0, sizeof(struct sNode*));
memset(&right_value4, 0, sizeof(void*));
memset(&left_value_2, 0, sizeof(struct CVALUE*));
memset(&right_value5, 0, sizeof(void*));
memset(&come_value_9, 0, sizeof(struct CVALUE*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
    left_1=((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 33))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional12=!((struct sNode*)come_null_check(left_1, "19eq.c", 39))->compile(((struct sNode*)come_null_check(left_1, "19eq.c", 39))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional12) {
        __result12__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result12__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_2=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value4=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_9=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value5=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 42))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value5;
    __freed_obj__ = 0;
    __dec_obj3=((struct CVALUE*)come_null_check(come_value_9, "19eq.c", 44))->c_value;
    ((struct CVALUE*)come_null_check(come_value_9, "19eq.c", 44))->c_value=(char*)come_increment_ref_count(((char*)(right_value6=xsprintf("%s++",((struct CVALUE*)come_null_check(left_value_2, "19eq.c", 44))->c_value))));
    if(__dec_obj3) { __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { right_value6 = come_decrement_ref_count(right_value6, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value6;
    __freed_obj__ = 0;
    __dec_obj26=((struct CVALUE*)come_null_check(come_value_9, "19eq.c", 45))->type;
    ((struct CVALUE*)come_null_check(come_value_9, "19eq.c", 45))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value40=sType_clone(((struct CVALUE*)come_null_check(left_value_2, "19eq.c", 45))->type))));
    if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value40);
    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value40;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_9, "19eq.c", 46))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 48))->stack, "19eq.c", 48)),(struct CVALUE*)come_increment_ref_count(come_value_9));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_9, "19eq.c", 50))->c_value);
    __freed_obj__ = 0;
    __result30__ = (_Bool)1;
    if(left_value_2 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_2, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_9 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result30__;
    __freed_obj__ = 0;
    if(left_value_2 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_2, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_9 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_9, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional13=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional13) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional14=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional14) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional26;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional29;
_Bool _if_conditional30;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional15) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional17) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional18) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional24) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional27=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional27) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional28=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional28) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional29) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional16=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional16) {
                            if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sTypeph* it_3;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sTypeph*));
                        it_3=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional1=it_3!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional1) {
                            prev_it_4=it_3;
                            __freed_obj__ = 0;
                            it_3=((struct list_item$1sTypeph*)come_null_check(it_3, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_4 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_4, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional20=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional20) {
                                    if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_5;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1sNodeph*));
                        it_5=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_5!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
                            prev_it_6=it_5;
                            __freed_obj__ = 0;
                            it_5=((struct list_item$1sNodeph*)come_null_check(it_5, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_6 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional22=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional22) {
                                    if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charph* it_7;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1charph*));
                        it_7=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_7!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_8=it_7;
                            __freed_obj__ = 0;
                            it_7=((struct list_item$1charph*)come_null_check(it_7, "./comelang2.h", 172))->next;
                            __freed_obj__ = 0;
                            if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional25=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional25) {
                                    if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional31;
struct sType* __result13__;
void* right_value7;
struct sType* result_10;
_Bool _if_conditional32;
_Bool _if_conditional33;
void* right_value10;
struct tuple1$1sTypeph* __dec_obj5;
_Bool _if_conditional37;
void* right_value11;
struct tuple1$1sTypeph* __dec_obj6;
_Bool _if_conditional38;
void* right_value12;
char* __dec_obj7;
_Bool _if_conditional39;
void* right_value19;
struct list$1sTypeph* __dec_obj11;
_Bool _if_conditional43;
void* right_value26;
struct list$1sNodeph* __dec_obj15;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value27;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional49;
void* right_value34;
struct list$1charph* __dec_obj20;
_Bool _if_conditional53;
void* right_value35;
struct tuple1$1sTypeph* __dec_obj21;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value36;
struct sNode* __dec_obj22;
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
_Bool _if_conditional79;
void* right_value37;
struct sNode* __dec_obj23;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value38;
char* __dec_obj24;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
void* right_value39;
char* __dec_obj25;
struct sType* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value7, 0, sizeof(void*));
memset(&result_10, 0, sizeof(struct sType*));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value11, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
        if(_if_conditional31=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional31) {
            __result13__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result13__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_10=(struct sType*)come_increment_ref_count(((struct sType*)(right_value7=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
        if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value7;
        __freed_obj__ = 0;
        if(_if_conditional32=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional32) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional33=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional33) {
            __dec_obj5=((struct sType*)come_null_check(result_10, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_10, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value10=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj5) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
            if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value10;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional37=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional37) {
            __dec_obj6=((struct sType*)come_null_check(result_10, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_10, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj6) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value11;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional38=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional38) {
            __dec_obj7=((struct sType*)come_null_check(result_10, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_10, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value12=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value12;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional39=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional39) {
            __dec_obj11=((struct sType*)come_null_check(result_10, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_10, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj11) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
            if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value19;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional43) {
            __dec_obj15=((struct sType*)come_null_check(result_10, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_10, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj15) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value26;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional47=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional47) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj16=((struct sType*)come_null_check(result_10, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_10, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value27=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj16) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value27;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            __dec_obj20=((struct sType*)come_null_check(result_10, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_10, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value34=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj20) { come_call_finalizer(list$1charph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value34;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            __dec_obj21=((struct sType*)come_null_check(result_10, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_10, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value35=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj21) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value35;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            __dec_obj22=((struct sType*)come_null_check(result_10, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_10, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value36=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, ((struct sNode*)right_value36)->finalize, ((struct sNode*)right_value36)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value36;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            __dec_obj23=((struct sType*)come_null_check(result_10, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_10, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value37=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
            if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, ((struct sNode*)right_value37)->finalize, ((struct sNode*)right_value37)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value37;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            __dec_obj24=((struct sType*)come_null_check(result_10, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_10, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value38=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional88=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional88) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional89=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional89) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional90=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional90) {
            ((struct sType*)come_null_check(result_10, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional91=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional91) {
            __dec_obj25=((struct sType*)come_null_check(result_10, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_10, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value39=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result28__ = __result_obj__ = result_10;
        if(result_10 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_10, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result28__;
        __freed_obj__ = 0;
        if(result_10 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_10, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
struct tuple1$1sTypeph* __result14__;
void* right_value8;
struct tuple1$1sTypeph* result_11;
_Bool _if_conditional36;
void* right_value9;
struct sType* __dec_obj4;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&result_11, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value9, 0, sizeof(void*));
                if(_if_conditional34=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional34) {
                    __result14__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_11=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value8=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
                if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value8;
                __freed_obj__ = 0;
                if(_if_conditional36=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional36) {
                    __dec_obj4=((struct tuple1$1sTypeph*)come_null_check(result_11, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_11, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value9=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj4) { come_call_finalizer(sType_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
                    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value9;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result15__ = __result_obj__ = result_11;
                if(result_11 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result15__;
                __freed_obj__ = 0;
                if(result_11 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional35;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional35=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional35) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
struct list$1sTypeph* __result16__;
void* right_value13;
void* right_value14;
struct list$1sTypeph* result_12;
struct list_item$1sTypeph* it_13;
_Bool _while_condtional4;
void* right_value18;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct list$1sTypeph*));
memset(&it_13, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value18, 0, sizeof(void*));
                if(_if_conditional40=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional40) {
                    __result16__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result16__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_12=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value14=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value13=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value13;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value14;
                __freed_obj__ = 0;
                it_13=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_13!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_12, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_13, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value18;
                    __freed_obj__ = 0;
                    it_13=((struct list_item$1sTypeph*)come_null_check(it_13, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result19__ = __result_obj__ = result_12;
                if(result_12 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
                if(result_12 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result17__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result17__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
void* right_value15;
struct list_item$1sTypeph* litem_14;
struct sType* __dec_obj8;
_Bool _if_conditional42;
void* right_value16;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj9;
void* right_value17;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj10;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional41=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            litem_14=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value15=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value15;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_14, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_14, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_14, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_14, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_14;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_14;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional42=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional42) {
                                litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value16=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj9=((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_15, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_15;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_15;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value17=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value17;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_16, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_16;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_16;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result18__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result18__;
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
_Bool _if_conditional44;
struct list$1sNodeph* __result20__;
void* right_value20;
void* right_value21;
struct list$1sNodeph* result_17;
struct list_item$1sNodeph* it_18;
_Bool _while_condtional5;
void* right_value25;
struct list$1sNodeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&result_17, 0, sizeof(struct list$1sNodeph*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value25, 0, sizeof(void*));
                if(_if_conditional44=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional44) {
                    __result20__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_17=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value21=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value20=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value20;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value21;
                __freed_obj__ = 0;
                it_18=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_18!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_17, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value25=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_18, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                    if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, ((struct sNode*)right_value25)->finalize, ((struct sNode*)right_value25)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value25;
                    __freed_obj__ = 0;
                    it_18=((struct list_item$1sNodeph*)come_null_check(it_18, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result23__ = __result_obj__ = result_17;
                if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result23__;
                __freed_obj__ = 0;
                if(result_17 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_17, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result21__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional45;
void* right_value22;
struct list_item$1sNodeph* litem_19;
struct sNode* __dec_obj12;
_Bool _if_conditional46;
void* right_value23;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj13;
void* right_value24;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj14;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value23, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional45=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional45) {
                            litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value22=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value22;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_19, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_19;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_19;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional46=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional46) {
                                litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value23=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value23;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj13=((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_20, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, ((struct sNode*)__dec_obj13)->finalize, ((struct sNode*)__dec_obj13)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_20;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_20;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value24=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value24;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj14=((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_21, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_21;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_21;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result22__;
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

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional50;
struct list$1charph* __result24__;
void* right_value28;
void* right_value29;
struct list$1charph* result_22;
struct list_item$1charph* it_23;
_Bool _while_condtional6;
void* right_value33;
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&result_22, 0, sizeof(struct list$1charph*));
memset(&it_23, 0, sizeof(struct list_item$1charph*));
memset(&right_value33, 0, sizeof(void*));
                if(_if_conditional50=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional50) {
                    __result24__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result24__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_22=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value29=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value28=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value29);
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value29;
                __freed_obj__ = 0;
                it_23=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_23!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_22, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct list_item$1charph*)come_null_check(it_23, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value33;
                    __freed_obj__ = 0;
                    it_23=((struct list_item$1charph*)come_null_check(it_23, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result27__ = __result_obj__ = result_22;
                if(result_22 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_22, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result27__;
                __freed_obj__ = 0;
                if(result_22 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_22, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result25__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
void* right_value30;
struct list_item$1charph* litem_24;
char* __dec_obj17;
_Bool _if_conditional52;
void* right_value31;
struct list_item$1charph* litem_25;
char* __dec_obj18;
void* right_value32;
struct list_item$1charph* litem_26;
char* __dec_obj19;
struct list$1charph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1charph*));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional51=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional51) {
                            litem_24=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value30=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value30;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_24, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_24, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj17=((struct list_item$1charph*)come_null_check(litem_24, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_24, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_24;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_24;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional52=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional52) {
                                litem_25=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value31=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_25, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_25, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj18=((struct list_item$1charph*)come_null_check(litem_25, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_25, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_25;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_25;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value32=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value32;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj19=((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_26, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_26;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_26;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result26__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result26__;
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

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
void* right_value41;
struct list_item$1CVALUEph* litem_27;
struct CVALUE* __dec_obj27;
_Bool _if_conditional94;
void* right_value42;
struct list_item$1CVALUEph* litem_28;
struct CVALUE* __dec_obj28;
void* right_value43;
struct list_item$1CVALUEph* litem_29;
struct CVALUE* __dec_obj29;
struct list$1CVALUEph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value43, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional92=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional92) {
            litem_27=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value41=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_27, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_27, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj27=((struct list_item$1CVALUEph*)come_null_check(litem_27, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_27, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj27) { come_call_finalizer(CVALUE_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_27;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_27;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional94=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional94) {
                litem_28=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value42=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value42;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_28, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_28, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj28=((struct list_item$1CVALUEph*)come_null_check(litem_28, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_28, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj28) { come_call_finalizer(CVALUE_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_28;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_28;
                __freed_obj__ = 0;
            }
            else {
                litem_29=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value43=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_29, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_29, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj29=((struct list_item$1CVALUEph*)come_null_check(litem_29, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_29, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj29) { come_call_finalizer(CVALUE_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_29;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_29;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result29__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result29__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional93;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional93=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional93) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result31__ = ((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 57))->sline;
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
}

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value44;
char* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
    __result32__ = __result_obj__ = ((char*)(right_value44=__builtin_string(((struct sPlusPlusNode*)come_null_check(self, "19eq.c", 62))->sname)));
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value45;
char* __dec_obj30;
void* right_value46;
struct sNode* __dec_obj31;
struct sMinusMinusNode* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
    ((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 75))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 75))->sline;
    __freed_obj__ = 0;
    __dec_obj30=((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 76))->sname;
    ((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 76))->sname=(char*)come_increment_ref_count(((char*)(right_value45=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 76))->sname))));
    if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value45;
    __freed_obj__ = 0;
    __dec_obj31=((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 78))->mLeft;
    ((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 78))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=sNode_clone(left))));
    if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value46;
    __freed_obj__ = 0;
    __result33__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMinusMinusNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result34__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result34__;
    __freed_obj__ = 0;
}

char* sMinusMinusNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value47;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
    __result35__ = __result_obj__ = ((char*)(right_value47=__builtin_string("sMinusMinusNode")));
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_30;
_Bool _if_conditional97;
_Bool __result36__;
void* right_value48;
struct CVALUE* left_value_31;
void* right_value49;
struct CVALUE* come_value_32;
void* right_value50;
char* __dec_obj32;
void* right_value51;
struct sType* __dec_obj33;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_30, 0, sizeof(struct sNode*));
memset(&right_value48, 0, sizeof(void*));
memset(&left_value_31, 0, sizeof(struct CVALUE*));
memset(&right_value49, 0, sizeof(void*));
memset(&come_value_32, 0, sizeof(struct CVALUE*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
    left_30=((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 95))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional97=!((struct sNode*)come_null_check(left_30, "19eq.c", 101))->compile(((struct sNode*)come_null_check(left_30, "19eq.c", 101))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional97) {
        __result36__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result36__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_31=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value48=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value48;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_32=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value49=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 104))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value49;
    __freed_obj__ = 0;
    __dec_obj32=((struct CVALUE*)come_null_check(come_value_32, "19eq.c", 106))->c_value;
    ((struct CVALUE*)come_null_check(come_value_32, "19eq.c", 106))->c_value=(char*)come_increment_ref_count(((char*)(right_value50=xsprintf("%s--",((struct CVALUE*)come_null_check(left_value_31, "19eq.c", 106))->c_value))));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value50;
    __freed_obj__ = 0;
    __dec_obj33=((struct CVALUE*)come_null_check(come_value_32, "19eq.c", 107))->type;
    ((struct CVALUE*)come_null_check(come_value_32, "19eq.c", 107))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(((struct CVALUE*)come_null_check(left_value_31, "19eq.c", 107))->type))));
    if(__dec_obj33) { come_call_finalizer(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value51;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_32, "19eq.c", 108))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 110))->stack, "19eq.c", 110)),(struct CVALUE*)come_increment_ref_count(come_value_32));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_32, "19eq.c", 112))->c_value);
    __freed_obj__ = 0;
    __result37__ = (_Bool)1;
    if(left_value_31 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_32 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_32, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
    if(left_value_31 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_31, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_32 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_32, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result38__ = ((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 119))->sline;
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value52;
char* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
    __result39__ = __result_obj__ = ((char*)(right_value52=__builtin_string(((struct sMinusMinusNode*)come_null_check(self, "19eq.c", 124))->sname)));
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value53;
char* __dec_obj34;
void* right_value54;
struct sNode* __dec_obj35;
void* right_value55;
struct sNode* __dec_obj36;
struct sPlusEqualNode* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
    ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 138))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 138))->sline;
    __freed_obj__ = 0;
    __dec_obj34=((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 139))->sname;
    ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 139))->sname=(char*)come_increment_ref_count(((char*)(right_value53=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 139))->sname))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value53;
    __freed_obj__ = 0;
    __dec_obj35=((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 141))->mLeft;
    ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 141))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value54=sNode_clone(left))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { right_value54 = come_decrement_ref_count(right_value54, ((struct sNode*)right_value54)->finalize, ((struct sNode*)right_value54)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value54;
    __freed_obj__ = 0;
    __dec_obj36=((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 142))->mRight;
    ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 142))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(right))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value55;
    __freed_obj__ = 0;
    __result40__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sPlusEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result41__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
}

char* sPlusEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value56;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value56, 0, sizeof(void*));
    __result42__ = __result_obj__ = ((char*)(right_value56=__builtin_string("sPlusEqualNode")));
    __freed_obj__ = 0;
    return __result42__;
    __freed_obj__ = 0;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_33;
_Bool _if_conditional101;
_Bool __result43__;
void* right_value57;
struct CVALUE* left_value_34;
struct sNode* right_35;
_Bool _if_conditional102;
_Bool __result44__;
void* right_value58;
struct CVALUE* right_value_36;
void* right_value59;
struct CVALUE* come_value_37;
void* right_value60;
char* __dec_obj37;
void* right_value61;
struct sType* __dec_obj38;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_33, 0, sizeof(struct sNode*));
memset(&right_value57, 0, sizeof(void*));
memset(&left_value_34, 0, sizeof(struct CVALUE*));
memset(&right_35, 0, sizeof(struct sNode*));
memset(&right_value58, 0, sizeof(void*));
memset(&right_value_36, 0, sizeof(struct CVALUE*));
memset(&right_value59, 0, sizeof(void*));
memset(&come_value_37, 0, sizeof(struct CVALUE*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
    left_33=((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 159))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional101=!((struct sNode*)come_null_check(left_33, "19eq.c", 165))->compile(((struct sNode*)come_null_check(left_33, "19eq.c", 165))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional101) {
        __result43__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result43__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_34=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value57;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_35=((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 168))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional102=!((struct sNode*)come_null_check(right_35, "19eq.c", 174))->compile(((struct sNode*)come_null_check(right_35, "19eq.c", 174))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional102) {
        __result44__ = (_Bool)0;
        if(left_value_34 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_34, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_36=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value58=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value58;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_37=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value59=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 177))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value59);
    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value59;
    __freed_obj__ = 0;
    __dec_obj37=((struct CVALUE*)come_null_check(come_value_37, "19eq.c", 179))->c_value;
    ((struct CVALUE*)come_null_check(come_value_37, "19eq.c", 179))->c_value=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("%s+=%s",((struct CVALUE*)come_null_check(left_value_34, "19eq.c", 179))->c_value,((struct CVALUE*)come_null_check(right_value_36, "19eq.c", 179))->c_value))));
    if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value60;
    __freed_obj__ = 0;
    __dec_obj38=((struct CVALUE*)come_null_check(come_value_37, "19eq.c", 180))->type;
    ((struct CVALUE*)come_null_check(come_value_37, "19eq.c", 180))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(((struct CVALUE*)come_null_check(left_value_34, "19eq.c", 180))->type))));
    if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value61;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_37, "19eq.c", 181))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 183))->stack, "19eq.c", 183)),(struct CVALUE*)come_increment_ref_count(come_value_37));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_37, "19eq.c", 185))->c_value);
    __freed_obj__ = 0;
    __result45__ = (_Bool)1;
    if(left_value_34 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_34, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_36 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_36, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_37 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_37, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
    if(left_value_34 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_34, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_36 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_36, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_37 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_37, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result46__ = ((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 192))->sline;
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
}

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value62;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
    __result47__ = __result_obj__ = ((char*)(right_value62=__builtin_string(((struct sPlusEqualNode*)come_null_check(self, "19eq.c", 197))->sname)));
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value63;
char* __dec_obj39;
void* right_value64;
struct sNode* __dec_obj40;
void* right_value65;
struct sNode* __dec_obj41;
struct sMinusEqualNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
    ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 211))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 211))->sline;
    __freed_obj__ = 0;
    __dec_obj39=((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 212))->sname;
    ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 212))->sname=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 212))->sname))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = 0;
    __dec_obj40=((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 214))->mLeft;
    ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 214))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value64=sNode_clone(left))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, ((struct sNode*)right_value64)->finalize, ((struct sNode*)right_value64)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value64;
    __freed_obj__ = 0;
    __dec_obj41=((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 215))->mRight;
    ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 215))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value65=sNode_clone(right))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, ((struct sNode*)right_value65)->finalize, ((struct sNode*)right_value65)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value65;
    __freed_obj__ = 0;
    __result48__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMinusEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result49__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}

char* sMinusEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value66;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
    __result50__ = __result_obj__ = ((char*)(right_value66=__builtin_string("sPlusEqualNode")));
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_38;
_Bool _if_conditional106;
_Bool __result51__;
void* right_value67;
struct CVALUE* left_value_39;
struct sNode* right_40;
_Bool _if_conditional107;
_Bool __result52__;
void* right_value68;
struct CVALUE* right_value_41;
void* right_value69;
struct CVALUE* come_value_42;
void* right_value70;
char* __dec_obj42;
void* right_value71;
struct sType* __dec_obj43;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_38, 0, sizeof(struct sNode*));
memset(&right_value67, 0, sizeof(void*));
memset(&left_value_39, 0, sizeof(struct CVALUE*));
memset(&right_40, 0, sizeof(struct sNode*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value_41, 0, sizeof(struct CVALUE*));
memset(&right_value69, 0, sizeof(void*));
memset(&come_value_42, 0, sizeof(struct CVALUE*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
    left_38=((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 232))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional106=!((struct sNode*)come_null_check(left_38, "19eq.c", 238))->compile(((struct sNode*)come_null_check(left_38, "19eq.c", 238))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional106) {
        __result51__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result51__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_39=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value67=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_40=((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 241))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional107=!((struct sNode*)come_null_check(right_40, "19eq.c", 247))->compile(((struct sNode*)come_null_check(right_40, "19eq.c", 247))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional107) {
        __result52__ = (_Bool)0;
        if(left_value_39 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result52__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_41=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value68=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value68;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_42=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value69=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 250))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value69;
    __freed_obj__ = 0;
    __dec_obj42=((struct CVALUE*)come_null_check(come_value_42, "19eq.c", 252))->c_value;
    ((struct CVALUE*)come_null_check(come_value_42, "19eq.c", 252))->c_value=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s-=%s",((struct CVALUE*)come_null_check(left_value_39, "19eq.c", 252))->c_value,((struct CVALUE*)come_null_check(right_value_41, "19eq.c", 252))->c_value))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value70;
    __freed_obj__ = 0;
    __dec_obj43=((struct CVALUE*)come_null_check(come_value_42, "19eq.c", 253))->type;
    ((struct CVALUE*)come_null_check(come_value_42, "19eq.c", 253))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(((struct CVALUE*)come_null_check(left_value_39, "19eq.c", 253))->type))));
    if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value71;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_42, "19eq.c", 254))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 256))->stack, "19eq.c", 256)),(struct CVALUE*)come_increment_ref_count(come_value_42));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_42, "19eq.c", 258))->c_value);
    __freed_obj__ = 0;
    __result53__ = (_Bool)1;
    if(left_value_39 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_41 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_42 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
    if(left_value_39 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_41 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_42 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result54__ = ((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 265))->sline;
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
}

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value72;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
    __result55__ = __result_obj__ = ((char*)(right_value72=__builtin_string(((struct sMinusEqualNode*)come_null_check(self, "19eq.c", 270))->sname)));
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value73;
char* __dec_obj44;
void* right_value74;
struct sNode* __dec_obj45;
void* right_value75;
struct sNode* __dec_obj46;
struct sMultEqualNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 284))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 284))->sline;
    __freed_obj__ = 0;
    __dec_obj44=((struct sMultEqualNode*)come_null_check(self, "19eq.c", 285))->sname;
    ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 285))->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 285))->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value73;
    __freed_obj__ = 0;
    __dec_obj45=((struct sMultEqualNode*)come_null_check(self, "19eq.c", 287))->mLeft;
    ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 287))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=sNode_clone(left))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value74;
    __freed_obj__ = 0;
    __dec_obj46=((struct sMultEqualNode*)come_null_check(self, "19eq.c", 288))->mRight;
    ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 288))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNode_clone(right))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value75;
    __freed_obj__ = 0;
    __result56__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMultEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result57__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
}

char* sMultEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value76;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
    __result58__ = __result_obj__ = ((char*)(right_value76=__builtin_string("sMultEqualNode")));
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_43;
_Bool _if_conditional111;
_Bool __result59__;
void* right_value77;
struct CVALUE* left_value_44;
struct sNode* right_45;
_Bool _if_conditional112;
_Bool __result60__;
void* right_value78;
struct CVALUE* right_value_46;
void* right_value79;
struct CVALUE* come_value_47;
void* right_value80;
char* __dec_obj47;
void* right_value81;
struct sType* __dec_obj48;
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_43, 0, sizeof(struct sNode*));
memset(&right_value77, 0, sizeof(void*));
memset(&left_value_44, 0, sizeof(struct CVALUE*));
memset(&right_45, 0, sizeof(struct sNode*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value_46, 0, sizeof(struct CVALUE*));
memset(&right_value79, 0, sizeof(void*));
memset(&come_value_47, 0, sizeof(struct CVALUE*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
    left_43=((struct sMultEqualNode*)come_null_check(self, "19eq.c", 305))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional111=!((struct sNode*)come_null_check(left_43, "19eq.c", 311))->compile(((struct sNode*)come_null_check(left_43, "19eq.c", 311))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional111) {
        __result59__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result59__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value77=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value77;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_45=((struct sMultEqualNode*)come_null_check(self, "19eq.c", 314))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional112=!((struct sNode*)come_null_check(right_45, "19eq.c", 320))->compile(((struct sNode*)come_null_check(right_45, "19eq.c", 320))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional112) {
        __result60__ = (_Bool)0;
        if(left_value_44 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_44, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result60__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_46=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value78=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value78;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 323))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value79);
    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value79;
    __freed_obj__ = 0;
    __dec_obj47=((struct CVALUE*)come_null_check(come_value_47, "19eq.c", 325))->c_value;
    ((struct CVALUE*)come_null_check(come_value_47, "19eq.c", 325))->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s*=%s",((struct CVALUE*)come_null_check(left_value_44, "19eq.c", 325))->c_value,((struct CVALUE*)come_null_check(right_value_46, "19eq.c", 325))->c_value))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value80;
    __freed_obj__ = 0;
    __dec_obj48=((struct CVALUE*)come_null_check(come_value_47, "19eq.c", 326))->type;
    ((struct CVALUE*)come_null_check(come_value_47, "19eq.c", 326))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(((struct CVALUE*)come_null_check(left_value_44, "19eq.c", 326))->type))));
    if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value81;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_47, "19eq.c", 327))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 329))->stack, "19eq.c", 329)),(struct CVALUE*)come_increment_ref_count(come_value_47));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_47, "19eq.c", 331))->c_value);
    __freed_obj__ = 0;
    __result61__ = (_Bool)1;
    if(left_value_44 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_46 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_47 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
    if(left_value_44 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_46 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_46, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_47 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result62__ = ((struct sMultEqualNode*)come_null_check(self, "19eq.c", 338))->sline;
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
}

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
    __result63__ = __result_obj__ = ((char*)(right_value82=__builtin_string(((struct sMultEqualNode*)come_null_check(self, "19eq.c", 343))->sname)));
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __dec_obj49;
void* right_value84;
struct sNode* __dec_obj50;
void* right_value85;
struct sNode* __dec_obj51;
struct sDivEqualNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
    ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 357))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 357))->sline;
    __freed_obj__ = 0;
    __dec_obj49=((struct sDivEqualNode*)come_null_check(self, "19eq.c", 358))->sname;
    ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 358))->sname=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 358))->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    __dec_obj50=((struct sDivEqualNode*)come_null_check(self, "19eq.c", 360))->mLeft;
    ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 360))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(left))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value84;
    __freed_obj__ = 0;
    __dec_obj51=((struct sDivEqualNode*)come_null_check(self, "19eq.c", 361))->mRight;
    ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 361))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(right))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value85;
    __freed_obj__ = 0;
    __result64__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sDivEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result65__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

char* sDivEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value86;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value86, 0, sizeof(void*));
    __result66__ = __result_obj__ = ((char*)(right_value86=__builtin_string("sDivEqualNode")));
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_48;
_Bool _if_conditional116;
_Bool __result67__;
void* right_value87;
struct CVALUE* left_value_49;
struct sNode* right_50;
_Bool _if_conditional117;
_Bool __result68__;
void* right_value88;
struct CVALUE* right_value_51;
void* right_value89;
struct CVALUE* come_value_52;
void* right_value90;
char* __dec_obj52;
void* right_value91;
struct sType* __dec_obj53;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_48, 0, sizeof(struct sNode*));
memset(&right_value87, 0, sizeof(void*));
memset(&left_value_49, 0, sizeof(struct CVALUE*));
memset(&right_50, 0, sizeof(struct sNode*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value_51, 0, sizeof(struct CVALUE*));
memset(&right_value89, 0, sizeof(void*));
memset(&come_value_52, 0, sizeof(struct CVALUE*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
    left_48=((struct sDivEqualNode*)come_null_check(self, "19eq.c", 378))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional116=!((struct sNode*)come_null_check(left_48, "19eq.c", 384))->compile(((struct sNode*)come_null_check(left_48, "19eq.c", 384))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional116) {
        __result67__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result67__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value87;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_50=((struct sDivEqualNode*)come_null_check(self, "19eq.c", 387))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional117=!((struct sNode*)come_null_check(right_50, "19eq.c", 393))->compile(((struct sNode*)come_null_check(right_50, "19eq.c", 393))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional117) {
        __result68__ = (_Bool)0;
        if(left_value_49 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value88=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value88;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 396))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value89;
    __freed_obj__ = 0;
    __dec_obj52=((struct CVALUE*)come_null_check(come_value_52, "19eq.c", 398))->c_value;
    ((struct CVALUE*)come_null_check(come_value_52, "19eq.c", 398))->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s/=%s",((struct CVALUE*)come_null_check(left_value_49, "19eq.c", 398))->c_value,((struct CVALUE*)come_null_check(right_value_51, "19eq.c", 398))->c_value))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value90;
    __freed_obj__ = 0;
    __dec_obj53=((struct CVALUE*)come_null_check(come_value_52, "19eq.c", 399))->type;
    ((struct CVALUE*)come_null_check(come_value_52, "19eq.c", 399))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(((struct CVALUE*)come_null_check(left_value_49, "19eq.c", 399))->type))));
    if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value91;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_52, "19eq.c", 400))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 402))->stack, "19eq.c", 402)),(struct CVALUE*)come_increment_ref_count(come_value_52));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_52, "19eq.c", 404))->c_value);
    __freed_obj__ = 0;
    __result69__ = (_Bool)1;
    if(left_value_49 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_51 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
    if(left_value_49 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_49, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_51 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_52 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_52, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result70__ = ((struct sDivEqualNode*)come_null_check(self, "19eq.c", 411))->sline;
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
}

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value92;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
    __result71__ = __result_obj__ = ((char*)(right_value92=__builtin_string(((struct sDivEqualNode*)come_null_check(self, "19eq.c", 416))->sname)));
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
char* __dec_obj54;
void* right_value94;
struct sNode* __dec_obj55;
void* right_value95;
struct sNode* __dec_obj56;
struct sModEqualNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
    ((struct sModEqualNode*)come_null_check(self, "19eq.c", 430))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 430))->sline;
    __freed_obj__ = 0;
    __dec_obj54=((struct sModEqualNode*)come_null_check(self, "19eq.c", 431))->sname;
    ((struct sModEqualNode*)come_null_check(self, "19eq.c", 431))->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 431))->sname))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
    __freed_obj__ = 0;
    __dec_obj55=((struct sModEqualNode*)come_null_check(self, "19eq.c", 433))->mLeft;
    ((struct sModEqualNode*)come_null_check(self, "19eq.c", 433))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(left))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value94;
    __freed_obj__ = 0;
    __dec_obj56=((struct sModEqualNode*)come_null_check(self, "19eq.c", 434))->mRight;
    ((struct sModEqualNode*)come_null_check(self, "19eq.c", 434))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(right))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value95;
    __freed_obj__ = 0;
    __result72__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sModEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result73__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
}

char* sModEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __result74__ = __result_obj__ = ((char*)(right_value96=__builtin_string("sModEqualNode")));
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_53;
_Bool _if_conditional121;
_Bool __result75__;
void* right_value97;
struct CVALUE* left_value_54;
struct sNode* right_55;
_Bool _if_conditional122;
_Bool __result76__;
void* right_value98;
struct CVALUE* right_value_56;
void* right_value99;
struct CVALUE* come_value_57;
void* right_value100;
char* __dec_obj57;
void* right_value101;
struct sType* __dec_obj58;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_53, 0, sizeof(struct sNode*));
memset(&right_value97, 0, sizeof(void*));
memset(&left_value_54, 0, sizeof(struct CVALUE*));
memset(&right_55, 0, sizeof(struct sNode*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value_56, 0, sizeof(struct CVALUE*));
memset(&right_value99, 0, sizeof(void*));
memset(&come_value_57, 0, sizeof(struct CVALUE*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    left_53=((struct sModEqualNode*)come_null_check(self, "19eq.c", 451))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional121=!((struct sNode*)come_null_check(left_53, "19eq.c", 457))->compile(((struct sNode*)come_null_check(left_53, "19eq.c", 457))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional121) {
        __result75__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result75__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_55=((struct sModEqualNode*)come_null_check(self, "19eq.c", 460))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional122=!((struct sNode*)come_null_check(right_55, "19eq.c", 466))->compile(((struct sNode*)come_null_check(right_55, "19eq.c", 466))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional122) {
        __result76__ = (_Bool)0;
        if(left_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result76__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value98;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_57=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 469))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value99;
    __freed_obj__ = 0;
    __dec_obj57=((struct CVALUE*)come_null_check(come_value_57, "19eq.c", 471))->c_value;
    ((struct CVALUE*)come_null_check(come_value_57, "19eq.c", 471))->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s%%=%s",((struct CVALUE*)come_null_check(left_value_54, "19eq.c", 471))->c_value,((struct CVALUE*)come_null_check(right_value_56, "19eq.c", 471))->c_value))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value100;
    __freed_obj__ = 0;
    __dec_obj58=((struct CVALUE*)come_null_check(come_value_57, "19eq.c", 472))->type;
    ((struct CVALUE*)come_null_check(come_value_57, "19eq.c", 472))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(((struct CVALUE*)come_null_check(left_value_54, "19eq.c", 472))->type))));
    if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value101;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_57, "19eq.c", 473))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 475))->stack, "19eq.c", 475)),(struct CVALUE*)come_increment_ref_count(come_value_57));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_57, "19eq.c", 477))->c_value);
    __freed_obj__ = 0;
    __result77__ = (_Bool)1;
    if(left_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
    if(left_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_57 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_57, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result78__ = ((struct sModEqualNode*)come_null_check(self, "19eq.c", 484))->sline;
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result79__ = __result_obj__ = ((char*)(right_value102=__builtin_string(((struct sModEqualNode*)come_null_check(self, "19eq.c", 489))->sname)));
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __dec_obj59;
void* right_value104;
struct sNode* __dec_obj60;
void* right_value105;
struct sNode* __dec_obj61;
struct sLShifEqualNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
    ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 503))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 503))->sline;
    __freed_obj__ = 0;
    __dec_obj59=((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 504))->sname;
    ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 504))->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 504))->sname))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = 0;
    __dec_obj60=((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 506))->mLeft;
    ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 506))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value104;
    __freed_obj__ = 0;
    __dec_obj61=((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 507))->mRight;
    ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 507))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value105;
    __freed_obj__ = 0;
    __result80__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLShifEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result81__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

char* sLShifEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
    __result82__ = __result_obj__ = ((char*)(right_value106=__builtin_string("sLShifEqualNode")));
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_58;
_Bool _if_conditional126;
_Bool __result83__;
void* right_value107;
struct CVALUE* left_value_59;
struct sNode* right_60;
_Bool _if_conditional127;
_Bool __result84__;
void* right_value108;
struct CVALUE* right_value_61;
void* right_value109;
struct CVALUE* come_value_62;
void* right_value110;
char* __dec_obj62;
void* right_value111;
struct sType* __dec_obj63;
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_58, 0, sizeof(struct sNode*));
memset(&right_value107, 0, sizeof(void*));
memset(&left_value_59, 0, sizeof(struct CVALUE*));
memset(&right_60, 0, sizeof(struct sNode*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_61, 0, sizeof(struct CVALUE*));
memset(&right_value109, 0, sizeof(void*));
memset(&come_value_62, 0, sizeof(struct CVALUE*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
    left_58=((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 525))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional126=!((struct sNode*)come_null_check(left_58, "19eq.c", 531))->compile(((struct sNode*)come_null_check(left_58, "19eq.c", 531))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional126) {
        __result83__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result83__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_60=((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 534))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional127=!((struct sNode*)come_null_check(right_60, "19eq.c", 540))->compile(((struct sNode*)come_null_check(right_60, "19eq.c", 540))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional127) {
        __result84__ = (_Bool)0;
        if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result84__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_62=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value109=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 543))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value109;
    __freed_obj__ = 0;
    __dec_obj62=((struct CVALUE*)come_null_check(come_value_62, "19eq.c", 545))->c_value;
    ((struct CVALUE*)come_null_check(come_value_62, "19eq.c", 545))->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s<<=%s",((struct CVALUE*)come_null_check(left_value_59, "19eq.c", 545))->c_value,((struct CVALUE*)come_null_check(right_value_61, "19eq.c", 545))->c_value))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value110;
    __freed_obj__ = 0;
    __dec_obj63=((struct CVALUE*)come_null_check(come_value_62, "19eq.c", 546))->type;
    ((struct CVALUE*)come_null_check(come_value_62, "19eq.c", 546))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(((struct CVALUE*)come_null_check(left_value_59, "19eq.c", 546))->type))));
    if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value111;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_62, "19eq.c", 547))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 549))->stack, "19eq.c", 549)),(struct CVALUE*)come_increment_ref_count(come_value_62));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_62, "19eq.c", 551))->c_value);
    __freed_obj__ = 0;
    __result85__ = (_Bool)1;
    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
    if(left_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_62 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_62, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result86__ = ((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 558))->sline;
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
}

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value112;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
    __result87__ = __result_obj__ = ((char*)(right_value112=__builtin_string(((struct sLShifEqualNode*)come_null_check(self, "19eq.c", 563))->sname)));
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value113;
char* __dec_obj64;
void* right_value114;
struct sNode* __dec_obj65;
void* right_value115;
struct sNode* __dec_obj66;
struct sRShiftEqualNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
    ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 577))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 577))->sline;
    __freed_obj__ = 0;
    __dec_obj64=((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 578))->sname;
    ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 578))->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 578))->sname))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    __dec_obj65=((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 580))->mLeft;
    ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 580))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(left))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    __dec_obj66=((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 581))->mRight;
    ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 581))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(right))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value115;
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sRShiftEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result89__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

char* sRShiftEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
    __result90__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sRShiftEqualNode")));
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_63;
_Bool _if_conditional131;
_Bool __result91__;
void* right_value117;
struct CVALUE* left_value_64;
struct sNode* right_65;
_Bool _if_conditional132;
_Bool __result92__;
void* right_value118;
struct CVALUE* right_value_66;
void* right_value119;
struct CVALUE* come_value_67;
void* right_value120;
char* __dec_obj67;
void* right_value121;
struct sType* __dec_obj68;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_63, 0, sizeof(struct sNode*));
memset(&right_value117, 0, sizeof(void*));
memset(&left_value_64, 0, sizeof(struct CVALUE*));
memset(&right_65, 0, sizeof(struct sNode*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value_66, 0, sizeof(struct CVALUE*));
memset(&right_value119, 0, sizeof(void*));
memset(&come_value_67, 0, sizeof(struct CVALUE*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
    left_63=((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 598))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional131=!((struct sNode*)come_null_check(left_63, "19eq.c", 604))->compile(((struct sNode*)come_null_check(left_63, "19eq.c", 604))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional131) {
        __result91__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result91__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_65=((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 607))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional132=!((struct sNode*)come_null_check(right_65, "19eq.c", 613))->compile(((struct sNode*)come_null_check(right_65, "19eq.c", 613))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional132) {
        __result92__ = (_Bool)0;
        if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result92__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value118;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 616))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value119;
    __freed_obj__ = 0;
    __dec_obj67=((struct CVALUE*)come_null_check(come_value_67, "19eq.c", 618))->c_value;
    ((struct CVALUE*)come_null_check(come_value_67, "19eq.c", 618))->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s>>=%s",((struct CVALUE*)come_null_check(left_value_64, "19eq.c", 618))->c_value,((struct CVALUE*)come_null_check(right_value_66, "19eq.c", 618))->c_value))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value120;
    __freed_obj__ = 0;
    __dec_obj68=((struct CVALUE*)come_null_check(come_value_67, "19eq.c", 619))->type;
    ((struct CVALUE*)come_null_check(come_value_67, "19eq.c", 619))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(((struct CVALUE*)come_null_check(left_value_64, "19eq.c", 619))->type))));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value121;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_67, "19eq.c", 620))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 622))->stack, "19eq.c", 622)),(struct CVALUE*)come_increment_ref_count(come_value_67));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_67, "19eq.c", 624))->c_value);
    __freed_obj__ = 0;
    __result93__ = (_Bool)1;
    if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
    if(left_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result94__ = ((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 631))->sline;
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
}

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value122;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
    __result95__ = __result_obj__ = ((char*)(right_value122=__builtin_string(((struct sRShiftEqualNode*)come_null_check(self, "19eq.c", 636))->sname)));
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value123;
char* __dec_obj69;
void* right_value124;
struct sNode* __dec_obj70;
void* right_value125;
struct sNode* __dec_obj71;
struct sXorEqualNode* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
    ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 650))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 650))->sline;
    __freed_obj__ = 0;
    __dec_obj69=((struct sXorEqualNode*)come_null_check(self, "19eq.c", 651))->sname;
    ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 651))->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 651))->sname))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value123;
    __freed_obj__ = 0;
    __dec_obj70=((struct sXorEqualNode*)come_null_check(self, "19eq.c", 653))->mLeft;
    ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 653))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(left))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value124;
    __freed_obj__ = 0;
    __dec_obj71=((struct sXorEqualNode*)come_null_check(self, "19eq.c", 654))->mRight;
    ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 654))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(right))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value125;
    __freed_obj__ = 0;
    __result96__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sXorEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result97__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

char* sXorEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
    __result98__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sXorEqualNode")));
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_68;
_Bool _if_conditional136;
_Bool __result99__;
void* right_value127;
struct CVALUE* left_value_69;
struct sNode* right_70;
_Bool _if_conditional137;
_Bool __result100__;
void* right_value128;
struct CVALUE* right_value_71;
void* right_value129;
struct CVALUE* come_value_72;
void* right_value130;
char* __dec_obj72;
void* right_value131;
struct sType* __dec_obj73;
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_68, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&left_value_69, 0, sizeof(struct CVALUE*));
memset(&right_70, 0, sizeof(struct sNode*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value_71, 0, sizeof(struct CVALUE*));
memset(&right_value129, 0, sizeof(void*));
memset(&come_value_72, 0, sizeof(struct CVALUE*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    left_68=((struct sXorEqualNode*)come_null_check(self, "19eq.c", 671))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional136=!((struct sNode*)come_null_check(left_68, "19eq.c", 677))->compile(((struct sNode*)come_null_check(left_68, "19eq.c", 677))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional136) {
        __result99__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result99__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_70=((struct sXorEqualNode*)come_null_check(self, "19eq.c", 680))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional137=!((struct sNode*)come_null_check(right_70, "19eq.c", 686))->compile(((struct sNode*)come_null_check(right_70, "19eq.c", 686))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional137) {
        __result100__ = (_Bool)0;
        if(left_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 689))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value129;
    __freed_obj__ = 0;
    __dec_obj72=((struct CVALUE*)come_null_check(come_value_72, "19eq.c", 691))->c_value;
    ((struct CVALUE*)come_null_check(come_value_72, "19eq.c", 691))->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s^=%s",((struct CVALUE*)come_null_check(left_value_69, "19eq.c", 691))->c_value,((struct CVALUE*)come_null_check(right_value_71, "19eq.c", 691))->c_value))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value130;
    __freed_obj__ = 0;
    __dec_obj73=((struct CVALUE*)come_null_check(come_value_72, "19eq.c", 692))->type;
    ((struct CVALUE*)come_null_check(come_value_72, "19eq.c", 692))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(((struct CVALUE*)come_null_check(left_value_69, "19eq.c", 692))->type))));
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value131;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_72, "19eq.c", 693))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 695))->stack, "19eq.c", 695)),(struct CVALUE*)come_increment_ref_count(come_value_72));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_72, "19eq.c", 697))->c_value);
    __freed_obj__ = 0;
    __result101__ = (_Bool)1;
    if(left_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_72 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
    if(left_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_72 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = ((struct sXorEqualNode*)come_null_check(self, "19eq.c", 704))->sline;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value132;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value132=__builtin_string(((struct sXorEqualNode*)come_null_check(self, "19eq.c", 709))->sname)));
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value133;
char* __dec_obj74;
void* right_value134;
struct sNode* __dec_obj75;
void* right_value135;
struct sNode* __dec_obj76;
struct sOrEqualNode* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
    ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 723))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 723))->sline;
    __freed_obj__ = 0;
    __dec_obj74=((struct sOrEqualNode*)come_null_check(self, "19eq.c", 724))->sname;
    ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 724))->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 724))->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = 0;
    __dec_obj75=((struct sOrEqualNode*)come_null_check(self, "19eq.c", 726))->mLeft;
    ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 726))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value134;
    __freed_obj__ = 0;
    __dec_obj76=((struct sOrEqualNode*)come_null_check(self, "19eq.c", 727))->mRight;
    ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 727))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=sNode_clone(right))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value135;
    __freed_obj__ = 0;
    __result104__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrEqualNode_terminated(){
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

char* sOrEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
    __result106__ = __result_obj__ = ((char*)(right_value136=__builtin_string("sOrEqualNode")));
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_73;
_Bool _if_conditional141;
_Bool __result107__;
void* right_value137;
struct CVALUE* left_value_74;
struct sNode* right_75;
_Bool _if_conditional142;
_Bool __result108__;
void* right_value138;
struct CVALUE* right_value_76;
void* right_value139;
struct CVALUE* come_value_77;
void* right_value140;
char* __dec_obj77;
void* right_value141;
struct sType* __dec_obj78;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_73, 0, sizeof(struct sNode*));
memset(&right_value137, 0, sizeof(void*));
memset(&left_value_74, 0, sizeof(struct CVALUE*));
memset(&right_75, 0, sizeof(struct sNode*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value_76, 0, sizeof(struct CVALUE*));
memset(&right_value139, 0, sizeof(void*));
memset(&come_value_77, 0, sizeof(struct CVALUE*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
    left_73=((struct sOrEqualNode*)come_null_check(self, "19eq.c", 744))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional141=!((struct sNode*)come_null_check(left_73, "19eq.c", 750))->compile(((struct sNode*)come_null_check(left_73, "19eq.c", 750))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional141) {
        __result107__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result107__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_75=((struct sOrEqualNode*)come_null_check(self, "19eq.c", 753))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional142=!((struct sNode*)come_null_check(right_75, "19eq.c", 759))->compile(((struct sNode*)come_null_check(right_75, "19eq.c", 759))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional142) {
        __result108__ = (_Bool)0;
        if(left_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value138;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 762))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value139;
    __freed_obj__ = 0;
    __dec_obj77=((struct CVALUE*)come_null_check(come_value_77, "19eq.c", 764))->c_value;
    ((struct CVALUE*)come_null_check(come_value_77, "19eq.c", 764))->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s|=%s",((struct CVALUE*)come_null_check(left_value_74, "19eq.c", 764))->c_value,((struct CVALUE*)come_null_check(right_value_76, "19eq.c", 764))->c_value))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value140;
    __freed_obj__ = 0;
    __dec_obj78=((struct CVALUE*)come_null_check(come_value_77, "19eq.c", 765))->type;
    ((struct CVALUE*)come_null_check(come_value_77, "19eq.c", 765))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(((struct CVALUE*)come_null_check(left_value_74, "19eq.c", 765))->type))));
    if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value141;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_77, "19eq.c", 766))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 768))->stack, "19eq.c", 768)),(struct CVALUE*)come_increment_ref_count(come_value_77));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_77, "19eq.c", 770))->c_value);
    __freed_obj__ = 0;
    __result109__ = (_Bool)1;
    if(left_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
    if(left_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result110__ = ((struct sOrEqualNode*)come_null_check(self, "19eq.c", 777))->sline;
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value142;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
    __result111__ = __result_obj__ = ((char*)(right_value142=__builtin_string(((struct sOrEqualNode*)come_null_check(self, "19eq.c", 782))->sname)));
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value143;
char* __dec_obj79;
void* right_value144;
struct sNode* __dec_obj80;
void* right_value145;
struct sNode* __dec_obj81;
struct sAndEqualNode* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 796))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 796))->sline;
    __freed_obj__ = 0;
    __dec_obj79=((struct sAndEqualNode*)come_null_check(self, "19eq.c", 797))->sname;
    ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 797))->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 797))->sname))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value143;
    __freed_obj__ = 0;
    __dec_obj80=((struct sAndEqualNode*)come_null_check(self, "19eq.c", 799))->mLeft;
    ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 799))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value144;
    __freed_obj__ = 0;
    __dec_obj81=((struct sAndEqualNode*)come_null_check(self, "19eq.c", 800))->mRight;
    ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 800))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value145;
    __freed_obj__ = 0;
    __result112__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result113__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
}

char* sAndEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value146;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
    __result114__ = __result_obj__ = ((char*)(right_value146=__builtin_string("sAndEqualNode")));
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_78;
_Bool _if_conditional146;
_Bool __result115__;
void* right_value147;
struct CVALUE* left_value_79;
struct sNode* right_80;
_Bool _if_conditional147;
_Bool __result116__;
void* right_value148;
struct CVALUE* right_value_81;
void* right_value149;
struct CVALUE* come_value_82;
void* right_value150;
char* __dec_obj82;
void* right_value151;
struct sType* __dec_obj83;
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_78, 0, sizeof(struct sNode*));
memset(&right_value147, 0, sizeof(void*));
memset(&left_value_79, 0, sizeof(struct CVALUE*));
memset(&right_80, 0, sizeof(struct sNode*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value_81, 0, sizeof(struct CVALUE*));
memset(&right_value149, 0, sizeof(void*));
memset(&come_value_82, 0, sizeof(struct CVALUE*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    left_78=((struct sAndEqualNode*)come_null_check(self, "19eq.c", 817))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional146=!((struct sNode*)come_null_check(left_78, "19eq.c", 823))->compile(((struct sNode*)come_null_check(left_78, "19eq.c", 823))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional146) {
        __result115__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result115__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_80=((struct sAndEqualNode*)come_null_check(self, "19eq.c", 826))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional147=!((struct sNode*)come_null_check(right_80, "19eq.c", 832))->compile(((struct sNode*)come_null_check(right_80, "19eq.c", 832))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional147) {
        __result116__ = (_Bool)0;
        if(left_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result116__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value148;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 835))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value149;
    __freed_obj__ = 0;
    __dec_obj82=((struct CVALUE*)come_null_check(come_value_82, "19eq.c", 837))->c_value;
    ((struct CVALUE*)come_null_check(come_value_82, "19eq.c", 837))->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s&=%s",((struct CVALUE*)come_null_check(left_value_79, "19eq.c", 837))->c_value,((struct CVALUE*)come_null_check(right_value_81, "19eq.c", 837))->c_value))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value150;
    __freed_obj__ = 0;
    __dec_obj83=((struct CVALUE*)come_null_check(come_value_82, "19eq.c", 838))->type;
    ((struct CVALUE*)come_null_check(come_value_82, "19eq.c", 838))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(((struct CVALUE*)come_null_check(left_value_79, "19eq.c", 838))->type))));
    if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value151;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_82, "19eq.c", 839))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 841))->stack, "19eq.c", 841)),(struct CVALUE*)come_increment_ref_count(come_value_82));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_82, "19eq.c", 843))->c_value);
    __freed_obj__ = 0;
    __result117__ = (_Bool)1;
    if(left_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
    if(left_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result118__ = ((struct sAndEqualNode*)come_null_check(self, "19eq.c", 850))->sline;
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value152;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
    __result119__ = __result_obj__ = ((char*)(right_value152=__builtin_string(((struct sAndEqualNode*)come_null_check(self, "19eq.c", 855))->sname)));
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value153;
char* __dec_obj84;
void* right_value154;
struct sNode* __dec_obj85;
void* right_value155;
struct sNode* __dec_obj86;
struct sExpEqualNode* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 869))->sline=((struct sInfo*)come_null_check(info, "19eq.c", 869))->sline;
    __freed_obj__ = 0;
    __dec_obj84=((struct sExpEqualNode*)come_null_check(self, "19eq.c", 870))->sname;
    ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 870))->sname=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(((struct sInfo*)come_null_check(info, "19eq.c", 870))->sname))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value153;
    __freed_obj__ = 0;
    __dec_obj85=((struct sExpEqualNode*)come_null_check(self, "19eq.c", 872))->mLeft;
    ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 872))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value154;
    __freed_obj__ = 0;
    __dec_obj86=((struct sExpEqualNode*)come_null_check(self, "19eq.c", 873))->mRight;
    ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 873))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(right))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value155;
    __freed_obj__ = 0;
    __result120__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sExpEqualNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
}

char* sExpEqualNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value156;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
    __result122__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sExpEqualNode")));
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_83;
_Bool _if_conditional151;
_Bool __result123__;
void* right_value157;
struct CVALUE* left_value_84;
struct sNode* right_85;
_Bool _if_conditional152;
_Bool __result124__;
void* right_value158;
struct CVALUE* right_value_86;
void* right_value159;
struct CVALUE* come_value_87;
void* right_value160;
char* __dec_obj87;
void* right_value161;
struct sType* __dec_obj88;
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_83, 0, sizeof(struct sNode*));
memset(&right_value157, 0, sizeof(void*));
memset(&left_value_84, 0, sizeof(struct CVALUE*));
memset(&right_85, 0, sizeof(struct sNode*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value_86, 0, sizeof(struct CVALUE*));
memset(&right_value159, 0, sizeof(void*));
memset(&come_value_87, 0, sizeof(struct CVALUE*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    left_83=((struct sExpEqualNode*)come_null_check(self, "19eq.c", 890))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional151=!((struct sNode*)come_null_check(left_83, "19eq.c", 896))->compile(((struct sNode*)come_null_check(left_83, "19eq.c", 896))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional151) {
        __result123__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result123__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_85=((struct sExpEqualNode*)come_null_check(self, "19eq.c", 899))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional152=!((struct sNode*)come_null_check(right_85, "19eq.c", 905))->compile(((struct sNode*)come_null_check(right_85, "19eq.c", 905))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result124__ = (_Bool)0;
        if(left_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value158;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 908))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value159;
    __freed_obj__ = 0;
    __dec_obj87=((struct CVALUE*)come_null_check(come_value_87, "19eq.c", 910))->c_value;
    ((struct CVALUE*)come_null_check(come_value_87, "19eq.c", 910))->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s=%s",((struct CVALUE*)come_null_check(left_value_84, "19eq.c", 910))->c_value,((struct CVALUE*)come_null_check(right_value_86, "19eq.c", 910))->c_value))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value160;
    __freed_obj__ = 0;
    __dec_obj88=((struct CVALUE*)come_null_check(come_value_87, "19eq.c", 911))->type;
    ((struct CVALUE*)come_null_check(come_value_87, "19eq.c", 911))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(((struct CVALUE*)come_null_check(left_value_84, "19eq.c", 911))->type))));
    if(__dec_obj88) { come_call_finalizer(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value161;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_87, "19eq.c", 912))->var=((void*)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "19eq.c", 914))->stack, "19eq.c", 914)),(struct CVALUE*)come_increment_ref_count(come_value_87));
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_87, "19eq.c", 916))->c_value);
    __freed_obj__ = 0;
    __result125__ = (_Bool)1;
    if(left_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_86 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
    if(left_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_86 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result126__ = ((struct sExpEqualNode*)come_null_check(self, "19eq.c", 923))->sline;
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
}

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result127__ = __result_obj__ = ((char*)(right_value162=__builtin_string(((struct sExpEqualNode*)come_null_check(self, "19eq.c", 928))->sname)));
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional153;
void* right_value163;
void* right_value164;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value168;
struct sNode* __result130__;
_Bool _if_conditional160;
void* right_value169;
void* right_value170;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value174;
struct sNode* __result133__;
_Bool _if_conditional167;
void* right_value175;
struct sNode* right_node_90;
void* right_value176;
void* right_value177;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value182;
struct sNode* __result136__;
_Bool _if_conditional176;
void* right_value183;
struct sNode* right_node_92;
void* right_value184;
void* right_value185;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value190;
struct sNode* __result139__;
_Bool _if_conditional185;
void* right_value191;
struct sNode* right_node_94;
void* right_value192;
void* right_value193;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value198;
struct sNode* __result142__;
_Bool _if_conditional194;
void* right_value199;
struct sNode* right_node_96;
void* right_value200;
void* right_value201;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value206;
struct sNode* __result145__;
_Bool _if_conditional203;
void* right_value207;
struct sNode* right_node_98;
void* right_value208;
void* right_value209;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value214;
struct sNode* __result148__;
_Bool _if_conditional212;
void* right_value215;
struct sNode* right_node_100;
void* right_value216;
void* right_value217;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value222;
struct sNode* __result151__;
_Bool _if_conditional221;
void* right_value223;
struct sNode* right_node_102;
void* right_value224;
void* right_value225;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value230;
struct sNode* __result154__;
_Bool _if_conditional230;
void* right_value231;
struct sNode* right_node_104;
void* right_value232;
void* right_value233;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value238;
struct sNode* __result157__;
_Bool _if_conditional239;
void* right_value239;
struct sNode* right_node_106;
void* right_value240;
void* right_value241;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value246;
struct sNode* __result160__;
_Bool _if_conditional248;
void* right_value247;
struct sNode* right_node_108;
void* right_value248;
void* right_value249;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value254;
struct sNode* __result163__;
_Bool _if_conditional257;
void* right_value255;
struct sNode* right_node_110;
void* right_value256;
void* right_value257;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value262;
struct sNode* __result166__;
struct sNode* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_node_90, 0, sizeof(struct sNode*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_node_92, 0, sizeof(struct sNode*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_node_94, 0, sizeof(struct sNode*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&right_node_96, 0, sizeof(struct sNode*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_node_98, 0, sizeof(struct sNode*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_node_100, 0, sizeof(struct sNode*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_node_102, 0, sizeof(struct sNode*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_node_104, 0, sizeof(struct sNode*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_node_106, 0, sizeof(struct sNode*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_node_108, 0, sizeof(struct sNode*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_node_110, 0, sizeof(struct sNode*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    if(_if_conditional153=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==43&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==43,    __freed_obj__ = 0, 
    _if_conditional153) {
        ((struct sInfo*)come_null_check(info, "19eq.c", 934))->p+=2;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 937);
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(right_value164=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value163=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 937)))),(struct sNode*)come_increment_ref_count(node),info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sPlusPlusNode_sline;
        _inf_value1->sname=(void*)sPlusPlusNode_sname;
        _inf_value1->terminated=(void*)sPlusPlusNode_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result130__ = __result_obj__ = ((struct sNode*)(right_value168=_inf_value1));
        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value164;
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional160=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==45&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==45,        __freed_obj__ = 0, 
        _if_conditional160) {
            ((struct sInfo*)come_null_check(info, "19eq.c", 940))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 943);
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(right_value170=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value169=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 943)))),(struct sNode*)come_increment_ref_count(node),info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sMinusMinusNode_sline;
            _inf_value2->sname=(void*)sMinusMinusNode_sname;
            _inf_value2->terminated=(void*)sMinusMinusNode_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result133__ = __result_obj__ = ((struct sNode*)(right_value174=_inf_value2));
            if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
            if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value169;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
            if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value170;
            __freed_obj__ = 0;
            return __result133__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional167=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==43&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,            __freed_obj__ = 0, 
            _if_conditional167) {
                ((struct sInfo*)come_null_check(info, "19eq.c", 946))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_node_90=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
                if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value175;
                __freed_obj__ = 0;
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 951);
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(right_value177=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value176=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 951)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_90),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sPlusEqualNode_sline;
                _inf_value3->sname=(void*)sPlusEqualNode_sname;
                _inf_value3->terminated=(void*)sPlusEqualNode_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result136__ = __result_obj__ = ((struct sNode*)(right_value182=_inf_value3));
                if(right_node_90 && !__freed_obj__) { right_node_90 = come_decrement_ref_count(right_node_90, ((struct sNode*)right_node_90)->finalize, ((struct sNode*)right_node_90)->_protocol_obj, 0, 0, 0); } 
                if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value176;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value177;
                __freed_obj__ = 0;
                return __result136__;
                __freed_obj__ = 0;
                if(right_node_90 && !__freed_obj__) { right_node_90 = come_decrement_ref_count(right_node_90, ((struct sNode*)right_node_90)->finalize, ((struct sNode*)right_node_90)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional176=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==45&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,                __freed_obj__ = 0, 
                _if_conditional176) {
                    ((struct sInfo*)come_null_check(info, "19eq.c", 954))->p+=2;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_node_92=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value183;
                    __freed_obj__ = 0;
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 959);
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(right_value185=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value184=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 959)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_92),info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sMinusEqualNode_sline;
                    _inf_value4->sname=(void*)sMinusEqualNode_sname;
                    _inf_value4->terminated=(void*)sMinusEqualNode_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result139__ = __result_obj__ = ((struct sNode*)(right_value190=_inf_value4));
                    if(right_node_92 && !__freed_obj__) { right_node_92 = come_decrement_ref_count(right_node_92, ((struct sNode*)right_node_92)->finalize, ((struct sNode*)right_node_92)->_protocol_obj, 0, 0, 0); } 
                    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value184;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value185);
                    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value185;
                    __freed_obj__ = 0;
                    return __result139__;
                    __freed_obj__ = 0;
                    if(right_node_92 && !__freed_obj__) { right_node_92 = come_decrement_ref_count(right_node_92, ((struct sNode*)right_node_92)->finalize, ((struct sNode*)right_node_92)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional185=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==42&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,                    __freed_obj__ = 0, 
                    _if_conditional185) {
                        ((struct sInfo*)come_null_check(info, "19eq.c", 962))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_node_94=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value191;
                        __freed_obj__ = 0;
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 967);
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(right_value193=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value192=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 967)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_94),info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sMultEqualNode_sline;
                        _inf_value5->sname=(void*)sMultEqualNode_sname;
                        _inf_value5->terminated=(void*)sMultEqualNode_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result142__ = __result_obj__ = ((struct sNode*)(right_value198=_inf_value5));
                        if(right_node_94 && !__freed_obj__) { right_node_94 = come_decrement_ref_count(right_node_94, ((struct sNode*)right_node_94)->finalize, ((struct sNode*)right_node_94)->_protocol_obj, 0, 0, 0); } 
                        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
                        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value192;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
                        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value193;
                        __freed_obj__ = 0;
                        return __result142__;
                        __freed_obj__ = 0;
                        if(right_node_94 && !__freed_obj__) { right_node_94 = come_decrement_ref_count(right_node_94, ((struct sNode*)right_node_94)->finalize, ((struct sNode*)right_node_94)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional194=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==47&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,                        __freed_obj__ = 0, 
                        _if_conditional194) {
                            ((struct sInfo*)come_null_check(info, "19eq.c", 970))->p+=2;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            right_node_96=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                            if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value199;
                            __freed_obj__ = 0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 975);
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(right_value201=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value200=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 975)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_96),info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sDivEqualNode_sline;
                            _inf_value6->sname=(void*)sDivEqualNode_sname;
                            _inf_value6->terminated=(void*)sDivEqualNode_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result145__ = __result_obj__ = ((struct sNode*)(right_value206=_inf_value6));
                            if(right_node_96 && !__freed_obj__) { right_node_96 = come_decrement_ref_count(right_node_96, ((struct sNode*)right_node_96)->finalize, ((struct sNode*)right_node_96)->_protocol_obj, 0, 0, 0); } 
                            if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
                            if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value200;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value201);
                            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value201;
                            __freed_obj__ = 0;
                            return __result145__;
                            __freed_obj__ = 0;
                            if(right_node_96 && !__freed_obj__) { right_node_96 = come_decrement_ref_count(right_node_96, ((struct sNode*)right_node_96)->finalize, ((struct sNode*)right_node_96)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional203=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==37&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,                            __freed_obj__ = 0, 
                            _if_conditional203) {
                                ((struct sInfo*)come_null_check(info, "19eq.c", 978))->p+=2;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                right_node_98=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value207=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value207;
                                __freed_obj__ = 0;
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 983);
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(right_value209=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value208=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 983)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_98),info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sModEqualNode_sline;
                                _inf_value7->sname=(void*)sModEqualNode_sname;
                                _inf_value7->terminated=(void*)sModEqualNode_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result148__ = __result_obj__ = ((struct sNode*)(right_value214=_inf_value7));
                                if(right_node_98 && !__freed_obj__) { right_node_98 = come_decrement_ref_count(right_node_98, ((struct sNode*)right_node_98)->finalize, ((struct sNode*)right_node_98)->_protocol_obj, 0, 0, 0); } 
                                if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
                                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value208;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value209);
                                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value209;
                                __freed_obj__ = 0;
                                return __result148__;
                                __freed_obj__ = 0;
                                if(right_node_98 && !__freed_obj__) { right_node_98 = come_decrement_ref_count(right_node_98, ((struct sNode*)right_node_98)->finalize, ((struct sNode*)right_node_98)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional212=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==60&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+2)==61,                                __freed_obj__ = 0, 
                                _if_conditional212) {
                                    ((struct sInfo*)come_null_check(info, "19eq.c", 986))->p+=3;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    right_node_100=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value215=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                                    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, ((struct sNode*)right_value215)->finalize, ((struct sNode*)right_value215)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value215;
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 991);
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(right_value217=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value216=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 991)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_100),info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sLShifEqualNode_sline;
                                    _inf_value8->sname=(void*)sLShifEqualNode_sname;
                                    _inf_value8->terminated=(void*)sLShifEqualNode_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result151__ = __result_obj__ = ((struct sNode*)(right_value222=_inf_value8));
                                    if(right_node_100 && !__freed_obj__) { right_node_100 = come_decrement_ref_count(right_node_100, ((struct sNode*)right_node_100)->finalize, ((struct sNode*)right_node_100)->_protocol_obj, 0, 0, 0); } 
                                    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value216);
                                    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value216;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value217);
                                    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value217;
                                    __freed_obj__ = 0;
                                    return __result151__;
                                    __freed_obj__ = 0;
                                    if(right_node_100 && !__freed_obj__) { right_node_100 = come_decrement_ref_count(right_node_100, ((struct sNode*)right_node_100)->finalize, ((struct sNode*)right_node_100)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional221=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==62&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+2)==61,                                    __freed_obj__ = 0, 
                                    _if_conditional221) {
                                        ((struct sInfo*)come_null_check(info, "19eq.c", 994))->p+=3;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        right_node_102=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                                        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value223;
                                        __freed_obj__ = 0;
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 999);
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(right_value225=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value224=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 999)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_102),info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sRShiftEqualNode_sline;
                                        _inf_value9->sname=(void*)sRShiftEqualNode_sname;
                                        _inf_value9->terminated=(void*)sRShiftEqualNode_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result154__ = __result_obj__ = ((struct sNode*)(right_value230=_inf_value9));
                                        if(right_node_102 && !__freed_obj__) { right_node_102 = come_decrement_ref_count(right_node_102, ((struct sNode*)right_node_102)->finalize, ((struct sNode*)right_node_102)->_protocol_obj, 0, 0, 0); } 
                                        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value224);
                                        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value224;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value225);
                                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value225;
                                        __freed_obj__ = 0;
                                        return __result154__;
                                        __freed_obj__ = 0;
                                        if(right_node_102 && !__freed_obj__) { right_node_102 = come_decrement_ref_count(right_node_102, ((struct sNode*)right_node_102)->finalize, ((struct sNode*)right_node_102)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional230=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==94&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,                                        __freed_obj__ = 0, 
                                        _if_conditional230) {
                                            ((struct sInfo*)come_null_check(info, "19eq.c", 1002))->p+=2;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            right_node_104=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value231=expression_v13(info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                                            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value231;
                                            __freed_obj__ = 0;
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1007);
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(right_value233=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value232=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 1007)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_104),info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sXorEqualNode_sline;
                                            _inf_value10->sname=(void*)sXorEqualNode_sname;
                                            _inf_value10->terminated=(void*)sXorEqualNode_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result157__ = __result_obj__ = ((struct sNode*)(right_value238=_inf_value10));
                                            if(right_node_104 && !__freed_obj__) { right_node_104 = come_decrement_ref_count(right_node_104, ((struct sNode*)right_node_104)->finalize, ((struct sNode*)right_node_104)->_protocol_obj, 0, 0, 0); } 
                                            if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value232);
                                            if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value232;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value233);
                                            if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value233;
                                            __freed_obj__ = 0;
                                            return __result157__;
                                            __freed_obj__ = 0;
                                            if(right_node_104 && !__freed_obj__) { right_node_104 = come_decrement_ref_count(right_node_104, ((struct sNode*)right_node_104)->finalize, ((struct sNode*)right_node_104)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        else {
                                            if(_if_conditional239=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==38&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,                                            __freed_obj__ = 0, 
                                            _if_conditional239) {
                                                ((struct sInfo*)come_null_check(info, "19eq.c", 1010))->p+=2;
                                                __freed_obj__ = 0;
                                                skip_spaces_and_lf(info);
                                                __freed_obj__ = 0;
                                                right_node_106=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                                                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value239;
                                                __freed_obj__ = 0;
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1015);
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(right_value241=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value240=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1015)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_106),info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sAndEqualNode_sline;
                                                _inf_value11->sname=(void*)sAndEqualNode_sname;
                                                _inf_value11->terminated=(void*)sAndEqualNode_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result160__ = __result_obj__ = ((struct sNode*)(right_value246=_inf_value11));
                                                if(right_node_106 && !__freed_obj__) { right_node_106 = come_decrement_ref_count(right_node_106, ((struct sNode*)right_node_106)->finalize, ((struct sNode*)right_node_106)->_protocol_obj, 0, 0, 0); } 
                                                if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
                                                if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value240;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value241);
                                                if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[2] = right_value241;
                                                __freed_obj__ = 0;
                                                return __result160__;
                                                __freed_obj__ = 0;
                                                if(right_node_106 && !__freed_obj__) { right_node_106 = come_decrement_ref_count(right_node_106, ((struct sNode*)right_node_106)->finalize, ((struct sNode*)right_node_106)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional248=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==124&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)==61,                                                __freed_obj__ = 0, 
                                                _if_conditional248) {
                                                    ((struct sInfo*)come_null_check(info, "19eq.c", 1018))->p+=2;
                                                    __freed_obj__ = 0;
                                                    skip_spaces_and_lf(info);
                                                    __freed_obj__ = 0;
                                                    right_node_108=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=expression_v13(info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                                                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value247;
                                                    __freed_obj__ = 0;
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1023);
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(right_value249=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value248=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1023)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_108),info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sOrEqualNode_sline;
                                                    _inf_value12->sname=(void*)sOrEqualNode_sname;
                                                    _inf_value12->terminated=(void*)sOrEqualNode_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result163__ = __result_obj__ = ((struct sNode*)(right_value254=_inf_value12));
                                                    if(right_node_108 && !__freed_obj__) { right_node_108 = come_decrement_ref_count(right_node_108, ((struct sNode*)right_node_108)->finalize, ((struct sNode*)right_node_108)->_protocol_obj, 0, 0, 0); } 
                                                    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value248);
                                                    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value248;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value249);
                                                    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value249;
                                                    __freed_obj__ = 0;
                                                    return __result163__;
                                                    __freed_obj__ = 0;
                                                    if(right_node_108 && !__freed_obj__) { right_node_108 = come_decrement_ref_count(right_node_108, ((struct sNode*)right_node_108)->finalize, ((struct sNode*)right_node_108)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                else {
                                                    if(_if_conditional257=*((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p==61&&*(((struct sInfo*)come_null_check(info, "19eq.c", 1034))->p+1)!=61,                                                    __freed_obj__ = 0, 
                                                    _if_conditional257) {
                                                        ((struct sInfo*)come_null_check(info, "19eq.c", 1026))->p++;
                                                        __freed_obj__ = 0;
                                                        skip_spaces_and_lf(info);
                                                        __freed_obj__ = 0;
                                                        right_node_110=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=expression_v13(info))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
                                                        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value255;
                                                        __freed_obj__ = 0;
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1031);
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(right_value257=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value256=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1031)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_110),info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sExpEqualNode_sline;
                                                        _inf_value13->sname=(void*)sExpEqualNode_sname;
                                                        _inf_value13->terminated=(void*)sExpEqualNode_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result166__ = __result_obj__ = ((struct sNode*)(right_value262=_inf_value13));
                                                        if(right_node_110 && !__freed_obj__) { right_node_110 = come_decrement_ref_count(right_node_110, ((struct sNode*)right_node_110)->finalize, ((struct sNode*)right_node_110)->_protocol_obj, 0, 0, 0); } 
                                                        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value256);
                                                        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[1] = right_value256;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value257);
                                                        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[2] = right_value257;
                                                        __freed_obj__ = 0;
                                                        return __result166__;
                                                        __freed_obj__ = 0;
                                                        if(right_node_110 && !__freed_obj__) { right_node_110 = come_decrement_ref_count(right_node_110, ((struct sNode*)right_node_110)->finalize, ((struct sNode*)right_node_110)->_protocol_obj, 0, 0, 0); } 
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
    __result167__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional154;
_Bool _if_conditional155;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional154=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1))->mLeft!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional154) {
                if(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0))->mLeft, ((struct sNode*)((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional155=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 2))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional155) {
                if(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1))->sname && !__freed_obj__) { ((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1))->sname = come_decrement_ref_count(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional156;
struct sPlusPlusNode* __result128__;
void* right_value165;
struct sPlusPlusNode* result_88;
_Bool _if_conditional157;
void* right_value166;
struct sNode* __dec_obj89;
_Bool _if_conditional158;
_Bool _if_conditional159;
void* right_value167;
char* __dec_obj90;
struct sPlusPlusNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
memset(&result_88, 0, sizeof(struct sPlusPlusNode*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
            if(_if_conditional156=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional156) {
                __result128__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result128__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_88=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value165=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
            if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value165;
            __freed_obj__ = 0;
            if(_if_conditional157=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 5))->mLeft!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional157) {
                __dec_obj89=((struct sPlusPlusNode*)come_null_check(result_88, "sPlusPlusNode_clone", 4))->mLeft;
                ((struct sPlusPlusNode*)come_null_check(result_88, "sPlusPlusNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 4))->mLeft))));
                if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
                if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value166;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional158=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional158) {
                ((struct sPlusPlusNode*)come_null_check(result_88, "sPlusPlusNode_clone", 5))->sline=((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 5))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional159=self!=((void*)0)&&((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 7))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional159) {
                __dec_obj90=((struct sPlusPlusNode*)come_null_check(result_88, "sPlusPlusNode_clone", 6))->sname;
                ((struct sPlusPlusNode*)come_null_check(result_88, "sPlusPlusNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value167=string_clone(((struct sPlusPlusNode*)come_null_check(self, "sPlusPlusNode_clone", 6))->sname))));
                if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
                if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value167;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result129__ = __result_obj__ = result_88;
            if(result_88 && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,result_88, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result129__;
            __freed_obj__ = 0;
            if(result_88 && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,result_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional161;
_Bool _if_conditional162;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional161=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional161) {
                    if(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0))->mLeft, ((struct sNode*)((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional162=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 2))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional162) {
                    if(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1))->sname && !__freed_obj__) { ((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1))->sname = come_decrement_ref_count(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
struct sMinusMinusNode* __result131__;
void* right_value171;
struct sMinusMinusNode* result_89;
_Bool _if_conditional164;
void* right_value172;
struct sNode* __dec_obj91;
_Bool _if_conditional165;
_Bool _if_conditional166;
void* right_value173;
char* __dec_obj92;
struct sMinusMinusNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&result_89, 0, sizeof(struct sMinusMinusNode*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
                if(_if_conditional163=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional163) {
                    __result131__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result131__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_89=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value171=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
                if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value171;
                __freed_obj__ = 0;
                if(_if_conditional164=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 5))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional164) {
                    __dec_obj91=((struct sMinusMinusNode*)come_null_check(result_89, "sMinusMinusNode_clone", 4))->mLeft;
                    ((struct sMinusMinusNode*)come_null_check(result_89, "sMinusMinusNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=sNode_clone(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 4))->mLeft))));
                    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
                    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value172;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional165=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional165) {
                    ((struct sMinusMinusNode*)come_null_check(result_89, "sMinusMinusNode_clone", 5))->sline=((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 5))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional166=self!=((void*)0)&&((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 7))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional166) {
                    __dec_obj92=((struct sMinusMinusNode*)come_null_check(result_89, "sMinusMinusNode_clone", 6))->sname;
                    ((struct sMinusMinusNode*)come_null_check(result_89, "sMinusMinusNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value173=string_clone(((struct sMinusMinusNode*)come_null_check(self, "sMinusMinusNode_clone", 6))->sname))));
                    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
                    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value173;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result132__ = __result_obj__ = result_89;
                if(result_89 && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,result_89, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result132__;
                __freed_obj__ = 0;
                if(result_89 && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,result_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional168=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional168) {
                        if(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional169=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional169) {
                        if(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional170=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional170) {
                        if(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional171;
struct sPlusEqualNode* __result134__;
void* right_value178;
struct sPlusEqualNode* result_91;
_Bool _if_conditional172;
void* right_value179;
struct sNode* __dec_obj93;
_Bool _if_conditional173;
void* right_value180;
struct sNode* __dec_obj94;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value181;
char* __dec_obj95;
struct sPlusEqualNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value178, 0, sizeof(void*));
memset(&result_91, 0, sizeof(struct sPlusEqualNode*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
                    if(_if_conditional171=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional171) {
                        __result134__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result134__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_91=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value178=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value178;
                    __freed_obj__ = 0;
                    if(_if_conditional172=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional172) {
                        __dec_obj93=((struct sPlusEqualNode*)come_null_check(result_91, "sPlusEqualNode_clone", 4))->mLeft;
                        ((struct sPlusEqualNode*)come_null_check(result_91, "sPlusEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNode_clone(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 4))->mLeft))));
                        if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
                        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value179;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional173=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional173) {
                        __dec_obj94=((struct sPlusEqualNode*)come_null_check(result_91, "sPlusEqualNode_clone", 5))->mRight;
                        ((struct sPlusEqualNode*)come_null_check(result_91, "sPlusEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 5))->mRight))));
                        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                        if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value180;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional174=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional174) {
                        ((struct sPlusEqualNode*)come_null_check(result_91, "sPlusEqualNode_clone", 6))->sline=((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 6))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional175=self!=((void*)0)&&((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 8))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional175) {
                        __dec_obj95=((struct sPlusEqualNode*)come_null_check(result_91, "sPlusEqualNode_clone", 7))->sname;
                        ((struct sPlusEqualNode*)come_null_check(result_91, "sPlusEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value181=string_clone(((struct sPlusEqualNode*)come_null_check(self, "sPlusEqualNode_clone", 7))->sname))));
                        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value181;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result135__ = __result_obj__ = result_91;
                    if(result_91 && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,result_91, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result135__;
                    __freed_obj__ = 0;
                    if(result_91 && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,result_91, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
_Bool _if_conditional178;
_Bool _if_conditional179;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional177=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional177) {
                            if(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional178=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional178) {
                            if(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional179=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional179) {
                            if(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional180;
struct sMinusEqualNode* __result137__;
void* right_value186;
struct sMinusEqualNode* result_93;
_Bool _if_conditional181;
void* right_value187;
struct sNode* __dec_obj96;
_Bool _if_conditional182;
void* right_value188;
struct sNode* __dec_obj97;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value189;
char* __dec_obj98;
struct sMinusEqualNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
memset(&result_93, 0, sizeof(struct sMinusEqualNode*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
                        if(_if_conditional180=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional180) {
                            __result137__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result137__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_93=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value186=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value186;
                        __freed_obj__ = 0;
                        if(_if_conditional181=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional181) {
                            __dec_obj96=((struct sMinusEqualNode*)come_null_check(result_93, "sMinusEqualNode_clone", 4))->mLeft;
                            ((struct sMinusEqualNode*)come_null_check(result_93, "sMinusEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNode_clone(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 4))->mLeft))));
                            if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                            if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value187;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional182=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional182) {
                            __dec_obj97=((struct sMinusEqualNode*)come_null_check(result_93, "sMinusEqualNode_clone", 5))->mRight;
                            ((struct sMinusEqualNode*)come_null_check(result_93, "sMinusEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=sNode_clone(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 5))->mRight))));
                            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value188;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional183=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional183) {
                            ((struct sMinusEqualNode*)come_null_check(result_93, "sMinusEqualNode_clone", 6))->sline=((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 6))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional184=self!=((void*)0)&&((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 8))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional184) {
                            __dec_obj98=((struct sMinusEqualNode*)come_null_check(result_93, "sMinusEqualNode_clone", 7))->sname;
                            ((struct sMinusEqualNode*)come_null_check(result_93, "sMinusEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value189=string_clone(((struct sMinusEqualNode*)come_null_check(self, "sMinusEqualNode_clone", 7))->sname))));
                            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                            if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value189;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result138__ = __result_obj__ = result_93;
                        if(result_93 && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,result_93, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result138__;
                        __freed_obj__ = 0;
                        if(result_93 && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,result_93, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
_Bool _if_conditional187;
_Bool _if_conditional188;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional186=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional186) {
                                if(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional187=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional187) {
                                if(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional188=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 3))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional188) {
                                if(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
struct sMultEqualNode* __result140__;
void* right_value194;
struct sMultEqualNode* result_95;
_Bool _if_conditional190;
void* right_value195;
struct sNode* __dec_obj99;
_Bool _if_conditional191;
void* right_value196;
struct sNode* __dec_obj100;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value197;
char* __dec_obj101;
struct sMultEqualNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&result_95, 0, sizeof(struct sMultEqualNode*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
                            if(_if_conditional189=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional189) {
                                __result140__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result140__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_95=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value194=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value194;
                            __freed_obj__ = 0;
                            if(_if_conditional190=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional190) {
                                __dec_obj99=((struct sMultEqualNode*)come_null_check(result_95, "sMultEqualNode_clone", 4))->mLeft;
                                ((struct sMultEqualNode*)come_null_check(result_95, "sMultEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 4))->mLeft))));
                                if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                                if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value195;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional191=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional191) {
                                __dec_obj100=((struct sMultEqualNode*)come_null_check(result_95, "sMultEqualNode_clone", 5))->mRight;
                                ((struct sMultEqualNode*)come_null_check(result_95, "sMultEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNode_clone(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 5))->mRight))));
                                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                                if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value196;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional192=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional192) {
                                ((struct sMultEqualNode*)come_null_check(result_95, "sMultEqualNode_clone", 6))->sline=((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 6))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional193=self!=((void*)0)&&((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 8))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional193) {
                                __dec_obj101=((struct sMultEqualNode*)come_null_check(result_95, "sMultEqualNode_clone", 7))->sname;
                                ((struct sMultEqualNode*)come_null_check(result_95, "sMultEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value197=string_clone(((struct sMultEqualNode*)come_null_check(self, "sMultEqualNode_clone", 7))->sname))));
                                if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value197;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result141__ = __result_obj__ = result_95;
                            if(result_95 && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,result_95, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result141__;
                            __freed_obj__ = 0;
                            if(result_95 && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,result_95, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional195=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional195) {
                                    if(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional196=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional196) {
                                    if(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional197=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional197) {
                                    if(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
struct sDivEqualNode* __result143__;
void* right_value202;
struct sDivEqualNode* result_97;
_Bool _if_conditional199;
void* right_value203;
struct sNode* __dec_obj102;
_Bool _if_conditional200;
void* right_value204;
struct sNode* __dec_obj103;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value205;
char* __dec_obj104;
struct sDivEqualNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
memset(&result_97, 0, sizeof(struct sDivEqualNode*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
                                if(_if_conditional198=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional198) {
                                    __result143__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result143__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_97=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value202=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
                                if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value202;
                                __freed_obj__ = 0;
                                if(_if_conditional199=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional199) {
                                    __dec_obj102=((struct sDivEqualNode*)come_null_check(result_97, "sDivEqualNode_clone", 4))->mLeft;
                                    ((struct sDivEqualNode*)come_null_check(result_97, "sDivEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value203=sNode_clone(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 4))->mLeft))));
                                    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
                                    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value203;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional200=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 6))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional200) {
                                    __dec_obj103=((struct sDivEqualNode*)come_null_check(result_97, "sDivEqualNode_clone", 5))->mRight;
                                    ((struct sDivEqualNode*)come_null_check(result_97, "sDivEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 5))->mRight))));
                                    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                                    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value204;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional201=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional201) {
                                    ((struct sDivEqualNode*)come_null_check(result_97, "sDivEqualNode_clone", 6))->sline=((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 6))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional202=self!=((void*)0)&&((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 8))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional202) {
                                    __dec_obj104=((struct sDivEqualNode*)come_null_check(result_97, "sDivEqualNode_clone", 7))->sname;
                                    ((struct sDivEqualNode*)come_null_check(result_97, "sDivEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value205=string_clone(((struct sDivEqualNode*)come_null_check(self, "sDivEqualNode_clone", 7))->sname))));
                                    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                                    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value205;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result144__ = __result_obj__ = result_97;
                                if(result_97 && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,result_97, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result144__;
                                __freed_obj__ = 0;
                                if(result_97 && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,result_97, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional204;
_Bool _if_conditional205;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional204=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional204) {
                                        if(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional205=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional205) {
                                        if(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional206=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional206) {
                                        if(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional207;
struct sModEqualNode* __result146__;
void* right_value210;
struct sModEqualNode* result_99;
_Bool _if_conditional208;
void* right_value211;
struct sNode* __dec_obj105;
_Bool _if_conditional209;
void* right_value212;
struct sNode* __dec_obj106;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value213;
char* __dec_obj107;
struct sModEqualNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
memset(&result_99, 0, sizeof(struct sModEqualNode*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
                                    if(_if_conditional207=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional207) {
                                        __result146__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result146__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_99=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value210=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
                                    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value210;
                                    __freed_obj__ = 0;
                                    if(_if_conditional208=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 5))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional208) {
                                        __dec_obj105=((struct sModEqualNode*)come_null_check(result_99, "sModEqualNode_clone", 4))->mLeft;
                                        ((struct sModEqualNode*)come_null_check(result_99, "sModEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value211=sNode_clone(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 4))->mLeft))));
                                        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
                                        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value211;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional209=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 6))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional209) {
                                        __dec_obj106=((struct sModEqualNode*)come_null_check(result_99, "sModEqualNode_clone", 5))->mRight;
                                        ((struct sModEqualNode*)come_null_check(result_99, "sModEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=sNode_clone(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 5))->mRight))));
                                        if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                                        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value212;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional210=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional210) {
                                        ((struct sModEqualNode*)come_null_check(result_99, "sModEqualNode_clone", 6))->sline=((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 6))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional211=self!=((void*)0)&&((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 8))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional211) {
                                        __dec_obj107=((struct sModEqualNode*)come_null_check(result_99, "sModEqualNode_clone", 7))->sname;
                                        ((struct sModEqualNode*)come_null_check(result_99, "sModEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value213=string_clone(((struct sModEqualNode*)come_null_check(self, "sModEqualNode_clone", 7))->sname))));
                                        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                                        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value213;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result147__ = __result_obj__ = result_99;
                                    if(result_99 && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,result_99, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result147__;
                                    __freed_obj__ = 0;
                                    if(result_99 && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,result_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional213=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional213) {
                                            if(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional214=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional214) {
                                            if(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional215=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 3))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional215) {
                                            if(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional216;
struct sLShifEqualNode* __result149__;
void* right_value218;
struct sLShifEqualNode* result_101;
_Bool _if_conditional217;
void* right_value219;
struct sNode* __dec_obj108;
_Bool _if_conditional218;
void* right_value220;
struct sNode* __dec_obj109;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value221;
char* __dec_obj110;
struct sLShifEqualNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value218, 0, sizeof(void*));
memset(&result_101, 0, sizeof(struct sLShifEqualNode*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
                                        if(_if_conditional216=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional216) {
                                            __result149__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result149__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_101=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value218=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
                                        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value218;
                                        __freed_obj__ = 0;
                                        if(_if_conditional217=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 5))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional217) {
                                            __dec_obj108=((struct sLShifEqualNode*)come_null_check(result_101, "sLShifEqualNode_clone", 4))->mLeft;
                                            ((struct sLShifEqualNode*)come_null_check(result_101, "sLShifEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 4))->mLeft))));
                                            if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                                            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value219;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional218=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 6))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional218) {
                                            __dec_obj109=((struct sLShifEqualNode*)come_null_check(result_101, "sLShifEqualNode_clone", 5))->mRight;
                                            ((struct sLShifEqualNode*)come_null_check(result_101, "sLShifEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=sNode_clone(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 5))->mRight))));
                                            if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                                            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value220;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional219=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional219) {
                                            ((struct sLShifEqualNode*)come_null_check(result_101, "sLShifEqualNode_clone", 6))->sline=((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 6))->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional220=self!=((void*)0)&&((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 8))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional220) {
                                            __dec_obj110=((struct sLShifEqualNode*)come_null_check(result_101, "sLShifEqualNode_clone", 7))->sname;
                                            ((struct sLShifEqualNode*)come_null_check(result_101, "sLShifEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value221=string_clone(((struct sLShifEqualNode*)come_null_check(self, "sLShifEqualNode_clone", 7))->sname))));
                                            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                                            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value221;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result150__ = __result_obj__ = result_101;
                                        if(result_101 && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result150__;
                                        __freed_obj__ = 0;
                                        if(result_101 && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,result_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
_Bool _if_conditional223;
_Bool _if_conditional224;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional222=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional222) {
                                                if(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional223=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional223) {
                                                if(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional224=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 3))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional224) {
                                                if(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
struct sRShiftEqualNode* __result152__;
void* right_value226;
struct sRShiftEqualNode* result_103;
_Bool _if_conditional226;
void* right_value227;
struct sNode* __dec_obj111;
_Bool _if_conditional227;
void* right_value228;
struct sNode* __dec_obj112;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value229;
char* __dec_obj113;
struct sRShiftEqualNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
memset(&result_103, 0, sizeof(struct sRShiftEqualNode*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
                                            if(_if_conditional225=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional225) {
                                                __result152__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result152__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_103=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value226=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
                                            if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value226;
                                            __freed_obj__ = 0;
                                            if(_if_conditional226=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 5))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional226) {
                                                __dec_obj111=((struct sRShiftEqualNode*)come_null_check(result_103, "sRShiftEqualNode_clone", 4))->mLeft;
                                                ((struct sRShiftEqualNode*)come_null_check(result_103, "sRShiftEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 4))->mLeft))));
                                                if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
                                                if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value227;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional227=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 6))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional227) {
                                                __dec_obj112=((struct sRShiftEqualNode*)come_null_check(result_103, "sRShiftEqualNode_clone", 5))->mRight;
                                                ((struct sRShiftEqualNode*)come_null_check(result_103, "sRShiftEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=sNode_clone(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 5))->mRight))));
                                                if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
                                                if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value228;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional228=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional228) {
                                                ((struct sRShiftEqualNode*)come_null_check(result_103, "sRShiftEqualNode_clone", 6))->sline=((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 6))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional229=self!=((void*)0)&&((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 8))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional229) {
                                                __dec_obj113=((struct sRShiftEqualNode*)come_null_check(result_103, "sRShiftEqualNode_clone", 7))->sname;
                                                ((struct sRShiftEqualNode*)come_null_check(result_103, "sRShiftEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value229=string_clone(((struct sRShiftEqualNode*)come_null_check(self, "sRShiftEqualNode_clone", 7))->sname))));
                                                if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                                                if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value229;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result153__ = __result_obj__ = result_103;
                                            if(result_103 && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,result_103, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result153__;
                                            __freed_obj__ = 0;
                                            if(result_103 && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,result_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional231=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1))->mLeft!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional231) {
                                                    if(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional232=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2))->mRight!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional232) {
                                                    if(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional233=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 3))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional233) {
                                                    if(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
struct sXorEqualNode* __result155__;
void* right_value234;
struct sXorEqualNode* result_105;
_Bool _if_conditional235;
void* right_value235;
struct sNode* __dec_obj114;
_Bool _if_conditional236;
void* right_value236;
struct sNode* __dec_obj115;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value237;
char* __dec_obj116;
struct sXorEqualNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value234, 0, sizeof(void*));
memset(&result_105, 0, sizeof(struct sXorEqualNode*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
                                                if(_if_conditional234=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional234) {
                                                    __result155__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result155__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_105=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value234=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
                                                if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value234;
                                                __freed_obj__ = 0;
                                                if(_if_conditional235=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 5))->mLeft!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional235) {
                                                    __dec_obj114=((struct sXorEqualNode*)come_null_check(result_105, "sXorEqualNode_clone", 4))->mLeft;
                                                    ((struct sXorEqualNode*)come_null_check(result_105, "sXorEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNode_clone(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 4))->mLeft))));
                                                    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                                                    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value235;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional236=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 6))->mRight!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional236) {
                                                    __dec_obj115=((struct sXorEqualNode*)come_null_check(result_105, "sXorEqualNode_clone", 5))->mRight;
                                                    ((struct sXorEqualNode*)come_null_check(result_105, "sXorEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 5))->mRight))));
                                                    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                                                    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value236;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional237=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional237) {
                                                    ((struct sXorEqualNode*)come_null_check(result_105, "sXorEqualNode_clone", 6))->sline=((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 6))->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional238=self!=((void*)0)&&((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 8))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional238) {
                                                    __dec_obj116=((struct sXorEqualNode*)come_null_check(result_105, "sXorEqualNode_clone", 7))->sname;
                                                    ((struct sXorEqualNode*)come_null_check(result_105, "sXorEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value237=string_clone(((struct sXorEqualNode*)come_null_check(self, "sXorEqualNode_clone", 7))->sname))));
                                                    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                                                    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value237;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result156__ = __result_obj__ = result_105;
                                                if(result_105 && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,result_105, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result156__;
                                                __freed_obj__ = 0;
                                                if(result_105 && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,result_105, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional240=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1))->mLeft!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional240) {
                                                        if(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional241=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2))->mRight!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional241) {
                                                        if(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional242=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 3))->sname!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional242) {
                                                        if(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional243;
struct sAndEqualNode* __result158__;
void* right_value242;
struct sAndEqualNode* result_107;
_Bool _if_conditional244;
void* right_value243;
struct sNode* __dec_obj117;
_Bool _if_conditional245;
void* right_value244;
struct sNode* __dec_obj118;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value245;
char* __dec_obj119;
struct sAndEqualNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&result_107, 0, sizeof(struct sAndEqualNode*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
                                                    if(_if_conditional243=self==(void*)0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional243) {
                                                        __result158__ = __result_obj__ = (void*)0;
                                                        __freed_obj__ = 0;
                                                        return __result158__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    result_107=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value242=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                                                    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value242;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional244=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 5))->mLeft!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional244) {
                                                        __dec_obj117=((struct sAndEqualNode*)come_null_check(result_107, "sAndEqualNode_clone", 4))->mLeft;
                                                        ((struct sAndEqualNode*)come_null_check(result_107, "sAndEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNode_clone(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 4))->mLeft))));
                                                        if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
                                                        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value243;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional245=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 6))->mRight!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional245) {
                                                        __dec_obj118=((struct sAndEqualNode*)come_null_check(result_107, "sAndEqualNode_clone", 5))->mRight;
                                                        ((struct sAndEqualNode*)come_null_check(result_107, "sAndEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 5))->mRight))));
                                                        if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                                                        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value244;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional246=self!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional246) {
                                                        ((struct sAndEqualNode*)come_null_check(result_107, "sAndEqualNode_clone", 6))->sline=((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 6))->sline;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional247=self!=((void*)0)&&((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 8))->sname!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional247) {
                                                        __dec_obj119=((struct sAndEqualNode*)come_null_check(result_107, "sAndEqualNode_clone", 7))->sname;
                                                        ((struct sAndEqualNode*)come_null_check(result_107, "sAndEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value245=string_clone(((struct sAndEqualNode*)come_null_check(self, "sAndEqualNode_clone", 7))->sname))));
                                                        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                                                        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value245;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    __result159__ = __result_obj__ = result_107;
                                                    if(result_107 && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,result_107, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result159__;
                                                    __freed_obj__ = 0;
                                                    if(result_107 && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,result_107, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional249;
_Bool _if_conditional250;
_Bool _if_conditional251;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional249=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1))->mLeft!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional249) {
                                                            if(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional250=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2))->mRight!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional250) {
                                                            if(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional251=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 3))->sname!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional251) {
                                                            if(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional252;
struct sOrEqualNode* __result161__;
void* right_value250;
struct sOrEqualNode* result_109;
_Bool _if_conditional253;
void* right_value251;
struct sNode* __dec_obj120;
_Bool _if_conditional254;
void* right_value252;
struct sNode* __dec_obj121;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value253;
char* __dec_obj122;
struct sOrEqualNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
memset(&result_109, 0, sizeof(struct sOrEqualNode*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
                                                        if(_if_conditional252=self==(void*)0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional252) {
                                                            __result161__ = __result_obj__ = (void*)0;
                                                            __freed_obj__ = 0;
                                                            return __result161__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        result_109=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value250=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                                                        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value250;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional253=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 5))->mLeft!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional253) {
                                                            __dec_obj120=((struct sOrEqualNode*)come_null_check(result_109, "sOrEqualNode_clone", 4))->mLeft;
                                                            ((struct sOrEqualNode*)come_null_check(result_109, "sOrEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value251=sNode_clone(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 4))->mLeft))));
                                                            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
                                                            if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[0] = right_value251;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional254=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 6))->mRight!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional254) {
                                                            __dec_obj121=((struct sOrEqualNode*)come_null_check(result_109, "sOrEqualNode_clone", 5))->mRight;
                                                            ((struct sOrEqualNode*)come_null_check(result_109, "sOrEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=sNode_clone(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 5))->mRight))));
                                                            if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                                                            if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[0] = right_value252;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional255=self!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional255) {
                                                            ((struct sOrEqualNode*)come_null_check(result_109, "sOrEqualNode_clone", 6))->sline=((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 6))->sline;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional256=self!=((void*)0)&&((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 8))->sname!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional256) {
                                                            __dec_obj122=((struct sOrEqualNode*)come_null_check(result_109, "sOrEqualNode_clone", 7))->sname;
                                                            ((struct sOrEqualNode*)come_null_check(result_109, "sOrEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value253=string_clone(((struct sOrEqualNode*)come_null_check(self, "sOrEqualNode_clone", 7))->sname))));
                                                            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                                                            if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value253;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __result162__ = __result_obj__ = result_109;
                                                        if(result_109 && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,result_109, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result162__;
                                                        __freed_obj__ = 0;
                                                        if(result_109 && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,result_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional258=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1))->mLeft!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional258) {
                                                                if(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0))->mLeft, ((struct sNode*)((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional259=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2))->mRight!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional259) {
                                                                if(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1))->mRight, ((struct sNode*)((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional260=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 3))->sname!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional260) {
                                                                if(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2))->sname && !__freed_obj__) { ((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2))->sname = come_decrement_ref_count(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional261;
struct sExpEqualNode* __result164__;
void* right_value258;
struct sExpEqualNode* result_111;
_Bool _if_conditional262;
void* right_value259;
struct sNode* __dec_obj123;
_Bool _if_conditional263;
void* right_value260;
struct sNode* __dec_obj124;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value261;
char* __dec_obj125;
struct sExpEqualNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value258, 0, sizeof(void*));
memset(&result_111, 0, sizeof(struct sExpEqualNode*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
                                                            if(_if_conditional261=self==(void*)0,                                                            __freed_obj__ = 0, 
                                                            _if_conditional261) {
                                                                __result164__ = __result_obj__ = (void*)0;
                                                                __freed_obj__ = 0;
                                                                return __result164__;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            result_111=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value258=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
                                                            if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value258;
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional262=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 5))->mLeft!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional262) {
                                                                __dec_obj123=((struct sExpEqualNode*)come_null_check(result_111, "sExpEqualNode_clone", 4))->mLeft;
                                                                ((struct sExpEqualNode*)come_null_check(result_111, "sExpEqualNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=sNode_clone(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 4))->mLeft))));
                                                                if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
                                                                if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value259;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional263=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 6))->mRight!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional263) {
                                                                __dec_obj124=((struct sExpEqualNode*)come_null_check(result_111, "sExpEqualNode_clone", 5))->mRight;
                                                                ((struct sExpEqualNode*)come_null_check(result_111, "sExpEqualNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value260=sNode_clone(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 5))->mRight))));
                                                                if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                                                                if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, ((struct sNode*)right_value260)->finalize, ((struct sNode*)right_value260)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value260;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional264=self!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional264) {
                                                                ((struct sExpEqualNode*)come_null_check(result_111, "sExpEqualNode_clone", 6))->sline=((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 6))->sline;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional265=self!=((void*)0)&&((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 8))->sname!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional265) {
                                                                __dec_obj125=((struct sExpEqualNode*)come_null_check(result_111, "sExpEqualNode_clone", 7))->sname;
                                                                ((struct sExpEqualNode*)come_null_check(result_111, "sExpEqualNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value261=string_clone(((struct sExpEqualNode*)come_null_check(self, "sExpEqualNode_clone", 7))->sname))));
                                                                if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                                                                if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value261;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            __result165__ = __result_obj__ = result_111;
                                                            if(result_111 && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,result_111, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            __freed_obj__ = 0;
                                                            return __result165__;
                                                            __freed_obj__ = 0;
                                                            if(result_111 && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,result_111, (void*)0, (void*)0, 0, 0, 0, 0); }
}

