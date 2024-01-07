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
struct sCurrentNode
{
    int sline;
    char* sname;
};
struct optional$2sVarpbool
{
    struct sVar* v1;
    _Bool v2;
};
struct tuple2$2charphsNodeph
{
    char* v1;
    struct sNode* v2;
};
struct list_item$1tuple2$2charphsNodephph
{
    struct tuple2$2charphsNodeph* item;
    struct list_item$1tuple2$2charphsNodephph* prev;
    struct list_item$1tuple2$2charphsNodephph* next;
};
struct list$1tuple2$2charphsNodephph
{
    struct list_item$1tuple2$2charphsNodephph* head;
    struct list_item$1tuple2$2charphsNodephph* tail;
    int len;
    struct list_item$1tuple2$2charphsNodephph* it;
};
struct sMethodCallNode
{
    struct sNode* obj;
    char* fun_name;
    struct list$1tuple2$2charphsNodephph* params;
    struct buffer* method_block;
    int sline;
    char* sname;
    int method_block_sline;
};
struct map$2charphCVALUEph
{
    char** keys;
    _Bool* item_existance;
    struct CVALUE** items;
    int size;
    int len;
    struct list$1charp* key_list;
    int it;
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
struct optional$2CVALUEpbool
{
    struct CVALUE* v1;
    _Bool v2;
};
struct optional$2sClasspbool
{
    struct sClass* v1;
    _Bool v2;
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

_Bool compiletime_get_exception_value(struct sInfo* info);

struct sNode* store_field(struct sNode* left, struct sNode* right, char* name, struct sInfo* info);

struct sNode* exception_get_value(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator_v18(struct sNode* node, struct sInfo* info);

struct sNode* post_position_operator2_v18(struct sNode* node, struct sInfo* info);

struct sNode* parse_method_call_v18(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct optional$2sNodephbool* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info);

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info);

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info);

_Bool sCurrentNode_terminated();

char* sCurrentNode_kind();

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info);

static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static struct sType* sType_clone(struct sType* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1charph_finalize(struct list$1charph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2);
static void optional$2sVarpboolp_finalize(struct optional$2sVarpbool* self);
static struct sVar* optional$2sVarpbool_value(struct optional$2sVarpbool* self);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info);

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);

char* sMethodCallNode_kind();

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void list$1charp_finalize(struct list$1charp* self);
static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self);
static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static char* optional$2charphbool_value(struct optional$2charphbool* self);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item);
static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self);
static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self);
static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self);
static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value);
static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct optional$2CVALUEpbool* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key);
static struct optional$2CVALUEpbool* optional$2CVALUEpbool_initialize(struct optional$2CVALUEpbool* self, struct CVALUE* v1, _Bool v2);
static void optional$2CVALUEpboolp_finalize(struct optional$2CVALUEpbool* self);
static struct CVALUE* optional$2CVALUEpbool_value(struct optional$2CVALUEpbool* self);
static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self);
static int list$1charph_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2);
static void optional$2sClasspboolp_finalize(struct optional$2sClasspbool* self);
static struct sClass* optional$2sClasspbool_value(struct optional$2sClasspbool* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

static void sCurrentNode_finalize(struct sCurrentNode* self);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_20methodc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

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

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
struct sCurrentNode* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __result13__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result13__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result14__ = self->sline;
    __freed_obj__ = 0;
    return __result14__;
    __freed_obj__ = 0;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value11;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
    __result15__ = __result_obj__ = ((char*)(right_value11=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
}

_Bool sCurrentNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result16__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result16__;
    __freed_obj__ = 0;
}

char* sCurrentNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value12;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value12, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((char*)(right_value12=__builtin_string("sCurrentNode")));
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}

