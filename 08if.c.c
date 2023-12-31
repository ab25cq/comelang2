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
struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};
struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};
struct sIfNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    struct sBlock* mElseBlock;
    int sline;
    char* sname;
};
struct optional$2sBlockphbool
{
    struct sBlock* v1;
    _Bool v2;
};
struct sOrStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    int sline;
    char* sname;
};
struct sAndStatmentNode
{
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info);

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
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
_Bool sIfNode_terminated();

char* sIfNode_kind();

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_value(struct optional$2sNodephbool* self);
static struct optional$2sBlockphbool* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
static struct optional$2sBlockphbool* optional$2sBlockphbool_initialize(struct optional$2sBlockphbool* self, struct sBlock* v1, _Bool v2);
static void optional$2sBlockphboolp_finalize(struct optional$2sBlockphbool* self);
static struct sBlock* optional$2sBlockphbool_value(struct optional$2sBlockphbool* self);
int sIfNode_sline(struct sIfNode* self, struct sInfo* info);

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info);

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sOrStatmentNode_terminated();

char* sOrStatmentNode_kind();

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info);

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info);

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);

_Bool sAndStatmentNode_terminated();

char* sAndStatmentNode_kind();

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info);

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info);

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);

static char* optional$2charphbool_value(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);

static void sIfNode_finalize(struct sIfNode* self);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_08ifc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
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

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
void* right_value84;
struct sBlock* __dec_obj40;
void* right_value85;
struct list$1sNodeph* __dec_obj41;
void* right_value92;
struct list$1sBlockph* __dec_obj45;
_Bool _if_conditional178;
void* right_value93;
struct sBlock* __dec_obj46;
struct sBlock* __dec_obj47;
struct sIfNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
    ((struct sIfNode*)come_null_check(self, "08if.c", 19))->sline=((struct sInfo*)come_null_check(info, "08if.c", 19))->sline;
    __freed_obj__ = 0;
    __dec_obj6=((struct sIfNode*)come_null_check(self, "08if.c", 20))->sname;
    ((struct sIfNode*)come_null_check(self, "08if.c", 20))->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(((struct sInfo*)come_null_check(info, "08if.c", 20))->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __dec_obj7=((struct sIfNode*)come_null_check(self, "08if.c", 22))->mExpressionNode;
    ((struct sIfNode*)come_null_check(self, "08if.c", 22))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(expression_node))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value12;
    __freed_obj__ = 0;
    __dec_obj40=((struct sIfNode*)come_null_check(self, "08if.c", 23))->mIfBlock;
    ((struct sIfNode*)come_null_check(self, "08if.c", 23))->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value84=sBlock_clone(if_block))));
    if(__dec_obj40) { come_call_finalizer(sBlock_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value84;
    __freed_obj__ = 0;
    __dec_obj41=((struct sIfNode*)come_null_check(self, "08if.c", 24))->mElifExpressionNodes;
    ((struct sIfNode*)come_null_check(self, "08if.c", 24))->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value85=list$1sNodephp_clone(elif_expression_nodes))));
    if(__dec_obj41) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value85;
    __freed_obj__ = 0;
    __dec_obj45=((struct sIfNode*)come_null_check(self, "08if.c", 25))->mElifBlocks;
    ((struct sIfNode*)come_null_check(self, "08if.c", 25))->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value92=list$1sBlockphp_clone(elif_blocks))));
    if(__dec_obj45) { come_call_finalizer(list$1sBlockph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value92;
    __freed_obj__ = 0;
    ((struct sIfNode*)come_null_check(self, "08if.c", 26))->mElifNum=elif_num;
    __freed_obj__ = 0;
    if(_if_conditional178=else_block,    __freed_obj__ = 0, 
    _if_conditional178) {
        __dec_obj46=((struct sIfNode*)come_null_check(self, "08if.c", 29))->mElseBlock;
        ((struct sIfNode*)come_null_check(self, "08if.c", 29))->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value93=sBlock_clone(else_block))));
        if(__dec_obj46) { come_call_finalizer(sBlock_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
        if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value93;
        __freed_obj__ = 0;
    }
    else {
        __dec_obj47=((struct sIfNode*)come_null_check(self, "08if.c", 32))->mElseBlock;
        ((struct sIfNode*)come_null_check(self, "08if.c", 32))->mElseBlock=((void*)0);
        if(__dec_obj47) { come_call_finalizer(sBlock_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result76__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                    it_7=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 174))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_7!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_8=it_7;
                        __freed_obj__ = 0;
                        it_7=((struct list_item$1sNodeph*)come_null_check(it_7, "./comelang2.h", 177))->next;
                        __freed_obj__ = 0;
                        if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                result_9=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value15=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value14=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value14;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value15);
                if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value15;
                __freed_obj__ = 0;
                it_10=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 195))->head;
                __freed_obj__ = 0;
                while(_while_condtional2=it_10!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional2) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_9, "./comelang2.h", 197)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 197))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value19;
                    __freed_obj__ = 0;
                    it_10=((struct list_item$1sNodeph*)come_null_check(it_10, "./comelang2.h", 199))->next;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                    __freed_obj__ = 0;
                    __result16__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result16__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                        if(_if_conditional20=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional20) {
                            litem_11=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                            if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value16;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 209))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 210))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj8=((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 211))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_11, "./comelang2.h", 211))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, ((struct sNode*)__dec_obj8)->finalize, ((struct sNode*)__dec_obj8)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_11;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head=litem_11;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional21=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional21) {
                                litem_12=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value17;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 219))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 220))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 221))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_12, "./comelang2.h", 221))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_12;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_12;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_13=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                                if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value18;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 229))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 230))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 231))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_13, "./comelang2.h", 231))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_13;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_13;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 237))->len++;
                        __freed_obj__ = 0;
                        __result17__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result17__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
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

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                        result_24=(struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value28=map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count(((struct map$2charphsVarph*)(right_value22=(struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang2.h", 1220))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                        if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value22;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value28;
                        __freed_obj__ = 0;
                        for(
                        it_27=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1231))) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA4=                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1231))) ,                        __freed_obj__ = 0, 
                        _for_condtionalA4;                        it_27=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1231))) ,                        __freed_obj__ = 0, 
                        0                        ){
                            __freed_obj__ = 0;
                            memset(&default_value_30,0,sizeof(struct sVar*));
                            __freed_obj__ = 0;
                            it2_34=(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value30=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1226)),it_27,default_value_30))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value30;
                            __freed_obj__ = 0;
                            map$2charphsVarph_insert2(((struct map$2charphsVarph*)come_null_check(result_24, "./comelang2.h", 1228)),it_27,(struct sVar*)come_increment_ref_count(((struct sVar*)(right_value81=sVar_clone(it2_34)))));
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1127))->keys=(char**)come_increment_ref_count(((char**)(right_value23=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1127))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value23;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1128))->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value24=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(1024)), "./comelang2.h", 1128))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value24;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1129))->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value25=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1129))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { right_value25 = come_decrement_ref_count(right_value25, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value25;
                            __freed_obj__ = 0;
                            for(
                            i_19=0 ,                            __freed_obj__ = 0, 
                            0;                            _for_condtionalA1=                            i_19<1024 ,                            __freed_obj__ = 0, 
                            _for_condtionalA1;                            i_19++ ,                            __freed_obj__ = 0, 
                            0                            ){
                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1133))->item_existance[i_19]=(_Bool)0;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1136))->size=1024;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1137))->len=0;
                            __freed_obj__ = 0;
                            __dec_obj12=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1139))->key_list;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1139))->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value27=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value26=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1139))))))));
                            if(__dec_obj12) { come_call_finalizer(list$1charp_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value26);
                            if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[3] = right_value26;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value27;
                            __freed_obj__ = 0;
                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1141))->it=0;
                            __freed_obj__ = 0;
                            __result22__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result22__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sVar_finalize(struct sVar* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                it_15=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 174))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional3=it_15!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional3) {
                                                    prev_it_16=it_15;
                                                    __freed_obj__ = 0;
                                                    it_15=((struct list_item$1sTypeph*)come_null_check(it_15, "./comelang2.h", 177))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_16 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_16, (void*)0, (void*)0, 0, 0, 0, 0); }
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                it_17=((struct list$1charph*)come_null_check(self, "./comelang2.h", 174))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional4=it_17!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional4) {
                                                    prev_it_18=it_17;
                                                    __freed_obj__ = 0;
                                                    it_17=((struct list_item$1charph*)come_null_check(it_17, "./comelang2.h", 177))->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_18 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_18, (void*)0, (void*)0, 0, 0, 0, 0); }
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                                __freed_obj__ = 0;
                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 157))->len=0;
                                __freed_obj__ = 0;
                                __result21__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result21__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1charpp_finalize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                    it_20=((struct list$1charp*)come_null_check(self, "./comelang2.h", 174))->head;
                                    __freed_obj__ = 0;
                                    while(_while_condtional5=it_20!=((void*)0),                                    __freed_obj__ = 0, 
                                    _while_condtional5) {
                                        prev_it_21=it_20;
                                        __freed_obj__ = 0;
                                        it_20=((struct list_item$1charp*)come_null_check(it_20, "./comelang2.h", 177))->next;
                                        __freed_obj__ = 0;
                                        if(prev_it_21 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_21, (void*)0, (void*)0, 0, 0, 0, 0); }
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

static void list$1charp_finalize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                0;                                _for_condtionalA2=                                i_22<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->size ,                                __freed_obj__ = 0, 
                                _for_condtionalA2;                                i_22++ ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional45=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1176))->item_existance[i_22],                                    __freed_obj__ = 0, 
                                    _if_conditional45) {
                                        if(_if_conditional46=1,                                        __freed_obj__ = 0, 
                                        _if_conditional46) {
                                            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1173))->items[i_22] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1173))->items[i_22], (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1177))->items);
                                __freed_obj__ = 0;
                                for(
                                i_23=0 ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA3=                                i_23<((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1186))->size ,                                __freed_obj__ = 0, 
                                _for_condtionalA3;                                i_23++ ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional47=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1185))->item_existance[i_23],                                    __freed_obj__ = 0, 
                                    _if_conditional47) {
                                        if(_if_conditional48=1,                                        __freed_obj__ = 0, 
                                        _if_conditional48) {
                                            if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_23] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_23] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1182))->keys[i_23], (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1186))->keys);
                                __freed_obj__ = 0;
                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1188))->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1188))->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1190))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1341))->key_list, "./comelang2.h", 1341))->it=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1341))->key_list, "./comelang2.h", 1341))->head;
                            __freed_obj__ = 0;
                            if(_if_conditional50=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1347))->key_list, "./comelang2.h", 1347))->it,                            __freed_obj__ = 0, 
                            _if_conditional50) {
                                __result24__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1344))->key_list, "./comelang2.h", 1344))->it, "./comelang2.h", 1344))->item;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __result26__ = self==((void*)0)||((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1370))->key_list==((void*)0)||((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1370))->key_list, "./comelang2.h", 1370))->it==((void*)0);
                            __freed_obj__ = 0;
                            return __result26__;
                            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                            ((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1358))->key_list, "./comelang2.h", 1358))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1358))->key_list, "./comelang2.h", 1358))->it, "./comelang2.h", 1358))->next;
                            __freed_obj__ = 0;
                            if(_if_conditional52=((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1364))->key_list, "./comelang2.h", 1364))->it,                            __freed_obj__ = 0, 
                            _if_conditional52) {
                                __result28__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1361))->key_list, "./comelang2.h", 1361))->it, "./comelang2.h", 1361))->item;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                hash_31=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1263)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1263))->size;
                                __freed_obj__ = 0;
                                it_32=hash_31;
                                __freed_obj__ = 0;
                                while(_while_condtional6=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional6) {
                                    if(_if_conditional53=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1286))->item_existance[it_32],                                    __freed_obj__ = 0, 
                                    _if_conditional53) {
                                        if(_if_conditional55=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1274),__exception_result_var_a1=((struct optional$2boolbool*)(right_value29=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1274))->keys[it_32], "./comelang2.h", 1274)),key))), come_pop_stackframe(), __exception_result_var_a1)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29),
                                        (right_value29 && right_value29 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value29, 
                                        __freed_obj__ = 0, 
                                        _if_conditional55) {
                                            __result32__ = __result_obj__ = ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1271))->items[it_32];
                                            __freed_obj__ = 0;
                                            return __result32__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_32++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional56=it_32>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1282))->size,                                        __freed_obj__ = 0, 
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct map$2charphsVarph* map$2charphsVarph_insert2(struct map$2charphsVarph* self, char* key, struct sVar* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                if(_if_conditional58=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1505))->len*2>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1505))->size,                                __freed_obj__ = 0, 
                                _if_conditional58) {
                                    map$2charphsVarph_rehash(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1503)));
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                hash_46=string_get_hash_key(((char*)come_null_check(key, "./comelang2.h", 1505)))%((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1505))->size;
                                __freed_obj__ = 0;
                                it_47=hash_46;
                                __freed_obj__ = 0;
                                while(_while_condtional8=(_Bool)1,                                __freed_obj__ = 0, 
                                _while_condtional8) {
                                    if(_if_conditional62=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1561))->item_existance[it_47],                                    __freed_obj__ = 0, 
                                    _if_conditional62) {
                                        if(_if_conditional63=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1532),__exception_result_var_a2=((struct optional$2boolbool*)(right_value36=string_equals(((char*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1532))->keys[it_47], "./comelang2.h", 1532)),key))), come_pop_stackframe(), __exception_result_var_a2)),                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36),
                                        (right_value36 && right_value36 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                        __right_value_freed_obj[0] = right_value36, 
                                        __freed_obj__ = 0, 
                                        _if_conditional63) {
                                            if(_if_conditional64=1,                                            __freed_obj__ = 0, 
                                            _if_conditional64) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_47] && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_47] = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1514))->keys[it_47], (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->key_list, "./comelang2.h", 1515)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1515))->keys[it_47]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1516))->keys[it_47]=(char*)come_increment_ref_count(key);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                list$1charp_remove(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1519))->key_list, "./comelang2.h", 1519)),((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1519))->keys[it_47]);
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1520))->keys[it_47]=key;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional84=1,                                            __freed_obj__ = 0, 
                                            _if_conditional84) {
                                                if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1523))->items[it_47] && !__freed_obj__) { come_call_finalizer(sVar_finalize,((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1523))->items[it_47], (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1524))->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1527))->items[it_47]=item;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        it_47++;
                                        __freed_obj__ = 0;
                                        if(_if_conditional85=it_47>=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1541))->size,                                        __freed_obj__ = 0, 
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
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1543))->item_existance[it_47]=(_Bool)1;
                                        __freed_obj__ = 0;
                                        if(_if_conditional87=1,                                        __freed_obj__ = 0, 
                                        _if_conditional87) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1545))->keys[it_47]=(char*)come_increment_ref_count(key);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1548))->keys[it_47]=key;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional88=1,                                        __freed_obj__ = 0, 
                                        _if_conditional88) {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1551))->items[it_47]=(struct sVar*)come_increment_ref_count(item);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1554))->items[it_47]=item;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1557))->len++;
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
                                it2_67=list$1charp_begin(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1571))->key_list, "./comelang2.h", 1571))) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA6=                                !list$1charp_end(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1571))->key_list, "./comelang2.h", 1571))) ,                                __freed_obj__ = 0, 
                                _for_condtionalA6;                                it2_67=list$1charp_next(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1571))->key_list, "./comelang2.h", 1571))) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    if(_if_conditional93=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1569),__exception_result_var_a4=((struct optional$2boolbool*)(right_value38=string_equals(((char*)come_null_check(it2_67, "./comelang2.h", 1569)),key))), come_pop_stackframe(), __exception_result_var_a4)),                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38),
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
                                    list$1charp_push_back(((struct list$1charp*)come_null_check(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1572))->key_list, "./comelang2.h", 1572)),key);
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                        size_35=((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1374))->size*10;
                                        __freed_obj__ = 0;
                                        keys_36=(char**)come_increment_ref_count(((char**)(right_value31=(char**)come_calloc(1, sizeof(char*)*(1*(size_35)), "./comelang2.h", 1375))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                        if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value31;
                                        __freed_obj__ = 0;
                                        items_37=(struct sVar**)come_increment_ref_count(((struct sVar**)(right_value32=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_35)), "./comelang2.h", 1376))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value32);
                                        if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value32;
                                        __freed_obj__ = 0;
                                        item_existance_38=(_Bool*)come_increment_ref_count(((_Bool*)(right_value33=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_35)), "./comelang2.h", 1377))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value33);
                                        if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value33;
                                        __freed_obj__ = 0;
                                        len_39=0;
                                        __freed_obj__ = 0;
                                        for(
                                        it_40=map$2charphsVarph_begin(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))) ,                                        __freed_obj__ = 0, 
                                        0;                                        _for_condtionalA5=                                        !map$2charphsVarph_end(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))) ,                                        __freed_obj__ = 0, 
                                        _for_condtionalA5;                                        it_40=map$2charphsVarph_next(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))) ,                                        __freed_obj__ = 0, 
                                        0                                        ){
                                            __freed_obj__ = 0;
                                            memset(&default_value_41,0,sizeof(struct sVar*));
                                            __freed_obj__ = 0;
                                            it2_42=((struct sVar*)(right_value34=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1384)),it_40,default_value_41)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sVar_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value34;
                                            __freed_obj__ = 0;
                                            hash_43=string_get_hash_key(((char*)come_null_check(it_40, "./comelang2.h", 1385)))%size_35;
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
                                                    items_37[n_44]=((struct sVar*)(right_value35=map$2charphsVarph_at(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1405)),it_40,default_value_45)));
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
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1413))->items);
                                        __freed_obj__ = 0;
                                        if(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance && !__freed_obj__) { ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance = come_decrement_ref_count(((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1414))->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        come_free_object((char*)((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1415))->keys);
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1417))->keys=keys_36;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1418))->items=items_37;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1419))->item_existance=item_existance_38;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1421))->size=size_35;
                                        __freed_obj__ = 0;
                                        ((struct map$2charphsVarph*)come_null_check(self, "./comelang2.h", 1422))->len=len_39;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                    it_49=((struct list$1charp*)come_null_check(self, "./comelang2.h", 497))->head;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional9=it_49!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional9) {
                                                        if(_if_conditional65=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 503),__exception_result_var_a3=((struct optional$2boolbool*)(right_value37=string_equals(((char*)come_null_check(((struct list_item$1charp*)come_null_check(it_49, "./comelang2.h", 503))->item, "./comelang2.h", 503)),item))), come_pop_stackframe(), __exception_result_var_a3)),                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37),
                                                        (right_value37 && right_value37 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                        __right_value_freed_obj[0] = right_value37, 
                                                        __freed_obj__ = 0, 
                                                        _if_conditional65) {
                                                            list$1charp_delete(((struct list$1charp*)come_null_check(self, "./comelang2.h", 500)),it2_48,it2_48+1);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        it2_48++;
                                                        __freed_obj__ = 0;
                                                        it_49=((struct list_item$1charp*)come_null_check(it_49, "./comelang2.h", 505))->next;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    __result39__ = __result_obj__ = self;
                                                    __freed_obj__ = 0;
                                                    return __result39__;
                                                    __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                                    head+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 513))->len;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional67=tail<0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional67) {
                                                                    tail+=((struct list$1charp*)come_null_check(self, "./comelang2.h", 516))->len+1;
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
                                                                if(_if_conditional70=tail>((struct list$1charp*)come_null_check(self, "./comelang2.h", 533))->len,                                                                __freed_obj__ = 0, 
                                                                _if_conditional70) {
                                                                    tail=((struct list$1charp*)come_null_check(self, "./comelang2.h", 530))->len;
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
                                                                if(_if_conditional72=head==0&&tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 632))->len,                                                                __freed_obj__ = 0, 
                                                                _if_conditional72) {
                                                                    list$1charp_reset(((struct list$1charp*)come_null_check(self, "./comelang2.h", 539)));
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional73=head==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional73) {
                                                                        it_53=((struct list$1charp*)come_null_check(self, "./comelang2.h", 542))->head;
                                                                        __freed_obj__ = 0;
                                                                        i_54=0;
                                                                        __freed_obj__ = 0;
                                                                        while(_while_condtional11=it_53!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _while_condtional11) {
                                                                            if(_if_conditional74=i_54<tail,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional74) {
                                                                                prev_it_55=it_53;
                                                                                __freed_obj__ = 0;
                                                                                it_53=((struct list_item$1charp*)come_null_check(it_53, "./comelang2.h", 548))->next;
                                                                                __freed_obj__ = 0;
                                                                                i_54++;
                                                                                __freed_obj__ = 0;
                                                                                if(prev_it_55 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_55, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                __freed_obj__ = 0;
                                                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 553))->len--;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional75=i_54==tail,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional75) {
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 556))->head=it_53;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 557))->head, "./comelang2.h", 557))->prev=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                    break;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_53=((struct list_item$1charp*)come_null_check(it_53, "./comelang2.h", 561))->next;
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
                                                                        if(_if_conditional76=tail==((struct list$1charp*)come_null_check(self, "./comelang2.h", 632))->len,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional76) {
                                                                            it_56=((struct list$1charp*)come_null_check(self, "./comelang2.h", 567))->head;
                                                                            __freed_obj__ = 0;
                                                                            i_57=0;
                                                                            __freed_obj__ = 0;
                                                                            while(_while_condtional12=it_56!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _while_condtional12) {
                                                                                if(_if_conditional77=i_57==head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional77) {
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 571))->tail=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 571))->prev;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 572))->tail, "./comelang2.h", 572))->next=((void*)0);
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional78=i_57>=head,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional78) {
                                                                                    prev_it_58=it_56;
                                                                                    __freed_obj__ = 0;
                                                                                    it_56=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 578))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_57++;
                                                                                    __freed_obj__ = 0;
                                                                                    if(prev_it_58 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_58, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 583))->len--;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_56=((struct list_item$1charp*)come_null_check(it_56, "./comelang2.h", 586))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_57++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            it_59=((struct list$1charp*)come_null_check(self, "./comelang2.h", 592))->head;
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
                                                                                    head_prev_it_60=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 601))->prev;
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
                                                                                    it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 611))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_62++;
                                                                                    __freed_obj__ = 0;
                                                                                    if(prev_it_63 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_63, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 616))->len--;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    it_59=((struct list_item$1charp*)come_null_check(it_59, "./comelang2.h", 619))->next;
                                                                                    __freed_obj__ = 0;
                                                                                    i_62++;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional82=head_prev_it_60!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional82) {
                                                                                ((struct list_item$1charp*)come_null_check(head_prev_it_60, "./comelang2.h", 625))->next=tail_it_61;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional83=tail_it_61!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional83) {
                                                                                ((struct list_item$1charp*)come_null_check(tail_it_61, "./comelang2.h", 628))->prev=head_prev_it_60;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                                        it_51=((struct list$1charp*)come_null_check(self, "./comelang2.h", 481))->head;
                                                                        __freed_obj__ = 0;
                                                                        while(_while_condtional10=it_51!=((void*)0),                                                                        __freed_obj__ = 0, 
                                                                        _while_condtional10) {
                                                                            prev_it_52=it_51;
                                                                            __freed_obj__ = 0;
                                                                            it_51=((struct list_item$1charp*)come_null_check(it_51, "./comelang2.h", 484))->next;
                                                                            __freed_obj__ = 0;
                                                                            if(prev_it_52 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_52, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 488))->head=((void*)0);
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 489))->tail=((void*)0);
                                                                        __freed_obj__ = 0;
                                                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 491))->len=0;
                                                                        __freed_obj__ = 0;
                                                                        __result37__ = __result_obj__ = self;
                                                                        __freed_obj__ = 0;
                                                                        return __result37__;
                                                                        __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 341))->it=((struct list$1charp*)come_null_check(self, "./comelang2.h", 341))->head;
                                    __freed_obj__ = 0;
                                    if(_if_conditional90=((struct list$1charp*)come_null_check(self, "./comelang2.h", 347))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional90) {
                                        __result41__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 344))->it, "./comelang2.h", 344))->item;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result43__ = self==((void*)0)||((struct list$1charp*)come_null_check(self, "./comelang2.h", 371))->it==((void*)0);
                                    __freed_obj__ = 0;
                                    return __result43__;
                                    __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                    ((struct list$1charp*)come_null_check(self, "./comelang2.h", 359))->it=((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 359))->it, "./comelang2.h", 359))->next;
                                    __freed_obj__ = 0;
                                    if(_if_conditional92=((struct list$1charp*)come_null_check(self, "./comelang2.h", 365))->it,                                    __freed_obj__ = 0, 
                                    _if_conditional92) {
                                        __result45__ = __result_obj__ = ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 362))->it, "./comelang2.h", 362))->item;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                        if(_if_conditional95=((struct list$1charp*)come_null_check(self, "./comelang2.h", 307))->len==0,                                        __freed_obj__ = 0, 
                                        _if_conditional95) {
                                            litem_70=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value39=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 277))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value39;
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_70, "./comelang2.h", 279))->prev=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_70, "./comelang2.h", 280))->next=((void*)0);
                                            __freed_obj__ = 0;
                                            ((struct list_item$1charp*)come_null_check(litem_70, "./comelang2.h", 281))->item=item;
                                            __freed_obj__ = 0;
                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 283))->tail=litem_70;
                                            __freed_obj__ = 0;
                                            ((struct list$1charp*)come_null_check(self, "./comelang2.h", 284))->head=litem_70;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional96=((struct list$1charp*)come_null_check(self, "./comelang2.h", 307))->len==1,                                            __freed_obj__ = 0, 
                                            _if_conditional96) {
                                                litem_71=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value40=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 287))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value40;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 289))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 289))->head;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 290))->next=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_71, "./comelang2.h", 291))->item=item;
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 293))->tail=litem_71;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_71;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                litem_72=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value41=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 297))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                                if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value41;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 299))->prev=((struct list$1charp*)come_null_check(self, "./comelang2.h", 299))->tail;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 300))->next=((void*)0);
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(litem_72, "./comelang2.h", 301))->item=item;
                                                __freed_obj__ = 0;
                                                ((struct list_item$1charp*)come_null_check(((struct list$1charp*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_72;
                                                __freed_obj__ = 0;
                                                ((struct list$1charp*)come_null_check(self, "./comelang2.h", 304))->tail=litem_72;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        ((struct list$1charp*)come_null_check(self, "./comelang2.h", 307))->len++;
                                        __freed_obj__ = 0;
                                        __result47__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result47__;
                                        __freed_obj__ = 0;
}

static struct sVar* sVar_clone(struct sVar* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                result_77=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value54=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value53=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                                                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value53;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                                                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value54;
                                                __freed_obj__ = 0;
                                                it_78=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 195))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional14=it_78!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional14) {
                                                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_77, "./comelang2.h", 197)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_78, "./comelang2.h", 197))->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                                                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value58;
                                                    __freed_obj__ = 0;
                                                    it_78=((struct list_item$1sTypeph*)come_null_check(it_78, "./comelang2.h", 199))->next;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result56__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result56__;
                                                    __freed_obj__ = 0;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                        if(_if_conditional113=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len==0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional113) {
                                                            litem_79=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value55=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                                                            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value55;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 209))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 210))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj20=((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 211))->item;
                                                            ((struct list_item$1sTypeph*)come_null_check(litem_79, "./comelang2.h", 211))->item=(struct sType*)come_increment_ref_count(item);
                                                            if(__dec_obj20) { come_call_finalizer(sType_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_79;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head=litem_79;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional114=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len==1,                                                            __freed_obj__ = 0, 
                                                            _if_conditional114) {
                                                                litem_80=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value56=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                                                                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value56;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 219))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 220))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj21=((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 221))->item;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_80, "./comelang2.h", 221))->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj21) { come_call_finalizer(sType_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_80;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_80;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                litem_81=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value57=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                                                                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value57;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 229))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 230))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj22=((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 231))->item;
                                                                ((struct list_item$1sTypeph*)come_null_check(litem_81, "./comelang2.h", 231))->item=(struct sType*)come_increment_ref_count(item);
                                                                if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_81;
                                                                __freed_obj__ = 0;
                                                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_81;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 237))->len++;
                                                        __freed_obj__ = 0;
                                                        __result57__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result57__;
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

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                result_82=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value61=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value60=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                                                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value60;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value61);
                                                if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value61;
                                                __freed_obj__ = 0;
                                                it_83=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 195))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional15=it_83!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional15) {
                                                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_82, "./comelang2.h", 197)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value62=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_83, "./comelang2.h", 197))->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                                    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, ((struct sNode*)right_value62)->finalize, ((struct sNode*)right_value62)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value62;
                                                    __freed_obj__ = 0;
                                                    it_83=((struct list_item$1sNodeph*)come_null_check(it_83, "./comelang2.h", 199))->next;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                result_84=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value66=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value65=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
                                                if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value65;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
                                                if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value66;
                                                __freed_obj__ = 0;
                                                it_85=((struct list$1charph*)come_null_check(self, "./comelang2.h", 195))->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional16=it_85!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional16) {
                                                    list$1charph_add(((struct list$1charph*)come_null_check(result_84, "./comelang2.h", 197)),(char*)come_increment_ref_count(((char*)(right_value70=string_clone(((struct list_item$1charph*)come_null_check(it_85, "./comelang2.h", 197))->item)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                                                    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value70;
                                                    __freed_obj__ = 0;
                                                    it_85=((struct list_item$1charph*)come_null_check(it_85, "./comelang2.h", 199))->next;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
                                                    __freed_obj__ = 0;
                                                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 157))->len=0;
                                                    __freed_obj__ = 0;
                                                    __result62__ = __result_obj__ = self;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result62__;
                                                    __freed_obj__ = 0;
                                                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
                                                        if(_if_conditional121=((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len==0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional121) {
                                                            litem_86=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value67=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
                                                            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value67;
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 209))->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 210))->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                            __dec_obj26=((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 211))->item;
                                                            ((struct list_item$1charph*)come_null_check(litem_86, "./comelang2.h", 211))->item=(char*)come_increment_ref_count(item);
                                                            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_86;
                                                            __freed_obj__ = 0;
                                                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head=litem_86;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            if(_if_conditional122=((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len==1,                                                            __freed_obj__ = 0, 
                                                            _if_conditional122) {
                                                                litem_87=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value68=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                                                                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value68;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 219))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 220))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj27=((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 221))->item;
                                                                ((struct list_item$1charph*)come_null_check(litem_87, "./comelang2.h", 221))->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_87;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_87;
                                                                __freed_obj__ = 0;
                                                            }
                                                            else {
                                                                litem_88=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value69=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
                                                                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value69;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 229))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail;
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 230))->next=((void*)0);
                                                                __freed_obj__ = 0;
                                                                __dec_obj28=((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 231))->item;
                                                                ((struct list_item$1charph*)come_null_check(litem_88, "./comelang2.h", 231))->item=(char*)come_increment_ref_count(item);
                                                                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = 0;
                                                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_88;
                                                                __freed_obj__ = 0;
                                                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_88;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 237))->len++;
                                                        __freed_obj__ = 0;
                                                        __result63__ = __result_obj__ = self;
                                                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result63__;
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

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
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
char* __caller_sname_stack__;
int __caller_sline_stack__;
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

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
struct list$1sBlockph* __result72__;
void* right_value86;
void* right_value87;
struct list$1sBlockph* result_92;
struct list_item$1sBlockph* it_93;
_Bool _while_condtional18;
void* right_value91;
struct list$1sBlockph* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&result_92, 0, sizeof(struct list$1sBlockph*));
memset(&it_93, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value91, 0, sizeof(void*));
        if(_if_conditional174=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional174) {
            __result72__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result72__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_92=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value87=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)come_null_check(((struct list$1sBlockph*)(right_value86=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang2.h", 193))), "./comelang2.h", 193)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value87;
        __freed_obj__ = 0;
        it_93=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 195))->head;
        __freed_obj__ = 0;
        while(_while_condtional18=it_93!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional18) {
            list$1sBlockph_add(((struct list$1sBlockph*)come_null_check(result_92, "./comelang2.h", 197)),(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value91=sBlock_clone(((struct list_item$1sBlockph*)come_null_check(it_93, "./comelang2.h", 197))->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value91;
            __freed_obj__ = 0;
            it_93=((struct list_item$1sBlockph*)come_null_check(it_93, "./comelang2.h", 199))->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result75__ = __result_obj__ = result_92;
        if(result_92 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,result_92, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result75__;
        __freed_obj__ = 0;
        if(result_92 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,result_92, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sBlockph* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 155))->head=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 156))->tail=((void*)0);
            __freed_obj__ = 0;
            ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 157))->len=0;
            __freed_obj__ = 0;
            __result73__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result73__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sBlockph* it_90;
_Bool _while_condtional17;
struct list_item$1sBlockph* prev_it_91;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_90, 0, sizeof(struct list_item$1sBlockph*));
memset(&prev_it_91, 0, sizeof(struct list_item$1sBlockph*));
                it_90=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 174))->head;
                __freed_obj__ = 0;
                while(_while_condtional17=it_90!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional17) {
                    prev_it_91=it_90;
                    __freed_obj__ = 0;
                    it_90=((struct list_item$1sBlockph*)come_null_check(it_90, "./comelang2.h", 177))->next;
                    __freed_obj__ = 0;
                    if(prev_it_91 && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional175=self!=((void*)0)&&((struct list_item$1sBlockph*)come_null_check(self, "list_item$1sBlockphp_finalize", 1))->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional175) {
                            if(((struct list_item$1sBlockph*)come_null_check(self, "list_item$1sBlockphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct list_item$1sBlockph*)come_null_check(self, "list_item$1sBlockphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
void* right_value88;
struct list_item$1sBlockph* litem_94;
struct sBlock* __dec_obj42;
_Bool _if_conditional177;
void* right_value89;
struct list_item$1sBlockph* litem_95;
struct sBlock* __dec_obj43;
void* right_value90;
struct list_item$1sBlockph* litem_96;
struct sBlock* __dec_obj44;
struct list$1sBlockph* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
memset(&litem_94, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value89, 0, sizeof(void*));
memset(&litem_95, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_96, 0, sizeof(struct list_item$1sBlockph*));
                if(_if_conditional176=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 237))->len==0,                __freed_obj__ = 0, 
                _if_conditional176) {
                    litem_94=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value88=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 207))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value88;
                    __freed_obj__ = 0;
                    ((struct list_item$1sBlockph*)come_null_check(litem_94, "./comelang2.h", 209))->prev=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list_item$1sBlockph*)come_null_check(litem_94, "./comelang2.h", 210))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj42=((struct list_item$1sBlockph*)come_null_check(litem_94, "./comelang2.h", 211))->item;
                    ((struct list_item$1sBlockph*)come_null_check(litem_94, "./comelang2.h", 211))->item=(struct sBlock*)come_increment_ref_count(item);
                    if(__dec_obj42) { come_call_finalizer(sBlock_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 213))->tail=litem_94;
                    __freed_obj__ = 0;
                    ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 214))->head=litem_94;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional177=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 237))->len==1,                    __freed_obj__ = 0, 
                    _if_conditional177) {
                        litem_95=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value89=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 217))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value89;
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(litem_95, "./comelang2.h", 219))->prev=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 219))->head;
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(litem_95, "./comelang2.h", 220))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj43=((struct list_item$1sBlockph*)come_null_check(litem_95, "./comelang2.h", 221))->item;
                        ((struct list_item$1sBlockph*)come_null_check(litem_95, "./comelang2.h", 221))->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj43) { come_call_finalizer(sBlock_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 223))->tail=litem_95;
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 224))->head, "./comelang2.h", 224))->next=litem_95;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_96=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value90=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 227))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value90;
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(litem_96, "./comelang2.h", 229))->prev=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 229))->tail;
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(litem_96, "./comelang2.h", 230))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj44=((struct list_item$1sBlockph*)come_null_check(litem_96, "./comelang2.h", 231))->item;
                        ((struct list_item$1sBlockph*)come_null_check(litem_96, "./comelang2.h", 231))->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj44) { come_call_finalizer(sBlock_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 233))->tail, "./comelang2.h", 233))->next=litem_96;
                        __freed_obj__ = 0;
                        ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 234))->tail=litem_96;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 237))->len++;
                __freed_obj__ = 0;
                __result74__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result74__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