_Bool sCurrentNode_compile(struct sCurrentNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
char* class_name_5;
void* right_value14;
void* right_value15;
struct sClass* current_stack_6;
void* right_value16;
void* right_value17;
void* right_value18;
void* right_value19;
void* right_value60;
struct tuple2$2charphsTypeph* result_kind_35;
void* right_value67;
void* right_value68;
void* right_value69;
void* right_value70;
void* right_value71;
void* right_value72;
struct tuple2$2charphsTypeph* return_value_40;
void* right_value73;
struct sVarTable* vtable_41;
_Bool _while_condtional8;
struct map$2charphsVarph* o2_saved_42;
char* it_45;
_Bool _for_condtionalA1;
char* key_48;
void* right_value83;
struct sVar* value_54;
void* right_value84;
struct sType* type2_55;
void* right_value85;
void* right_value86;
void* right_value87;
struct tuple2$2charphsTypeph* item_56;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
void* right_value88;
struct sType* type3_57;
void* right_value89;
void* right_value90;
void* right_value91;
struct tuple2$2charphsTypeph* item2_60;
void* right_value92;
void* right_value93;
static int num_current_stack_109=0;
_Bool _while_condtional20;
struct map$2charphsVarph* o2_saved_110;
char* it_111;
_Bool _for_condtionalA6;
char* key_112;
void* right_value106;
struct sVar* value_113;
void* right_value107;
struct sType* type2_114;
void* right_value108;
void* right_value109;
struct tuple2$2charphsTypeph* item_115;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
_Bool _if_conditional184;
_Bool _if_conditional185;
void* right_value110;
struct CVALUE* come_value_116;
void* right_value111;
char* __dec_obj38;
void* right_value112;
void* right_value113;
struct sType* __dec_obj39;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&class_name_5, 0, sizeof(char*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&current_stack_6, 0, sizeof(struct sClass*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&right_value18, 0, sizeof(void*));
memset(&right_value19, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_kind_35, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&return_value_40, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value73, 0, sizeof(void*));
memset(&vtable_41, 0, sizeof(struct sVarTable*));
memset(&o2_saved_42, 0, sizeof(struct map$2charphsVarph*));
memset(&it_45, 0, sizeof(char*));
memset(&key_48, 0, sizeof(char*));
memset(&right_value83, 0, sizeof(void*));
memset(&value_54, 0, sizeof(struct sVar*));
memset(&right_value84, 0, sizeof(void*));
memset(&type2_55, 0, sizeof(struct sType*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&item_56, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value88, 0, sizeof(void*));
memset(&type3_57, 0, sizeof(struct sType*));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&item2_60, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value92, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
memset(&o2_saved_110, 0, sizeof(struct map$2charphsVarph*));
memset(&it_111, 0, sizeof(char*));
memset(&key_112, 0, sizeof(char*));
memset(&right_value106, 0, sizeof(void*));
memset(&value_113, 0, sizeof(struct sVar*));
memset(&right_value107, 0, sizeof(void*));
memset(&type2_114, 0, sizeof(struct sType*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&item_115, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value110, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
    info->current_stack_num++;
    __freed_obj__ = 0;
    class_name_5=(char*)come_increment_ref_count(((char*)(right_value13=xsprintf("__current_stack%d__",info->current_stack_num))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { right_value13 = come_decrement_ref_count(right_value13, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value13;
    __freed_obj__ = 0;
    current_stack_6=(struct sClass*)come_increment_ref_count(((struct sClass*)(right_value15=sClass_initialize((struct sClass*)come_increment_ref_count(((struct sClass*)(right_value14=(struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "20method.c", 40)))),class_name_5,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value14;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value15;
    __freed_obj__ = 0;
    result_kind_35=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value60=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value19=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 42)))),(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("__method_block_result_kind__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 42)))),"int",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value16;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value17;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value18;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value19;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value60);
    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value60;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value67=tuple2$2charphsTypephp_clone(result_kind_35)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value67;
    __freed_obj__ = 0;
    return_value_40=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value72=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value71=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 45)))),(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("__method_block_return_value__")))),(struct sType*)come_increment_ref_count(((struct sType*)(right_value70=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value69=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 45)))),"void*",(_Bool)0,info))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value68;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value69;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value70;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value71;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value72;
    __freed_obj__ = 0;
    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value73=tuple2$2charphsTypephp_clone(return_value_40)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value73;
    __freed_obj__ = 0;
    vtable_41=info->lv_table;
    __freed_obj__ = 0;
    while(_while_condtional8=vtable_41,    __freed_obj__ = 0, 
    _while_condtional8) {
        for(
        o2_saved_42=(struct map$2charphsVarph*)come_increment_ref_count((vtable_41->mVars)),it_45=map$2charphsVarph_begin((o2_saved_42)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        !map$2charphsVarph_end((o2_saved_42)) ,        __freed_obj__ = 0, 
        _for_condtionalA1;        it_45=map$2charphsVarph_next((o2_saved_42)) ,        __freed_obj__ = 0, 
        0        ){
            key_48=it_45;
            __freed_obj__ = 0;
            value_54=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value83=map$2charphsVarphp_operator_load_element(vtable_41->mVars,key_48))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value83;
            __freed_obj__ = 0;
            type2_55=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(value_54->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
            if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value84;
            __freed_obj__ = 0;
            type2_55->mPointerNum++;
            __freed_obj__ = 0;
            item_56=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value87=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value86=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 59)))),(char*)come_increment_ref_count(((char*)(right_value85=__builtin_string(value_54->mCValueName)))),(struct sType*)come_increment_ref_count(type2_55)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value85);
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value85;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value86;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value87);
            if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value87;
            __freed_obj__ = 0;
            if(_if_conditional119=value_54->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional119) {
                if(_if_conditional120=memcmp(value_54->mCValueName,"__list_values",strlen("__list_values"))==0,                __freed_obj__ = 0, 
                _if_conditional120) {
                }
                else {
                    if(_if_conditional121=memcmp(value_54->mCValueName,"__map_keys",strlen("__map_keys"))==0,                    __freed_obj__ = 0, 
                    _if_conditional121) {
                    }
                    else {
                        if(_if_conditional122=memcmp(value_54->mCValueName,"__map_element",strlen("__map_element"))==0,                        __freed_obj__ = 0, 
                        _if_conditional122) {
                        }
                        else {
                            if(_if_conditional123=string_operator_equals(value_54->mType->mClass->mName,"va_list")||string_operator_equals(value_54->mType->mClass->mName,"__builtin_va_list"),                            __freed_obj__ = 0, 
                            _if_conditional123) {
                            }
                            else {
                                if(_if_conditional124=list$1sNodeph_length(type2_55->mArrayNum)==1,                                __freed_obj__ = 0, 
                                _if_conditional124) {
                                    type3_57=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(type2_55))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                                    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value88;
                                    __freed_obj__ = 0;
                                    list$1sNodeph_reset(type3_57->mArrayNum);
                                    __freed_obj__ = 0;
                                    type3_57->mPointerNum++;
                                    __freed_obj__ = 0;
                                    item2_60=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value91=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value90=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 78)))),(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(value_54->mCValueName)))),(struct sType*)come_increment_ref_count(type3_57)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value89);
                                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value89;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value90);
                                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value90;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value91);
                                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[3] = right_value91;
                                    __freed_obj__ = 0;
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value92=tuple2$2charphsTypephp_clone(item2_60)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value92);
                                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value92;
                                    __freed_obj__ = 0;
                                    if(type3_57 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_57, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(item2_60 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item2_60, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    list$1tuple2$2charphsTypephph_push_back(current_stack_6->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value93=tuple2$2charphsTypephp_clone(item_56)))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
                                    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value93;
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
            if(type2_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_55, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_56 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_56, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_42 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_42, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        vtable_41=vtable_41->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    output_struct(current_stack_6,info);
    __freed_obj__ = 0;
    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(class_name_5),(struct sClass*)come_increment_ref_count(current_stack_6));
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    num_current_stack_109++;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_5,num_current_stack_109);
    __freed_obj__ = 0;
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",num_current_stack_109,class_name_5);
    __freed_obj__ = 0;
    vtable_41=info->lv_table;
    __freed_obj__ = 0;
    while(_while_condtional20=vtable_41,    __freed_obj__ = 0, 
    _while_condtional20) {
        for(
        o2_saved_110=(struct map$2charphsVarph*)come_increment_ref_count((vtable_41->mVars)),it_111=map$2charphsVarph_begin((o2_saved_110)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA6=        !map$2charphsVarph_end((o2_saved_110)) ,        __freed_obj__ = 0, 
        _for_condtionalA6;        it_111=map$2charphsVarph_next((o2_saved_110)) ,        __freed_obj__ = 0, 
        0        ){
            key_112=it_111;
            __freed_obj__ = 0;
            value_113=optional$2sVarpbool_value(((struct optional$2sVarpbool*)(right_value106=map$2charphsVarphp_operator_load_element(vtable_41->mVars,key_112))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
            if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value106;
            __freed_obj__ = 0;
            type2_114=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_clone(value_113->mType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
            if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value107;
            __freed_obj__ = 0;
            item_115=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value109=tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value108=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "20method.c", 108)))),(char*)come_increment_ref_count(value_113->mCValueName),(struct sType*)come_increment_ref_count(type2_114)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value108);
            if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value108;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value109);
            if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value109;
            __freed_obj__ = 0;
            if(_if_conditional180=value_113->mCValueName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional180) {
                if(_if_conditional181=memcmp(value_113->mCValueName,"__list_values",strlen("__list_values"))==0,                __freed_obj__ = 0, 
                _if_conditional181) {
                }
                else {
                    if(_if_conditional182=memcmp(value_113->mCValueName,"__map_keys",strlen("__map_keys"))==0,                    __freed_obj__ = 0, 
                    _if_conditional182) {
                    }
                    else {
                        if(_if_conditional183=memcmp(value_113->mCValueName,"__map_element",strlen("__map_element"))==0,                        __freed_obj__ = 0, 
                        _if_conditional183) {
                        }
                        else {
                            if(_if_conditional184=string_operator_equals(value_113->mType->mClass->mName,"va_list")||string_operator_equals(value_113->mType->mClass->mName,"__builtin_va_list"),                            __freed_obj__ = 0, 
                            _if_conditional184) {
                            }
                            else {
                                if(_if_conditional185=string_operator_equals(type2_114->mClass->mName,"lambda"),                                __freed_obj__ = 0, 
                                _if_conditional185) {
                                    add_come_code(info,"__current_stack%d__.%s = %s;\n",num_current_stack_109,value_113->mCValueName,value_113->mCValueName);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    add_come_code(info,"__current_stack%d__.%s = &%s;\n",num_current_stack_109,value_113->mCValueName,value_113->mCValueName);
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
            if(type2_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_114, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(item_115 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item_115, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_110 && !__freed_obj__) { come_call_finalizer(map$2charphsVarphp_finalize,o2_saved_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        vtable_41=vtable_41->mParent;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 137))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value110;
    __freed_obj__ = 0;
    __dec_obj38=come_value_116->c_value;
    come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("&__current_stack%d__",num_current_stack_109))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value111;
    __freed_obj__ = 0;
    __dec_obj39=come_value_116->type;
    come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 140)))),class_name_5,(_Bool)0,info))));
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[17] = right_value112;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[18] = right_value113;
    __freed_obj__ = 0;
    come_value_116->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",come_value_116->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
    __freed_obj__ = 0;
    info->num_current_stack=num_current_stack_109;
    __freed_obj__ = 0;
    __result87__ = (_Bool)1;
    if(class_name_5 && !__freed_obj__) { class_name_5 = come_decrement_ref_count(class_name_5, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_6 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_35 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_40 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(class_name_5 && !__freed_obj__) { class_name_5 = come_decrement_ref_count(class_name_5, (void*)0, (void*)0, 0, 0, 0); }
    if(current_stack_6 && !__freed_obj__) { come_call_finalizer(sClass_finalize,current_stack_6, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(result_kind_35 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,result_kind_35, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(return_value_40 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,return_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sClass_finalize(struct sClass* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional27;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional6=self!=((void*)0)&&self->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional6) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional7=self!=((void*)0)&&self->mFields!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional7) {
            if(self->mFields && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,self->mFields, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional27=self!=((void*)0)&&self->mDeclareSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional27) {
            if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsTypephph* it_7;
_Bool _while_condtional1;
struct list_item$1tuple2$2charphsTypephph* prev_it_8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_7, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&prev_it_8, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
                it_7=self->head;
                __freed_obj__ = 0;
                while(_while_condtional1=it_7!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional1) {
                    prev_it_8=it_7;
                    __freed_obj__ = 0;
                    it_7=it_7->next;
                    __freed_obj__ = 0;
                    if(prev_it_8 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,prev_it_8, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional8=self!=((void*)0)&&self->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional8) {
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
_Bool _if_conditional9;
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional9=self!=((void*)0)&&self->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional9) {
                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional10=self!=((void*)0)&&self->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional10) {
                                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
_Bool _if_conditional25;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional11=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional11) {
                                            if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional13=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional13) {
                                            if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional14=self!=((void*)0)&&self->mGenericsName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional14) {
                                            if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional15=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional15) {
                                            if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional17=self!=((void*)0)&&self->mArrayNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional17) {
                                            if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional19=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional19) {
                                            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional20=self!=((void*)0)&&self->mParamNames!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional20) {
                                            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional22=self!=((void*)0)&&self->mResultType!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional22) {
                                            if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional23=self!=((void*)0)&&self->mAlignas!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional23) {
                                            if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional24=self!=((void*)0)&&self->mSizeNum!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional24) {
                                            if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional25=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional25) {
                                            if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional26=self!=((void*)0)&&self->mAsmName!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional26) {
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
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional12=self!=((void*)0)&&self->v1!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional12) {
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
struct list_item$1sTypeph* it_9;
_Bool _while_condtional2;
struct list_item$1sTypeph* prev_it_10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_10, 0, sizeof(struct list_item$1sTypeph*));
                                                it_9=self->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional2=it_9!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional2) {
                                                    prev_it_10=it_9;
                                                    __freed_obj__ = 0;
                                                    it_9=it_9->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_10 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_10, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional16) {
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
struct list_item$1sNodeph* it_11;
_Bool _while_condtional3;
struct list_item$1sNodeph* prev_it_12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_11, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_12, 0, sizeof(struct list_item$1sNodeph*));
                                                it_11=self->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional3=it_11!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional3) {
                                                    prev_it_12=it_11;
                                                    __freed_obj__ = 0;
                                                    it_11=it_11->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_12 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_12, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional18=self!=((void*)0)&&self->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional18) {
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
struct list_item$1charph* it_13;
_Bool _while_condtional4;
struct list_item$1charph* prev_it_14;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_13, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_14, 0, sizeof(struct list_item$1charph*));
                                                it_13=self->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional4=it_13!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional4) {
                                                    prev_it_14=it_13;
                                                    __freed_obj__ = 0;
                                                    it_13=it_13->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_14 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_14, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional21=self!=((void*)0)&&self->item!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional21) {
                                                            if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value20;
char* __dec_obj7;
void* right_value59;
struct sType* __dec_obj32;
struct tuple2$2charphsTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value59, 0, sizeof(void*));
        __dec_obj7=self->v1;
        self->v1=(char*)come_increment_ref_count(((char*)(right_value20=charp_clone(v1))));
        if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
        if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { right_value20 = come_decrement_ref_count(right_value20, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value20;
        __freed_obj__ = 0;
        __dec_obj32=self->v2;
        self->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=sType_clone(v2))));
        if(__dec_obj32) { come_call_finalizer(sType_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value59;
        __freed_obj__ = 0;
        __result40__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result40__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,v2, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional28;
struct sType* __result18__;
void* right_value21;
struct sType* result_15;
_Bool _if_conditional29;
_Bool _if_conditional30;
void* right_value24;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional34;
void* right_value27;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional37;
void* right_value28;
char* __dec_obj12;
_Bool _if_conditional38;
void* right_value35;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional42;
void* right_value43;
struct list$1sNodeph* __dec_obj20;
_Bool _if_conditional55;
_Bool _if_conditional56;
void* right_value44;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional57;
void* right_value51;
struct list$1charph* __dec_obj25;
_Bool _if_conditional61;
void* right_value54;
struct tuple1$1sTypeph* __dec_obj27;
_Bool _if_conditional64;
_Bool _if_conditional65;
void* right_value55;
struct sNode* __dec_obj28;
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
void* right_value56;
struct sNode* __dec_obj29;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value57;
char* __dec_obj30;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
void* right_value58;
char* __dec_obj31;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_15, 0, sizeof(struct sType*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value27, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&right_value58, 0, sizeof(void*));
            if(_if_conditional28=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional28) {
                __result18__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result18__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_15=(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value21;
            __freed_obj__ = 0;
            if(_if_conditional29=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional29) {
                result_15->mClass=self->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional30) {
                __dec_obj9=result_15->mNoSolvedGenericsType;
                result_15->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value24=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj9) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value24;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional34) {
                __dec_obj11=result_15->mOriginalLoadVarType;
                result_15->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value27=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj11) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value27;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional37=self!=((void*)0)&&self->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional37) {
                __dec_obj12=result_15->mGenericsName;
                result_15->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value28=string_clone(self->mGenericsName))));
                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value28;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional38=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional38) {
                __dec_obj16=result_15->mGenericsTypes;
                result_15->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value35=list$1sTypeph_clone(self->mGenericsTypes))));
                if(__dec_obj16) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value35;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional42=self!=((void*)0)&&self->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional42) {
                __dec_obj20=result_15->mArrayNum;
                result_15->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value43=list$1sNodeph_clone(self->mArrayNum))));
                if(__dec_obj20) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value43;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                result_15->mOmitArrayNum=self->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional56=self!=((void*)0)&&self->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional56) {
                __dec_obj21=result_15->mParamTypes;
                result_15->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value44=list$1sTypeph_clone(self->mParamTypes))));
                if(__dec_obj21) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional57=self!=((void*)0)&&self->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional57) {
                __dec_obj25=result_15->mParamNames;
                result_15->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value51=list$1charph_clone(self->mParamNames))));
                if(__dec_obj25) { come_call_finalizer(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value51;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0)&&self->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                __dec_obj27=result_15->mResultType;
                result_15->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj27) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                result_15->mVarArgs=self->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional65=self!=((void*)0)&&self->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional65) {
                __dec_obj28=result_15->mAlignas;
                result_15->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value55=sNode_clone(self->mAlignas))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, ((struct sNode*)right_value55)->finalize, ((struct sNode*)right_value55)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value55;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional66=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional66) {
                result_15->mUnsigned=self->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional67=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional67) {
                result_15->mShort=self->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                result_15->mLong=self->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                result_15->mLongLong=self->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                result_15->mConstant=self->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                result_15->mRegister=self->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional72=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                result_15->mVolatile=self->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional73=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional73) {
                result_15->mStatic=self->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                result_15->mExtern=self->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                result_15->mRestrict=self->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                result_15->mImmutable=self->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                result_15->mHeap=self->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                result_15->mDummyHeap=self->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                result_15->mDelegate=self->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                result_15->mShare=self->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                result_15->mClone=self->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                result_15->mNoHeap=self->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                result_15->mNoCallingDestructor=self->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                result_15->mRefference=self->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                result_15->mException=self->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                result_15->mPointerNum=self->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                result_15->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional88=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional88) {
                result_15->mNoArrayPointerNum=self->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional89=self!=((void*)0)&&self->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                __dec_obj29=result_15->mSizeNum;
                result_15->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(self->mSizeNum))));
                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, ((struct sNode*)__dec_obj29)->finalize, ((struct sNode*)__dec_obj29)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional90=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                result_15->mDynamicArrayNum=self->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                result_15->mTypeOfExpression=self->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional92=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                __dec_obj30=result_15->mOriginalTypeName;
                result_15->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value57=string_clone(self->mOriginalTypeName))));
                if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional93=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional93) {
                result_15->mOriginalPointerNum=self->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional94=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                result_15->mFunctionParam=self->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional95=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                result_15->mAllocaValue=self->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                result_15->mGenericsStruct=self->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                result_15->mSolvedGenericsName=self->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional98=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                result_15->mComeMemCore=self->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional99=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                result_15->mInline=self->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                result_15->mNullValue=self->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&self->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                __dec_obj31=result_15->mAsmName;
                result_15->mAsmName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mAsmName))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value58;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result39__ = __result_obj__ = result_15;
            if(result_15 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_15, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result39__;
            __freed_obj__ = 0;
            if(result_15 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_15, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional32) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional39;
struct list$1sTypeph* __result23__;
void* right_value29;
void* right_value30;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional5;
void* right_value34;
struct list$1sTypeph* __result26__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value34, 0, sizeof(void*));
                    if(_if_conditional39=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional39) {
                        __result23__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result23__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value30=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value29;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value30;
                    __freed_obj__ = 0;
                    it_19=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional5=it_19!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional5) {
                        list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(it_19->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                        if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value34;
                        __freed_obj__ = 0;
                        it_19=it_19->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result26__ = __result_obj__ = result_18;
                    if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
                    if(result_18 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        __freed_obj__ = 0;
                        self->tail=((void*)0);
                        __freed_obj__ = 0;
                        self->len=0;
                        __freed_obj__ = 0;
                        __result24__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result24__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
void* right_value31;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj13;
_Bool _if_conditional41;
void* right_value32;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj14;
void* right_value33;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj15;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value31, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value33, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional40=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional40) {
                                litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value31=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
                                if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value31;
                                __freed_obj__ = 0;
                                litem_20->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_20->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj13=litem_20->item;
                                litem_20->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                self->tail=litem_20;
                                __freed_obj__ = 0;
                                self->head=litem_20;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional41=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional41) {
                                    litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value32=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value32;
                                    __freed_obj__ = 0;
                                    litem_21->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_21->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj14=litem_21->item;
                                    litem_21->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_21;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_21;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value33=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value33;
                                    __freed_obj__ = 0;
                                    litem_22->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_22->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj15=litem_22->item;
                                    litem_22->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
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
                            __result25__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result25__;
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
_Bool _if_conditional43;
struct list$1sNodeph* __result27__;
void* right_value36;
void* right_value37;
struct list$1sNodeph* result_23;
struct list_item$1sNodeph* it_24;
_Bool _while_condtional6;
void* right_value42;
struct list$1sNodeph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct list$1sNodeph*));
memset(&it_24, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value42, 0, sizeof(void*));
                    if(_if_conditional43=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional43) {
                        __result27__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_23=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value37=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value36;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value37;
                    __freed_obj__ = 0;
                    it_24=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional6=it_24!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        list$1sNodeph_add(result_23,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value42=sNode_clone(it_24->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                        if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, ((struct sNode*)right_value42)->finalize, ((struct sNode*)right_value42)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value42;
                        __freed_obj__ = 0;
                        it_24=it_24->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result32__ = __result_obj__ = result_23;
                    if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result32__;
                    __freed_obj__ = 0;
                    if(result_23 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        __freed_obj__ = 0;
                        self->tail=((void*)0);
                        __freed_obj__ = 0;
                        self->len=0;
                        __freed_obj__ = 0;
                        __result28__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional44;
void* right_value38;
struct list_item$1sNodeph* litem_25;
struct sNode* __dec_obj17;
_Bool _if_conditional45;
void* right_value39;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj18;
void* right_value40;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj19;
struct list$1sNodeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&litem_25, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value39, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional44=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional44) {
                                litem_25=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value38=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                                if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value38;
                                __freed_obj__ = 0;
                                litem_25->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_25->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj17=litem_25->item;
                                litem_25->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_25;
                                __freed_obj__ = 0;
                                self->head=litem_25;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional45=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional45) {
                                    litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value39=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
                                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value39;
                                    __freed_obj__ = 0;
                                    litem_26->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_26->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj18=litem_26->item;
                                    litem_26->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_26;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_26;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value40=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                    if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value40;
                                    __freed_obj__ = 0;
                                    litem_27->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_27->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj19=litem_27->item;
                                    litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail->next=litem_27;
                                    __freed_obj__ = 0;
                                    self->tail=litem_27;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            self->len++;
                            __freed_obj__ = 0;
                            __result29__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional46;
struct sNode* __result30__;
void* right_value41;
struct sNode* result_28;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
_Bool _if_conditional50;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
struct sNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value41, 0, sizeof(void*));
memset(&result_28, 0, sizeof(struct sNode*));
                            if(_if_conditional46=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional46) {
                                __result30__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result30__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_28=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value41;
                            __freed_obj__ = 0;
                            if(_if_conditional47=self!=((void*)0)&&self->clone!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                result_28->_protocol_obj=self->clone(self->_protocol_obj);
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional48=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional48) {
                                result_28->finalize=self->finalize;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional49=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional49) {
                                result_28->clone=self->clone;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional50=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional50) {
                                result_28->compile=self->compile;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional51=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                result_28->sline=self->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional52=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional52) {
                                result_28->sname=self->sname;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional53=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional53) {
                                result_28->terminated=self->terminated;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional54=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional54) {
                                result_28->kind=self->kind;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result31__ = __result_obj__ = result_28;
                            if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result31__;
                            __freed_obj__ = 0;
                            if(result_28 && !__freed_obj__) { result_28 = come_decrement_ref_count(result_28, ((struct sNode*)result_28)->finalize, ((struct sNode*)result_28)->_protocol_obj, 0, 0, 0); } 
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

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional58;
struct list$1charph* __result33__;
void* right_value45;
void* right_value46;
struct list$1charph* result_29;
struct list_item$1charph* it_30;
_Bool _while_condtional7;
void* right_value50;
struct list$1charph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&result_29, 0, sizeof(struct list$1charph*));
memset(&it_30, 0, sizeof(struct list_item$1charph*));
memset(&right_value50, 0, sizeof(void*));
                    if(_if_conditional58=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional58) {
                        __result33__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result33__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_29=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value46=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value45=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                    if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value45;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
                    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value46;
                    __freed_obj__ = 0;
                    it_30=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional7=it_30!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional7) {
                        list$1charph_add(result_29,(char*)come_increment_ref_count(((char*)(right_value50=string_clone(it_30->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
                        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value50;
                        __freed_obj__ = 0;
                        it_30=it_30->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result36__ = __result_obj__ = result_29;
                    if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result36__;
                    __freed_obj__ = 0;
                    if(result_29 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_29, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        __freed_obj__ = 0;
                        self->tail=((void*)0);
                        __freed_obj__ = 0;
                        self->len=0;
                        __freed_obj__ = 0;
                        __result34__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result34__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
void* right_value47;
struct list_item$1charph* litem_31;
char* __dec_obj22;
_Bool _if_conditional60;
void* right_value48;
struct list_item$1charph* litem_32;
char* __dec_obj23;
void* right_value49;
struct list_item$1charph* litem_33;
char* __dec_obj24;
struct list$1charph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value47, 0, sizeof(void*));
memset(&litem_31, 0, sizeof(struct list_item$1charph*));
memset(&right_value48, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
memset(&right_value49, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional59=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional59) {
                                litem_31=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value47=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value47;
                                __freed_obj__ = 0;
                                litem_31->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_31->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj22=litem_31->item;
                                litem_31->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_31;
                                __freed_obj__ = 0;
                                self->head=litem_31;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional60=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional60) {
                                    litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value48=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                                    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value48;
                                    __freed_obj__ = 0;
                                    litem_32->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_32->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj23=litem_32->item;
                                    litem_32->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_32;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_32;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value49=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                                    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value49;
                                    __freed_obj__ = 0;
                                    litem_33->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_33->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj24=litem_33->item;
                                    litem_33->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail->next=litem_33;
                                    __freed_obj__ = 0;
                                    self->tail=litem_33;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            self->len++;
                            __freed_obj__ = 0;
                            __result35__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result35__;
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
_Bool _if_conditional62;
struct tuple1$1sTypeph* __result37__;
void* right_value52;
struct tuple1$1sTypeph* result_34;
_Bool _if_conditional63;
void* right_value53;
struct sType* __dec_obj26;
struct tuple1$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&result_34, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value53, 0, sizeof(void*));
                    if(_if_conditional62=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional62) {
                        __result37__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result37__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_34=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value52=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    if(_if_conditional63=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional63) {
                        __dec_obj26=result_34->v1;
                        result_34->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=sType_clone(self->v1))));
                        if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value53;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result38__ = __result_obj__ = result_34;
                    if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result38__;
                    __freed_obj__ = 0;
                    if(result_34 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_34, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_push_back(struct list$1tuple2$2charphsTypephph* self, struct tuple2$2charphsTypeph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional102;
void* right_value61;
struct list_item$1tuple2$2charphsTypephph* litem_36;
struct tuple2$2charphsTypeph* __dec_obj33;
_Bool _if_conditional105;
void* right_value62;
struct list_item$1tuple2$2charphsTypephph* litem_37;
struct tuple2$2charphsTypeph* __dec_obj34;
void* right_value63;
struct list_item$1tuple2$2charphsTypephph* litem_38;
struct tuple2$2charphsTypeph* __dec_obj35;
struct list$1tuple2$2charphsTypephph* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value62, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&right_value63, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
        if(_if_conditional102=self->len==0,        __freed_obj__ = 0, 
        _if_conditional102) {
            litem_36=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value61=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 277))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value61;
            __freed_obj__ = 0;
            litem_36->prev=((void*)0);
            __freed_obj__ = 0;
            litem_36->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj33=litem_36->item;
            litem_36->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
            if(__dec_obj33) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            self->tail=litem_36;
            __freed_obj__ = 0;
            self->head=litem_36;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional105=self->len==1,            __freed_obj__ = 0, 
            _if_conditional105) {
                litem_37=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value62=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 287))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62;
                __freed_obj__ = 0;
                litem_37->prev=self->head;
                __freed_obj__ = 0;
                litem_37->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj34=litem_37->item;
                litem_37->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj34) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail=litem_37;
                __freed_obj__ = 0;
                self->head->next=litem_37;
                __freed_obj__ = 0;
            }
            else {
                litem_38=(struct list_item$1tuple2$2charphsTypephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)(right_value63=(struct list_item$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsTypephph)*(1), "./comelang2.h", 297))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsTypephphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value63;
                __freed_obj__ = 0;
                litem_38->prev=self->tail;
                __freed_obj__ = 0;
                litem_38->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj35=litem_38->item;
                litem_38->item=(struct tuple2$2charphsTypeph*)come_increment_ref_count(item);
                if(__dec_obj35) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail->next=litem_38;
                __freed_obj__ = 0;
                self->tail=litem_38;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->len++;
        __freed_obj__ = 0;
        __result41__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result41__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional103=self!=((void*)0)&&self->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional103) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional104=self!=((void*)0)&&self->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional104) {
                    if(self->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypephp_clone(struct tuple2$2charphsTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
struct tuple2$2charphsTypeph* __result42__;
void* right_value64;
struct tuple2$2charphsTypeph* result_39;
_Bool _if_conditional107;
void* right_value65;
char* __dec_obj36;
_Bool _if_conditional108;
void* right_value66;
struct sType* __dec_obj37;
struct tuple2$2charphsTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
memset(&result_39, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
        if(_if_conditional106=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional106) {
            __result42__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_39=(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct tuple2$2charphsTypeph*)(right_value64=(struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypephp_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64;
        __freed_obj__ = 0;
        if(_if_conditional107=self!=((void*)0)&&self->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional107) {
            __dec_obj36=result_39->v1;
            result_39->v1=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(self->v1))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional108=self!=((void*)0)&&self->v2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional108) {
            __dec_obj37=result_39->v2;
            result_39->v2=(struct sType*)come_increment_ref_count(((struct sType*)(right_value66=sType_clone(self->v2))));
            if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result43__ = __result_obj__ = result_39;
        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result43__;
        __freed_obj__ = 0;
        if(result_39 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypeph_finalize,result_39, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional109;
char* result_43;
char* __result44__;
_Bool _if_conditional110;
char* __result45__;
char* result_44;
char* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_43, 0, sizeof(char*));
memset(&result_44, 0, sizeof(char*));
            if(_if_conditional109=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional109) {
                __freed_obj__ = 0;
                memset(&result_43,0,sizeof(char*));
                __freed_obj__ = 0;
                __result44__ = __result_obj__ = result_43;
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->key_list->it=self->key_list->head;
            __freed_obj__ = 0;
            if(_if_conditional110=self->key_list->it,            __freed_obj__ = 0, 
            _if_conditional110) {
                __result45__ = __result_obj__ = self->key_list->it->item;
                __freed_obj__ = 0;
                return __result45__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_44,0,sizeof(char*));
            __freed_obj__ = 0;
            __result46__ = __result_obj__ = result_44;
            __freed_obj__ = 0;
            return __result46__;
            __freed_obj__ = 0;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result47__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
            __freed_obj__ = 0;
            return __result47__;
            __freed_obj__ = 0;
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
char* result_46;
char* __result48__;
_Bool _if_conditional112;
char* __result49__;
char* result_47;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_46, 0, sizeof(char*));
memset(&result_47, 0, sizeof(char*));
            if(_if_conditional111=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional111) {
                __freed_obj__ = 0;
                memset(&result_46,0,sizeof(char*));
                __freed_obj__ = 0;
                __result48__ = __result_obj__ = result_46;
                __freed_obj__ = 0;
                return __result48__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->key_list->it=self->key_list->it->next;
            __freed_obj__ = 0;
            if(_if_conditional112=self->key_list->it,            __freed_obj__ = 0, 
            _if_conditional112) {
                __result49__ = __result_obj__ = self->key_list->it->item;
                __freed_obj__ = 0;
                return __result49__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_47,0,sizeof(char*));
            __freed_obj__ = 0;
            __result50__ = __result_obj__ = result_47;
            __freed_obj__ = 0;
            return __result50__;
            __freed_obj__ = 0;
}

static struct optional$2sVarpbool* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sVar* default_value_49;
unsigned int hash_50;
unsigned int it_51;
_Bool _while_condtional9;
_Bool _if_conditional113;
void* right_value74;
_Bool _if_conditional115;
void* right_value75;
void* right_value76;
struct optional$2sVarpbool* __result54__;
_Bool _if_conditional116;
_Bool _if_conditional117;
void* right_value77;
void* right_value78;
struct optional$2sVarpbool* __result55__;
void* right_value79;
void* right_value80;
struct optional$2sVarpbool* __result56__;
void* right_value81;
void* right_value82;
struct optional$2sVarpbool* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_49, 0, sizeof(struct sVar*));
memset(&hash_50, 0, sizeof(unsigned int));
memset(&it_51, 0, sizeof(unsigned int));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_49,0,sizeof(struct sVar*));
                __freed_obj__ = 0;
                hash_50=string_get_hash_key(((char*)key))%self->size;
                __freed_obj__ = 0;
                it_51=hash_50;
                __freed_obj__ = 0;
                while(_while_condtional9=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional9) {
                    if(_if_conditional113=self->item_existance[it_51],                    __freed_obj__ = 0, 
                    _if_conditional113) {
                        if(_if_conditional115=optional$2boolbool_value(((struct optional$2boolbool*)(right_value74=string_equals(self->keys[it_51],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74),
                        (right_value74 && right_value74 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value74, 
                        __freed_obj__ = 0, 
                        _if_conditional115) {
                            __result54__ = __result_obj__ = ((struct optional$2sVarpbool*)(right_value76=optional$2sVarpbool_initialize((struct optional$2sVarpbool*)come_increment_ref_count(((struct optional$2sVarpbool*)(right_value75=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1600)))),self->items[it_51],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
                            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value75;
                            __freed_obj__ = 0;
                            return __result54__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_51++;
                        __freed_obj__ = 0;
                        if(_if_conditional116=it_51>=self->size,                        __freed_obj__ = 0, 
                        _if_conditional116) {
                            it_51=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional117=it_51==hash_50,                            __freed_obj__ = 0, 
                            _if_conditional117) {
                                __result55__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sVarpbool*)(right_value78=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value77=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1609))),default_value_49,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
                                if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value77;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
                                if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value78;
                                __freed_obj__ = 0;
                                return __result55__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result56__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sVarpbool*)(right_value80=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value79=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1613))),default_value_49,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value79;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
                        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value80;
                        __freed_obj__ = 0;
                        return __result56__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result57__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sVarpbool*)(right_value82=optional$2sVarpbool_initialize(((struct optional$2sVarpbool*)(right_value81=(struct optional$2sVarpbool*)come_calloc(1, sizeof(struct optional$2sVarpbool)*(1), "./comelang2.h", 1617))),default_value_49,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value81;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
                if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value82;
                __freed_obj__ = 0;
                return __result57__;
                __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
_Bool default_value_52;
_Bool __result51__;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_52, 0, sizeof(_Bool));
                            if(_if_conditional114=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional114) {
                                __freed_obj__ = 0;
                                memset(&default_value_52,0,sizeof(_Bool));
                                __freed_obj__ = 0;
                                __result51__ = default_value_52;
                                __freed_obj__ = 0;
                                return __result51__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result52__ = self->v1;
                                __freed_obj__ = 0;
                                return __result52__;
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

static struct optional$2sVarpbool* optional$2sVarpbool_initialize(struct optional$2sVarpbool* self, struct sVar* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sVarpbool* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                self->v1=v1;
                                __freed_obj__ = 0;
                                self->v2=v2;
                                __freed_obj__ = 0;
                                __result53__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sVarpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result53__;
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
_Bool _if_conditional118;
struct sVar* default_value_53;
struct sVar* __result58__;
struct sVar* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_53, 0, sizeof(struct sVar*));
                if(_if_conditional118=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional118) {
                    __freed_obj__ = 0;
                    memset(&default_value_53,0,sizeof(struct sVar*));
                    __freed_obj__ = 0;
                    __result58__ = __result_obj__ = default_value_53;
                    __freed_obj__ = 0;
                    return __result58__;
                    __freed_obj__ = 0;
                }
                else {
                    __result59__ = __result_obj__ = self->v1;
                    __freed_obj__ = 0;
                    return __result59__;
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
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result60__ = self->len;
                                    __freed_obj__ = 0;
                                    return __result60__;
                                    __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_58;
_Bool _while_condtional10;
struct list_item$1sNodeph* prev_it_59;
struct list$1sNodeph* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1sNodeph*));
                                        it_58=self->head;
                                        __freed_obj__ = 0;
                                        while(_while_condtional10=it_58!=((void*)0),                                        __freed_obj__ = 0, 
                                        _while_condtional10) {
                                            prev_it_59=it_58;
                                            __freed_obj__ = 0;
                                            it_58=it_58->next;
                                            __freed_obj__ = 0;
                                            if(prev_it_59 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        self->head=((void*)0);
                                        __freed_obj__ = 0;
                                        self->tail=((void*)0);
                                        __freed_obj__ = 0;
                                        self->len=0;
                                        __freed_obj__ = 0;
                                        __result61__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result61__;
                                        __freed_obj__ = 0;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_61;
_Bool _for_condtionalA2;
_Bool _if_conditional125;
_Bool _if_conditional126;
int i_62;
_Bool _for_condtionalA3;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_61, 0, sizeof(int));
memset(&i_62, 0, sizeof(int));
            for(
            i_61=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA2=            i_61<self->size ,            __freed_obj__ = 0, 
            _for_condtionalA2;            i_61++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional125=self->item_existance[i_61],                __freed_obj__ = 0, 
                _if_conditional125) {
                    if(_if_conditional126=1,                    __freed_obj__ = 0, 
                    _if_conditional126) {
                        if(self->items[i_61] && !__freed_obj__) { come_call_finalizer(sVar_finalize,self->items[i_61], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)self->items);
            __freed_obj__ = 0;
            for(
            i_62=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA3=            i_62<self->size ,            __freed_obj__ = 0, 
            _for_condtionalA3;            i_62++ ,            __freed_obj__ = 0, 
            0            ){
                if(_if_conditional131=self->item_existance[i_62],                __freed_obj__ = 0, 
                _if_conditional131) {
                    if(_if_conditional132=1,                    __freed_obj__ = 0, 
                    _if_conditional132) {
                        if(self->keys[i_62] && !__freed_obj__) { self->keys[i_62] = come_decrement_ref_count(self->keys[i_62], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_free_object((char*)self->keys);
            __freed_obj__ = 0;
            if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
}

static void sVar_finalize(struct sVar* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional127=self!=((void*)0)&&self->mName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional127) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional128=self!=((void*)0)&&self->mCValueName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional128) {
                                if(self->mCValueName && !__freed_obj__) { self->mCValueName = come_decrement_ref_count(self->mCValueName, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional129=self!=((void*)0)&&self->mType!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional129) {
                                if(self->mType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional130=self!=((void*)0)&&self->mFunName!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional130) {
                                if(self->mFunName && !__freed_obj__) { self->mFunName = come_decrement_ref_count(self->mFunName, (void*)0, (void*)0, 0, 0, 0); }
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
struct list_item$1charp* it_63;
_Bool _while_condtional11;
struct list_item$1charp* prev_it_64;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_63, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_64, 0, sizeof(struct list_item$1charp*));
                it_63=self->head;
                __freed_obj__ = 0;
                while(_while_condtional11=it_63!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional11) {
                    prev_it_64=it_63;
                    __freed_obj__ = 0;
                    it_63=it_63->next;
                    __freed_obj__ = 0;
                    if(prev_it_64 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_64, (void*)0, (void*)0, 0, 0, 0, 0); }
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

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional133;
unsigned int hash_82;
unsigned int it_83;
_Bool _while_condtional14;
_Bool _if_conditional145;
void* right_value100;
_Bool _if_conditional146;
_Bool _if_conditional147;
_Bool _if_conditional167;
_Bool _if_conditional168;
_Bool _if_conditional169;
_Bool _if_conditional170;
_Bool _if_conditional171;
_Bool same_key_exist_100;
char* it2_103;
_Bool _for_condtionalA5;
void* right_value102;
_Bool _if_conditional176;
_Bool _if_conditional177;
struct map$2charphsClassph* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_82, 0, sizeof(unsigned int));
memset(&it_83, 0, sizeof(unsigned int));
memset(&right_value100, 0, sizeof(void*));
memset(&same_key_exist_100, 0, sizeof(_Bool));
memset(&it2_103, 0, sizeof(char*));
memset(&right_value102, 0, sizeof(void*));
        if(_if_conditional133=self->len*10>=self->size,        __freed_obj__ = 0, 
        _if_conditional133) {
            map$2charphsClassph_rehash(self);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        hash_82=string_get_hash_key(key)%self->size;
        __freed_obj__ = 0;
        it_83=hash_82;
        __freed_obj__ = 0;
        while(_while_condtional14=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional14) {
            if(_if_conditional145=self->item_existance[it_83],            __freed_obj__ = 0, 
            _if_conditional145) {
                if(_if_conditional146=optional$2boolbool_value(((struct optional$2boolbool*)(right_value100=string_equals(self->keys[it_83],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100),
                (right_value100 && right_value100 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value100, 
                __freed_obj__ = 0, 
                _if_conditional146) {
                    if(_if_conditional147=1,                    __freed_obj__ = 0, 
                    _if_conditional147) {
                        list$1charp_remove(self->key_list,self->keys[it_83]);
                        __freed_obj__ = 0;
                        if(self->keys[it_83] && !__freed_obj__) { self->keys[it_83] = come_decrement_ref_count(self->keys[it_83], (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->keys[it_83]=(char*)come_increment_ref_count(key);
                        __freed_obj__ = 0;
                    }
                    else {
                        list$1charp_remove(self->key_list,self->keys[it_83]);
                        __freed_obj__ = 0;
                        self->keys[it_83]=key;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional167=1,                    __freed_obj__ = 0, 
                    _if_conditional167) {
                        if(self->items[it_83] && !__freed_obj__) { come_call_finalizer(sClass_finalize,self->items[it_83], (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->items[it_83]=(struct sClass*)come_increment_ref_count(item);
                        __freed_obj__ = 0;
                    }
                    else {
                        self->items[it_83]=item;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_83++;
                __freed_obj__ = 0;
                if(_if_conditional168=it_83>=self->size,                __freed_obj__ = 0, 
                _if_conditional168) {
                    it_83=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional169=it_83==hash_82,                    __freed_obj__ = 0, 
                    _if_conditional169) {
                        printf("unexpected error in map.insert\n");
                        __freed_obj__ = 0;
                        stackframe();
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                self->item_existance[it_83]=(_Bool)1;
                __freed_obj__ = 0;
                if(_if_conditional170=1,                __freed_obj__ = 0, 
                _if_conditional170) {
                    self->keys[it_83]=(char*)come_increment_ref_count(key);
                    __freed_obj__ = 0;
                }
                else {
                    self->keys[it_83]=key;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional171=1,                __freed_obj__ = 0, 
                _if_conditional171) {
                    self->items[it_83]=(struct sClass*)come_increment_ref_count(item);
                    __freed_obj__ = 0;
                }
                else {
                    self->items[it_83]=item;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        same_key_exist_100=(_Bool)0;
        __freed_obj__ = 0;
        for(
        it2_103=list$1charp_begin(self->key_list) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA5=        !list$1charp_end(self->key_list) ,        __freed_obj__ = 0, 
        _for_condtionalA5;        it2_103=list$1charp_next(self->key_list) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional176=optional$2boolbool_value(((struct optional$2boolbool*)(right_value102=string_equals(it2_103,key)))),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102),
            (right_value102 && right_value102 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value102, 
            __freed_obj__ = 0, 
            _if_conditional176) {
                same_key_exist_100=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional177=!same_key_exist_100,        __freed_obj__ = 0, 
        _if_conditional177) {
            list$1charp_push_back(self->key_list,key);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result85__ = __result_obj__ = self;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result85__;
        __freed_obj__ = 0;
        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
        if(item && !__freed_obj__) { come_call_finalizer(sClass_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_65;
void* right_value94;
char** keys_66;
void* right_value95;
struct sClass** items_67;
void* right_value96;
_Bool* item_existance_68;
int len_69;
char* it_72;
_Bool _for_condtionalA4;
struct sClass* default_value_75;
void* right_value98;
struct sClass* it2_78;
unsigned int hash_79;
int n_80;
_Bool _while_condtional13;
_Bool _if_conditional142;
_Bool _if_conditional143;
_Bool _if_conditional144;
struct sClass* default_value_81;
void* right_value99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_65, 0, sizeof(int));
memset(&right_value94, 0, sizeof(void*));
memset(&keys_66, 0, sizeof(char**));
memset(&right_value95, 0, sizeof(void*));
memset(&items_67, 0, sizeof(struct sClass**));
memset(&right_value96, 0, sizeof(void*));
memset(&item_existance_68, 0, sizeof(_Bool*));
memset(&len_69, 0, sizeof(int));
memset(&it_72, 0, sizeof(char*));
memset(&default_value_75, 0, sizeof(struct sClass*));
memset(&right_value98, 0, sizeof(void*));
memset(&it2_78, 0, sizeof(struct sClass*));
memset(&hash_79, 0, sizeof(unsigned int));
memset(&n_80, 0, sizeof(int));
memset(&default_value_81, 0, sizeof(struct sClass*));
memset(&right_value99, 0, sizeof(void*));
                size_65=self->size*10;
                __freed_obj__ = 0;
                keys_66=(char**)come_increment_ref_count(((char**)(right_value94=(char**)come_calloc(1, sizeof(char*)*(1*(size_65)), "./comelang2.h", 1375))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
                if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value94;
                __freed_obj__ = 0;
                items_67=(struct sClass**)come_increment_ref_count(((struct sClass**)(right_value95=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_65)), "./comelang2.h", 1376))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value95);
                if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value95;
                __freed_obj__ = 0;
                item_existance_68=(_Bool*)come_increment_ref_count(((_Bool*)(right_value96=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_65)), "./comelang2.h", 1377))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value96);
                if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value96;
                __freed_obj__ = 0;
                len_69=0;
                __freed_obj__ = 0;
                for(
                it_72=map$2charphsClassph_begin(self) ,                __freed_obj__ = 0, 
                0;                _for_condtionalA4=                !map$2charphsClassph_end(self) ,                __freed_obj__ = 0, 
                _for_condtionalA4;                it_72=map$2charphsClassph_next(self) ,                __freed_obj__ = 0, 
                0                ){
                    __freed_obj__ = 0;
                    memset(&default_value_75,0,sizeof(struct sClass*));
                    __freed_obj__ = 0;
                    it2_78=((struct sClass*)(right_value98=map$2charphsClassph_at(self,it_72,default_value_75)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
                    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value98;
                    __freed_obj__ = 0;
                    hash_79=string_get_hash_key(it_72)%size_65;
                    __freed_obj__ = 0;
                    n_80=hash_79;
                    __freed_obj__ = 0;
                    while(_while_condtional13=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional13) {
                        if(_if_conditional142=item_existance_68[n_80],                        __freed_obj__ = 0, 
                        _if_conditional142) {
                            n_80++;
                            __freed_obj__ = 0;
                            if(_if_conditional143=n_80>=size_65,                            __freed_obj__ = 0, 
                            _if_conditional143) {
                                n_80=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional144=n_80==hash_79,                                __freed_obj__ = 0, 
                                _if_conditional144) {
                                    printf("unexpected error in map.rehash(1)\n");
                                    __freed_obj__ = 0;
                                    stackframe();
                                    __freed_obj__ = 0;
                                    exit(2);
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            item_existance_68[n_80]=(_Bool)1;
                            __freed_obj__ = 0;
                            keys_66[n_80]=it_72;
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            items_67[n_80]=((struct sClass*)(right_value99=map$2charphsClassph_at(self,it_72,default_value_81)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
                            if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sClass_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value99;
                            __freed_obj__ = 0;
                            len_69++;
                            __freed_obj__ = 0;
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)self->items);
                __freed_obj__ = 0;
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                come_free_object((char*)self->keys);
                __freed_obj__ = 0;
                self->keys=keys_66;
                __freed_obj__ = 0;
                self->items=items_67;
                __freed_obj__ = 0;
                self->item_existance=item_existance_68;
                __freed_obj__ = 0;
                self->size=size_65;
                __freed_obj__ = 0;
                self->len=len_69;
                __freed_obj__ = 0;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional134;
char* result_70;
char* __result62__;
_Bool _if_conditional135;
char* __result63__;
char* result_71;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_70, 0, sizeof(char*));
memset(&result_71, 0, sizeof(char*));
                    if(_if_conditional134=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional134) {
                        __freed_obj__ = 0;
                        memset(&result_70,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result62__ = __result_obj__ = result_70;
                        __freed_obj__ = 0;
                        return __result62__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->key_list->it=self->key_list->head;
                    __freed_obj__ = 0;
                    if(_if_conditional135=self->key_list->it,                    __freed_obj__ = 0, 
                    _if_conditional135) {
                        __result63__ = __result_obj__ = self->key_list->it->item;
                        __freed_obj__ = 0;
                        return __result63__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_71,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result64__ = __result_obj__ = result_71;
                    __freed_obj__ = 0;
                    return __result64__;
                    __freed_obj__ = 0;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result65__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                    __freed_obj__ = 0;
                    return __result65__;
                    __freed_obj__ = 0;
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
char* result_73;
char* __result66__;
_Bool _if_conditional137;
char* __result67__;
char* result_74;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_73, 0, sizeof(char*));
memset(&result_74, 0, sizeof(char*));
                    if(_if_conditional136=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional136) {
                        __freed_obj__ = 0;
                        memset(&result_73,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result66__ = __result_obj__ = result_73;
                        __freed_obj__ = 0;
                        return __result66__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->key_list->it=self->key_list->it->next;
                    __freed_obj__ = 0;
                    if(_if_conditional137=self->key_list->it,                    __freed_obj__ = 0, 
                    _if_conditional137) {
                        __result67__ = __result_obj__ = self->key_list->it->item;
                        __freed_obj__ = 0;
                        return __result67__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&result_74,0,sizeof(char*));
                    __freed_obj__ = 0;
                    __result68__ = __result_obj__ = result_74;
                    __freed_obj__ = 0;
                    return __result68__;
                    __freed_obj__ = 0;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_76;
unsigned int it_77;
_Bool _while_condtional12;
_Bool _if_conditional138;
void* right_value97;
_Bool _if_conditional139;
struct sClass* __result69__;
_Bool _if_conditional140;
_Bool _if_conditional141;
struct sClass* __result70__;
struct sClass* __result71__;
struct sClass* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_76, 0, sizeof(unsigned int));
memset(&it_77, 0, sizeof(unsigned int));
memset(&right_value97, 0, sizeof(void*));
                        hash_76=string_get_hash_key(((char*)key))%self->size;
                        __freed_obj__ = 0;
                        it_77=hash_76;
                        __freed_obj__ = 0;
                        while(_while_condtional12=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional12) {
                            if(_if_conditional138=self->item_existance[it_77],                            __freed_obj__ = 0, 
                            _if_conditional138) {
                                if(_if_conditional139=optional$2boolbool_value(((struct optional$2boolbool*)(right_value97=string_equals(self->keys[it_77],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97),
                                (right_value97 && right_value97 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value97, 
                                __freed_obj__ = 0, 
                                _if_conditional139) {
                                    __result69__ = __result_obj__ = self->items[it_77];
                                    __freed_obj__ = 0;
                                    return __result69__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_77++;
                                __freed_obj__ = 0;
                                if(_if_conditional140=it_77>=self->size,                                __freed_obj__ = 0, 
                                _if_conditional140) {
                                    it_77=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional141=it_77==hash_76,                                    __freed_obj__ = 0, 
                                    _if_conditional141) {
                                        __result70__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result70__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                __result71__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result71__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result72__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result72__;
                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int it2_84;
struct list_item$1charp* it_85;
_Bool _while_condtional15;
void* right_value101;
_Bool _if_conditional148;
struct list$1charp* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it2_84, 0, sizeof(int));
memset(&it_85, 0, sizeof(struct list_item$1charp*));
memset(&right_value101, 0, sizeof(void*));
                            it2_84=0;
                            __freed_obj__ = 0;
                            it_85=self->head;
                            __freed_obj__ = 0;
                            while(_while_condtional15=it_85!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional15) {
                                if(_if_conditional148=optional$2boolbool_value(((struct optional$2boolbool*)(right_value101=string_equals(it_85->item,item)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101),
                                (right_value101 && right_value101 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value101, 
                                __freed_obj__ = 0, 
                                _if_conditional148) {
                                    list$1charp_delete(self,it2_84,it2_84+1);
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it2_84++;
                                __freed_obj__ = 0;
                                it_85=it_85->next;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result76__ = __result_obj__ = self;
                            __freed_obj__ = 0;
                            return __result76__;
                            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional149;
_Bool _if_conditional150;
_Bool _if_conditional151;
int tmp_86;
_Bool _if_conditional152;
_Bool _if_conditional153;
_Bool _if_conditional154;
struct list$1charp* __result73__;
_Bool _if_conditional155;
_Bool _if_conditional156;
struct list_item$1charp* it_89;
int i_90;
_Bool _while_condtional17;
_Bool _if_conditional157;
struct list_item$1charp* prev_it_91;
_Bool _if_conditional158;
_Bool _if_conditional159;
struct list_item$1charp* it_92;
int i_93;
_Bool _while_condtional18;
_Bool _if_conditional160;
_Bool _if_conditional161;
struct list_item$1charp* prev_it_94;
struct list_item$1charp* it_95;
struct list_item$1charp* head_prev_it_96;
struct list_item$1charp* tail_it_97;
int i_98;
_Bool _while_condtional19;
_Bool _if_conditional162;
_Bool _if_conditional163;
_Bool _if_conditional164;
struct list_item$1charp* prev_it_99;
_Bool _if_conditional165;
_Bool _if_conditional166;
struct list$1charp* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tmp_86, 0, sizeof(int));
memset(&it_89, 0, sizeof(struct list_item$1charp*));
memset(&i_90, 0, sizeof(int));
memset(&prev_it_91, 0, sizeof(struct list_item$1charp*));
memset(&it_92, 0, sizeof(struct list_item$1charp*));
memset(&i_93, 0, sizeof(int));
memset(&prev_it_94, 0, sizeof(struct list_item$1charp*));
memset(&it_95, 0, sizeof(struct list_item$1charp*));
memset(&head_prev_it_96, 0, sizeof(struct list_item$1charp*));
memset(&tail_it_97, 0, sizeof(struct list_item$1charp*));
memset(&i_98, 0, sizeof(int));
memset(&prev_it_99, 0, sizeof(struct list_item$1charp*));
                                        if(_if_conditional149=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional149) {
                                            head+=self->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional150=tail<0,                                        __freed_obj__ = 0, 
                                        _if_conditional150) {
                                            tail+=self->len+1;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional151=head>tail,                                        __freed_obj__ = 0, 
                                        _if_conditional151) {
                                            tmp_86=tail;
                                            __freed_obj__ = 0;
                                            tail=head;
                                            __freed_obj__ = 0;
                                            head=tmp_86;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional152=head<0,                                        __freed_obj__ = 0, 
                                        _if_conditional152) {
                                            head=0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional153=tail>self->len,                                        __freed_obj__ = 0, 
                                        _if_conditional153) {
                                            tail=self->len;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional154=head==tail,                                        __freed_obj__ = 0, 
                                        _if_conditional154) {
                                            __result73__ = __result_obj__ = self;
                                            __freed_obj__ = 0;
                                            return __result73__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional155=head==0&&tail==self->len,                                        __freed_obj__ = 0, 
                                        _if_conditional155) {
                                            list$1charp_reset(self);
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            if(_if_conditional156=head==0,                                            __freed_obj__ = 0, 
                                            _if_conditional156) {
                                                it_89=self->head;
                                                __freed_obj__ = 0;
                                                i_90=0;
                                                __freed_obj__ = 0;
                                                while(_while_condtional17=it_89!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional17) {
                                                    if(_if_conditional157=i_90<tail,                                                    __freed_obj__ = 0, 
                                                    _if_conditional157) {
                                                        prev_it_91=it_89;
                                                        __freed_obj__ = 0;
                                                        it_89=it_89->next;
                                                        __freed_obj__ = 0;
                                                        i_90++;
                                                        __freed_obj__ = 0;
                                                        if(prev_it_91 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_91, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                        self->len--;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        if(_if_conditional158=i_90==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional158) {
                                                            self->head=it_89;
                                                            __freed_obj__ = 0;
                                                            self->head->prev=((void*)0);
                                                            __freed_obj__ = 0;
                                                            break;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_89=it_89->next;
                                                            __freed_obj__ = 0;
                                                            i_90++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional159=tail==self->len,                                                __freed_obj__ = 0, 
                                                _if_conditional159) {
                                                    it_92=self->head;
                                                    __freed_obj__ = 0;
                                                    i_93=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional18=it_92!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional18) {
                                                        if(_if_conditional160=i_93==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional160) {
                                                            self->tail=it_92->prev;
                                                            __freed_obj__ = 0;
                                                            self->tail->next=((void*)0);
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional161=i_93>=head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional161) {
                                                            prev_it_94=it_92;
                                                            __freed_obj__ = 0;
                                                            it_92=it_92->next;
                                                            __freed_obj__ = 0;
                                                            i_93++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_94 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_94, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            self->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_92=it_92->next;
                                                            __freed_obj__ = 0;
                                                            i_93++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    it_95=self->head;
                                                    __freed_obj__ = 0;
                                                    head_prev_it_96=((void*)0);
                                                    __freed_obj__ = 0;
                                                    tail_it_97=((void*)0);
                                                    __freed_obj__ = 0;
                                                    i_98=0;
                                                    __freed_obj__ = 0;
                                                    while(_while_condtional19=it_95!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _while_condtional19) {
                                                        if(_if_conditional162=i_98==head,                                                        __freed_obj__ = 0, 
                                                        _if_conditional162) {
                                                            head_prev_it_96=it_95->prev;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional163=i_98==tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional163) {
                                                            tail_it_97=it_95;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional164=i_98>=head&&i_98<tail,                                                        __freed_obj__ = 0, 
                                                        _if_conditional164) {
                                                            prev_it_99=it_95;
                                                            __freed_obj__ = 0;
                                                            it_95=it_95->next;
                                                            __freed_obj__ = 0;
                                                            i_98++;
                                                            __freed_obj__ = 0;
                                                            if(prev_it_99 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_99, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                            self->len--;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            it_95=it_95->next;
                                                            __freed_obj__ = 0;
                                                            i_98++;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional165=head_prev_it_96!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional165) {
                                                        head_prev_it_96->next=tail_it_97;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional166=tail_it_97!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional166) {
                                                        tail_it_97->prev=head_prev_it_96;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result75__ = __result_obj__ = self;
                                        __freed_obj__ = 0;
                                        return __result75__;
                                        __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1charp* it_87;
_Bool _while_condtional16;
struct list_item$1charp* prev_it_88;
struct list$1charp* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_87, 0, sizeof(struct list_item$1charp*));
memset(&prev_it_88, 0, sizeof(struct list_item$1charp*));
                                                it_87=self->head;
                                                __freed_obj__ = 0;
                                                while(_while_condtional16=it_87!=((void*)0),                                                __freed_obj__ = 0, 
                                                _while_condtional16) {
                                                    prev_it_88=it_87;
                                                    __freed_obj__ = 0;
                                                    it_87=it_87->next;
                                                    __freed_obj__ = 0;
                                                    if(prev_it_88 && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,prev_it_88, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                self->head=((void*)0);
                                                __freed_obj__ = 0;
                                                self->tail=((void*)0);
                                                __freed_obj__ = 0;
                                                self->len=0;
                                                __freed_obj__ = 0;
                                                __result74__ = __result_obj__ = self;
                                                __freed_obj__ = 0;
                                                return __result74__;
                                                __freed_obj__ = 0;
}

static char* list$1charp_begin(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional172;
char* result_101;
char* __result77__;
_Bool _if_conditional173;
char* __result78__;
char* result_102;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_101, 0, sizeof(char*));
memset(&result_102, 0, sizeof(char*));
            if(_if_conditional172=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional172) {
                __freed_obj__ = 0;
                memset(&result_101,0,sizeof(char*));
                __freed_obj__ = 0;
                __result77__ = __result_obj__ = result_101;
                __freed_obj__ = 0;
                return __result77__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->head;
            __freed_obj__ = 0;
            if(_if_conditional173=self->it,            __freed_obj__ = 0, 
            _if_conditional173) {
                __result78__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result78__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_102,0,sizeof(char*));
            __freed_obj__ = 0;
            __result79__ = __result_obj__ = result_102;
            __freed_obj__ = 0;
            return __result79__;
            __freed_obj__ = 0;
}

static _Bool list$1charp_end(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result80__ = self==((void*)0)||self->it==((void*)0);
            __freed_obj__ = 0;
            return __result80__;
            __freed_obj__ = 0;
}

static char* list$1charp_next(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional174;
char* result_104;
char* __result81__;
_Bool _if_conditional175;
char* __result82__;
char* result_105;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_104, 0, sizeof(char*));
memset(&result_105, 0, sizeof(char*));
            if(_if_conditional174=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional174) {
                __freed_obj__ = 0;
                memset(&result_104,0,sizeof(char*));
                __freed_obj__ = 0;
                __result81__ = __result_obj__ = result_104;
                __freed_obj__ = 0;
                return __result81__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->it->next;
            __freed_obj__ = 0;
            if(_if_conditional175=self->it,            __freed_obj__ = 0, 
            _if_conditional175) {
                __result82__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result82__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_105,0,sizeof(char*));
            __freed_obj__ = 0;
            __result83__ = __result_obj__ = result_105;
            __freed_obj__ = 0;
            return __result83__;
            __freed_obj__ = 0;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional178;
void* right_value103;
struct list_item$1charp* litem_106;
_Bool _if_conditional179;
void* right_value104;
struct list_item$1charp* litem_107;
void* right_value105;
struct list_item$1charp* litem_108;
struct list$1charp* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&litem_106, 0, sizeof(struct list_item$1charp*));
memset(&right_value104, 0, sizeof(void*));
memset(&litem_107, 0, sizeof(struct list_item$1charp*));
memset(&right_value105, 0, sizeof(void*));
memset(&litem_108, 0, sizeof(struct list_item$1charp*));
                if(_if_conditional178=self->len==0,                __freed_obj__ = 0, 
                _if_conditional178) {
                    litem_106=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value103=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 277))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
                    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value103;
                    __freed_obj__ = 0;
                    litem_106->prev=((void*)0);
                    __freed_obj__ = 0;
                    litem_106->next=((void*)0);
                    __freed_obj__ = 0;
                    litem_106->item=item;
                    __freed_obj__ = 0;
                    self->tail=litem_106;
                    __freed_obj__ = 0;
                    self->head=litem_106;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional179=self->len==1,                    __freed_obj__ = 0, 
                    _if_conditional179) {
                        litem_107=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value104=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 287))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
                        if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value104;
                        __freed_obj__ = 0;
                        litem_107->prev=self->head;
                        __freed_obj__ = 0;
                        litem_107->next=((void*)0);
                        __freed_obj__ = 0;
                        litem_107->item=item;
                        __freed_obj__ = 0;
                        self->tail=litem_107;
                        __freed_obj__ = 0;
                        self->head->next=litem_107;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_108=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(right_value105=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang2.h", 297))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
                        if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charpp_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value105;
                        __freed_obj__ = 0;
                        litem_108->prev=self->tail;
                        __freed_obj__ = 0;
                        litem_108->next=((void*)0);
                        __freed_obj__ = 0;
                        litem_108->item=item;
                        __freed_obj__ = 0;
                        self->tail->next=litem_108;
                        __freed_obj__ = 0;
                        self->tail=litem_108;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                __result84__ = __result_obj__ = self;
                __freed_obj__ = 0;
                return __result84__;
                __freed_obj__ = 0;
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
        if(_if_conditional186=self!=((void*)0)&&self->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional186) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional187=self!=((void*)0)&&self->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional187) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional188;
void* right_value114;
struct list_item$1CVALUEph* litem_117;
struct CVALUE* __dec_obj40;
_Bool _if_conditional190;
void* right_value115;
struct list_item$1CVALUEph* litem_118;
struct CVALUE* __dec_obj41;
void* right_value116;
struct list_item$1CVALUEph* litem_119;
struct CVALUE* __dec_obj42;
struct list$1CVALUEph* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
memset(&litem_117, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value115, 0, sizeof(void*));
memset(&litem_118, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value116, 0, sizeof(void*));
memset(&litem_119, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional188=self->len==0,        __freed_obj__ = 0, 
        _if_conditional188) {
            litem_117=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value114=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
            if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value114;
            __freed_obj__ = 0;
            litem_117->prev=((void*)0);
            __freed_obj__ = 0;
            litem_117->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj40=litem_117->item;
            litem_117->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj40) { come_call_finalizer(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            self->tail=litem_117;
            __freed_obj__ = 0;
            self->head=litem_117;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional190=self->len==1,            __freed_obj__ = 0, 
            _if_conditional190) {
                litem_118=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value115=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
                if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value115;
                __freed_obj__ = 0;
                litem_118->prev=self->head;
                __freed_obj__ = 0;
                litem_118->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj41=litem_118->item;
                litem_118->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail=litem_118;
                __freed_obj__ = 0;
                self->head->next=litem_118;
                __freed_obj__ = 0;
            }
            else {
                litem_119=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value116=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
                if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value116;
                __freed_obj__ = 0;
                litem_119->prev=self->tail;
                __freed_obj__ = 0;
                litem_119->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj42=litem_119->item;
                litem_119->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail->next=litem_119;
                __freed_obj__ = 0;
                self->tail=litem_119;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->len++;
        __freed_obj__ = 0;
        __result86__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result86__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional189;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional189=self!=((void*)0)&&self->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional189) {
                    if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
struct sNode* __dec_obj43;
void* right_value118;
char* __dec_obj44;
void* right_value128;
struct list$1tuple2$2charphsNodephph* __dec_obj50;
void* right_value129;
struct buffer* __dec_obj51;
void* right_value130;
char* __dec_obj52;
struct sMethodCallNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
    __dec_obj43=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(obj))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, ((struct sNode*)__dec_obj43)->finalize, ((struct sNode*)__dec_obj43)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    __dec_obj44=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(fun_name))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value118;
    __freed_obj__ = 0;
    __dec_obj50=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value128=list$1tuple2$2charphsNodephphp_clone(params))));
    if(__dec_obj50) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value128;
    __freed_obj__ = 0;
    __dec_obj51=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value129=buffer_clone(method_block))));
    if(__dec_obj51) { come_call_finalizer(buffer_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value129;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(info->sname))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value130;
    __freed_obj__ = 0;
    self->method_block_sline=method_block_sline;
    __freed_obj__ = 0;
    __result94__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional191;
struct list$1tuple2$2charphsNodephph* __result88__;
void* right_value119;
void* right_value120;
struct list$1tuple2$2charphsNodephph* result_122;
struct list_item$1tuple2$2charphsNodephph* it_123;
_Bool _while_condtional22;
void* right_value127;
struct list$1tuple2$2charphsNodephph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
memset(&right_value120, 0, sizeof(void*));
memset(&result_122, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_123, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value127, 0, sizeof(void*));
        if(_if_conditional191=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional191) {
            __result88__ = __result_obj__ = ((void*)0);
            __freed_obj__ = 0;
            return __result88__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_122=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value120=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value119=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 193))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value119;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value120;
        __freed_obj__ = 0;
        it_123=self->head;
        __freed_obj__ = 0;
        while(_while_condtional22=it_123!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional22) {
            list$1tuple2$2charphsNodephph_add(result_122,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value127=tuple2$2charphsNodephp_clone(it_123->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
            if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value127;
            __freed_obj__ = 0;
            it_123=it_123->next;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result93__ = __result_obj__ = result_122;
        if(result_122 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result93__;
        __freed_obj__ = 0;
        if(result_122 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,result_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1tuple2$2charphsNodephph* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            __freed_obj__ = 0;
            self->tail=((void*)0);
            __freed_obj__ = 0;
            self->len=0;
            __freed_obj__ = 0;
            __result89__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result89__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1tuple2$2charphsNodephph* it_120;
_Bool _while_condtional21;
struct list_item$1tuple2$2charphsNodephph* prev_it_121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_120, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&prev_it_121, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                it_120=self->head;
                __freed_obj__ = 0;
                while(_while_condtional21=it_120!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional21) {
                    prev_it_121=it_120;
                    __freed_obj__ = 0;
                    it_120=it_120->next;
                    __freed_obj__ = 0;
                    if(prev_it_121 && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,prev_it_121, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional192;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional192=self!=((void*)0)&&self->item!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional192) {
                            if(self->item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional193;
_Bool _if_conditional194;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional193=self!=((void*)0)&&self->v1!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional193) {
                                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional194=self!=((void*)0)&&self->v2!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional194) {
                                    if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
void* right_value121;
struct list_item$1tuple2$2charphsNodephph* litem_124;
struct tuple2$2charphsNodeph* __dec_obj45;
_Bool _if_conditional198;
void* right_value122;
struct list_item$1tuple2$2charphsNodephph* litem_125;
struct tuple2$2charphsNodeph* __dec_obj46;
void* right_value123;
struct list_item$1tuple2$2charphsNodephph* litem_126;
struct tuple2$2charphsNodeph* __dec_obj47;
struct list$1tuple2$2charphsNodephph* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value121, 0, sizeof(void*));
memset(&litem_124, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value122, 0, sizeof(void*));
memset(&litem_125, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value123, 0, sizeof(void*));
memset(&litem_126, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
                if(_if_conditional195=self->len==0,                __freed_obj__ = 0, 
                _if_conditional195) {
                    litem_124=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value121=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 207))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
                    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value121;
                    __freed_obj__ = 0;
                    litem_124->prev=((void*)0);
                    __freed_obj__ = 0;
                    litem_124->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj45=litem_124->item;
                    litem_124->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                    if(__dec_obj45) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    self->tail=litem_124;
                    __freed_obj__ = 0;
                    self->head=litem_124;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional198=self->len==1,                    __freed_obj__ = 0, 
                    _if_conditional198) {
                        litem_125=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value122=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 217))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
                        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value122;
                        __freed_obj__ = 0;
                        litem_125->prev=self->head;
                        __freed_obj__ = 0;
                        litem_125->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj46=litem_125->item;
                        litem_125->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj46) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->tail=litem_125;
                        __freed_obj__ = 0;
                        self->head->next=litem_125;
                        __freed_obj__ = 0;
                    }
                    else {
                        litem_126=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value123=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 227))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
                        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value123;
                        __freed_obj__ = 0;
                        litem_126->prev=self->tail;
                        __freed_obj__ = 0;
                        litem_126->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj47=litem_126->item;
                        litem_126->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                        if(__dec_obj47) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->tail->next=litem_126;
                        __freed_obj__ = 0;
                        self->tail=litem_126;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                self->len++;
                __freed_obj__ = 0;
                __result90__ = __result_obj__ = self;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result90__;
                __freed_obj__ = 0;
                if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional196=self!=((void*)0)&&self->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional196) {
                            if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional197=self!=((void*)0)&&self->v2!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional197) {
                            if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
struct tuple2$2charphsNodeph* __result91__;
void* right_value124;
struct tuple2$2charphsNodeph* result_127;
_Bool _if_conditional200;
void* right_value125;
char* __dec_obj48;
_Bool _if_conditional201;
void* right_value126;
struct sNode* __dec_obj49;
struct tuple2$2charphsNodeph* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value124, 0, sizeof(void*));
memset(&result_127, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value126, 0, sizeof(void*));
                if(_if_conditional199=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional199) {
                    __result91__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result91__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_127=(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value124=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124;
                __freed_obj__ = 0;
                if(_if_conditional200=self!=((void*)0)&&self->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional200) {
                    __dec_obj48=result_127->v1;
                    result_127->v1=(char*)come_increment_ref_count(((char*)(right_value125=string_clone(self->v1))));
                    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value125;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional201=self!=((void*)0)&&self->v2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional201) {
                    __dec_obj49=result_127->v2;
                    result_127->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(self->v2))));
                    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
                    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value126;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result92__ = __result_obj__ = result_127;
                if(result_127 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_127, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result92__;
                __freed_obj__ = 0;
                if(result_127 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodeph_finalize,result_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

int sMethodCallNode_sline(struct sMethodCallNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result95__ = self->sline;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

char* sMethodCallNode_sname(struct sMethodCallNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value131;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value131, 0, sizeof(void*));
    __result96__ = __result_obj__ = ((char*)(right_value131=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value132;
char* none_generics_name_128;
void* right_value133;
char* fun_name2_129;
void* right_value134;
char* fun_name3_130;
void* right_value136;
struct sGenericsFun* generics_fun_133;
_Bool _if_conditional220;
void* right_value137;
_Bool _if_conditional221;
void* right_value138;
char* __result101__;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
memset(&none_generics_name_128, 0, sizeof(char*));
memset(&right_value133, 0, sizeof(void*));
memset(&fun_name2_129, 0, sizeof(char*));
memset(&right_value134, 0, sizeof(void*));
memset(&fun_name3_130, 0, sizeof(char*));
memset(&right_value136, 0, sizeof(void*));
memset(&generics_fun_133, 0, sizeof(struct sGenericsFun*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    none_generics_name_128=(char*)come_increment_ref_count(((char*)(right_value132=get_none_generics_name(type->mClass->mName))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value132;
    __freed_obj__ = 0;
    fun_name2_129=(char*)come_increment_ref_count(((char*)(right_value133=create_method_name(type,(_Bool)0,fun_name,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value133;
    __freed_obj__ = 0;
    fun_name3_130=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s_%s",none_generics_name_128,fun_name))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value134;
    __freed_obj__ = 0;
    generics_fun_133=((struct sGenericsFun*)(right_value136=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_130,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value136;
    __freed_obj__ = 0;
    if(_if_conditional220=generics_fun_133,    __freed_obj__ = 0, 
    _if_conditional220) {
        if(_if_conditional221=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(fun_name2_129)))),generics_fun_133,type,info),        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137),
        (right_value137 && right_value137 != __result_obj__ && !__freed_obj__) ? right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value137, 
        __freed_obj__ = 0, 
        _if_conditional221) {
            err_msg(info,"%s not found",fun_name3_130);
            __freed_obj__ = 0;
            __result101__ = __result_obj__ = ((char*)(right_value138=__builtin_string("")));
            if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
            if(none_generics_name_128 && !__freed_obj__) { none_generics_name_128 = come_decrement_ref_count(none_generics_name_128, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name2_129 && !__freed_obj__) { fun_name2_129 = come_decrement_ref_count(fun_name2_129, (void*)0, (void*)0, 0, 0, 0); }
            if(fun_name3_130 && !__freed_obj__) { fun_name3_130 = come_decrement_ref_count(fun_name3_130, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result101__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result102__ = __result_obj__ = fun_name2_129;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_128 && !__freed_obj__) { none_generics_name_128 = come_decrement_ref_count(none_generics_name_128, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_129 && !__freed_obj__) { fun_name2_129 = come_decrement_ref_count(fun_name2_129, (void*)0, (void*)0, 0, 1, 0); }
    if(fun_name3_130 && !__freed_obj__) { fun_name3_130 = come_decrement_ref_count(fun_name3_130, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(none_generics_name_128 && !__freed_obj__) { none_generics_name_128 = come_decrement_ref_count(none_generics_name_128, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name2_129 && !__freed_obj__) { fun_name2_129 = come_decrement_ref_count(fun_name2_129, (void*)0, (void*)0, 0, 0, 0); }
    if(fun_name3_130 && !__freed_obj__) { fun_name3_130 = come_decrement_ref_count(fun_name3_130, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_131;
unsigned int it_132;
_Bool _while_condtional23;
_Bool _if_conditional207;
void* right_value135;
_Bool _if_conditional208;
struct sGenericsFun* __result97__;
_Bool _if_conditional209;
_Bool _if_conditional210;
struct sGenericsFun* __result98__;
struct sGenericsFun* __result99__;
struct sGenericsFun* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_131, 0, sizeof(unsigned int));
memset(&it_132, 0, sizeof(unsigned int));
memset(&right_value135, 0, sizeof(void*));
        hash_131=string_get_hash_key(((char*)key))%self->size;
        __freed_obj__ = 0;
        it_132=hash_131;
        __freed_obj__ = 0;
        while(_while_condtional23=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional23) {
            if(_if_conditional207=self->item_existance[it_132],            __freed_obj__ = 0, 
            _if_conditional207) {
                if(_if_conditional208=optional$2boolbool_value(((struct optional$2boolbool*)(right_value135=string_equals(self->keys[it_132],key)))),                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135),
                (right_value135 && right_value135 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[0] = right_value135, 
                __freed_obj__ = 0, 
                _if_conditional208) {
                    __result97__ = __result_obj__ = self->items[it_132];
                    __freed_obj__ = 0;
                    return __result97__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_132++;
                __freed_obj__ = 0;
                if(_if_conditional209=it_132>=self->size,                __freed_obj__ = 0, 
                _if_conditional209) {
                    it_132=0;
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional210=it_132==hash_131,                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        __result98__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result98__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                __result99__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result99__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result100__ = __result_obj__ = default_value;
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional211;
_Bool _if_conditional212;
_Bool _if_conditional213;
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
_Bool _if_conditional217;
_Bool _if_conditional218;
_Bool _if_conditional219;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional211=self!=((void*)0)&&self->mImplType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional211) {
            if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional212=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional212) {
            if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional213=self!=((void*)0)&&self->mName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional213) {
            if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional214=self!=((void*)0)&&self->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional214) {
            if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional215=self!=((void*)0)&&self->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional215) {
            if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional216=self!=((void*)0)&&self->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional216) {
            if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional217=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional217) {
            if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional218=self!=((void*)0)&&self->mBlock!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional218) {
            if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional219=self!=((void*)0)&&self->mGenericsSName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional219) {
            if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

_Bool sMethodCallNode_terminated(struct sMethodCallNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional222;
_Bool __result103__;
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    if(_if_conditional222=self->method_block,    __freed_obj__ = 0, 
    _if_conditional222) {
        __result103__ = (_Bool)1;
        __freed_obj__ = 0;
        return __result103__;
        __freed_obj__ = 0;
    }
    else {
        __result104__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result104__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
}

char* sMethodCallNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
    __result105__ = __result_obj__ = ((char*)(right_value139=__builtin_string("sMethodCallNode")));
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* fun_name_134;
struct list$1tuple2$2charphsNodephph* params_135;
struct sNode* obj_136;
struct buffer* method_block_137;
int method_block_sline_138;
_Bool _if_conditional223;
_Bool __result106__;
void* right_value140;
struct CVALUE* obj_value_139;
void* right_value141;
struct sType* obj_type_140;
struct sClass* klass_141;
_Bool calling_dynamic_method_142;
struct sType* lambda_type_143;
struct list$1tuple2$2charphsTypephph* o2_saved_144;
struct tuple2$2charphsTypeph* it_147;
_Bool _for_condtionalA7;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* field_name_150;
struct sType* field_type_151;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value142;
struct sType* result_type_152;
void* right_value143;
void* right_value144;
struct list$1CVALUEph* come_params_155;
int i_156;
struct list$1tuple2$2charphsNodephph* o2_saved_157;
struct tuple2$2charphsNodeph* it_160;
_Bool _for_condtionalA8;
struct tuple2$2charphsNodeph* multiple_assgin_var2;
char* label_163;
struct sNode* node_164;
_Bool _if_conditional234;
_Bool _if_conditional235;
_Bool __result122__;
void* right_value145;
struct CVALUE* come_value_165;
void* right_value146;
void* right_value147;
void* right_value148;
void* right_value153;
void* right_value154;
_Bool _if_conditional240;
_Bool _if_conditional241;
_Bool _if_conditional242;
char* __dec_obj54;
_Bool _if_conditional243;
void* right_value155;
char* __dec_obj55;
_Bool _if_conditional244;
void* right_value156;
char* __dec_obj56;
void* right_value157;
char* __dec_obj57;
_Bool _if_conditional245;
void* right_value158;
char* __dec_obj58;
void* right_value159;
void* right_value160;
struct buffer* buf_170;
void* right_value161;
int j_171;
struct list$1CVALUEph* o2_saved_172;
struct CVALUE* it_175;
_Bool _for_condtionalA9;
_Bool _if_conditional250;
void* right_value162;
char* __dec_obj59;
_Bool _if_conditional251;
void* right_value163;
struct CVALUE* come_value2_178;
void* right_value164;
char* __dec_obj60;
void* right_value165;
struct sType* result_type2_179;
_Bool _if_conditional252;
void* right_value166;
void* right_value167;
char* __dec_obj61;
void* right_value168;
struct sType* __dec_obj62;
void* right_value169;
void* right_value170;
void* right_value171;
char* generics_fun_name_180;
struct sFun* fun_181;
int i_182;
_Bool _for_condtionalA10;
void* right_value172;
char* new_fun_name_183;
void* right_value182;
_Bool _if_conditional258;
void* right_value183;
char* __dec_obj63;
_Bool _if_conditional259;
void* right_value185;
_Bool _if_conditional279;
void* right_value186;
void* right_value187;
char* __dec_obj64;
void* right_value188;
_Bool _if_conditional280;
_Bool __result147__;
void* right_value189;
struct sType* result_type_190;
void* right_value190;
struct sType* result_type2_191;
void* right_value191;
void* right_value192;
struct list$1sTypeph* param_types_192;
struct list$1sTypeph* o2_saved_193;
struct sType* it_196;
_Bool _for_condtionalA11;
_Bool _if_conditional285;
void* right_value196;
struct sType* it2_202;
void* right_value197;
void* right_value198;
void* right_value199;
struct list$1CVALUEph* come_params_203;
void* right_value200;
void* right_value206;
struct map$2charphCVALUEph* label_params_207;
int i_208;
struct list$1tuple2$2charphsNodephph* o2_saved_209;
struct tuple2$2charphsNodeph* it_210;
_Bool _for_condtionalA15;
struct tuple2$2charphsNodeph* multiple_assgin_var3;
char* label_211;
struct sNode* node_212;
_Bool _if_conditional292;
void* right_value207;
void* right_value208;
void* right_value209;
void* right_value210;
void* right_value211;
_Bool _if_conditional293;
_Bool _if_conditional294;
_Bool _if_conditional295;
char* __dec_obj69;
_Bool _if_conditional296;
void* right_value212;
char* __dec_obj70;
_Bool _if_conditional297;
void* right_value213;
char* __dec_obj71;
void* right_value214;
char* __dec_obj72;
_Bool _if_conditional298;
void* right_value215;
char* __dec_obj73;
void* right_value216;
_Bool _if_conditional299;
void* right_value221;
_Bool _if_conditional304;
_Bool __result163__;
void* right_value222;
struct CVALUE* come_value_217;
_Bool _if_conditional305;
int n_218;
struct list$1charph* o2_saved_219;
char* it_222;
_Bool _for_condtionalA16;
_Bool _if_conditional310;
void* right_value223;
_Bool _if_conditional311;
void* right_value224;
void* right_value225;
void* right_value226;
void* right_value227;
void* right_value228;
void* right_value229;
_Bool _if_conditional312;
_Bool _if_conditional313;
_Bool _if_conditional314;
char* __dec_obj75;
_Bool _if_conditional315;
void* right_value230;
char* __dec_obj76;
_Bool _if_conditional316;
void* right_value231;
char* __dec_obj77;
void* right_value232;
char* __dec_obj78;
_Bool _if_conditional317;
void* right_value233;
char* __dec_obj79;
void* right_value234;
_Bool _if_conditional318;
void* right_value235;
void* right_value236;
void* right_value237;
void* right_value238;
void* right_value239;
void* right_value240;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
char* __dec_obj80;
_Bool _if_conditional322;
void* right_value241;
char* __dec_obj81;
_Bool _if_conditional323;
void* right_value242;
char* __dec_obj82;
void* right_value243;
char* __dec_obj83;
_Bool _if_conditional324;
void* right_value244;
char* __dec_obj84;
_Bool _if_conditional325;
void* right_value253;
_Bool _if_conditional348;
_Bool _for_condtionalA19;
void* right_value254;
void* right_value255;
char* default_param_246;
void* right_value256;
char* param_name_247;
void* right_value266;
struct CVALUE* come_value_252;
_Bool _if_conditional354;
struct buffer* source_253;
char* p_254;
char* head_255;
int sline_256;
void* right_value267;
struct buffer* __dec_obj85;
void* right_value268;
struct sNode* node_257;
_Bool _if_conditional355;
_Bool __result192__;
struct buffer* __dec_obj86;
void* right_value269;
struct CVALUE* come_value_258;
void* right_value270;
_Bool _if_conditional356;
void* right_value271;
void* right_value272;
void* right_value273;
void* right_value274;
void* right_value275;
void* right_value276;
_Bool _if_conditional357;
_Bool _if_conditional358;
_Bool _if_conditional359;
char* __dec_obj87;
_Bool _if_conditional360;
void* right_value277;
char* __dec_obj88;
_Bool _if_conditional361;
void* right_value278;
char* __dec_obj89;
void* right_value279;
char* __dec_obj90;
_Bool _if_conditional362;
void* right_value280;
char* __dec_obj91;
_Bool _if_conditional363;
_Bool __result193__;
_Bool _if_conditional364;
_Bool _for_condtionalA20;
void* right_value281;
char* param_name_259;
void* right_value282;
struct CVALUE* come_value_260;
_Bool _if_conditional365;
void* right_value286;
_Bool _if_conditional373;
void* right_value287;
void* right_value288;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* right_value291;
struct sNode* current_stack_frame_node_265;
_Bool _if_conditional378;
_Bool __result202__;
void* right_value292;
struct CVALUE* come_value_266;
void* right_value293;
void* right_value294;
struct buffer* method_block2_267;
void* right_value295;
void* right_value296;
struct sType* method_block_type_268;
void* right_value297;
char* class_name_269;
void* right_value298;
void* right_value308;
struct sClass* current_stack_frame_struct_274;
void* right_value309;
_Bool _if_conditional384;
_Bool __result210__;
void* right_value310;
struct sType* result_type_275;
struct list$1sTypeph* param_types_276;
struct list$1charph* param_names_277;
void* right_value311;
void* right_value312;
struct buffer* all_alhabet_sname_278;
char* p_279;
_Bool _while_condtional35;
_Bool _if_conditional385;
void* right_value313;
void* right_value314;
void* right_value315;
int i_280;
struct list$1sTypeph* o2_saved_281;
struct sType* it_282;
_Bool _for_condtionalA21;
struct sType* param_type_283;
_Bool _if_conditional387;
void* right_value316;
char* param_name_284;
void* right_value317;
void* right_value318;
_Bool _if_conditional388;
void* right_value319;
char* param_name_285;
void* right_value320;
void* right_value321;
void* right_value322;
char* param_name_286;
void* right_value323;
void* right_value324;
_Bool _if_conditional389;
void* right_value325;
struct buffer* source3_287;
char* p_288;
char* head_289;
int sline_290;
struct buffer* __dec_obj96;
void* right_value326;
struct sNode* node_291;
_Bool _if_conditional390;
_Bool __result212__;
void* right_value327;
void* right_value328;
char* method_block_name_292;
void* right_value329;
struct CVALUE* come_value2_293;
void* right_value330;
struct sFun* fun2_294;
_Bool _if_conditional391;
_Bool __result213__;
struct sType* method_block_type2_295;
void* right_value331;
char* __dec_obj97;
void* right_value332;
struct sType* __dec_obj98;
struct buffer* __dec_obj99;
void* right_value333;
void* right_value334;
struct buffer* buf_296;
int j_297;
struct list$1CVALUEph* o2_saved_298;
struct CVALUE* it_299;
_Bool _for_condtionalA22;
_Bool _if_conditional392;
void* right_value335;
struct CVALUE* come_value2_300;
void* right_value336;
char* __dec_obj100;
void* right_value337;
struct sType* __dec_obj101;
_Bool _if_conditional393;
void* right_value338;
char* __dec_obj102;
_Bool _if_conditional394;
void* right_value339;
char* __dec_obj103;
_Bool _if_conditional395;
void* right_value340;
char* var_name_301;
void* right_value341;
struct sType* result_type_302;
void* right_value342;
struct sType* result_type2_303;
struct sType* result_type3_304;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value343;
void* right_value344;
void* right_value345;
void* right_value346;
void* right_value347;
void* right_value348;
void* right_value349;
void* right_value350;
void* right_value351;
void* right_value352;
void* right_value353;
_Bool _if_conditional399;
void* right_value354;
void* right_value355;
void* right_value356;
void* right_value357;
void* right_value358;
void* right_value359;
void* right_value360;
_Bool __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&fun_name_134, 0, sizeof(char*));
memset(&params_135, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&obj_136, 0, sizeof(struct sNode*));
memset(&method_block_137, 0, sizeof(struct buffer*));
memset(&method_block_sline_138, 0, sizeof(int));
memset(&right_value140, 0, sizeof(void*));
memset(&obj_value_139, 0, sizeof(struct CVALUE*));
memset(&right_value141, 0, sizeof(void*));
memset(&obj_type_140, 0, sizeof(struct sType*));
memset(&klass_141, 0, sizeof(struct sClass*));
memset(&calling_dynamic_method_142, 0, sizeof(_Bool));
memset(&lambda_type_143, 0, sizeof(struct sType*));
memset(&o2_saved_144, 0, sizeof(struct list$1tuple2$2charphsTypephph*));
memset(&it_147, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&field_name_150, 0, sizeof(char*));
memset(&field_type_151, 0, sizeof(struct sType*));
memset(&field_name_150, 0, sizeof(char*));
memset(&field_type_151, 0, sizeof(struct sType*));
memset(&right_value142, 0, sizeof(void*));
memset(&result_type_152, 0, sizeof(struct sType*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&come_params_155, 0, sizeof(struct list$1CVALUEph*));
memset(&i_156, 0, sizeof(int));
memset(&o2_saved_157, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_160, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_163, 0, sizeof(char*));
memset(&node_164, 0, sizeof(struct sNode*));
memset(&label_163, 0, sizeof(char*));
memset(&node_164, 0, sizeof(struct sNode*));
memset(&right_value145, 0, sizeof(void*));
memset(&come_value_165, 0, sizeof(struct CVALUE*));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
memset(&buf_170, 0, sizeof(struct buffer*));
memset(&right_value161, 0, sizeof(void*));
memset(&j_171, 0, sizeof(int));
memset(&o2_saved_172, 0, sizeof(struct list$1CVALUEph*));
memset(&it_175, 0, sizeof(struct CVALUE*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value163, 0, sizeof(void*));
memset(&come_value2_178, 0, sizeof(struct CVALUE*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
memset(&result_type2_179, 0, sizeof(struct sType*));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&generics_fun_name_180, 0, sizeof(char*));
memset(&fun_181, 0, sizeof(struct sFun*));
memset(&i_182, 0, sizeof(int));
memset(&right_value172, 0, sizeof(void*));
memset(&new_fun_name_183, 0, sizeof(char*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
memset(&result_type_190, 0, sizeof(struct sType*));
memset(&right_value190, 0, sizeof(void*));
memset(&result_type2_191, 0, sizeof(struct sType*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&param_types_192, 0, sizeof(struct list$1sTypeph*));
memset(&o2_saved_193, 0, sizeof(struct list$1sTypeph*));
memset(&it_196, 0, sizeof(struct sType*));
memset(&right_value196, 0, sizeof(void*));
memset(&it2_202, 0, sizeof(struct sType*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
memset(&come_params_203, 0, sizeof(struct list$1CVALUEph*));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&label_params_207, 0, sizeof(struct map$2charphCVALUEph*));
memset(&i_208, 0, sizeof(int));
memset(&o2_saved_209, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&it_210, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&label_211, 0, sizeof(char*));
memset(&node_212, 0, sizeof(struct sNode*));
memset(&label_211, 0, sizeof(char*));
memset(&node_212, 0, sizeof(struct sNode*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&come_value_217, 0, sizeof(struct CVALUE*));
memset(&n_218, 0, sizeof(int));
memset(&o2_saved_219, 0, sizeof(struct list$1charph*));
memset(&it_222, 0, sizeof(char*));
memset(&right_value223, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
memset(&default_param_246, 0, sizeof(char*));
memset(&right_value256, 0, sizeof(void*));
memset(&param_name_247, 0, sizeof(char*));
memset(&right_value266, 0, sizeof(void*));
memset(&come_value_252, 0, sizeof(struct CVALUE*));
memset(&source_253, 0, sizeof(struct buffer*));
memset(&p_254, 0, sizeof(char*));
memset(&head_255, 0, sizeof(char*));
memset(&sline_256, 0, sizeof(int));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&node_257, 0, sizeof(struct sNode*));
memset(&right_value269, 0, sizeof(void*));
memset(&come_value_258, 0, sizeof(struct CVALUE*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&param_name_259, 0, sizeof(char*));
memset(&right_value282, 0, sizeof(void*));
memset(&come_value_260, 0, sizeof(struct CVALUE*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&current_stack_frame_node_265, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&come_value_266, 0, sizeof(struct CVALUE*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&method_block2_267, 0, sizeof(struct buffer*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&method_block_type_268, 0, sizeof(struct sType*));
memset(&right_value297, 0, sizeof(void*));
memset(&class_name_269, 0, sizeof(char*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&current_stack_frame_struct_274, 0, sizeof(struct sClass*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&result_type_275, 0, sizeof(struct sType*));
memset(&param_types_276, 0, sizeof(struct list$1sTypeph*));
memset(&param_names_277, 0, sizeof(struct list$1charph*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
memset(&all_alhabet_sname_278, 0, sizeof(struct buffer*));
memset(&p_279, 0, sizeof(char*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
memset(&i_280, 0, sizeof(int));
memset(&o2_saved_281, 0, sizeof(struct list$1sTypeph*));
memset(&it_282, 0, sizeof(struct sType*));
memset(&param_type_283, 0, sizeof(struct sType*));
memset(&right_value316, 0, sizeof(void*));
memset(&param_name_284, 0, sizeof(char*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&param_name_285, 0, sizeof(char*));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&param_name_286, 0, sizeof(char*));
memset(&right_value323, 0, sizeof(void*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
memset(&source3_287, 0, sizeof(struct buffer*));
memset(&p_288, 0, sizeof(char*));
memset(&head_289, 0, sizeof(char*));
memset(&sline_290, 0, sizeof(int));
memset(&right_value326, 0, sizeof(void*));
memset(&node_291, 0, sizeof(struct sNode*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&method_block_name_292, 0, sizeof(char*));
memset(&right_value329, 0, sizeof(void*));
memset(&come_value2_293, 0, sizeof(struct CVALUE*));
memset(&right_value330, 0, sizeof(void*));
memset(&fun2_294, 0, sizeof(struct sFun*));
memset(&method_block_type2_295, 0, sizeof(struct sType*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
memset(&buf_296, 0, sizeof(struct buffer*));
memset(&j_297, 0, sizeof(int));
memset(&o2_saved_298, 0, sizeof(struct list$1CVALUEph*));
memset(&it_299, 0, sizeof(struct CVALUE*));
memset(&right_value335, 0, sizeof(void*));
memset(&come_value2_300, 0, sizeof(struct CVALUE*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&var_name_301, 0, sizeof(char*));
memset(&right_value341, 0, sizeof(void*));
memset(&result_type_302, 0, sizeof(struct sType*));
memset(&right_value342, 0, sizeof(void*));
memset(&result_type2_303, 0, sizeof(struct sType*));
memset(&result_type3_304, 0, sizeof(struct sType*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
    fun_name_134=self->fun_name;
    __freed_obj__ = 0;
    params_135=self->params;
    __freed_obj__ = 0;
    obj_136=self->obj;
    __freed_obj__ = 0;
    method_block_137=self->method_block;
    __freed_obj__ = 0;
    method_block_sline_138=self->method_block_sline;
    __freed_obj__ = 0;
    if(_if_conditional223=!node_compile(obj_136,info),    __freed_obj__ = 0, 
    _if_conditional223) {
        __result106__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    obj_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    obj_type_140=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(obj_value_139->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value141;
    __freed_obj__ = 0;
    klass_141=obj_type_140->mClass;
    __freed_obj__ = 0;
    calling_dynamic_method_142=(_Bool)0;
    __freed_obj__ = 0;
    lambda_type_143=((void*)0);
    __freed_obj__ = 0;
    for(
    o2_saved_144=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_141->mFields)),it_147=list$1tuple2$2charphsTypephph_begin((o2_saved_144)) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA7=    !list$1tuple2$2charphsTypephph_end((o2_saved_144)) ,    __freed_obj__ = 0, 
    _for_condtionalA7;    it_147=list$1tuple2$2charphsTypephph_next((o2_saved_144)) ,    __freed_obj__ = 0, 
    0    ){
        multiple_assgin_var1=it_147;
        field_name_150=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_151=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        __freed_obj__ = 0;
        if(_if_conditional228=string_operator_equals(field_name_150,fun_name_134)&&string_operator_equals(field_type_151->mClass->mName,"lambda"),        __freed_obj__ = 0, 
        _if_conditional228) {
            calling_dynamic_method_142=(_Bool)1;
            __freed_obj__ = 0;
            lambda_type_143=field_type_151;
            __freed_obj__ = 0;
            if(field_name_150 && !__freed_obj__) { field_name_150 = come_decrement_ref_count(field_name_150, (void*)0, (void*)0, 0, 0, 0); }
            if(field_type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(field_name_150 && !__freed_obj__) { field_name_150 = come_decrement_ref_count(field_name_150, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_144 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsTypephphp_finalize,o2_saved_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional229=calling_dynamic_method_142,    __freed_obj__ = 0, 
    _if_conditional229) {
        result_type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(lambda_type_143->mResultType->v1))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142;
        __freed_obj__ = 0;
        result_type_152->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_params_155=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value144=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value143=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 260))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value143;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value144;
        __freed_obj__ = 0;
        i_156=0;
        __freed_obj__ = 0;
        for(
        o2_saved_157=(params_135),it_160=list$1tuple2$2charphsNodephph_begin((o2_saved_157)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA8=        !list$1tuple2$2charphsNodephph_end((o2_saved_157)) ,        __freed_obj__ = 0, 
        _for_condtionalA8;        it_160=list$1tuple2$2charphsNodephph_next((o2_saved_157)) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var2=it_160;
            label_163=(char*)come_increment_ref_count(multiple_assgin_var2->v1);
            node_164=(struct sNode*)come_increment_ref_count(multiple_assgin_var2->v2);
            __freed_obj__ = 0;
            if(_if_conditional234=i_156==0,            __freed_obj__ = 0, 
            _if_conditional234) {
                list$1CVALUEph_push_back(come_params_155,(struct CVALUE*)come_increment_ref_count(obj_value_139));
                __freed_obj__ = 0;
                i_156++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional235=!node_compile(node_164,info),                __freed_obj__ = 0, 
                _if_conditional235) {
                    __result122__ = (_Bool)0;
                    if(label_163 && !__freed_obj__) { label_163 = come_decrement_ref_count(label_163, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_164 && !__freed_obj__) { node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0); } 
                    if(result_type_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_155 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result122__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
                if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value145;
                __freed_obj__ = 0;
                check_assign_type(((char*)(right_value148=xsprintf("\%s param num \%s is assinged to",((char*)(right_value146=charp_to_string(fun_name_134))),((char*)(right_value147=int_to_string(i_156)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value153=list$1sTypephp_operator_load_element(lambda_type_143->mParamTypes,i_156-1)))),come_value_165->type,come_value_165,(_Bool)0,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value146);
                if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value146;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value147);
                if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value147;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value148);
                if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value148;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value153);
                if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value153;
                __freed_obj__ = 0;
                if(_if_conditional240=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value154=list$1sTypephp_operator_load_element(lambda_type_143->mParamTypes,i_156-1))))->mHeap&&come_value_165->type->mHeap,                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value154),
                (right_value154 && right_value154 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[5] = right_value154, 
                __freed_obj__ = 0, 
                _if_conditional240) {
                    if(_if_conditional241=come_value_165->var,                    __freed_obj__ = 0, 
                    _if_conditional241) {
                        if(_if_conditional242=come_value_165->var->mType->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional242) {
                            __dec_obj54=come_value_165->var->mCValueName;
                            come_value_165->var->mCValueName=((void*)0);
                            if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional243=come_value_165->var->mType->mShare,                            __freed_obj__ = 0, 
                            _if_conditional243) {
                                __dec_obj55=come_value_165->c_value;
                                come_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value155=increment_ref_count_object(come_value_165->type,come_value_165->c_value,info))));
                                if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
                                if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value155;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional244=come_value_165->var->mType->mClone,                                __freed_obj__ = 0, 
                                _if_conditional244) {
                                    __dec_obj56=come_value_165->c_value;
                                    come_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value156=increment_ref_count_object(come_value_165->type,come_value_165->c_value,info))));
                                    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
                                    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value156;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj57=come_value_165->c_value;
                                    come_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value157=increment_ref_count_object(come_value_165->type,come_value_165->c_value,info))));
                                    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
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
                        if(_if_conditional245=come_value_165->type->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional245) {
                        }
                        else {
                            __dec_obj58=come_value_165->c_value;
                            come_value_165->c_value=(char*)come_increment_ref_count(((char*)(right_value158=increment_ref_count_object(come_value_165->type,come_value_165->c_value,info))));
                            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
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
                list$1CVALUEph_push_back(come_params_155,(struct CVALUE*)come_increment_ref_count(come_value_165));
                __freed_obj__ = 0;
                i_156++;
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                if(come_value_165 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_165, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(label_163 && !__freed_obj__) { label_163 = come_decrement_ref_count(label_163, (void*)0, (void*)0, 0, 0, 0); }
            if(node_164 && !__freed_obj__) { node_164 = come_decrement_ref_count(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        buf_170=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value160=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value159=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 314))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value159;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value160;
        __freed_obj__ = 0;
        buffer_append_str(buf_170,((char*)(right_value161=xsprintf("%s->%s",obj_value_139->c_value,fun_name_134))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value161;
        __freed_obj__ = 0;
        buffer_append_str(buf_170,"(");
        __freed_obj__ = 0;
        j_171=0;
        __freed_obj__ = 0;
        for(
        o2_saved_172=(struct list$1CVALUEph*)come_increment_ref_count((come_params_155)),it_175=list$1CVALUEph_begin((o2_saved_172)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA9=        !list$1CVALUEph_end((o2_saved_172)) ,        __freed_obj__ = 0, 
        _for_condtionalA9;        it_175=list$1CVALUEph_next((o2_saved_172)) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional250=j_171==0,            __freed_obj__ = 0, 
            _if_conditional250) {
                __dec_obj59=it_175->c_value;
                it_175->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s->_protocol_obj",it_175->c_value))));
                if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
                if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value162;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(buf_170,it_175->c_value);
            __freed_obj__ = 0;
            if(_if_conditional251=j_171!=list$1CVALUEph_length(come_params_155)-1,            __freed_obj__ = 0, 
            _if_conditional251) {
                buffer_append_str(buf_170,",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_171++;
            __freed_obj__ = 0;
        }
        if(o2_saved_172 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(buf_170,")");
        __freed_obj__ = 0;
        come_value2_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 334))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value163;
        __freed_obj__ = 0;
        __dec_obj60=come_value2_178->c_value;
        come_value2_178->c_value=(char*)come_increment_ref_count(((char*)(right_value164=buffer_to_string(buf_170))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value164;
        __freed_obj__ = 0;
        result_type2_179=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=solve_generics(result_type_152,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value165;
        __freed_obj__ = 0;
        if(_if_conditional252=result_type2_179->mHeap,        __freed_obj__ = 0, 
        _if_conditional252) {
            __dec_obj61=come_value2_178->c_value;
            come_value2_178->c_value=(char*)come_increment_ref_count(((char*)(right_value167=append_object_to_right_values(((char*)(right_value166=buffer_to_string(buf_170))),(struct sType*)come_increment_ref_count(result_type2_179),info))));
            if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
            if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value166;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
            if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value167;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj62=come_value2_178->type;
        come_value2_178->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(result_type2_179))));
        if(__dec_obj62) { come_call_finalizer(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value168);
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value168;
        __freed_obj__ = 0;
        come_value2_178->type->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_value2_178->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value2_178->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_178));
        __freed_obj__ = 0;
        if(result_type_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_152, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_155 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_170 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_178, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        generics_fun_name_180=(char*)come_increment_ref_count(((char*)(right_value171=string_to_string(((char*)(right_value170=make_generics_function(obj_type_140,(char*)come_increment_ref_count(((char*)(right_value169=__builtin_string(fun_name_134)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value169;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value170;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value171;
        __freed_obj__ = 0;
        fun_181=((void*)0);
        __freed_obj__ = 0;
        for(
        i_182=128 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA10=        i_182>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA10;        i_182-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_183=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s_v%d",generics_fun_name_180,i_182))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
            if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value172;
            __freed_obj__ = 0;
            fun_181=optional$2sFunpbool_value(((struct optional$2sFunpbool*)(right_value182=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_183))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value182);
            if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value182;
            __freed_obj__ = 0;
            if(_if_conditional258=fun_181!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional258) {
                __dec_obj63=generics_fun_name_180;
                generics_fun_name_180=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(new_fun_name_183))));
                if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value183;
                __freed_obj__ = 0;
                if(new_fun_name_183 && !__freed_obj__) { new_fun_name_183 = come_decrement_ref_count(new_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_183 && !__freed_obj__) { new_fun_name_183 = come_decrement_ref_count(new_fun_name_183, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional259=fun_181==((void*)0),        __freed_obj__ = 0, 
        _if_conditional259) {
            fun_181=((struct sFun*)(right_value185=map$2charphsFunph_at(info->funcs,generics_fun_name_180,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
            if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value185;
            __freed_obj__ = 0;
            if(_if_conditional279=fun_181==((void*)0),            __freed_obj__ = 0, 
            _if_conditional279) {
                __dec_obj64=generics_fun_name_180;
                generics_fun_name_180=(char*)come_increment_ref_count(((char*)(right_value187=create_method_name(obj_type_140,(_Bool)0,((char*)(right_value186=__builtin_string(fun_name_134))),info))));
                if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value186;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value187;
                __freed_obj__ = 0;
                fun_181=((struct sFun*)(right_value188=map$2charphsFunph_at(info->funcs,generics_fun_name_180,((void*)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value188);
                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value188;
                __freed_obj__ = 0;
                if(_if_conditional280=fun_181==((void*)0),                __freed_obj__ = 0, 
                _if_conditional280) {
                    err_msg(info,"function not found(%s) at method(%s)(Z)\n",generics_fun_name_180,info->come_fun->mName);
                    __freed_obj__ = 0;
                    __result147__ = (_Bool)1;
                    if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                    if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result147__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_type_190=(struct sType*)come_increment_ref_count(((struct sType*)(right_value189=sType_clone(fun_181->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value189;
        __freed_obj__ = 0;
        result_type_190->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        result_type2_191=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=solve_generics(result_type_190,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value190;
        __freed_obj__ = 0;
        param_types_192=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value192=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value191=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 388))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value191;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value192;
        __freed_obj__ = 0;
        for(
        o2_saved_193=(struct list$1sTypeph*)come_increment_ref_count((fun_181->mParamTypes)),it_196=list$1sTypeph_begin((o2_saved_193)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA11=        !list$1sTypeph_end((o2_saved_193)) ,        __freed_obj__ = 0, 
        _for_condtionalA11;        it_196=list$1sTypeph_next((o2_saved_193)) ,        __freed_obj__ = 0, 
        0        ){
            if(_if_conditional285=it_196==((void*)0),            __freed_obj__ = 0, 
            _if_conditional285) {
                list$1sTypeph_push_back(param_types_192,it_196);
                __freed_obj__ = 0;
            }
            else {
                it2_202=(struct sType*)come_increment_ref_count(((struct sType*)(right_value196=solve_generics(it_196,info->generics_type,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value196;
                __freed_obj__ = 0;
                list$1sTypeph_push_back(param_types_192,(struct sType*)come_increment_ref_count(((struct sType*)(right_value197=sType_clone(it2_202)))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
                if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value197;
                __freed_obj__ = 0;
                if(it2_202 && !__freed_obj__) { come_call_finalizer(sType_finalize,it2_202, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        if(o2_saved_193 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        come_params_203=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value199=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value198=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 400))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value198);
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value198;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value199);
        if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value199;
        __freed_obj__ = 0;
        label_params_207=(struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value206=map$2charphCVALUEph_initialize((struct map$2charphCVALUEph*)come_increment_ref_count(((struct map$2charphCVALUEph*)(right_value200=(struct map$2charphCVALUEph*)come_calloc(1, sizeof(struct map$2charphCVALUEph)*(1), "20method.c", 402))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value200);
        if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value200;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value206);
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value206;
        __freed_obj__ = 0;
        i_208=0;
        __freed_obj__ = 0;
        for(
        o2_saved_209=(params_135),it_210=list$1tuple2$2charphsNodephph_begin((o2_saved_209)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA15=        !list$1tuple2$2charphsNodephph_end((o2_saved_209)) ,        __freed_obj__ = 0, 
        _for_condtionalA15;        it_210=list$1tuple2$2charphsNodephph_next((o2_saved_209)) ,        __freed_obj__ = 0, 
        0        ){
            multiple_assgin_var3=it_210;
            label_211=(char*)come_increment_ref_count(multiple_assgin_var3->v1);
            node_212=(struct sNode*)come_increment_ref_count(multiple_assgin_var3->v2);
            __freed_obj__ = 0;
            if(_if_conditional292=i_208==0,            __freed_obj__ = 0, 
            _if_conditional292) {
                check_assign_type(((char*)(right_value209=xsprintf("\%s param num \%s is assinged to",((char*)(right_value207=charp_to_string(fun_name_134))),((char*)(right_value208=int_to_string(i_208)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value210=list$1sTypephp_operator_load_element(param_types_192,i_208)))),obj_value_139->type,obj_value_139,(_Bool)0,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value207;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value208);
                if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value208;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value209);
                if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value209;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value210);
                if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value210;
                __freed_obj__ = 0;
                if(_if_conditional293=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value211=list$1sTypephp_operator_load_element(param_types_192,i_208))))->mHeap&&obj_value_139->type->mHeap,                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value211),
                (right_value211 && right_value211 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0):0,
                __right_value_freed_obj[4] = right_value211, 
                __freed_obj__ = 0, 
                _if_conditional293) {
                    if(_if_conditional294=obj_value_139->var,                    __freed_obj__ = 0, 
                    _if_conditional294) {
                        if(_if_conditional295=obj_value_139->var->mType->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional295) {
                            __dec_obj69=obj_value_139->var->mCValueName;
                            obj_value_139->var->mCValueName=((void*)0);
                            if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional296=obj_value_139->var->mType->mShare,                            __freed_obj__ = 0, 
                            _if_conditional296) {
                                __dec_obj70=obj_value_139->c_value;
                                obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value212=increment_ref_count_object(obj_value_139->type,obj_value_139->c_value,info))));
                                if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value212;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional297=obj_value_139->var->mType->mClone,                                __freed_obj__ = 0, 
                                _if_conditional297) {
                                    __dec_obj71=obj_value_139->c_value;
                                    obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value213=increment_ref_count_object(obj_value_139->type,obj_value_139->c_value,info))));
                                    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                                    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value213;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    __dec_obj72=obj_value_139->c_value;
                                    obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value214=increment_ref_count_object(obj_value_139->type,obj_value_139->c_value,info))));
                                    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value214;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional298=obj_value_139->type->mDelegate,                        __freed_obj__ = 0, 
                        _if_conditional298) {
                        }
                        else {
                            __dec_obj73=obj_value_139->c_value;
                            obj_value_139->c_value=(char*)come_increment_ref_count(((char*)(right_value215=increment_ref_count_object(obj_value_139->type,obj_value_139->c_value,info))));
                            if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                            if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value215;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional299=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value216=list$1sTypephp_operator_load_element(param_types_192,i_208))))->mHeap&&!obj_value_139->type->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216),
                    (right_value216 && right_value216 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value216, 
                    __freed_obj__ = 0, 
                    _if_conditional299) {
                        err_msg(info,"require heap parametor(%s)",optional$2charphbool_value(((struct optional$2charphbool*)(right_value221=list$1charphp_operator_load_element(fun_181->mParamNames,i_208)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value221;
                        __freed_obj__ = 0;
                        exit(2);
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(come_params_203,(struct CVALUE*)come_increment_ref_count(obj_value_139));
                __freed_obj__ = 0;
                i_208++;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional304=!node_compile(node_212,info),                __freed_obj__ = 0, 
                _if_conditional304) {
                    __result163__ = (_Bool)0;
                    if(label_211 && !__freed_obj__) { label_211 = come_decrement_ref_count(label_211, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_212 && !__freed_obj__) { node_212 = come_decrement_ref_count(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0); } 
                    if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                    if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    return __result163__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value222;
                __freed_obj__ = 0;
                if(_if_conditional305=label_211!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional305) {
                    n_218=0;
                    __freed_obj__ = 0;
                    for(
                    o2_saved_219=(struct list$1charph*)come_increment_ref_count((fun_181->mParamNames)),it_222=list$1charph_begin((o2_saved_219)) ,                    __freed_obj__ = 0, 
                    0;                    _for_condtionalA16=                    !list$1charph_end((o2_saved_219)) ,                    __freed_obj__ = 0, 
                    _for_condtionalA16;                    it_222=list$1charph_next((o2_saved_219)) ,                    __freed_obj__ = 0, 
                    0                    ){
                        if(_if_conditional310=string_operator_equals(label_211,it_222),                        __freed_obj__ = 0, 
                        _if_conditional310) {
                            break;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        n_218++;
                        __freed_obj__ = 0;
                    }
                    if(o2_saved_219 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,o2_saved_219, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional311=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value223=list$1sTypephp_operator_load_element(param_types_192,n_218)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223),
                    (right_value223 && right_value223 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value223, 
                    __freed_obj__ = 0, 
                    _if_conditional311) {
                        check_assign_type(((char*)(right_value226=xsprintf("\%s param num \%s is assinged to",((char*)(right_value224=charp_to_string(fun_name_134))),((char*)(right_value225=int_to_string(i_208)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value227=list$1sTypephp_operator_load_element(param_types_192,n_218)))),come_value_217->type,come_value_217,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
                        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value224;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
                        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value225;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value226);
                        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value226;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value227);
                        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value227;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional312=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value228=list$1sTypephp_operator_load_element(param_types_192,n_218))))&&optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value229=list$1sTypephp_operator_load_element(param_types_192,n_218))))->mHeap&&come_value_217->type->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value228),
                    (right_value228 && right_value228 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[1] = right_value228, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value229),
                    (right_value229 && right_value229 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[2] = right_value229, 
                    __freed_obj__ = 0, 
                    _if_conditional312) {
                        if(_if_conditional313=come_value_217->var,                        __freed_obj__ = 0, 
                        _if_conditional313) {
                            if(_if_conditional314=come_value_217->var->mType->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional314) {
                                __dec_obj75=come_value_217->var->mCValueName;
                                come_value_217->var->mCValueName=((void*)0);
                                if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional315=come_value_217->var->mType->mShare,                                __freed_obj__ = 0, 
                                _if_conditional315) {
                                    __dec_obj76=come_value_217->c_value;
                                    come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value230=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                                    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value230;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional316=come_value_217->var->mType->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional316) {
                                        __dec_obj77=come_value_217->c_value;
                                        come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value231=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                                        if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value231;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj78=come_value_217->c_value;
                                        come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value232=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
                                        if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value232;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional317=come_value_217->type->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional317) {
                            }
                            else {
                                __dec_obj79=come_value_217->c_value;
                                come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value233=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                                if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value233;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional318=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value234=list$1sTypephp_operator_load_element(param_types_192,i_208)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234),
                    (right_value234 && right_value234 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value234, 
                    __freed_obj__ = 0, 
                    _if_conditional318) {
                        check_assign_type(((char*)(right_value237=xsprintf("\%s param num \%s is assinged to",((char*)(right_value235=charp_to_string(fun_name_134))),((char*)(right_value236=int_to_string(i_208)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value238=list$1sTypephp_operator_load_element(param_types_192,i_208)))),come_value_217->type,come_value_217,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
                        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value235;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value236);
                        if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value236;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value237);
                        if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value237;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value238);
                        if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value238;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional319=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value239=list$1sTypephp_operator_load_element(param_types_192,i_208))))&&optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value240=list$1sTypephp_operator_load_element(param_types_192,i_208))))->mHeap&&come_value_217->type->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value239),
                    (right_value239 && right_value239 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[1] = right_value239, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value240),
                    (right_value240 && right_value240 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[2] = right_value240, 
                    __freed_obj__ = 0, 
                    _if_conditional319) {
                        if(_if_conditional320=come_value_217->var,                        __freed_obj__ = 0, 
                        _if_conditional320) {
                            if(_if_conditional321=come_value_217->var->mType->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional321) {
                                __dec_obj80=come_value_217->var->mCValueName;
                                come_value_217->var->mCValueName=((void*)0);
                                if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional322=come_value_217->var->mType->mShare,                                __freed_obj__ = 0, 
                                _if_conditional322) {
                                    __dec_obj81=come_value_217->c_value;
                                    come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value241=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                                    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value241;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional323=come_value_217->var->mType->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional323) {
                                        __dec_obj82=come_value_217->c_value;
                                        come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value242=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
                                        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value242;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj83=come_value_217->c_value;
                                        come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value243=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
                                        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value243;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional324=come_value_217->type->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional324) {
                            }
                            else {
                                __dec_obj84=come_value_217->c_value;
                                come_value_217->c_value=(char*)come_increment_ref_count(((char*)(right_value244=increment_ref_count_object(come_value_217->type,come_value_217->c_value,info))));
                                if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                                if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value244;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional325=label_211==((void*)0),                __freed_obj__ = 0, 
                _if_conditional325) {
                    list$1CVALUEph_push_back(come_params_203,(struct CVALUE*)come_increment_ref_count(come_value_217));
                    __freed_obj__ = 0;
                    i_208++;
                    __freed_obj__ = 0;
                }
                else {
                    map$2charphCVALUEph_insert(label_params_207,(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(label_211)))),(struct CVALUE*)come_increment_ref_count(come_value_217));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                    if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value253;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                dec_stack_ptr(1,info);
                __freed_obj__ = 0;
                if(come_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
            if(label_211 && !__freed_obj__) { label_211 = come_decrement_ref_count(label_211, (void*)0, (void*)0, 0, 0, 0); }
            if(node_212 && !__freed_obj__) { node_212 = come_decrement_ref_count(node_212, ((struct sNode*)node_212)->finalize, ((struct sNode*)node_212)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
        if(_if_conditional348=list$1tuple2$2charphsNodephph_length(params_135)<list$1sTypeph_length(fun_181->mParamTypes)+(method_block_137?-2:0),        __freed_obj__ = 0, 
        _if_conditional348) {
            for(
            ;            _for_condtionalA19=            i_208<list$1sTypeph_length(fun_181->mParamTypes)+(method_block_137?-2:0) ,            __freed_obj__ = 0, 
            _for_condtionalA19;            i_208++ ,            __freed_obj__ = 0, 
            0            ){
                default_param_246=(char*)come_increment_ref_count(((char*)(right_value255=string_clone(optional$2charphbool_value(((struct optional$2charphbool*)(right_value254=list$1charphp_operator_load_element(fun_181->mParamDefaultParametors,i_208))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
                if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value254;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
                if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value255;
                __freed_obj__ = 0;
                param_name_247=optional$2charphbool_value(((struct optional$2charphbool*)(right_value256=list$1charphp_operator_load_element(fun_181->mParamNames,i_208))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value256);
                if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value256;
                __freed_obj__ = 0;
                come_value_252=optional$2CVALUEpbool_value(((struct optional$2CVALUEpbool*)(right_value266=map$2charphCVALUEphp_operator_load_element(label_params_207,param_name_247))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value266);
                if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value266;
                __freed_obj__ = 0;
                if(_if_conditional354=default_param_246&&string_operator_not_equals(default_param_246,""),                __freed_obj__ = 0, 
                _if_conditional354) {
                    source_253=(struct buffer*)come_increment_ref_count(info->source);
                    __freed_obj__ = 0;
                    p_254=info->p;
                    __freed_obj__ = 0;
                    head_255=info->head;
                    __freed_obj__ = 0;
                    sline_256=info->sline;
                    __freed_obj__ = 0;
                    __dec_obj85=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value267=string_to_buffer(default_param_246))));
                    if(__dec_obj85) { come_call_finalizer(buffer_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
                    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value267;
                    __freed_obj__ = 0;
                    info->p=info->source->buf;
                    __freed_obj__ = 0;
                    info->head=info->source->buf;
                    __freed_obj__ = 0;
                    node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value268);
                    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[1] = right_value268;
                    __freed_obj__ = 0;
                    if(_if_conditional355=!node_compile(node_257,info),                    __freed_obj__ = 0, 
                    _if_conditional355) {
                        __result192__ = (_Bool)0;
                        if(source_253 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                        if(default_param_246 && !__freed_obj__) { default_param_246 = come_decrement_ref_count(default_param_246, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result192__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __dec_obj86=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_253);
                    if(__dec_obj86) { come_call_finalizer(buffer_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    info->p=p_254;
                    __freed_obj__ = 0;
                    info->head=head_255;
                    __freed_obj__ = 0;
                    info->sline=sline_256;
                    __freed_obj__ = 0;
                    come_value_258=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value269);
                    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value269;
                    __freed_obj__ = 0;
                    if(_if_conditional356=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value270=list$1sTypephp_operator_load_element(param_types_192,i_208)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value270),
                    (right_value270 && right_value270 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[3] = right_value270, 
                    __freed_obj__ = 0, 
                    _if_conditional356) {
                        check_assign_type(((char*)(right_value273=xsprintf("\%s param num \%s is assinged to",((char*)(right_value271=charp_to_string(fun_name_134))),((char*)(right_value272=int_to_string(i_208)))))),optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value274=list$1sTypephp_operator_load_element(param_types_192,i_208)))),come_value_258->type,come_value_258,(_Bool)0,info);
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value271;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value272);
                        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value272;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value273);
                        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value273;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value274);
                        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[3] = right_value274;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional357=optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value275=list$1sTypephp_operator_load_element(param_types_192,i_208))))&&optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value276=list$1sTypephp_operator_load_element(param_types_192,i_208))))->mHeap&&come_value_258->type->mHeap,                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value275),
                    (right_value275 && right_value275 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[4] = right_value275, 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value276),
                    (right_value276 && right_value276 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[5] = right_value276, 
                    __freed_obj__ = 0, 
                    _if_conditional357) {
                        if(_if_conditional358=come_value_258->var,                        __freed_obj__ = 0, 
                        _if_conditional358) {
                            if(_if_conditional359=come_value_258->var->mType->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional359) {
                                __dec_obj87=come_value_258->var->mCValueName;
                                come_value_258->var->mCValueName=((void*)0);
                                if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional360=come_value_258->var->mType->mShare,                                __freed_obj__ = 0, 
                                _if_conditional360) {
                                    __dec_obj88=come_value_258->c_value;
                                    come_value_258->c_value=(char*)come_increment_ref_count(((char*)(right_value277=increment_ref_count_object(come_value_258->type,come_value_258->c_value,info))));
                                    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
                                    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value277;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional361=come_value_258->var->mType->mClone,                                    __freed_obj__ = 0, 
                                    _if_conditional361) {
                                        __dec_obj89=come_value_258->c_value;
                                        come_value_258->c_value=(char*)come_increment_ref_count(((char*)(right_value278=increment_ref_count_object(come_value_258->type,come_value_258->c_value,info))));
                                        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                                        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value278;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        __dec_obj90=come_value_258->c_value;
                                        come_value_258->c_value=(char*)come_increment_ref_count(((char*)(right_value279=increment_ref_count_object(come_value_258->type,come_value_258->c_value,info))));
                                        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
                                        if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value279;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional362=come_value_258->type->mDelegate,                            __freed_obj__ = 0, 
                            _if_conditional362) {
                            }
                            else {
                                __dec_obj91=come_value_258->c_value;
                                come_value_258->c_value=(char*)come_increment_ref_count(((char*)(right_value280=increment_ref_count_object(come_value_258->type,come_value_258->c_value,info))));
                                if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
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
                    list$1CVALUEph_push_back(come_params_203,(struct CVALUE*)come_increment_ref_count(come_value_258));
                    __freed_obj__ = 0;
                    dec_stack_ptr(1,info);
                    __freed_obj__ = 0;
                    if(source_253 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_253, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                    if(come_value_258 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_258, (void*)0, (void*)0, 0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional363=come_value_252,                    __freed_obj__ = 0, 
                    _if_conditional363) {
                        list$1CVALUEph_push_back(come_params_203,((void*)0));
                        __freed_obj__ = 0;
                    }
                    else {
                        err_msg(info,"require parametor(%s)",fun_181->mName);
                        __freed_obj__ = 0;
                        __result193__ = (_Bool)0;
                        if(default_param_246 && !__freed_obj__) { default_param_246 = come_decrement_ref_count(default_param_246, (void*)0, (void*)0, 0, 0, 0); }
                        if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                        if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                        if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        return __result193__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(default_param_246 && !__freed_obj__) { default_param_246 = come_decrement_ref_count(default_param_246, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional364=map$2charphCVALUEph_length(label_params_207)>0,        __freed_obj__ = 0, 
        _if_conditional364) {
            for(
            i_208=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA20=            i_208<list$1charph_length(fun_181->mParamNames)+(method_block_137?-2:0) ,            __freed_obj__ = 0, 
            _for_condtionalA20;            i_208++ ,            __freed_obj__ = 0, 
            0            ){
                param_name_259=optional$2charphbool_value(((struct optional$2charphbool*)(right_value281=list$1charphp_operator_load_element(fun_181->mParamNames,i_208))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
                if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value281;
                __freed_obj__ = 0;
                come_value_260=optional$2CVALUEpbool_value(((struct optional$2CVALUEpbool*)(right_value282=map$2charphCVALUEphp_operator_load_element(label_params_207,param_name_259))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value282);
                if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value282;
                __freed_obj__ = 0;
                if(_if_conditional365=come_value_260,                __freed_obj__ = 0, 
                _if_conditional365) {
                    list$1CVALUEph_replace(come_params_203,i_208,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=CVALUE_clone(come_value_260)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
                    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value286;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional373=method_block_137,        __freed_obj__ = 0, 
        _if_conditional373) {
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 629);
            _inf_obj_value1=come_increment_ref_count(((struct sCurrentNode*)(right_value288=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value287=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 629)))),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sCurrentNode_finalize;
            _inf_value1->clone=(void*)sCurrentNode_clone;
            _inf_value1->compile=(void*)sCurrentNode_compile;
            _inf_value1->sline=(void*)sCurrentNode_sline;
            _inf_value1->sname=(void*)sCurrentNode_sname;
            _inf_value1->terminated=(void*)sCurrentNode_terminated;
            _inf_value1->kind=(void*)sCurrentNode_kind;
            current_stack_frame_node_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=_inf_value1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
            if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value287;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value288);
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value288;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value291);
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value291;
            __freed_obj__ = 0;
            if(_if_conditional378=!node_compile(current_stack_frame_node_265,info),            __freed_obj__ = 0, 
            _if_conditional378) {
                __result202__ = (_Bool)0;
                if(current_stack_frame_node_265 && !__freed_obj__) { current_stack_frame_node_265 = come_decrement_ref_count(current_stack_frame_node_265, ((struct sNode*)current_stack_frame_node_265)->finalize, ((struct sNode*)current_stack_frame_node_265)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result202__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_value_266=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value292);
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value292;
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(come_params_203,(struct CVALUE*)come_increment_ref_count(come_value_266));
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            __freed_obj__ = 0;
            method_block2_267=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value294=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value293=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 639))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value293);
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value293;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value294);
            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[5] = right_value294;
            __freed_obj__ = 0;
            method_block_type_268=(struct sType*)come_increment_ref_count(((struct sType*)(right_value296=sType_clone(optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value295=list$1sTypephp_operator_load_element(fun_181->mParamTypes,-1))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value295);
            if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[6] = right_value295;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value296);
            if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[7] = right_value296;
            __freed_obj__ = 0;
            class_name_269=(char*)come_increment_ref_count(((char*)(right_value297=xsprintf("__current_stack%d__",info->current_stack_num))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[8] = right_value297;
            __freed_obj__ = 0;
            optional$2sTypephbool_value(((struct optional$2sTypephbool*)(right_value298=list$1sTypephp_operator_load_element(method_block_type_268->mParamTypes,0))))->mClass=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value308=map$2charphsClassphp_operator_load_element(info->classes,class_name_269))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[9] = right_value298;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value308);
            if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[10] = right_value308;
            __freed_obj__ = 0;
            current_stack_frame_struct_274=info->current_stack_frame_struct;
            __freed_obj__ = 0;
            info->current_stack_frame_struct=optional$2sClasspbool_value(((struct optional$2sClasspbool*)(right_value309=map$2charphsClassphp_operator_load_element(info->classes,class_name_269))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value309);
            if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[11] = right_value309;
            __freed_obj__ = 0;
            info->num_method_block++;
            __freed_obj__ = 0;
            if(_if_conditional384=string_operator_not_equals(method_block_type_268->mClass->mName,"lambda"),            __freed_obj__ = 0, 
            _if_conditional384) {
                err_msg(info,"This function does not have method block(%s)",fun_name_134);
                __freed_obj__ = 0;
                __result210__ = (_Bool)0;
                if(current_stack_frame_node_265 && !__freed_obj__) { current_stack_frame_node_265 = come_decrement_ref_count(current_stack_frame_node_265, ((struct sNode*)current_stack_frame_node_265)->finalize, ((struct sNode*)current_stack_frame_node_265)->_protocol_obj, 0, 0, 0); } 
                if(come_value_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_267 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_269 && !__freed_obj__) { class_name_269 = come_decrement_ref_count(class_name_269, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result210__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_type_275=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(method_block_type_268->mResultType->v1))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value310);
            if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[12] = right_value310;
            __freed_obj__ = 0;
            result_type_275->mStatic=(_Bool)0;
            __freed_obj__ = 0;
            param_types_276=method_block_type_268->mParamTypes;
            __freed_obj__ = 0;
            param_names_277=method_block_type_268->mParamNames;
            __freed_obj__ = 0;
            all_alhabet_sname_278=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value312=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value311=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 660))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value311);
            if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[13] = right_value311;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value312);
            if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[14] = right_value312;
            __freed_obj__ = 0;
            {
                p_279=info->sname;
                __freed_obj__ = 0;
                while(_while_condtional35=*p_279,                __freed_obj__ = 0, 
                _while_condtional35) {
                    if(_if_conditional385=xisalnum(*p_279),                    __freed_obj__ = 0, 
                    _if_conditional385) {
                        buffer_append_char(all_alhabet_sname_278,*p_279++);
                        __freed_obj__ = 0;
                    }
                    else {
                        p_279++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(method_block2_267,((char*)(right_value315=xsprintf("%s method_block%d_%s(",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value313=make_type_name_string(result_type_275,(_Bool)0,(_Bool)0,(_Bool)0,info)))),info->num_method_block,((char*)(right_value314=buffer_to_string(all_alhabet_sname_278)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value313);
            if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[15] = right_value313;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value314);
            if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[16] = right_value314;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 17, right_value315);
            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[17] = right_value315;
            __freed_obj__ = 0;
            i_280=0;
            __freed_obj__ = 0;
            for(
            o2_saved_281=(param_types_276),it_282=list$1sTypeph_begin((o2_saved_281)) ,            __freed_obj__ = 0, 
            0;            _for_condtionalA21=            !list$1sTypeph_end((o2_saved_281)) ,            __freed_obj__ = 0, 
            _for_condtionalA21;            it_282=list$1sTypeph_next((o2_saved_281)) ,            __freed_obj__ = 0, 
            0            ){
                param_type_283=it_282;
                __freed_obj__ = 0;
                if(_if_conditional387=i_280==0,                __freed_obj__ = 0, 
                _if_conditional387) {
                    param_name_284=(char*)come_increment_ref_count(((char*)(right_value316=xsprintf("parent"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
                    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value316;
                    __freed_obj__ = 0;
                    buffer_append_str(method_block2_267,((char*)(right_value318=xsprintf("%s",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value317=make_define_var(param_type_283,param_name_284,(_Bool)0,info))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value317);
                    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value317;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value318);
                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value318;
                    __freed_obj__ = 0;
                    if(param_name_284 && !__freed_obj__) { param_name_284 = come_decrement_ref_count(param_name_284, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    if(_if_conditional388=i_280==1,                    __freed_obj__ = 0, 
                    _if_conditional388) {
                        param_name_285=(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("it"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
                        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value319;
                        __freed_obj__ = 0;
                        buffer_append_str(method_block2_267,((char*)(right_value321=xsprintf("%s",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value320=make_define_var(param_type_283,param_name_285,(_Bool)0,info))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value320);
                        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value320;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value321);
                        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value321;
                        __freed_obj__ = 0;
                        if(param_name_285 && !__freed_obj__) { param_name_285 = come_decrement_ref_count(param_name_285, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    else {
                        param_name_286=(char*)come_increment_ref_count(((char*)(right_value322=xsprintf("it%d",i_280))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
                        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value322;
                        __freed_obj__ = 0;
                        buffer_append_str(method_block2_267,((char*)(right_value324=xsprintf("%s",optional$2charphbool_expect(((struct optional$2charphbool*)(right_value323=make_define_var(param_type_283,param_name_286,(_Bool)0,info))))))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value323);
                        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value323;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value324);
                        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value324;
                        __freed_obj__ = 0;
                        if(param_name_286 && !__freed_obj__) { param_name_286 = come_decrement_ref_count(param_name_286, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional389=i_280!=list$1sTypeph_length(param_types_276)-1,                __freed_obj__ = 0, 
                _if_conditional389) {
                    buffer_append_str(method_block2_267,",");
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                i_280++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            buffer_append_str(method_block2_267,")\n");
            __freed_obj__ = 0;
            buffer_append_str(method_block2_267,((char*)(right_value325=buffer_to_string(method_block_137))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 18, right_value325);
            if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[18] = right_value325;
            __freed_obj__ = 0;
            source3_287=(struct buffer*)come_increment_ref_count(info->source);
            __freed_obj__ = 0;
            p_288=info->p;
            __freed_obj__ = 0;
            head_289=info->head;
            __freed_obj__ = 0;
            sline_290=info->sline;
            __freed_obj__ = 0;
            __dec_obj96=info->source;
            info->source=(struct buffer*)come_increment_ref_count(method_block2_267);
            if(__dec_obj96) { come_call_finalizer(buffer_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            info->p=info->source->buf;
            __freed_obj__ = 0;
            info->head=info->source->buf;
            __freed_obj__ = 0;
            info->sline=method_block_sline_138;
            __freed_obj__ = 0;
            node_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=parse_function(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 19, right_value326);
            if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[19] = right_value326;
            __freed_obj__ = 0;
            if(_if_conditional390=!node_compile(node_291,info),            __freed_obj__ = 0, 
            _if_conditional390) {
                __result212__ = (_Bool)0;
                if(current_stack_frame_node_265 && !__freed_obj__) { current_stack_frame_node_265 = come_decrement_ref_count(current_stack_frame_node_265, ((struct sNode*)current_stack_frame_node_265)->finalize, ((struct sNode*)current_stack_frame_node_265)->_protocol_obj, 0, 0, 0); } 
                if(come_value_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_267 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_269 && !__freed_obj__) { class_name_269 = come_decrement_ref_count(class_name_269, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_275 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_275, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_287 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_287, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_291 && !__freed_obj__) { node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0); } 
                if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result212__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            method_block_name_292=(char*)come_increment_ref_count(((char*)(right_value328=xsprintf("method_block%d_%s",info->num_method_block,((char*)(right_value327=buffer_to_string(all_alhabet_sname_278)))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 20, right_value327);
            if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[20] = right_value327;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 21, right_value328);
            if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[21] = right_value328;
            __freed_obj__ = 0;
            come_value2_293=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 724))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 22, right_value329);
            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[22] = right_value329;
            __freed_obj__ = 0;
            fun2_294=((struct sFun*)(right_value330=map$2charphsFunph_at(info->funcs,method_block_name_292,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 23, right_value330);
            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[23] = right_value330;
            __freed_obj__ = 0;
            if(_if_conditional391=fun2_294==((void*)0),            __freed_obj__ = 0, 
            _if_conditional391) {
                err_msg(info,"method block function not found(%s)",method_block_name_292);
                __freed_obj__ = 0;
                __result213__ = (_Bool)1;
                if(current_stack_frame_node_265 && !__freed_obj__) { current_stack_frame_node_265 = come_decrement_ref_count(current_stack_frame_node_265, ((struct sNode*)current_stack_frame_node_265)->finalize, ((struct sNode*)current_stack_frame_node_265)->_protocol_obj, 0, 0, 0); } 
                if(come_value_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block2_267 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_267, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(method_block_type_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_268, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(class_name_269 && !__freed_obj__) { class_name_269 = come_decrement_ref_count(class_name_269, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_275 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_275, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(all_alhabet_sname_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_278, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(source3_287 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_287, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_291 && !__freed_obj__) { node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0); } 
                if(method_block_name_292 && !__freed_obj__) { method_block_name_292 = come_decrement_ref_count(method_block_name_292, (void*)0, (void*)0, 0, 0, 0); }
                if(come_value2_293 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_293, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
                if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result213__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            method_block_type2_295=fun2_294->mLambdaType;
            __freed_obj__ = 0;
            __dec_obj97=come_value2_293->c_value;
            come_value2_293->c_value=(char*)come_increment_ref_count(((char*)(right_value331=xsprintf("(void*)%s",method_block_name_292))));
            if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 24, right_value331);
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[24] = right_value331;
            __freed_obj__ = 0;
            __dec_obj98=come_value2_293->type;
            come_value2_293->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_clone(method_block_type2_295))));
            if(__dec_obj98) { come_call_finalizer(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 25, right_value332);
            if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[25] = right_value332;
            __freed_obj__ = 0;
            come_value2_293->var=((void*)0);
            __freed_obj__ = 0;
            list$1CVALUEph_push_back(come_params_203,(struct CVALUE*)come_increment_ref_count(come_value2_293));
            __freed_obj__ = 0;
            __dec_obj99=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_287);
            if(__dec_obj99) { come_call_finalizer(buffer_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            info->p=p_288;
            __freed_obj__ = 0;
            info->head=head_289;
            __freed_obj__ = 0;
            info->sline=sline_290;
            __freed_obj__ = 0;
            info->current_stack_frame_struct=current_stack_frame_struct_274;
            __freed_obj__ = 0;
            if(current_stack_frame_node_265 && !__freed_obj__) { current_stack_frame_node_265 = come_decrement_ref_count(current_stack_frame_node_265, ((struct sNode*)current_stack_frame_node_265)->finalize, ((struct sNode*)current_stack_frame_node_265)->_protocol_obj, 0, 0, 0); } 
            if(come_value_266 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_266, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block2_267 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block2_267, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_block_type_268 && !__freed_obj__) { come_call_finalizer(sType_finalize,method_block_type_268, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(class_name_269 && !__freed_obj__) { class_name_269 = come_decrement_ref_count(class_name_269, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_275 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_275, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(all_alhabet_sname_278 && !__freed_obj__) { come_call_finalizer(buffer_finalize,all_alhabet_sname_278, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(source3_287 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source3_287, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(node_291 && !__freed_obj__) { node_291 = come_decrement_ref_count(node_291, ((struct sNode*)node_291)->finalize, ((struct sNode*)node_291)->_protocol_obj, 0, 0, 0); } 
            if(method_block_name_292 && !__freed_obj__) { method_block_name_292 = come_decrement_ref_count(method_block_name_292, (void*)0, (void*)0, 0, 0, 0); }
            if(come_value2_293 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_293, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        buf_296=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value334=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value333=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 749))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value333);
        if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value333;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value334);
        if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value334;
        __freed_obj__ = 0;
        buffer_append_str(buf_296,generics_fun_name_180);
        __freed_obj__ = 0;
        buffer_append_str(buf_296,"(");
        __freed_obj__ = 0;
        j_297=0;
        __freed_obj__ = 0;
        for(
        o2_saved_298=(struct list$1CVALUEph*)come_increment_ref_count((come_params_203)),it_299=list$1CVALUEph_begin((o2_saved_298)) ,        __freed_obj__ = 0, 
        0;        _for_condtionalA22=        !list$1CVALUEph_end((o2_saved_298)) ,        __freed_obj__ = 0, 
        _for_condtionalA22;        it_299=list$1CVALUEph_next((o2_saved_298)) ,        __freed_obj__ = 0, 
        0        ){
            buffer_append_str(buf_296,it_299->c_value);
            __freed_obj__ = 0;
            if(_if_conditional392=j_297!=list$1CVALUEph_length(come_params_203)-1,            __freed_obj__ = 0, 
            _if_conditional392) {
                buffer_append_str(buf_296,",");
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            j_297++;
            __freed_obj__ = 0;
        }
        if(o2_saved_298 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_298, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        buffer_append_str(buf_296,")");
        __freed_obj__ = 0;
        come_value2_300=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 767))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value335);
        if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[13] = right_value335;
        __freed_obj__ = 0;
        __dec_obj100=come_value2_300->c_value;
        come_value2_300->c_value=(char*)come_increment_ref_count(((char*)(right_value336=buffer_to_string(buf_296))));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value336);
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[14] = right_value336;
        __freed_obj__ = 0;
        __dec_obj101=come_value2_300->type;
        come_value2_300->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(result_type2_191))));
        if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value337);
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[15] = right_value337;
        __freed_obj__ = 0;
        come_value2_300->type->mStatic=(_Bool)0;
        __freed_obj__ = 0;
        come_value2_300->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional393=result_type2_191->mHeap,        __freed_obj__ = 0, 
        _if_conditional393) {
            __dec_obj102=come_value2_300->c_value;
            come_value2_300->c_value=(char*)come_increment_ref_count(((char*)(right_value338=append_object_to_right_values(come_value2_300->c_value,(struct sType*)come_increment_ref_count(result_type2_191),info))));
            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value338;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional394=fun_181->mResultType->mException||gComeDebug,        __freed_obj__ = 0, 
        _if_conditional394) {
            __dec_obj103=come_value2_300->c_value;
            come_value2_300->c_value=(char*)come_increment_ref_count(((char*)(right_value339=append_exception_value(come_value2_300->c_value,come_value2_300->type,info))));
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
            if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value339;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value2_300->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_300));
        __freed_obj__ = 0;
        if(_if_conditional395=method_block_137,        __freed_obj__ = 0, 
        _if_conditional395) {
            var_name_301=(char*)come_increment_ref_count(((char*)(right_value340=xsprintf("__current_stack%d__",info->num_current_stack))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value340;
            __freed_obj__ = 0;
            result_type_302=(struct sType*)come_increment_ref_count(((struct sType*)(right_value341=sType_clone(info->come_fun->mResultType))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value341);
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value341;
            __freed_obj__ = 0;
            result_type2_303=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=solve_generics(result_type_302,info->generics_type,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value342);
            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value342;
            __freed_obj__ = 0;
            result_type3_304=result_type2_303->mNoSolvedGenericsType->v1;
            __freed_obj__ = 0;
            if(_if_conditional396=result_type2_303->mNoSolvedGenericsType->v1,            __freed_obj__ = 0, 
            _if_conditional396) {
                result_type3_304=result_type2_303->mNoSolvedGenericsType->v1;
                __freed_obj__ = 0;
            }
            else {
                result_type3_304=result_type2_303;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional397=info->in_loop,            __freed_obj__ = 0, 
            _if_conditional397) {
                if(_if_conditional398=string_operator_equals(result_type3_304->mClass->mName,"void")&&result_type3_304->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional398) {
                    add_come_last_code3(info,((char*)(right_value346=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 4)\n                        {\n                            return;\n                        }\n",((char*)(right_value343=string_to_string(var_name_301))),((char*)(right_value344=string_to_string(var_name_301))),((char*)(right_value345=string_to_string(var_name_301)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                    if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value343;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value344);
                    if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value344;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value345);
                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value345;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value346);
                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value346;
                    __freed_obj__ = 0;
                }
                else {
                    add_come_last_code3(info,((char*)(right_value353=xsprintf("                        if(\%s.__method_block_result_kind__ == 1)\n                        {\n                            break;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 2)\n                        {\n                            continue;\n                        }\n                        else if(\%s.__method_block_result_kind__ == 3)\n                        {\n                            return (\%s)\%s.__method_block_return_value__;\n                        }\n",((char*)(right_value347=string_to_string(var_name_301))),((char*)(right_value348=string_to_string(var_name_301))),((char*)(right_value349=string_to_string(var_name_301))),((char*)(right_value351=string_to_string(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value350=make_type_name_string(result_type2_303,(_Bool)0,(_Bool)0,(_Bool)0,info))))))),((char*)(right_value352=string_to_string(var_name_301)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value347;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value348);
                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value348;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value349);
                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value349;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value350);
                    if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value350;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value351);
                    if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value351;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value352);
                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[5] = right_value352;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value353);
                    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[6] = right_value353;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional399=string_operator_equals(result_type3_304->mClass->mName,"void")&&result_type3_304->mPointerNum==0,                __freed_obj__ = 0, 
                _if_conditional399) {
                    add_come_last_code3(info,((char*)(right_value355=xsprintf("                    if(\%s.__method_block_result_kind__ == 4)\n                    {\n                        return;\n                    }\n",((char*)(right_value354=string_to_string(var_name_301)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value354;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value355);
                    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value355;
                    __freed_obj__ = 0;
                }
                else {
                    add_come_last_code3(info,((char*)(right_value360=xsprintf("                    if(\%s.__method_block_result_kind__ == 3)\n                    {\n                        return (\%s)\%s.__method_block_return_value__;\n                    }\n",((char*)(right_value356=string_to_string(var_name_301))),((char*)(right_value358=string_to_string(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value357=make_type_name_string(result_type2_303,(_Bool)0,(_Bool)0,(_Bool)0,info))))))),((char*)(right_value359=string_to_string(var_name_301)))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value356;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value357);
                    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value357;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value358);
                    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value358;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value359);
                    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[3] = right_value359;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value360);
                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value360;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(var_name_301 && !__freed_obj__) { var_name_301 = come_decrement_ref_count(var_name_301, (void*)0, (void*)0, 0, 0, 0); }
            if(result_type_302 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_302, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(result_type2_303 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_303, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(generics_fun_name_180 && !__freed_obj__) { generics_fun_name_180 = come_decrement_ref_count(generics_fun_name_180, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(result_type2_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type2_191, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(param_types_192 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,param_types_192, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_203 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_203, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(label_params_207 && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,label_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_296 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_296, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_300 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_300, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result214__ = (_Bool)1;
    if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result214__;
    __freed_obj__ = 0;
    if(obj_value_139 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_139, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_140 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_140, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
struct tuple2$2charphsTypeph* result_145;
struct tuple2$2charphsTypeph* __result107__;
_Bool _if_conditional225;
struct tuple2$2charphsTypeph* __result108__;
struct tuple2$2charphsTypeph* result_146;
struct tuple2$2charphsTypeph* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_145, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_146, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional224=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional224) {
            __freed_obj__ = 0;
            memset(&result_145,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result107__ = __result_obj__ = result_145;
            __freed_obj__ = 0;
            return __result107__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->it=self->head;
        __freed_obj__ = 0;
        if(_if_conditional225=self->it,        __freed_obj__ = 0, 
        _if_conditional225) {
            __result108__ = __result_obj__ = self->it->item;
            __freed_obj__ = 0;
            return __result108__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_146,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result109__ = __result_obj__ = result_146;
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result110__ = self==((void*)0)||self->it==((void*)0);
        __freed_obj__ = 0;
        return __result110__;
        __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional226;
struct tuple2$2charphsTypeph* result_148;
struct tuple2$2charphsTypeph* __result111__;
_Bool _if_conditional227;
struct tuple2$2charphsTypeph* __result112__;
struct tuple2$2charphsTypeph* result_149;
struct tuple2$2charphsTypeph* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_148, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&result_149, 0, sizeof(struct tuple2$2charphsTypeph*));
        if(_if_conditional226=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional226) {
            __freed_obj__ = 0;
            memset(&result_148,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result111__ = __result_obj__ = result_148;
            __freed_obj__ = 0;
            return __result111__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->it=self->it->next;
        __freed_obj__ = 0;
        if(_if_conditional227=self->it,        __freed_obj__ = 0, 
        _if_conditional227) {
            __result112__ = __result_obj__ = self->it->item;
            __freed_obj__ = 0;
            return __result112__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_149,0,sizeof(struct tuple2$2charphsTypeph*));
        __freed_obj__ = 0;
        __result113__ = __result_obj__ = result_149;
        __freed_obj__ = 0;
        return __result113__;
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->head=((void*)0);
            __freed_obj__ = 0;
            self->tail=((void*)0);
            __freed_obj__ = 0;
            self->len=0;
            __freed_obj__ = 0;
            __result114__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result114__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_153;
_Bool _while_condtional24;
struct list_item$1CVALUEph* prev_it_154;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_153, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_154, 0, sizeof(struct list_item$1CVALUEph*));
                it_153=self->head;
                __freed_obj__ = 0;
                while(_while_condtional24=it_153!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional24) {
                    prev_it_154=it_153;
                    __freed_obj__ = 0;
                    it_153=it_153->next;
                    __freed_obj__ = 0;
                    if(prev_it_154 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_154, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional230;
struct tuple2$2charphsNodeph* result_158;
struct tuple2$2charphsNodeph* __result115__;
_Bool _if_conditional231;
struct tuple2$2charphsNodeph* __result116__;
struct tuple2$2charphsNodeph* result_159;
struct tuple2$2charphsNodeph* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_158, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_159, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional230=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional230) {
                __freed_obj__ = 0;
                memset(&result_158,0,sizeof(struct tuple2$2charphsNodeph*));
                __freed_obj__ = 0;
                __result115__ = __result_obj__ = result_158;
                __freed_obj__ = 0;
                return __result115__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->head;
            __freed_obj__ = 0;
            if(_if_conditional231=self->it,            __freed_obj__ = 0, 
            _if_conditional231) {
                __result116__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result116__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_159,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result117__ = __result_obj__ = result_159;
            __freed_obj__ = 0;
            return __result117__;
            __freed_obj__ = 0;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result118__ = self==((void*)0)||self->it==((void*)0);
            __freed_obj__ = 0;
            return __result118__;
            __freed_obj__ = 0;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional232;
struct tuple2$2charphsNodeph* result_161;
struct tuple2$2charphsNodeph* __result119__;
_Bool _if_conditional233;
struct tuple2$2charphsNodeph* __result120__;
struct tuple2$2charphsNodeph* result_162;
struct tuple2$2charphsNodeph* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_161, 0, sizeof(struct tuple2$2charphsNodeph*));
memset(&result_162, 0, sizeof(struct tuple2$2charphsNodeph*));
            if(_if_conditional232=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional232) {
                __freed_obj__ = 0;
                memset(&result_161,0,sizeof(struct tuple2$2charphsNodeph*));
                __freed_obj__ = 0;
                __result119__ = __result_obj__ = result_161;
                __freed_obj__ = 0;
                return __result119__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->it->next;
            __freed_obj__ = 0;
            if(_if_conditional233=self->it,            __freed_obj__ = 0, 
            _if_conditional233) {
                __result120__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result120__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_162,0,sizeof(struct tuple2$2charphsNodeph*));
            __freed_obj__ = 0;
            __result121__ = __result_obj__ = result_162;
            __freed_obj__ = 0;
            return __result121__;
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
struct list_item$1sTypeph* it_166;
int i_167;
_Bool _while_condtional25;
_Bool _if_conditional237;
void* right_value149;
void* right_value150;
struct optional$2sTypephbool* __result124__;
struct sType* default_value_168;
void* right_value151;
void* right_value152;
struct optional$2sTypephbool* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_166, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_167, 0, sizeof(int));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
memset(&default_value_168, 0, sizeof(struct sType*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
                    if(_if_conditional236=position<0,                    __freed_obj__ = 0, 
                    _if_conditional236) {
                        position+=self->len;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_166=self->head;
                    __freed_obj__ = 0;
                    i_167=0;
                    __freed_obj__ = 0;
                    while(_while_condtional25=it_166!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional25) {
                        if(_if_conditional237=position==i_167,                        __freed_obj__ = 0, 
                        _if_conditional237) {
                            __result124__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value150=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value149=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 747)))),(struct sType*)come_increment_ref_count(it_166->item),(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
                            if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value149;
                            __freed_obj__ = 0;
                            return __result124__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_166=it_166->next;
                        __freed_obj__ = 0;
                        i_167++;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __freed_obj__ = 0;
                    memset(&default_value_168,0,sizeof(struct sType*));
                    __freed_obj__ = 0;
                    __result125__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2sTypephbool*)(right_value152=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value151=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 755))),(struct sType*)come_increment_ref_count(default_value_168),(_Bool)0))));
                    if(default_value_168 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
                    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value151;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
                    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value152;
                    __freed_obj__ = 0;
                    return __result125__;
                    __freed_obj__ = 0;
                    if(default_value_168 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* __dec_obj53;
struct optional$2sTypephbool* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                __dec_obj53=self->v1;
                                self->v1=(struct sType*)come_increment_ref_count(v1);
                                if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                self->v2=v2;
                                __freed_obj__ = 0;
                                __result123__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result123__;
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
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional238=self!=((void*)0)&&self->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional238) {
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
_Bool _if_conditional239;
struct sType* default_value_169;
struct sType* __result126__;
struct sType* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_169, 0, sizeof(struct sType*));
                    if(_if_conditional239=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional239) {
                        __freed_obj__ = 0;
                        memset(&default_value_169,0,sizeof(struct sType*));
                        __freed_obj__ = 0;
                        __result126__ = __result_obj__ = default_value_169;
                        __freed_obj__ = 0;
                        return __result126__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result127__ = __result_obj__ = self->v1;
                        __freed_obj__ = 0;
                        return __result127__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional246;
struct CVALUE* result_173;
struct CVALUE* __result128__;
_Bool _if_conditional247;
struct CVALUE* __result129__;
struct CVALUE* result_174;
struct CVALUE* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_173, 0, sizeof(struct CVALUE*));
memset(&result_174, 0, sizeof(struct CVALUE*));
            if(_if_conditional246=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional246) {
                __freed_obj__ = 0;
                memset(&result_173,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result128__ = __result_obj__ = result_173;
                __freed_obj__ = 0;
                return __result128__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->head;
            __freed_obj__ = 0;
            if(_if_conditional247=self->it,            __freed_obj__ = 0, 
            _if_conditional247) {
                __result129__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result129__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_174,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result130__ = __result_obj__ = result_174;
            __freed_obj__ = 0;
            return __result130__;
            __freed_obj__ = 0;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result131__ = self==((void*)0)||self->it==((void*)0);
            __freed_obj__ = 0;
            return __result131__;
            __freed_obj__ = 0;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional248;
struct CVALUE* result_176;
struct CVALUE* __result132__;
_Bool _if_conditional249;
struct CVALUE* __result133__;
struct CVALUE* result_177;
struct CVALUE* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_176, 0, sizeof(struct CVALUE*));
memset(&result_177, 0, sizeof(struct CVALUE*));
            if(_if_conditional248=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional248) {
                __freed_obj__ = 0;
                memset(&result_176,0,sizeof(struct CVALUE*));
                __freed_obj__ = 0;
                __result132__ = __result_obj__ = result_176;
                __freed_obj__ = 0;
                return __result132__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->it->next;
            __freed_obj__ = 0;
            if(_if_conditional249=self->it,            __freed_obj__ = 0, 
            _if_conditional249) {
                __result133__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result133__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_177,0,sizeof(struct CVALUE*));
            __freed_obj__ = 0;
            __result134__ = __result_obj__ = result_177;
            __freed_obj__ = 0;
            return __result134__;
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
                __result135__ = self->len;
                __freed_obj__ = 0;
                return __result135__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_184;
unsigned int hash_185;
unsigned int it_186;
_Bool _while_condtional26;
_Bool _if_conditional253;
void* right_value173;
_Bool _if_conditional254;
void* right_value174;
void* right_value175;
struct optional$2sFunpbool* __result137__;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value176;
void* right_value177;
struct optional$2sFunpbool* __result138__;
void* right_value178;
void* right_value179;
struct optional$2sFunpbool* __result139__;
void* right_value180;
void* right_value181;
struct optional$2sFunpbool* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_184, 0, sizeof(struct sFun*));
memset(&hash_185, 0, sizeof(unsigned int));
memset(&it_186, 0, sizeof(unsigned int));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_184,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_185=string_get_hash_key(((char*)key))%self->size;
                __freed_obj__ = 0;
                it_186=hash_185;
                __freed_obj__ = 0;
                while(_while_condtional26=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional26) {
                    if(_if_conditional253=self->item_existance[it_186],                    __freed_obj__ = 0, 
                    _if_conditional253) {
                        if(_if_conditional254=optional$2boolbool_value(((struct optional$2boolbool*)(right_value173=string_equals(self->keys[it_186],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173),
                        (right_value173 && right_value173 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value173, 
                        __freed_obj__ = 0, 
                        _if_conditional254) {
                            __result137__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value175=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value174=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1600)))),self->items[it_186],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
                            if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value174;
                            __freed_obj__ = 0;
                            return __result137__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_186++;
                        __freed_obj__ = 0;
                        if(_if_conditional255=it_186>=self->size,                        __freed_obj__ = 0, 
                        _if_conditional255) {
                            it_186=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional256=it_186==hash_185,                            __freed_obj__ = 0, 
                            _if_conditional256) {
                                __result138__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value177=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value176=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_184,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value176;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value177);
                                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value177;
                                __freed_obj__ = 0;
                                return __result138__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result139__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sFunpbool*)(right_value179=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value178=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1613))),default_value_184,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
                        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value178;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value179);
                        if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value179;
                        __freed_obj__ = 0;
                        return __result139__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result140__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sFunpbool*)(right_value181=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value180=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1617))),default_value_184,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
                if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value180;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value181;
                __freed_obj__ = 0;
                return __result140__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                self->v1=v1;
                                __freed_obj__ = 0;
                                self->v2=v2;
                                __freed_obj__ = 0;
                                __result136__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result136__;
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
_Bool _if_conditional257;
struct sFun* default_value_187;
struct sFun* __result141__;
struct sFun* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_187, 0, sizeof(struct sFun*));
                if(_if_conditional257=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional257) {
                    __freed_obj__ = 0;
                    memset(&default_value_187,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result141__ = __result_obj__ = default_value_187;
                    __freed_obj__ = 0;
                    return __result141__;
                    __freed_obj__ = 0;
                }
                else {
                    __result142__ = __result_obj__ = self->v1;
                    __freed_obj__ = 0;
                    return __result142__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_188;
unsigned int it_189;
_Bool _while_condtional27;
_Bool _if_conditional260;
void* right_value184;
_Bool _if_conditional261;
struct sFun* __result143__;
_Bool _if_conditional262;
_Bool _if_conditional263;
struct sFun* __result144__;
struct sFun* __result145__;
struct sFun* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_188, 0, sizeof(unsigned int));
memset(&it_189, 0, sizeof(unsigned int));
memset(&right_value184, 0, sizeof(void*));
                hash_188=string_get_hash_key(((char*)key))%self->size;
                __freed_obj__ = 0;
                it_189=hash_188;
                __freed_obj__ = 0;
                while(_while_condtional27=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional27) {
                    if(_if_conditional260=self->item_existance[it_189],                    __freed_obj__ = 0, 
                    _if_conditional260) {
                        if(_if_conditional261=optional$2boolbool_value(((struct optional$2boolbool*)(right_value184=string_equals(self->keys[it_189],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184),
                        (right_value184 && right_value184 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value184, 
                        __freed_obj__ = 0, 
                        _if_conditional261) {
                            __result143__ = __result_obj__ = self->items[it_189];
                            __freed_obj__ = 0;
                            return __result143__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_189++;
                        __freed_obj__ = 0;
                        if(_if_conditional262=it_189>=self->size,                        __freed_obj__ = 0, 
                        _if_conditional262) {
                            it_189=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional263=it_189==hash_188,                            __freed_obj__ = 0, 
                            _if_conditional263) {
                                __result144__ = __result_obj__ = default_value;
                                __freed_obj__ = 0;
                                return __result144__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result145__ = __result_obj__ = default_value;
                        __freed_obj__ = 0;
                        return __result145__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result146__ = __result_obj__ = default_value;
                __freed_obj__ = 0;
                return __result146__;
                __freed_obj__ = 0;
}

static void sFun_finalize(struct sFun* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional273;
_Bool _if_conditional274;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
_Bool _if_conditional278;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional264=self!=((void*)0)&&self->mName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional264) {
                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional265=self!=((void*)0)&&self->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional265) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional266=self!=((void*)0)&&self->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional266) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional267=self!=((void*)0)&&self->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional267) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional268=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional268) {
                    if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional269=self!=((void*)0)&&self->mLambdaType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional269) {
                    if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional270=self!=((void*)0)&&self->mBlock!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional270) {
                    if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional273=self!=((void*)0)&&self->mSource!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional273) {
                    if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional274=self!=((void*)0)&&self->mSourceHead!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional274) {
                    if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional275=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional275) {
                    if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional276=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional276) {
                    if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional277=self!=((void*)0)&&self->mComeHeader!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional277) {
                    if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional278=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional278) {
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
_Bool _if_conditional271;
_Bool _if_conditional272;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional271=self!=((void*)0)&&self->mNodes!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional271) {
                            if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional272=self!=((void*)0)&&self->mVarTable!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional272) {
                            if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional281;
struct sType* result_194;
struct sType* __result148__;
_Bool _if_conditional282;
struct sType* __result149__;
struct sType* result_195;
struct sType* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_194, 0, sizeof(struct sType*));
memset(&result_195, 0, sizeof(struct sType*));
            if(_if_conditional281=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional281) {
                __freed_obj__ = 0;
                memset(&result_194,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result148__ = __result_obj__ = result_194;
                __freed_obj__ = 0;
                return __result148__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->head;
            __freed_obj__ = 0;
            if(_if_conditional282=self->it,            __freed_obj__ = 0, 
            _if_conditional282) {
                __result149__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result149__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_195,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result150__ = __result_obj__ = result_195;
            __freed_obj__ = 0;
            return __result150__;
            __freed_obj__ = 0;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
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

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
struct sType* result_197;
struct sType* __result152__;
_Bool _if_conditional284;
struct sType* __result153__;
struct sType* result_198;
struct sType* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_197, 0, sizeof(struct sType*));
memset(&result_198, 0, sizeof(struct sType*));
            if(_if_conditional283=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional283) {
                __freed_obj__ = 0;
                memset(&result_197,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result152__ = __result_obj__ = result_197;
                __freed_obj__ = 0;
                return __result152__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->it=self->it->next;
            __freed_obj__ = 0;
            if(_if_conditional284=self->it,            __freed_obj__ = 0, 
            _if_conditional284) {
                __result153__ = __result_obj__ = self->it->item;
                __freed_obj__ = 0;
                return __result153__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&result_198,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result154__ = __result_obj__ = result_198;
            __freed_obj__ = 0;
            return __result154__;
            __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional286;
void* right_value193;
struct list_item$1sTypeph* litem_199;
struct sType* __dec_obj65;
_Bool _if_conditional287;
void* right_value194;
struct list_item$1sTypeph* litem_200;
struct sType* __dec_obj66;
void* right_value195;
struct list_item$1sTypeph* litem_201;
struct sType* __dec_obj67;
struct list$1sTypeph* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value193, 0, sizeof(void*));
memset(&litem_199, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value194, 0, sizeof(void*));
memset(&litem_200, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value195, 0, sizeof(void*));
memset(&litem_201, 0, sizeof(struct list_item$1sTypeph*));
                    if(_if_conditional286=self->len==0,                    __freed_obj__ = 0, 
                    _if_conditional286) {
                        litem_199=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value193=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 277))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value193;
                        __freed_obj__ = 0;
                        litem_199->prev=((void*)0);
                        __freed_obj__ = 0;
                        litem_199->next=((void*)0);
                        __freed_obj__ = 0;
                        __dec_obj65=litem_199->item;
                        litem_199->item=(struct sType*)come_increment_ref_count(item);
                        if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        self->tail=litem_199;
                        __freed_obj__ = 0;
                        self->head=litem_199;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional287=self->len==1,                        __freed_obj__ = 0, 
                        _if_conditional287) {
                            litem_200=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value194=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 287))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
                            if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value194;
                            __freed_obj__ = 0;
                            litem_200->prev=self->head;
                            __freed_obj__ = 0;
                            litem_200->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj66=litem_200->item;
                            litem_200->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            self->tail=litem_200;
                            __freed_obj__ = 0;
                            self->head->next=litem_200;
                            __freed_obj__ = 0;
                        }
                        else {
                            litem_201=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value195=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 297))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
                            if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value195;
                            __freed_obj__ = 0;
                            litem_201->prev=self->tail;
                            __freed_obj__ = 0;
                            litem_201->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj67=litem_201->item;
                            litem_201->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj67) { come_call_finalizer(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            self->tail->next=litem_201;
                            __freed_obj__ = 0;
                            self->tail=litem_201;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    self->len++;
                    __freed_obj__ = 0;
                    __result155__ = __result_obj__ = self;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result155__;
                    __freed_obj__ = 0;
                    if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_initialize(struct map$2charphCVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value201;
void* right_value202;
void* right_value203;
int i_204;
_Bool _for_condtionalA12;
void* right_value204;
void* right_value205;
struct list$1charp* __dec_obj68;
struct map$2charphCVALUEph* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&i_204, 0, sizeof(int));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
            self->keys=(char**)come_increment_ref_count(((char**)(right_value201=(char**)come_calloc(1, sizeof(char*)*(1*(1024)), "./comelang2.h", 1127))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
            if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value201;
            __freed_obj__ = 0;
            self->items=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value202=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(1024)), "./comelang2.h", 1128))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
            if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value202;
            __freed_obj__ = 0;
            self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(right_value203=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(1024)), "./comelang2.h", 1129))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
            if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value203;
            __freed_obj__ = 0;
            for(
            i_204=0 ,            __freed_obj__ = 0, 
            0;            _for_condtionalA12=            i_204<1024 ,            __freed_obj__ = 0, 
            _for_condtionalA12;            i_204++ ,            __freed_obj__ = 0, 
            0            ){
                self->item_existance[i_204]=(_Bool)0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->size=1024;
            __freed_obj__ = 0;
            self->len=0;
            __freed_obj__ = 0;
            __dec_obj68=self->key_list;
            self->key_list=(struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value205=list$1charp_initialize((struct list$1charp*)come_increment_ref_count(((struct list$1charp*)(right_value204=(struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang2.h", 1139))))))));
            if(__dec_obj68) { come_call_finalizer(list$1charp_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value204);
            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value204;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value205);
            if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value205;
            __freed_obj__ = 0;
            self->it=0;
            __freed_obj__ = 0;
            __result157__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result157__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(map$2charphCVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charp* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                self->head=((void*)0);
                __freed_obj__ = 0;
                self->tail=((void*)0);
                __freed_obj__ = 0;
                self->len=0;
                __freed_obj__ = 0;
                __result156__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result156__;
                __freed_obj__ = 0;
                if(self && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
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

static void map$2charphCVALUEphp_finalize(struct map$2charphCVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int i_205;
_Bool _for_condtionalA13;
_Bool _if_conditional288;
_Bool _if_conditional289;
int i_206;
_Bool _for_condtionalA14;
_Bool _if_conditional290;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&i_205, 0, sizeof(int));
memset(&i_206, 0, sizeof(int));
                for(
                i_205=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA13=                i_205<self->size ,                __freed_obj__ = 0, 
                _for_condtionalA13;                i_205++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional288=self->item_existance[i_205],                    __freed_obj__ = 0, 
                    _if_conditional288) {
                        if(_if_conditional289=1,                        __freed_obj__ = 0, 
                        _if_conditional289) {
                            if(self->items[i_205] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->items[i_205], (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)self->items);
                __freed_obj__ = 0;
                for(
                i_206=0 ,                __freed_obj__ = 0, 
                0;                _for_condtionalA14=                i_206<self->size ,                __freed_obj__ = 0, 
                _for_condtionalA14;                i_206++ ,                __freed_obj__ = 0, 
                0                ){
                    if(_if_conditional290=self->item_existance[i_206],                    __freed_obj__ = 0, 
                    _if_conditional290) {
                        if(_if_conditional291=1,                        __freed_obj__ = 0, 
                        _if_conditional291) {
                            if(self->keys[i_206] && !__freed_obj__) { self->keys[i_206] = come_decrement_ref_count(self->keys[i_206], (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                come_free_object((char*)self->keys);
                __freed_obj__ = 0;
                if(self->key_list && !__freed_obj__) { come_call_finalizer(list$1charpp_finalize,self->key_list, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
}

static struct optional$2charphbool* list$1charphp_operator_load_element(struct list$1charph* self, int position){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional300;
struct list_item$1charph* it_213;
int i_214;
_Bool _while_condtional28;
_Bool _if_conditional301;
void* right_value217;
void* right_value218;
struct optional$2charphbool* __result159__;
char* default_value_215;
void* right_value219;
void* right_value220;
struct optional$2charphbool* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_213, 0, sizeof(struct list_item$1charph*));
memset(&i_214, 0, sizeof(int));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&default_value_215, 0, sizeof(char*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value220, 0, sizeof(void*));
                            if(_if_conditional300=position<0,                            __freed_obj__ = 0, 
                            _if_conditional300) {
                                position+=self->len;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_213=self->head;
                            __freed_obj__ = 0;
                            i_214=0;
                            __freed_obj__ = 0;
                            while(_while_condtional28=it_213!=((void*)0),                            __freed_obj__ = 0, 
                            _while_condtional28) {
                                if(_if_conditional301=position==i_214,                                __freed_obj__ = 0, 
                                _if_conditional301) {
                                    __result159__ = __result_obj__ = ((struct optional$2charphbool*)(right_value218=optional$2charphbool_initialize((struct optional$2charphbool*)come_increment_ref_count(((struct optional$2charphbool*)(right_value217=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 747)))),(char*)come_increment_ref_count(it_213->item),(_Bool)1)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                                    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value217;
                                    __freed_obj__ = 0;
                                    return __result159__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_213=it_213->next;
                                __freed_obj__ = 0;
                                i_214++;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __freed_obj__ = 0;
                            memset(&default_value_215,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result160__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 755), ((struct optional$2charphbool*)(right_value220=optional$2charphbool_initialize(((struct optional$2charphbool*)(right_value219=(struct optional$2charphbool*)come_calloc(1, sizeof(struct optional$2charphbool)*(1), "./comelang2.h", 755))),(char*)come_increment_ref_count(default_value_215),(_Bool)0))));
                            if(default_value_215 && !__freed_obj__) { default_value_215 = come_decrement_ref_count(default_value_215, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
                            if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value219;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220);
                            if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value220;
                            __freed_obj__ = 0;
                            return __result160__;
                            __freed_obj__ = 0;
                            if(default_value_215 && !__freed_obj__) { default_value_215 = come_decrement_ref_count(default_value_215, (void*)0, (void*)0, 0, 0, 0); }
}

static struct optional$2charphbool* optional$2charphbool_initialize(struct optional$2charphbool* self, char* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
char* __dec_obj74;
struct optional$2charphbool* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        __dec_obj74=self->v1;
                                        self->v1=(char*)come_increment_ref_count(v1);
                                        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = 0;
                                        self->v2=v2;
                                        __freed_obj__ = 0;
                                        __result158__ = __result_obj__ = self;
                                        if(self && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result158__;
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
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional302=self!=((void*)0)&&self->v1!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional302) {
                                                if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, (void*)0, (void*)0, 0, 0, 0); }
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
_Bool _if_conditional303;
char* default_value_216;
char* __result161__;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_216, 0, sizeof(char*));
                            if(_if_conditional303=self==((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional303) {
                                __freed_obj__ = 0;
                                memset(&default_value_216,0,sizeof(char*));
                                __freed_obj__ = 0;
                                __result161__ = __result_obj__ = default_value_216;
                                __freed_obj__ = 0;
                                return __result161__;
                                __freed_obj__ = 0;
                            }
                            else {
                                __result162__ = __result_obj__ = self->v1;
                                __freed_obj__ = 0;
                                return __result162__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static char* list$1charph_begin(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional306;
char* result_220;
char* __result164__;
_Bool _if_conditional307;
char* __result165__;
char* result_221;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_220, 0, sizeof(char*));
memset(&result_221, 0, sizeof(char*));
                        if(_if_conditional306=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional306) {
                            __freed_obj__ = 0;
                            memset(&result_220,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result164__ = __result_obj__ = result_220;
                            __freed_obj__ = 0;
                            return __result164__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        self->it=self->head;
                        __freed_obj__ = 0;
                        if(_if_conditional307=self->it,                        __freed_obj__ = 0, 
                        _if_conditional307) {
                            __result165__ = __result_obj__ = self->it->item;
                            __freed_obj__ = 0;
                            return __result165__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_221,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result166__ = __result_obj__ = result_221;
                        __freed_obj__ = 0;
                        return __result166__;
                        __freed_obj__ = 0;
}

static _Bool list$1charph_end(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __result167__ = self==((void*)0)||self->it==((void*)0);
                        __freed_obj__ = 0;
                        return __result167__;
                        __freed_obj__ = 0;
}

static char* list$1charph_next(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional308;
char* result_223;
char* __result168__;
_Bool _if_conditional309;
char* __result169__;
char* result_224;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_223, 0, sizeof(char*));
memset(&result_224, 0, sizeof(char*));
                        if(_if_conditional308=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional308) {
                            __freed_obj__ = 0;
                            memset(&result_223,0,sizeof(char*));
                            __freed_obj__ = 0;
                            __result168__ = __result_obj__ = result_223;
                            __freed_obj__ = 0;
                            return __result168__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        self->it=self->it->next;
                        __freed_obj__ = 0;
                        if(_if_conditional309=self->it,                        __freed_obj__ = 0, 
                        _if_conditional309) {
                            __result169__ = __result_obj__ = self->it->item;
                            __freed_obj__ = 0;
                            return __result169__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __freed_obj__ = 0;
                        memset(&result_224,0,sizeof(char*));
                        __freed_obj__ = 0;
                        __result170__ = __result_obj__ = result_224;
                        __freed_obj__ = 0;
                        return __result170__;
                        __freed_obj__ = 0;
}

static struct map$2charphCVALUEph* map$2charphCVALUEph_insert(struct map$2charphCVALUEph* self, char* key, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional326;
unsigned int hash_242;
unsigned int it_243;
_Bool _while_condtional31;
_Bool _if_conditional338;
void* right_value251;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool same_key_exist_244;
char* it2_245;
_Bool _for_condtionalA18;
void* right_value252;
_Bool _if_conditional346;
_Bool _if_conditional347;
struct map$2charphCVALUEph* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_242, 0, sizeof(unsigned int));
memset(&it_243, 0, sizeof(unsigned int));
memset(&right_value251, 0, sizeof(void*));
memset(&same_key_exist_244, 0, sizeof(_Bool));
memset(&it2_245, 0, sizeof(char*));
memset(&right_value252, 0, sizeof(void*));
                        if(_if_conditional326=self->len*10>=self->size,                        __freed_obj__ = 0, 
                        _if_conditional326) {
                            map$2charphCVALUEph_rehash(self);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        hash_242=string_get_hash_key(key)%self->size;
                        __freed_obj__ = 0;
                        it_243=hash_242;
                        __freed_obj__ = 0;
                        while(_while_condtional31=(_Bool)1,                        __freed_obj__ = 0, 
                        _while_condtional31) {
                            if(_if_conditional338=self->item_existance[it_243],                            __freed_obj__ = 0, 
                            _if_conditional338) {
                                if(_if_conditional339=optional$2boolbool_value(((struct optional$2boolbool*)(right_value251=string_equals(self->keys[it_243],key)))),                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251),
                                (right_value251 && right_value251 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                __right_value_freed_obj[0] = right_value251, 
                                __freed_obj__ = 0, 
                                _if_conditional339) {
                                    if(_if_conditional340=1,                                    __freed_obj__ = 0, 
                                    _if_conditional340) {
                                        list$1charp_remove(self->key_list,self->keys[it_243]);
                                        __freed_obj__ = 0;
                                        if(self->keys[it_243] && !__freed_obj__) { self->keys[it_243] = come_decrement_ref_count(self->keys[it_243], (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        self->keys[it_243]=(char*)come_increment_ref_count(key);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        list$1charp_remove(self->key_list,self->keys[it_243]);
                                        __freed_obj__ = 0;
                                        self->keys[it_243]=key;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional341=1,                                    __freed_obj__ = 0, 
                                    _if_conditional341) {
                                        if(self->items[it_243] && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->items[it_243], (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                        self->items[it_243]=(struct CVALUE*)come_increment_ref_count(item);
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        self->items[it_243]=item;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    break;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                it_243++;
                                __freed_obj__ = 0;
                                if(_if_conditional342=it_243>=self->size,                                __freed_obj__ = 0, 
                                _if_conditional342) {
                                    it_243=0;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    if(_if_conditional343=it_243==hash_242,                                    __freed_obj__ = 0, 
                                    _if_conditional343) {
                                        printf("unexpected error in map.insert\n");
                                        __freed_obj__ = 0;
                                        stackframe();
                                        __freed_obj__ = 0;
                                        exit(2);
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            else {
                                self->item_existance[it_243]=(_Bool)1;
                                __freed_obj__ = 0;
                                if(_if_conditional344=1,                                __freed_obj__ = 0, 
                                _if_conditional344) {
                                    self->keys[it_243]=(char*)come_increment_ref_count(key);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    self->keys[it_243]=key;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional345=1,                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    self->items[it_243]=(struct CVALUE*)come_increment_ref_count(item);
                                    __freed_obj__ = 0;
                                }
                                else {
                                    self->items[it_243]=item;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                self->len++;
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        same_key_exist_244=(_Bool)0;
                        __freed_obj__ = 0;
                        for(
                        it2_245=list$1charp_begin(self->key_list) ,                        __freed_obj__ = 0, 
                        0;                        _for_condtionalA18=                        !list$1charp_end(self->key_list) ,                        __freed_obj__ = 0, 
                        _for_condtionalA18;                        it2_245=list$1charp_next(self->key_list) ,                        __freed_obj__ = 0, 
                        0                        ){
                            if(_if_conditional346=optional$2boolbool_value(((struct optional$2boolbool*)(right_value252=string_equals(it2_245,key)))),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252),
                            (right_value252 && right_value252 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value252, 
                            __freed_obj__ = 0, 
                            _if_conditional346) {
                                same_key_exist_244=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional347=!same_key_exist_244,                        __freed_obj__ = 0, 
                        _if_conditional347) {
                            list$1charp_push_back(self->key_list,key);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result182__ = __result_obj__ = self;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result182__;
                        __freed_obj__ = 0;
                        if(key && !__freed_obj__) { key = come_decrement_ref_count(key, (void*)0, (void*)0, 0, 1, 0); }
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void map$2charphCVALUEph_rehash(struct map$2charphCVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int size_225;
void* right_value245;
char** keys_226;
void* right_value246;
struct CVALUE** items_227;
void* right_value247;
_Bool* item_existance_228;
int len_229;
char* it_232;
_Bool _for_condtionalA17;
struct CVALUE* default_value_235;
void* right_value249;
struct CVALUE* it2_238;
unsigned int hash_239;
int n_240;
_Bool _while_condtional30;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
struct CVALUE* default_value_241;
void* right_value250;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&size_225, 0, sizeof(int));
memset(&right_value245, 0, sizeof(void*));
memset(&keys_226, 0, sizeof(char**));
memset(&right_value246, 0, sizeof(void*));
memset(&items_227, 0, sizeof(struct CVALUE**));
memset(&right_value247, 0, sizeof(void*));
memset(&item_existance_228, 0, sizeof(_Bool*));
memset(&len_229, 0, sizeof(int));
memset(&it_232, 0, sizeof(char*));
memset(&default_value_235, 0, sizeof(struct CVALUE*));
memset(&right_value249, 0, sizeof(void*));
memset(&it2_238, 0, sizeof(struct CVALUE*));
memset(&hash_239, 0, sizeof(unsigned int));
memset(&n_240, 0, sizeof(int));
memset(&default_value_241, 0, sizeof(struct CVALUE*));
memset(&right_value250, 0, sizeof(void*));
                                size_225=self->size*10;
                                __freed_obj__ = 0;
                                keys_226=(char**)come_increment_ref_count(((char**)(right_value245=(char**)come_calloc(1, sizeof(char*)*(1*(size_225)), "./comelang2.h", 1375))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value245;
                                __freed_obj__ = 0;
                                items_227=(struct CVALUE**)come_increment_ref_count(((struct CVALUE**)(right_value246=(struct CVALUE**)come_calloc(1, sizeof(struct CVALUE*)*(1*(size_225)), "./comelang2.h", 1376))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value246);
                                if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value246;
                                __freed_obj__ = 0;
                                item_existance_228=(_Bool*)come_increment_ref_count(((_Bool*)(right_value247=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_225)), "./comelang2.h", 1377))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value247);
                                if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value247;
                                __freed_obj__ = 0;
                                len_229=0;
                                __freed_obj__ = 0;
                                for(
                                it_232=map$2charphCVALUEph_begin(self) ,                                __freed_obj__ = 0, 
                                0;                                _for_condtionalA17=                                !map$2charphCVALUEph_end(self) ,                                __freed_obj__ = 0, 
                                _for_condtionalA17;                                it_232=map$2charphCVALUEph_next(self) ,                                __freed_obj__ = 0, 
                                0                                ){
                                    __freed_obj__ = 0;
                                    memset(&default_value_235,0,sizeof(struct CVALUE*));
                                    __freed_obj__ = 0;
                                    it2_238=((struct CVALUE*)(right_value249=map$2charphCVALUEph_at(self,it_232,default_value_235)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                                    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value249;
                                    __freed_obj__ = 0;
                                    hash_239=string_get_hash_key(it_232)%size_225;
                                    __freed_obj__ = 0;
                                    n_240=hash_239;
                                    __freed_obj__ = 0;
                                    while(_while_condtional30=(_Bool)1,                                    __freed_obj__ = 0, 
                                    _while_condtional30) {
                                        if(_if_conditional335=item_existance_228[n_240],                                        __freed_obj__ = 0, 
                                        _if_conditional335) {
                                            n_240++;
                                            __freed_obj__ = 0;
                                            if(_if_conditional336=n_240>=size_225,                                            __freed_obj__ = 0, 
                                            _if_conditional336) {
                                                n_240=0;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                if(_if_conditional337=n_240==hash_239,                                                __freed_obj__ = 0, 
                                                _if_conditional337) {
                                                    printf("unexpected error in map.rehash(1)\n");
                                                    __freed_obj__ = 0;
                                                    stackframe();
                                                    __freed_obj__ = 0;
                                                    exit(2);
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            item_existance_228[n_240]=(_Bool)1;
                                            __freed_obj__ = 0;
                                            keys_226[n_240]=it_232;
                                            __freed_obj__ = 0;
                                            __freed_obj__ = 0;
                                            items_227[n_240]=((struct CVALUE*)(right_value250=map$2charphCVALUEph_at(self,it_232,default_value_241)));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
                                            if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value250;
                                            __freed_obj__ = 0;
                                            len_229++;
                                            __freed_obj__ = 0;
                                            break;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                come_free_object((char*)self->items);
                                __freed_obj__ = 0;
                                if(self->item_existance && !__freed_obj__) { self->item_existance = come_decrement_ref_count(self->item_existance, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                come_free_object((char*)self->keys);
                                __freed_obj__ = 0;
                                self->keys=keys_226;
                                __freed_obj__ = 0;
                                self->items=items_227;
                                __freed_obj__ = 0;
                                self->item_existance=item_existance_228;
                                __freed_obj__ = 0;
                                self->size=size_225;
                                __freed_obj__ = 0;
                                self->len=len_229;
                                __freed_obj__ = 0;
}

static char* map$2charphCVALUEph_begin(struct map$2charphCVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional327;
char* result_230;
char* __result171__;
_Bool _if_conditional328;
char* __result172__;
char* result_231;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_230, 0, sizeof(char*));
memset(&result_231, 0, sizeof(char*));
                                    if(_if_conditional327=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional327) {
                                        __freed_obj__ = 0;
                                        memset(&result_230,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result171__ = __result_obj__ = result_230;
                                        __freed_obj__ = 0;
                                        return __result171__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    self->key_list->it=self->key_list->head;
                                    __freed_obj__ = 0;
                                    if(_if_conditional328=self->key_list->it,                                    __freed_obj__ = 0, 
                                    _if_conditional328) {
                                        __result172__ = __result_obj__ = self->key_list->it->item;
                                        __freed_obj__ = 0;
                                        return __result172__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_231,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result173__ = __result_obj__ = result_231;
                                    __freed_obj__ = 0;
                                    return __result173__;
                                    __freed_obj__ = 0;
}

static _Bool map$2charphCVALUEph_end(struct map$2charphCVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    __result174__ = self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
                                    __freed_obj__ = 0;
                                    return __result174__;
                                    __freed_obj__ = 0;
}

static char* map$2charphCVALUEph_next(struct map$2charphCVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional329;
char* result_233;
char* __result175__;
_Bool _if_conditional330;
char* __result176__;
char* result_234;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_233, 0, sizeof(char*));
memset(&result_234, 0, sizeof(char*));
                                    if(_if_conditional329=self==((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional329) {
                                        __freed_obj__ = 0;
                                        memset(&result_233,0,sizeof(char*));
                                        __freed_obj__ = 0;
                                        __result175__ = __result_obj__ = result_233;
                                        __freed_obj__ = 0;
                                        return __result175__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    self->key_list->it=self->key_list->it->next;
                                    __freed_obj__ = 0;
                                    if(_if_conditional330=self->key_list->it,                                    __freed_obj__ = 0, 
                                    _if_conditional330) {
                                        __result176__ = __result_obj__ = self->key_list->it->item;
                                        __freed_obj__ = 0;
                                        return __result176__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __freed_obj__ = 0;
                                    memset(&result_234,0,sizeof(char*));
                                    __freed_obj__ = 0;
                                    __result177__ = __result_obj__ = result_234;
                                    __freed_obj__ = 0;
                                    return __result177__;
                                    __freed_obj__ = 0;
}

static struct CVALUE* map$2charphCVALUEph_at(struct map$2charphCVALUEph* self, char* key, struct CVALUE* default_value){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_236;
unsigned int it_237;
_Bool _while_condtional29;
_Bool _if_conditional331;
void* right_value248;
_Bool _if_conditional332;
struct CVALUE* __result178__;
_Bool _if_conditional333;
_Bool _if_conditional334;
struct CVALUE* __result179__;
struct CVALUE* __result180__;
struct CVALUE* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_236, 0, sizeof(unsigned int));
memset(&it_237, 0, sizeof(unsigned int));
memset(&right_value248, 0, sizeof(void*));
                                        hash_236=string_get_hash_key(((char*)key))%self->size;
                                        __freed_obj__ = 0;
                                        it_237=hash_236;
                                        __freed_obj__ = 0;
                                        while(_while_condtional29=(_Bool)1,                                        __freed_obj__ = 0, 
                                        _while_condtional29) {
                                            if(_if_conditional331=self->item_existance[it_237],                                            __freed_obj__ = 0, 
                                            _if_conditional331) {
                                                if(_if_conditional332=optional$2boolbool_value(((struct optional$2boolbool*)(right_value248=string_equals(self->keys[it_237],key)))),                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248),
                                                (right_value248 && right_value248 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0):0,
                                                __right_value_freed_obj[0] = right_value248, 
                                                __freed_obj__ = 0, 
                                                _if_conditional332) {
                                                    __result178__ = __result_obj__ = self->items[it_237];
                                                    __freed_obj__ = 0;
                                                    return __result178__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                it_237++;
                                                __freed_obj__ = 0;
                                                if(_if_conditional333=it_237>=self->size,                                                __freed_obj__ = 0, 
                                                _if_conditional333) {
                                                    it_237=0;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    if(_if_conditional334=it_237==hash_236,                                                    __freed_obj__ = 0, 
                                                    _if_conditional334) {
                                                        __result179__ = __result_obj__ = default_value;
                                                        __freed_obj__ = 0;
                                                        return __result179__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                __result180__ = __result_obj__ = default_value;
                                                __freed_obj__ = 0;
                                                return __result180__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result181__ = __result_obj__ = default_value;
                                        __freed_obj__ = 0;
                                        return __result181__;
                                        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsNodephph_length(struct list$1tuple2$2charphsNodephph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result183__ = self->len;
            __freed_obj__ = 0;
            return __result183__;
            __freed_obj__ = 0;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result184__ = self->len;
            __freed_obj__ = 0;
            return __result184__;
            __freed_obj__ = 0;
}

static struct optional$2CVALUEpbool* map$2charphCVALUEphp_operator_load_element(struct map$2charphCVALUEph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct CVALUE* default_value_248;
unsigned int hash_249;
unsigned int it_250;
_Bool _while_condtional32;
_Bool _if_conditional349;
void* right_value257;
_Bool _if_conditional350;
void* right_value258;
void* right_value259;
struct optional$2CVALUEpbool* __result186__;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value260;
void* right_value261;
struct optional$2CVALUEpbool* __result187__;
void* right_value262;
void* right_value263;
struct optional$2CVALUEpbool* __result188__;
void* right_value264;
void* right_value265;
struct optional$2CVALUEpbool* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_248, 0, sizeof(struct CVALUE*));
memset(&hash_249, 0, sizeof(unsigned int));
memset(&it_250, 0, sizeof(unsigned int));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
                    __freed_obj__ = 0;
                    memset(&default_value_248,0,sizeof(struct CVALUE*));
                    __freed_obj__ = 0;
                    hash_249=string_get_hash_key(((char*)key))%self->size;
                    __freed_obj__ = 0;
                    it_250=hash_249;
                    __freed_obj__ = 0;
                    while(_while_condtional32=(_Bool)1,                    __freed_obj__ = 0, 
                    _while_condtional32) {
                        if(_if_conditional349=self->item_existance[it_250],                        __freed_obj__ = 0, 
                        _if_conditional349) {
                            if(_if_conditional350=optional$2boolbool_value(((struct optional$2boolbool*)(right_value257=string_equals(self->keys[it_250],key)))),                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257),
                            (right_value257 && right_value257 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0):0,
                            __right_value_freed_obj[0] = right_value257, 
                            __freed_obj__ = 0, 
                            _if_conditional350) {
                                __result186__ = __result_obj__ = ((struct optional$2CVALUEpbool*)(right_value259=optional$2CVALUEpbool_initialize((struct optional$2CVALUEpbool*)come_increment_ref_count(((struct optional$2CVALUEpbool*)(right_value258=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1600)))),self->items[it_250],(_Bool)1)));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
                                if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value258;
                                __freed_obj__ = 0;
                                return __result186__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_250++;
                            __freed_obj__ = 0;
                            if(_if_conditional351=it_250>=self->size,                            __freed_obj__ = 0, 
                            _if_conditional351) {
                                it_250=0;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional352=it_250==hash_249,                                __freed_obj__ = 0, 
                                _if_conditional352) {
                                    __result187__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2CVALUEpbool*)(right_value261=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value260=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1609))),default_value_248,(_Bool)0))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                                    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value260;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
                                    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value261;
                                    __freed_obj__ = 0;
                                    return __result187__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        else {
                            __result188__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2CVALUEpbool*)(right_value263=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value262=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1613))),default_value_248,(_Bool)0))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                            if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value262;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
                            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value263;
                            __freed_obj__ = 0;
                            return __result188__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result189__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2CVALUEpbool*)(right_value265=optional$2CVALUEpbool_initialize(((struct optional$2CVALUEpbool*)(right_value264=(struct optional$2CVALUEpbool*)come_calloc(1, sizeof(struct optional$2CVALUEpbool)*(1), "./comelang2.h", 1617))),default_value_248,(_Bool)0))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
                    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value264;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
                    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value265;
                    __freed_obj__ = 0;
                    return __result189__;
                    __freed_obj__ = 0;
}

static struct optional$2CVALUEpbool* optional$2CVALUEpbool_initialize(struct optional$2CVALUEpbool* self, struct CVALUE* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2CVALUEpbool* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    self->v1=v1;
                                    __freed_obj__ = 0;
                                    self->v2=v2;
                                    __freed_obj__ = 0;
                                    __result185__ = __result_obj__ = self;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result185__;
                                    __freed_obj__ = 0;
                                    if(self && !__freed_obj__) { come_call_finalizer(optional$2CVALUEpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2CVALUEpboolp_finalize(struct optional$2CVALUEpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct CVALUE* optional$2CVALUEpbool_value(struct optional$2CVALUEpbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional353;
struct CVALUE* default_value_251;
struct CVALUE* __result190__;
struct CVALUE* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_251, 0, sizeof(struct CVALUE*));
                    if(_if_conditional353=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional353) {
                        __freed_obj__ = 0;
                        memset(&default_value_251,0,sizeof(struct CVALUE*));
                        __freed_obj__ = 0;
                        __result190__ = __result_obj__ = default_value_251;
                        __freed_obj__ = 0;
                        return __result190__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result191__ = __result_obj__ = self->v1;
                        __freed_obj__ = 0;
                        return __result191__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static int map$2charphCVALUEph_length(struct map$2charphCVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __result194__ = self->len;
            __freed_obj__ = 0;
            return __result194__;
            __freed_obj__ = 0;
}

static int list$1charph_length(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                __result195__ = self->len;
                __freed_obj__ = 0;
                return __result195__;
                __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional366;
_Bool _if_conditional367;
struct list$1CVALUEph* __result196__;
struct list_item$1CVALUEph* it_261;
int i_262;
_Bool _while_condtional33;
_Bool _if_conditional368;
struct CVALUE* __dec_obj92;
struct list$1CVALUEph* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_261, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_262, 0, sizeof(int));
                        if(_if_conditional366=position<0,                        __freed_obj__ = 0, 
                        _if_conditional366) {
                            position+=self->len;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional367=position>=self->len,                        __freed_obj__ = 0, 
                        _if_conditional367) {
                            list$1CVALUEph_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
                            __freed_obj__ = 0;
                            __result196__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result196__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_261=self->head;
                        __freed_obj__ = 0;
                        i_262=0;
                        __freed_obj__ = 0;
                        while(_while_condtional33=it_261!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional33) {
                            if(_if_conditional368=position==i_262,                            __freed_obj__ = 0, 
                            _if_conditional368) {
                                __dec_obj92=it_261->item;
                                it_261->item=(struct CVALUE*)come_increment_ref_count(item);
                                if(__dec_obj92) { come_call_finalizer(CVALUE_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                break;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            it_261=it_261->next;
                            __freed_obj__ = 0;
                            i_262++;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result197__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result197__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
struct CVALUE* __result198__;
void* right_value283;
struct CVALUE* result_263;
_Bool _if_conditional370;
void* right_value284;
char* __dec_obj93;
_Bool _if_conditional371;
void* right_value285;
struct sType* __dec_obj94;
_Bool _if_conditional372;
struct CVALUE* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
memset(&result_263, 0, sizeof(struct CVALUE*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
                        if(_if_conditional369=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional369) {
                            __result198__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result198__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_263=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value283=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value283;
                        __freed_obj__ = 0;
                        if(_if_conditional370=self!=((void*)0)&&self->c_value!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional370) {
                            __dec_obj93=result_263->c_value;
                            result_263->c_value=(char*)come_increment_ref_count(((char*)(right_value284=string_clone(self->c_value))));
                            if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
                            if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value284;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional371=self!=((void*)0)&&self->type!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional371) {
                            __dec_obj94=result_263->type;
                            result_263->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(self->type))));
                            if(__dec_obj94) { come_call_finalizer(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
                            if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value285;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional372=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional372) {
                            result_263->var=self->var;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result199__ = __result_obj__ = result_263;
                        if(result_263 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_263, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result199__;
                        __freed_obj__ = 0;
                        if(result_263 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_263, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sClasspbool* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sClass* default_value_270;
unsigned int hash_271;
unsigned int it_272;
_Bool _while_condtional34;
_Bool _if_conditional379;
void* right_value299;
_Bool _if_conditional380;
void* right_value300;
void* right_value301;
struct optional$2sClasspbool* __result204__;
_Bool _if_conditional381;
_Bool _if_conditional382;
void* right_value302;
void* right_value303;
struct optional$2sClasspbool* __result205__;
void* right_value304;
void* right_value305;
struct optional$2sClasspbool* __result206__;
void* right_value306;
void* right_value307;
struct optional$2sClasspbool* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_270, 0, sizeof(struct sClass*));
memset(&hash_271, 0, sizeof(unsigned int));
memset(&it_272, 0, sizeof(unsigned int));
memset(&right_value299, 0, sizeof(void*));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_270,0,sizeof(struct sClass*));
                __freed_obj__ = 0;
                hash_271=string_get_hash_key(((char*)key))%self->size;
                __freed_obj__ = 0;
                it_272=hash_271;
                __freed_obj__ = 0;
                while(_while_condtional34=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional34) {
                    if(_if_conditional379=self->item_existance[it_272],                    __freed_obj__ = 0, 
                    _if_conditional379) {
                        if(_if_conditional380=optional$2boolbool_value(((struct optional$2boolbool*)(right_value299=string_equals(self->keys[it_272],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299),
                        (right_value299 && right_value299 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value299, 
                        __freed_obj__ = 0, 
                        _if_conditional380) {
                            __result204__ = __result_obj__ = ((struct optional$2sClasspbool*)(right_value301=optional$2sClasspbool_initialize((struct optional$2sClasspbool*)come_increment_ref_count(((struct optional$2sClasspbool*)(right_value300=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1600)))),self->items[it_272],(_Bool)1)));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value300;
                            __freed_obj__ = 0;
                            return __result204__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_272++;
                        __freed_obj__ = 0;
                        if(_if_conditional381=it_272>=self->size,                        __freed_obj__ = 0, 
                        _if_conditional381) {
                            it_272=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional382=it_272==hash_271,                            __freed_obj__ = 0, 
                            _if_conditional382) {
                                __result205__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sClasspbool*)(right_value303=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value302=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1609))),default_value_270,(_Bool)0))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
                                if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value302;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value303);
                                if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value303;
                                __freed_obj__ = 0;
                                return __result205__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result206__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1613), ((struct optional$2sClasspbool*)(right_value305=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value304=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1613))),default_value_270,(_Bool)0))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
                        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value304;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value305);
                        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value305;
                        __freed_obj__ = 0;
                        return __result206__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result207__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1617), ((struct optional$2sClasspbool*)(right_value307=optional$2sClasspbool_initialize(((struct optional$2sClasspbool*)(right_value306=(struct optional$2sClasspbool*)come_calloc(1, sizeof(struct optional$2sClasspbool)*(1), "./comelang2.h", 1617))),default_value_270,(_Bool)0))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value306;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
                if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value307;
                __freed_obj__ = 0;
                return __result207__;
                __freed_obj__ = 0;
}

static struct optional$2sClasspbool* optional$2sClasspbool_initialize(struct optional$2sClasspbool* self, struct sClass* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sClasspbool* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                self->v1=v1;
                                __freed_obj__ = 0;
                                self->v2=v2;
                                __freed_obj__ = 0;
                                __result203__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sClasspboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result203__;
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
_Bool _if_conditional383;
struct sClass* default_value_273;
struct sClass* __result208__;
struct sClass* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_273, 0, sizeof(struct sClass*));
                if(_if_conditional383=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional383) {
                    __freed_obj__ = 0;
                    memset(&default_value_273,0,sizeof(struct sClass*));
                    __freed_obj__ = 0;
                    __result208__ = __result_obj__ = default_value_273;
                    __freed_obj__ = 0;
                    return __result208__;
                    __freed_obj__ = 0;
                }
                else {
                    __result209__ = __result_obj__ = self->v1;
                    __freed_obj__ = 0;
                    return __result209__;
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
_Bool _if_conditional386;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional386=!self->v2,                __freed_obj__ = 0, 
                _if_conditional386) {
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
                __result211__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result211__;
                __freed_obj__ = 0;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value361;
void* right_value362;
struct list$1tuple2$2charphsNodephph* params_305;
void* right_value366;
void* right_value369;
void* right_value370;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value371;
_Bool _while_condtional36;
_Bool _if_conditional405;
char* p_310;
int sline_311;
_Bool err_flag_312;
void* right_value372;
char* label_313;
_Bool _if_conditional406;
void* right_value373;
char* __dec_obj109;
_Bool _if_conditional407;
char* __dec_obj110;
_Bool no_comma_314;
void* right_value374;
struct sNode* node_315;
void* right_value375;
struct sNode* __dec_obj111;
void* right_value376;
void* right_value377;
_Bool _if_conditional408;
_Bool _if_conditional409;
struct buffer* method_block_316;
int method_block_sline_317;
_Bool _if_conditional410;
char* head_318;
void* right_value378;
char* tail_319;
void* right_value379;
void* right_value380;
struct buffer* __dec_obj112;
int len_320;
void* right_value381;
char* mem_321;
void* right_value382;
void* right_value383;
void* right_value384;
void* right_value385;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* right_value392;
struct sNode* node_323;
void* right_value393;
struct sNode* __dec_obj118;
struct sNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&params_305, 0, sizeof(struct list$1tuple2$2charphsNodephph*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&p_310, 0, sizeof(char*));
memset(&sline_311, 0, sizeof(int));
memset(&err_flag_312, 0, sizeof(_Bool));
memset(&right_value372, 0, sizeof(void*));
memset(&label_313, 0, sizeof(char*));
memset(&right_value373, 0, sizeof(void*));
memset(&no_comma_314, 0, sizeof(_Bool));
memset(&right_value374, 0, sizeof(void*));
memset(&node_315, 0, sizeof(struct sNode*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&method_block_316, 0, sizeof(struct buffer*));
memset(&method_block_sline_317, 0, sizeof(int));
memset(&head_318, 0, sizeof(char*));
memset(&right_value378, 0, sizeof(void*));
memset(&tail_319, 0, sizeof(char*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&len_320, 0, sizeof(int));
memset(&right_value381, 0, sizeof(void*));
memset(&mem_321, 0, sizeof(char*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&node_323, 0, sizeof(struct sNode*));
memset(&right_value393, 0, sizeof(void*));
    params_305=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value362=list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value361=(struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 859))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value361;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value362);
    if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value362;
    __freed_obj__ = 0;
    list$1tuple2$2charphsNodephph_push_back(params_305,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value370=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value366=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 860)))),((void*)0),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(obj)))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value366);
    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value366;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value369);
    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value369;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value370);
    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value370;
    __freed_obj__ = 0;
    if(_if_conditional402=*info->p==45&&*(info->p+1)==62,    __freed_obj__ = 0, 
    _if_conditional402) {
        info->p+=2;
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional403=*info->p!=123,    __freed_obj__ = 0, 
    _if_conditional403) {
        optional$2intbool_value(((struct optional$2intbool*)(right_value371=expected_next_character(40,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value371;
        __freed_obj__ = 0;
        while(_while_condtional36=(_Bool)1,        __freed_obj__ = 0, 
        _while_condtional36) {
            if(_if_conditional405=*info->p==41,            __freed_obj__ = 0, 
            _if_conditional405) {
                info->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            p_310=info->p;
            __freed_obj__ = 0;
            sline_311=info->sline;
            __freed_obj__ = 0;
            err_flag_312=(_Bool)0;
            __freed_obj__ = 0;
            label_313=(char*)come_increment_ref_count(((char*)(right_value372=__builtin_string(""))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value372;
            __freed_obj__ = 0;
            if(_if_conditional406=xisalpha(*info->p)||*info->p==95,            __freed_obj__ = 0, 
            _if_conditional406) {
                __dec_obj109=label_313;
                label_313=(char*)come_increment_ref_count(optional$2charphbool_expect(((struct optional$2charphbool*)(right_value373=parse_word(info)))));
                if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value373;
                __freed_obj__ = 0;
                err_flag_312=(_Bool)1;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional407=err_flag_312==(_Bool)1&&*info->p==58,            __freed_obj__ = 0, 
            _if_conditional407) {
                info->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            else {
                __dec_obj110=label_313;
                label_313=((void*)0);
                if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                info->p=p_310;
                __freed_obj__ = 0;
                info->sline=sline_311;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            no_comma_314=info->no_comma;
            __freed_obj__ = 0;
            info->no_comma=(_Bool)1;
            __freed_obj__ = 0;
            node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=expression_v13(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value374);
            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[1] = right_value374;
            __freed_obj__ = 0;
            __dec_obj111=node_315;
            node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=post_position_operator3_v21((struct sNode*)come_increment_ref_count(node_315),info))));
            if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value375);
            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value375;
            __freed_obj__ = 0;
            info->no_comma=no_comma_314;
            __freed_obj__ = 0;
            list$1tuple2$2charphsNodephph_push_back(params_305,(struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value377=tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count(((struct tuple2$2charphsNodeph*)(right_value376=(struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 907)))),(char*)come_increment_ref_count(label_313),(struct sNode*)come_increment_ref_count(node_315))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value376);
            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value376;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value377);
            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[4] = right_value377;
            __freed_obj__ = 0;
            if(_if_conditional408=*info->p==44,            __freed_obj__ = 0, 
            _if_conditional408) {
                info->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional409=*info->p==41,                __freed_obj__ = 0, 
                _if_conditional409) {
                    info->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    if(label_313 && !__freed_obj__) { label_313 = come_decrement_ref_count(label_313, (void*)0, (void*)0, 0, 0, 0); }
                    if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
                    break;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(label_313 && !__freed_obj__) { label_313 = come_decrement_ref_count(label_313, (void*)0, (void*)0, 0, 0, 0); }
            if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    method_block_316=((void*)0);
    __freed_obj__ = 0;
    method_block_sline_317=0;
    __freed_obj__ = 0;
    if(_if_conditional410=*info->p==123,    __freed_obj__ = 0, 
    _if_conditional410) {
        head_318=info->p;
        __freed_obj__ = 0;
        method_block_sline_317=info->sline;
        __freed_obj__ = 0;
        ((char*)(right_value378=skip_block(info)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
        if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value378;
        __freed_obj__ = 0;
        tail_319=info->p;
        __freed_obj__ = 0;
        __dec_obj112=method_block_316;
        method_block_316=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value380=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value379=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 933))))))));
        if(__dec_obj112) { come_call_finalizer(buffer_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value379);
        if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value379;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value380);
        if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value380;
        __freed_obj__ = 0;
        len_320=tail_319-head_318;
        __freed_obj__ = 0;
        mem_321=(char*)come_increment_ref_count(((char*)(right_value381=(char*)come_calloc(1, sizeof(char)*(1*(len_320+1)), "20method.c", 936))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value381);
        if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value381;
        __freed_obj__ = 0;
        memcpy(mem_321,head_318,len_320);
        __freed_obj__ = 0;
        mem_321[len_320]=0;
        __freed_obj__ = 0;
        buffer_append_str(method_block_316,mem_321);
        __freed_obj__ = 0;
        buffer_append_str(method_block_316,"\n");
        __freed_obj__ = 0;
        if(mem_321 && !__freed_obj__) { mem_321 = come_decrement_ref_count(mem_321, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 946);
    _inf_obj_value2=come_increment_ref_count(((struct sMethodCallNode*)(right_value385=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value382=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 946)))),fun_name,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(obj)))),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value384=list$1tuple2$2charphsNodephphp_clone(params_305)))),method_block_316,method_block_sline_317,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sMethodCallNode_sline;
    _inf_value2->sname=(void*)sMethodCallNode_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=_inf_value2)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value382);
    if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value382;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value383);
    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[6] = right_value383;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value384);
    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value384;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value385);
    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value385;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value392);
    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[9] = right_value392;
    __freed_obj__ = 0;
    __dec_obj118=node_323;
    node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=exception_get_value((struct sNode*)come_increment_ref_count(node_323),info))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value393);
    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[10] = right_value393;
    __freed_obj__ = 0;
    __result221__ = __result_obj__ = node_323;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_305 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_305, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_316 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_316, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_323 && !__freed_obj__) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result221__;
    __freed_obj__ = 0;
    if(obj && !__freed_obj__) { obj = come_decrement_ref_count(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 1, 0); } 
    if(fun_name && !__freed_obj__) { fun_name = come_decrement_ref_count(fun_name, (void*)0, (void*)0, 0, 1, 0); }
    if(params_305 && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,params_305, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(method_block_316 && !__freed_obj__) { come_call_finalizer(buffer_finalize,method_block_316, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(node_323 && !__freed_obj__) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0); } 
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional400;
void* right_value363;
struct list_item$1tuple2$2charphsNodephph* litem_306;
struct tuple2$2charphsNodeph* __dec_obj104;
_Bool _if_conditional401;
void* right_value364;
struct list_item$1tuple2$2charphsNodephph* litem_307;
struct tuple2$2charphsNodeph* __dec_obj105;
void* right_value365;
struct list_item$1tuple2$2charphsNodephph* litem_308;
struct tuple2$2charphsNodeph* __dec_obj106;
struct list$1tuple2$2charphsNodephph* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value363, 0, sizeof(void*));
memset(&litem_306, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value364, 0, sizeof(void*));
memset(&litem_307, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
memset(&right_value365, 0, sizeof(void*));
memset(&litem_308, 0, sizeof(struct list_item$1tuple2$2charphsNodephph*));
        if(_if_conditional400=self->len==0,        __freed_obj__ = 0, 
        _if_conditional400) {
            litem_306=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value363=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 277))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value363;
            __freed_obj__ = 0;
            litem_306->prev=((void*)0);
            __freed_obj__ = 0;
            litem_306->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj104=litem_306->item;
            litem_306->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
            if(__dec_obj104) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj104, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            self->tail=litem_306;
            __freed_obj__ = 0;
            self->head=litem_306;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional401=self->len==1,            __freed_obj__ = 0, 
            _if_conditional401) {
                litem_307=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value364=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 287))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value364;
                __freed_obj__ = 0;
                litem_307->prev=self->head;
                __freed_obj__ = 0;
                litem_307->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj105=litem_307->item;
                litem_307->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj105) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail=litem_307;
                __freed_obj__ = 0;
                self->head->next=litem_307;
                __freed_obj__ = 0;
            }
            else {
                litem_308=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(right_value365=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang2.h", 297))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1tuple2$2charphsNodephphp_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value365;
                __freed_obj__ = 0;
                litem_308->prev=self->tail;
                __freed_obj__ = 0;
                litem_308->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj106=litem_308->item;
                litem_308->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
                if(__dec_obj106) { come_call_finalizer(tuple2$2charphsNodeph_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail->next=litem_308;
                __freed_obj__ = 0;
                self->tail=litem_308;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        self->len++;
        __freed_obj__ = 0;
        __result215__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result215__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value367;
char* __dec_obj107;
void* right_value368;
struct sNode* __dec_obj108;
struct tuple2$2charphsNodeph* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
        __dec_obj107=self->v1;
        self->v1=(char*)come_increment_ref_count(((char*)(right_value367=string_clone(v1))));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value367;
        __freed_obj__ = 0;
        __dec_obj108=self->v2;
        self->v2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=sNode_clone(v2))));
        if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value368);
        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[1] = right_value368;
        __freed_obj__ = 0;
        __result216__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result216__;
        __freed_obj__ = 0;
        if(self && !__freed_obj__) { come_call_finalizer(tuple2$2charphsNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, (void*)0, (void*)0, 0, 1, 0); }
        if(v2 && !__freed_obj__) { v2 = come_decrement_ref_count(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 1, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional404;
int default_value_309;
int __result217__;
int __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_309, 0, sizeof(int));
            if(_if_conditional404=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional404) {
                __freed_obj__ = 0;
                memset(&default_value_309,0,sizeof(int));
                __freed_obj__ = 0;
                __result217__ = default_value_309;
                __freed_obj__ = 0;
                return __result217__;
                __freed_obj__ = 0;
            }
            else {
                __result218__ = self->v1;
                __freed_obj__ = 0;
                return __result218__;
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

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional411=self!=((void*)0)&&self->obj!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional411) {
            if(self->obj && !__freed_obj__) { self->obj = come_decrement_ref_count(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional412=self!=((void*)0)&&self->fun_name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional412) {
            if(self->fun_name && !__freed_obj__) { self->fun_name = come_decrement_ref_count(self->fun_name, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional413=self!=((void*)0)&&self->params!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional413) {
            if(self->params && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,self->params, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional414=self!=((void*)0)&&self->method_block!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional414) {
            if(self->method_block && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->method_block, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional415=self!=((void*)0)&&self->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional415) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional416;
struct sMethodCallNode* __result219__;
void* right_value386;
struct sMethodCallNode* result_322;
_Bool _if_conditional417;
void* right_value387;
struct sNode* __dec_obj113;
_Bool _if_conditional418;
void* right_value388;
char* __dec_obj114;
_Bool _if_conditional419;
void* right_value389;
struct list$1tuple2$2charphsNodephph* __dec_obj115;
_Bool _if_conditional420;
void* right_value390;
struct buffer* __dec_obj116;
_Bool _if_conditional421;
_Bool _if_conditional422;
void* right_value391;
char* __dec_obj117;
_Bool _if_conditional423;
struct sMethodCallNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value386, 0, sizeof(void*));
memset(&result_322, 0, sizeof(struct sMethodCallNode*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
        if(_if_conditional416=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional416) {
            __result219__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result219__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_322=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(right_value386=(struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value386;
        __freed_obj__ = 0;
        if(_if_conditional417=self!=((void*)0)&&self->obj!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional417) {
            __dec_obj113=result_322->obj;
            result_322->obj=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=sNode_clone(self->obj))));
            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value387;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional418=self!=((void*)0)&&self->fun_name!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional418) {
            __dec_obj114=result_322->fun_name;
            result_322->fun_name=(char*)come_increment_ref_count(((char*)(right_value388=string_clone(self->fun_name))));
            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value388;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional419=self!=((void*)0)&&self->params!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional419) {
            __dec_obj115=result_322->params;
            result_322->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list$1tuple2$2charphsNodephph*)(right_value389=list$1tuple2$2charphsNodephphp_clone(self->params))));
            if(__dec_obj115) { come_call_finalizer(list$1tuple2$2charphsNodephph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1tuple2$2charphsNodephphp_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value389;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional420=self!=((void*)0)&&self->method_block!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional420) {
            __dec_obj116=result_322->method_block;
            result_322->method_block=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value390=buffer_clone(self->method_block))));
            if(__dec_obj116) { come_call_finalizer(buffer_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
            if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value390;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional421=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional421) {
            result_322->sline=self->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional422=self!=((void*)0)&&self->sname!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional422) {
            __dec_obj117=result_322->sname;
            result_322->sname=(char*)come_increment_ref_count(((char*)(right_value391=string_clone(self->sname))));
            if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value391);
            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value391;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional423=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional423) {
            result_322->method_block_sline=self->method_block_sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result220__ = __result_obj__ = result_322;
        if(result_322 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_322, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result220__;
        __freed_obj__ = 0;
        if(result_322 && !__freed_obj__) { come_call_finalizer(sMethodCallNode_finalize,result_322, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional424;
void* right_value394;
void* right_value395;
struct sNode* _inf_value3;
struct sCurrentNode* _inf_obj_value3;
void* right_value398;
void* right_value399;
void* right_value400;
struct sNode* __result225__;
void* right_value401;
struct __current_stack1__ __current_stack1__;
void* right_value404;
struct sNode* result_325;
void* right_value405;
void* right_value406;
struct sNode* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value404, 0, sizeof(void*));
memset(&result_325, 0, sizeof(struct sNode*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
    if(_if_conditional424=charp_operator_equals(buf,"__current__"),    __freed_obj__ = 0, 
    _if_conditional424) {
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 955);
        _inf_obj_value3=come_increment_ref_count(((struct sCurrentNode*)(right_value395=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value394=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 955)))),info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sCurrentNode_finalize;
        _inf_value3->clone=(void*)sCurrentNode_clone;
        _inf_value3->compile=(void*)sCurrentNode_compile;
        _inf_value3->sline=(void*)sCurrentNode_sline;
        _inf_value3->sname=(void*)sCurrentNode_sname;
        _inf_value3->terminated=(void*)sCurrentNode_terminated;
        _inf_value3->kind=(void*)sCurrentNode_kind;
        __result225__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value400=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value399=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "20method.c", 955)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=_inf_value3))),(_Bool)1)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value394);
        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value394;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value395);
        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value395;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value398);
        if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value398;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value399);
        if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value399;
        __freed_obj__ = 0;
        return __result225__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)(right_value401=string_node_v15(buf,head,head_sline,info))),&__current_stack1__,(void*)method_block1_20methodc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value401;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value404);
    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value404;
    __freed_obj__ = 0;
    __result229__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value406=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value405=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "20method.c", 962)))),(struct sNode*)come_increment_ref_count(result_325),(_Bool)1)));
    if(result_325 && !__freed_obj__) { result_325 = come_decrement_ref_count(result_325, ((struct sNode*)result_325)->finalize, ((struct sNode*)result_325)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value405);
    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value405;
    __freed_obj__ = 0;
    return __result229__;
    __freed_obj__ = 0;
    if(result_325 && !__freed_obj__) { result_325 = come_decrement_ref_count(result_325, ((struct sNode*)result_325)->finalize, ((struct sNode*)result_325)->_protocol_obj, 0, 0, 0); } 
}

static void sCurrentNode_finalize(struct sCurrentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional425=self!=((void*)0)&&self->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional425) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional426;
struct sCurrentNode* __result222__;
void* right_value396;
struct sCurrentNode* result_324;
_Bool _if_conditional427;
_Bool _if_conditional428;
void* right_value397;
char* __dec_obj119;
struct sCurrentNode* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value396, 0, sizeof(void*));
memset(&result_324, 0, sizeof(struct sCurrentNode*));
memset(&right_value397, 0, sizeof(void*));
            if(_if_conditional426=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional426) {
                __result222__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result222__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_324=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(right_value396=(struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value396);
            if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value396;
            __freed_obj__ = 0;
            if(_if_conditional427=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional427) {
                result_324->sline=self->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional428=self!=((void*)0)&&self->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional428) {
                __dec_obj119=result_324->sname;
                result_324->sname=(char*)come_increment_ref_count(((char*)(right_value397=string_clone(self->sname))));
                if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value397;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result223__ = __result_obj__ = result_324;
            if(result_324 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result223__;
            __freed_obj__ = 0;
            if(result_324 && !__freed_obj__) { come_call_finalizer(sCurrentNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj120;
struct optional$2sNodephbool* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj120=self->v1;
            self->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            self->v2=v2;
            __freed_obj__ = 0;
            __result224__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result224__;
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
_Bool _if_conditional429;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional429=self!=((void*)0)&&self->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional429) {
                    if(self->v1 && !__freed_obj__) { self->v1 = come_decrement_ref_count(self->v1, ((struct sNode*)self->v1)->finalize, ((struct sNode*)self->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional430;
_Bool _if_conditional431;
struct sNode* __result226__;
struct sNode* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional430=!self->v2,        __freed_obj__ = 0, 
        _if_conditional430) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional431=((struct sDummyCurrentStack*)parent)->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional431) {
                __result226__ = __result_obj__ = self->v1;
                __freed_obj__ = 0;
                return __result226__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result227__ = __result_obj__ = self->v1;
        __freed_obj__ = 0;
        return __result227__;
        __freed_obj__ = 0;
}

void method_block1_20methodc(struct __current_stack1__* parent){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value402;
void* right_value403;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value402);
        if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value402;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value403);
        if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value403;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("20method.c", 960), ((struct optional$2voidpbool*)(right_value403=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value402=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "20method.c", 960))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            self->v1=v1;
            __freed_obj__ = 0;
            self->v2=v2;
            __freed_obj__ = 0;
            __result228__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result228__;
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

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value407;
struct sNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value407, 0, sizeof(void*));
    __result230__ = __result_obj__ = ((struct sNode*)(right_value407=post_position_operator3_v5((struct sNode*)come_increment_ref_count(node),info)));
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result230__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