_Bool sIfNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

char* sIfNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value94;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value94=__builtin_string("sIfNode")));
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sBlock* else_block_97;
int elif_num_98;
struct sNode* expression_node_99;
_Bool _if_conditional185;
_Bool __result79__;
void* right_value95;
struct CVALUE* conditional_value_100;
struct sBlock* if_block_101;
static int num_if_conditional_102=0;
int num_if_conditional_stack_103;
_Bool _if_conditional188;
int i_104;
_Bool _for_condtionalA7;
void* right_value100;
struct sNode* expression_node2_109;
_Bool _if_conditional193;
_Bool __result85__;
void* right_value101;
struct CVALUE* conditional_value_110;
void* right_value106;
struct sBlock* elif_node_block_115;
static int num_elif_conditional_116=0;
int num_elif_conditional_stack_117;
_Bool _if_conditional198;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&else_block_97, 0, sizeof(struct sBlock*));
memset(&elif_num_98, 0, sizeof(int));
memset(&expression_node_99, 0, sizeof(struct sNode*));
memset(&right_value95, 0, sizeof(void*));
memset(&conditional_value_100, 0, sizeof(struct CVALUE*));
memset(&if_block_101, 0, sizeof(struct sBlock*));
memset(&num_if_conditional_stack_103, 0, sizeof(int));
memset(&i_104, 0, sizeof(int));
memset(&right_value100, 0, sizeof(void*));
memset(&expression_node2_109, 0, sizeof(struct sNode*));
memset(&right_value101, 0, sizeof(void*));
memset(&conditional_value_110, 0, sizeof(struct CVALUE*));
memset(&right_value106, 0, sizeof(void*));
memset(&elif_node_block_115, 0, sizeof(struct sBlock*));
memset(&num_elif_conditional_stack_117, 0, sizeof(int));
    else_block_97=((struct sIfNode*)come_null_check(self, "08if.c", 50))->mElseBlock;
    __freed_obj__ = 0;
    elif_num_98=((struct sIfNode*)come_null_check(self, "08if.c", 51))->mElifNum;
    __freed_obj__ = 0;
    expression_node_99=((struct sIfNode*)come_null_check(self, "08if.c", 54))->mExpressionNode;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "08if.c", 56))->without_semicolon=(_Bool)1;
    __freed_obj__ = 0;
    if(_if_conditional185=!((struct sNode*)come_null_check(expression_node_99, "08if.c", 60))->compile(((struct sNode*)come_null_check(expression_node_99, "08if.c", 60))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional185) {
        __result79__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result79__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "08if.c", 60))->without_semicolon=(_Bool)0;
    __freed_obj__ = 0;
    conditional_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value95=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if_block_101=((struct sIfNode*)come_null_check(self, "08if.c", 66))->mIfBlock;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_102);
    __freed_obj__ = 0;
    num_if_conditional_stack_103=num_if_conditional_102;
    __freed_obj__ = 0;
    add_come_code(info,"if(_if_conditional%d=%s,",num_if_conditional_102,((struct CVALUE*)come_null_check(conditional_value_100, "08if.c", 72))->c_value);
    __freed_obj__ = 0;
    add_last_code_to_source_with_comma(info);
    __freed_obj__ = 0;
    free_right_value_objects(info,(_Bool)1);
    __freed_obj__ = 0;
    add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_103);
    __freed_obj__ = 0;
    transpile_block(if_block_101,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    __freed_obj__ = 0;
    add_come_code(info,"}\n");
    __freed_obj__ = 0;
    if(_if_conditional188=elif_num_98>0,    __freed_obj__ = 0, 
    _if_conditional188) {
        for(
        i_104=0 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA7=        i_104<elif_num_98 ,        __freed_obj__ = 0, 
        _for_condtionalA7;        i_104++ ,        __freed_obj__ = 0, 
        0        ){
            come_clear_stackframe();
            expression_node2_109=optional$2sNodephbool_value((come_push_stackframe("08if.c", 84),((struct optional$2sNodephbool*)(right_value100=list$1sNodephp_operator_load_element(((struct sIfNode*)come_null_check(self, "08if.c", 84))->mElifExpressionNodes,i_104)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
            if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value100;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "08if.c", 86))->without_semicolon=(_Bool)1;
            __freed_obj__ = 0;
            if(_if_conditional193=!((struct sNode*)come_null_check(expression_node2_109, "08if.c", 90))->compile(((struct sNode*)come_null_check(expression_node2_109, "08if.c", 90))->_protocol_obj,info),            __freed_obj__ = 0, 
            _if_conditional193) {
                __result85__ = (_Bool)0;
                if(conditional_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result85__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "08if.c", 90))->without_semicolon=(_Bool)0;
            __freed_obj__ = 0;
            conditional_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value101=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
            if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value101;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            come_clear_stackframe();
            elif_node_block_115=optional$2sBlockphbool_value((come_push_stackframe("08if.c", 95),((struct optional$2sBlockphbool*)(right_value106=list$1sBlockphp_operator_load_element(((struct sIfNode*)come_null_check(self, "08if.c", 95))->mElifBlocks,i_104)))));
            come_pop_stackframe();
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sBlockphboolp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value106;
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_116);
            __freed_obj__ = 0;
            num_elif_conditional_stack_117=num_elif_conditional_116;
            __freed_obj__ = 0;
            add_come_code(info,"else if(_elif_conditional%d=%s,",num_elif_conditional_116,((struct CVALUE*)come_null_check(conditional_value_110, "08if.c", 101))->c_value);
            __freed_obj__ = 0;
            add_last_code_to_source_with_comma(info);
            __freed_obj__ = 0;
            free_right_value_objects(info,(_Bool)1);
            __freed_obj__ = 0;
            add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_117);
            __freed_obj__ = 0;
            transpile_block(elif_node_block_115,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
            __freed_obj__ = 0;
            add_come_code(info,"}\n");
            __freed_obj__ = 0;
            if(conditional_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional198=else_block_97,    __freed_obj__ = 0, 
    _if_conditional198) {
        add_come_code(info,"else {\n");
        __freed_obj__ = 0;
        transpile_block(else_block_97,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
        __freed_obj__ = 0;
        add_come_code(info,"}\n");
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    transpiler_clear_last_code(info);
    __freed_obj__ = 0;
    __result91__ = (_Bool)1;
    if(conditional_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
    if(conditional_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional186;
_Bool _if_conditional187;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional186=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional186) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional187=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional187) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct optional$2sNodephbool* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
struct list_item$1sNodeph* it_105;
int i_106;
_Bool _while_condtional19;
_Bool _if_conditional190;
void* right_value96;
void* right_value97;
struct optional$2sNodephbool* __result81__;
struct sNode* default_value_107;
void* right_value98;
void* right_value99;
struct optional$2sNodephbool* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_105, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_106, 0, sizeof(int));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&default_value_107, 0, sizeof(struct sNode*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
                if(_if_conditional189=position<0,                __freed_obj__ = 0, 
                _if_conditional189) {
                    position+=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 740))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_105=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 743))->head;
                __freed_obj__ = 0;
                i_106=0;
                __freed_obj__ = 0;
                while(_while_condtional19=it_105!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional19) {
                    if(_if_conditional190=position==i_106,                    __freed_obj__ = 0, 
                    _if_conditional190) {
                        __result81__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value97=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value96=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 747)))),(struct sNode*)come_increment_ref_count(((struct list_item$1sNodeph*)come_null_check(it_105, "./comelang2.h", 747))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
                        if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value96;
                        __freed_obj__ = 0;
                        return __result81__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_105=((struct list_item$1sNodeph*)come_null_check(it_105, "./comelang2.h", 749))->next;
                    __freed_obj__ = 0;
                    i_106++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_107,0,sizeof(struct sNode*));
                __freed_obj__ = 0;
                __result82__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sNodephbool*)(right_value99=optional$2sNodephbool_initialize(((struct optional$2sNodephbool*)(right_value98=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "./comelang2.h", 755))),(struct sNode*)come_increment_ref_count(default_value_107),(_Bool)0))));
                if(default_value_107 && !__freed_obj__) { default_value_107 = come_decrement_ref_count(default_value_107, ((struct sNode*)default_value_107)->finalize, ((struct sNode*)default_value_107)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { right_value98 = come_decrement_ref_count(right_value98, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value98;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
                if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value99;
                __freed_obj__ = 0;
                return __result82__;
                __freed_obj__ = 0;
                if(default_value_107 && !__freed_obj__) { default_value_107 = come_decrement_ref_count(default_value_107, ((struct sNode*)default_value_107)->finalize, ((struct sNode*)default_value_107)->_protocol_obj, 0, 0, 0); } 
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj48;
struct optional$2sNodephbool* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj48=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result80__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result80__;
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
_Bool _if_conditional191;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional191=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional191) {
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
_Bool _if_conditional192;
struct sNode* default_value_108;
struct sNode* __result83__;
struct sNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_108, 0, sizeof(struct sNode*));
                if(_if_conditional192=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional192) {
                    __freed_obj__ = 0;
                    memset(&default_value_108,0,sizeof(struct sNode*));
                    __freed_obj__ = 0;
                    __result83__ = __result_obj__ = default_value_108;
                    __freed_obj__ = 0;
                    return __result83__;
                    __freed_obj__ = 0;
                }
                else {
                    __result84__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result84__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct optional$2sBlockphbool* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
struct list_item$1sBlockph* it_111;
int i_112;
_Bool _while_condtional20;
_Bool _if_conditional195;
void* right_value102;
void* right_value103;
struct optional$2sBlockphbool* __result87__;
struct sBlock* default_value_113;
void* right_value104;
void* right_value105;
struct optional$2sBlockphbool* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_111, 0, sizeof(struct list_item$1sBlockph*));
memset(&i_112, 0, sizeof(int));
memset(&right_value102, 0, sizeof(void*));
memset(&right_value103, 0, sizeof(void*));
memset(&default_value_113, 0, sizeof(struct sBlock*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
                if(_if_conditional194=position<0,                __freed_obj__ = 0, 
                _if_conditional194) {
                    position+=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 740))->len;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_111=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 743))->head;
                __freed_obj__ = 0;
                i_112=0;
                __freed_obj__ = 0;
                while(_while_condtional20=it_111!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional20) {
                    if(_if_conditional195=position==i_112,                    __freed_obj__ = 0, 
                    _if_conditional195) {
                        __result87__ = __result_obj__ = ((struct optional$2sBlockphbool*)(right_value103=optional$2sBlockphbool_initialize((struct optional$2sBlockphbool*)come_increment_ref_count(((struct optional$2sBlockphbool*)(right_value102=(struct optional$2sBlockphbool*)come_calloc(1, sizeof(struct optional$2sBlockphbool)*(1), "./comelang2.h", 747)))),(struct sBlock*)come_increment_ref_count(((struct list_item$1sBlockph*)come_null_check(it_111, "./comelang2.h", 747))->item),(_Bool)1)));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
                        if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value102;
                        __freed_obj__ = 0;
                        return __result87__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_111=((struct list_item$1sBlockph*)come_null_check(it_111, "./comelang2.h", 749))->next;
                    __freed_obj__ = 0;
                    i_112++;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __freed_obj__ = 0;
                memset(&default_value_113,0,sizeof(struct sBlock*));
                __freed_obj__ = 0;
                __result88__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sBlockphbool*)(right_value105=optional$2sBlockphbool_initialize(((struct optional$2sBlockphbool*)(right_value104=(struct optional$2sBlockphbool*)come_calloc(1, sizeof(struct optional$2sBlockphbool)*(1), "./comelang2.h", 755))),(struct sBlock*)come_increment_ref_count(default_value_113),(_Bool)0))));
                if(default_value_113 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value104;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value105);
                if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sBlockphboolp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value105;
                __freed_obj__ = 0;
                return __result88__;
                __freed_obj__ = 0;
                if(default_value_113 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,default_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sBlockphbool* optional$2sBlockphbool_initialize(struct optional$2sBlockphbool* self, struct sBlock* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sBlock* __dec_obj49;
struct optional$2sBlockphbool* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            __dec_obj49=((struct optional$2sBlockphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                            ((struct optional$2sBlockphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sBlock*)come_increment_ref_count(v1);
                            if(__dec_obj49) { come_call_finalizer(sBlock_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct optional$2sBlockphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                            __freed_obj__ = 0;
                            __result86__ = __result_obj__ = self;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sBlockphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result86__;
                            __freed_obj__ = 0;
                            if(self && !__freed_obj__) { come_call_finalizer(optional$2sBlockphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                            if(v1 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sBlockphboolp_finalize(struct optional$2sBlockphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional196=self!=((void*)0)&&((struct optional$2sBlockphbool*)come_null_check(self, "optional$2sBlockphboolp_finalize", 1))->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional196) {
                                    if(((struct optional$2sBlockphbool*)come_null_check(self, "optional$2sBlockphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct optional$2sBlockphbool*)come_null_check(self, "optional$2sBlockphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sBlock* optional$2sBlockphbool_value(struct optional$2sBlockphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
struct sBlock* default_value_114;
struct sBlock* __result89__;
struct sBlock* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_114, 0, sizeof(struct sBlock*));
                if(_if_conditional197=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional197) {
                    __freed_obj__ = 0;
                    memset(&default_value_114,0,sizeof(struct sBlock*));
                    __freed_obj__ = 0;
                    __result89__ = __result_obj__ = default_value_114;
                    __freed_obj__ = 0;
                    return __result89__;
                    __freed_obj__ = 0;
                }
                else {
                    __result90__ = __result_obj__ = ((struct optional$2sBlockphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result90__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

int sIfNode_sline(struct sIfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result92__ = ((struct sIfNode*)come_null_check(self, "08if.c", 127))->sline;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

char* sIfNode_sname(struct sIfNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value107;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
    __result93__ = __result_obj__ = ((char*)(right_value107=__builtin_string(((struct sIfNode*)come_null_check(self, "08if.c", 132))->sname)));
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value108;
char* __dec_obj50;
void* right_value109;
struct sNode* __dec_obj51;
void* right_value110;
struct sBlock* __dec_obj52;
struct sOrStatmentNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
    ((struct sOrStatmentNode*)come_null_check(self, "08if.c", 147))->sline=((struct sInfo*)come_null_check(info, "08if.c", 147))->sline;
    __freed_obj__ = 0;
    __dec_obj50=((struct sOrStatmentNode*)come_null_check(self, "08if.c", 148))->sname;
    ((struct sOrStatmentNode*)come_null_check(self, "08if.c", 148))->sname=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(((struct sInfo*)come_null_check(info, "08if.c", 148))->sname))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value108;
    __freed_obj__ = 0;
    __dec_obj51=((struct sOrStatmentNode*)come_null_check(self, "08if.c", 150))->mExpressionNode;
    ((struct sOrStatmentNode*)come_null_check(self, "08if.c", 150))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value109=sNode_clone(expression_node))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, ((struct sNode*)right_value109)->finalize, ((struct sNode*)right_value109)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value109;
    __freed_obj__ = 0;
    __dec_obj52=((struct sOrStatmentNode*)come_null_check(self, "08if.c", 151))->mIfBlock;
    ((struct sOrStatmentNode*)come_null_check(self, "08if.c", 151))->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value110=sBlock_clone(if_block))));
    if(__dec_obj52) { come_call_finalizer(sBlock_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value110;
    __freed_obj__ = 0;
    __result94__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrStatmentNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result95__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

char* sOrStatmentNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value111;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
    __result96__ = __result_obj__ = ((char*)(right_value111=__builtin_string("sOrStatmentNode")));
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* expression_node_118;
_Bool _if_conditional202;
_Bool __result97__;
void* right_value112;
struct CVALUE* conditional_value_119;
struct sBlock* if_block_120;
static int num_or_conditional_121=0;
int num_or_conditional_stack_122;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&expression_node_118, 0, sizeof(struct sNode*));
memset(&right_value112, 0, sizeof(void*));
memset(&conditional_value_119, 0, sizeof(struct CVALUE*));
memset(&if_block_120, 0, sizeof(struct sBlock*));
memset(&num_or_conditional_stack_122, 0, sizeof(int));
    expression_node_118=((struct sOrStatmentNode*)come_null_check(self, "08if.c", 169))->mExpressionNode;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "08if.c", 171))->without_semicolon=(_Bool)1;
    __freed_obj__ = 0;
    if(_if_conditional202=!((struct sNode*)come_null_check(expression_node_118, "08if.c", 175))->compile(((struct sNode*)come_null_check(expression_node_118, "08if.c", 175))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional202) {
        __result97__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result97__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "08if.c", 175))->without_semicolon=(_Bool)0;
    __freed_obj__ = 0;
    conditional_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if_block_120=((struct sOrStatmentNode*)come_null_check(self, "08if.c", 181))->mIfBlock;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_121);
    __freed_obj__ = 0;
    add_come_code(info,"if(_or_conditional%d=%s,",num_or_conditional_121,((struct CVALUE*)come_null_check(conditional_value_119, "08if.c", 186))->c_value);
    __freed_obj__ = 0;
    num_or_conditional_stack_122=num_or_conditional_121;
    __freed_obj__ = 0;
    add_last_code_to_source_with_comma(info);
    __freed_obj__ = 0;
    free_right_value_objects(info,(_Bool)1);
    __freed_obj__ = 0;
    add_come_code(info,"_or_conditional%d != 0) {\n",num_or_conditional_stack_122);
    __freed_obj__ = 0;
    transpile_block(if_block_120,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    __freed_obj__ = 0;
    add_come_code(info,"}\n");
    __freed_obj__ = 0;
    transpiler_clear_last_code(info);
    __freed_obj__ = 0;
    __result98__ = (_Bool)1;
    if(conditional_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
    if(conditional_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrStatmentNode_sline(struct sOrStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result99__ = ((struct sOrStatmentNode*)come_null_check(self, "08if.c", 206))->sline;
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

char* sOrStatmentNode_sname(struct sOrStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value113;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
    __result100__ = __result_obj__ = ((char*)(right_value113=__builtin_string(((struct sOrStatmentNode*)come_null_check(self, "08if.c", 211))->sname)));
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value114;
char* __dec_obj53;
void* right_value115;
struct sNode* __dec_obj54;
void* right_value116;
struct sBlock* __dec_obj55;
struct sAndStatmentNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
memset(&right_value116, 0, sizeof(void*));
    ((struct sAndStatmentNode*)come_null_check(self, "08if.c", 226))->sline=((struct sInfo*)come_null_check(info, "08if.c", 226))->sline;
    __freed_obj__ = 0;
    __dec_obj53=((struct sAndStatmentNode*)come_null_check(self, "08if.c", 227))->sname;
    ((struct sAndStatmentNode*)come_null_check(self, "08if.c", 227))->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(((struct sInfo*)come_null_check(info, "08if.c", 227))->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value114;
    __freed_obj__ = 0;
    __dec_obj54=((struct sAndStatmentNode*)come_null_check(self, "08if.c", 229))->mExpressionNode;
    ((struct sAndStatmentNode*)come_null_check(self, "08if.c", 229))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(expression_node))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value115;
    __freed_obj__ = 0;
    __dec_obj55=((struct sAndStatmentNode*)come_null_check(self, "08if.c", 230))->mIfBlock;
    ((struct sAndStatmentNode*)come_null_check(self, "08if.c", 230))->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value116=sBlock_clone(if_block))));
    if(__dec_obj55) { come_call_finalizer(sBlock_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value116;
    __freed_obj__ = 0;
    __result101__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndStatmentNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

char* sAndStatmentNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value117=__builtin_string("sAndStatmentNode")));
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* expression_node_123;
_Bool _if_conditional206;
_Bool __result104__;
void* right_value118;
struct CVALUE* conditional_value_124;
struct sBlock* if_block_125;
static int num_and_conditional_126=0;
int num_and_conditional_stack_127;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&expression_node_123, 0, sizeof(struct sNode*));
memset(&right_value118, 0, sizeof(void*));
memset(&conditional_value_124, 0, sizeof(struct CVALUE*));
memset(&if_block_125, 0, sizeof(struct sBlock*));
memset(&num_and_conditional_stack_127, 0, sizeof(int));
    expression_node_123=((struct sAndStatmentNode*)come_null_check(self, "08if.c", 248))->mExpressionNode;
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "08if.c", 250))->without_semicolon=(_Bool)1;
    __freed_obj__ = 0;
    if(_if_conditional206=!((struct sNode*)come_null_check(expression_node_123, "08if.c", 254))->compile(((struct sNode*)come_null_check(expression_node_123, "08if.c", 254))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional206) {
        __result104__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    ((struct sInfo*)come_null_check(info, "08if.c", 254))->without_semicolon=(_Bool)0;
    __freed_obj__ = 0;
    conditional_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    if_block_125=((struct sAndStatmentNode*)come_null_check(self, "08if.c", 260))->mIfBlock;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_126);
    __freed_obj__ = 0;
    add_come_code(info,"if(_and_conditional%d=%s,",num_and_conditional_126,((struct CVALUE*)come_null_check(conditional_value_124, "08if.c", 265))->c_value);
    __freed_obj__ = 0;
    num_and_conditional_stack_127=num_and_conditional_126;
    __freed_obj__ = 0;
    add_last_code_to_source_with_comma(info);
    __freed_obj__ = 0;
    free_right_value_objects(info,(_Bool)1);
    __freed_obj__ = 0;
    add_come_code(info,"_and_conditional%d == 0) {\n",num_and_conditional_stack_127);
    __freed_obj__ = 0;
    transpile_block(if_block_125,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0);
    __freed_obj__ = 0;
    add_come_code(info,"}\n");
    __freed_obj__ = 0;
    transpiler_clear_last_code(info);
    __freed_obj__ = 0;
    __result105__ = (_Bool)1;
    if(conditional_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(conditional_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,conditional_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndStatmentNode_sline(struct sAndStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result106__ = ((struct sAndStatmentNode*)come_null_check(self, "08if.c", 285))->sline;
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
}

char* sAndStatmentNode_sname(struct sAndStatmentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value119;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
    __result107__ = __result_obj__ = ((char*)(right_value119=__builtin_string(((struct sAndStatmentNode*)come_null_check(self, "08if.c", 290))->sname)));
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value120;
char* sname_128;
int sline_129;
void* right_value121;
struct sBlock* if_block_130;
void* right_value122;
void* right_value123;
struct list$1sNodeph* elif_expression_nodes_131;
void* right_value124;
void* right_value125;
struct list$1sBlockph* elif_blocks_132;
int elif_num_133;
struct sBlock* else_block_134;
_Bool _while_condtional21;
char* saved_p_135;
int saved_sline_136;
_Bool _if_conditional207;
void* right_value126;
char* buf_138;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value127;
void* right_value128;
struct sNode* expression_node_140;
void* right_value132;
void* right_value133;
struct sBlock* elif_block_144;
void* right_value137;
struct sBlock* __dec_obj62;
void* right_value138;
void* right_value139;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* right_value147;
struct sNode* result_149;
struct sNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&sname_128, 0, sizeof(char*));
memset(&sline_129, 0, sizeof(int));
memset(&right_value121, 0, sizeof(void*));
memset(&if_block_130, 0, sizeof(struct sBlock*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value123, 0, sizeof(void*));
memset(&elif_expression_nodes_131, 0, sizeof(struct list$1sNodeph*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
memset(&elif_blocks_132, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_133, 0, sizeof(int));
memset(&else_block_134, 0, sizeof(struct sBlock*));
memset(&saved_p_135, 0, sizeof(char*));
memset(&saved_sline_136, 0, sizeof(int));
memset(&right_value126, 0, sizeof(void*));
memset(&buf_138, 0, sizeof(char*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&expression_node_140, 0, sizeof(struct sNode*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
memset(&elif_block_144, 0, sizeof(struct sBlock*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&result_149, 0, sizeof(struct sNode*));
    sname_128=(char*)come_increment_ref_count(((char*)(right_value120=string_clone(((struct sInfo*)come_null_check(info, "08if.c", 295))->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    sline_129=((struct sInfo*)come_null_check(info, "08if.c", 296))->sline;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if_block_130=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value121=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121;
    __freed_obj__ = 0;
    elif_expression_nodes_131=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value123=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value122=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 302))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value122;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value123;
    __freed_obj__ = 0;
    elif_blocks_132=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value125=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value124=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 304))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value124;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value125;
    __freed_obj__ = 0;
    elif_num_133=0;
    __freed_obj__ = 0;
    else_block_134=((void*)0);
    __freed_obj__ = 0;
    while(_while_condtional21=1,    __freed_obj__ = 0, 
    _while_condtional21) {
        saved_p_135=((struct sInfo*)come_null_check(info, "08if.c", 311))->p;
        __freed_obj__ = 0;
        saved_sline_136=((struct sInfo*)come_null_check(info, "08if.c", 312))->sline;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional207=!xisalpha(*((struct sInfo*)come_null_check(info, "08if.c", 319))->p),        __freed_obj__ = 0, 
        _if_conditional207) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        buf_138=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("08if.c", 320),((struct optional$2charphbool*)(right_value126=parse_word(info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value126;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional210=string_operator_equals(buf_138,"else"),        __freed_obj__ = 0, 
        _if_conditional210) {
            if(_if_conditional211=parsecmp("if",info),            __freed_obj__ = 0, 
            _if_conditional211) {
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "08if.c", 326))->p+=strlen("if");
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                come_clear_stackframe();
                optional$2intbool_value((come_push_stackframe("08if.c", 330),((struct optional$2intbool*)(right_value127=expected_next_character(40,info)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
                if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value127;
                __freed_obj__ = 0;
                expression_node_140=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
                if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[1] = right_value128;
                __freed_obj__ = 0;
                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(elif_expression_nodes_131, "08if.c", 335)),(struct sNode*)come_increment_ref_count(expression_node_140));
                __freed_obj__ = 0;
                come_clear_stackframe();
                optional$2intbool_value((come_push_stackframe("08if.c", 337),((struct optional$2intbool*)(right_value132=expected_next_character(41,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value132);
                if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value132;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                elif_block_144=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value133=parse_block(info,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value133);
                if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value133;
                __freed_obj__ = 0;
                list$1sBlockph_push_back(((struct list$1sBlockph*)come_null_check(elif_blocks_132, "08if.c", 343)),(struct sBlock*)come_increment_ref_count(elif_block_144));
                __freed_obj__ = 0;
                elif_num_133++;
                __freed_obj__ = 0;
                if(expression_node_140 && !__freed_obj__) { expression_node_140 = come_decrement_ref_count(expression_node_140, ((struct sNode*)expression_node_140)->finalize, ((struct sNode*)expression_node_140)->_protocol_obj, 0, 0, 0); } 
                if(elif_block_144 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,elif_block_144, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                __dec_obj62=else_block_134;
                else_block_134=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value137=parse_block(info,(_Bool)0))));
                if(__dec_obj62) { come_call_finalizer(sBlock_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
                if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value137;
                __freed_obj__ = 0;
                if(buf_138 && !__freed_obj__) { buf_138 = come_decrement_ref_count(buf_138, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            ((struct sInfo*)come_null_check(info, "08if.c", 353))->p=saved_p_135;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "08if.c", 354))->sline=saved_sline_136;
            __freed_obj__ = 0;
            if(buf_138 && !__freed_obj__) { buf_138 = come_decrement_ref_count(buf_138, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(buf_138 && !__freed_obj__) { buf_138 = come_decrement_ref_count(buf_138, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 359);
    _inf_obj_value1=come_increment_ref_count(((struct sIfNode*)(right_value139=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value138=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 359)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_130,elif_expression_nodes_131,elif_blocks_132,elif_num_133,else_block_134,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sIfNode_sline;
    _inf_value1->sname=(void*)sIfNode_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    result_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=_inf_value1)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value138;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value139;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[8] = right_value147;
    __freed_obj__ = 0;
    __result116__ = __result_obj__ = result_149;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_128 && !__freed_obj__) { sname_128 = come_decrement_ref_count(sname_128, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_130 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_131 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_132 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_134 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_149 && !__freed_obj__) { result_149 = come_decrement_ref_count(result_149, ((struct sNode*)result_149)->finalize, ((struct sNode*)result_149)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_128 && !__freed_obj__) { sname_128 = come_decrement_ref_count(sname_128, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_130 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_131 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_132 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_134 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_149 && !__freed_obj__) { result_149 = come_decrement_ref_count(result_149, ((struct sNode*)result_149)->finalize, ((struct sNode*)result_149)->_protocol_obj, 0, 0, 0); } 
}

static char* optional$2charphbool_value(struct optional$2charphbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional208;
char* default_value_137;
char* __result108__;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_137, 0, sizeof(char*));
            if(_if_conditional208=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional208) {
                __freed_obj__ = 0;
                memset(&default_value_137,0,sizeof(char*));
                __freed_obj__ = 0;
                __result108__ = __result_obj__ = default_value_137;
                __freed_obj__ = 0;
                return __result108__;
                __freed_obj__ = 0;
            }
            else {
                __result109__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result109__;
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
_Bool _if_conditional209;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional209=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional209) {
                if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional212;
int default_value_139;
int __result110__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_139, 0, sizeof(int));
                    if(_if_conditional212=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional212) {
                        __freed_obj__ = 0;
                        memset(&default_value_139,0,sizeof(int));
                        __freed_obj__ = 0;
                        __result110__ = default_value_139;
                        __freed_obj__ = 0;
                        return __result110__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result111__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result111__;
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

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
void* right_value129;
struct list_item$1sNodeph* litem_141;
struct sNode* __dec_obj56;
_Bool _if_conditional214;
void* right_value130;
struct list_item$1sNodeph* litem_142;
struct sNode* __dec_obj57;
void* right_value131;
struct list_item$1sNodeph* litem_143;
struct sNode* __dec_obj58;
struct list$1sNodeph* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
memset(&litem_141, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value130, 0, sizeof(void*));
memset(&litem_142, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value131, 0, sizeof(void*));
memset(&litem_143, 0, sizeof(struct list_item$1sNodeph*));
                    if(_if_conditional213=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 307))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional213) {
                        litem_141=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value129=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 277))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
                        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value129;
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 279))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 280))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj56=((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 281))->item;
                        ((struct list_item$1sNodeph*)come_null_check(litem_141, "./comelang2.h", 281))->item=(struct sNode*)come_increment_ref_count(item);
                        if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_141;
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 284))->head=litem_141;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional214=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 307))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional214) {
                            litem_142=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value130=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 287))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
                            if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value130;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 289))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 289))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 290))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj57=((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 291))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_142, "./comelang2.h", 291))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_142;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_142;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_143=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value131=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 297))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
                            if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value131;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 299))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 299))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 300))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj58=((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 301))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_143, "./comelang2.h", 301))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_143;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_143;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 307))->len++;
                    __freed_obj__ = 0;
                    __result112__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                    __freed_obj__ = 0;
                    return __result112__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional215;
void* right_value134;
struct list_item$1sBlockph* litem_145;
struct sBlock* __dec_obj59;
_Bool _if_conditional216;
void* right_value135;
struct list_item$1sBlockph* litem_146;
struct sBlock* __dec_obj60;
void* right_value136;
struct list_item$1sBlockph* litem_147;
struct sBlock* __dec_obj61;
struct list$1sBlockph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
memset(&litem_145, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value135, 0, sizeof(void*));
memset(&litem_146, 0, sizeof(struct list_item$1sBlockph*));
memset(&right_value136, 0, sizeof(void*));
memset(&litem_147, 0, sizeof(struct list_item$1sBlockph*));
                    if(_if_conditional215=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 307))->len==0,                    __freed_obj__ = 0, 
                    _if_conditional215) {
                        litem_145=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value134=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 277))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
                        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value134;
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(litem_145, "./comelang2.h", 279))->prev=((void*)0);
                        __freed_obj__ = 0;
                        ((struct list_item$1sBlockph*)come_null_check(litem_145, "./comelang2.h", 280))->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj59=((struct list_item$1sBlockph*)come_null_check(litem_145, "./comelang2.h", 281))->item;
                        ((struct list_item$1sBlockph*)come_null_check(litem_145, "./comelang2.h", 281))->item=(struct sBlock*)come_increment_ref_count(item);
                        if(__dec_obj59) { come_call_finalizer(sBlock_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 283))->tail=litem_145;
                        __freed_obj__ = 0;
                        ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 284))->head=litem_145;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional216=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 307))->len==1,                        __freed_obj__ = 0, 
                        _if_conditional216) {
                            litem_146=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value135=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 287))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
                            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value135;
                            __freed_obj__ = 0;
                            ((struct list_item$1sBlockph*)come_null_check(litem_146, "./comelang2.h", 289))->prev=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 289))->head;
                            __freed_obj__ = 0;
                            ((struct list_item$1sBlockph*)come_null_check(litem_146, "./comelang2.h", 290))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj60=((struct list_item$1sBlockph*)come_null_check(litem_146, "./comelang2.h", 291))->item;
                            ((struct list_item$1sBlockph*)come_null_check(litem_146, "./comelang2.h", 291))->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj60) { come_call_finalizer(sBlock_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 293))->tail=litem_146;
                            __freed_obj__ = 0;
                            ((struct list_item$1sBlockph*)come_null_check(((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 294))->head, "./comelang2.h", 294))->next=litem_146;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_147=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(right_value136=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang2.h", 297))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
                            if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sBlockphp_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value136;
                            __freed_obj__ = 0;
                            ((struct list_item$1sBlockph*)come_null_check(litem_147, "./comelang2.h", 299))->prev=((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 299))->tail;
                            __freed_obj__ = 0;
                            ((struct list_item$1sBlockph*)come_null_check(litem_147, "./comelang2.h", 300))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj61=((struct list_item$1sBlockph*)come_null_check(litem_147, "./comelang2.h", 301))->item;
                            ((struct list_item$1sBlockph*)come_null_check(litem_147, "./comelang2.h", 301))->item=(struct sBlock*)come_increment_ref_count(item);
                            if(__dec_obj61) { come_call_finalizer(sBlock_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sBlockph*)come_null_check(((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 303))->tail, "./comelang2.h", 303))->next=litem_147;
                            __freed_obj__ = 0;
                            ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 304))->tail=litem_147;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    ((struct list$1sBlockph*)come_null_check(self, "./comelang2.h", 307))->len++;
                    __freed_obj__ = 0;
                    __result113__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result113__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(sBlock_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value148;
char* sname_150;
int sline_151;
void* right_value149;
struct sNode* expression_node2_152;
void* right_value150;
struct sBlock* if_block_153;
void* right_value151;
void* right_value152;
struct list$1sNodeph* elif_expression_nodes_154;
void* right_value153;
void* right_value154;
struct list$1sBlockph* elif_blocks_155;
int elif_num_156;
struct sBlock* else_block_157;
_Bool _while_condtional22;
char* saved_p_158;
int saved_sline_159;
_Bool _if_conditional232;
void* right_value155;
char* buf_160;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value156;
void* right_value157;
struct sNode* expression_node_161;
void* right_value158;
void* right_value159;
struct sBlock* elif_block_162;
void* right_value160;
struct sBlock* __dec_obj69;
void* right_value161;
void* right_value162;
struct sNode* _inf_value2;
struct sIfNode* _inf_obj_value2;
void* right_value170;
struct sNode* result_164;
struct sNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value148, 0, sizeof(void*));
memset(&sname_150, 0, sizeof(char*));
memset(&sline_151, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&expression_node2_152, 0, sizeof(struct sNode*));
memset(&right_value150, 0, sizeof(void*));
memset(&if_block_153, 0, sizeof(struct sBlock*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
memset(&elif_expression_nodes_154, 0, sizeof(struct list$1sNodeph*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&elif_blocks_155, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_156, 0, sizeof(int));
memset(&else_block_157, 0, sizeof(struct sBlock*));
memset(&saved_p_158, 0, sizeof(char*));
memset(&saved_sline_159, 0, sizeof(int));
memset(&right_value155, 0, sizeof(void*));
memset(&buf_160, 0, sizeof(char*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&expression_node_161, 0, sizeof(struct sNode*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&elif_block_162, 0, sizeof(struct sBlock*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sNode*));
    sname_150=(char*)come_increment_ref_count(((char*)(right_value148=string_clone(((struct sInfo*)come_null_check(info, "08if.c", 366))->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148;
    __freed_obj__ = 0;
    sline_151=((struct sInfo*)come_null_check(info, "08if.c", 367))->sline;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    expression_node2_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value149=craete_logical_denial((struct sNode*)come_increment_ref_count(expression_node),info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value149;
    __freed_obj__ = 0;
    if_block_153=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value150=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value150;
    __freed_obj__ = 0;
    elif_expression_nodes_154=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value152=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value151=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 375))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value151;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value152;
    __freed_obj__ = 0;
    elif_blocks_155=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value154=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value153=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 377))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value153;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value154;
    __freed_obj__ = 0;
    elif_num_156=0;
    __freed_obj__ = 0;
    else_block_157=((void*)0);
    __freed_obj__ = 0;
    while(_while_condtional22=1,    __freed_obj__ = 0, 
    _while_condtional22) {
        saved_p_158=((struct sInfo*)come_null_check(info, "08if.c", 384))->p;
        __freed_obj__ = 0;
        saved_sline_159=((struct sInfo*)come_null_check(info, "08if.c", 385))->sline;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional232=!xisalpha(*((struct sInfo*)come_null_check(info, "08if.c", 392))->p),        __freed_obj__ = 0, 
        _if_conditional232) {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        buf_160=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("08if.c", 393),((struct optional$2charphbool*)(right_value155=parse_word(info))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if(_if_conditional233=string_operator_equals(buf_160,"else"),        __freed_obj__ = 0, 
        _if_conditional233) {
            if(_if_conditional234=parsecmp("if",info),            __freed_obj__ = 0, 
            _if_conditional234) {
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "08if.c", 399))->p+=strlen("if");
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                come_clear_stackframe();
                optional$2intbool_value((come_push_stackframe("08if.c", 403),((struct optional$2intbool*)(right_value156=expected_next_character(40,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value156;
                __freed_obj__ = 0;
                expression_node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
                if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[1] = right_value157;
                __freed_obj__ = 0;
                list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(elif_expression_nodes_154, "08if.c", 408)),(struct sNode*)come_increment_ref_count(expression_node_161));
                __freed_obj__ = 0;
                come_clear_stackframe();
                optional$2intbool_value((come_push_stackframe("08if.c", 410),((struct optional$2intbool*)(right_value158=expected_next_character(41,info)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value158);
                if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value158;
                __freed_obj__ = 0;
                parse_sharp_v5(info);
                __freed_obj__ = 0;
                elif_block_162=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value159=parse_block(info,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value159);
                if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value159;
                __freed_obj__ = 0;
                list$1sBlockph_push_back(((struct list$1sBlockph*)come_null_check(elif_blocks_155, "08if.c", 416)),(struct sBlock*)come_increment_ref_count(elif_block_162));
                __freed_obj__ = 0;
                elif_num_156++;
                __freed_obj__ = 0;
                if(expression_node_161 && !__freed_obj__) { expression_node_161 = come_decrement_ref_count(expression_node_161, ((struct sNode*)expression_node_161)->finalize, ((struct sNode*)expression_node_161)->_protocol_obj, 0, 0, 0); } 
                if(elif_block_162 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,elif_block_162, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                __dec_obj69=else_block_157;
                else_block_157=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value160=parse_block(info,(_Bool)0))));
                if(__dec_obj69) { come_call_finalizer(sBlock_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
                if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value160;
                __freed_obj__ = 0;
                if(buf_160 && !__freed_obj__) { buf_160 = come_decrement_ref_count(buf_160, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        else {
            ((struct sInfo*)come_null_check(info, "08if.c", 426))->p=saved_p_158;
            __freed_obj__ = 0;
            ((struct sInfo*)come_null_check(info, "08if.c", 427))->sline=saved_sline_159;
            __freed_obj__ = 0;
            if(buf_160 && !__freed_obj__) { buf_160 = come_decrement_ref_count(buf_160, (void*)0, (void*)0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(buf_160 && !__freed_obj__) { buf_160 = come_decrement_ref_count(buf_160, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 432);
    _inf_obj_value2=come_increment_ref_count(((struct sIfNode*)(right_value162=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value161=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 432)))),(struct sNode*)come_increment_ref_count(expression_node2_152),if_block_153,elif_expression_nodes_154,elif_blocks_155,elif_num_156,else_block_157,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sIfNode_finalize;
    _inf_value2->clone=(void*)sIfNode_clone;
    _inf_value2->compile=(void*)sIfNode_compile;
    _inf_value2->sline=(void*)sIfNode_sline;
    _inf_value2->sname=(void*)sIfNode_sname;
    _inf_value2->terminated=(void*)sIfNode_terminated;
    _inf_value2->kind=(void*)sIfNode_kind;
    result_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value170=_inf_value2)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value161;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value162;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, ((struct sNode*)right_value170)->finalize, ((struct sNode*)right_value170)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[9] = right_value170;
    __freed_obj__ = 0;
    __result119__ = __result_obj__ = result_164;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_150 && !__freed_obj__) { sname_150 = come_decrement_ref_count(sname_150, (void*)0, (void*)0, 0, 0, 0); }
    if(expression_node2_152 && !__freed_obj__) { expression_node2_152 = come_decrement_ref_count(expression_node2_152, ((struct sNode*)expression_node2_152)->finalize, ((struct sNode*)expression_node2_152)->_protocol_obj, 0, 0, 0); } 
    if(if_block_153 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_154 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_155 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_155, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_157 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_164 && !__freed_obj__) { result_164 = come_decrement_ref_count(result_164, ((struct sNode*)result_164)->finalize, ((struct sNode*)result_164)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_150 && !__freed_obj__) { sname_150 = come_decrement_ref_count(sname_150, (void*)0, (void*)0, 0, 0, 0); }
    if(expression_node2_152 && !__freed_obj__) { expression_node2_152 = come_decrement_ref_count(expression_node2_152, ((struct sNode*)expression_node2_152)->finalize, ((struct sNode*)expression_node2_152)->_protocol_obj, 0, 0, 0); } 
    if(if_block_153 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_expression_nodes_154 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(elif_blocks_155 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_155, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(else_block_157 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_164 && !__freed_obj__) { result_164 = come_decrement_ref_count(result_164, ((struct sNode*)result_164)->finalize, ((struct sNode*)result_164)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
void* right_value171;
char* sname_165;
int sline_166;
void* right_value172;
void* right_value173;
struct sNode* expression_node_167;
void* right_value174;
void* right_value175;
struct sBlock* if_block_168;
void* right_value176;
void* right_value177;
struct list$1sNodeph* elif_expression_nodes_169;
void* right_value178;
void* right_value179;
struct list$1sBlockph* elif_blocks_170;
int elif_num_171;
struct sBlock* else_block_172;
_Bool _while_condtional23;
char* saved_p_173;
int saved_sline_174;
_Bool _if_conditional251;
void* right_value180;
char* buf_175;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value181;
void* right_value182;
struct sNode* expression_node_176;
void* right_value183;
void* right_value184;
struct sBlock* elif_block_177;
void* right_value185;
struct sBlock* __dec_obj76;
void* right_value186;
void* right_value187;
struct sNode* _inf_value3;
struct sIfNode* _inf_obj_value3;
void* right_value195;
struct sNode* result_179;
void* right_value196;
void* right_value197;
struct sNode* __result122__;
void* right_value198;
struct __current_stack1__ __current_stack1__;
void* right_value201;
struct sNode* result_180;
void* right_value202;
void* right_value203;
struct sNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value171, 0, sizeof(void*));
memset(&sname_165, 0, sizeof(char*));
memset(&sline_166, 0, sizeof(int));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value173, 0, sizeof(void*));
memset(&expression_node_167, 0, sizeof(struct sNode*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&if_block_168, 0, sizeof(struct sBlock*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&elif_expression_nodes_169, 0, sizeof(struct list$1sNodeph*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&elif_blocks_170, 0, sizeof(struct list$1sBlockph*));
memset(&elif_num_171, 0, sizeof(int));
memset(&else_block_172, 0, sizeof(struct sBlock*));
memset(&saved_p_173, 0, sizeof(char*));
memset(&saved_sline_174, 0, sizeof(int));
memset(&right_value180, 0, sizeof(void*));
memset(&buf_175, 0, sizeof(char*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
memset(&expression_node_176, 0, sizeof(struct sNode*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&elif_block_177, 0, sizeof(struct sBlock*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&result_179, 0, sizeof(struct sNode*));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value201, 0, sizeof(void*));
memset(&result_180, 0, sizeof(struct sNode*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
    if(_if_conditional250=charp_operator_equals(buf,"if"),    __freed_obj__ = 0, 
    _if_conditional250) {
        sname_165=(char*)come_increment_ref_count(((char*)(right_value171=string_clone(((struct sInfo*)come_null_check(info, "08if.c", 440))->sname))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171;
        __freed_obj__ = 0;
        sline_166=((struct sInfo*)come_null_check(info, "08if.c", 441))->sline;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("08if.c", 445),((struct optional$2intbool*)(right_value172=expected_next_character(40,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value172;
        __freed_obj__ = 0;
        expression_node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value173;
        __freed_obj__ = 0;
        come_clear_stackframe();
        optional$2intbool_value((come_push_stackframe("08if.c", 450),((struct optional$2intbool*)(right_value174=expected_next_character(41,info)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value174;
        __freed_obj__ = 0;
        parse_sharp_v5(info);
        __freed_obj__ = 0;
        if_block_168=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value175=parse_block(info,(_Bool)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value175);
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value175;
        __freed_obj__ = 0;
        elif_expression_nodes_169=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value177=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value176=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 455))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value176);
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value176;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value177);
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value177;
        __freed_obj__ = 0;
        elif_blocks_170=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value179=list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value178=(struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 457))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value178);
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value178;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value179);
        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value179;
        __freed_obj__ = 0;
        elif_num_171=0;
        __freed_obj__ = 0;
        else_block_172=((void*)0);
        __freed_obj__ = 0;
        while(_while_condtional23=1,        __freed_obj__ = 0, 
        _while_condtional23) {
            saved_p_173=((struct sInfo*)come_null_check(info, "08if.c", 464))->p;
            __freed_obj__ = 0;
            saved_sline_174=((struct sInfo*)come_null_check(info, "08if.c", 465))->sline;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional251=!xisalpha(*((struct sInfo*)come_null_check(info, "08if.c", 472))->p),            __freed_obj__ = 0, 
            _if_conditional251) {
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            come_clear_stackframe();
            buf_175=(char*)come_increment_ref_count(optional$2charphbool_value((come_push_stackframe("08if.c", 473),((struct optional$2charphbool*)(right_value180=parse_word(info))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value180;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            if(_if_conditional252=string_operator_equals(buf_175,"else"),            __freed_obj__ = 0, 
            _if_conditional252) {
                if(_if_conditional253=parsecmp("if",info),                __freed_obj__ = 0, 
                _if_conditional253) {
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    ((struct sInfo*)come_null_check(info, "08if.c", 479))->p+=strlen("if");
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    optional$2intbool_value((come_push_stackframe("08if.c", 483),((struct optional$2intbool*)(right_value181=expected_next_character(40,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value181;
                    __freed_obj__ = 0;
                    expression_node_176=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value182;
                    __freed_obj__ = 0;
                    list$1sNodeph_push_back(((struct list$1sNodeph*)come_null_check(elif_expression_nodes_169, "08if.c", 488)),(struct sNode*)come_increment_ref_count(expression_node_176));
                    __freed_obj__ = 0;
                    come_clear_stackframe();
                    optional$2intbool_value((come_push_stackframe("08if.c", 490),((struct optional$2intbool*)(right_value183=expected_next_character(41,info)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value183);
                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value183;
                    __freed_obj__ = 0;
                    parse_sharp_v5(info);
                    __freed_obj__ = 0;
                    elif_block_177=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value184=parse_block(info,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value184);
                    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value184;
                    __freed_obj__ = 0;
                    list$1sBlockph_push_back(((struct list$1sBlockph*)come_null_check(elif_blocks_170, "08if.c", 496)),(struct sBlock*)come_increment_ref_count(elif_block_177));
                    __freed_obj__ = 0;
                    elif_num_171++;
                    __freed_obj__ = 0;
                    if(expression_node_176 && !__freed_obj__) { expression_node_176 = come_decrement_ref_count(expression_node_176, ((struct sNode*)expression_node_176)->finalize, ((struct sNode*)expression_node_176)->_protocol_obj, 0, 0, 0); } 
                    if(elif_block_177 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,elif_block_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    __dec_obj76=else_block_172;
                    else_block_172=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value185=parse_block(info,(_Bool)0))));
                    if(__dec_obj76) { come_call_finalizer(sBlock_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value185;
                    __freed_obj__ = 0;
                    if(buf_175 && !__freed_obj__) { buf_175 = come_decrement_ref_count(buf_175, (void*)0, (void*)0, 0, 0, 0); }
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                ((struct sInfo*)come_null_check(info, "08if.c", 506))->p=saved_p_173;
                __freed_obj__ = 0;
                ((struct sInfo*)come_null_check(info, "08if.c", 507))->sline=saved_sline_174;
                __freed_obj__ = 0;
                if(buf_175 && !__freed_obj__) { buf_175 = come_decrement_ref_count(buf_175, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(buf_175 && !__freed_obj__) { buf_175 = come_decrement_ref_count(buf_175, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 512);
        _inf_obj_value3=come_increment_ref_count(((struct sIfNode*)(right_value187=sIfNode_initialize((struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value186=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 512)))),(struct sNode*)come_increment_ref_count(expression_node_167),if_block_168,elif_expression_nodes_169,elif_blocks_170,elif_num_171,else_block_172,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sIfNode_finalize;
        _inf_value3->clone=(void*)sIfNode_clone;
        _inf_value3->compile=(void*)sIfNode_compile;
        _inf_value3->sline=(void*)sIfNode_sline;
        _inf_value3->sname=(void*)sIfNode_sname;
        _inf_value3->terminated=(void*)sIfNode_terminated;
        _inf_value3->kind=(void*)sIfNode_kind;
        result_179=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=_inf_value3)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value186);
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value186;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value187);
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value187;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[11] = right_value195;
        __freed_obj__ = 0;
        __result122__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value197=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value196=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "08if.c", 514)))),(struct sNode*)come_increment_ref_count(result_179),(_Bool)1)));
        if(sname_165 && !__freed_obj__) { sname_165 = come_decrement_ref_count(sname_165, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_167 && !__freed_obj__) { expression_node_167 = come_decrement_ref_count(expression_node_167, ((struct sNode*)expression_node_167)->finalize, ((struct sNode*)expression_node_167)->_protocol_obj, 0, 0, 0); } 
        if(if_block_168 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_expression_nodes_169 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_blocks_170 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(else_block_172 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_179 && !__freed_obj__) { result_179 = come_decrement_ref_count(result_179, ((struct sNode*)result_179)->finalize, ((struct sNode*)result_179)->_protocol_obj, 0, 0, 0); } 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value196);
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value196;
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
        if(sname_165 && !__freed_obj__) { sname_165 = come_decrement_ref_count(sname_165, (void*)0, (void*)0, 0, 0, 0); }
        if(expression_node_167 && !__freed_obj__) { expression_node_167 = come_decrement_ref_count(expression_node_167, ((struct sNode*)expression_node_167)->finalize, ((struct sNode*)expression_node_167)->_protocol_obj, 0, 0, 0); } 
        if(if_block_168 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_expression_nodes_169 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,elif_expression_nodes_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(elif_blocks_170 && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,elif_blocks_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(else_block_172 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,else_block_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_179 && !__freed_obj__) { result_179 = come_decrement_ref_count(result_179, ((struct sNode*)result_179)->finalize, ((struct sNode*)result_179)->_protocol_obj, 0, 0, 0); } 
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_180=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value201=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("08if.c", 521),((struct optional$2sNodephbool*)(right_value198=string_node_v7(buf,head,head_sline,info)))), "08if.c", 521)),&__current_stack1__,(void*)method_block1_08ifc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value201;
    __freed_obj__ = 0;
    __result126__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value203=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value202=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "08if.c", 521)))),(struct sNode*)come_increment_ref_count(result_180),(_Bool)1)));
    if(result_180 && !__freed_obj__) { result_180 = come_decrement_ref_count(result_180, ((struct sNode*)result_180)->finalize, ((struct sNode*)result_180)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value202;
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
    if(result_180 && !__freed_obj__) { result_180 = come_decrement_ref_count(result_180, ((struct sNode*)result_180)->finalize, ((struct sNode*)result_180)->_protocol_obj, 0, 0, 0); } 
}

static void sIfNode_finalize(struct sIfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
_Bool _if_conditional255;
_Bool _if_conditional256;
_Bool _if_conditional257;
_Bool _if_conditional258;
_Bool _if_conditional259;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional254=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 1))->mExpressionNode!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional254) {
                if(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 0))->mExpressionNode && !__freed_obj__) { ((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 0))->mExpressionNode = come_decrement_ref_count(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 0))->mExpressionNode, ((struct sNode*)((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 0))->mExpressionNode)->finalize, ((struct sNode*)((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 0))->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional255=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 2))->mIfBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional255) {
                if(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 1))->mIfBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 1))->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional256=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 3))->mElifExpressionNodes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional256) {
                if(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 2))->mElifExpressionNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 2))->mElifExpressionNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional257=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 4))->mElifBlocks!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional257) {
                if(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 3))->mElifBlocks && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 3))->mElifBlocks, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional258=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 5))->mElseBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional258) {
                if(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 4))->mElseBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 4))->mElseBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional259=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 6))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional259) {
                if(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 5))->sname && !__freed_obj__) { ((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 5))->sname = come_decrement_ref_count(((struct sIfNode*)come_null_check(self, "sIfNode_finalize", 5))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional260;
struct sIfNode* __result120__;
void* right_value188;
struct sIfNode* result_178;
_Bool _if_conditional261;
void* right_value189;
struct sNode* __dec_obj77;
_Bool _if_conditional262;
void* right_value190;
struct sBlock* __dec_obj78;
_Bool _if_conditional263;
void* right_value191;
struct list$1sNodeph* __dec_obj79;
_Bool _if_conditional264;
void* right_value192;
struct list$1sBlockph* __dec_obj80;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value193;
struct sBlock* __dec_obj81;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value194;
char* __dec_obj82;
struct sIfNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&result_178, 0, sizeof(struct sIfNode*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
            if(_if_conditional260=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional260) {
                __result120__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result120__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_178=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(right_value188=(struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
            if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value188;
            __freed_obj__ = 0;
            if(_if_conditional261=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_clone", 5))->mExpressionNode!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional261) {
                __dec_obj77=((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 4))->mExpressionNode;
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 4))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(((struct sIfNode*)come_null_check(self, "sIfNode_clone", 4))->mExpressionNode))));
                if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value189;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional262=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_clone", 6))->mIfBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional262) {
                __dec_obj78=((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 5))->mIfBlock;
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 5))->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value190=sBlock_clone(((struct sIfNode*)come_null_check(self, "sIfNode_clone", 5))->mIfBlock))));
                if(__dec_obj78) { come_call_finalizer(sBlock_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value190;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional263=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_clone", 7))->mElifExpressionNodes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional263) {
                __dec_obj79=((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 6))->mElifExpressionNodes;
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 6))->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value191=list$1sNodephp_clone(((struct sIfNode*)come_null_check(self, "sIfNode_clone", 6))->mElifExpressionNodes))));
                if(__dec_obj79) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj79, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value191;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional264=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_clone", 8))->mElifBlocks!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional264) {
                __dec_obj80=((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 7))->mElifBlocks;
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 7))->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(((struct list$1sBlockph*)(right_value192=list$1sBlockphp_clone(((struct sIfNode*)come_null_check(self, "sIfNode_clone", 7))->mElifBlocks))));
                if(__dec_obj80) { come_call_finalizer(list$1sBlockph_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
                if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sBlockphp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value192;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional265=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional265) {
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 8))->mElifNum=((struct sIfNode*)come_null_check(self, "sIfNode_clone", 8))->mElifNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional266=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_clone", 10))->mElseBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional266) {
                __dec_obj81=((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 9))->mElseBlock;
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 9))->mElseBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value193=sBlock_clone(((struct sIfNode*)come_null_check(self, "sIfNode_clone", 9))->mElseBlock))));
                if(__dec_obj81) { come_call_finalizer(sBlock_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value193;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional267=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional267) {
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 10))->sline=((struct sIfNode*)come_null_check(self, "sIfNode_clone", 10))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional268=self!=((void*)0)&&((struct sIfNode*)come_null_check(self, "sIfNode_clone", 12))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional268) {
                __dec_obj82=((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 11))->sname;
                ((struct sIfNode*)come_null_check(result_178, "sIfNode_clone", 11))->sname=(char*)come_increment_ref_count(((char*)(right_value194=string_clone(((struct sIfNode*)come_null_check(self, "sIfNode_clone", 11))->sname))));
                if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value194;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result121__ = __result_obj__ = result_178;
            if(result_178 && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,result_178, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
            if(result_178 && !__freed_obj__) { come_call_finalizer(sIfNode_finalize,result_178, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
_Bool _if_conditional270;
struct sNode* __result123__;
struct sNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional269=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional269) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional270=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional270) {
                __result123__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result123__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result124__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
}

void method_block1_08ifc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value199;
void* right_value200;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value199;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value200;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("08if.c", 519), ((struct optional$2voidpbool*)(right_value200=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value199=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "08if.c", 519))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result125__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result125__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value204;
char* sname_181;
int sline_182;
void* right_value205;
struct sBlock* if_block_183;
void* right_value206;
void* right_value207;
struct sNode* _inf_value4;
struct sOrStatmentNode* _inf_obj_value4;
void* right_value212;
struct sNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&sname_181, 0, sizeof(char*));
memset(&sline_182, 0, sizeof(int));
memset(&right_value205, 0, sizeof(void*));
memset(&if_block_183, 0, sizeof(struct sBlock*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
    sname_181=(char*)come_increment_ref_count(((char*)(right_value204=string_clone(((struct sInfo*)come_null_check(info, "08if.c", 526))->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = 0;
    sline_182=((struct sInfo*)come_null_check(info, "08if.c", 527))->sline;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if_block_183=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value205=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value205;
    __freed_obj__ = 0;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 533);
    _inf_obj_value4=come_increment_ref_count(((struct sOrStatmentNode*)(right_value207=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value206=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 533)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_183,info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value4->clone=(void*)sOrStatmentNode_clone;
    _inf_value4->compile=(void*)sOrStatmentNode_compile;
    _inf_value4->sline=(void*)sOrStatmentNode_sline;
    _inf_value4->sname=(void*)sOrStatmentNode_sname;
    _inf_value4->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value4->kind=(void*)sOrStatmentNode_kind;
    __result129__ = __result_obj__ = ((struct sNode*)(right_value212=_inf_value4));
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_181 && !__freed_obj__) { sname_181 = come_decrement_ref_count(sname_181, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_183 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_183, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value206;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value207;
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_181 && !__freed_obj__) { sname_181 = come_decrement_ref_count(sname_181, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_183 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_183, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional271;
_Bool _if_conditional272;
_Bool _if_conditional273;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional271=self!=((void*)0)&&((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 1))->mExpressionNode!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional271) {
            if(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 0))->mExpressionNode && !__freed_obj__) { ((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 0))->mExpressionNode = come_decrement_ref_count(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 0))->mExpressionNode, ((struct sNode*)((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 0))->mExpressionNode)->finalize, ((struct sNode*)((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 0))->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional272=self!=((void*)0)&&((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 2))->mIfBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional272) {
            if(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 1))->mIfBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 1))->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional273=self!=((void*)0)&&((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 3))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional273) {
            if(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 2))->sname && !__freed_obj__) { ((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 2))->sname = come_decrement_ref_count(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional274;
struct sOrStatmentNode* __result127__;
void* right_value208;
struct sOrStatmentNode* result_184;
_Bool _if_conditional275;
void* right_value209;
struct sNode* __dec_obj83;
_Bool _if_conditional276;
void* right_value210;
struct sBlock* __dec_obj84;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value211;
char* __dec_obj85;
struct sOrStatmentNode* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value208, 0, sizeof(void*));
memset(&result_184, 0, sizeof(struct sOrStatmentNode*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
        if(_if_conditional274=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional274) {
            __result127__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result127__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_184=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(right_value208=(struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value208;
        __freed_obj__ = 0;
        if(_if_conditional275=self!=((void*)0)&&((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_clone", 5))->mExpressionNode!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional275) {
            __dec_obj83=((struct sOrStatmentNode*)come_null_check(result_184, "sOrStatmentNode_clone", 4))->mExpressionNode;
            ((struct sOrStatmentNode*)come_null_check(result_184, "sOrStatmentNode_clone", 4))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_clone", 4))->mExpressionNode))));
            if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value209;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional276=self!=((void*)0)&&((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_clone", 6))->mIfBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional276) {
            __dec_obj84=((struct sOrStatmentNode*)come_null_check(result_184, "sOrStatmentNode_clone", 5))->mIfBlock;
            ((struct sOrStatmentNode*)come_null_check(result_184, "sOrStatmentNode_clone", 5))->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value210=sBlock_clone(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_clone", 5))->mIfBlock))));
            if(__dec_obj84) { come_call_finalizer(sBlock_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value210;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional277=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional277) {
            ((struct sOrStatmentNode*)come_null_check(result_184, "sOrStatmentNode_clone", 6))->sline=((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_clone", 6))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional278=self!=((void*)0)&&((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_clone", 8))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional278) {
            __dec_obj85=((struct sOrStatmentNode*)come_null_check(result_184, "sOrStatmentNode_clone", 7))->sname;
            ((struct sOrStatmentNode*)come_null_check(result_184, "sOrStatmentNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value211=string_clone(((struct sOrStatmentNode*)come_null_check(self, "sOrStatmentNode_clone", 7))->sname))));
            if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value211;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result128__ = __result_obj__ = result_184;
        if(result_184 && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result128__;
        __freed_obj__ = 0;
        if(result_184 && !__freed_obj__) { come_call_finalizer(sOrStatmentNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value213;
char* sname_185;
int sline_186;
void* right_value214;
struct sBlock* if_block_187;
void* right_value215;
void* right_value216;
struct sNode* _inf_value5;
struct sAndStatmentNode* _inf_obj_value5;
void* right_value221;
struct sNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value213, 0, sizeof(void*));
memset(&sname_185, 0, sizeof(char*));
memset(&sline_186, 0, sizeof(int));
memset(&right_value214, 0, sizeof(void*));
memset(&if_block_187, 0, sizeof(struct sBlock*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
    sname_185=(char*)come_increment_ref_count(((char*)(right_value213=string_clone(((struct sInfo*)come_null_check(info, "08if.c", 538))->sname))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213;
    __freed_obj__ = 0;
    sline_186=((struct sInfo*)come_null_check(info, "08if.c", 539))->sline;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    if_block_187=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value214=parse_block(info,(_Bool)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value214;
    __freed_obj__ = 0;
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 545);
    _inf_obj_value5=come_increment_ref_count(((struct sAndStatmentNode*)(right_value216=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value215=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 545)))),(struct sNode*)come_increment_ref_count(expression_node),if_block_187,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value5->clone=(void*)sAndStatmentNode_clone;
    _inf_value5->compile=(void*)sAndStatmentNode_compile;
    _inf_value5->sline=(void*)sAndStatmentNode_sline;
    _inf_value5->sname=(void*)sAndStatmentNode_sname;
    _inf_value5->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value5->kind=(void*)sAndStatmentNode_kind;
    __result132__ = __result_obj__ = ((struct sNode*)(right_value221=_inf_value5));
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_185 && !__freed_obj__) { sname_185 = come_decrement_ref_count(sname_185, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_187 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value215;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value216;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
    if(expression_node && !__freed_obj__) { expression_node = come_decrement_ref_count(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 1, 0); } 
    if(sname_185 && !__freed_obj__) { sname_185 = come_decrement_ref_count(sname_185, (void*)0, (void*)0, 0, 0, 0); }
    if(if_block_187 && !__freed_obj__) { come_call_finalizer(sBlock_finalize,if_block_187, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional279;
_Bool _if_conditional280;
_Bool _if_conditional281;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional279=self!=((void*)0)&&((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 1))->mExpressionNode!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional279) {
            if(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 0))->mExpressionNode && !__freed_obj__) { ((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 0))->mExpressionNode = come_decrement_ref_count(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 0))->mExpressionNode, ((struct sNode*)((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 0))->mExpressionNode)->finalize, ((struct sNode*)((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 0))->mExpressionNode)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional280=self!=((void*)0)&&((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 2))->mIfBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional280) {
            if(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 1))->mIfBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 1))->mIfBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional281=self!=((void*)0)&&((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 3))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional281) {
            if(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
struct sAndStatmentNode* __result130__;
void* right_value217;
struct sAndStatmentNode* result_188;
_Bool _if_conditional283;
void* right_value218;
struct sNode* __dec_obj86;
_Bool _if_conditional284;
void* right_value219;
struct sBlock* __dec_obj87;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value220;
char* __dec_obj88;
struct sAndStatmentNode* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
memset(&result_188, 0, sizeof(struct sAndStatmentNode*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
        if(_if_conditional282=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional282) {
            __result130__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result130__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_188=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(right_value217=(struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value217;
        __freed_obj__ = 0;
        if(_if_conditional283=self!=((void*)0)&&((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_clone", 5))->mExpressionNode!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional283) {
            __dec_obj86=((struct sAndStatmentNode*)come_null_check(result_188, "sAndStatmentNode_clone", 4))->mExpressionNode;
            ((struct sAndStatmentNode*)come_null_check(result_188, "sAndStatmentNode_clone", 4))->mExpressionNode=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_clone", 4))->mExpressionNode))));
            if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
            if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value218;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional284=self!=((void*)0)&&((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_clone", 6))->mIfBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional284) {
            __dec_obj87=((struct sAndStatmentNode*)come_null_check(result_188, "sAndStatmentNode_clone", 5))->mIfBlock;
            ((struct sAndStatmentNode*)come_null_check(result_188, "sAndStatmentNode_clone", 5))->mIfBlock=(struct sBlock*)come_increment_ref_count(((struct sBlock*)(right_value219=sBlock_clone(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_clone", 5))->mIfBlock))));
            if(__dec_obj87) { come_call_finalizer(sBlock_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBlock_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value219;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional285=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional285) {
            ((struct sAndStatmentNode*)come_null_check(result_188, "sAndStatmentNode_clone", 6))->sline=((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_clone", 6))->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional286=self!=((void*)0)&&((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_clone", 8))->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional286) {
            __dec_obj88=((struct sAndStatmentNode*)come_null_check(result_188, "sAndStatmentNode_clone", 7))->sname;
            ((struct sAndStatmentNode*)come_null_check(result_188, "sAndStatmentNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value220=string_clone(((struct sAndStatmentNode*)come_null_check(self, "sAndStatmentNode_clone", 7))->sname))));
            if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value220;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result131__ = __result_obj__ = result_188;
        if(result_188 && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result131__;
        __freed_obj__ = 0;
        if(result_188 && !__freed_obj__) { come_call_finalizer(sAndStatmentNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 0, 0); }
}

