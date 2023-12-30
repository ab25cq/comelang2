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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sSubNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMultNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sDivNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sModNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sXOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sCommaNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sConditionalNode
{
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

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
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2);
static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self);
static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

_Bool sNullNode_terminated();

char* sNullNode_kind();

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

int sNullNode_sline(struct sNullNode* self, struct sInfo* info);

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

_Bool sNilNode_terminated();

char* sNilNode_kind();

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

int sNilNode_sline(struct sNilNode* self, struct sInfo* info);

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAddNode_terminated();

char* sAddNode_kind();

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

int sAddNode_sline(struct sAddNode* self, struct sInfo* info);

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sSubNode_terminated();

char* sSubNode_kind();

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

int sSubNode_sline(struct sSubNode* self, struct sInfo* info);

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultNode_terminated();

char* sMultNode_kind();

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

int sMultNode_sline(struct sMultNode* self, struct sInfo* info);

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivNode_terminated();

char* sDivNode_kind();

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

int sDivNode_sline(struct sDivNode* self, struct sInfo* info);

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModNode_terminated();

char* sModNode_kind();

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

int sModNode_sline(struct sModNode* self, struct sInfo* info);

char* sModNode_sname(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShiftNode_terminated();

char* sLShiftNode_kind();

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info);

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftNode_terminated();

char* sRShiftNode_kind();

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info);

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtEqNode_terminated();

char* sGtEqNode_kind();

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info);

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtEqNode_terminated();

char* sLtEqNode_kind();

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info);

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtNode_terminated();

char* sLtNode_kind();

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

int sLtNode_sline(struct sLtNode* self, struct sInfo* info);

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtNode_terminated();

char* sGtNode_kind();

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

int sGtNode_sline(struct sGtNode* self, struct sInfo* info);

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

int sEqNode_sline(struct sEqNode* self, struct sInfo* info);

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info);

_Bool sEqNode_terminated();

char* sEqNode_kind();

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEqNode_terminated();

char* sNotEqNode_kind();

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info);

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEq2Node_terminated();

char* sEq2Node_kind();

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info);

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info);

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEq2Node_terminated();

char* sNotEq2Node_kind();

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info);

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndNode_terminated();

char* sAndNode_kind();

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

int sAndNode_sline(struct sAndNode* self, struct sInfo* info);

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXOrNode_terminated();

char* sXOrNode_kind();

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info);

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrNode_terminated();

char* sOrNode_kind();

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

int sOrNode_sline(struct sOrNode* self, struct sInfo* info);

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndAndNode_terminated();

char* sAndAndNode_kind();

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info);

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrOrNode_terminated();

char* sOrOrNode_kind();

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info);

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sCommaNode_terminated();

char* sCommaNode_kind();

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info);

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

_Bool sConditionalNode_terminated();

char* sConditionalNode_kind();

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info);

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_13opc(struct __current_stack1__* parent);

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
// inline function
static inline unsigned short int __bswap_16(unsigned short int __bsx){
void* __result_obj__;
_Bool __freed_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    perror(msg);
    __freed_obj__ = 0;
    exit(4);
    __freed_obj__ = 0;
}

// body function







_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value34;
struct sType* generics_type_24;
_Bool _if_conditional87;
struct sType* __dec_obj23;
_Bool _if_conditional88;
struct sClass* klass_25;
char* class_name_26;
struct sFun* operator_fun_27;
char* fun_name2_28;
_Bool _if_conditional89;
void* right_value35;
char* none_generics_name_29;
void* right_value36;
struct sType* obj_type_30;
void* right_value37;
char* __dec_obj24;
void* right_value38;
char* fun_name3_31;
void* right_value40;
struct sGenericsFun* generics_fun_35;
_Bool _if_conditional104;
void* right_value41;
_Bool _if_conditional105;
_Bool __result32__;
void* right_value51;
_Bool _if_conditional111;
void* right_value52;
struct tuple2$2sFunpcharph* multiple_assgin_var1;
struct sFun* fun_40;
char* fun_name_41;
void* right_value53;
struct tuple2$2sFunpcharph* multiple_assgin_var2;
struct sFun* fun2_42;
char* fun_name2_43;
_Bool _if_conditional113;
void* right_value54;
struct tuple2$2sFunpcharph* multiple_assgin_var3;
struct sFun* fun_44;
char* fun_name_45;
void* right_value55;
struct tuple2$2sFunpcharph* multiple_assgin_var4;
struct sFun* fun2_46;
char* fun_name2_47;
void* right_value56;
void* right_value57;
char* __dec_obj25;
int i_48;
_Bool _for_condtionalA1;
void* right_value58;
char* new_fun_name_49;
void* right_value59;
_Bool _if_conditional114;
void* right_value60;
char* __dec_obj26;
_Bool _if_conditional115;
void* right_value61;
_Bool result_50;
_Bool _if_conditional116;
void* right_value62;
struct CVALUE* come_value_51;
char* left_value2_52;
void* right_value63;
void* right_value64;
void* right_value69;
void* right_value70;
struct optional$2sTypephbool* __exception_result_var_a2;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
char* __dec_obj28;
_Bool _if_conditional126;
void* right_value71;
char* __dec_obj29;
_Bool _if_conditional127;
void* right_value72;
char* __dec_obj30;
void* right_value73;
char* __dec_obj31;
_Bool _if_conditional128;
void* right_value74;
char* __dec_obj32;
void* right_value75;
char* __dec_obj33;
void* right_value76;
char* __dec_obj34;
char* right_value2_57;
void* right_value77;
void* right_value78;
void* right_value79;
void* right_value80;
struct optional$2sTypephbool* __exception_result_var_a3;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
char* __dec_obj35;
_Bool _if_conditional132;
void* right_value81;
char* __dec_obj36;
_Bool _if_conditional133;
void* right_value82;
char* __dec_obj37;
void* right_value83;
char* __dec_obj38;
_Bool _if_conditional134;
void* right_value84;
char* __dec_obj39;
void* right_value85;
char* __dec_obj40;
void* right_value86;
char* __dec_obj41;
void* right_value87;
char* __dec_obj42;
void* right_value88;
struct sType* type2_58;
void* right_value89;
struct sType* type3_59;
void* right_value90;
struct sType* __dec_obj43;
_Bool _if_conditional135;
void* right_value91;
char* __dec_obj44;
_Bool _if_conditional136;
void* right_value92;
char* __dec_obj45;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&generics_type_24, 0, sizeof(struct sType*));
memset(&klass_25, 0, sizeof(struct sClass*));
memset(&class_name_26, 0, sizeof(char*));
memset(&operator_fun_27, 0, sizeof(struct sFun*));
memset(&fun_name2_28, 0, sizeof(char*));
memset(&right_value35, 0, sizeof(void*));
memset(&none_generics_name_29, 0, sizeof(char*));
memset(&right_value36, 0, sizeof(void*));
memset(&obj_type_30, 0, sizeof(struct sType*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&fun_name3_31, 0, sizeof(char*));
memset(&right_value40, 0, sizeof(void*));
memset(&generics_fun_35, 0, sizeof(struct sGenericsFun*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&fun_40, 0, sizeof(struct sFun*));
memset(&fun_name_41, 0, sizeof(char*));
memset(&fun_40, 0, sizeof(struct sFun*));
memset(&fun_name_41, 0, sizeof(char*));
memset(&right_value53, 0, sizeof(void*));
memset(&fun2_42, 0, sizeof(struct sFun*));
memset(&fun_name2_43, 0, sizeof(char*));
memset(&fun2_42, 0, sizeof(struct sFun*));
memset(&fun_name2_43, 0, sizeof(char*));
memset(&right_value54, 0, sizeof(void*));
memset(&fun_44, 0, sizeof(struct sFun*));
memset(&fun_name_45, 0, sizeof(char*));
memset(&fun_44, 0, sizeof(struct sFun*));
memset(&fun_name_45, 0, sizeof(char*));
memset(&right_value55, 0, sizeof(void*));
memset(&fun2_46, 0, sizeof(struct sFun*));
memset(&fun_name2_47, 0, sizeof(char*));
memset(&fun2_46, 0, sizeof(struct sFun*));
memset(&fun_name2_47, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value57, 0, sizeof(void*));
memset(&i_48, 0, sizeof(int));
memset(&right_value58, 0, sizeof(void*));
memset(&new_fun_name_49, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&result_50, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
memset(&come_value_51, 0, sizeof(struct CVALUE*));
memset(&left_value2_52, 0, sizeof(char*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value2_57, 0, sizeof(char*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&type2_58, 0, sizeof(struct sType*));
memset(&right_value89, 0, sizeof(void*));
memset(&type3_59, 0, sizeof(struct sType*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
memset(&right_value92, 0, sizeof(void*));
    generics_type_24=(struct sType*)come_increment_ref_count(((struct sType*)(right_value34=sType_clone(type))));
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    if(_if_conditional87=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_24, "13op.c", 10))->mNoSolvedGenericsType, "13op.c", 10))->v1,    __freed_obj__ = 0, 
    _if_conditional87) {
        __dec_obj23=generics_type_24;
        generics_type_24=(struct sType*)come_increment_ref_count(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(generics_type_24, "13op.c", 7))->mNoSolvedGenericsType, "13op.c", 7))->v1);
        if(__dec_obj23) { come_call_finalizer(sType_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional88=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 13))->mNoSolvedGenericsType, "13op.c", 13))->v1,    __freed_obj__ = 0, 
    _if_conditional88) {
        type=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 11))->mNoSolvedGenericsType, "13op.c", 11))->v1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    klass_25=((struct sType*)come_null_check(type, "13op.c", 13))->mClass;
    __freed_obj__ = 0;
    class_name_26=((struct sClass*)come_null_check(klass_25, "13op.c", 14))->mName;
    __freed_obj__ = 0;
    operator_fun_27=((void*)0);
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional89=list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 74))->mGenericsTypes, "13op.c", 74)))>0,    __freed_obj__ = 0, 
    _if_conditional89) {
        none_generics_name_29=(char*)come_increment_ref_count(((char*)(right_value35=get_none_generics_name(((struct sClass*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 20))->mClass, "13op.c", 20))->mName))));
        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        obj_type_30=(struct sType*)come_increment_ref_count(((struct sType*)(right_value36=solve_generics(type,((struct sInfo*)come_null_check(info, "13op.c", 22))->generics_type,info))));
        if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj24=fun_name2_28;
        fun_name2_28=(char*)come_increment_ref_count(((char*)(right_value37=create_method_name(obj_type_30,(_Bool)0,fun_name,info))));
        if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
        if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        fun_name3_31=(char*)come_increment_ref_count(((char*)(right_value38=xsprintf("%s_%s",none_generics_name_29,fun_name))));
        if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        generics_fun_35=((struct sGenericsFun*)(right_value40=map$2charphsGenericsFunph_at(((struct map$2charphsGenericsFunph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 27))->generics_funcs, "13op.c", 27)),fun_name3_31,((void*)0))));
        if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional104=generics_fun_35,        __freed_obj__ = 0, 
        _if_conditional104) {
            if(_if_conditional105=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value41=__builtin_string(fun_name2_28)))),generics_fun_35,obj_type_30,info),            (right_value41 && right_value41 != __result_obj__ && !__freed_obj__) ? right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0):0,
            __freed_obj__ = 0, 
            _if_conditional105) {
                __result32__ = (_Bool)0;
                if(none_generics_name_29 && !__freed_obj__) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_31 && !__freed_obj__) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_28 && !__freed_obj__) { fun_name2_28 = come_decrement_ref_count(fun_name2_28, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
                return __result32__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_27=optional$2sFunpbool_value((come_push_stackframe("13op.c", 35),((struct optional$2sFunpbool*)(right_value51=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 35))->funcs,fun_name2_28)))));
            come_pop_stackframe();
            if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional111=charp_operator_equals(fun_name,"operator_equals"),            __freed_obj__ = 0, 
            _if_conditional111) {
                multiple_assgin_var1=((struct tuple2$2sFunpcharph*)(right_value52=create_equals_automatically(obj_type_30,"equals",info)));
                fun_40=multiple_assgin_var1->v1;
                fun_name_41=(char*)come_increment_ref_count(multiple_assgin_var1->v2);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                multiple_assgin_var2=((struct tuple2$2sFunpcharph*)(right_value53=create_operator_equals_automatically(obj_type_30,"operator_equals",info)));
                fun2_42=multiple_assgin_var2->v1;
                fun_name2_43=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                operator_fun_27=fun2_42;
                __freed_obj__ = 0;
                if(fun_name_41 && !__freed_obj__) { fun_name_41 = come_decrement_ref_count(fun_name_41, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_43 && !__freed_obj__) { fun_name2_43 = come_decrement_ref_count(fun_name2_43, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional113=charp_operator_equals(fun_name,"operator_not_equals"),                __freed_obj__ = 0, 
                _if_conditional113) {
                    multiple_assgin_var3=((struct tuple2$2sFunpcharph*)(right_value54=create_equals_automatically(obj_type_30,"not_equals",info)));
                    fun_44=multiple_assgin_var3->v1;
                    fun_name_45=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                    if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    multiple_assgin_var4=((struct tuple2$2sFunpcharph*)(right_value55=create_operator_not_equals_automatically(obj_type_30,"operator_not_equals",info)));
                    fun2_46=multiple_assgin_var4->v1;
                    fun_name2_47=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    operator_fun_27=fun2_46;
                    __freed_obj__ = 0;
                    if(fun_name_45 && !__freed_obj__) { fun_name_45 = come_decrement_ref_count(fun_name_45, (void*)0, (void*)0, 0, 0, 0); }
                    if(fun_name2_47 && !__freed_obj__) { fun_name2_47 = come_decrement_ref_count(fun_name2_47, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    come_clear_stackframe();
                    operator_fun_27=optional$2sFunpbool_value((come_push_stackframe("13op.c", 51),((struct optional$2sFunpbool*)(right_value56=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 51))->funcs,fun_name2_28)))));
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(none_generics_name_29 && !__freed_obj__) { none_generics_name_29 = come_decrement_ref_count(none_generics_name_29, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_30 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_30, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_31 && !__freed_obj__) { fun_name3_31 = come_decrement_ref_count(fun_name3_31, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj25=fun_name2_28;
        fun_name2_28=(char*)come_increment_ref_count(((char*)(right_value57=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
        if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { right_value57 = come_decrement_ref_count(right_value57, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        for(
        i_48=128-1 ,        __freed_obj__ = 0, 
        0;        _for_condtionalA1=        i_48>=1 ,        __freed_obj__ = 0, 
        _for_condtionalA1;        i_48-- ,        __freed_obj__ = 0, 
        0        ){
            new_fun_name_49=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("%s_v%d",fun_name2_28,i_48))));
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            come_clear_stackframe();
            operator_fun_27=optional$2sFunpbool_value((come_push_stackframe("13op.c", 61),((struct optional$2sFunpbool*)(right_value59=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 61))->funcs,new_fun_name_49)))));
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional114=operator_fun_27,            __freed_obj__ = 0, 
            _if_conditional114) {
                __dec_obj26=fun_name2_28;
                fun_name2_28=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(new_fun_name_49))));
                if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(new_fun_name_49 && !__freed_obj__) { new_fun_name_49 = come_decrement_ref_count(new_fun_name_49, (void*)0, (void*)0, 0, 0, 0); }
                break;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(new_fun_name_49 && !__freed_obj__) { new_fun_name_49 = come_decrement_ref_count(new_fun_name_49, (void*)0, (void*)0, 0, 0, 0); }
        }
        __freed_obj__ = 0;
        if(_if_conditional115=operator_fun_27==((void*)0),        __freed_obj__ = 0, 
        _if_conditional115) {
            come_clear_stackframe();
            operator_fun_27=optional$2sFunpbool_value((come_push_stackframe("13op.c", 70),((struct optional$2sFunpbool*)(right_value61=map$2charphsFunphp_operator_load_element(((struct sInfo*)come_null_check(info, "13op.c", 70))->funcs,fun_name2_28)))));
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    result_50=(_Bool)0;
    __freed_obj__ = 0;
    if(_if_conditional116=operator_fun_27&&(list$1sTypeph_length(((struct list$1sTypeph*)come_null_check(((struct sType*)come_null_check(type, "13op.c", 170))->mGenericsTypes, "13op.c", 170)))>0||(string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 170))->type, "13op.c", 170))->mClass, "13op.c", 170))->mName,((struct sClass*)come_null_check(((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 170))->type, "13op.c", 170))->mClass, "13op.c", 170))->mName)&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 170))->type, "13op.c", 170))->mPointerNum==((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 170))->type, "13op.c", 170))->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    __freed_obj__ = 0, 
    _if_conditional116) {
        come_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77))));
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value64=xsprintf("\%s is assigned to",((char*)(right_value63=string_to_string(fun_name2_28)))))),optional$2sTypephbool_value((come_push_stackframe("13op.c", 79),((struct optional$2sTypephbool*)(right_value69=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_27, "13op.c", 79))->mParamTypes,0))))),((struct CVALUE*)come_null_check(left_value, "13op.c", 79))->type,left_value,(_Bool)0,info);
        come_pop_stackframe();
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional123=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("13op.c", 111),__exception_result_var_a2=((struct optional$2sTypephbool*)(right_value70=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_27, "13op.c", 111))->mParamTypes,0))), come_pop_stackframe(), __exception_result_var_a2)), "13op.c", 111))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 111))->type, "13op.c", 111))->mHeap,        (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional123) {
            if(_if_conditional124=((struct CVALUE*)come_null_check(left_value, "13op.c", 106))->var,            __freed_obj__ = 0, 
            _if_conditional124) {
                if(_if_conditional125=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 98))->var, "13op.c", 98))->mType, "13op.c", 98))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional125) {
                    __dec_obj28=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 83))->var, "13op.c", 83))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 83))->var, "13op.c", 83))->mCValueName=((void*)0);
                    if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional126=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 98))->var, "13op.c", 98))->mType, "13op.c", 98))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional126) {
                        __dec_obj29=((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->c_value;
                        ((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->c_value=(char*)come_increment_ref_count(((char*)(right_value71=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->type,((struct CVALUE*)come_null_check(left_value, "13op.c", 86))->c_value,info))));
                        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional127=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 98))->var, "13op.c", 98))->mType, "13op.c", 98))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional127) {
                            __dec_obj30=((struct CVALUE*)come_null_check(left_value, "13op.c", 89))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "13op.c", 89))->c_value=(char*)come_increment_ref_count(((char*)(right_value72=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "13op.c", 89))->type,((struct CVALUE*)come_null_check(left_value, "13op.c", 89))->c_value,info))));
                            if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj31=((struct CVALUE*)come_null_check(left_value, "13op.c", 92))->c_value;
                            ((struct CVALUE*)come_null_check(left_value, "13op.c", 92))->c_value=(char*)come_increment_ref_count(((char*)(right_value73=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "13op.c", 92))->type,((struct CVALUE*)come_null_check(left_value, "13op.c", 92))->c_value,info))));
                            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional128=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value, "13op.c", 105))->type, "13op.c", 105))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional128) {
                }
                else {
                    __dec_obj32=((struct CVALUE*)come_null_check(left_value, "13op.c", 103))->c_value;
                    ((struct CVALUE*)come_null_check(left_value, "13op.c", 103))->c_value=(char*)come_increment_ref_count(((char*)(right_value74=increment_ref_count_object(((struct CVALUE*)come_null_check(left_value, "13op.c", 103))->type,((struct CVALUE*)come_null_check(left_value, "13op.c", 103))->c_value,info))));
                    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj33=left_value2_52;
            left_value2_52=(char*)come_increment_ref_count(((char*)(right_value75=xsprintf("%s",((struct CVALUE*)come_null_check(left_value, "13op.c", 106))->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_52;
            left_value2_52=(char*)come_increment_ref_count(((char*)(right_value76=string_clone(((struct CVALUE*)come_null_check(left_value, "13op.c", 109))->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        come_clear_stackframe();
        check_assign_type(((char*)(right_value78=xsprintf("\%s is assigned to",((char*)(right_value77=string_to_string(fun_name2_28)))))),optional$2sTypephbool_value((come_push_stackframe("13op.c", 112),((struct optional$2sTypephbool*)(right_value79=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_27, "13op.c", 112))->mParamTypes,1))))),((struct CVALUE*)come_null_check(right_value, "13op.c", 112))->type,right_value,(_Bool)0,info);
        if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional129=((struct sType*)come_null_check(optional$2sTypephbool_value((come_clear_stackframe(), come_push_stackframe("13op.c", 145),__exception_result_var_a3=((struct optional$2sTypephbool*)(right_value80=list$1sTypephp_operator_load_element(((struct sFun*)come_null_check(operator_fun_27, "13op.c", 145))->mParamTypes,1))), come_pop_stackframe(), __exception_result_var_a3)), "13op.c", 145))->mHeap&&((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 145))->type, "13op.c", 145))->mHeap,        (right_value80 && right_value80 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2sTypephboolp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __freed_obj__ = 0, 
        _if_conditional129) {
            if(_if_conditional130=((struct CVALUE*)come_null_check(right_value, "13op.c", 139))->var,            __freed_obj__ = 0, 
            _if_conditional130) {
                if(_if_conditional131=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 131))->var, "13op.c", 131))->mType, "13op.c", 131))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional131) {
                    __dec_obj35=((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 116))->var, "13op.c", 116))->mCValueName;
                    ((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 116))->var, "13op.c", 116))->mCValueName=((void*)0);
                    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional132=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 131))->var, "13op.c", 131))->mType, "13op.c", 131))->mShare,                    __freed_obj__ = 0, 
                    _if_conditional132) {
                        __dec_obj36=((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->c_value;
                        ((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->c_value=(char*)come_increment_ref_count(((char*)(right_value81=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->type,((struct CVALUE*)come_null_check(right_value, "13op.c", 119))->c_value,info))));
                        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
                        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional133=((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 131))->var, "13op.c", 131))->mType, "13op.c", 131))->mClone,                        __freed_obj__ = 0, 
                        _if_conditional133) {
                            __dec_obj37=((struct CVALUE*)come_null_check(right_value, "13op.c", 122))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "13op.c", 122))->c_value=(char*)come_increment_ref_count(((char*)(right_value82=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "13op.c", 122))->type,((struct CVALUE*)come_null_check(right_value, "13op.c", 122))->c_value,info))));
                            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
                            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        else {
                            __dec_obj38=((struct CVALUE*)come_null_check(right_value, "13op.c", 125))->c_value;
                            ((struct CVALUE*)come_null_check(right_value, "13op.c", 125))->c_value=(char*)come_increment_ref_count(((char*)(right_value83=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "13op.c", 125))->type,((struct CVALUE*)come_null_check(right_value, "13op.c", 125))->c_value,info))));
                            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
                            if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional134=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(right_value, "13op.c", 138))->type, "13op.c", 138))->mDelegate,                __freed_obj__ = 0, 
                _if_conditional134) {
                }
                else {
                    __dec_obj39=((struct CVALUE*)come_null_check(right_value, "13op.c", 136))->c_value;
                    ((struct CVALUE*)come_null_check(right_value, "13op.c", 136))->c_value=(char*)come_increment_ref_count(((char*)(right_value84=increment_ref_count_object(((struct CVALUE*)come_null_check(right_value, "13op.c", 136))->type,((struct CVALUE*)come_null_check(right_value, "13op.c", 136))->c_value,info))));
                    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
                    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __dec_obj40=right_value2_57;
            right_value2_57=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s",((struct CVALUE*)come_null_check(right_value, "13op.c", 139))->c_value))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        else {
            __dec_obj41=right_value2_57;
            right_value2_57=(char*)come_increment_ref_count(((char*)(right_value86=string_clone(((struct CVALUE*)come_null_check(right_value, "13op.c", 142))->c_value))));
            if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __dec_obj42=((struct CVALUE*)come_null_check(come_value_51, "13op.c", 145))->c_value;
        ((struct CVALUE*)come_null_check(come_value_51, "13op.c", 145))->c_value=(char*)come_increment_ref_count(((char*)(right_value87=xsprintf("%s(%s,%s)",fun_name2_28,left_value2_52,right_value2_57))));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        type2_58=(struct sType*)come_increment_ref_count(((struct sType*)(right_value88=sType_clone(((struct sFun*)come_null_check(operator_fun_27, "13op.c", 147))->mResultType))));
        if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        type3_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=solve_generics(type2_58,generics_type_24,info))));
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj43=((struct CVALUE*)come_null_check(come_value_51, "13op.c", 151))->type;
        ((struct CVALUE*)come_null_check(come_value_51, "13op.c", 151))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value90=sType_clone(type3_59))));
        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_51, "13op.c", 152))->var=((void*)0);
        __freed_obj__ = 0;
        if(_if_conditional135=((struct sType*)come_null_check(type3_59, "13op.c", 158))->mHeap,        __freed_obj__ = 0, 
        _if_conditional135) {
            __dec_obj44=((struct CVALUE*)come_null_check(come_value_51, "13op.c", 155))->c_value;
            ((struct CVALUE*)come_null_check(come_value_51, "13op.c", 155))->c_value=(char*)come_increment_ref_count(((char*)(right_value91=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_51, "13op.c", 155))->c_value,(struct sType*)come_increment_ref_count(type3_59),info))));
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
            if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional136=((struct sType*)come_null_check(((struct sFun*)come_null_check(operator_fun_27, "13op.c", 162))->mResultType, "13op.c", 162))->mException,        __freed_obj__ = 0, 
        _if_conditional136) {
            __dec_obj45=((struct CVALUE*)come_null_check(come_value_51, "13op.c", 159))->c_value;
            ((struct CVALUE*)come_null_check(come_value_51, "13op.c", 159))->c_value=(char*)come_increment_ref_count(((char*)(right_value92=append_exception_value(((struct CVALUE*)come_null_check(come_value_51, "13op.c", 159))->c_value,((struct CVALUE*)come_null_check(come_value_51, "13op.c", 159))->type,info))));
            if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
            if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_51, "13op.c", 162))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 164))->stack, "13op.c", 164)),(struct CVALUE*)come_increment_ref_count(come_value_51));
        __freed_obj__ = 0;
        result_50=(_Bool)1;
        __freed_obj__ = 0;
        if(come_value_51 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_52 && !__freed_obj__) { left_value2_52 = come_decrement_ref_count(left_value2_52, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_57 && !__freed_obj__) { right_value2_57 = come_decrement_ref_count(right_value2_57, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_58, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type3_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result46__ = result_50;
    if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_28 && !__freed_obj__) { fun_name2_28 = come_decrement_ref_count(fun_name2_28, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
    if(generics_type_24 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_28 && !__freed_obj__) { fun_name2_28 = come_decrement_ref_count(fun_name2_28, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional1;
struct sType* __result7__;
void* right_value0;
struct sType* result_0;
_Bool _if_conditional18;
_Bool _if_conditional19;
void* right_value3;
struct tuple1$1sTypeph* __dec_obj2;
_Bool _if_conditional23;
void* right_value4;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional24;
void* right_value5;
char* __dec_obj4;
_Bool _if_conditional25;
void* right_value12;
struct list$1sTypeph* __dec_obj8;
_Bool _if_conditional29;
void* right_value20;
struct list$1sNodeph* __dec_obj12;
_Bool _if_conditional42;
_Bool _if_conditional43;
void* right_value21;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional44;
void* right_value28;
struct list$1charph* __dec_obj17;
_Bool _if_conditional48;
void* right_value29;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional49;
_Bool _if_conditional50;
void* right_value30;
struct sNode* __dec_obj19;
_Bool _if_conditional51;
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
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
void* right_value31;
struct sNode* __dec_obj20;
_Bool _if_conditional75;
_Bool _if_conditional76;
_Bool _if_conditional77;
void* right_value32;
char* __dec_obj21;
_Bool _if_conditional78;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
void* right_value33;
char* __dec_obj22;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*));
memset(&right_value3, 0, sizeof(void*));
memset(&right_value4, 0, sizeof(void*));
memset(&right_value5, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value28, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
        if(_if_conditional1=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional1) {
            __result7__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result7__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value0=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        if(_if_conditional18=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional18) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional19=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional19) {
            __dec_obj2=((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value3=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj2) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional23=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional23) {
            __dec_obj3=((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional24) {
            __dec_obj4=((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value5=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj4) { __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0,0); }
            if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { right_value5 = come_decrement_ref_count(right_value5, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __dec_obj8=((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value12=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj8) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional29=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional29) {
            __dec_obj12=((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value20=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj12) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional42=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional42) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional43=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional43) {
            __dec_obj13=((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value21=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional44) {
            __dec_obj17=((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value28=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj17) { come_call_finalizer(list$1charph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional48=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional48) {
            __dec_obj18=((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value29=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj18) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional50=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional50) {
            __dec_obj19=((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional51=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional51) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            __dec_obj20=((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            __dec_obj21=((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value32=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { right_value32 = come_decrement_ref_count(right_value32, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            __dec_obj22=((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value33=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result24__ = __result_obj__ = result_0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result24__;
        __freed_obj__ = 0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional2;
_Bool _if_conditional4;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional11;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional2=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional2) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional4=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional4) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional5=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional5) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional8=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional8) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional10=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional10) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional11) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional13=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional13) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional16) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional3=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional3) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sTypeph* it_1;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_2;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_1, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_2, 0, sizeof(struct list_item$1sTypeph*));
                    it_1=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional1=it_1!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional1) {
                        prev_it_2=it_1;
                        __freed_obj__ = 0;
                        it_1=((struct list_item$1sTypeph*)come_null_check(it_1, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_2 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_2, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional7=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional7) {
                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1sNodeph* it_3;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_3, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_4, 0, sizeof(struct list_item$1sNodeph*));
                    it_3=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional2=it_3!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional2) {
                        prev_it_4=it_3;
                        __freed_obj__ = 0;
                        it_3=((struct list_item$1sNodeph*)come_null_check(it_3, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_4 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_4, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional9=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional9) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list_item$1charph* it_5;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_6;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_5, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_6, 0, sizeof(struct list_item$1charph*));
                    it_5=((struct list$1charph*)come_null_check(self, "./comelang2.h", 169))->head;
                    __freed_obj__ = 0;
                    while(_while_condtional3=it_5!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional3) {
                        prev_it_6=it_5;
                        __freed_obj__ = 0;
                        it_5=((struct list_item$1charph*)come_null_check(it_5, "./comelang2.h", 172))->next;
                        __freed_obj__ = 0;
                        if(prev_it_6 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_6, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional12=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional12) {
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional20;
struct tuple1$1sTypeph* __result8__;
void* right_value1;
struct tuple1$1sTypeph* result_7;
_Bool _if_conditional22;
void* right_value2;
struct sType* __dec_obj1;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value2, 0, sizeof(void*));
                if(_if_conditional20=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional20) {
                    __result8__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result8__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value1=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    __dec_obj1=((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value2=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj1) { come_call_finalizer(sType_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result9__ = __result_obj__ = result_7;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result9__;
                __freed_obj__ = 0;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional21=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional21) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional26;
struct list$1sTypeph* __result10__;
void* right_value6;
void* right_value7;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional4;
void* right_value11;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value11, 0, sizeof(void*));
                if(_if_conditional26=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional26) {
                    __result10__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result10__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value7=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value6=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_9!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_8, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value11=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 192))->item)))));
                    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_9=((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result13__ = __result_obj__ = result_8;
                if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result13__;
                __freed_obj__ = 0;
                if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result11__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result11__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional27;
void* right_value8;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj5;
_Bool _if_conditional28;
void* right_value9;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj6;
void* right_value10;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj7;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value8, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value9, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value10, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional27=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional27) {
                            litem_10=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value8=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj5=((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj5) { come_call_finalizer(sType_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_10;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_10;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional28=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional28) {
                                litem_11=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value9=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_11;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_11;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_12=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value10=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_12;
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_12;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result12__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result12__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional30;
struct list$1sNodeph* __result14__;
void* right_value13;
void* right_value14;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional5;
void* right_value19;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    __result14__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value14=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value13=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value19=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { right_value19 = come_decrement_ref_count(right_value19, ((struct sNode*)right_value19)->finalize, ((struct sNode*)right_value19)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result19__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result15__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result15__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional31;
void* right_value15;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj9;
_Bool _if_conditional32;
void* right_value16;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj10;
void* right_value17;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj11;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value16, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value17, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional31=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional31) {
                            litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value15=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj9=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, ((struct sNode*)__dec_obj9)->finalize, ((struct sNode*)__dec_obj9)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional32=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional32) {
                                litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value16=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value17=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_17;
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_17;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result16__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result16__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional33;
struct sNode* __result17__;
void* right_value18;
struct sNode* result_18;
_Bool _if_conditional34;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*));
                        if(_if_conditional33=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional33) {
                            __result17__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result17__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { right_value18 = come_decrement_ref_count(right_value18, ((struct sNode*)right_value18)->finalize, ((struct sNode*)right_value18)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        if(_if_conditional34=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional34) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional35=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional36=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional36) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional37=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional39) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional40) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional41=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result18__ = __result_obj__ = result_18;
                        if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result18__;
                        __freed_obj__ = 0;
                        if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 0, 0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional45;
struct list$1charph* __result20__;
void* right_value22;
void* right_value23;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
_Bool _while_condtional6;
void* right_value27;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&right_value27, 0, sizeof(void*));
                if(_if_conditional45=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional45) {
                    __result20__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value23=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value22=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_20!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_19, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value27=string_clone(((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 192))->item)))));
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { right_value27 = come_decrement_ref_count(right_value27, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    it_20=((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result23__ = __result_obj__ = result_19;
                if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result23__;
                __freed_obj__ = 0;
                if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result21__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional46;
void* right_value24;
struct list_item$1charph* litem_21;
char* __dec_obj14;
_Bool _if_conditional47;
void* right_value25;
struct list_item$1charph* litem_22;
char* __dec_obj15;
void* right_value26;
struct list_item$1charph* litem_23;
char* __dec_obj16;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value24, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional46=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional46) {
                            litem_21=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value24=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj14=((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_21;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_21;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional47=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                litem_22=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value25=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj15=((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_22;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_22;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_23=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value26=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 228))->tail, "./comelang2.h", 228))->next=litem_23;
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 229))->tail=litem_23;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        ((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len++;
                        __freed_obj__ = 0;
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result22__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result25__ = ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result25__;
        __freed_obj__ = 0;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
unsigned int hash_32;
unsigned int it_33;
_Bool _while_condtional7;
_Bool _if_conditional90;
void* right_value39;
struct optional$2boolbool* __exception_result_var_a1;
_Bool _if_conditional92;
struct sGenericsFun* __result28__;
_Bool _if_conditional93;
_Bool _if_conditional94;
struct sGenericsFun* __result29__;
struct sGenericsFun* __result30__;
struct sGenericsFun* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_32, 0, sizeof(unsigned int));
memset(&it_33, 0, sizeof(unsigned int));
memset(&right_value39, 0, sizeof(void*));
            hash_32=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1258)))%((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1258))->size;
            __freed_obj__ = 0;
            it_33=hash_32;
            __freed_obj__ = 0;
            while(_while_condtional7=(_Bool)1,            __freed_obj__ = 0, 
            _while_condtional7) {
                if(_if_conditional90=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1281))->item_existance[it_33],                __freed_obj__ = 0, 
                _if_conditional90) {
                    if(_if_conditional92=optional$2boolbool_value((come_clear_stackframe(), come_push_stackframe("./comelang2.h", 1269),__exception_result_var_a1=((struct optional$2boolbool*)(right_value39=string_equals(((char*)come_null_check(((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1269))->keys[it_33], "./comelang2.h", 1269)),key))), come_pop_stackframe(), __exception_result_var_a1)),                    (right_value39 && right_value39 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __freed_obj__ = 0, 
                    _if_conditional92) {
                        __result28__ = __result_obj__ = ((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1266))->items[it_33];
                        __freed_obj__ = 0;
                        return __result28__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    it_33++;
                    __freed_obj__ = 0;
                    if(_if_conditional93=it_33>=((struct map$2charphsGenericsFunph*)come_null_check(self, "./comelang2.h", 1277))->size,                    __freed_obj__ = 0, 
                    _if_conditional93) {
                        it_33=0;
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional94=it_33==hash_32,                        __freed_obj__ = 0, 
                        _if_conditional94) {
                            __result29__ = __result_obj__ = default_value;
                            __freed_obj__ = 0;
                            return __result29__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                else {
                    __result30__ = __result_obj__ = default_value;
                    __freed_obj__ = 0;
                    return __result30__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result31__ = __result_obj__ = default_value;
            __freed_obj__ = 0;
            return __result31__;
            __freed_obj__ = 0;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional91;
_Bool default_value_34;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_34, 0, sizeof(_Bool));
                        if(_if_conditional91=self==((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional91) {
                            __freed_obj__ = 0;
                            memset(&default_value_34,0,sizeof(_Bool));
                            __freed_obj__ = 0;
                            __result26__ = default_value_34;
                            __freed_obj__ = 0;
                            return __result26__;
                            __freed_obj__ = 0;
                        }
                        else {
                            __result27__ = ((struct optional$2boolbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                            __freed_obj__ = 0;
                            return __result27__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional95=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mImplType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 0))->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mGenericsTypeNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 1))->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 2))->mName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional98=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional98) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 3))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional99=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional99) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 4))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional100=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional100) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 5))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional101=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mParamDefaultParametors!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional101) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 6))->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional102=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mBlock!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional102) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 7))->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional103=self!=((void*)0)&&((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 9))->mGenericsSName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional103) {
                if(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName && !__freed_obj__) { ((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName = come_decrement_ref_count(((struct sGenericsFun*)come_null_check(self, "sGenericsFun_finalize", 8))->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sFunpbool* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
struct sFun* default_value_36;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional8;
_Bool _if_conditional106;
void* right_value42;
struct optional$2boolbool* __exception_result_var_b1;
_Bool _if_conditional107;
void* right_value43;
void* right_value44;
struct optional$2sFunpbool* __result34__;
_Bool _if_conditional108;
_Bool _if_conditional109;
void* right_value45;
void* right_value46;
struct optional$2sFunpbool* __result35__;
void* right_value47;
void* right_value48;
struct optional$2sFunpbool* __result36__;
void* right_value49;
void* right_value50;
struct optional$2sFunpbool* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_36, 0, sizeof(struct sFun*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
                __freed_obj__ = 0;
                memset(&default_value_36,0,sizeof(struct sFun*));
                __freed_obj__ = 0;
                hash_37=string_get_hash_key(((char*)come_null_check(((char*)key), "./comelang2.h", 1584)))%((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1584))->size;
                __freed_obj__ = 0;
                it_38=hash_37;
                __freed_obj__ = 0;
                while(_while_condtional8=(_Bool)1,                __freed_obj__ = 0, 
                _while_condtional8) {
                    if(_if_conditional106=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1607))->item_existance[it_38],                    __freed_obj__ = 0, 
                    _if_conditional106) {
                        if(_if_conditional107=optional$2boolbool_value((come_push_stackframe("./comelang2.h", 1595),__exception_result_var_b1=((struct optional$2boolbool*)(right_value42=string_equals(((char*)come_null_check(((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1595))->keys[it_38], "./comelang2.h", 1595)),key))), come_pop_stackframe(), __exception_result_var_b1)),                        (right_value42 && right_value42 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __freed_obj__ = 0, 
                        _if_conditional107) {
                            __result34__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value44=optional$2sFunpbool_initialize((struct optional$2sFunpbool*)come_increment_ref_count(((struct optional$2sFunpbool*)(right_value43=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1592)))),((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1592))->items[it_38],(_Bool)1)));
                            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result34__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        it_38++;
                        __freed_obj__ = 0;
                        if(_if_conditional108=it_38>=((struct map$2charphsFunph*)come_null_check(self, "./comelang2.h", 1603))->size,                        __freed_obj__ = 0, 
                        _if_conditional108) {
                            it_38=0;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional109=it_38==hash_37,                            __freed_obj__ = 0, 
                            _if_conditional109) {
                                __result35__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1601), ((struct optional$2sFunpbool*)(right_value46=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value45=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1601))),default_value_36,(_Bool)0))));
                                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
                                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result35__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                    }
                    else {
                        __result36__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1605), ((struct optional$2sFunpbool*)(right_value48=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value47=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1605))),default_value_36,(_Bool)0))));
                        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
                        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value48, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result36__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result37__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 1609), ((struct optional$2sFunpbool*)(right_value50=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value49=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1609))),default_value_36,(_Bool)0))));
                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result37__;
                __freed_obj__ = 0;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2sFunpbool* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                                __freed_obj__ = 0;
                                ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                                __freed_obj__ = 0;
                                __result33__ = __result_obj__ = self;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result33__;
                                __freed_obj__ = 0;
                                if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* optional$2sFunpbool_value(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional110;
struct sFun* default_value_39;
struct sFun* __result38__;
struct sFun* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(struct sFun*));
                if(_if_conditional110=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional110) {
                    __freed_obj__ = 0;
                    memset(&default_value_39,0,sizeof(struct sFun*));
                    __freed_obj__ = 0;
                    __result38__ = __result_obj__ = default_value_39;
                    __freed_obj__ = 0;
                    return __result38__;
                    __freed_obj__ = 0;
                }
                else {
                    __result39__ = __result_obj__ = ((struct optional$2sFunpbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result39__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional112;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional112=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 1))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional112) {
                        if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional117;
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional117=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional117) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional118=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional118) {
                if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct optional$2sTypephbool* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional119;
struct list_item$1sTypeph* it_53;
int i_54;
_Bool _while_condtional9;
_Bool _if_conditional120;
void* right_value65;
void* right_value66;
struct optional$2sTypephbool* __result41__;
struct sType* default_value_55;
void* right_value67;
void* right_value68;
struct optional$2sTypephbool* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_53, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_54, 0, sizeof(int));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value66, 0, sizeof(void*));
memset(&default_value_55, 0, sizeof(struct sType*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
            if(_if_conditional119=position<0,            __freed_obj__ = 0, 
            _if_conditional119) {
                position+=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_53=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_54=0;
            __freed_obj__ = 0;
            while(_while_condtional9=it_53!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional9) {
                if(_if_conditional120=position==i_54,                __freed_obj__ = 0, 
                _if_conditional120) {
                    __result41__ = __result_obj__ = ((struct optional$2sTypephbool*)(right_value66=optional$2sTypephbool_initialize((struct optional$2sTypephbool*)come_increment_ref_count(((struct optional$2sTypephbool*)(right_value65=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 742)))),(struct sType*)come_increment_ref_count(((struct list_item$1sTypeph*)come_null_check(it_53, "./comelang2.h", 742))->item),(_Bool)1)));
                    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result41__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_53=((struct list_item$1sTypeph*)come_null_check(it_53, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_54++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_55,0,sizeof(struct sType*));
            __freed_obj__ = 0;
            __result42__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2sTypephbool*)(right_value68=optional$2sTypephbool_initialize(((struct optional$2sTypephbool*)(right_value67=(struct optional$2sTypephbool*)come_calloc(1, sizeof(struct optional$2sTypephbool)*(1), "./comelang2.h", 750))),(struct sType*)come_increment_ref_count(default_value_55),(_Bool)0))));
            if(default_value_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result42__;
            __freed_obj__ = 0;
            if(default_value_55 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sTypephbool* optional$2sTypephbool_initialize(struct optional$2sTypephbool* self, struct sType* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sType* __dec_obj27;
struct optional$2sTypephbool* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj27=((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sType*)come_increment_ref_count(v1);
                        if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result40__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result40__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2sTypephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sTypephboolp_finalize(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional121;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional121=self!=((void*)0)&&((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional121) {
                                if(((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct optional$2sTypephbool*)come_null_check(self, "optional$2sTypephboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sType* optional$2sTypephbool_value(struct optional$2sTypephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional122;
struct sType* default_value_56;
struct sType* __result43__;
struct sType* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_56, 0, sizeof(struct sType*));
            if(_if_conditional122=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional122) {
                __freed_obj__ = 0;
                memset(&default_value_56,0,sizeof(struct sType*));
                __freed_obj__ = 0;
                __result43__ = __result_obj__ = default_value_56;
                __freed_obj__ = 0;
                return __result43__;
                __freed_obj__ = 0;
            }
            else {
                __result44__ = __result_obj__ = ((struct optional$2sTypephbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result44__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional137;
void* right_value93;
struct list_item$1CVALUEph* litem_60;
struct CVALUE* __dec_obj46;
_Bool _if_conditional139;
void* right_value94;
struct list_item$1CVALUEph* litem_61;
struct CVALUE* __dec_obj47;
void* right_value95;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj48;
struct list$1CVALUEph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&litem_60, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value94, 0, sizeof(void*));
memset(&litem_61, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value95, 0, sizeof(void*));
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional137=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,            __freed_obj__ = 0, 
            _if_conditional137) {
                litem_60=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value93=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
                if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 274))->prev=((void*)0);
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 275))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj46=((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 276))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_60, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj46) { come_call_finalizer(CVALUE_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_60;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_60;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional139=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,                __freed_obj__ = 0, 
                _if_conditional139) {
                    litem_61=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value94=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 285))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj47=((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 286))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_61, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj47) { come_call_finalizer(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_61;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_61;
                    __freed_obj__ = 0;
                }
                else {
                    litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value95=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 295))->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj48=((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 296))->item;
                    ((struct list_item$1CVALUEph*)come_null_check(litem_62, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj48) { come_call_finalizer(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_62;
                    __freed_obj__ = 0;
                    ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_62;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
            __freed_obj__ = 0;
            __result45__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result45__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional138;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional138=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional138) {
                        if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value96;
char* __dec_obj49;
struct sNullNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    ((struct sNullNode*)come_null_check(self, "13op.c", 182))->sline=((struct sInfo*)come_null_check(info, "13op.c", 182))->sline;
    __freed_obj__ = 0;
    __dec_obj49=((struct sNullNode*)come_null_check(self, "13op.c", 183))->sname;
    ((struct sNullNode*)come_null_check(self, "13op.c", 183))->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 183))->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result47__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result48__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}

char* sNullNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value97;
char* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value97, 0, sizeof(void*));
    __result49__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sNullNode")));
    __freed_obj__ = 0;
    return __result49__;
    __freed_obj__ = 0;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value98;
struct CVALUE* come_value_63;
void* right_value99;
char* __dec_obj50;
void* right_value100;
void* right_value101;
struct sType* __dec_obj51;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value98, 0, sizeof(void*));
memset(&come_value_63, 0, sizeof(struct CVALUE*));
memset(&right_value99, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    come_value_63=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 200))));
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj50=((struct CVALUE*)come_null_check(come_value_63, "13op.c", 202))->c_value;
    ((struct CVALUE*)come_null_check(come_value_63, "13op.c", 202))->c_value=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("((void*)0)"))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_63, "13op.c", 203))->type;
    ((struct CVALUE*)come_null_check(come_value_63, "13op.c", 203))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 203)))),"void*",(_Bool)0,info))));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_63, "13op.c", 204))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_63, "13op.c", 206))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 208))->stack, "13op.c", 208)),(struct CVALUE*)come_increment_ref_count(come_value_63));
    __freed_obj__ = 0;
    __result50__ = (_Bool)1;
    if(come_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
    if(come_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result51__ = ((struct sNullNode*)come_null_check(self, "13op.c", 215))->sline;
    __freed_obj__ = 0;
    return __result51__;
    __freed_obj__ = 0;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value102;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result52__ = __result_obj__ = ((char*)(right_value102=__builtin_string(((struct sNullNode*)come_null_check(self, "13op.c", 220))->sname)));
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value103;
void* right_value104;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value107;
struct sNode* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 225);
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value104=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value103=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 225)))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result55__ = __result_obj__ = ((struct sNode*)(right_value107=_inf_value1));
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value108;
char* __dec_obj53;
struct sNilNode* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
    ((struct sNilNode*)come_null_check(self, "13op.c", 237))->sline=((struct sInfo*)come_null_check(info, "13op.c", 237))->sline;
    __freed_obj__ = 0;
    __dec_obj53=((struct sNilNode*)come_null_check(self, "13op.c", 238))->sname;
    ((struct sNilNode*)come_null_check(self, "13op.c", 238))->sname=(char*)come_increment_ref_count(((char*)(right_value108=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 238))->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __result56__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNilNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result57__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result57__;
    __freed_obj__ = 0;
}

char* sNilNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value109;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
    __result58__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sNilNode")));
    __freed_obj__ = 0;
    return __result58__;
    __freed_obj__ = 0;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value110;
struct CVALUE* come_value_65;
void* right_value111;
char* __dec_obj54;
void* right_value112;
void* right_value113;
struct sType* __dec_obj55;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value110, 0, sizeof(void*));
memset(&come_value_65, 0, sizeof(struct CVALUE*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
memset(&right_value113, 0, sizeof(void*));
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 255))));
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj54=((struct CVALUE*)come_null_check(come_value_65, "13op.c", 257))->c_value;
    ((struct CVALUE*)come_null_check(come_value_65, "13op.c", 257))->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("((void*)0)"))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj55=((struct CVALUE*)come_null_check(come_value_65, "13op.c", 258))->type;
    ((struct CVALUE*)come_null_check(come_value_65, "13op.c", 258))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 258)))),"void*",(_Bool)0,info))));
    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_65, "13op.c", 259))->type, "13op.c", 259))->mNullValue=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_65, "13op.c", 260))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_65, "13op.c", 262))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 264))->stack, "13op.c", 264)),(struct CVALUE*)come_increment_ref_count(come_value_65));
    __freed_obj__ = 0;
    __result59__ = (_Bool)1;
    if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
    if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result60__ = ((struct sNilNode*)come_null_check(self, "13op.c", 271))->sline;
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value114;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value114, 0, sizeof(void*));
    __result61__ = __result_obj__ = ((char*)(right_value114=__builtin_string(((struct sNilNode*)come_null_check(self, "13op.c", 276))->sname)));
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value120;
char* __dec_obj57;
void* right_value121;
struct sNode* __dec_obj58;
void* right_value122;
struct sNode* __dec_obj59;
struct sAddNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
    ((struct sAddNode*)come_null_check(self, "13op.c", 298))->sline=((struct sInfo*)come_null_check(info, "13op.c", 298))->sline;
    __freed_obj__ = 0;
    __dec_obj57=((struct sAddNode*)come_null_check(self, "13op.c", 299))->sname;
    ((struct sAddNode*)come_null_check(self, "13op.c", 299))->sname=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 299))->sname))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj58=((struct sAddNode*)come_null_check(self, "13op.c", 301))->mLeft;
    ((struct sAddNode*)come_null_check(self, "13op.c", 301))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value121=sNode_clone(left))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { right_value121 = come_decrement_ref_count(right_value121, ((struct sNode*)right_value121)->finalize, ((struct sNode*)right_value121)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj59=((struct sAddNode*)come_null_check(self, "13op.c", 302))->mRight;
    ((struct sAddNode*)come_null_check(self, "13op.c", 302))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value122=sNode_clone(right))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0); }
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, ((struct sNode*)right_value122)->finalize, ((struct sNode*)right_value122)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sAddNode*)come_null_check(self, "13op.c", 303))->mQuote=quote;
    __freed_obj__ = 0;
    __result65__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result66__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

char* sAddNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value123;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
    __result67__ = __result_obj__ = ((char*)(right_value123=__builtin_string("sAddNode")));
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_67;
_Bool _if_conditional153;
_Bool __result68__;
void* right_value124;
struct CVALUE* left_value_68;
struct sNode* right_node_69;
_Bool _if_conditional154;
_Bool __result69__;
void* right_value125;
struct CVALUE* right_value_70;
struct sType* type_71;
char* fun_name_72;
_Bool calling_fun_73;
_Bool _if_conditional155;
_Bool _if_conditional156;
void* right_value126;
struct CVALUE* come_value_74;
void* right_value127;
char* __dec_obj60;
void* right_value128;
struct sType* __dec_obj61;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_67, 0, sizeof(struct sNode*));
memset(&right_value124, 0, sizeof(void*));
memset(&left_value_68, 0, sizeof(struct CVALUE*));
memset(&right_node_69, 0, sizeof(struct sNode*));
memset(&right_value125, 0, sizeof(void*));
memset(&right_value_70, 0, sizeof(struct CVALUE*));
memset(&type_71, 0, sizeof(struct sType*));
memset(&fun_name_72, 0, sizeof(char*));
memset(&calling_fun_73, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&come_value_74, 0, sizeof(struct CVALUE*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
    left_node_67=((struct sAddNode*)come_null_check(self, "13op.c", 321))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional153=!((struct sNode*)come_null_check(left_node_67, "13op.c", 327))->compile(((struct sNode*)come_null_check(left_node_67, "13op.c", 327))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional153) {
        __result68__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result68__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value124=get_value_from_stack(-1,info))));
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_69=((struct sAddNode*)come_null_check(self, "13op.c", 330))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional154=!((struct sNode*)come_null_check(right_node_69, "13op.c", 336))->compile(((struct sNode*)come_null_check(right_node_69, "13op.c", 336))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional154) {
        __result69__ = (_Bool)0;
        if(left_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result69__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=get_value_from_stack(-1,info))));
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_71=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_68, "13op.c", 339))->type);
    __freed_obj__ = 0;
    fun_name_72="operator_add";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional155=((struct sAddNode*)come_null_check(self, "13op.c", 350))->mQuote,    __freed_obj__ = 0, 
    _if_conditional155) {
        calling_fun_73=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_73=operator_overload_fun(type_71,fun_name_72,left_value_68,right_value_70,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional156=!calling_fun_73,    __freed_obj__ = 0, 
    _if_conditional156) {
        come_value_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value126=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 351))));
        if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj60=((struct CVALUE*)come_null_check(come_value_74, "13op.c", 353))->c_value;
        ((struct CVALUE*)come_null_check(come_value_74, "13op.c", 353))->c_value=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("%s+%s",((struct CVALUE*)come_null_check(left_value_68, "13op.c", 353))->c_value,((struct CVALUE*)come_null_check(right_value_70, "13op.c", 353))->c_value))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj61=((struct CVALUE*)come_null_check(come_value_74, "13op.c", 354))->type;
        ((struct CVALUE*)come_null_check(come_value_74, "13op.c", 354))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(((struct CVALUE*)come_null_check(left_value_68, "13op.c", 354))->type))));
        if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_74, "13op.c", 355))->type, "13op.c", 355))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_74, "13op.c", 356))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_74, "13op.c", 358))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 360))->stack, "13op.c", 360)),(struct CVALUE*)come_increment_ref_count(come_value_74));
        __freed_obj__ = 0;
        if(come_value_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result70__ = (_Bool)1;
    if(left_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
    if(left_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_71 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_71, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = ((struct sAddNode*)come_null_check(self, "13op.c", 368))->sline;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value129;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
    __result72__ = __result_obj__ = ((char*)(right_value129=__builtin_string(((struct sAddNode*)come_null_check(self, "13op.c", 373))->sname)));
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value130;
char* __dec_obj62;
void* right_value131;
struct sNode* __dec_obj63;
void* right_value132;
struct sNode* __dec_obj64;
struct sSubNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value132, 0, sizeof(void*));
    ((struct sSubNode*)come_null_check(self, "13op.c", 389))->sline=((struct sInfo*)come_null_check(info, "13op.c", 389))->sline;
    __freed_obj__ = 0;
    __dec_obj62=((struct sSubNode*)come_null_check(self, "13op.c", 390))->sname;
    ((struct sSubNode*)come_null_check(self, "13op.c", 390))->sname=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 390))->sname))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj63=((struct sSubNode*)come_null_check(self, "13op.c", 392))->mLeft;
    ((struct sSubNode*)come_null_check(self, "13op.c", 392))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=sNode_clone(left))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { right_value131 = come_decrement_ref_count(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj64=((struct sSubNode*)come_null_check(self, "13op.c", 393))->mRight;
    ((struct sSubNode*)come_null_check(self, "13op.c", 393))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value132=sNode_clone(right))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, ((struct sNode*)right_value132)->finalize, ((struct sNode*)right_value132)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    ((struct sSubNode*)come_null_check(self, "13op.c", 394))->mQuote=quote;
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

char* sSubNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value133;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value133=__builtin_string("sSubNode")));
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_75;
_Bool _if_conditional160;
_Bool __result76__;
void* right_value134;
struct CVALUE* left_value_76;
struct sNode* right_node_77;
_Bool _if_conditional161;
_Bool __result77__;
void* right_value135;
struct CVALUE* right_value_78;
struct sType* type_79;
char* fun_name_80;
_Bool calling_fun_81;
_Bool _if_conditional162;
_Bool _if_conditional163;
void* right_value136;
struct CVALUE* come_value_82;
void* right_value137;
char* __dec_obj65;
void* right_value138;
struct sType* __dec_obj66;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_75, 0, sizeof(struct sNode*));
memset(&right_value134, 0, sizeof(void*));
memset(&left_value_76, 0, sizeof(struct CVALUE*));
memset(&right_node_77, 0, sizeof(struct sNode*));
memset(&right_value135, 0, sizeof(void*));
memset(&right_value_78, 0, sizeof(struct CVALUE*));
memset(&type_79, 0, sizeof(struct sType*));
memset(&fun_name_80, 0, sizeof(char*));
memset(&calling_fun_81, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&come_value_82, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    left_node_75=((struct sSubNode*)come_null_check(self, "13op.c", 412))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional160=!((struct sNode*)come_null_check(left_node_75, "13op.c", 418))->compile(((struct sNode*)come_null_check(left_node_75, "13op.c", 418))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional160) {
        __result76__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result76__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=get_value_from_stack(-1,info))));
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_77=((struct sSubNode*)come_null_check(self, "13op.c", 421))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional161=!((struct sNode*)come_null_check(right_node_77, "13op.c", 427))->compile(((struct sNode*)come_null_check(right_node_77, "13op.c", 427))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional161) {
        __result77__ = (_Bool)0;
        if(left_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result77__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=get_value_from_stack(-1,info))));
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_79=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_76, "13op.c", 430))->type);
    __freed_obj__ = 0;
    fun_name_80="operator_sub";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional162=((struct sSubNode*)come_null_check(self, "13op.c", 441))->mQuote,    __freed_obj__ = 0, 
    _if_conditional162) {
        calling_fun_81=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_81=operator_overload_fun(type_79,fun_name_80,left_value_76,right_value_78,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional163=!calling_fun_81,    __freed_obj__ = 0, 
    _if_conditional163) {
        come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 442))));
        if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj65=((struct CVALUE*)come_null_check(come_value_82, "13op.c", 444))->c_value;
        ((struct CVALUE*)come_null_check(come_value_82, "13op.c", 444))->c_value=(char*)come_increment_ref_count(((char*)(right_value137=xsprintf("%s-%s",((struct CVALUE*)come_null_check(left_value_76, "13op.c", 444))->c_value,((struct CVALUE*)come_null_check(right_value_78, "13op.c", 444))->c_value))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
        if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj66=((struct CVALUE*)come_null_check(come_value_82, "13op.c", 445))->type;
        ((struct CVALUE*)come_null_check(come_value_82, "13op.c", 445))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(((struct CVALUE*)come_null_check(left_value_76, "13op.c", 445))->type))));
        if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_82, "13op.c", 446))->type, "13op.c", 446))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_82, "13op.c", 447))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_82, "13op.c", 449))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 451))->stack, "13op.c", 451)),(struct CVALUE*)come_increment_ref_count(come_value_82));
        __freed_obj__ = 0;
        if(come_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result78__ = (_Bool)1;
    if(left_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(left_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_79 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_79, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = ((struct sSubNode*)come_null_check(self, "13op.c", 459))->sline;
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value139;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
    __result80__ = __result_obj__ = ((char*)(right_value139=__builtin_string(((struct sSubNode*)come_null_check(self, "13op.c", 464))->sname)));
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value140;
char* __dec_obj67;
void* right_value141;
struct sNode* __dec_obj68;
void* right_value142;
struct sNode* __dec_obj69;
struct sMultNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value142, 0, sizeof(void*));
    ((struct sMultNode*)come_null_check(self, "13op.c", 480))->sline=((struct sInfo*)come_null_check(info, "13op.c", 480))->sline;
    __freed_obj__ = 0;
    __dec_obj67=((struct sMultNode*)come_null_check(self, "13op.c", 481))->sname;
    ((struct sMultNode*)come_null_check(self, "13op.c", 481))->sname=(char*)come_increment_ref_count(((char*)(right_value140=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 481))->sname))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sMultNode*)come_null_check(self, "13op.c", 483))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj68=((struct sMultNode*)come_null_check(self, "13op.c", 484))->mLeft;
    ((struct sMultNode*)come_null_check(self, "13op.c", 484))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value141=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0); }
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { right_value141 = come_decrement_ref_count(right_value141, ((struct sNode*)right_value141)->finalize, ((struct sNode*)right_value141)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj69=((struct sMultNode*)come_null_check(self, "13op.c", 485))->mRight;
    ((struct sMultNode*)come_null_check(self, "13op.c", 485))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result81__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMultNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
}

char* sMultNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value143;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sMultNode")));
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_83;
_Bool _if_conditional167;
_Bool __result84__;
void* right_value144;
struct CVALUE* left_value_84;
struct sNode* right_node_85;
_Bool _if_conditional168;
_Bool __result85__;
void* right_value145;
struct CVALUE* right_value_86;
struct sType* type_87;
char* fun_name_88;
_Bool calling_fun_89;
_Bool _if_conditional169;
_Bool _if_conditional170;
void* right_value146;
struct CVALUE* come_value_90;
void* right_value147;
char* __dec_obj70;
void* right_value148;
struct sType* __dec_obj71;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_83, 0, sizeof(struct sNode*));
memset(&right_value144, 0, sizeof(void*));
memset(&left_value_84, 0, sizeof(struct CVALUE*));
memset(&right_node_85, 0, sizeof(struct sNode*));
memset(&right_value145, 0, sizeof(void*));
memset(&right_value_86, 0, sizeof(struct CVALUE*));
memset(&type_87, 0, sizeof(struct sType*));
memset(&fun_name_88, 0, sizeof(char*));
memset(&calling_fun_89, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&come_value_90, 0, sizeof(struct CVALUE*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
    left_node_83=((struct sMultNode*)come_null_check(self, "13op.c", 503))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional167=!((struct sNode*)come_null_check(left_node_83, "13op.c", 509))->compile(((struct sNode*)come_null_check(left_node_83, "13op.c", 509))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional167) {
        __result84__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result84__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=get_value_from_stack(-1,info))));
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_85=((struct sMultNode*)come_null_check(self, "13op.c", 512))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional168=!((struct sNode*)come_null_check(right_node_85, "13op.c", 518))->compile(((struct sNode*)come_null_check(right_node_85, "13op.c", 518))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional168) {
        __result85__ = (_Bool)0;
        if(left_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result85__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value145=get_value_from_stack(-1,info))));
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_87=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_84, "13op.c", 521))->type);
    __freed_obj__ = 0;
    fun_name_88="operator_mult";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional169=((struct sMultNode*)come_null_check(self, "13op.c", 532))->mQuote,    __freed_obj__ = 0, 
    _if_conditional169) {
        calling_fun_89=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_89=operator_overload_fun(type_87,fun_name_88,left_value_84,right_value_86,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional170=!calling_fun_89,    __freed_obj__ = 0, 
    _if_conditional170) {
        come_value_90=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 533))));
        if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj70=((struct CVALUE*)come_null_check(come_value_90, "13op.c", 535))->c_value;
        ((struct CVALUE*)come_null_check(come_value_90, "13op.c", 535))->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("%s*%s",((struct CVALUE*)come_null_check(left_value_84, "13op.c", 535))->c_value,((struct CVALUE*)come_null_check(right_value_86, "13op.c", 535))->c_value))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj71=((struct CVALUE*)come_null_check(come_value_90, "13op.c", 536))->type;
        ((struct CVALUE*)come_null_check(come_value_90, "13op.c", 536))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value148=sType_clone(((struct CVALUE*)come_null_check(left_value_84, "13op.c", 536))->type))));
        if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_90, "13op.c", 537))->type, "13op.c", 537))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_90, "13op.c", 538))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_90, "13op.c", 540))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 542))->stack, "13op.c", 542)),(struct CVALUE*)come_increment_ref_count(come_value_90));
        __freed_obj__ = 0;
        if(come_value_90 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result86__ = (_Bool)1;
    if(left_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_86 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
    if(left_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_86 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result87__ = ((struct sMultNode*)come_null_check(self, "13op.c", 550))->sline;
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value149;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
    __result88__ = __result_obj__ = ((char*)(right_value149=__builtin_string(((struct sMultNode*)come_null_check(self, "13op.c", 555))->sname)));
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value150;
char* __dec_obj72;
void* right_value151;
struct sNode* __dec_obj73;
void* right_value152;
struct sNode* __dec_obj74;
struct sDivNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
    ((struct sDivNode*)come_null_check(self, "13op.c", 571))->sline=((struct sInfo*)come_null_check(info, "13op.c", 571))->sline;
    __freed_obj__ = 0;
    __dec_obj72=((struct sDivNode*)come_null_check(self, "13op.c", 572))->sname;
    ((struct sDivNode*)come_null_check(self, "13op.c", 572))->sname=(char*)come_increment_ref_count(((char*)(right_value150=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 572))->sname))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sDivNode*)come_null_check(self, "13op.c", 574))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj73=((struct sDivNode*)come_null_check(self, "13op.c", 575))->mLeft;
    ((struct sDivNode*)come_null_check(self, "13op.c", 575))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value151=sNode_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0); }
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { right_value151 = come_decrement_ref_count(right_value151, ((struct sNode*)right_value151)->finalize, ((struct sNode*)right_value151)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj74=((struct sDivNode*)come_null_check(self, "13op.c", 576))->mRight;
    ((struct sDivNode*)come_null_check(self, "13op.c", 576))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value152=sNode_clone(right))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0); }
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, ((struct sNode*)right_value152)->finalize, ((struct sNode*)right_value152)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result89__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sDivNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result90__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

char* sDivNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value153;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value153, 0, sizeof(void*));
    __result91__ = __result_obj__ = ((char*)(right_value153=__builtin_string("sDivNode")));
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_91;
_Bool _if_conditional174;
_Bool __result92__;
void* right_value154;
struct CVALUE* left_value_92;
struct sNode* right_node_93;
_Bool _if_conditional175;
_Bool __result93__;
void* right_value155;
struct CVALUE* right_value_94;
struct sType* type_95;
char* fun_name_96;
_Bool calling_fun_97;
_Bool _if_conditional176;
_Bool _if_conditional177;
void* right_value156;
struct CVALUE* come_value_98;
void* right_value157;
char* __dec_obj75;
void* right_value158;
struct sType* __dec_obj76;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_91, 0, sizeof(struct sNode*));
memset(&right_value154, 0, sizeof(void*));
memset(&left_value_92, 0, sizeof(struct CVALUE*));
memset(&right_node_93, 0, sizeof(struct sNode*));
memset(&right_value155, 0, sizeof(void*));
memset(&right_value_94, 0, sizeof(struct CVALUE*));
memset(&type_95, 0, sizeof(struct sType*));
memset(&fun_name_96, 0, sizeof(char*));
memset(&calling_fun_97, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
memset(&come_value_98, 0, sizeof(struct CVALUE*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    left_node_91=((struct sDivNode*)come_null_check(self, "13op.c", 594))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional174=!((struct sNode*)come_null_check(left_node_91, "13op.c", 600))->compile(((struct sNode*)come_null_check(left_node_91, "13op.c", 600))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional174) {
        __result92__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result92__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=get_value_from_stack(-1,info))));
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_93=((struct sDivNode*)come_null_check(self, "13op.c", 603))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional175=!((struct sNode*)come_null_check(right_node_93, "13op.c", 609))->compile(((struct sNode*)come_null_check(right_node_93, "13op.c", 609))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional175) {
        __result93__ = (_Bool)0;
        if(left_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result93__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=get_value_from_stack(-1,info))));
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_95=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_92, "13op.c", 612))->type);
    __freed_obj__ = 0;
    fun_name_96="operator_div";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional176=((struct sDivNode*)come_null_check(self, "13op.c", 623))->mQuote,    __freed_obj__ = 0, 
    _if_conditional176) {
        calling_fun_97=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_97=operator_overload_fun(type_95,fun_name_96,left_value_92,right_value_94,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional177=!calling_fun_97,    __freed_obj__ = 0, 
    _if_conditional177) {
        come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 624))));
        if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj75=((struct CVALUE*)come_null_check(come_value_98, "13op.c", 626))->c_value;
        ((struct CVALUE*)come_null_check(come_value_98, "13op.c", 626))->c_value=(char*)come_increment_ref_count(((char*)(right_value157=xsprintf("%s/%s",((struct CVALUE*)come_null_check(left_value_92, "13op.c", 626))->c_value,((struct CVALUE*)come_null_check(right_value_94, "13op.c", 626))->c_value))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj76=((struct CVALUE*)come_null_check(come_value_98, "13op.c", 627))->type;
        ((struct CVALUE*)come_null_check(come_value_98, "13op.c", 627))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value158=sType_clone(((struct CVALUE*)come_null_check(left_value_92, "13op.c", 627))->type))));
        if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_98, "13op.c", 628))->type, "13op.c", 628))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_98, "13op.c", 629))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_98, "13op.c", 631))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 633))->stack, "13op.c", 633)),(struct CVALUE*)come_increment_ref_count(come_value_98));
        __freed_obj__ = 0;
        if(come_value_98 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result94__ = (_Bool)1;
    if(left_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(left_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_95, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result95__ = ((struct sDivNode*)come_null_check(self, "13op.c", 641))->sline;
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value159;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
    __result96__ = __result_obj__ = ((char*)(right_value159=__builtin_string(((struct sDivNode*)come_null_check(self, "13op.c", 646))->sname)));
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value160;
char* __dec_obj77;
void* right_value161;
struct sNode* __dec_obj78;
void* right_value162;
struct sNode* __dec_obj79;
struct sModNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
    ((struct sModNode*)come_null_check(self, "13op.c", 662))->sline=((struct sInfo*)come_null_check(info, "13op.c", 662))->sline;
    __freed_obj__ = 0;
    __dec_obj77=((struct sModNode*)come_null_check(self, "13op.c", 663))->sname;
    ((struct sModNode*)come_null_check(self, "13op.c", 663))->sname=(char*)come_increment_ref_count(((char*)(right_value160=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 663))->sname))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sModNode*)come_null_check(self, "13op.c", 665))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj78=((struct sModNode*)come_null_check(self, "13op.c", 666))->mLeft;
    ((struct sModNode*)come_null_check(self, "13op.c", 666))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value161=sNode_clone(left))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0); }
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj79=((struct sModNode*)come_null_check(self, "13op.c", 667))->mRight;
    ((struct sModNode*)come_null_check(self, "13op.c", 667))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value162=sNode_clone(right))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0); }
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, ((struct sNode*)right_value162)->finalize, ((struct sNode*)right_value162)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result97__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sModNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result98__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
}

char* sModNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value163;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    __result99__ = __result_obj__ = ((char*)(right_value163=__builtin_string("sModNode")));
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_99;
_Bool _if_conditional181;
_Bool __result100__;
void* right_value164;
struct CVALUE* left_value_100;
struct sNode* right_node_101;
_Bool _if_conditional182;
_Bool __result101__;
void* right_value165;
struct CVALUE* right_value_102;
struct sType* type_103;
char* fun_name_104;
_Bool calling_fun_105;
_Bool _if_conditional183;
_Bool _if_conditional184;
void* right_value166;
struct CVALUE* come_value_106;
void* right_value167;
char* __dec_obj80;
void* right_value168;
struct sType* __dec_obj81;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_99, 0, sizeof(struct sNode*));
memset(&right_value164, 0, sizeof(void*));
memset(&left_value_100, 0, sizeof(struct CVALUE*));
memset(&right_node_101, 0, sizeof(struct sNode*));
memset(&right_value165, 0, sizeof(void*));
memset(&right_value_102, 0, sizeof(struct CVALUE*));
memset(&type_103, 0, sizeof(struct sType*));
memset(&fun_name_104, 0, sizeof(char*));
memset(&calling_fun_105, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
memset(&come_value_106, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
    left_node_99=((struct sModNode*)come_null_check(self, "13op.c", 685))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional181=!((struct sNode*)come_null_check(left_node_99, "13op.c", 691))->compile(((struct sNode*)come_null_check(left_node_99, "13op.c", 691))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional181) {
        __result100__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result100__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value164=get_value_from_stack(-1,info))));
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_101=((struct sModNode*)come_null_check(self, "13op.c", 694))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional182=!((struct sNode*)come_null_check(right_node_101, "13op.c", 700))->compile(((struct sNode*)come_null_check(right_node_101, "13op.c", 700))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional182) {
        __result101__ = (_Bool)0;
        if(left_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result101__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=get_value_from_stack(-1,info))));
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_103=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_100, "13op.c", 703))->type);
    __freed_obj__ = 0;
    fun_name_104="operator_mod";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional183=((struct sModNode*)come_null_check(self, "13op.c", 714))->mQuote,    __freed_obj__ = 0, 
    _if_conditional183) {
        calling_fun_105=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_105=operator_overload_fun(type_103,fun_name_104,left_value_100,right_value_102,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional184=!calling_fun_105,    __freed_obj__ = 0, 
    _if_conditional184) {
        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 715))));
        if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj80=((struct CVALUE*)come_null_check(come_value_106, "13op.c", 717))->c_value;
        ((struct CVALUE*)come_null_check(come_value_106, "13op.c", 717))->c_value=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%s%%%s",((struct CVALUE*)come_null_check(left_value_100, "13op.c", 717))->c_value,((struct CVALUE*)come_null_check(right_value_102, "13op.c", 717))->c_value))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj81=((struct CVALUE*)come_null_check(come_value_106, "13op.c", 718))->type;
        ((struct CVALUE*)come_null_check(come_value_106, "13op.c", 718))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value168=sType_clone(((struct CVALUE*)come_null_check(left_value_100, "13op.c", 718))->type))));
        if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_106, "13op.c", 719))->type, "13op.c", 719))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_106, "13op.c", 720))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_106, "13op.c", 722))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 724))->stack, "13op.c", 724)),(struct CVALUE*)come_increment_ref_count(come_value_106));
        __freed_obj__ = 0;
        if(come_value_106 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result102__ = (_Bool)1;
    if(left_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
    if(left_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_103 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result103__ = ((struct sModNode*)come_null_check(self, "13op.c", 732))->sline;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value169;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
    __result104__ = __result_obj__ = ((char*)(right_value169=__builtin_string(((struct sModNode*)come_null_check(self, "13op.c", 737))->sname)));
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value170;
char* __dec_obj82;
void* right_value171;
struct sNode* __dec_obj83;
void* right_value172;
struct sNode* __dec_obj84;
struct sLShiftNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value172, 0, sizeof(void*));
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 753))->sline=((struct sInfo*)come_null_check(info, "13op.c", 753))->sline;
    __freed_obj__ = 0;
    __dec_obj82=((struct sLShiftNode*)come_null_check(self, "13op.c", 754))->sname;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 754))->sname=(char*)come_increment_ref_count(((char*)(right_value170=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 754))->sname))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 755))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj83=((struct sLShiftNode*)come_null_check(self, "13op.c", 757))->mLeft;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 757))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value171=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, ((struct sNode*)right_value171)->finalize, ((struct sNode*)right_value171)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj84=((struct sLShiftNode*)come_null_check(self, "13op.c", 758))->mRight;
    ((struct sLShiftNode*)come_null_check(self, "13op.c", 758))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value172=sNode_clone(right))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, ((struct sNode*)right_value172)->finalize, ((struct sNode*)right_value172)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result105__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLShiftNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result106__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result106__;
    __freed_obj__ = 0;
}

char* sLShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value173;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
    __result107__ = __result_obj__ = ((char*)(right_value173=__builtin_string("sLShiftNode")));
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_107;
_Bool _if_conditional188;
_Bool __result108__;
void* right_value174;
struct CVALUE* left_value_108;
struct sNode* right_node_109;
_Bool _if_conditional189;
_Bool __result109__;
void* right_value175;
struct CVALUE* right_value_110;
struct sType* type_111;
char* fun_name_112;
_Bool calling_fun_113;
_Bool _if_conditional190;
_Bool _if_conditional191;
void* right_value176;
struct CVALUE* come_value_114;
void* right_value177;
char* __dec_obj85;
void* right_value178;
struct sType* __dec_obj86;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_107, 0, sizeof(struct sNode*));
memset(&right_value174, 0, sizeof(void*));
memset(&left_value_108, 0, sizeof(struct CVALUE*));
memset(&right_node_109, 0, sizeof(struct sNode*));
memset(&right_value175, 0, sizeof(void*));
memset(&right_value_110, 0, sizeof(struct CVALUE*));
memset(&type_111, 0, sizeof(struct sType*));
memset(&fun_name_112, 0, sizeof(char*));
memset(&calling_fun_113, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
memset(&come_value_114, 0, sizeof(struct CVALUE*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    left_node_107=((struct sLShiftNode*)come_null_check(self, "13op.c", 776))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional188=!((struct sNode*)come_null_check(left_node_107, "13op.c", 782))->compile(((struct sNode*)come_null_check(left_node_107, "13op.c", 782))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional188) {
        __result108__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result108__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=get_value_from_stack(-1,info))));
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_109=((struct sLShiftNode*)come_null_check(self, "13op.c", 785))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional189=!((struct sNode*)come_null_check(right_node_109, "13op.c", 791))->compile(((struct sNode*)come_null_check(right_node_109, "13op.c", 791))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional189) {
        __result109__ = (_Bool)0;
        if(left_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result109__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value175=get_value_from_stack(-1,info))));
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_111=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_108, "13op.c", 794))->type);
    __freed_obj__ = 0;
    fun_name_112="operator_lshift";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional190=((struct sLShiftNode*)come_null_check(self, "13op.c", 805))->mQuote,    __freed_obj__ = 0, 
    _if_conditional190) {
        calling_fun_113=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_113=operator_overload_fun(type_111,fun_name_112,left_value_108,right_value_110,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional191=!calling_fun_113,    __freed_obj__ = 0, 
    _if_conditional191) {
        come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 806))));
        if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj85=((struct CVALUE*)come_null_check(come_value_114, "13op.c", 808))->c_value;
        ((struct CVALUE*)come_null_check(come_value_114, "13op.c", 808))->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("%s<<%s",((struct CVALUE*)come_null_check(left_value_108, "13op.c", 808))->c_value,((struct CVALUE*)come_null_check(right_value_110, "13op.c", 808))->c_value))));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
        if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj86=((struct CVALUE*)come_null_check(come_value_114, "13op.c", 809))->type;
        ((struct CVALUE*)come_null_check(come_value_114, "13op.c", 809))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value178=sType_clone(((struct CVALUE*)come_null_check(left_value_108, "13op.c", 809))->type))));
        if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_114, "13op.c", 810))->type, "13op.c", 810))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_114, "13op.c", 811))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_114, "13op.c", 813))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 815))->stack, "13op.c", 815)),(struct CVALUE*)come_increment_ref_count(come_value_114));
        __freed_obj__ = 0;
        if(come_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result110__ = (_Bool)1;
    if(left_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
    if(left_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = ((struct sLShiftNode*)come_null_check(self, "13op.c", 823))->sline;
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value179;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(right_value179=__builtin_string(((struct sLShiftNode*)come_null_check(self, "13op.c", 828))->sname)));
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value180;
char* __dec_obj87;
void* right_value181;
struct sNode* __dec_obj88;
void* right_value182;
struct sNode* __dec_obj89;
struct sRShiftNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value182, 0, sizeof(void*));
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 844))->sline=((struct sInfo*)come_null_check(info, "13op.c", 844))->sline;
    __freed_obj__ = 0;
    __dec_obj87=((struct sRShiftNode*)come_null_check(self, "13op.c", 845))->sname;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 845))->sname=(char*)come_increment_ref_count(((char*)(right_value180=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 845))->sname))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 847))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj88=((struct sRShiftNode*)come_null_check(self, "13op.c", 848))->mLeft;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 848))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value181=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, ((struct sNode*)right_value181)->finalize, ((struct sNode*)right_value181)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj89=((struct sRShiftNode*)come_null_check(self, "13op.c", 849))->mRight;
    ((struct sRShiftNode*)come_null_check(self, "13op.c", 849))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(right))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result113__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sRShiftNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
}

char* sRShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value183;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value183=__builtin_string("sRShiftNode")));
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_115;
_Bool _if_conditional195;
_Bool __result116__;
void* right_value184;
struct CVALUE* left_value_116;
struct sNode* right_node_117;
_Bool _if_conditional196;
_Bool __result117__;
void* right_value185;
struct CVALUE* right_value_118;
struct sType* type_119;
char* fun_name_120;
_Bool calling_fun_121;
_Bool _if_conditional197;
_Bool _if_conditional198;
void* right_value186;
struct CVALUE* come_value_122;
void* right_value187;
char* __dec_obj90;
void* right_value188;
struct sType* __dec_obj91;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_115, 0, sizeof(struct sNode*));
memset(&right_value184, 0, sizeof(void*));
memset(&left_value_116, 0, sizeof(struct CVALUE*));
memset(&right_node_117, 0, sizeof(struct sNode*));
memset(&right_value185, 0, sizeof(void*));
memset(&right_value_118, 0, sizeof(struct CVALUE*));
memset(&type_119, 0, sizeof(struct sType*));
memset(&fun_name_120, 0, sizeof(char*));
memset(&calling_fun_121, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
memset(&come_value_122, 0, sizeof(struct CVALUE*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
    left_node_115=((struct sRShiftNode*)come_null_check(self, "13op.c", 867))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional195=!((struct sNode*)come_null_check(left_node_115, "13op.c", 873))->compile(((struct sNode*)come_null_check(left_node_115, "13op.c", 873))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional195) {
        __result116__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result116__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_117=((struct sRShiftNode*)come_null_check(self, "13op.c", 876))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional196=!((struct sNode*)come_null_check(right_node_117, "13op.c", 882))->compile(((struct sNode*)come_null_check(right_node_117, "13op.c", 882))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional196) {
        __result117__ = (_Bool)0;
        if(left_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result117__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=get_value_from_stack(-1,info))));
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_119=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_116, "13op.c", 885))->type);
    __freed_obj__ = 0;
    fun_name_120="operator_rshift";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional197=((struct sRShiftNode*)come_null_check(self, "13op.c", 896))->mQuote,    __freed_obj__ = 0, 
    _if_conditional197) {
        calling_fun_121=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_121=operator_overload_fun(type_119,fun_name_120,left_value_116,right_value_118,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional198=!calling_fun_121,    __freed_obj__ = 0, 
    _if_conditional198) {
        come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 897))));
        if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj90=((struct CVALUE*)come_null_check(come_value_122, "13op.c", 899))->c_value;
        ((struct CVALUE*)come_null_check(come_value_122, "13op.c", 899))->c_value=(char*)come_increment_ref_count(((char*)(right_value187=xsprintf("%s>>%s",((struct CVALUE*)come_null_check(left_value_116, "13op.c", 899))->c_value,((struct CVALUE*)come_null_check(right_value_118, "13op.c", 899))->c_value))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
        if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj91=((struct CVALUE*)come_null_check(come_value_122, "13op.c", 900))->type;
        ((struct CVALUE*)come_null_check(come_value_122, "13op.c", 900))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(((struct CVALUE*)come_null_check(left_value_116, "13op.c", 900))->type))));
        if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_122, "13op.c", 901))->type, "13op.c", 901))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_122, "13op.c", 902))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_122, "13op.c", 904))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 906))->stack, "13op.c", 906)),(struct CVALUE*)come_increment_ref_count(come_value_122));
        __freed_obj__ = 0;
        if(come_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result118__ = (_Bool)1;
    if(left_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_119 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(left_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_119 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_119, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = ((struct sRShiftNode*)come_null_check(self, "13op.c", 914))->sline;
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value189;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
    __result120__ = __result_obj__ = ((char*)(right_value189=__builtin_string(((struct sLShiftNode*)come_null_check(self, "13op.c", 919))->sname)));
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value190;
char* __dec_obj92;
void* right_value191;
struct sNode* __dec_obj93;
void* right_value192;
struct sNode* __dec_obj94;
struct sGtEqNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 935))->sline=((struct sInfo*)come_null_check(info, "13op.c", 935))->sline;
    __freed_obj__ = 0;
    __dec_obj92=((struct sGtEqNode*)come_null_check(self, "13op.c", 936))->sname;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 936))->sname=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 936))->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 938))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj93=((struct sGtEqNode*)come_null_check(self, "13op.c", 939))->mLeft;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 939))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value191=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, ((struct sNode*)right_value191)->finalize, ((struct sNode*)right_value191)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj94=((struct sGtEqNode*)come_null_check(self, "13op.c", 940))->mRight;
    ((struct sGtEqNode*)come_null_check(self, "13op.c", 940))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value192=sNode_clone(right))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, ((struct sNode*)right_value192)->finalize, ((struct sNode*)right_value192)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result121__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

char* sGtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value193;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value193, 0, sizeof(void*));
    __result123__ = __result_obj__ = ((char*)(right_value193=__builtin_string("sGtEqNode")));
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_123;
_Bool _if_conditional202;
_Bool __result124__;
void* right_value194;
struct CVALUE* left_value_124;
struct sNode* right_node_125;
_Bool _if_conditional203;
_Bool __result125__;
void* right_value195;
struct CVALUE* right_value_126;
struct sType* type_127;
char* fun_name_128;
_Bool calling_fun_129;
_Bool _if_conditional204;
_Bool _if_conditional205;
void* right_value196;
struct CVALUE* come_value_130;
void* right_value197;
char* __dec_obj95;
void* right_value198;
struct sType* __dec_obj96;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_123, 0, sizeof(struct sNode*));
memset(&right_value194, 0, sizeof(void*));
memset(&left_value_124, 0, sizeof(struct CVALUE*));
memset(&right_node_125, 0, sizeof(struct sNode*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value_126, 0, sizeof(struct CVALUE*));
memset(&type_127, 0, sizeof(struct sType*));
memset(&fun_name_128, 0, sizeof(char*));
memset(&calling_fun_129, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&come_value_130, 0, sizeof(struct CVALUE*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
    left_node_123=((struct sGtEqNode*)come_null_check(self, "13op.c", 958))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional202=!((struct sNode*)come_null_check(left_node_123, "13op.c", 964))->compile(((struct sNode*)come_null_check(left_node_123, "13op.c", 964))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional202) {
        __result124__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result124__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value194=get_value_from_stack(-1,info))));
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_125=((struct sGtEqNode*)come_null_check(self, "13op.c", 967))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional203=!((struct sNode*)come_null_check(right_node_125, "13op.c", 973))->compile(((struct sNode*)come_null_check(right_node_125, "13op.c", 973))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional203) {
        __result125__ = (_Bool)0;
        if(left_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result125__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=get_value_from_stack(-1,info))));
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_127=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_124, "13op.c", 976))->type);
    __freed_obj__ = 0;
    fun_name_128="operator_gteq";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional204=((struct sGtEqNode*)come_null_check(self, "13op.c", 987))->mQuote,    __freed_obj__ = 0, 
    _if_conditional204) {
        calling_fun_129=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_129=operator_overload_fun(type_127,fun_name_128,left_value_124,right_value_126,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional205=!calling_fun_129,    __freed_obj__ = 0, 
    _if_conditional205) {
        come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 988))));
        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj95=((struct CVALUE*)come_null_check(come_value_130, "13op.c", 990))->c_value;
        ((struct CVALUE*)come_null_check(come_value_130, "13op.c", 990))->c_value=(char*)come_increment_ref_count(((char*)(right_value197=xsprintf("%s>=%s",((struct CVALUE*)come_null_check(left_value_124, "13op.c", 990))->c_value,((struct CVALUE*)come_null_check(right_value_126, "13op.c", 990))->c_value))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj96=((struct CVALUE*)come_null_check(come_value_130, "13op.c", 991))->type;
        ((struct CVALUE*)come_null_check(come_value_130, "13op.c", 991))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=sType_clone(((struct CVALUE*)come_null_check(left_value_124, "13op.c", 991))->type))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_130, "13op.c", 992))->type, "13op.c", 992))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_130, "13op.c", 993))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_130, "13op.c", 995))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 997))->stack, "13op.c", 997)),(struct CVALUE*)come_increment_ref_count(come_value_130));
        __freed_obj__ = 0;
        if(come_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result126__ = (_Bool)1;
    if(left_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
    if(left_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_127, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result127__ = ((struct sGtEqNode*)come_null_check(self, "13op.c", 1005))->sline;
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value199;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
    __result128__ = __result_obj__ = ((char*)(right_value199=__builtin_string(((struct sGtEqNode*)come_null_check(self, "13op.c", 1010))->sname)));
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value200;
char* __dec_obj97;
void* right_value201;
struct sNode* __dec_obj98;
void* right_value202;
struct sNode* __dec_obj99;
struct sLtEqNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value202, 0, sizeof(void*));
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 1026))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1026))->sline;
    __freed_obj__ = 0;
    __dec_obj97=((struct sLtEqNode*)come_null_check(self, "13op.c", 1027))->sname;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 1027))->sname=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1027))->sname))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 1029))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj98=((struct sLtEqNode*)come_null_check(self, "13op.c", 1030))->mLeft;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 1030))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value201=sNode_clone(left))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0); }
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj99=((struct sLtEqNode*)come_null_check(self, "13op.c", 1031))->mRight;
    ((struct sLtEqNode*)come_null_check(self, "13op.c", 1031))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value202=sNode_clone(right))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, ((struct sNode*)right_value202)->finalize, ((struct sNode*)right_value202)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result129__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
}

char* sLtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value203;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value203, 0, sizeof(void*));
    __result131__ = __result_obj__ = ((char*)(right_value203=__builtin_string("sLtEqNode")));
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_131;
_Bool _if_conditional209;
_Bool __result132__;
void* right_value204;
struct CVALUE* left_value_132;
struct sNode* right_node_133;
_Bool _if_conditional210;
_Bool __result133__;
void* right_value205;
struct CVALUE* right_value_134;
struct sType* type_135;
char* fun_name_136;
_Bool calling_fun_137;
_Bool _if_conditional211;
_Bool _if_conditional212;
void* right_value206;
struct CVALUE* come_value_138;
void* right_value207;
char* __dec_obj100;
void* right_value208;
struct sType* __dec_obj101;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_131, 0, sizeof(struct sNode*));
memset(&right_value204, 0, sizeof(void*));
memset(&left_value_132, 0, sizeof(struct CVALUE*));
memset(&right_node_133, 0, sizeof(struct sNode*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value_134, 0, sizeof(struct CVALUE*));
memset(&type_135, 0, sizeof(struct sType*));
memset(&fun_name_136, 0, sizeof(char*));
memset(&calling_fun_137, 0, sizeof(_Bool));
memset(&right_value206, 0, sizeof(void*));
memset(&come_value_138, 0, sizeof(struct CVALUE*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
    left_node_131=((struct sLtEqNode*)come_null_check(self, "13op.c", 1049))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional209=!((struct sNode*)come_null_check(left_node_131, "13op.c", 1055))->compile(((struct sNode*)come_null_check(left_node_131, "13op.c", 1055))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional209) {
        __result132__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result132__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=get_value_from_stack(-1,info))));
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_133=((struct sLtEqNode*)come_null_check(self, "13op.c", 1058))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional210=!((struct sNode*)come_null_check(right_node_133, "13op.c", 1064))->compile(((struct sNode*)come_null_check(right_node_133, "13op.c", 1064))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional210) {
        __result133__ = (_Bool)0;
        if(left_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result133__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value205=get_value_from_stack(-1,info))));
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_135=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_132, "13op.c", 1067))->type);
    __freed_obj__ = 0;
    fun_name_136="operator_lteq";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional211=((struct sLtEqNode*)come_null_check(self, "13op.c", 1078))->mQuote,    __freed_obj__ = 0, 
    _if_conditional211) {
        calling_fun_137=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_137=operator_overload_fun(type_135,fun_name_136,left_value_132,right_value_134,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional212=!calling_fun_137,    __freed_obj__ = 0, 
    _if_conditional212) {
        come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1079))));
        if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj100=((struct CVALUE*)come_null_check(come_value_138, "13op.c", 1081))->c_value;
        ((struct CVALUE*)come_null_check(come_value_138, "13op.c", 1081))->c_value=(char*)come_increment_ref_count(((char*)(right_value207=xsprintf("%s<=%s",((struct CVALUE*)come_null_check(left_value_132, "13op.c", 1081))->c_value,((struct CVALUE*)come_null_check(right_value_134, "13op.c", 1081))->c_value))));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
        if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj101=((struct CVALUE*)come_null_check(come_value_138, "13op.c", 1082))->type;
        ((struct CVALUE*)come_null_check(come_value_138, "13op.c", 1082))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value208=sType_clone(((struct CVALUE*)come_null_check(left_value_132, "13op.c", 1082))->type))));
        if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_138, "13op.c", 1083))->type, "13op.c", 1083))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_138, "13op.c", 1084))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_138, "13op.c", 1086))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1088))->stack, "13op.c", 1088)),(struct CVALUE*)come_increment_ref_count(come_value_138));
        __freed_obj__ = 0;
        if(come_value_138 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result134__ = (_Bool)1;
    if(left_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
    if(left_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = ((struct sLtEqNode*)come_null_check(self, "13op.c", 1096))->sline;
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value209;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
    __result136__ = __result_obj__ = ((char*)(right_value209=__builtin_string(((struct sLtEqNode*)come_null_check(self, "13op.c", 1101))->sname)));
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value210;
char* __dec_obj102;
void* right_value211;
struct sNode* __dec_obj103;
void* right_value212;
struct sNode* __dec_obj104;
struct sLtNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value212, 0, sizeof(void*));
    ((struct sLtNode*)come_null_check(self, "13op.c", 1117))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1117))->sline;
    __freed_obj__ = 0;
    __dec_obj102=((struct sLtNode*)come_null_check(self, "13op.c", 1118))->sname;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1118))->sname=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1118))->sname))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1120))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj103=((struct sLtNode*)come_null_check(self, "13op.c", 1121))->mLeft;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1121))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value211=sNode_clone(left))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, ((struct sNode*)right_value211)->finalize, ((struct sNode*)right_value211)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj104=((struct sLtNode*)come_null_check(self, "13op.c", 1122))->mRight;
    ((struct sLtNode*)come_null_check(self, "13op.c", 1122))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value212=sNode_clone(right))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0); }
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, ((struct sNode*)right_value212)->finalize, ((struct sNode*)right_value212)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result137__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
}

char* sLtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value213;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value213, 0, sizeof(void*));
    __result139__ = __result_obj__ = ((char*)(right_value213=__builtin_string("sLtNode")));
    __freed_obj__ = 0;
    return __result139__;
    __freed_obj__ = 0;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_139;
_Bool _if_conditional216;
_Bool __result140__;
void* right_value214;
struct CVALUE* left_value_140;
struct sNode* right_node_141;
_Bool _if_conditional217;
_Bool __result141__;
void* right_value215;
struct CVALUE* right_value_142;
struct sType* type_143;
char* fun_name_144;
_Bool calling_fun_145;
_Bool _if_conditional218;
_Bool _if_conditional219;
void* right_value216;
struct CVALUE* come_value_146;
void* right_value217;
char* __dec_obj105;
void* right_value218;
struct sType* __dec_obj106;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_139, 0, sizeof(struct sNode*));
memset(&right_value214, 0, sizeof(void*));
memset(&left_value_140, 0, sizeof(struct CVALUE*));
memset(&right_node_141, 0, sizeof(struct sNode*));
memset(&right_value215, 0, sizeof(void*));
memset(&right_value_142, 0, sizeof(struct CVALUE*));
memset(&type_143, 0, sizeof(struct sType*));
memset(&fun_name_144, 0, sizeof(char*));
memset(&calling_fun_145, 0, sizeof(_Bool));
memset(&right_value216, 0, sizeof(void*));
memset(&come_value_146, 0, sizeof(struct CVALUE*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
    left_node_139=((struct sLtNode*)come_null_check(self, "13op.c", 1140))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional216=!((struct sNode*)come_null_check(left_node_139, "13op.c", 1146))->compile(((struct sNode*)come_null_check(left_node_139, "13op.c", 1146))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional216) {
        __result140__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result140__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=get_value_from_stack(-1,info))));
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_141=((struct sLtNode*)come_null_check(self, "13op.c", 1149))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional217=!((struct sNode*)come_null_check(right_node_141, "13op.c", 1155))->compile(((struct sNode*)come_null_check(right_node_141, "13op.c", 1155))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional217) {
        __result141__ = (_Bool)0;
        if(left_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result141__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value215=get_value_from_stack(-1,info))));
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_143=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_140, "13op.c", 1158))->type);
    __freed_obj__ = 0;
    fun_name_144="operator_lt";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional218=((struct sLtNode*)come_null_check(self, "13op.c", 1169))->mQuote,    __freed_obj__ = 0, 
    _if_conditional218) {
        calling_fun_145=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_145=operator_overload_fun(type_143,fun_name_144,left_value_140,right_value_142,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional219=!calling_fun_145,    __freed_obj__ = 0, 
    _if_conditional219) {
        come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1170))));
        if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj105=((struct CVALUE*)come_null_check(come_value_146, "13op.c", 1172))->c_value;
        ((struct CVALUE*)come_null_check(come_value_146, "13op.c", 1172))->c_value=(char*)come_increment_ref_count(((char*)(right_value217=xsprintf("%s<%s",((struct CVALUE*)come_null_check(left_value_140, "13op.c", 1172))->c_value,((struct CVALUE*)come_null_check(right_value_142, "13op.c", 1172))->c_value))));
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj106=((struct CVALUE*)come_null_check(come_value_146, "13op.c", 1173))->type;
        ((struct CVALUE*)come_null_check(come_value_146, "13op.c", 1173))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value218=sType_clone(((struct CVALUE*)come_null_check(left_value_140, "13op.c", 1173))->type))));
        if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_146, "13op.c", 1174))->type, "13op.c", 1174))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_146, "13op.c", 1175))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_146, "13op.c", 1177))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1179))->stack, "13op.c", 1179)),(struct CVALUE*)come_increment_ref_count(come_value_146));
        __freed_obj__ = 0;
        if(come_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result142__ = (_Bool)1;
    if(left_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
    if(left_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_143 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = ((struct sLtNode*)come_null_check(self, "13op.c", 1187))->sline;
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value219;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value219, 0, sizeof(void*));
    __result144__ = __result_obj__ = ((char*)(right_value219=__builtin_string(((struct sLtNode*)come_null_check(self, "13op.c", 1192))->sname)));
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value220;
char* __dec_obj107;
void* right_value221;
struct sNode* __dec_obj108;
void* right_value222;
struct sNode* __dec_obj109;
struct sGtNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
    ((struct sGtNode*)come_null_check(self, "13op.c", 1208))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1208))->sline;
    __freed_obj__ = 0;
    __dec_obj107=((struct sGtNode*)come_null_check(self, "13op.c", 1209))->sname;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1209))->sname=(char*)come_increment_ref_count(((char*)(right_value220=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1209))->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1211))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj108=((struct sGtNode*)come_null_check(self, "13op.c", 1212))->mLeft;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1212))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj109=((struct sGtNode*)come_null_check(self, "13op.c", 1213))->mRight;
    ((struct sGtNode*)come_null_check(self, "13op.c", 1213))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result145__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result146__;
    __freed_obj__ = 0;
}

char* sGtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value223;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
    __result147__ = __result_obj__ = ((char*)(right_value223=__builtin_string("sGtNode")));
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_147;
_Bool _if_conditional223;
_Bool __result148__;
void* right_value224;
struct CVALUE* left_value_148;
struct sNode* right_node_149;
_Bool _if_conditional224;
_Bool __result149__;
void* right_value225;
struct CVALUE* right_value_150;
struct sType* type_151;
char* fun_name_152;
_Bool calling_fun_153;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value226;
struct CVALUE* come_value_154;
void* right_value227;
char* __dec_obj110;
void* right_value228;
struct sType* __dec_obj111;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_147, 0, sizeof(struct sNode*));
memset(&right_value224, 0, sizeof(void*));
memset(&left_value_148, 0, sizeof(struct CVALUE*));
memset(&right_node_149, 0, sizeof(struct sNode*));
memset(&right_value225, 0, sizeof(void*));
memset(&right_value_150, 0, sizeof(struct CVALUE*));
memset(&type_151, 0, sizeof(struct sType*));
memset(&fun_name_152, 0, sizeof(char*));
memset(&calling_fun_153, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
memset(&come_value_154, 0, sizeof(struct CVALUE*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    left_node_147=((struct sGtNode*)come_null_check(self, "13op.c", 1231))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional223=!((struct sNode*)come_null_check(left_node_147, "13op.c", 1237))->compile(((struct sNode*)come_null_check(left_node_147, "13op.c", 1237))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional223) {
        __result148__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result148__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_149=((struct sGtNode*)come_null_check(self, "13op.c", 1240))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional224=!((struct sNode*)come_null_check(right_node_149, "13op.c", 1246))->compile(((struct sNode*)come_null_check(right_node_149, "13op.c", 1246))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional224) {
        __result149__ = (_Bool)0;
        if(left_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result149__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value225=get_value_from_stack(-1,info))));
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_151=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_148, "13op.c", 1249))->type);
    __freed_obj__ = 0;
    fun_name_152="operator_gt";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional225=((struct sGtNode*)come_null_check(self, "13op.c", 1260))->mQuote,    __freed_obj__ = 0, 
    _if_conditional225) {
        calling_fun_153=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_153=operator_overload_fun(type_151,fun_name_152,left_value_148,right_value_150,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional226=!calling_fun_153,    __freed_obj__ = 0, 
    _if_conditional226) {
        come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1261))));
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj110=((struct CVALUE*)come_null_check(come_value_154, "13op.c", 1263))->c_value;
        ((struct CVALUE*)come_null_check(come_value_154, "13op.c", 1263))->c_value=(char*)come_increment_ref_count(((char*)(right_value227=xsprintf("%s>%s",((struct CVALUE*)come_null_check(left_value_148, "13op.c", 1263))->c_value,((struct CVALUE*)come_null_check(right_value_150, "13op.c", 1263))->c_value))));
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj111=((struct CVALUE*)come_null_check(come_value_154, "13op.c", 1264))->type;
        ((struct CVALUE*)come_null_check(come_value_154, "13op.c", 1264))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(((struct CVALUE*)come_null_check(left_value_148, "13op.c", 1264))->type))));
        if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_154, "13op.c", 1265))->type, "13op.c", 1265))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_154, "13op.c", 1266))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_154, "13op.c", 1268))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1270))->stack, "13op.c", 1270)),(struct CVALUE*)come_increment_ref_count(come_value_154));
        __freed_obj__ = 0;
        if(come_value_154 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result150__ = (_Bool)1;
    if(left_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
    if(left_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_151 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_151, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = ((struct sGtNode*)come_null_check(self, "13op.c", 1278))->sline;
    __freed_obj__ = 0;
    return __result151__;
    __freed_obj__ = 0;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value229;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value229=__builtin_string(((struct sGtNode*)come_null_check(self, "13op.c", 1283))->sname)));
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value230;
char* __dec_obj112;
void* right_value231;
struct sNode* __dec_obj113;
void* right_value232;
struct sNode* __dec_obj114;
struct sEqNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
    ((struct sEqNode*)come_null_check(self, "13op.c", 1299))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1299))->sline;
    __freed_obj__ = 0;
    __dec_obj112=((struct sEqNode*)come_null_check(self, "13op.c", 1300))->sname;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1300))->sname=(char*)come_increment_ref_count(((char*)(right_value230=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1300))->sname))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1302))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj113=((struct sEqNode*)come_null_check(self, "13op.c", 1303))->mLeft;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1303))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value231=sNode_clone(left))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj114=((struct sEqNode*)come_null_check(self, "13op.c", 1304))->mRight;
    ((struct sEqNode*)come_null_check(self, "13op.c", 1304))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value232=sNode_clone(right))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, ((struct sNode*)right_value232)->finalize, ((struct sNode*)right_value232)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result153__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result153__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result154__ = ((struct sEqNode*)come_null_check(self, "13op.c", 1311))->sline;
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value233;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value233, 0, sizeof(void*));
    __result155__ = __result_obj__ = ((char*)(right_value233=__builtin_string(((struct sEqNode*)come_null_check(self, "13op.c", 1316))->sname)));
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
}

_Bool sEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result156__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
}

char* sEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value234;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value234, 0, sizeof(void*));
    __result157__ = __result_obj__ = ((char*)(right_value234=__builtin_string("sEqNode")));
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_155;
_Bool _if_conditional230;
_Bool __result158__;
void* right_value235;
struct CVALUE* left_value_156;
struct sNode* right_node_157;
_Bool _if_conditional231;
_Bool __result159__;
void* right_value236;
struct CVALUE* right_value_158;
void* right_value237;
struct CVALUE* come_value_159;
void* right_value238;
char* __dec_obj115;
void* right_value239;
struct sType* __dec_obj116;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_155, 0, sizeof(struct sNode*));
memset(&right_value235, 0, sizeof(void*));
memset(&left_value_156, 0, sizeof(struct CVALUE*));
memset(&right_node_157, 0, sizeof(struct sNode*));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value_158, 0, sizeof(struct CVALUE*));
memset(&right_value237, 0, sizeof(void*));
memset(&come_value_159, 0, sizeof(struct CVALUE*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
    left_node_155=((struct sEqNode*)come_null_check(self, "13op.c", 1332))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional230=!((struct sNode*)come_null_check(left_node_155, "13op.c", 1338))->compile(((struct sNode*)come_null_check(left_node_155, "13op.c", 1338))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional230) {
        __result158__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result158__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value235=get_value_from_stack(-1,info))));
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_157=((struct sEqNode*)come_null_check(self, "13op.c", 1341))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional231=!((struct sNode*)come_null_check(right_node_157, "13op.c", 1347))->compile(((struct sNode*)come_null_check(right_node_157, "13op.c", 1347))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional231) {
        __result159__ = (_Bool)0;
        if(left_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result159__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))));
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1350))));
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj115=((struct CVALUE*)come_null_check(come_value_159, "13op.c", 1352))->c_value;
    ((struct CVALUE*)come_null_check(come_value_159, "13op.c", 1352))->c_value=(char*)come_increment_ref_count(((char*)(right_value238=xsprintf("%s==%s",((struct CVALUE*)come_null_check(left_value_156, "13op.c", 1352))->c_value,((struct CVALUE*)come_null_check(right_value_158, "13op.c", 1352))->c_value))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj116=((struct CVALUE*)come_null_check(come_value_159, "13op.c", 1353))->type;
    ((struct CVALUE*)come_null_check(come_value_159, "13op.c", 1353))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value239=sType_clone(((struct CVALUE*)come_null_check(left_value_156, "13op.c", 1353))->type))));
    if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_159, "13op.c", 1354))->type, "13op.c", 1354))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_159, "13op.c", 1355))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_159, "13op.c", 1357))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1359))->stack, "13op.c", 1359)),(struct CVALUE*)come_increment_ref_count(come_value_159));
    __freed_obj__ = 0;
    __result160__ = (_Bool)1;
    if(left_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result160__;
    __freed_obj__ = 0;
    if(left_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value240;
char* __dec_obj117;
void* right_value241;
struct sNode* __dec_obj118;
void* right_value242;
struct sNode* __dec_obj119;
struct sNotEqNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value240, 0, sizeof(void*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value242, 0, sizeof(void*));
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1377))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1377))->sline;
    __freed_obj__ = 0;
    __dec_obj117=((struct sNotEqNode*)come_null_check(self, "13op.c", 1378))->sname;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1378))->sname=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1378))->sname))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1380))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj118=((struct sNotEqNode*)come_null_check(self, "13op.c", 1381))->mLeft;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1381))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj119=((struct sNotEqNode*)come_null_check(self, "13op.c", 1382))->mRight;
    ((struct sNotEqNode*)come_null_check(self, "13op.c", 1382))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value242=sNode_clone(right))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, ((struct sNode*)right_value242)->finalize, ((struct sNode*)right_value242)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result161__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result162__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
}

char* sNotEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value243;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value243, 0, sizeof(void*));
    __result163__ = __result_obj__ = ((char*)(right_value243=__builtin_string("sNotEqNode")));
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_160;
_Bool _if_conditional235;
_Bool __result164__;
void* right_value244;
struct CVALUE* left_value_161;
struct sNode* right_node_162;
_Bool _if_conditional236;
_Bool __result165__;
void* right_value245;
struct CVALUE* right_value_163;
void* right_value246;
struct CVALUE* come_value_164;
void* right_value247;
char* __dec_obj120;
void* right_value248;
struct sType* __dec_obj121;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_160, 0, sizeof(struct sNode*));
memset(&right_value244, 0, sizeof(void*));
memset(&left_value_161, 0, sizeof(struct CVALUE*));
memset(&right_node_162, 0, sizeof(struct sNode*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value_163, 0, sizeof(struct CVALUE*));
memset(&right_value246, 0, sizeof(void*));
memset(&come_value_164, 0, sizeof(struct CVALUE*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
    left_node_160=((struct sNotEqNode*)come_null_check(self, "13op.c", 1400))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional235=!((struct sNode*)come_null_check(left_node_160, "13op.c", 1406))->compile(((struct sNode*)come_null_check(left_node_160, "13op.c", 1406))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional235) {
        __result164__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result164__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=get_value_from_stack(-1,info))));
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_162=((struct sNotEqNode*)come_null_check(self, "13op.c", 1409))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional236=!((struct sNode*)come_null_check(right_node_162, "13op.c", 1415))->compile(((struct sNode*)come_null_check(right_node_162, "13op.c", 1415))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional236) {
        __result165__ = (_Bool)0;
        if(left_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result165__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value245=get_value_from_stack(-1,info))));
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value246=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1418))));
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj120=((struct CVALUE*)come_null_check(come_value_164, "13op.c", 1420))->c_value;
    ((struct CVALUE*)come_null_check(come_value_164, "13op.c", 1420))->c_value=(char*)come_increment_ref_count(((char*)(right_value247=xsprintf("%s!=%s",((struct CVALUE*)come_null_check(left_value_161, "13op.c", 1420))->c_value,((struct CVALUE*)come_null_check(right_value_163, "13op.c", 1420))->c_value))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj121=((struct CVALUE*)come_null_check(come_value_164, "13op.c", 1421))->type;
    ((struct CVALUE*)come_null_check(come_value_164, "13op.c", 1421))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value248=sType_clone(((struct CVALUE*)come_null_check(left_value_161, "13op.c", 1421))->type))));
    if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_164, "13op.c", 1422))->type, "13op.c", 1422))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_164, "13op.c", 1423))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_164, "13op.c", 1425))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1427))->stack, "13op.c", 1427)),(struct CVALUE*)come_increment_ref_count(come_value_164));
    __freed_obj__ = 0;
    __result166__ = (_Bool)1;
    if(left_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_163 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
    if(left_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_163 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result167__ = ((struct sNotEqNode*)come_null_check(self, "13op.c", 1434))->sline;
    __freed_obj__ = 0;
    return __result167__;
    __freed_obj__ = 0;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value249;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
    __result168__ = __result_obj__ = ((char*)(right_value249=__builtin_string(((struct sNotEqNode*)come_null_check(self, "13op.c", 1439))->sname)));
    __freed_obj__ = 0;
    return __result168__;
    __freed_obj__ = 0;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value250;
char* __dec_obj122;
void* right_value251;
struct sNode* __dec_obj123;
void* right_value252;
struct sNode* __dec_obj124;
struct sEq2Node* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1455))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1455))->sline;
    __freed_obj__ = 0;
    __dec_obj122=((struct sEq2Node*)come_null_check(self, "13op.c", 1456))->sname;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1456))->sname=(char*)come_increment_ref_count(((char*)(right_value250=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1456))->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1458))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj123=((struct sEq2Node*)come_null_check(self, "13op.c", 1459))->mLeft;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1459))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value251=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { right_value251 = come_decrement_ref_count(right_value251, ((struct sNode*)right_value251)->finalize, ((struct sNode*)right_value251)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj124=((struct sEq2Node*)come_null_check(self, "13op.c", 1460))->mRight;
    ((struct sEq2Node*)come_null_check(self, "13op.c", 1460))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result169__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result170__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result170__;
    __freed_obj__ = 0;
}

char* sEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value253;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value253, 0, sizeof(void*));
    __result171__ = __result_obj__ = ((char*)(right_value253=__builtin_string("sEq2Node")));
    __freed_obj__ = 0;
    return __result171__;
    __freed_obj__ = 0;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_165;
_Bool _if_conditional240;
_Bool __result172__;
void* right_value254;
struct CVALUE* left_value_166;
struct sNode* right_node_167;
_Bool _if_conditional241;
_Bool __result173__;
void* right_value255;
struct CVALUE* right_value_168;
struct sType* type_169;
char* fun_name_170;
_Bool calling_fun_171;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value256;
struct CVALUE* come_value_172;
void* right_value257;
char* __dec_obj125;
void* right_value258;
struct sType* __dec_obj126;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_165, 0, sizeof(struct sNode*));
memset(&right_value254, 0, sizeof(void*));
memset(&left_value_166, 0, sizeof(struct CVALUE*));
memset(&right_node_167, 0, sizeof(struct sNode*));
memset(&right_value255, 0, sizeof(void*));
memset(&right_value_168, 0, sizeof(struct CVALUE*));
memset(&type_169, 0, sizeof(struct sType*));
memset(&fun_name_170, 0, sizeof(char*));
memset(&calling_fun_171, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
memset(&come_value_172, 0, sizeof(struct CVALUE*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
    left_node_165=((struct sEqNode*)come_null_check(self, "13op.c", 1479))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional240=!((struct sNode*)come_null_check(left_node_165, "13op.c", 1485))->compile(((struct sNode*)come_null_check(left_node_165, "13op.c", 1485))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional240) {
        __result172__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result172__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value254=get_value_from_stack(-1,info))));
    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_167=((struct sEqNode*)come_null_check(self, "13op.c", 1488))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional241=!((struct sNode*)come_null_check(right_node_167, "13op.c", 1494))->compile(((struct sNode*)come_null_check(right_node_167, "13op.c", 1494))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional241) {
        __result173__ = (_Bool)0;
        if(left_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result173__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=get_value_from_stack(-1,info))));
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_169=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_166, "13op.c", 1497))->type);
    __freed_obj__ = 0;
    fun_name_170="operator_equals";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional242=((struct sEqNode*)come_null_check(self, "13op.c", 1508))->mQuote,    __freed_obj__ = 0, 
    _if_conditional242) {
        calling_fun_171=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_171=operator_overload_fun(type_169,fun_name_170,left_value_166,right_value_168,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional243=!calling_fun_171,    __freed_obj__ = 0, 
    _if_conditional243) {
        come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1509))));
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj125=((struct CVALUE*)come_null_check(come_value_172, "13op.c", 1511))->c_value;
        ((struct CVALUE*)come_null_check(come_value_172, "13op.c", 1511))->c_value=(char*)come_increment_ref_count(((char*)(right_value257=xsprintf("%s==%s",((struct CVALUE*)come_null_check(left_value_166, "13op.c", 1511))->c_value,((struct CVALUE*)come_null_check(right_value_168, "13op.c", 1511))->c_value))));
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj126=((struct CVALUE*)come_null_check(come_value_172, "13op.c", 1512))->type;
        ((struct CVALUE*)come_null_check(come_value_172, "13op.c", 1512))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_clone(((struct CVALUE*)come_null_check(left_value_166, "13op.c", 1512))->type))));
        if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_172, "13op.c", 1513))->type, "13op.c", 1513))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_172, "13op.c", 1514))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_172, "13op.c", 1516))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1518))->stack, "13op.c", 1518)),(struct CVALUE*)come_increment_ref_count(come_value_172));
        __freed_obj__ = 0;
        if(come_value_172 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result174__ = (_Bool)1;
    if(left_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result174__;
    __freed_obj__ = 0;
    if(left_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_169 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result175__ = ((struct sEq2Node*)come_null_check(self, "13op.c", 1526))->sline;
    __freed_obj__ = 0;
    return __result175__;
    __freed_obj__ = 0;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value259;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value259, 0, sizeof(void*));
    __result176__ = __result_obj__ = ((char*)(right_value259=__builtin_string(((struct sEq2Node*)come_null_check(self, "13op.c", 1531))->sname)));
    __freed_obj__ = 0;
    return __result176__;
    __freed_obj__ = 0;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value260;
char* __dec_obj127;
void* right_value261;
struct sNode* __dec_obj128;
void* right_value262;
struct sNode* __dec_obj129;
struct sNotEq2Node* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1547))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1547))->sline;
    __freed_obj__ = 0;
    __dec_obj127=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1548))->sname;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1548))->sname=(char*)come_increment_ref_count(((char*)(right_value260=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1548))->sname))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1550))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj128=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1551))->mLeft;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1551))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj129=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1552))->mRight;
    ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1552))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result177__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result177__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result178__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result178__;
    __freed_obj__ = 0;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value263;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
    __result179__ = __result_obj__ = ((char*)(right_value263=__builtin_string("sNotEq2Node")));
    __freed_obj__ = 0;
    return __result179__;
    __freed_obj__ = 0;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_173;
_Bool _if_conditional247;
_Bool __result180__;
void* right_value264;
struct CVALUE* left_value_174;
struct sNode* right_node_175;
_Bool _if_conditional248;
_Bool __result181__;
void* right_value265;
struct CVALUE* right_value_176;
struct sType* type_177;
char* fun_name_178;
_Bool calling_fun_179;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value266;
struct CVALUE* come_value_180;
void* right_value267;
char* __dec_obj130;
void* right_value268;
struct sType* __dec_obj131;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_173, 0, sizeof(struct sNode*));
memset(&right_value264, 0, sizeof(void*));
memset(&left_value_174, 0, sizeof(struct CVALUE*));
memset(&right_node_175, 0, sizeof(struct sNode*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value_176, 0, sizeof(struct CVALUE*));
memset(&type_177, 0, sizeof(struct sType*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&calling_fun_179, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
memset(&come_value_180, 0, sizeof(struct CVALUE*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
    left_node_173=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1570))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional247=!((struct sNode*)come_null_check(left_node_173, "13op.c", 1576))->compile(((struct sNode*)come_null_check(left_node_173, "13op.c", 1576))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional247) {
        __result180__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result180__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=get_value_from_stack(-1,info))));
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_175=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1579))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional248=!((struct sNode*)come_null_check(right_node_175, "13op.c", 1585))->compile(((struct sNode*)come_null_check(right_node_175, "13op.c", 1585))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional248) {
        __result181__ = (_Bool)0;
        if(left_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result181__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=get_value_from_stack(-1,info))));
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_177=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_174, "13op.c", 1588))->type);
    __freed_obj__ = 0;
    fun_name_178="operator_not_equals";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional249=((struct sNotEq2Node*)come_null_check(self, "13op.c", 1599))->mQuote,    __freed_obj__ = 0, 
    _if_conditional249) {
        calling_fun_179=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_179=operator_overload_fun(type_177,fun_name_178,left_value_174,right_value_176,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional250=!calling_fun_179,    __freed_obj__ = 0, 
    _if_conditional250) {
        come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1600))));
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj130=((struct CVALUE*)come_null_check(come_value_180, "13op.c", 1602))->c_value;
        ((struct CVALUE*)come_null_check(come_value_180, "13op.c", 1602))->c_value=(char*)come_increment_ref_count(((char*)(right_value267=xsprintf("%s!=%s",((struct CVALUE*)come_null_check(left_value_174, "13op.c", 1602))->c_value,((struct CVALUE*)come_null_check(right_value_176, "13op.c", 1602))->c_value))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj131=((struct CVALUE*)come_null_check(come_value_180, "13op.c", 1603))->type;
        ((struct CVALUE*)come_null_check(come_value_180, "13op.c", 1603))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_clone(((struct CVALUE*)come_null_check(left_value_174, "13op.c", 1603))->type))));
        if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_180, "13op.c", 1604))->type, "13op.c", 1604))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_180, "13op.c", 1605))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_180, "13op.c", 1607))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1609))->stack, "13op.c", 1609)),(struct CVALUE*)come_increment_ref_count(come_value_180));
        __freed_obj__ = 0;
        if(come_value_180 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result182__ = (_Bool)1;
    if(left_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result182__;
    __freed_obj__ = 0;
    if(left_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_177 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result183__ = ((struct sNotEq2Node*)come_null_check(self, "13op.c", 1617))->sline;
    __freed_obj__ = 0;
    return __result183__;
    __freed_obj__ = 0;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value269;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value269, 0, sizeof(void*));
    __result184__ = __result_obj__ = ((char*)(right_value269=__builtin_string(((struct sNotEq2Node*)come_null_check(self, "13op.c", 1622))->sname)));
    __freed_obj__ = 0;
    return __result184__;
    __freed_obj__ = 0;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value270;
char* __dec_obj132;
void* right_value271;
struct sNode* __dec_obj133;
void* right_value272;
struct sNode* __dec_obj134;
struct sAndNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    ((struct sAndNode*)come_null_check(self, "13op.c", 1638))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1638))->sline;
    __freed_obj__ = 0;
    __dec_obj132=((struct sAndNode*)come_null_check(self, "13op.c", 1639))->sname;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1639))->sname=(char*)come_increment_ref_count(((char*)(right_value270=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1639))->sname))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1641))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj133=((struct sAndNode*)come_null_check(self, "13op.c", 1642))->mLeft;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1642))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=sNode_clone(left))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj134=((struct sAndNode*)come_null_check(self, "13op.c", 1643))->mRight;
    ((struct sAndNode*)come_null_check(self, "13op.c", 1643))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value272=sNode_clone(right))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, ((struct sNode*)right_value272)->finalize, ((struct sNode*)right_value272)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result185__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result185__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result186__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result186__;
    __freed_obj__ = 0;
}

char* sAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value273;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
    __result187__ = __result_obj__ = ((char*)(right_value273=__builtin_string("sAndNode")));
    __freed_obj__ = 0;
    return __result187__;
    __freed_obj__ = 0;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_181;
_Bool _if_conditional254;
_Bool __result188__;
void* right_value274;
struct CVALUE* left_value_182;
struct sNode* right_node_183;
_Bool _if_conditional255;
_Bool __result189__;
void* right_value275;
struct CVALUE* right_value_184;
struct sType* type_185;
char* fun_name_186;
_Bool calling_fun_187;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value276;
struct CVALUE* come_value_188;
void* right_value277;
char* __dec_obj135;
void* right_value278;
struct sType* __dec_obj136;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_181, 0, sizeof(struct sNode*));
memset(&right_value274, 0, sizeof(void*));
memset(&left_value_182, 0, sizeof(struct CVALUE*));
memset(&right_node_183, 0, sizeof(struct sNode*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value_184, 0, sizeof(struct CVALUE*));
memset(&type_185, 0, sizeof(struct sType*));
memset(&fun_name_186, 0, sizeof(char*));
memset(&calling_fun_187, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
memset(&come_value_188, 0, sizeof(struct CVALUE*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
    left_node_181=((struct sAndNode*)come_null_check(self, "13op.c", 1661))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional254=!((struct sNode*)come_null_check(left_node_181, "13op.c", 1667))->compile(((struct sNode*)come_null_check(left_node_181, "13op.c", 1667))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional254) {
        __result188__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result188__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=get_value_from_stack(-1,info))));
    if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_183=((struct sAndNode*)come_null_check(self, "13op.c", 1670))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional255=!((struct sNode*)come_null_check(right_node_183, "13op.c", 1676))->compile(((struct sNode*)come_null_check(right_node_183, "13op.c", 1676))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional255) {
        __result189__ = (_Bool)0;
        if(left_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result189__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value275=get_value_from_stack(-1,info))));
    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_185=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_182, "13op.c", 1679))->type);
    __freed_obj__ = 0;
    fun_name_186="operator_and";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional256=((struct sAndNode*)come_null_check(self, "13op.c", 1691))->mQuote,    __freed_obj__ = 0, 
    _if_conditional256) {
        calling_fun_187=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_187=operator_overload_fun(type_185,fun_name_186,left_value_182,right_value_184,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional257=!calling_fun_187,    __freed_obj__ = 0, 
    _if_conditional257) {
        come_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value276=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1692))));
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj135=((struct CVALUE*)come_null_check(come_value_188, "13op.c", 1694))->c_value;
        ((struct CVALUE*)come_null_check(come_value_188, "13op.c", 1694))->c_value=(char*)come_increment_ref_count(((char*)(right_value277=xsprintf("%s&%s",((struct CVALUE*)come_null_check(left_value_182, "13op.c", 1694))->c_value,((struct CVALUE*)come_null_check(right_value_184, "13op.c", 1694))->c_value))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj136=((struct CVALUE*)come_null_check(come_value_188, "13op.c", 1695))->type;
        ((struct CVALUE*)come_null_check(come_value_188, "13op.c", 1695))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value278=sType_clone(((struct CVALUE*)come_null_check(left_value_182, "13op.c", 1695))->type))));
        if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_188, "13op.c", 1696))->type, "13op.c", 1696))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_188, "13op.c", 1697))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_188, "13op.c", 1699))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1701))->stack, "13op.c", 1701)),(struct CVALUE*)come_increment_ref_count(come_value_188));
        __freed_obj__ = 0;
        if(come_value_188 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result190__ = (_Bool)1;
    if(left_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result190__;
    __freed_obj__ = 0;
    if(left_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_185 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result191__ = ((struct sAndNode*)come_null_check(self, "13op.c", 1709))->sline;
    __freed_obj__ = 0;
    return __result191__;
    __freed_obj__ = 0;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value279;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
    __result192__ = __result_obj__ = ((char*)(right_value279=__builtin_string(((struct sAndNode*)come_null_check(self, "13op.c", 1714))->sname)));
    __freed_obj__ = 0;
    return __result192__;
    __freed_obj__ = 0;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value280;
char* __dec_obj137;
void* right_value281;
struct sNode* __dec_obj138;
void* right_value282;
struct sNode* __dec_obj139;
struct sXOrNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value280, 0, sizeof(void*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value282, 0, sizeof(void*));
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1730))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1730))->sline;
    __freed_obj__ = 0;
    __dec_obj137=((struct sXOrNode*)come_null_check(self, "13op.c", 1731))->sname;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1731))->sname=(char*)come_increment_ref_count(((char*)(right_value280=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1731))->sname))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1733))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj138=((struct sXOrNode*)come_null_check(self, "13op.c", 1734))->mLeft;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1734))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value281=sNode_clone(left))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { right_value281 = come_decrement_ref_count(right_value281, ((struct sNode*)right_value281)->finalize, ((struct sNode*)right_value281)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj139=((struct sXOrNode*)come_null_check(self, "13op.c", 1735))->mRight;
    ((struct sXOrNode*)come_null_check(self, "13op.c", 1735))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value282=sNode_clone(right))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, ((struct sNode*)right_value282)->finalize, ((struct sNode*)right_value282)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result193__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result193__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sXOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result194__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result194__;
    __freed_obj__ = 0;
}

char* sXOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value283;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
    __result195__ = __result_obj__ = ((char*)(right_value283=__builtin_string("sXOrNode")));
    __freed_obj__ = 0;
    return __result195__;
    __freed_obj__ = 0;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_189;
_Bool _if_conditional261;
_Bool __result196__;
void* right_value284;
struct CVALUE* left_value_190;
struct sNode* right_node_191;
_Bool _if_conditional262;
_Bool __result197__;
void* right_value285;
struct CVALUE* right_value_192;
struct sType* type_193;
char* fun_name_194;
_Bool calling_fun_195;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value286;
struct CVALUE* come_value_196;
void* right_value287;
char* __dec_obj140;
void* right_value288;
struct sType* __dec_obj141;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_189, 0, sizeof(struct sNode*));
memset(&right_value284, 0, sizeof(void*));
memset(&left_value_190, 0, sizeof(struct CVALUE*));
memset(&right_node_191, 0, sizeof(struct sNode*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value_192, 0, sizeof(struct CVALUE*));
memset(&type_193, 0, sizeof(struct sType*));
memset(&fun_name_194, 0, sizeof(char*));
memset(&calling_fun_195, 0, sizeof(_Bool));
memset(&right_value286, 0, sizeof(void*));
memset(&come_value_196, 0, sizeof(struct CVALUE*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
    left_node_189=((struct sXOrNode*)come_null_check(self, "13op.c", 1753))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional261=!((struct sNode*)come_null_check(left_node_189, "13op.c", 1759))->compile(((struct sNode*)come_null_check(left_node_189, "13op.c", 1759))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional261) {
        __result196__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result196__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value284=get_value_from_stack(-1,info))));
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_191=((struct sXOrNode*)come_null_check(self, "13op.c", 1762))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional262=!((struct sNode*)come_null_check(right_node_191, "13op.c", 1768))->compile(((struct sNode*)come_null_check(right_node_191, "13op.c", 1768))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional262) {
        __result197__ = (_Bool)0;
        if(left_value_190 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result197__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value285=get_value_from_stack(-1,info))));
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_193=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_190, "13op.c", 1771))->type);
    __freed_obj__ = 0;
    fun_name_194="operator_xor";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional263=((struct sXOrNode*)come_null_check(self, "13op.c", 1782))->mQuote,    __freed_obj__ = 0, 
    _if_conditional263) {
        calling_fun_195=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_195=operator_overload_fun(type_193,fun_name_194,left_value_190,right_value_192,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional264=!calling_fun_195,    __freed_obj__ = 0, 
    _if_conditional264) {
        come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1783))));
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj140=((struct CVALUE*)come_null_check(come_value_196, "13op.c", 1785))->c_value;
        ((struct CVALUE*)come_null_check(come_value_196, "13op.c", 1785))->c_value=(char*)come_increment_ref_count(((char*)(right_value287=xsprintf("%s^%s",((struct CVALUE*)come_null_check(left_value_190, "13op.c", 1785))->c_value,((struct CVALUE*)come_null_check(right_value_192, "13op.c", 1785))->c_value))));
        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj141=((struct CVALUE*)come_null_check(come_value_196, "13op.c", 1786))->type;
        ((struct CVALUE*)come_null_check(come_value_196, "13op.c", 1786))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value288=sType_clone(((struct CVALUE*)come_null_check(left_value_190, "13op.c", 1786))->type))));
        if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_196, "13op.c", 1787))->type, "13op.c", 1787))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_196, "13op.c", 1788))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_196, "13op.c", 1790))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1792))->stack, "13op.c", 1792)),(struct CVALUE*)come_increment_ref_count(come_value_196));
        __freed_obj__ = 0;
        if(come_value_196 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_196, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result198__ = (_Bool)1;
    if(left_value_190 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_192 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result198__;
    __freed_obj__ = 0;
    if(left_value_190 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_192 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_193 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result199__ = ((struct sXOrNode*)come_null_check(self, "13op.c", 1800))->sline;
    __freed_obj__ = 0;
    return __result199__;
    __freed_obj__ = 0;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value289;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value289, 0, sizeof(void*));
    __result200__ = __result_obj__ = ((char*)(right_value289=__builtin_string(((struct sXOrNode*)come_null_check(self, "13op.c", 1805))->sname)));
    __freed_obj__ = 0;
    return __result200__;
    __freed_obj__ = 0;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value290;
char* __dec_obj142;
void* right_value291;
struct sNode* __dec_obj143;
void* right_value292;
struct sNode* __dec_obj144;
struct sOrNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value292, 0, sizeof(void*));
    ((struct sOrNode*)come_null_check(self, "13op.c", 1820))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1820))->sline;
    __freed_obj__ = 0;
    __dec_obj142=((struct sOrNode*)come_null_check(self, "13op.c", 1821))->sname;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1821))->sname=(char*)come_increment_ref_count(((char*)(right_value290=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1821))->sname))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1823))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj143=((struct sOrNode*)come_null_check(self, "13op.c", 1824))->mLeft;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1824))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value291=sNode_clone(left))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, ((struct sNode*)right_value291)->finalize, ((struct sNode*)right_value291)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj144=((struct sOrNode*)come_null_check(self, "13op.c", 1825))->mRight;
    ((struct sOrNode*)come_null_check(self, "13op.c", 1825))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value292=sNode_clone(right))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, ((struct sNode*)right_value292)->finalize, ((struct sNode*)right_value292)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result201__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result201__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result202__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result202__;
    __freed_obj__ = 0;
}

char* sOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value293;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value293, 0, sizeof(void*));
    __result203__ = __result_obj__ = ((char*)(right_value293=__builtin_string("sOrNode")));
    __freed_obj__ = 0;
    return __result203__;
    __freed_obj__ = 0;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_197;
_Bool _if_conditional268;
_Bool __result204__;
void* right_value294;
struct CVALUE* left_value_198;
struct sNode* right_node_199;
_Bool _if_conditional269;
_Bool __result205__;
void* right_value295;
struct CVALUE* right_value_200;
struct sType* type_201;
char* fun_name_202;
_Bool calling_fun_203;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value296;
struct CVALUE* come_value_204;
void* right_value297;
char* __dec_obj145;
void* right_value298;
struct sType* __dec_obj146;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_197, 0, sizeof(struct sNode*));
memset(&right_value294, 0, sizeof(void*));
memset(&left_value_198, 0, sizeof(struct CVALUE*));
memset(&right_node_199, 0, sizeof(struct sNode*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value_200, 0, sizeof(struct CVALUE*));
memset(&type_201, 0, sizeof(struct sType*));
memset(&fun_name_202, 0, sizeof(char*));
memset(&calling_fun_203, 0, sizeof(_Bool));
memset(&right_value296, 0, sizeof(void*));
memset(&come_value_204, 0, sizeof(struct CVALUE*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
    left_node_197=((struct sOrNode*)come_null_check(self, "13op.c", 1843))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional268=!((struct sNode*)come_null_check(left_node_197, "13op.c", 1849))->compile(((struct sNode*)come_null_check(left_node_197, "13op.c", 1849))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional268) {
        __result204__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result204__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=get_value_from_stack(-1,info))));
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_199=((struct sOrNode*)come_null_check(self, "13op.c", 1852))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional269=!((struct sNode*)come_null_check(right_node_199, "13op.c", 1858))->compile(((struct sNode*)come_null_check(right_node_199, "13op.c", 1858))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional269) {
        __result205__ = (_Bool)0;
        if(left_value_198 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_198, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result205__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value295=get_value_from_stack(-1,info))));
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_201=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_198, "13op.c", 1861))->type);
    __freed_obj__ = 0;
    fun_name_202="operator_or";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional270=((struct sOrNode*)come_null_check(self, "13op.c", 1873))->mQuote,    __freed_obj__ = 0, 
    _if_conditional270) {
        calling_fun_203=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_203=operator_overload_fun(type_201,fun_name_202,left_value_198,right_value_200,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional271=!calling_fun_203,    __freed_obj__ = 0, 
    _if_conditional271) {
        come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1874))));
        if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj145=((struct CVALUE*)come_null_check(come_value_204, "13op.c", 1876))->c_value;
        ((struct CVALUE*)come_null_check(come_value_204, "13op.c", 1876))->c_value=(char*)come_increment_ref_count(((char*)(right_value297=xsprintf("%s|%s",((struct CVALUE*)come_null_check(left_value_198, "13op.c", 1876))->c_value,((struct CVALUE*)come_null_check(right_value_200, "13op.c", 1876))->c_value))));
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
        if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj146=((struct CVALUE*)come_null_check(come_value_204, "13op.c", 1877))->type;
        ((struct CVALUE*)come_null_check(come_value_204, "13op.c", 1877))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value298=sType_clone(((struct CVALUE*)come_null_check(left_value_198, "13op.c", 1877))->type))));
        if(__dec_obj146) { come_call_finalizer(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_204, "13op.c", 1878))->type, "13op.c", 1878))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_204, "13op.c", 1879))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_204, "13op.c", 1881))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1883))->stack, "13op.c", 1883)),(struct CVALUE*)come_increment_ref_count(come_value_204));
        __freed_obj__ = 0;
        if(come_value_204 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result206__ = (_Bool)1;
    if(left_value_198 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_200 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_200, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result206__;
    __freed_obj__ = 0;
    if(left_value_198 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_200 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_200, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result207__ = ((struct sOrNode*)come_null_check(self, "13op.c", 1891))->sline;
    __freed_obj__ = 0;
    return __result207__;
    __freed_obj__ = 0;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value299;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value299, 0, sizeof(void*));
    __result208__ = __result_obj__ = ((char*)(right_value299=__builtin_string(((struct sOrNode*)come_null_check(self, "13op.c", 1896))->sname)));
    __freed_obj__ = 0;
    return __result208__;
    __freed_obj__ = 0;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value300;
char* __dec_obj147;
void* right_value301;
struct sNode* __dec_obj148;
void* right_value302;
struct sNode* __dec_obj149;
struct sAndAndNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1911))->sline=((struct sInfo*)come_null_check(info, "13op.c", 1911))->sline;
    __freed_obj__ = 0;
    __dec_obj147=((struct sAndAndNode*)come_null_check(self, "13op.c", 1912))->sname;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1912))->sname=(char*)come_increment_ref_count(((char*)(right_value300=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 1912))->sname))));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1914))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj148=((struct sAndAndNode*)come_null_check(self, "13op.c", 1915))->mLeft;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1915))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=sNode_clone(left))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj149=((struct sAndAndNode*)come_null_check(self, "13op.c", 1916))->mRight;
    ((struct sAndAndNode*)come_null_check(self, "13op.c", 1916))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value302=sNode_clone(right))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result209__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result209__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result210__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result210__;
    __freed_obj__ = 0;
}

char* sAndAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value303;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value303, 0, sizeof(void*));
    __result211__ = __result_obj__ = ((char*)(right_value303=__builtin_string("sAndAndNode")));
    __freed_obj__ = 0;
    return __result211__;
    __freed_obj__ = 0;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_205;
_Bool _if_conditional275;
_Bool __result212__;
void* right_value304;
struct CVALUE* left_value_206;
struct sNode* right_node_207;
_Bool _if_conditional276;
_Bool __result213__;
void* right_value305;
struct CVALUE* right_value_208;
struct sType* type_209;
char* fun_name_210;
_Bool calling_fun_211;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value306;
struct CVALUE* come_value_212;
void* right_value307;
char* __dec_obj150;
void* right_value308;
struct sType* __dec_obj151;
_Bool __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_205, 0, sizeof(struct sNode*));
memset(&right_value304, 0, sizeof(void*));
memset(&left_value_206, 0, sizeof(struct CVALUE*));
memset(&right_node_207, 0, sizeof(struct sNode*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value_208, 0, sizeof(struct CVALUE*));
memset(&type_209, 0, sizeof(struct sType*));
memset(&fun_name_210, 0, sizeof(char*));
memset(&calling_fun_211, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
memset(&come_value_212, 0, sizeof(struct CVALUE*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
    left_node_205=((struct sAndAndNode*)come_null_check(self, "13op.c", 1934))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional275=!((struct sNode*)come_null_check(left_node_205, "13op.c", 1940))->compile(((struct sNode*)come_null_check(left_node_205, "13op.c", 1940))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional275) {
        __result212__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result212__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value304=get_value_from_stack(-1,info))));
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_207=((struct sAndAndNode*)come_null_check(self, "13op.c", 1943))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional276=!((struct sNode*)come_null_check(right_node_207, "13op.c", 1949))->compile(((struct sNode*)come_null_check(right_node_207, "13op.c", 1949))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional276) {
        __result213__ = (_Bool)0;
        if(left_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result213__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value305=get_value_from_stack(-1,info))));
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_209=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_206, "13op.c", 1952))->type);
    __freed_obj__ = 0;
    fun_name_210="operator_andand";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional277=((struct sAndAndNode*)come_null_check(self, "13op.c", 1964))->mQuote,    __freed_obj__ = 0, 
    _if_conditional277) {
        calling_fun_211=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_211=operator_overload_fun(type_209,fun_name_210,left_value_206,right_value_208,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional278=!calling_fun_211,    __freed_obj__ = 0, 
    _if_conditional278) {
        come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value306=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1965))));
        if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj150=((struct CVALUE*)come_null_check(come_value_212, "13op.c", 1967))->c_value;
        ((struct CVALUE*)come_null_check(come_value_212, "13op.c", 1967))->c_value=(char*)come_increment_ref_count(((char*)(right_value307=xsprintf("%s&&%s",((struct CVALUE*)come_null_check(left_value_206, "13op.c", 1967))->c_value,((struct CVALUE*)come_null_check(right_value_208, "13op.c", 1967))->c_value))));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj151=((struct CVALUE*)come_null_check(come_value_212, "13op.c", 1968))->type;
        ((struct CVALUE*)come_null_check(come_value_212, "13op.c", 1968))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(((struct CVALUE*)come_null_check(left_value_206, "13op.c", 1968))->type))));
        if(__dec_obj151) { come_call_finalizer(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_212, "13op.c", 1969))->type, "13op.c", 1969))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_212, "13op.c", 1970))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_212, "13op.c", 1972))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 1974))->stack, "13op.c", 1974)),(struct CVALUE*)come_increment_ref_count(come_value_212));
        __freed_obj__ = 0;
        if(come_value_212 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result214__ = (_Bool)1;
    if(left_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_208 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result214__;
    __freed_obj__ = 0;
    if(left_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_208 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result215__ = ((struct sAndAndNode*)come_null_check(self, "13op.c", 1982))->sline;
    __freed_obj__ = 0;
    return __result215__;
    __freed_obj__ = 0;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value309;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
    __result216__ = __result_obj__ = ((char*)(right_value309=__builtin_string(((struct sAndAndNode*)come_null_check(self, "13op.c", 1987))->sname)));
    __freed_obj__ = 0;
    return __result216__;
    __freed_obj__ = 0;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value310;
char* __dec_obj152;
void* right_value311;
struct sNode* __dec_obj153;
void* right_value312;
struct sNode* __dec_obj154;
struct sOrOrNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value312, 0, sizeof(void*));
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 2002))->sline=((struct sInfo*)come_null_check(info, "13op.c", 2002))->sline;
    __freed_obj__ = 0;
    __dec_obj152=((struct sOrOrNode*)come_null_check(self, "13op.c", 2003))->sname;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 2003))->sname=(char*)come_increment_ref_count(((char*)(right_value310=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 2003))->sname))));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 2005))->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj153=((struct sOrOrNode*)come_null_check(self, "13op.c", 2006))->mLeft;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 2006))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj154=((struct sOrOrNode*)come_null_check(self, "13op.c", 2007))->mRight;
    ((struct sOrOrNode*)come_null_check(self, "13op.c", 2007))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value312=sNode_clone(right))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, ((struct sNode*)right_value312)->finalize, ((struct sNode*)right_value312)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result217__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result217__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result218__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result218__;
    __freed_obj__ = 0;
}

char* sOrOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value313;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value313, 0, sizeof(void*));
    __result219__ = __result_obj__ = ((char*)(right_value313=__builtin_string("sOrOrNode")));
    __freed_obj__ = 0;
    return __result219__;
    __freed_obj__ = 0;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_213;
_Bool _if_conditional282;
_Bool __result220__;
void* right_value314;
struct CVALUE* left_value_214;
struct sNode* right_node_215;
_Bool _if_conditional283;
_Bool __result221__;
void* right_value315;
struct CVALUE* right_value_216;
struct sType* type_217;
char* fun_name_218;
_Bool calling_fun_219;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value316;
struct CVALUE* come_value_220;
void* right_value317;
char* __dec_obj155;
void* right_value318;
struct sType* __dec_obj156;
_Bool __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_213, 0, sizeof(struct sNode*));
memset(&right_value314, 0, sizeof(void*));
memset(&left_value_214, 0, sizeof(struct CVALUE*));
memset(&right_node_215, 0, sizeof(struct sNode*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value_216, 0, sizeof(struct CVALUE*));
memset(&type_217, 0, sizeof(struct sType*));
memset(&fun_name_218, 0, sizeof(char*));
memset(&calling_fun_219, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
memset(&come_value_220, 0, sizeof(struct CVALUE*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
    left_node_213=((struct sOrOrNode*)come_null_check(self, "13op.c", 2025))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional282=!((struct sNode*)come_null_check(left_node_213, "13op.c", 2031))->compile(((struct sNode*)come_null_check(left_node_213, "13op.c", 2031))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional282) {
        __result220__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result220__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value314=get_value_from_stack(-1,info))));
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_215=((struct sOrOrNode*)come_null_check(self, "13op.c", 2034))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional283=!((struct sNode*)come_null_check(right_node_215, "13op.c", 2040))->compile(((struct sNode*)come_null_check(right_node_215, "13op.c", 2040))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional283) {
        __result221__ = (_Bool)0;
        if(left_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result221__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value315=get_value_from_stack(-1,info))));
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_217=(struct sType*)come_increment_ref_count(((struct CVALUE*)come_null_check(left_value_214, "13op.c", 2043))->type);
    __freed_obj__ = 0;
    fun_name_218="operator_oror";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional284=((struct sOrOrNode*)come_null_check(self, "13op.c", 2054))->mQuote,    __freed_obj__ = 0, 
    _if_conditional284) {
        calling_fun_219=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_219=operator_overload_fun(type_217,fun_name_218,left_value_214,right_value_216,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional285=!calling_fun_219,    __freed_obj__ = 0, 
    _if_conditional285) {
        come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value316=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2055))));
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj155=((struct CVALUE*)come_null_check(come_value_220, "13op.c", 2057))->c_value;
        ((struct CVALUE*)come_null_check(come_value_220, "13op.c", 2057))->c_value=(char*)come_increment_ref_count(((char*)(right_value317=xsprintf("%s||%s",((struct CVALUE*)come_null_check(left_value_214, "13op.c", 2057))->c_value,((struct CVALUE*)come_null_check(right_value_216, "13op.c", 2057))->c_value))));
        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
        if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        __dec_obj156=((struct CVALUE*)come_null_check(come_value_220, "13op.c", 2058))->type;
        ((struct CVALUE*)come_null_check(come_value_220, "13op.c", 2058))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value318=sType_clone(((struct CVALUE*)come_null_check(left_value_214, "13op.c", 2058))->type))));
        if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_220, "13op.c", 2059))->type, "13op.c", 2059))->mHeap=(_Bool)0;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_220, "13op.c", 2060))->var=((void*)0);
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_220, "13op.c", 2062))->c_value);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 2064))->stack, "13op.c", 2064)),(struct CVALUE*)come_increment_ref_count(come_value_220));
        __freed_obj__ = 0;
        if(come_value_220 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result222__ = (_Bool)1;
    if(left_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result222__;
    __freed_obj__ = 0;
    if(left_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_217 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_217, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result223__ = ((struct sOrOrNode*)come_null_check(self, "13op.c", 2072))->sline;
    __freed_obj__ = 0;
    return __result223__;
    __freed_obj__ = 0;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value319;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value319, 0, sizeof(void*));
    __result224__ = __result_obj__ = ((char*)(right_value319=__builtin_string(((struct sOrOrNode*)come_null_check(self, "13op.c", 2077))->sname)));
    __freed_obj__ = 0;
    return __result224__;
    __freed_obj__ = 0;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value320;
char* __dec_obj157;
void* right_value321;
struct sNode* __dec_obj158;
void* right_value322;
struct sNode* __dec_obj159;
struct sCommaNode* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value320, 0, sizeof(void*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2092))->sline=((struct sInfo*)come_null_check(info, "13op.c", 2092))->sline;
    __freed_obj__ = 0;
    __dec_obj157=((struct sCommaNode*)come_null_check(self, "13op.c", 2093))->sname;
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2093))->sname=(char*)come_increment_ref_count(((char*)(right_value320=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 2093))->sname))));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj158=((struct sCommaNode*)come_null_check(self, "13op.c", 2095))->mLeft;
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2095))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value321=sNode_clone(left))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { right_value321 = come_decrement_ref_count(right_value321, ((struct sNode*)right_value321)->finalize, ((struct sNode*)right_value321)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj159=((struct sCommaNode*)come_null_check(self, "13op.c", 2096))->mRight;
    ((struct sCommaNode*)come_null_check(self, "13op.c", 2096))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=sNode_clone(right))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result225__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result225__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sCommaNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result226__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result226__;
    __freed_obj__ = 0;
}

char* sCommaNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value323;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
    __result227__ = __result_obj__ = ((char*)(right_value323=__builtin_string("sCommaNode")));
    __freed_obj__ = 0;
    return __result227__;
    __freed_obj__ = 0;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* left_node_221;
_Bool _if_conditional289;
_Bool __result228__;
void* right_value324;
struct CVALUE* left_value_222;
struct sNode* right_node_223;
_Bool _if_conditional290;
_Bool __result229__;
void* right_value325;
struct CVALUE* right_value_224;
void* right_value326;
struct CVALUE* come_value_225;
void* right_value327;
char* __dec_obj160;
void* right_value328;
struct sType* __dec_obj161;
_Bool __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_221, 0, sizeof(struct sNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&left_value_222, 0, sizeof(struct CVALUE*));
memset(&right_node_223, 0, sizeof(struct sNode*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value_224, 0, sizeof(struct CVALUE*));
memset(&right_value326, 0, sizeof(void*));
memset(&come_value_225, 0, sizeof(struct CVALUE*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
    left_node_221=((struct sCommaNode*)come_null_check(self, "13op.c", 2114))->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional289=!((struct sNode*)come_null_check(left_node_221, "13op.c", 2120))->compile(((struct sNode*)come_null_check(left_node_221, "13op.c", 2120))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional289) {
        __result228__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result228__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value324=get_value_from_stack(-1,info))));
    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_node_223=((struct sCommaNode*)come_null_check(self, "13op.c", 2123))->mRight;
    __freed_obj__ = 0;
    if(_if_conditional290=!((struct sNode*)come_null_check(right_node_223, "13op.c", 2129))->compile(((struct sNode*)come_null_check(right_node_223, "13op.c", 2129))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional290) {
        __result229__ = (_Bool)0;
        if(left_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result229__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value325=get_value_from_stack(-1,info))));
    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2132))));
    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj160=((struct CVALUE*)come_null_check(come_value_225, "13op.c", 2134))->c_value;
    ((struct CVALUE*)come_null_check(come_value_225, "13op.c", 2134))->c_value=(char*)come_increment_ref_count(((char*)(right_value327=xsprintf("%s,%s",((struct CVALUE*)come_null_check(left_value_222, "13op.c", 2134))->c_value,((struct CVALUE*)come_null_check(right_value_224, "13op.c", 2134))->c_value))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj161=((struct CVALUE*)come_null_check(come_value_225, "13op.c", 2135))->type;
    ((struct CVALUE*)come_null_check(come_value_225, "13op.c", 2135))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(((struct CVALUE*)come_null_check(left_value_222, "13op.c", 2135))->type))));
    if(__dec_obj161) { come_call_finalizer(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_225, "13op.c", 2136))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_225, "13op.c", 2138))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 2140))->stack, "13op.c", 2140)),(struct CVALUE*)come_increment_ref_count(come_value_225));
    __freed_obj__ = 0;
    __result230__ = (_Bool)1;
    if(left_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result230__;
    __freed_obj__ = 0;
    if(left_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result231__ = ((struct sCommaNode*)come_null_check(self, "13op.c", 2147))->sline;
    __freed_obj__ = 0;
    return __result231__;
    __freed_obj__ = 0;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value329;
char* __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value329, 0, sizeof(void*));
    __result232__ = __result_obj__ = ((char*)(right_value329=__builtin_string(((struct sCommaNode*)come_null_check(self, "13op.c", 2152))->sname)));
    __freed_obj__ = 0;
    return __result232__;
    __freed_obj__ = 0;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value330;
char* __dec_obj162;
void* right_value331;
struct sNode* __dec_obj163;
void* right_value332;
struct sNode* __dec_obj164;
void* right_value333;
struct sNode* __dec_obj165;
struct sConditionalNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value332, 0, sizeof(void*));
memset(&right_value333, 0, sizeof(void*));
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2168))->sline=((struct sInfo*)come_null_check(info, "13op.c", 2168))->sline;
    __freed_obj__ = 0;
    __dec_obj162=((struct sConditionalNode*)come_null_check(self, "13op.c", 2169))->sname;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2169))->sname=(char*)come_increment_ref_count(((char*)(right_value330=__builtin_string(((struct sInfo*)come_null_check(info, "13op.c", 2169))->sname))));
    if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, (void*)0, (void*)0, 0,0,0); }
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj163=((struct sConditionalNode*)come_null_check(self, "13op.c", 2171))->mValue1;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2171))->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value331=sNode_clone(value1))));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0); }
    if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj164=((struct sConditionalNode*)come_null_check(self, "13op.c", 2172))->mValue2;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2172))->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=sNode_clone(value2))));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0); }
    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { right_value332 = come_decrement_ref_count(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __dec_obj165=((struct sConditionalNode*)come_null_check(self, "13op.c", 2173))->mValue3;
    ((struct sConditionalNode*)come_null_check(self, "13op.c", 2173))->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=sNode_clone(value3))));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0); }
    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result233__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result233__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
}

_Bool sConditionalNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result234__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result234__;
    __freed_obj__ = 0;
}

char* sConditionalNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value334;
char* __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value334, 0, sizeof(void*));
    __result235__ = __result_obj__ = ((char*)(right_value334=__builtin_string("sConditionalNode")));
    __freed_obj__ = 0;
    return __result235__;
    __freed_obj__ = 0;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* value1_226;
_Bool _if_conditional295;
_Bool __result236__;
void* right_value335;
struct CVALUE* value1_value_227;
struct sNode* value2_228;
_Bool _if_conditional296;
_Bool __result237__;
void* right_value336;
struct CVALUE* value2_value_229;
struct sNode* value3_230;
_Bool _if_conditional297;
_Bool __result238__;
void* right_value337;
struct CVALUE* value3_value_231;
void* right_value338;
struct CVALUE* come_value_232;
void* right_value339;
char* __dec_obj166;
void* right_value340;
struct sType* __dec_obj167;
_Bool __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value1_226, 0, sizeof(struct sNode*));
memset(&right_value335, 0, sizeof(void*));
memset(&value1_value_227, 0, sizeof(struct CVALUE*));
memset(&value2_228, 0, sizeof(struct sNode*));
memset(&right_value336, 0, sizeof(void*));
memset(&value2_value_229, 0, sizeof(struct CVALUE*));
memset(&value3_230, 0, sizeof(struct sNode*));
memset(&right_value337, 0, sizeof(void*));
memset(&value3_value_231, 0, sizeof(struct CVALUE*));
memset(&right_value338, 0, sizeof(void*));
memset(&come_value_232, 0, sizeof(struct CVALUE*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
    value1_226=((struct sConditionalNode*)come_null_check(self, "13op.c", 2191))->mValue1;
    __freed_obj__ = 0;
    if(_if_conditional295=!((struct sNode*)come_null_check(value1_226, "13op.c", 2197))->compile(((struct sNode*)come_null_check(value1_226, "13op.c", 2197))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional295) {
        __result236__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result236__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    value1_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=get_value_from_stack(-1,info))));
    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    value2_228=((struct sConditionalNode*)come_null_check(self, "13op.c", 2200))->mValue2;
    __freed_obj__ = 0;
    if(_if_conditional296=!((struct sNode*)come_null_check(value2_228, "13op.c", 2206))->compile(((struct sNode*)come_null_check(value2_228, "13op.c", 2206))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional296) {
        __result237__ = (_Bool)0;
        if(value1_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result237__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    value2_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value336=get_value_from_stack(-1,info))));
    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    value3_230=((struct sConditionalNode*)come_null_check(self, "13op.c", 2209))->mValue3;
    __freed_obj__ = 0;
    if(_if_conditional297=!((struct sNode*)come_null_check(value3_230, "13op.c", 2215))->compile(((struct sNode*)come_null_check(value3_230, "13op.c", 2215))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional297) {
        __result238__ = (_Bool)0;
        if(value1_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value2_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result238__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    value3_value_231=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value337=get_value_from_stack(-1,info))));
    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2218))));
    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj166=((struct CVALUE*)come_null_check(come_value_232, "13op.c", 2220))->c_value;
    ((struct CVALUE*)come_null_check(come_value_232, "13op.c", 2220))->c_value=(char*)come_increment_ref_count(((char*)(right_value339=xsprintf("%s?%s:%s",((struct CVALUE*)come_null_check(value1_value_227, "13op.c", 2220))->c_value,((struct CVALUE*)come_null_check(value2_value_229, "13op.c", 2220))->c_value,((struct CVALUE*)come_null_check(value3_value_231, "13op.c", 2220))->c_value))));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, (void*)0, (void*)0, 0,0,0); }
    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    __dec_obj167=((struct CVALUE*)come_null_check(come_value_232, "13op.c", 2221))->type;
    ((struct CVALUE*)come_null_check(come_value_232, "13op.c", 2221))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(((struct CVALUE*)come_null_check(value1_value_227, "13op.c", 2221))->type))));
    if(__dec_obj167) { come_call_finalizer(sType_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_232, "13op.c", 2222))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_232, "13op.c", 2224))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "13op.c", 2226))->stack, "13op.c", 2226)),(struct CVALUE*)come_increment_ref_count(come_value_232));
    __freed_obj__ = 0;
    __result239__ = (_Bool)1;
    if(value1_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_231 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_232 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result239__;
    __freed_obj__ = 0;
    if(value1_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_231 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_232 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
int __result240__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result240__ = ((struct sConditionalNode*)come_null_check(self, "13op.c", 2233))->sline;
    __freed_obj__ = 0;
    return __result240__;
    __freed_obj__ = 0;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value341;
char* __result241__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value341, 0, sizeof(void*));
    __result241__ = __result_obj__ = ((char*)(right_value341=__builtin_string(((struct sConditionalNode*)come_null_check(self, "13op.c", 2238))->sname)));
    __freed_obj__ = 0;
    return __result241__;
    __freed_obj__ = 0;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value342;
struct sNode* node_233;
_Bool _while_condtional10;
_Bool _if_conditional298;
void* right_value343;
struct sNode* right_234;
void* right_value344;
void* right_value345;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value350;
struct sNode* __result244__;
_Bool _if_conditional308;
void* right_value351;
struct sNode* right_236;
void* right_value352;
void* right_value353;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value358;
struct sNode* __result247__;
_Bool _if_conditional318;
void* right_value359;
struct sNode* right_238;
void* right_value360;
void* right_value361;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value366;
struct sNode* __result250__;
_Bool _if_conditional328;
void* right_value367;
struct sNode* right_240;
void* right_value368;
void* right_value369;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value374;
struct sNode* __result253__;
_Bool _if_conditional338;
void* right_value375;
struct sNode* right_242;
void* right_value376;
void* right_value377;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value382;
struct sNode* __result256__;
_Bool _if_conditional348;
void* right_value383;
struct sNode* right_244;
void* right_value384;
void* right_value385;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value390;
struct sNode* __result259__;
struct sNode* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value342, 0, sizeof(void*));
memset(&node_233, 0, sizeof(struct sNode*));
memset(&right_value343, 0, sizeof(void*));
memset(&right_234, 0, sizeof(struct sNode*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_236, 0, sizeof(struct sNode*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
memset(&right_238, 0, sizeof(struct sNode*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_240, 0, sizeof(struct sNode*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_242, 0, sizeof(struct sNode*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&right_244, 0, sizeof(struct sNode*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
    node_233=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=expression_node_v99(info))));
    if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional10=*((struct sInfo*)come_null_check(info, "13op.c", 2301))->p,    __freed_obj__ = 0, 
    _while_condtional10) {
        if(_if_conditional298=!((struct sNode*)come_null_check(node_233, "13op.c", 2299))->terminated(((struct sNode*)come_null_check(node_233, "13op.c", 2299))->_protocol_obj)&&*((struct sInfo*)come_null_check(info, "13op.c", 2299))->p==42&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional298) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2249))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_234=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=mult_exp(info))));
            if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2254);
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value345=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value344=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2254)))),(struct sNode*)come_increment_ref_count(node_233),(struct sNode*)come_increment_ref_count(right_234),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result244__ = __result_obj__ = ((struct sNode*)(right_value350=_inf_value3));
            if(right_234 && !__freed_obj__) { right_234 = come_decrement_ref_count(right_234, ((struct sNode*)right_234)->finalize, ((struct sNode*)right_234)->_protocol_obj, 0, 0, 0); } 
            if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0); } 
            if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result244__;
            __freed_obj__ = 0;
            if(right_234 && !__freed_obj__) { right_234 = come_decrement_ref_count(right_234, ((struct sNode*)right_234)->finalize, ((struct sNode*)right_234)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional308=*((struct sInfo*)come_null_check(info, "13op.c", 2299))->p==47&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+1)!=61,            __freed_obj__ = 0, 
            _if_conditional308) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2257))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=mult_exp(info))));
                if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2262);
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value353=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value352=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2262)))),(struct sNode*)come_increment_ref_count(node_233),(struct sNode*)come_increment_ref_count(right_236),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result247__ = __result_obj__ = ((struct sNode*)(right_value358=_inf_value4));
                if(right_236 && !__freed_obj__) { right_236 = come_decrement_ref_count(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0); } 
                if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0); } 
                if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result247__;
                __freed_obj__ = 0;
                if(right_236 && !__freed_obj__) { right_236 = come_decrement_ref_count(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional318=*((struct sInfo*)come_null_check(info, "13op.c", 2299))->p==37&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+1)!=61,                __freed_obj__ = 0, 
                _if_conditional318) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2265))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value359=expression_node_v99(info))));
                    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2270);
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value361=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value360=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2270)))),(struct sNode*)come_increment_ref_count(node_233),(struct sNode*)come_increment_ref_count(right_238),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result250__ = __result_obj__ = ((struct sNode*)(right_value366=_inf_value5));
                    if(right_238 && !__freed_obj__) { right_238 = come_decrement_ref_count(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0); } 
                    if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0); } 
                    if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result250__;
                    __freed_obj__ = 0;
                    if(right_238 && !__freed_obj__) { right_238 = come_decrement_ref_count(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional328=!((struct sNode*)come_null_check(node_233, "13op.c", 2299))->terminated(((struct sNode*)come_null_check(node_233, "13op.c", 2299))->_protocol_obj)&&*((struct sInfo*)come_null_check(info, "13op.c", 2299))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+1)==42&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+2)!=61,                    __freed_obj__ = 0, 
                    _if_conditional328) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2273))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=mult_exp(info))));
                        if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2278);
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value369=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value368=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2278)))),(struct sNode*)come_increment_ref_count(node_233),(struct sNode*)come_increment_ref_count(right_240),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result253__ = __result_obj__ = ((struct sNode*)(right_value374=_inf_value6));
                        if(right_240 && !__freed_obj__) { right_240 = come_decrement_ref_count(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0); } 
                        if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0); } 
                        if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result253__;
                        __freed_obj__ = 0;
                        if(right_240 && !__freed_obj__) { right_240 = come_decrement_ref_count(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional338=*((struct sInfo*)come_null_check(info, "13op.c", 2299))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+1)==47&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+2)!=61,                        __freed_obj__ = 0, 
                        _if_conditional338) {
                            ((struct sInfo*)come_null_check(info, "13op.c", 2281))->p+=2;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=mult_exp(info))));
                            if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2286);
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value377=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value376=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2286)))),(struct sNode*)come_increment_ref_count(node_233),(struct sNode*)come_increment_ref_count(right_242),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result256__ = __result_obj__ = ((struct sNode*)(right_value382=_inf_value7));
                            if(right_242 && !__freed_obj__) { right_242 = come_decrement_ref_count(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0); } 
                            if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0); } 
                            if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result256__;
                            __freed_obj__ = 0;
                            if(right_242 && !__freed_obj__) { right_242 = come_decrement_ref_count(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional348=*((struct sInfo*)come_null_check(info, "13op.c", 2299))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+1)==37&&*(((struct sInfo*)come_null_check(info, "13op.c", 2299))->p+2)!=61,                            __freed_obj__ = 0, 
                            _if_conditional348) {
                                ((struct sInfo*)come_null_check(info, "13op.c", 2289))->p+=2;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                right_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=expression_node_v99(info))));
                                if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2294);
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value385=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value384=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2294)))),(struct sNode*)come_increment_ref_count(node_233),(struct sNode*)come_increment_ref_count(right_244),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result259__ = __result_obj__ = ((struct sNode*)(right_value390=_inf_value8));
                                if(right_244 && !__freed_obj__) { right_244 = come_decrement_ref_count(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0); } 
                                if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0); } 
                                if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result259__;
                                __freed_obj__ = 0;
                                if(right_244 && !__freed_obj__) { right_244 = come_decrement_ref_count(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result260__ = __result_obj__ = node_233;
    if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result260__;
    __freed_obj__ = 0;
    if(node_233 && !__freed_obj__) { node_233 = come_decrement_ref_count(node_233, ((struct sNode*)node_233)->finalize, ((struct sNode*)node_233)->_protocol_obj, 0, 0, 0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional329;
_Bool _if_conditional330;
_Bool _if_conditional331;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional329=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional329) {
                                if(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional330=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional330) {
                                if(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional331=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 3))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional331) {
                                if(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->sname && !__freed_obj__) { ((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->sname = come_decrement_ref_count(((struct sMultNode*)come_null_check(self, "sMultNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional332;
struct sMultNode* __result251__;
void* right_value370;
struct sMultNode* result_241;
_Bool _if_conditional333;
void* right_value371;
struct sNode* __dec_obj177;
_Bool _if_conditional334;
void* right_value372;
struct sNode* __dec_obj178;
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
void* right_value373;
char* __dec_obj179;
struct sMultNode* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value370, 0, sizeof(void*));
memset(&result_241, 0, sizeof(struct sMultNode*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
                            if(_if_conditional332=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional332) {
                                __result251__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result251__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_241=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value370=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3))));
                            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional333=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional333) {
                                __dec_obj177=((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 4))->mLeft;
                                ((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=sNode_clone(((struct sMultNode*)come_null_check(self, "sMultNode_clone", 4))->mLeft))));
                                if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0); }
                                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional334=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional334) {
                                __dec_obj178=((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 5))->mRight;
                                ((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=sNode_clone(((struct sMultNode*)come_null_check(self, "sMultNode_clone", 5))->mRight))));
                                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                                if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional335=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional335) {
                                ((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 6))->mQuote=((struct sMultNode*)come_null_check(self, "sMultNode_clone", 6))->mQuote;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional336=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional336) {
                                ((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 7))->sline=((struct sMultNode*)come_null_check(self, "sMultNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional337=self!=((void*)0)&&((struct sMultNode*)come_null_check(self, "sMultNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional337) {
                                __dec_obj179=((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 8))->sname;
                                ((struct sMultNode*)come_null_check(result_241, "sMultNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value373=string_clone(((struct sMultNode*)come_null_check(self, "sMultNode_clone", 8))->sname))));
                                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result252__ = __result_obj__ = result_241;
                            if(result_241 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_241, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result252__;
                            __freed_obj__ = 0;
                            if(result_241 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_241, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional339=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional339) {
                                    if(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional340=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional340) {
                                    if(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional341=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional341) {
                                    if(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->sname && !__freed_obj__) { ((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->sname = come_decrement_ref_count(((struct sDivNode*)come_null_check(self, "sDivNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional342;
struct sDivNode* __result254__;
void* right_value378;
struct sDivNode* result_243;
_Bool _if_conditional343;
void* right_value379;
struct sNode* __dec_obj180;
_Bool _if_conditional344;
void* right_value380;
struct sNode* __dec_obj181;
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool _if_conditional347;
void* right_value381;
char* __dec_obj182;
struct sDivNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value378, 0, sizeof(void*));
memset(&result_243, 0, sizeof(struct sDivNode*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
                                if(_if_conditional342=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional342) {
                                    __result254__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result254__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_243=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value378=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3))));
                                if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional343=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional343) {
                                    __dec_obj180=((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 4))->mLeft;
                                    ((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value379=sNode_clone(((struct sDivNode*)come_null_check(self, "sDivNode_clone", 4))->mLeft))));
                                    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0); }
                                    if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional344=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_clone", 6))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional344) {
                                    __dec_obj181=((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 5))->mRight;
                                    ((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=sNode_clone(((struct sDivNode*)come_null_check(self, "sDivNode_clone", 5))->mRight))));
                                    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0); }
                                    if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional345=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional345) {
                                    ((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 6))->mQuote=((struct sDivNode*)come_null_check(self, "sDivNode_clone", 6))->mQuote;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional346=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional346) {
                                    ((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 7))->sline=((struct sDivNode*)come_null_check(self, "sDivNode_clone", 7))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional347=self!=((void*)0)&&((struct sDivNode*)come_null_check(self, "sDivNode_clone", 9))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional347) {
                                    __dec_obj182=((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 8))->sname;
                                    ((struct sDivNode*)come_null_check(result_243, "sDivNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value381=string_clone(((struct sDivNode*)come_null_check(self, "sDivNode_clone", 8))->sname))));
                                    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count(__dec_obj182, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result255__ = __result_obj__ = result_243;
                                if(result_243 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result255__;
                                __freed_obj__ = 0;
                                if(result_243 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional349=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional349) {
                                        if(((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional350=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional350) {
                                        if(((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sModNode*)come_null_check(self, "sModNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional351=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional351) {
                                        if(((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->sname && !__freed_obj__) { ((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->sname = come_decrement_ref_count(((struct sModNode*)come_null_check(self, "sModNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional352;
struct sModNode* __result257__;
void* right_value386;
struct sModNode* result_245;
_Bool _if_conditional353;
void* right_value387;
struct sNode* __dec_obj183;
_Bool _if_conditional354;
void* right_value388;
struct sNode* __dec_obj184;
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value389;
char* __dec_obj185;
struct sModNode* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value386, 0, sizeof(void*));
memset(&result_245, 0, sizeof(struct sModNode*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
                                    if(_if_conditional352=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional352) {
                                        __result257__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result257__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_245=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value386=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3))));
                                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional353=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_clone", 5))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional353) {
                                        __dec_obj183=((struct sModNode*)come_null_check(result_245, "sModNode_clone", 4))->mLeft;
                                        ((struct sModNode*)come_null_check(result_245, "sModNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=sNode_clone(((struct sModNode*)come_null_check(self, "sModNode_clone", 4))->mLeft))));
                                        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0); }
                                        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional354=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_clone", 6))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional354) {
                                        __dec_obj184=((struct sModNode*)come_null_check(result_245, "sModNode_clone", 5))->mRight;
                                        ((struct sModNode*)come_null_check(result_245, "sModNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=sNode_clone(((struct sModNode*)come_null_check(self, "sModNode_clone", 5))->mRight))));
                                        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0); }
                                        if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional355=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional355) {
                                        ((struct sModNode*)come_null_check(result_245, "sModNode_clone", 6))->mQuote=((struct sModNode*)come_null_check(self, "sModNode_clone", 6))->mQuote;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional356=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional356) {
                                        ((struct sModNode*)come_null_check(result_245, "sModNode_clone", 7))->sline=((struct sModNode*)come_null_check(self, "sModNode_clone", 7))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional357=self!=((void*)0)&&((struct sModNode*)come_null_check(self, "sModNode_clone", 9))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional357) {
                                        __dec_obj185=((struct sModNode*)come_null_check(result_245, "sModNode_clone", 8))->sname;
                                        ((struct sModNode*)come_null_check(result_245, "sModNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(((struct sModNode*)come_null_check(self, "sModNode_clone", 8))->sname))));
                                        if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count(__dec_obj185, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result258__ = __result_obj__ = result_245;
                                    if(result_245 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result258__;
                                    __freed_obj__ = 0;
                                    if(result_245 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value391;
struct sNode* node_246;
_Bool _while_condtional11;
_Bool _if_conditional358;
void* right_value392;
struct sNode* right_247;
void* right_value393;
void* right_value394;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value399;
struct sNode* __result263__;
_Bool _if_conditional368;
void* right_value400;
struct sNode* right_249;
void* right_value401;
void* right_value402;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value407;
struct sNode* __result266__;
_Bool _if_conditional378;
void* right_value408;
struct sNode* right_251;
void* right_value409;
void* right_value410;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value415;
struct sNode* __result269__;
_Bool _if_conditional388;
void* right_value416;
struct sNode* right_253;
void* right_value417;
void* right_value418;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value423;
struct sNode* __result272__;
struct sNode* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value391, 0, sizeof(void*));
memset(&node_246, 0, sizeof(struct sNode*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_247, 0, sizeof(struct sNode*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_249, 0, sizeof(struct sNode*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_251, 0, sizeof(struct sNode*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_253, 0, sizeof(struct sNode*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
    node_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=mult_exp(info))));
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional11=*((struct sInfo*)come_null_check(info, "13op.c", 2354))->p,    __freed_obj__ = 0, 
    _while_condtional11) {
        if(_if_conditional358=*((struct sInfo*)come_null_check(info, "13op.c", 2352))->p==43&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+1)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+1)!=43,        __freed_obj__ = 0, 
        _if_conditional358) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2315))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value392=add_exp(info))));
            if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2320);
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value394=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value393=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2320)))),(struct sNode*)come_increment_ref_count(node_246),(struct sNode*)come_increment_ref_count(right_247),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result263__ = __result_obj__ = ((struct sNode*)(right_value399=_inf_value9));
            if(right_247 && !__freed_obj__) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0, 0); } 
            if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0); } 
            if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result263__;
            __freed_obj__ = 0;
            if(right_247 && !__freed_obj__) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional368=*((struct sInfo*)come_null_check(info, "13op.c", 2352))->p==45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+1)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+1)!=45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+1)!=62,            __freed_obj__ = 0, 
            _if_conditional368) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2324))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=add_exp(info))));
                if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { right_value400 = come_decrement_ref_count(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2329);
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value402=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value401=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2329)))),(struct sNode*)come_increment_ref_count(node_246),(struct sNode*)come_increment_ref_count(right_249),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result266__ = __result_obj__ = ((struct sNode*)(right_value407=_inf_value10));
                if(right_249 && !__freed_obj__) { right_249 = come_decrement_ref_count(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0); } 
                if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0); } 
                if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result266__;
                __freed_obj__ = 0;
                if(right_249 && !__freed_obj__) { right_249 = come_decrement_ref_count(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional378=*((struct sInfo*)come_null_check(info, "13op.c", 2352))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+1)==43&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+2)!=43,                __freed_obj__ = 0, 
                _if_conditional378) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2333))->p+=2;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=add_exp(info))));
                    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2338);
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value410=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value409=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2338)))),(struct sNode*)come_increment_ref_count(node_246),(struct sNode*)come_increment_ref_count(right_251),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result269__ = __result_obj__ = ((struct sNode*)(right_value415=_inf_value11));
                    if(right_251 && !__freed_obj__) { right_251 = come_decrement_ref_count(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0); } 
                    if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0); } 
                    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result269__;
                    __freed_obj__ = 0;
                    if(right_251 && !__freed_obj__) { right_251 = come_decrement_ref_count(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional388=*((struct sInfo*)come_null_check(info, "13op.c", 2352))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+1)==45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+2)!=45&&*(((struct sInfo*)come_null_check(info, "13op.c", 2352))->p+2)!=62,                    __freed_obj__ = 0, 
                    _if_conditional388) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2342))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=add_exp(info))));
                        if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2347);
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value418=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value417=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2347)))),(struct sNode*)come_increment_ref_count(node_246),(struct sNode*)come_increment_ref_count(right_253),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result272__ = __result_obj__ = ((struct sNode*)(right_value423=_inf_value12));
                        if(right_253 && !__freed_obj__) { right_253 = come_decrement_ref_count(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0); } 
                        if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0); } 
                        if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result272__;
                        __freed_obj__ = 0;
                        if(right_253 && !__freed_obj__) { right_253 = come_decrement_ref_count(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result273__ = __result_obj__ = node_246;
    if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result273__;
    __freed_obj__ = 0;
    if(node_246 && !__freed_obj__) { node_246 = come_decrement_ref_count(node_246, ((struct sNode*)node_246)->finalize, ((struct sNode*)node_246)->_protocol_obj, 0, 0, 0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional379;
_Bool _if_conditional380;
_Bool _if_conditional381;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional379=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional379) {
                            if(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional380=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional380) {
                            if(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional381=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional381) {
                            if(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAddNode*)come_null_check(self, "sAddNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional382;
struct sAddNode* __result267__;
void* right_value411;
struct sAddNode* result_252;
_Bool _if_conditional383;
void* right_value412;
struct sNode* __dec_obj192;
_Bool _if_conditional384;
void* right_value413;
struct sNode* __dec_obj193;
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
void* right_value414;
char* __dec_obj194;
struct sAddNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value411, 0, sizeof(void*));
memset(&result_252, 0, sizeof(struct sAddNode*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
                        if(_if_conditional382=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional382) {
                            __result267__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result267__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_252=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value411=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3))));
                        if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional383=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional383) {
                            __dec_obj192=((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 4))->mLeft;
                            ((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=sNode_clone(((struct sAddNode*)come_null_check(self, "sAddNode_clone", 4))->mLeft))));
                            if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0); }
                            if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional384=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional384) {
                            __dec_obj193=((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 5))->mRight;
                            ((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=sNode_clone(((struct sAddNode*)come_null_check(self, "sAddNode_clone", 5))->mRight))));
                            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0); }
                            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional385=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional385) {
                            ((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 6))->mQuote=((struct sAddNode*)come_null_check(self, "sAddNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional386=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional386) {
                            ((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 7))->sline=((struct sAddNode*)come_null_check(self, "sAddNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional387=self!=((void*)0)&&((struct sAddNode*)come_null_check(self, "sAddNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional387) {
                            __dec_obj194=((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 8))->sname;
                            ((struct sAddNode*)come_null_check(result_252, "sAddNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value414=string_clone(((struct sAddNode*)come_null_check(self, "sAddNode_clone", 8))->sname))));
                            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count(__dec_obj194, (void*)0, (void*)0, 0,0,0); }
                            if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result268__ = __result_obj__ = result_252;
                        if(result_252 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_252, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result268__;
                        __freed_obj__ = 0;
                        if(result_252 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_252, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional389=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional389) {
                                if(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional390=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional390) {
                                if(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional391=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 3))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional391) {
                                if(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->sname && !__freed_obj__) { ((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->sname = come_decrement_ref_count(((struct sSubNode*)come_null_check(self, "sSubNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional392;
struct sSubNode* __result270__;
void* right_value419;
struct sSubNode* result_254;
_Bool _if_conditional393;
void* right_value420;
struct sNode* __dec_obj195;
_Bool _if_conditional394;
void* right_value421;
struct sNode* __dec_obj196;
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value422;
char* __dec_obj197;
struct sSubNode* __result271__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value419, 0, sizeof(void*));
memset(&result_254, 0, sizeof(struct sSubNode*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
                            if(_if_conditional392=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional392) {
                                __result270__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result270__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_254=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value419=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3))));
                            if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional393=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional393) {
                                __dec_obj195=((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 4))->mLeft;
                                ((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=sNode_clone(((struct sSubNode*)come_null_check(self, "sSubNode_clone", 4))->mLeft))));
                                if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0); }
                                if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional394=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional394) {
                                __dec_obj196=((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 5))->mRight;
                                ((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=sNode_clone(((struct sSubNode*)come_null_check(self, "sSubNode_clone", 5))->mRight))));
                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0); }
                                if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional395=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional395) {
                                ((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 6))->mQuote=((struct sSubNode*)come_null_check(self, "sSubNode_clone", 6))->mQuote;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional396=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional396) {
                                ((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 7))->sline=((struct sSubNode*)come_null_check(self, "sSubNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional397=self!=((void*)0)&&((struct sSubNode*)come_null_check(self, "sSubNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional397) {
                                __dec_obj197=((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 8))->sname;
                                ((struct sSubNode*)come_null_check(result_254, "sSubNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value422=string_clone(((struct sSubNode*)come_null_check(self, "sSubNode_clone", 8))->sname))));
                                if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count(__dec_obj197, (void*)0, (void*)0, 0,0,0); }
                                if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result271__ = __result_obj__ = result_254;
                            if(result_254 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result271__;
                            __freed_obj__ = 0;
                            if(result_254 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value424;
struct sNode* node_255;
_Bool _while_condtional12;
_Bool _if_conditional398;
void* right_value425;
struct sNode* right_256;
void* right_value426;
void* right_value427;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value432;
struct sNode* __result276__;
_Bool _if_conditional408;
void* right_value433;
struct sNode* right_258;
void* right_value434;
void* right_value435;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value440;
struct sNode* __result279__;
_Bool _if_conditional418;
void* right_value441;
struct sNode* right_260;
void* right_value442;
void* right_value443;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value448;
struct sNode* __result282__;
_Bool _if_conditional428;
void* right_value449;
struct sNode* right_262;
void* right_value450;
void* right_value451;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value456;
struct sNode* __result285__;
struct sNode* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value424, 0, sizeof(void*));
memset(&node_255, 0, sizeof(struct sNode*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_256, 0, sizeof(struct sNode*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_258, 0, sizeof(struct sNode*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_260, 0, sizeof(struct sNode*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value449, 0, sizeof(void*));
memset(&right_262, 0, sizeof(struct sNode*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value456, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=add_exp(info))));
    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional12=*((struct sInfo*)come_null_check(info, "13op.c", 2405))->p,    __freed_obj__ = 0, 
    _while_condtional12) {
        if(_if_conditional398=*((struct sInfo*)come_null_check(info, "13op.c", 2403))->p==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+2)!=61,        __freed_obj__ = 0, 
        _if_conditional398) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2369))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=shift_exp(info))));
            if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2374);
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value427=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value426=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2374)))),(struct sNode*)come_increment_ref_count(node_255),(struct sNode*)come_increment_ref_count(right_256),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result276__ = __result_obj__ = ((struct sNode*)(right_value432=_inf_value13));
            if(right_256 && !__freed_obj__) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0, 0); } 
            if(node_255 && !__freed_obj__) { node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0, 0); } 
            if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result276__;
            __freed_obj__ = 0;
            if(right_256 && !__freed_obj__) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional408=*((struct sInfo*)come_null_check(info, "13op.c", 2403))->p==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+2)!=62,            __freed_obj__ = 0, 
            _if_conditional408) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2377))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value433=shift_exp(info))));
                if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2382);
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value435=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value434=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2382)))),(struct sNode*)come_increment_ref_count(node_255),(struct sNode*)come_increment_ref_count(right_258),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result279__ = __result_obj__ = ((struct sNode*)(right_value440=_inf_value14));
                if(right_258 && !__freed_obj__) { right_258 = come_decrement_ref_count(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0); } 
                if(node_255 && !__freed_obj__) { node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0, 0); } 
                if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result279__;
                __freed_obj__ = 0;
                if(right_258 && !__freed_obj__) { right_258 = come_decrement_ref_count(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional418=*((struct sInfo*)come_null_check(info, "13op.c", 2403))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+2)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+3)!=61,                __freed_obj__ = 0, 
                _if_conditional418) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2385))->p+=3;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=shift_exp(info))));
                    if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2390);
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value443=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value442=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2390)))),(struct sNode*)come_increment_ref_count(node_255),(struct sNode*)come_increment_ref_count(right_260),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result282__ = __result_obj__ = ((struct sNode*)(right_value448=_inf_value15));
                    if(right_260 && !__freed_obj__) { right_260 = come_decrement_ref_count(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0); } 
                    if(node_255 && !__freed_obj__) { node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0, 0); } 
                    if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result282__;
                    __freed_obj__ = 0;
                    if(right_260 && !__freed_obj__) { right_260 = come_decrement_ref_count(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional428=*((struct sInfo*)come_null_check(info, "13op.c", 2403))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+2)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+3)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2403))->p+3)!=62,                    __freed_obj__ = 0, 
                    _if_conditional428) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2393))->p+=3;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value449=shift_exp(info))));
                        if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2398);
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value451=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value450=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2398)))),(struct sNode*)come_increment_ref_count(node_255),(struct sNode*)come_increment_ref_count(right_262),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result285__ = __result_obj__ = ((struct sNode*)(right_value456=_inf_value16));
                        if(right_262 && !__freed_obj__) { right_262 = come_decrement_ref_count(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0); } 
                        if(node_255 && !__freed_obj__) { node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0, 0); } 
                        if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result285__;
                        __freed_obj__ = 0;
                        if(right_262 && !__freed_obj__) { right_262 = come_decrement_ref_count(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result286__ = __result_obj__ = node_255;
    if(node_255 && !__freed_obj__) { node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result286__;
    __freed_obj__ = 0;
    if(node_255 && !__freed_obj__) { node_255 = come_decrement_ref_count(node_255, ((struct sNode*)node_255)->finalize, ((struct sNode*)node_255)->_protocol_obj, 0, 0, 0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional419=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional419) {
                            if(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional420=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional420) {
                            if(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional421=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 3))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional421) {
                            if(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional422;
struct sLShiftNode* __result280__;
void* right_value444;
struct sLShiftNode* result_261;
_Bool _if_conditional423;
void* right_value445;
struct sNode* __dec_obj204;
_Bool _if_conditional424;
void* right_value446;
struct sNode* __dec_obj205;
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
void* right_value447;
char* __dec_obj206;
struct sLShiftNode* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value444, 0, sizeof(void*));
memset(&result_261, 0, sizeof(struct sLShiftNode*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
                        if(_if_conditional422=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional422) {
                            __result280__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result280__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_261=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value444=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3))));
                        if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        if(_if_conditional423=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 5))->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            __dec_obj204=((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 4))->mLeft;
                            ((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=sNode_clone(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 4))->mLeft))));
                            if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, ((struct sNode*)__dec_obj204)->finalize, ((struct sNode*)__dec_obj204)->_protocol_obj, 0,0,0); }
                            if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { right_value445 = come_decrement_ref_count(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional424=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 6))->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional424) {
                            __dec_obj205=((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 5))->mRight;
                            ((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=sNode_clone(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 5))->mRight))));
                            if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0); }
                            if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional425=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional425) {
                            ((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 6))->mQuote=((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 6))->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional426=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional426) {
                            ((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 7))->sline=((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 7))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional427=self!=((void*)0)&&((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 9))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional427) {
                            __dec_obj206=((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 8))->sname;
                            ((struct sLShiftNode*)come_null_check(result_261, "sLShiftNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value447=string_clone(((struct sLShiftNode*)come_null_check(self, "sLShiftNode_clone", 8))->sname))));
                            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count(__dec_obj206, (void*)0, (void*)0, 0,0,0); }
                            if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { right_value447 = come_decrement_ref_count(right_value447, (void*)0, (void*)0, 1, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result281__ = __result_obj__ = result_261;
                        if(result_261 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result281__;
                        __freed_obj__ = 0;
                        if(result_261 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_261, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional429=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional429) {
                                if(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional430=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional430) {
                                if(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional431=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 3))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional431) {
                                if(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->sname && !__freed_obj__) { ((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->sname = come_decrement_ref_count(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional432;
struct sRShiftNode* __result283__;
void* right_value452;
struct sRShiftNode* result_263;
_Bool _if_conditional433;
void* right_value453;
struct sNode* __dec_obj207;
_Bool _if_conditional434;
void* right_value454;
struct sNode* __dec_obj208;
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
void* right_value455;
char* __dec_obj209;
struct sRShiftNode* __result284__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value452, 0, sizeof(void*));
memset(&result_263, 0, sizeof(struct sRShiftNode*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
                            if(_if_conditional432=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional432) {
                                __result283__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result283__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_263=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value452=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3))));
                            if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            if(_if_conditional433=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 5))->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional433) {
                                __dec_obj207=((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 4))->mLeft;
                                ((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=sNode_clone(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 4))->mLeft))));
                                if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0); }
                                if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { right_value453 = come_decrement_ref_count(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional434=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 6))->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional434) {
                                __dec_obj208=((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 5))->mRight;
                                ((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=sNode_clone(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 5))->mRight))));
                                if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0); }
                                if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional435=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional435) {
                                ((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 6))->mQuote=((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 6))->mQuote;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional436=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional436) {
                                ((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 7))->sline=((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 7))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional437=self!=((void*)0)&&((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 9))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional437) {
                                __dec_obj209=((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 8))->sname;
                                ((struct sRShiftNode*)come_null_check(result_263, "sRShiftNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value455=string_clone(((struct sRShiftNode*)come_null_check(self, "sRShiftNode_clone", 8))->sname))));
                                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count(__dec_obj209, (void*)0, (void*)0, 0,0,0); }
                                if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result284__ = __result_obj__ = result_263;
                            if(result_263 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result284__;
                            __freed_obj__ = 0;
                            if(result_263 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value457;
struct sNode* node_264;
_Bool _while_condtional13;
_Bool _if_conditional438;
void* right_value458;
struct sNode* right_265;
void* right_value459;
void* right_value460;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value465;
struct sNode* __result289__;
_Bool _if_conditional448;
void* right_value466;
struct sNode* right_267;
void* right_value467;
void* right_value468;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value473;
struct sNode* __result292__;
_Bool _if_conditional458;
void* right_value474;
struct sNode* right_269;
void* right_value475;
void* right_value476;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value481;
struct sNode* __result295__;
_Bool _if_conditional468;
void* right_value482;
struct sNode* right_271;
void* right_value483;
void* right_value484;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value489;
struct sNode* __result298__;
_Bool _if_conditional478;
void* right_value490;
struct sNode* right_273;
void* right_value491;
void* right_value492;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value497;
struct sNode* __result301__;
_Bool _if_conditional488;
void* right_value498;
struct sNode* right_275;
void* right_value499;
void* right_value500;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value505;
struct sNode* __result304__;
_Bool _if_conditional498;
void* right_value506;
struct sNode* right_277;
void* right_value507;
void* right_value508;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value513;
struct sNode* __result307__;
_Bool _if_conditional508;
void* right_value514;
struct sNode* right_279;
void* right_value515;
void* right_value516;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value521;
struct sNode* __result310__;
struct sNode* __result311__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value457, 0, sizeof(void*));
memset(&node_264, 0, sizeof(struct sNode*));
memset(&right_value458, 0, sizeof(void*));
memset(&right_265, 0, sizeof(struct sNode*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&right_value466, 0, sizeof(void*));
memset(&right_267, 0, sizeof(struct sNode*));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
memset(&right_269, 0, sizeof(struct sNode*));
memset(&right_value475, 0, sizeof(void*));
memset(&right_value476, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_271, 0, sizeof(struct sNode*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&right_value490, 0, sizeof(void*));
memset(&right_273, 0, sizeof(struct sNode*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
memset(&right_value498, 0, sizeof(void*));
memset(&right_275, 0, sizeof(struct sNode*));
memset(&right_value499, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&right_value506, 0, sizeof(void*));
memset(&right_277, 0, sizeof(struct sNode*));
memset(&right_value507, 0, sizeof(void*));
memset(&right_value508, 0, sizeof(void*));
memset(&right_value513, 0, sizeof(void*));
memset(&right_value514, 0, sizeof(void*));
memset(&right_279, 0, sizeof(struct sNode*));
memset(&right_value515, 0, sizeof(void*));
memset(&right_value516, 0, sizeof(void*));
memset(&right_value521, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value457=shift_exp(info))));
    if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { right_value457 = come_decrement_ref_count(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional13=*((struct sInfo*)come_null_check(info, "13op.c", 2488))->p,    __freed_obj__ = 0, 
    _while_condtional13) {
        if(_if_conditional438=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)==61,        __freed_obj__ = 0, 
        _if_conditional438) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2420))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=shift_exp(info))));
            if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { right_value458 = come_decrement_ref_count(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2425);
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value460=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value459=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2425)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_265),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result289__ = __result_obj__ = ((struct sNode*)(right_value465=_inf_value17));
            if(right_265 && !__freed_obj__) { right_265 = come_decrement_ref_count(right_265, ((struct sNode*)right_265)->finalize, ((struct sNode*)right_265)->_protocol_obj, 0, 0, 0); } 
            if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
            if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result289__;
            __freed_obj__ = 0;
            if(right_265 && !__freed_obj__) { right_265 = come_decrement_ref_count(right_265, ((struct sNode*)right_265)->finalize, ((struct sNode*)right_265)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional448=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)==61,            __freed_obj__ = 0, 
            _if_conditional448) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2428))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value466=shift_exp(info))));
                if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { right_value466 = come_decrement_ref_count(right_value466, ((struct sNode*)right_value466)->finalize, ((struct sNode*)right_value466)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2433);
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value468=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value467=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2433)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_267),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result292__ = __result_obj__ = ((struct sNode*)(right_value473=_inf_value18));
                if(right_267 && !__freed_obj__) { right_267 = come_decrement_ref_count(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0); } 
                if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
                if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result292__;
                __freed_obj__ = 0;
                if(right_267 && !__freed_obj__) { right_267 = come_decrement_ref_count(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional458=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)!=62,                __freed_obj__ = 0, 
                _if_conditional458) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2436))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value474=shift_exp(info))));
                    if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { right_value474 = come_decrement_ref_count(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2441);
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value476=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value475=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2441)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_269),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result295__ = __result_obj__ = ((struct sNode*)(right_value481=_inf_value19));
                    if(right_269 && !__freed_obj__) { right_269 = come_decrement_ref_count(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0); } 
                    if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
                    if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result295__;
                    __freed_obj__ = 0;
                    if(right_269 && !__freed_obj__) { right_269 = come_decrement_ref_count(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional468=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)!=60,                    __freed_obj__ = 0, 
                    _if_conditional468) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2444))->p++;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=shift_exp(info))));
                        if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2449);
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value484=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value483=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2449)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_271),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result298__ = __result_obj__ = ((struct sNode*)(right_value489=_inf_value20));
                        if(right_271 && !__freed_obj__) { right_271 = come_decrement_ref_count(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0); } 
                        if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
                        if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result298__;
                        __freed_obj__ = 0;
                        if(right_271 && !__freed_obj__) { right_271 = come_decrement_ref_count(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional478=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+2)==61,                        __freed_obj__ = 0, 
                        _if_conditional478) {
                            ((struct sInfo*)come_null_check(info, "13op.c", 2452))->p+=3;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            right_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=shift_exp(info))));
                            if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { right_value490 = come_decrement_ref_count(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2457);
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value492=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value491=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2457)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_273),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result301__ = __result_obj__ = ((struct sNode*)(right_value497=_inf_value21));
                            if(right_273 && !__freed_obj__) { right_273 = come_decrement_ref_count(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0); } 
                            if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
                            if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result301__;
                            __freed_obj__ = 0;
                            if(right_273 && !__freed_obj__) { right_273 = come_decrement_ref_count(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional488=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+2)==61,                            __freed_obj__ = 0, 
                            _if_conditional488) {
                                ((struct sInfo*)come_null_check(info, "13op.c", 2460))->p+=3;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value498=shift_exp(info))));
                                if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { right_value498 = come_decrement_ref_count(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2465);
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value500=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value499=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2465)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_275),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result304__ = __result_obj__ = ((struct sNode*)(right_value505=_inf_value22));
                                if(right_275 && !__freed_obj__) { right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0); } 
                                if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
                                if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result304__;
                                __freed_obj__ = 0;
                                if(right_275 && !__freed_obj__) { right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional498=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)==62&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+2)!=62,                                __freed_obj__ = 0, 
                                _if_conditional498) {
                                    ((struct sInfo*)come_null_check(info, "13op.c", 2468))->p+=2;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    right_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value506=shift_exp(info))));
                                    if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { right_value506 = come_decrement_ref_count(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2473);
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value508=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value507=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2473)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_277),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result307__ = __result_obj__ = ((struct sNode*)(right_value513=_inf_value23));
                                    if(right_277 && !__freed_obj__) { right_277 = come_decrement_ref_count(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0); } 
                                    if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
                                    if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result307__;
                                    __freed_obj__ = 0;
                                    if(right_277 && !__freed_obj__) { right_277 = come_decrement_ref_count(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional508=*((struct sInfo*)come_null_check(info, "13op.c", 2486))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+1)==60&&*(((struct sInfo*)come_null_check(info, "13op.c", 2486))->p+2)!=60,                                    __freed_obj__ = 0, 
                                    _if_conditional508) {
                                        ((struct sInfo*)come_null_check(info, "13op.c", 2476))->p+=2;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        right_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value514=shift_exp(info))));
                                        if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { right_value514 = come_decrement_ref_count(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2481);
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value516=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value515=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2481)))),(struct sNode*)come_increment_ref_count(node_264),(struct sNode*)come_increment_ref_count(right_279),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result310__ = __result_obj__ = ((struct sNode*)(right_value521=_inf_value24));
                                        if(right_279 && !__freed_obj__) { right_279 = come_decrement_ref_count(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0); } 
                                        if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
                                        if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result310__;
                                        __freed_obj__ = 0;
                                        if(right_279 && !__freed_obj__) { right_279 = come_decrement_ref_count(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result311__ = __result_obj__ = node_264;
    if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result311__;
    __freed_obj__ = 0;
    if(node_264 && !__freed_obj__) { node_264 = come_decrement_ref_count(node_264, ((struct sNode*)node_264)->finalize, ((struct sNode*)node_264)->_protocol_obj, 0, 0, 0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional479;
_Bool _if_conditional480;
_Bool _if_conditional481;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional479=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional479) {
                                    if(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional480=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional480) {
                                    if(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional481=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional481) {
                                    if(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional482;
struct sGtEqNode* __result299__;
void* right_value493;
struct sGtEqNode* result_274;
_Bool _if_conditional483;
void* right_value494;
struct sNode* __dec_obj222;
_Bool _if_conditional484;
void* right_value495;
struct sNode* __dec_obj223;
_Bool _if_conditional485;
_Bool _if_conditional486;
_Bool _if_conditional487;
void* right_value496;
char* __dec_obj224;
struct sGtEqNode* __result300__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value493, 0, sizeof(void*));
memset(&result_274, 0, sizeof(struct sGtEqNode*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value495, 0, sizeof(void*));
memset(&right_value496, 0, sizeof(void*));
                                if(_if_conditional482=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional482) {
                                    __result299__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result299__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_274=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value493=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3))));
                                if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional483=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional483) {
                                    __dec_obj222=((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 4))->mLeft;
                                    ((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value494=sNode_clone(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 4))->mLeft))));
                                    if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0); }
                                    if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { right_value494 = come_decrement_ref_count(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional484=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 6))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional484) {
                                    __dec_obj223=((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 5))->mRight;
                                    ((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value495=sNode_clone(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 5))->mRight))));
                                    if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0); }
                                    if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { right_value495 = come_decrement_ref_count(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional485=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional485) {
                                    ((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 6))->mQuote=((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 6))->mQuote;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional486=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional486) {
                                    ((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 7))->sline=((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 7))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional487=self!=((void*)0)&&((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 9))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional487) {
                                    __dec_obj224=((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 8))->sname;
                                    ((struct sGtEqNode*)come_null_check(result_274, "sGtEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value496=string_clone(((struct sGtEqNode*)come_null_check(self, "sGtEqNode_clone", 8))->sname))));
                                    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { right_value496 = come_decrement_ref_count(right_value496, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result300__ = __result_obj__ = result_274;
                                if(result_274 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result300__;
                                __freed_obj__ = 0;
                                if(result_274 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_274, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional489;
_Bool _if_conditional490;
_Bool _if_conditional491;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional489=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional489) {
                                        if(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional490=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional490) {
                                        if(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional491=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional491) {
                                        if(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional492;
struct sLtEqNode* __result302__;
void* right_value501;
struct sLtEqNode* result_276;
_Bool _if_conditional493;
void* right_value502;
struct sNode* __dec_obj225;
_Bool _if_conditional494;
void* right_value503;
struct sNode* __dec_obj226;
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
void* right_value504;
char* __dec_obj227;
struct sLtEqNode* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value501, 0, sizeof(void*));
memset(&result_276, 0, sizeof(struct sLtEqNode*));
memset(&right_value502, 0, sizeof(void*));
memset(&right_value503, 0, sizeof(void*));
memset(&right_value504, 0, sizeof(void*));
                                    if(_if_conditional492=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional492) {
                                        __result302__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result302__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_276=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value501=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3))));
                                    if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional493=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 5))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional493) {
                                        __dec_obj225=((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 4))->mLeft;
                                        ((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value502=sNode_clone(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 4))->mLeft))));
                                        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0); }
                                        if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { right_value502 = come_decrement_ref_count(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional494=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 6))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional494) {
                                        __dec_obj226=((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 5))->mRight;
                                        ((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value503=sNode_clone(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 5))->mRight))));
                                        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0); }
                                        if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { right_value503 = come_decrement_ref_count(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional495=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional495) {
                                        ((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 6))->mQuote=((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 6))->mQuote;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional496=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional496) {
                                        ((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 7))->sline=((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 7))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional497=self!=((void*)0)&&((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 9))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional497) {
                                        __dec_obj227=((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 8))->sname;
                                        ((struct sLtEqNode*)come_null_check(result_276, "sLtEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value504=string_clone(((struct sLtEqNode*)come_null_check(self, "sLtEqNode_clone", 8))->sname))));
                                        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { right_value504 = come_decrement_ref_count(right_value504, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result303__ = __result_obj__ = result_276;
                                    if(result_276 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result303__;
                                    __freed_obj__ = 0;
                                    if(result_276 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _if_conditional501;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional499=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional499) {
                                            if(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional500=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional500) {
                                            if(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional501=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 3))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional501) {
                                            if(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->sname && !__freed_obj__) { ((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->sname = come_decrement_ref_count(((struct sGtNode*)come_null_check(self, "sGtNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional502;
struct sGtNode* __result305__;
void* right_value509;
struct sGtNode* result_278;
_Bool _if_conditional503;
void* right_value510;
struct sNode* __dec_obj228;
_Bool _if_conditional504;
void* right_value511;
struct sNode* __dec_obj229;
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool _if_conditional507;
void* right_value512;
char* __dec_obj230;
struct sGtNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value509, 0, sizeof(void*));
memset(&result_278, 0, sizeof(struct sGtNode*));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_value512, 0, sizeof(void*));
                                        if(_if_conditional502=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional502) {
                                            __result305__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result305__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_278=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value509=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3))));
                                        if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        if(_if_conditional503=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_clone", 5))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional503) {
                                            __dec_obj228=((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 4))->mLeft;
                                            ((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value510=sNode_clone(((struct sGtNode*)come_null_check(self, "sGtNode_clone", 4))->mLeft))));
                                            if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0); }
                                            if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { right_value510 = come_decrement_ref_count(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional504=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_clone", 6))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional504) {
                                            __dec_obj229=((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 5))->mRight;
                                            ((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=sNode_clone(((struct sGtNode*)come_null_check(self, "sGtNode_clone", 5))->mRight))));
                                            if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0); }
                                            if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional505=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional505) {
                                            ((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 6))->mQuote=((struct sGtNode*)come_null_check(self, "sGtNode_clone", 6))->mQuote;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional506=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional506) {
                                            ((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 7))->sline=((struct sGtNode*)come_null_check(self, "sGtNode_clone", 7))->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional507=self!=((void*)0)&&((struct sGtNode*)come_null_check(self, "sGtNode_clone", 9))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional507) {
                                            __dec_obj230=((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 8))->sname;
                                            ((struct sGtNode*)come_null_check(result_278, "sGtNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value512=string_clone(((struct sGtNode*)come_null_check(self, "sGtNode_clone", 8))->sname))));
                                            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count(__dec_obj230, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { right_value512 = come_decrement_ref_count(right_value512, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result306__ = __result_obj__ = result_278;
                                        if(result_278 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result306__;
                                        __freed_obj__ = 0;
                                        if(result_278 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional509=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional509) {
                                                if(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional510=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional510) {
                                                if(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional511=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 3))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional511) {
                                                if(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->sname && !__freed_obj__) { ((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->sname = come_decrement_ref_count(((struct sLtNode*)come_null_check(self, "sLtNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional512;
struct sLtNode* __result308__;
void* right_value517;
struct sLtNode* result_280;
_Bool _if_conditional513;
void* right_value518;
struct sNode* __dec_obj231;
_Bool _if_conditional514;
void* right_value519;
struct sNode* __dec_obj232;
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
void* right_value520;
char* __dec_obj233;
struct sLtNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value517, 0, sizeof(void*));
memset(&result_280, 0, sizeof(struct sLtNode*));
memset(&right_value518, 0, sizeof(void*));
memset(&right_value519, 0, sizeof(void*));
memset(&right_value520, 0, sizeof(void*));
                                            if(_if_conditional512=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional512) {
                                                __result308__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result308__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_280=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value517=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3))));
                                            if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            if(_if_conditional513=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_clone", 5))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional513) {
                                                __dec_obj231=((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 4))->mLeft;
                                                ((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=sNode_clone(((struct sLtNode*)come_null_check(self, "sLtNode_clone", 4))->mLeft))));
                                                if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0); }
                                                if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { right_value518 = come_decrement_ref_count(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional514=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_clone", 6))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional514) {
                                                __dec_obj232=((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 5))->mRight;
                                                ((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value519=sNode_clone(((struct sLtNode*)come_null_check(self, "sLtNode_clone", 5))->mRight))));
                                                if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0); }
                                                if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { right_value519 = come_decrement_ref_count(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional515=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional515) {
                                                ((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 6))->mQuote=((struct sLtNode*)come_null_check(self, "sLtNode_clone", 6))->mQuote;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional516=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional516) {
                                                ((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 7))->sline=((struct sLtNode*)come_null_check(self, "sLtNode_clone", 7))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional517=self!=((void*)0)&&((struct sLtNode*)come_null_check(self, "sLtNode_clone", 9))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional517) {
                                                __dec_obj233=((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 8))->sname;
                                                ((struct sLtNode*)come_null_check(result_280, "sLtNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value520=string_clone(((struct sLtNode*)come_null_check(self, "sLtNode_clone", 8))->sname))));
                                                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count(__dec_obj233, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { right_value520 = come_decrement_ref_count(right_value520, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result309__ = __result_obj__ = result_280;
                                            if(result_280 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result309__;
                                            __freed_obj__ = 0;
                                            if(result_280 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value522;
struct sNode* node_281;
_Bool _while_condtional14;
_Bool _if_conditional518;
void* right_value523;
struct sNode* right_282;
void* right_value524;
void* right_value525;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value530;
struct sNode* __result314__;
_Bool _if_conditional528;
void* right_value531;
struct sNode* right_284;
void* right_value532;
void* right_value533;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value538;
struct sNode* __result317__;
_Bool _if_conditional538;
void* right_value539;
struct sNode* right_286;
void* right_value540;
void* right_value541;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value546;
struct sNode* __result320__;
_Bool _if_conditional548;
void* right_value547;
struct sNode* right_288;
void* right_value548;
void* right_value549;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value554;
struct sNode* __result323__;
_Bool _if_conditional558;
void* right_value555;
struct sNode* right_290;
void* right_value556;
void* right_value557;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value562;
struct sNode* __result326__;
_Bool _if_conditional568;
void* right_value563;
struct sNode* right_292;
void* right_value564;
void* right_value565;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value570;
struct sNode* __result329__;
_Bool _if_conditional578;
void* right_value571;
struct sNode* right_294;
void* right_value572;
void* right_value573;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value578;
struct sNode* __result332__;
_Bool _if_conditional588;
void* right_value579;
struct sNode* right_296;
void* right_value580;
void* right_value581;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value586;
struct sNode* __result335__;
struct sNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value522, 0, sizeof(void*));
memset(&node_281, 0, sizeof(struct sNode*));
memset(&right_value523, 0, sizeof(void*));
memset(&right_282, 0, sizeof(struct sNode*));
memset(&right_value524, 0, sizeof(void*));
memset(&right_value525, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
memset(&right_value531, 0, sizeof(void*));
memset(&right_284, 0, sizeof(struct sNode*));
memset(&right_value532, 0, sizeof(void*));
memset(&right_value533, 0, sizeof(void*));
memset(&right_value538, 0, sizeof(void*));
memset(&right_value539, 0, sizeof(void*));
memset(&right_286, 0, sizeof(struct sNode*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_value541, 0, sizeof(void*));
memset(&right_value546, 0, sizeof(void*));
memset(&right_value547, 0, sizeof(void*));
memset(&right_288, 0, sizeof(struct sNode*));
memset(&right_value548, 0, sizeof(void*));
memset(&right_value549, 0, sizeof(void*));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
memset(&right_290, 0, sizeof(struct sNode*));
memset(&right_value556, 0, sizeof(void*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
memset(&right_value563, 0, sizeof(void*));
memset(&right_292, 0, sizeof(struct sNode*));
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
memset(&right_value570, 0, sizeof(void*));
memset(&right_value571, 0, sizeof(void*));
memset(&right_294, 0, sizeof(struct sNode*));
memset(&right_value572, 0, sizeof(void*));
memset(&right_value573, 0, sizeof(void*));
memset(&right_value578, 0, sizeof(void*));
memset(&right_value579, 0, sizeof(void*));
memset(&right_296, 0, sizeof(struct sNode*));
memset(&right_value580, 0, sizeof(void*));
memset(&right_value581, 0, sizeof(void*));
memset(&right_value586, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value522=comparison_exp(info))));
    if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { right_value522 = come_decrement_ref_count(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional14=*((struct sInfo*)come_null_check(info, "13op.c", 2571))->p,    __freed_obj__ = 0, 
    _while_condtional14) {
        if(_if_conditional518=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+2)==61,        __freed_obj__ = 0, 
        _if_conditional518) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2503))->p+=3;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value523=eq_exp(info))));
            if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { right_value523 = come_decrement_ref_count(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2508);
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value525=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value524=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2508)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_282),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result314__ = __result_obj__ = ((struct sNode*)(right_value530=_inf_value25));
            if(right_282 && !__freed_obj__) { right_282 = come_decrement_ref_count(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0); } 
            if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
            if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result314__;
            __freed_obj__ = 0;
            if(right_282 && !__freed_obj__) { right_282 = come_decrement_ref_count(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional528=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==61,            __freed_obj__ = 0, 
            _if_conditional528) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2511))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value531=eq_exp(info))));
                if(right_value531 && right_value531 != __result_obj__ && !__freed_obj__) { right_value531 = come_decrement_ref_count(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2516);
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value533=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value532=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2516)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_284),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result317__ = __result_obj__ = ((struct sNode*)(right_value538=_inf_value26));
                if(right_284 && !__freed_obj__) { right_284 = come_decrement_ref_count(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0); } 
                if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
                if(right_value532 && right_value532 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result317__;
                __freed_obj__ = 0;
                if(right_284 && !__freed_obj__) { right_284 = come_decrement_ref_count(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional538=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+2)==61,                __freed_obj__ = 0, 
                _if_conditional538) {
                    ((struct sInfo*)come_null_check(info, "13op.c", 2519))->p+=3;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    right_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value539=eq_exp(info))));
                    if(right_value539 && right_value539 != __result_obj__ && !__freed_obj__) { right_value539 = come_decrement_ref_count(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2524);
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value541=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value540=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2524)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_286),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result320__ = __result_obj__ = ((struct sNode*)(right_value546=_inf_value27));
                    if(right_286 && !__freed_obj__) { right_286 = come_decrement_ref_count(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0); } 
                    if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
                    if(right_value540 && right_value540 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0); }
                    if(right_value541 && right_value541 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    return __result320__;
                    __freed_obj__ = 0;
                    if(right_286 && !__freed_obj__) { right_286 = come_decrement_ref_count(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional548=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==61,                    __freed_obj__ = 0, 
                    _if_conditional548) {
                        ((struct sInfo*)come_null_check(info, "13op.c", 2527))->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        right_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value547=eq_exp(info))));
                        if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { right_value547 = come_decrement_ref_count(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2532);
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value549=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value548=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2532)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_288),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result323__ = __result_obj__ = ((struct sNode*)(right_value554=_inf_value28));
                        if(right_288 && !__freed_obj__) { right_288 = come_decrement_ref_count(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0); } 
                        if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
                        if(right_value548 && right_value548 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0); }
                        if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __freed_obj__ = 0;
                        return __result323__;
                        __freed_obj__ = 0;
                        if(right_288 && !__freed_obj__) { right_288 = come_decrement_ref_count(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional558=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+2)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+3)==61,                        __freed_obj__ = 0, 
                        _if_conditional558) {
                            ((struct sInfo*)come_null_check(info, "13op.c", 2535))->p+=4;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value555=eq_exp(info))));
                            if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { right_value555 = come_decrement_ref_count(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0); } 
                            __freed_obj__ = 0;
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2540);
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value557=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value556=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2540)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_290),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result326__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value29));
                            if(right_290 && !__freed_obj__) { right_290 = come_decrement_ref_count(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0); } 
                            if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
                            if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0, 0); }
                            if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __freed_obj__ = 0;
                            return __result326__;
                            __freed_obj__ = 0;
                            if(right_290 && !__freed_obj__) { right_290 = come_decrement_ref_count(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional568=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+2)==61,                            __freed_obj__ = 0, 
                            _if_conditional568) {
                                ((struct sInfo*)come_null_check(info, "13op.c", 2543))->p+=3;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value563=eq_exp(info))));
                                if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { right_value563 = come_decrement_ref_count(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0); } 
                                __freed_obj__ = 0;
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2548);
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value565=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value564=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2548)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_292),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result329__ = __result_obj__ = ((struct sNode*)(right_value570=_inf_value30));
                                if(right_292 && !__freed_obj__) { right_292 = come_decrement_ref_count(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0); } 
                                if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
                                if(right_value564 && right_value564 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0); }
                                if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                return __result329__;
                                __freed_obj__ = 0;
                                if(right_292 && !__freed_obj__) { right_292 = come_decrement_ref_count(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional578=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+2)==61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+3)==61,                                __freed_obj__ = 0, 
                                _if_conditional578) {
                                    ((struct sInfo*)come_null_check(info, "13op.c", 2551))->p+=4;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value571=eq_exp(info))));
                                    if(right_value571 && right_value571 != __result_obj__ && !__freed_obj__) { right_value571 = come_decrement_ref_count(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2556);
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value573=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value572=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2556)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_294),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result332__ = __result_obj__ = ((struct sNode*)(right_value578=_inf_value31));
                                    if(right_294 && !__freed_obj__) { right_294 = come_decrement_ref_count(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0); } 
                                    if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
                                    if(right_value572 && right_value572 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    if(right_value573 && right_value573 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    return __result332__;
                                    __freed_obj__ = 0;
                                    if(right_294 && !__freed_obj__) { right_294 = come_decrement_ref_count(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional588=*((struct sInfo*)come_null_check(info, "13op.c", 2569))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+1)==33&&*(((struct sInfo*)come_null_check(info, "13op.c", 2569))->p+2)==61,                                    __freed_obj__ = 0, 
                                    _if_conditional588) {
                                        ((struct sInfo*)come_null_check(info, "13op.c", 2559))->p+=3;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value579=eq_exp(info))));
                                        if(right_value579 && right_value579 != __result_obj__ && !__freed_obj__) { right_value579 = come_decrement_ref_count(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2564);
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value581=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value580=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2564)))),(struct sNode*)come_increment_ref_count(node_281),(struct sNode*)come_increment_ref_count(right_296),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result335__ = __result_obj__ = ((struct sNode*)(right_value586=_inf_value32));
                                        if(right_296 && !__freed_obj__) { right_296 = come_decrement_ref_count(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0); } 
                                        if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
                                        if(right_value580 && right_value580 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        if(right_value581 && right_value581 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        return __result335__;
                                        __freed_obj__ = 0;
                                        if(right_296 && !__freed_obj__) { right_296 = come_decrement_ref_count(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result336__ = __result_obj__ = node_281;
    if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result336__;
    __freed_obj__ = 0;
    if(node_281 && !__freed_obj__) { node_281 = come_decrement_ref_count(node_281, ((struct sNode*)node_281)->finalize, ((struct sNode*)node_281)->_protocol_obj, 0, 0, 0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional559;
_Bool _if_conditional560;
_Bool _if_conditional561;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional559=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional559) {
                                    if(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft && !__freed_obj__) { ((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft = come_decrement_ref_count(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional560=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional560) {
                                    if(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight && !__freed_obj__) { ((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight = come_decrement_ref_count(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional561=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 3))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional561) {
                                    if(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->sname && !__freed_obj__) { ((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->sname = come_decrement_ref_count(((struct sEq2Node*)come_null_check(self, "sEq2Node_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional562;
struct sEq2Node* __result324__;
void* right_value558;
struct sEq2Node* result_291;
_Bool _if_conditional563;
void* right_value559;
struct sNode* __dec_obj246;
_Bool _if_conditional564;
void* right_value560;
struct sNode* __dec_obj247;
_Bool _if_conditional565;
_Bool _if_conditional566;
_Bool _if_conditional567;
void* right_value561;
char* __dec_obj248;
struct sEq2Node* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value558, 0, sizeof(void*));
memset(&result_291, 0, sizeof(struct sEq2Node*));
memset(&right_value559, 0, sizeof(void*));
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
                                if(_if_conditional562=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional562) {
                                    __result324__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result324__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_291=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value558=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3))));
                                if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __freed_obj__ = 0;
                                if(_if_conditional563=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 5))->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional563) {
                                    __dec_obj246=((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 4))->mLeft;
                                    ((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value559=sNode_clone(((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 4))->mLeft))));
                                    if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0); }
                                    if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { right_value559 = come_decrement_ref_count(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional564=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 6))->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional564) {
                                    __dec_obj247=((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 5))->mRight;
                                    ((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value560=sNode_clone(((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 5))->mRight))));
                                    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0); }
                                    if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { right_value560 = come_decrement_ref_count(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional565=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional565) {
                                    ((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 6))->mQuote=((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 6))->mQuote;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional566=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional566) {
                                    ((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 7))->sline=((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 7))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional567=self!=((void*)0)&&((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 9))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional567) {
                                    __dec_obj248=((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 8))->sname;
                                    ((struct sEq2Node*)come_null_check(result_291, "sEq2Node_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value561=string_clone(((struct sEq2Node*)come_null_check(self, "sEq2Node_clone", 8))->sname))));
                                    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0,0); }
                                    if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { right_value561 = come_decrement_ref_count(right_value561, (void*)0, (void*)0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result325__ = __result_obj__ = result_291;
                                if(result_291 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_291, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result325__;
                                __freed_obj__ = 0;
                                if(result_291 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_291, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional569;
_Bool _if_conditional570;
_Bool _if_conditional571;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional569=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional569) {
                                        if(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional570=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional570) {
                                        if(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional571=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 3))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional571) {
                                        if(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sEqNode*)come_null_check(self, "sEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional572;
struct sEqNode* __result327__;
void* right_value566;
struct sEqNode* result_293;
_Bool _if_conditional573;
void* right_value567;
struct sNode* __dec_obj249;
_Bool _if_conditional574;
void* right_value568;
struct sNode* __dec_obj250;
_Bool _if_conditional575;
_Bool _if_conditional576;
_Bool _if_conditional577;
void* right_value569;
char* __dec_obj251;
struct sEqNode* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value566, 0, sizeof(void*));
memset(&result_293, 0, sizeof(struct sEqNode*));
memset(&right_value567, 0, sizeof(void*));
memset(&right_value568, 0, sizeof(void*));
memset(&right_value569, 0, sizeof(void*));
                                    if(_if_conditional572=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional572) {
                                        __result327__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result327__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_293=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value566=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3))));
                                    if(right_value566 && right_value566 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __freed_obj__ = 0;
                                    if(_if_conditional573=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_clone", 5))->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional573) {
                                        __dec_obj249=((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 4))->mLeft;
                                        ((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value567=sNode_clone(((struct sEqNode*)come_null_check(self, "sEqNode_clone", 4))->mLeft))));
                                        if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0); }
                                        if(right_value567 && right_value567 != __result_obj__ && !__freed_obj__) { right_value567 = come_decrement_ref_count(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional574=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_clone", 6))->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional574) {
                                        __dec_obj250=((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 5))->mRight;
                                        ((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value568=sNode_clone(((struct sEqNode*)come_null_check(self, "sEqNode_clone", 5))->mRight))));
                                        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0); }
                                        if(right_value568 && right_value568 != __result_obj__ && !__freed_obj__) { right_value568 = come_decrement_ref_count(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional575=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional575) {
                                        ((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 6))->mQuote=((struct sEqNode*)come_null_check(self, "sEqNode_clone", 6))->mQuote;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional576=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional576) {
                                        ((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 7))->sline=((struct sEqNode*)come_null_check(self, "sEqNode_clone", 7))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional577=self!=((void*)0)&&((struct sEqNode*)come_null_check(self, "sEqNode_clone", 9))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional577) {
                                        __dec_obj251=((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 8))->sname;
                                        ((struct sEqNode*)come_null_check(result_293, "sEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value569=string_clone(((struct sEqNode*)come_null_check(self, "sEqNode_clone", 8))->sname))));
                                        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0,0); }
                                        if(right_value569 && right_value569 != __result_obj__ && !__freed_obj__) { right_value569 = come_decrement_ref_count(right_value569, (void*)0, (void*)0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result328__ = __result_obj__ = result_293;
                                    if(result_293 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_293, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result328__;
                                    __freed_obj__ = 0;
                                    if(result_293 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_293, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional579;
_Bool _if_conditional580;
_Bool _if_conditional581;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional579=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional579) {
                                            if(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional580=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional580) {
                                            if(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight && !__freed_obj__) { ((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight = come_decrement_ref_count(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional581=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 3))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional581) {
                                            if(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->sname && !__freed_obj__) { ((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->sname = come_decrement_ref_count(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional582;
struct sNotEq2Node* __result330__;
void* right_value574;
struct sNotEq2Node* result_295;
_Bool _if_conditional583;
void* right_value575;
struct sNode* __dec_obj252;
_Bool _if_conditional584;
void* right_value576;
struct sNode* __dec_obj253;
_Bool _if_conditional585;
_Bool _if_conditional586;
_Bool _if_conditional587;
void* right_value577;
char* __dec_obj254;
struct sNotEq2Node* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value574, 0, sizeof(void*));
memset(&result_295, 0, sizeof(struct sNotEq2Node*));
memset(&right_value575, 0, sizeof(void*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_value577, 0, sizeof(void*));
                                        if(_if_conditional582=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional582) {
                                            __result330__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result330__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_295=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value574=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3))));
                                        if(right_value574 && right_value574 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __freed_obj__ = 0;
                                        if(_if_conditional583=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 5))->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional583) {
                                            __dec_obj252=((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 4))->mLeft;
                                            ((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value575=sNode_clone(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 4))->mLeft))));
                                            if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0); }
                                            if(right_value575 && right_value575 != __result_obj__ && !__freed_obj__) { right_value575 = come_decrement_ref_count(right_value575, ((struct sNode*)right_value575)->finalize, ((struct sNode*)right_value575)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional584=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 6))->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional584) {
                                            __dec_obj253=((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 5))->mRight;
                                            ((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value576=sNode_clone(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 5))->mRight))));
                                            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0); }
                                            if(right_value576 && right_value576 != __result_obj__ && !__freed_obj__) { right_value576 = come_decrement_ref_count(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional585=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional585) {
                                            ((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 6))->mQuote=((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 6))->mQuote;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional586=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional586) {
                                            ((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 7))->sline=((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 7))->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional587=self!=((void*)0)&&((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 9))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional587) {
                                            __dec_obj254=((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 8))->sname;
                                            ((struct sNotEq2Node*)come_null_check(result_295, "sNotEq2Node_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value577=string_clone(((struct sNotEq2Node*)come_null_check(self, "sNotEq2Node_clone", 8))->sname))));
                                            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count(__dec_obj254, (void*)0, (void*)0, 0,0,0); }
                                            if(right_value577 && right_value577 != __result_obj__ && !__freed_obj__) { right_value577 = come_decrement_ref_count(right_value577, (void*)0, (void*)0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result331__ = __result_obj__ = result_295;
                                        if(result_295 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result331__;
                                        __freed_obj__ = 0;
                                        if(result_295 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional589;
_Bool _if_conditional590;
_Bool _if_conditional591;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional589=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional589) {
                                                if(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional590=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional590) {
                                                if(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional591=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 3))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional591) {
                                                if(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->sname && !__freed_obj__) { ((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->sname = come_decrement_ref_count(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional592;
struct sNotEqNode* __result333__;
void* right_value582;
struct sNotEqNode* result_297;
_Bool _if_conditional593;
void* right_value583;
struct sNode* __dec_obj255;
_Bool _if_conditional594;
void* right_value584;
struct sNode* __dec_obj256;
_Bool _if_conditional595;
_Bool _if_conditional596;
_Bool _if_conditional597;
void* right_value585;
char* __dec_obj257;
struct sNotEqNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value582, 0, sizeof(void*));
memset(&result_297, 0, sizeof(struct sNotEqNode*));
memset(&right_value583, 0, sizeof(void*));
memset(&right_value584, 0, sizeof(void*));
memset(&right_value585, 0, sizeof(void*));
                                            if(_if_conditional592=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional592) {
                                                __result333__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result333__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_297=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value582=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3))));
                                            if(right_value582 && right_value582 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __freed_obj__ = 0;
                                            if(_if_conditional593=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 5))->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional593) {
                                                __dec_obj255=((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 4))->mLeft;
                                                ((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value583=sNode_clone(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 4))->mLeft))));
                                                if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0); }
                                                if(right_value583 && right_value583 != __result_obj__ && !__freed_obj__) { right_value583 = come_decrement_ref_count(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional594=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 6))->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional594) {
                                                __dec_obj256=((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 5))->mRight;
                                                ((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=sNode_clone(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 5))->mRight))));
                                                if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0); }
                                                if(right_value584 && right_value584 != __result_obj__ && !__freed_obj__) { right_value584 = come_decrement_ref_count(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional595=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional595) {
                                                ((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 6))->mQuote=((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 6))->mQuote;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional596=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional596) {
                                                ((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 7))->sline=((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 7))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional597=self!=((void*)0)&&((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 9))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional597) {
                                                __dec_obj257=((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 8))->sname;
                                                ((struct sNotEqNode*)come_null_check(result_297, "sNotEqNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value585=string_clone(((struct sNotEqNode*)come_null_check(self, "sNotEqNode_clone", 8))->sname))));
                                                if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0,0,0); }
                                                if(right_value585 && right_value585 != __result_obj__ && !__freed_obj__) { right_value585 = come_decrement_ref_count(right_value585, (void*)0, (void*)0, 1, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result334__ = __result_obj__ = result_297;
                                            if(result_297 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result334__;
                                            __freed_obj__ = 0;
                                            if(result_297 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value587;
struct sNode* node_298;
_Bool _while_condtional15;
_Bool _if_conditional598;
void* right_value588;
struct sNode* right_299;
void* right_value589;
void* right_value590;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value595;
struct sNode* __result339__;
_Bool _if_conditional608;
void* right_value596;
struct sNode* right_301;
void* right_value597;
void* right_value598;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value603;
struct sNode* __result342__;
struct sNode* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value587, 0, sizeof(void*));
memset(&node_298, 0, sizeof(struct sNode*));
memset(&right_value588, 0, sizeof(void*));
memset(&right_299, 0, sizeof(struct sNode*));
memset(&right_value589, 0, sizeof(void*));
memset(&right_value590, 0, sizeof(void*));
memset(&right_value595, 0, sizeof(void*));
memset(&right_value596, 0, sizeof(void*));
memset(&right_301, 0, sizeof(struct sNode*));
memset(&right_value597, 0, sizeof(void*));
memset(&right_value598, 0, sizeof(void*));
memset(&right_value603, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value587=eq_exp(info))));
    if(right_value587 && right_value587 != __result_obj__ && !__freed_obj__) { right_value587 = come_decrement_ref_count(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional15=*((struct sInfo*)come_null_check(info, "13op.c", 2606))->p,    __freed_obj__ = 0, 
    _while_condtional15) {
        if(_if_conditional598=*((struct sInfo*)come_null_check(info, "13op.c", 2604))->p==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2604))->p+1)!=38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2604))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional598) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2586))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value588=and_exp(info))));
            if(right_value588 && right_value588 != __result_obj__ && !__freed_obj__) { right_value588 = come_decrement_ref_count(right_value588, ((struct sNode*)right_value588)->finalize, ((struct sNode*)right_value588)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2591);
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value590=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value589=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2591)))),(struct sNode*)come_increment_ref_count(node_298),(struct sNode*)come_increment_ref_count(right_299),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result339__ = __result_obj__ = ((struct sNode*)(right_value595=_inf_value33));
            if(right_299 && !__freed_obj__) { right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0); } 
            if(node_298 && !__freed_obj__) { node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0); } 
            if(right_value589 && right_value589 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value590 && right_value590 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result339__;
            __freed_obj__ = 0;
            if(right_299 && !__freed_obj__) { right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional608=*((struct sInfo*)come_null_check(info, "13op.c", 2604))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2604))->p+1)==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2604))->p+2)!=38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2604))->p+2)!=61,            __freed_obj__ = 0, 
            _if_conditional608) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2594))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=and_exp(info))));
                if(right_value596 && right_value596 != __result_obj__ && !__freed_obj__) { right_value596 = come_decrement_ref_count(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2599);
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value598=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value597=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2599)))),(struct sNode*)come_increment_ref_count(node_298),(struct sNode*)come_increment_ref_count(right_301),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result342__ = __result_obj__ = ((struct sNode*)(right_value603=_inf_value34));
                if(right_301 && !__freed_obj__) { right_301 = come_decrement_ref_count(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0); } 
                if(node_298 && !__freed_obj__) { node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0); } 
                if(right_value597 && right_value597 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value598 && right_value598 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result342__;
                __freed_obj__ = 0;
                if(right_301 && !__freed_obj__) { right_301 = come_decrement_ref_count(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result343__ = __result_obj__ = node_298;
    if(node_298 && !__freed_obj__) { node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result343__;
    __freed_obj__ = 0;
    if(node_298 && !__freed_obj__) { node_298 = come_decrement_ref_count(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional609;
_Bool _if_conditional610;
_Bool _if_conditional611;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional609=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional609) {
                        if(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional610=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional610) {
                        if(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional611=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional611) {
                        if(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAndNode*)come_null_check(self, "sAndNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional612;
struct sAndNode* __result340__;
void* right_value599;
struct sAndNode* result_302;
_Bool _if_conditional613;
void* right_value600;
struct sNode* __dec_obj261;
_Bool _if_conditional614;
void* right_value601;
struct sNode* __dec_obj262;
_Bool _if_conditional615;
_Bool _if_conditional616;
_Bool _if_conditional617;
void* right_value602;
char* __dec_obj263;
struct sAndNode* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value599, 0, sizeof(void*));
memset(&result_302, 0, sizeof(struct sAndNode*));
memset(&right_value600, 0, sizeof(void*));
memset(&right_value601, 0, sizeof(void*));
memset(&right_value602, 0, sizeof(void*));
                    if(_if_conditional612=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional612) {
                        __result340__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result340__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_302=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value599=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3))));
                    if(right_value599 && right_value599 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional613=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional613) {
                        __dec_obj261=((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 4))->mLeft;
                        ((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value600=sNode_clone(((struct sAndNode*)come_null_check(self, "sAndNode_clone", 4))->mLeft))));
                        if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0); }
                        if(right_value600 && right_value600 != __result_obj__ && !__freed_obj__) { right_value600 = come_decrement_ref_count(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional614=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional614) {
                        __dec_obj262=((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 5))->mRight;
                        ((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value601=sNode_clone(((struct sAndNode*)come_null_check(self, "sAndNode_clone", 5))->mRight))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0); }
                        if(right_value601 && right_value601 != __result_obj__ && !__freed_obj__) { right_value601 = come_decrement_ref_count(right_value601, ((struct sNode*)right_value601)->finalize, ((struct sNode*)right_value601)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional615=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional615) {
                        ((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 6))->mQuote=((struct sAndNode*)come_null_check(self, "sAndNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional616=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional616) {
                        ((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 7))->sline=((struct sAndNode*)come_null_check(self, "sAndNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional617=self!=((void*)0)&&((struct sAndNode*)come_null_check(self, "sAndNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional617) {
                        __dec_obj263=((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 8))->sname;
                        ((struct sAndNode*)come_null_check(result_302, "sAndNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value602=string_clone(((struct sAndNode*)come_null_check(self, "sAndNode_clone", 8))->sname))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0,0,0); }
                        if(right_value602 && right_value602 != __result_obj__ && !__freed_obj__) { right_value602 = come_decrement_ref_count(right_value602, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result341__ = __result_obj__ = result_302;
                    if(result_302 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result341__;
                    __freed_obj__ = 0;
                    if(result_302 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_302, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value604;
struct sNode* node_303;
_Bool _while_condtional16;
_Bool _if_conditional618;
void* right_value605;
struct sNode* right_304;
void* right_value606;
void* right_value607;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value612;
struct sNode* __result346__;
_Bool _if_conditional628;
void* right_value613;
struct sNode* right_306;
void* right_value614;
void* right_value615;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value620;
struct sNode* __result349__;
struct sNode* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value604, 0, sizeof(void*));
memset(&node_303, 0, sizeof(struct sNode*));
memset(&right_value605, 0, sizeof(void*));
memset(&right_304, 0, sizeof(struct sNode*));
memset(&right_value606, 0, sizeof(void*));
memset(&right_value607, 0, sizeof(void*));
memset(&right_value612, 0, sizeof(void*));
memset(&right_value613, 0, sizeof(void*));
memset(&right_306, 0, sizeof(struct sNode*));
memset(&right_value614, 0, sizeof(void*));
memset(&right_value615, 0, sizeof(void*));
memset(&right_value620, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value604=and_exp(info))));
    if(right_value604 && right_value604 != __result_obj__ && !__freed_obj__) { right_value604 = come_decrement_ref_count(right_value604, ((struct sNode*)right_value604)->finalize, ((struct sNode*)right_value604)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional16=*((struct sInfo*)come_null_check(info, "13op.c", 2641))->p,    __freed_obj__ = 0, 
    _while_condtional16) {
        if(_if_conditional618=*((struct sInfo*)come_null_check(info, "13op.c", 2639))->p==94&&*(((struct sInfo*)come_null_check(info, "13op.c", 2639))->p+1)!=61,        __freed_obj__ = 0, 
        _if_conditional618) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2621))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value605=xor_exp(info))));
            if(right_value605 && right_value605 != __result_obj__ && !__freed_obj__) { right_value605 = come_decrement_ref_count(right_value605, ((struct sNode*)right_value605)->finalize, ((struct sNode*)right_value605)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2626);
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value607=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value606=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2626)))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_304),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result346__ = __result_obj__ = ((struct sNode*)(right_value612=_inf_value35));
            if(right_304 && !__freed_obj__) { right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0); } 
            if(node_303 && !__freed_obj__) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0); } 
            if(right_value606 && right_value606 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value607 && right_value607 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result346__;
            __freed_obj__ = 0;
            if(right_304 && !__freed_obj__) { right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional628=*((struct sInfo*)come_null_check(info, "13op.c", 2639))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2639))->p+1)==94&&*(((struct sInfo*)come_null_check(info, "13op.c", 2639))->p+2)!=61,            __freed_obj__ = 0, 
            _if_conditional628) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2629))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value613=xor_exp(info))));
                if(right_value613 && right_value613 != __result_obj__ && !__freed_obj__) { right_value613 = come_decrement_ref_count(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2634);
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value615=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value614=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2634)))),(struct sNode*)come_increment_ref_count(node_303),(struct sNode*)come_increment_ref_count(right_306),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result349__ = __result_obj__ = ((struct sNode*)(right_value620=_inf_value36));
                if(right_306 && !__freed_obj__) { right_306 = come_decrement_ref_count(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0); } 
                if(node_303 && !__freed_obj__) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0); } 
                if(right_value614 && right_value614 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value615 && right_value615 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value615, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result349__;
                __freed_obj__ = 0;
                if(right_306 && !__freed_obj__) { right_306 = come_decrement_ref_count(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result350__ = __result_obj__ = node_303;
    if(node_303 && !__freed_obj__) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result350__;
    __freed_obj__ = 0;
    if(node_303 && !__freed_obj__) { node_303 = come_decrement_ref_count(node_303, ((struct sNode*)node_303)->finalize, ((struct sNode*)node_303)->_protocol_obj, 0, 0, 0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional629;
_Bool _if_conditional630;
_Bool _if_conditional631;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional629=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional629) {
                        if(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional630=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional630) {
                        if(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional631=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional631) {
                        if(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->sname && !__freed_obj__) { ((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->sname = come_decrement_ref_count(((struct sXOrNode*)come_null_check(self, "sXOrNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional632;
struct sXOrNode* __result347__;
void* right_value616;
struct sXOrNode* result_307;
_Bool _if_conditional633;
void* right_value617;
struct sNode* __dec_obj267;
_Bool _if_conditional634;
void* right_value618;
struct sNode* __dec_obj268;
_Bool _if_conditional635;
_Bool _if_conditional636;
_Bool _if_conditional637;
void* right_value619;
char* __dec_obj269;
struct sXOrNode* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value616, 0, sizeof(void*));
memset(&result_307, 0, sizeof(struct sXOrNode*));
memset(&right_value617, 0, sizeof(void*));
memset(&right_value618, 0, sizeof(void*));
memset(&right_value619, 0, sizeof(void*));
                    if(_if_conditional632=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional632) {
                        __result347__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result347__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_307=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value616=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3))));
                    if(right_value616 && right_value616 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional633=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional633) {
                        __dec_obj267=((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 4))->mLeft;
                        ((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=sNode_clone(((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 4))->mLeft))));
                        if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0); }
                        if(right_value617 && right_value617 != __result_obj__ && !__freed_obj__) { right_value617 = come_decrement_ref_count(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional634=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional634) {
                        __dec_obj268=((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 5))->mRight;
                        ((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value618=sNode_clone(((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 5))->mRight))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0); }
                        if(right_value618 && right_value618 != __result_obj__ && !__freed_obj__) { right_value618 = come_decrement_ref_count(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional635=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional635) {
                        ((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 6))->mQuote=((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional636=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional636) {
                        ((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 7))->sline=((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional637=self!=((void*)0)&&((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional637) {
                        __dec_obj269=((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 8))->sname;
                        ((struct sXOrNode*)come_null_check(result_307, "sXOrNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value619=string_clone(((struct sXOrNode*)come_null_check(self, "sXOrNode_clone", 8))->sname))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0,0,0); }
                        if(right_value619 && right_value619 != __result_obj__ && !__freed_obj__) { right_value619 = come_decrement_ref_count(right_value619, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result348__ = __result_obj__ = result_307;
                    if(result_307 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result348__;
                    __freed_obj__ = 0;
                    if(result_307 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_307, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value621;
struct sNode* node_308;
_Bool _while_condtional17;
_Bool _if_conditional638;
void* right_value622;
struct sNode* right_309;
void* right_value623;
void* right_value624;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value629;
struct sNode* __result353__;
_Bool _if_conditional648;
void* right_value630;
struct sNode* right_311;
void* right_value631;
void* right_value632;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value637;
struct sNode* __result356__;
struct sNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value621, 0, sizeof(void*));
memset(&node_308, 0, sizeof(struct sNode*));
memset(&right_value622, 0, sizeof(void*));
memset(&right_309, 0, sizeof(struct sNode*));
memset(&right_value623, 0, sizeof(void*));
memset(&right_value624, 0, sizeof(void*));
memset(&right_value629, 0, sizeof(void*));
memset(&right_value630, 0, sizeof(void*));
memset(&right_311, 0, sizeof(struct sNode*));
memset(&right_value631, 0, sizeof(void*));
memset(&right_value632, 0, sizeof(void*));
memset(&right_value637, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value621=xor_exp(info))));
    if(right_value621 && right_value621 != __result_obj__ && !__freed_obj__) { right_value621 = come_decrement_ref_count(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional17=*((struct sInfo*)come_null_check(info, "13op.c", 2676))->p,    __freed_obj__ = 0, 
    _while_condtional17) {
        if(_if_conditional638=*((struct sInfo*)come_null_check(info, "13op.c", 2674))->p==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2674))->p+1)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2674))->p+1)!=124,        __freed_obj__ = 0, 
        _if_conditional638) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2656))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=or_exp(info))));
            if(right_value622 && right_value622 != __result_obj__ && !__freed_obj__) { right_value622 = come_decrement_ref_count(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2661);
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value624=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value623=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2661)))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_309),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result353__ = __result_obj__ = ((struct sNode*)(right_value629=_inf_value37));
            if(right_309 && !__freed_obj__) { right_309 = come_decrement_ref_count(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0); } 
            if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
            if(right_value623 && right_value623 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value624 && right_value624 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result353__;
            __freed_obj__ = 0;
            if(right_309 && !__freed_obj__) { right_309 = come_decrement_ref_count(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional648=*((struct sInfo*)come_null_check(info, "13op.c", 2674))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2674))->p+1)==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2674))->p+2)!=61&&*(((struct sInfo*)come_null_check(info, "13op.c", 2674))->p+2)!=124,            __freed_obj__ = 0, 
            _if_conditional648) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2664))->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value630=or_exp(info))));
                if(right_value630 && right_value630 != __result_obj__ && !__freed_obj__) { right_value630 = come_decrement_ref_count(right_value630, ((struct sNode*)right_value630)->finalize, ((struct sNode*)right_value630)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2669);
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value632=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value631=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2669)))),(struct sNode*)come_increment_ref_count(node_308),(struct sNode*)come_increment_ref_count(right_311),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result356__ = __result_obj__ = ((struct sNode*)(right_value637=_inf_value38));
                if(right_311 && !__freed_obj__) { right_311 = come_decrement_ref_count(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0); } 
                if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
                if(right_value631 && right_value631 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value632 && right_value632 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value632, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result356__;
                __freed_obj__ = 0;
                if(right_311 && !__freed_obj__) { right_311 = come_decrement_ref_count(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result357__ = __result_obj__ = node_308;
    if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result357__;
    __freed_obj__ = 0;
    if(node_308 && !__freed_obj__) { node_308 = come_decrement_ref_count(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional649;
_Bool _if_conditional650;
_Bool _if_conditional651;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional649=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional649) {
                        if(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional650=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional650) {
                        if(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional651=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional651) {
                        if(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->sname && !__freed_obj__) { ((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->sname = come_decrement_ref_count(((struct sOrNode*)come_null_check(self, "sOrNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional652;
struct sOrNode* __result354__;
void* right_value633;
struct sOrNode* result_312;
_Bool _if_conditional653;
void* right_value634;
struct sNode* __dec_obj273;
_Bool _if_conditional654;
void* right_value635;
struct sNode* __dec_obj274;
_Bool _if_conditional655;
_Bool _if_conditional656;
_Bool _if_conditional657;
void* right_value636;
char* __dec_obj275;
struct sOrNode* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value633, 0, sizeof(void*));
memset(&result_312, 0, sizeof(struct sOrNode*));
memset(&right_value634, 0, sizeof(void*));
memset(&right_value635, 0, sizeof(void*));
memset(&right_value636, 0, sizeof(void*));
                    if(_if_conditional652=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional652) {
                        __result354__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result354__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_312=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value633=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3))));
                    if(right_value633 && right_value633 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value633, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional653=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional653) {
                        __dec_obj273=((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 4))->mLeft;
                        ((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value634=sNode_clone(((struct sOrNode*)come_null_check(self, "sOrNode_clone", 4))->mLeft))));
                        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0); }
                        if(right_value634 && right_value634 != __result_obj__ && !__freed_obj__) { right_value634 = come_decrement_ref_count(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional654=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional654) {
                        __dec_obj274=((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 5))->mRight;
                        ((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=sNode_clone(((struct sOrNode*)come_null_check(self, "sOrNode_clone", 5))->mRight))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0); }
                        if(right_value635 && right_value635 != __result_obj__ && !__freed_obj__) { right_value635 = come_decrement_ref_count(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional655=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional655) {
                        ((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 6))->mQuote=((struct sOrNode*)come_null_check(self, "sOrNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional656=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional656) {
                        ((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 7))->sline=((struct sOrNode*)come_null_check(self, "sOrNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional657=self!=((void*)0)&&((struct sOrNode*)come_null_check(self, "sOrNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional657) {
                        __dec_obj275=((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 8))->sname;
                        ((struct sOrNode*)come_null_check(result_312, "sOrNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value636=string_clone(((struct sOrNode*)come_null_check(self, "sOrNode_clone", 8))->sname))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0,0,0); }
                        if(right_value636 && right_value636 != __result_obj__ && !__freed_obj__) { right_value636 = come_decrement_ref_count(right_value636, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result355__ = __result_obj__ = result_312;
                    if(result_312 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result355__;
                    __freed_obj__ = 0;
                    if(result_312 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value638;
struct sNode* node_313;
_Bool _while_condtional18;
_Bool _if_conditional658;
void* right_value639;
struct sNode* right_314;
void* right_value640;
void* right_value641;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value646;
struct sNode* __result360__;
_Bool _if_conditional668;
void* right_value647;
struct sNode* right_316;
void* right_value648;
void* right_value649;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value654;
struct sNode* __result363__;
struct sNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value638, 0, sizeof(void*));
memset(&node_313, 0, sizeof(struct sNode*));
memset(&right_value639, 0, sizeof(void*));
memset(&right_314, 0, sizeof(struct sNode*));
memset(&right_value640, 0, sizeof(void*));
memset(&right_value641, 0, sizeof(void*));
memset(&right_value646, 0, sizeof(void*));
memset(&right_value647, 0, sizeof(void*));
memset(&right_316, 0, sizeof(struct sNode*));
memset(&right_value648, 0, sizeof(void*));
memset(&right_value649, 0, sizeof(void*));
memset(&right_value654, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=or_exp(info))));
    if(right_value638 && right_value638 != __result_obj__ && !__freed_obj__) { right_value638 = come_decrement_ref_count(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional18=*((struct sInfo*)come_null_check(info, "13op.c", 2711))->p,    __freed_obj__ = 0, 
    _while_condtional18) {
        if(_if_conditional658=*((struct sInfo*)come_null_check(info, "13op.c", 2709))->p==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2709))->p+1)==38,        __freed_obj__ = 0, 
        _if_conditional658) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2691))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=andand_exp(info))));
            if(right_value639 && right_value639 != __result_obj__ && !__freed_obj__) { right_value639 = come_decrement_ref_count(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2696);
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value641=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value640=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2696)))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_314),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result360__ = __result_obj__ = ((struct sNode*)(right_value646=_inf_value39));
            if(right_314 && !__freed_obj__) { right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0); } 
            if(node_313 && !__freed_obj__) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0); } 
            if(right_value640 && right_value640 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value641 && right_value641 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result360__;
            __freed_obj__ = 0;
            if(right_314 && !__freed_obj__) { right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional668=*((struct sInfo*)come_null_check(info, "13op.c", 2709))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2709))->p+1)==38&&*(((struct sInfo*)come_null_check(info, "13op.c", 2709))->p+2)==38,            __freed_obj__ = 0, 
            _if_conditional668) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2699))->p+=3;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value647=andand_exp(info))));
                if(right_value647 && right_value647 != __result_obj__ && !__freed_obj__) { right_value647 = come_decrement_ref_count(right_value647, ((struct sNode*)right_value647)->finalize, ((struct sNode*)right_value647)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2704);
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value649=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value648=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2704)))),(struct sNode*)come_increment_ref_count(node_313),(struct sNode*)come_increment_ref_count(right_316),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result363__ = __result_obj__ = ((struct sNode*)(right_value654=_inf_value40));
                if(right_316 && !__freed_obj__) { right_316 = come_decrement_ref_count(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0); } 
                if(node_313 && !__freed_obj__) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0); } 
                if(right_value648 && right_value648 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value649 && right_value649 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value649, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result363__;
                __freed_obj__ = 0;
                if(right_316 && !__freed_obj__) { right_316 = come_decrement_ref_count(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result364__ = __result_obj__ = node_313;
    if(node_313 && !__freed_obj__) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result364__;
    __freed_obj__ = 0;
    if(node_313 && !__freed_obj__) { node_313 = come_decrement_ref_count(node_313, ((struct sNode*)node_313)->finalize, ((struct sNode*)node_313)->_protocol_obj, 0, 0, 0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional669;
_Bool _if_conditional670;
_Bool _if_conditional671;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional669=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional669) {
                        if(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional670=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional670) {
                        if(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional671=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional671) {
                        if(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->sname && !__freed_obj__) { ((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->sname = come_decrement_ref_count(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional672;
struct sAndAndNode* __result361__;
void* right_value650;
struct sAndAndNode* result_317;
_Bool _if_conditional673;
void* right_value651;
struct sNode* __dec_obj279;
_Bool _if_conditional674;
void* right_value652;
struct sNode* __dec_obj280;
_Bool _if_conditional675;
_Bool _if_conditional676;
_Bool _if_conditional677;
void* right_value653;
char* __dec_obj281;
struct sAndAndNode* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value650, 0, sizeof(void*));
memset(&result_317, 0, sizeof(struct sAndAndNode*));
memset(&right_value651, 0, sizeof(void*));
memset(&right_value652, 0, sizeof(void*));
memset(&right_value653, 0, sizeof(void*));
                    if(_if_conditional672=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional672) {
                        __result361__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result361__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_317=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value650=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3))));
                    if(right_value650 && right_value650 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional673=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional673) {
                        __dec_obj279=((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 4))->mLeft;
                        ((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value651=sNode_clone(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 4))->mLeft))));
                        if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0); }
                        if(right_value651 && right_value651 != __result_obj__ && !__freed_obj__) { right_value651 = come_decrement_ref_count(right_value651, ((struct sNode*)right_value651)->finalize, ((struct sNode*)right_value651)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional674=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional674) {
                        __dec_obj280=((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 5))->mRight;
                        ((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value652=sNode_clone(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 5))->mRight))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0); }
                        if(right_value652 && right_value652 != __result_obj__ && !__freed_obj__) { right_value652 = come_decrement_ref_count(right_value652, ((struct sNode*)right_value652)->finalize, ((struct sNode*)right_value652)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional675=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional675) {
                        ((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 6))->mQuote=((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional676=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional676) {
                        ((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 7))->sline=((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional677=self!=((void*)0)&&((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional677) {
                        __dec_obj281=((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 8))->sname;
                        ((struct sAndAndNode*)come_null_check(result_317, "sAndAndNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value653=string_clone(((struct sAndAndNode*)come_null_check(self, "sAndAndNode_clone", 8))->sname))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count(__dec_obj281, (void*)0, (void*)0, 0,0,0); }
                        if(right_value653 && right_value653 != __result_obj__ && !__freed_obj__) { right_value653 = come_decrement_ref_count(right_value653, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result362__ = __result_obj__ = result_317;
                    if(result_317 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result362__;
                    __freed_obj__ = 0;
                    if(result_317 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_317, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value655;
struct sNode* node_318;
_Bool _while_condtional19;
_Bool _if_conditional678;
void* right_value656;
struct sNode* right_319;
void* right_value657;
void* right_value658;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value663;
struct sNode* __result367__;
_Bool _if_conditional688;
void* right_value664;
struct sNode* right_321;
void* right_value665;
void* right_value666;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value671;
struct sNode* __result370__;
struct sNode* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value655, 0, sizeof(void*));
memset(&node_318, 0, sizeof(struct sNode*));
memset(&right_value656, 0, sizeof(void*));
memset(&right_319, 0, sizeof(struct sNode*));
memset(&right_value657, 0, sizeof(void*));
memset(&right_value658, 0, sizeof(void*));
memset(&right_value663, 0, sizeof(void*));
memset(&right_value664, 0, sizeof(void*));
memset(&right_321, 0, sizeof(struct sNode*));
memset(&right_value665, 0, sizeof(void*));
memset(&right_value666, 0, sizeof(void*));
memset(&right_value671, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=andand_exp(info))));
    if(right_value655 && right_value655 != __result_obj__ && !__freed_obj__) { right_value655 = come_decrement_ref_count(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional19=*((struct sInfo*)come_null_check(info, "13op.c", 2746))->p,    __freed_obj__ = 0, 
    _while_condtional19) {
        if(_if_conditional678=*((struct sInfo*)come_null_check(info, "13op.c", 2744))->p==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2744))->p+1)==124,        __freed_obj__ = 0, 
        _if_conditional678) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2726))->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=oror_exp(info))));
            if(right_value656 && right_value656 != __result_obj__ && !__freed_obj__) { right_value656 = come_decrement_ref_count(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2731);
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value658=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value657=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2731)))),(struct sNode*)come_increment_ref_count(node_318),(struct sNode*)come_increment_ref_count(right_319),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result367__ = __result_obj__ = ((struct sNode*)(right_value663=_inf_value41));
            if(right_319 && !__freed_obj__) { right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0); } 
            if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
            if(right_value657 && right_value657 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value657, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value658 && right_value658 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result367__;
            __freed_obj__ = 0;
            if(right_319 && !__freed_obj__) { right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional688=*((struct sInfo*)come_null_check(info, "13op.c", 2744))->p==92&&*(((struct sInfo*)come_null_check(info, "13op.c", 2744))->p+1)==124&&*(((struct sInfo*)come_null_check(info, "13op.c", 2744))->p+2)==124,            __freed_obj__ = 0, 
            _if_conditional688) {
                ((struct sInfo*)come_null_check(info, "13op.c", 2734))->p+=3;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                right_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value664=oror_exp(info))));
                if(right_value664 && right_value664 != __result_obj__ && !__freed_obj__) { right_value664 = come_decrement_ref_count(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2739);
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value666=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value665=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2739)))),(struct sNode*)come_increment_ref_count(node_318),(struct sNode*)come_increment_ref_count(right_321),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result370__ = __result_obj__ = ((struct sNode*)(right_value671=_inf_value42));
                if(right_321 && !__freed_obj__) { right_321 = come_decrement_ref_count(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0); } 
                if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
                if(right_value665 && right_value665 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value666 && right_value666 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value666, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                return __result370__;
                __freed_obj__ = 0;
                if(right_321 && !__freed_obj__) { right_321 = come_decrement_ref_count(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0); } 
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
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result371__ = __result_obj__ = node_318;
    if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result371__;
    __freed_obj__ = 0;
    if(node_318 && !__freed_obj__) { node_318 = come_decrement_ref_count(node_318, ((struct sNode*)node_318)->finalize, ((struct sNode*)node_318)->_protocol_obj, 0, 0, 0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional689;
_Bool _if_conditional690;
_Bool _if_conditional691;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional689=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional689) {
                        if(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional690=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional690) {
                        if(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional691=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 3))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional691) {
                        if(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->sname && !__freed_obj__) { ((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->sname = come_decrement_ref_count(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional692;
struct sOrOrNode* __result368__;
void* right_value667;
struct sOrOrNode* result_322;
_Bool _if_conditional693;
void* right_value668;
struct sNode* __dec_obj285;
_Bool _if_conditional694;
void* right_value669;
struct sNode* __dec_obj286;
_Bool _if_conditional695;
_Bool _if_conditional696;
_Bool _if_conditional697;
void* right_value670;
char* __dec_obj287;
struct sOrOrNode* __result369__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value667, 0, sizeof(void*));
memset(&result_322, 0, sizeof(struct sOrOrNode*));
memset(&right_value668, 0, sizeof(void*));
memset(&right_value669, 0, sizeof(void*));
memset(&right_value670, 0, sizeof(void*));
                    if(_if_conditional692=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional692) {
                        __result368__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result368__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_322=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value667=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3))));
                    if(right_value667 && right_value667 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __freed_obj__ = 0;
                    if(_if_conditional693=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 5))->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional693) {
                        __dec_obj285=((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 4))->mLeft;
                        ((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value668=sNode_clone(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 4))->mLeft))));
                        if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0); }
                        if(right_value668 && right_value668 != __result_obj__ && !__freed_obj__) { right_value668 = come_decrement_ref_count(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional694=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 6))->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional694) {
                        __dec_obj286=((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 5))->mRight;
                        ((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value669=sNode_clone(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 5))->mRight))));
                        if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0); }
                        if(right_value669 && right_value669 != __result_obj__ && !__freed_obj__) { right_value669 = come_decrement_ref_count(right_value669, ((struct sNode*)right_value669)->finalize, ((struct sNode*)right_value669)->_protocol_obj, 1, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional695=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional695) {
                        ((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 6))->mQuote=((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 6))->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional696=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional696) {
                        ((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 7))->sline=((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 7))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional697=self!=((void*)0)&&((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 9))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional697) {
                        __dec_obj287=((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 8))->sname;
                        ((struct sOrOrNode*)come_null_check(result_322, "sOrOrNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value670=string_clone(((struct sOrOrNode*)come_null_check(self, "sOrOrNode_clone", 8))->sname))));
                        if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count(__dec_obj287, (void*)0, (void*)0, 0,0,0); }
                        if(right_value670 && right_value670 != __result_obj__ && !__freed_obj__) { right_value670 = come_decrement_ref_count(right_value670, (void*)0, (void*)0, 1, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result369__ = __result_obj__ = result_322;
                    if(result_322 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_322, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result369__;
                    __freed_obj__ = 0;
                    if(result_322 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_322, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value672;
struct sNode* node_323;
_Bool _while_condtional20;
_Bool _if_conditional698;
void* right_value673;
struct sNode* node2_324;
void* right_value674;
void* right_value675;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value680;
struct sNode* __result374__;
struct sNode* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value672, 0, sizeof(void*));
memset(&node_323, 0, sizeof(struct sNode*));
memset(&right_value673, 0, sizeof(void*));
memset(&node2_324, 0, sizeof(struct sNode*));
memset(&right_value674, 0, sizeof(void*));
memset(&right_value675, 0, sizeof(void*));
memset(&right_value680, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=oror_exp(info))));
    if(right_value672 && right_value672 != __result_obj__ && !__freed_obj__) { right_value672 = come_decrement_ref_count(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional20=*((struct sInfo*)come_null_check(info, "13op.c", 2773))->p,    __freed_obj__ = 0, 
    _while_condtional20) {
        if(_if_conditional698=!((struct sInfo*)come_null_check(info, "13op.c", 2771))->no_comma&&*((struct sInfo*)come_null_check(info, "13op.c", 2771))->p==44,        __freed_obj__ = 0, 
        _if_conditional698) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2761))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            node2_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value673=oror_exp(info))));
            if(right_value673 && right_value673 != __result_obj__ && !__freed_obj__) { right_value673 = come_decrement_ref_count(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2766);
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value675=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value674=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2766)))),(struct sNode*)come_increment_ref_count(node_323),(struct sNode*)come_increment_ref_count(node2_324),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result374__ = __result_obj__ = ((struct sNode*)(right_value680=_inf_value43));
            if(node2_324 && !__freed_obj__) { node2_324 = come_decrement_ref_count(node2_324, ((struct sNode*)node2_324)->finalize, ((struct sNode*)node2_324)->_protocol_obj, 0, 0, 0); } 
            if(node_323 && !__freed_obj__) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0); } 
            if(right_value674 && right_value674 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value675 && right_value675 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result374__;
            __freed_obj__ = 0;
            if(node2_324 && !__freed_obj__) { node2_324 = come_decrement_ref_count(node2_324, ((struct sNode*)node2_324)->finalize, ((struct sNode*)node2_324)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result375__ = __result_obj__ = node_323;
    if(node_323 && !__freed_obj__) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result375__;
    __freed_obj__ = 0;
    if(node_323 && !__freed_obj__) { node_323 = come_decrement_ref_count(node_323, ((struct sNode*)node_323)->finalize, ((struct sNode*)node_323)->_protocol_obj, 0, 0, 0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional699;
_Bool _if_conditional700;
_Bool _if_conditional701;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional699=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional699) {
                    if(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft && !__freed_obj__) { ((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft = come_decrement_ref_count(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft)->finalize, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 0))->mLeft)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional700=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->mRight!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional700) {
                    if(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight && !__freed_obj__) { ((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight = come_decrement_ref_count(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight)->finalize, ((struct sNode*)((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 1))->mRight)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional701=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 3))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional701) {
                    if(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->sname && !__freed_obj__) { ((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->sname = come_decrement_ref_count(((struct sCommaNode*)come_null_check(self, "sCommaNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional702;
struct sCommaNode* __result372__;
void* right_value676;
struct sCommaNode* result_325;
_Bool _if_conditional703;
void* right_value677;
struct sNode* __dec_obj288;
_Bool _if_conditional704;
void* right_value678;
struct sNode* __dec_obj289;
_Bool _if_conditional705;
_Bool _if_conditional706;
void* right_value679;
char* __dec_obj290;
struct sCommaNode* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value676, 0, sizeof(void*));
memset(&result_325, 0, sizeof(struct sCommaNode*));
memset(&right_value677, 0, sizeof(void*));
memset(&right_value678, 0, sizeof(void*));
memset(&right_value679, 0, sizeof(void*));
                if(_if_conditional702=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional702) {
                    __result372__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result372__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_325=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value676=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3))));
                if(right_value676 && right_value676 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional703=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 5))->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional703) {
                    __dec_obj288=((struct sCommaNode*)come_null_check(result_325, "sCommaNode_clone", 4))->mLeft;
                    ((struct sCommaNode*)come_null_check(result_325, "sCommaNode_clone", 4))->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value677=sNode_clone(((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 4))->mLeft))));
                    if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0); }
                    if(right_value677 && right_value677 != __result_obj__ && !__freed_obj__) { right_value677 = come_decrement_ref_count(right_value677, ((struct sNode*)right_value677)->finalize, ((struct sNode*)right_value677)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional704=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 6))->mRight!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional704) {
                    __dec_obj289=((struct sCommaNode*)come_null_check(result_325, "sCommaNode_clone", 5))->mRight;
                    ((struct sCommaNode*)come_null_check(result_325, "sCommaNode_clone", 5))->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value678=sNode_clone(((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 5))->mRight))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0); }
                    if(right_value678 && right_value678 != __result_obj__ && !__freed_obj__) { right_value678 = come_decrement_ref_count(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional705=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional705) {
                    ((struct sCommaNode*)come_null_check(result_325, "sCommaNode_clone", 6))->sline=((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 6))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional706=self!=((void*)0)&&((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 8))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional706) {
                    __dec_obj290=((struct sCommaNode*)come_null_check(result_325, "sCommaNode_clone", 7))->sname;
                    ((struct sCommaNode*)come_null_check(result_325, "sCommaNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value679=string_clone(((struct sCommaNode*)come_null_check(self, "sCommaNode_clone", 7))->sname))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count(__dec_obj290, (void*)0, (void*)0, 0,0,0); }
                    if(right_value679 && right_value679 != __result_obj__ && !__freed_obj__) { right_value679 = come_decrement_ref_count(right_value679, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result373__ = __result_obj__ = result_325;
                if(result_325 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result373__;
                __freed_obj__ = 0;
                if(result_325 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value681;
struct sNode* node_326;
_Bool _while_condtional21;
_Bool _if_conditional707;
struct sNode* value1_327;
_Bool _if_conditional708;
void* right_value682;
void* right_value683;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value686;
struct sNode* __dec_obj292;
void* right_value687;
struct sNode* __dec_obj293;
void* right_value688;
void* right_value689;
struct sNode* value2_330;
void* right_value690;
void* right_value691;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value697;
struct sNode* __result382__;
struct sNode* __result383__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value681, 0, sizeof(void*));
memset(&node_326, 0, sizeof(struct sNode*));
memset(&value1_327, 0, sizeof(struct sNode*));
memset(&right_value682, 0, sizeof(void*));
memset(&right_value683, 0, sizeof(void*));
memset(&right_value686, 0, sizeof(void*));
memset(&right_value687, 0, sizeof(void*));
memset(&right_value688, 0, sizeof(void*));
memset(&right_value689, 0, sizeof(void*));
memset(&value2_330, 0, sizeof(struct sNode*));
memset(&right_value690, 0, sizeof(void*));
memset(&right_value691, 0, sizeof(void*));
memset(&right_value697, 0, sizeof(void*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value681=comma_exp(info))));
    if(right_value681 && right_value681 != __result_obj__ && !__freed_obj__) { right_value681 = come_decrement_ref_count(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    while(_while_condtional21=*((struct sInfo*)come_null_check(info, "13op.c", 2816))->p,    __freed_obj__ = 0, 
    _while_condtional21) {
        if(_if_conditional707=*((struct sInfo*)come_null_check(info, "13op.c", 2814))->p==63,        __freed_obj__ = 0, 
        _if_conditional707) {
            ((struct sInfo*)come_null_check(info, "13op.c", 2788))->p++;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            if(_if_conditional708=*((struct sInfo*)come_null_check(info, "13op.c", 2801))->p==58,            __freed_obj__ = 0, 
            _if_conditional708) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2795);
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value683=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value682=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2795)))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj292=value1_327;
                value1_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value686=_inf_value44)));
                if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count(__dec_obj292, ((struct sNode*)__dec_obj292)->finalize, ((struct sNode*)__dec_obj292)->_protocol_obj, 0,0,0); }
                if(right_value682 && right_value682 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value683 && right_value683 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0); }
                if(right_value686 && right_value686 != __result_obj__ && !__freed_obj__) { right_value686 = come_decrement_ref_count(right_value686, ((struct sNode*)right_value686)->finalize, ((struct sNode*)right_value686)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            else {
                __dec_obj293=value1_327;
                value1_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value687=comma_exp(info))));
                if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0); }
                if(right_value687 && right_value687 != __result_obj__ && !__freed_obj__) { right_value687 = come_decrement_ref_count(right_value687, ((struct sNode*)right_value687)->finalize, ((struct sNode*)right_value687)->_protocol_obj, 1, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            come_clear_stackframe();
            optional$2intbool_value((come_push_stackframe("13op.c", 2803),((struct optional$2intbool*)(right_value688=expected_next_character(58,info)))));
            come_pop_stackframe();
            if(right_value688 && right_value688 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            value2_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value689=comma_exp(info))));
            if(right_value689 && right_value689 != __result_obj__ && !__freed_obj__) { right_value689 = come_decrement_ref_count(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0); } 
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            __freed_obj__ = 0;
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2809);
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value691=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value690=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2809)))),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(value1_327),(struct sNode*)come_increment_ref_count(value2_330),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result382__ = __result_obj__ = ((struct sNode*)(right_value697=_inf_value45));
            if(value1_327 && !__freed_obj__) { value1_327 = come_decrement_ref_count(value1_327, ((struct sNode*)value1_327)->finalize, ((struct sNode*)value1_327)->_protocol_obj, 0, 0, 0); } 
            if(value2_330 && !__freed_obj__) { value2_330 = come_decrement_ref_count(value2_330, ((struct sNode*)value2_330)->finalize, ((struct sNode*)value2_330)->_protocol_obj, 0, 0, 0); } 
            if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0); } 
            if(right_value690 && right_value690 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value691 && right_value691 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result382__;
            __freed_obj__ = 0;
            if(value1_327 && !__freed_obj__) { value1_327 = come_decrement_ref_count(value1_327, ((struct sNode*)value1_327)->finalize, ((struct sNode*)value1_327)->_protocol_obj, 0, 0, 0); } 
            if(value2_330 && !__freed_obj__) { value2_330 = come_decrement_ref_count(value2_330, ((struct sNode*)value2_330)->finalize, ((struct sNode*)value2_330)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    __result383__ = __result_obj__ = node_326;
    if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result383__;
    __freed_obj__ = 0;
    if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0); } 
}

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional713;
int default_value_329;
int __result378__;
int __result379__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_329, 0, sizeof(int));
                if(_if_conditional713=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional713) {
                    __freed_obj__ = 0;
                    memset(&default_value_329,0,sizeof(int));
                    __freed_obj__ = 0;
                    __result378__ = default_value_329;
                    __freed_obj__ = 0;
                    return __result378__;
                    __freed_obj__ = 0;
                }
                else {
                    __result379__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                    __freed_obj__ = 0;
                    return __result379__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void optional$2intboolp_finalize(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional714;
_Bool _if_conditional715;
_Bool _if_conditional716;
_Bool _if_conditional717;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional714=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional714) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1 && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1 = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 0))->mValue1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional715=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional715) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2 && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2 = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 1))->mValue2)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional716=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->mValue3!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional716) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3 && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3 = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3)->finalize, ((struct sNode*)((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 2))->mValue3)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional717=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 4))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional717) {
                    if(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->sname && !__freed_obj__) { ((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->sname = come_decrement_ref_count(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_finalize", 3))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional718;
struct sConditionalNode* __result380__;
void* right_value692;
struct sConditionalNode* result_331;
_Bool _if_conditional719;
void* right_value693;
struct sNode* __dec_obj294;
_Bool _if_conditional720;
void* right_value694;
struct sNode* __dec_obj295;
_Bool _if_conditional721;
void* right_value695;
struct sNode* __dec_obj296;
_Bool _if_conditional722;
_Bool _if_conditional723;
void* right_value696;
char* __dec_obj297;
struct sConditionalNode* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value692, 0, sizeof(void*));
memset(&result_331, 0, sizeof(struct sConditionalNode*));
memset(&right_value693, 0, sizeof(void*));
memset(&right_value694, 0, sizeof(void*));
memset(&right_value695, 0, sizeof(void*));
memset(&right_value696, 0, sizeof(void*));
                if(_if_conditional718=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional718) {
                    __result380__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result380__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_331=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value692=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3))));
                if(right_value692 && right_value692 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value692, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional719=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 5))->mValue1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional719) {
                    __dec_obj294=((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 4))->mValue1;
                    ((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 4))->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value693=sNode_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 4))->mValue1))));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0); }
                    if(right_value693 && right_value693 != __result_obj__ && !__freed_obj__) { right_value693 = come_decrement_ref_count(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional720=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 6))->mValue2!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional720) {
                    __dec_obj295=((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 5))->mValue2;
                    ((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 5))->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value694=sNode_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 5))->mValue2))));
                    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0); }
                    if(right_value694 && right_value694 != __result_obj__ && !__freed_obj__) { right_value694 = come_decrement_ref_count(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional721=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 7))->mValue3!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional721) {
                    __dec_obj296=((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 6))->mValue3;
                    ((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 6))->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value695=sNode_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 6))->mValue3))));
                    if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0); }
                    if(right_value695 && right_value695 != __result_obj__ && !__freed_obj__) { right_value695 = come_decrement_ref_count(right_value695, ((struct sNode*)right_value695)->finalize, ((struct sNode*)right_value695)->_protocol_obj, 1, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional722=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional722) {
                    ((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 7))->sline=((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 7))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional723=self!=((void*)0)&&((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 9))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional723) {
                    __dec_obj297=((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 8))->sname;
                    ((struct sConditionalNode*)come_null_check(result_331, "sConditionalNode_clone", 8))->sname=(char*)come_increment_ref_count(((char*)(right_value696=string_clone(((struct sConditionalNode*)come_null_check(self, "sConditionalNode_clone", 8))->sname))));
                    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count(__dec_obj297, (void*)0, (void*)0, 0,0,0); }
                    if(right_value696 && right_value696 != __result_obj__ && !__freed_obj__) { right_value696 = come_decrement_ref_count(right_value696, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result381__ = __result_obj__ = result_331;
                if(result_331 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_331, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result381__;
                __freed_obj__ = 0;
                if(result_331 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_331, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value698;
struct sNode* node_332;
struct sNode* __result384__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value698, 0, sizeof(void*));
memset(&node_332, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    __freed_obj__ = 0;
    node_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value698=conditional_exp(info))));
    if(right_value698 && right_value698 != __result_obj__ && !__freed_obj__) { right_value698 = come_decrement_ref_count(right_value698, ((struct sNode*)right_value698)->finalize, ((struct sNode*)right_value698)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result384__ = __result_obj__ = node_332;
    if(node_332 && !__freed_obj__) { node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result384__;
    __freed_obj__ = 0;
    if(node_332 && !__freed_obj__) { node_332 = come_decrement_ref_count(node_332, ((struct sNode*)node_332)->finalize, ((struct sNode*)node_332)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional724;
void* right_value699;
void* right_value700;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value703;
void* right_value704;
void* right_value705;
struct sNode* __result388__;
_Bool _if_conditional730;
void* right_value706;
void* right_value707;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value710;
void* right_value711;
void* right_value712;
struct sNode* __result391__;
void* right_value713;
struct __current_stack1__ __current_stack1__;
void* right_value716;
struct sNode* result_335;
void* right_value717;
void* right_value718;
struct sNode* __result395__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value699, 0, sizeof(void*));
memset(&right_value700, 0, sizeof(void*));
memset(&right_value703, 0, sizeof(void*));
memset(&right_value704, 0, sizeof(void*));
memset(&right_value705, 0, sizeof(void*));
memset(&right_value706, 0, sizeof(void*));
memset(&right_value707, 0, sizeof(void*));
memset(&right_value710, 0, sizeof(void*));
memset(&right_value711, 0, sizeof(void*));
memset(&right_value712, 0, sizeof(void*));
memset(&right_value713, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value716, 0, sizeof(void*));
memset(&result_335, 0, sizeof(struct sNode*));
memset(&right_value717, 0, sizeof(void*));
memset(&right_value718, 0, sizeof(void*));
    if(_if_conditional724=charp_operator_equals(buf,"null"),    __freed_obj__ = 0, 
    _if_conditional724) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2833);
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value700=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value699=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2833)))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result388__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value705=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value704=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2833)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value703=_inf_value46))),(_Bool)1)));
        if(right_value699 && right_value699 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value700 && right_value700 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0); }
        if(right_value703 && right_value703 != __result_obj__ && !__freed_obj__) { right_value703 = come_decrement_ref_count(right_value703, ((struct sNode*)right_value703)->finalize, ((struct sNode*)right_value703)->_protocol_obj, 1, 0, 0); } 
        if(right_value704 && right_value704 != __result_obj__ && !__freed_obj__) { right_value704 = come_decrement_ref_count(right_value704, (void*)0, (void*)0, 1, 0, 0); }
        __freed_obj__ = 0;
        return __result388__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional730=charp_operator_equals(buf,"nil"),        __freed_obj__ = 0, 
        _if_conditional730) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2836);
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value707=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value706=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2836)))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result391__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value712=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value711=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2836)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value710=_inf_value47))),(_Bool)1)));
            if(right_value706 && right_value706 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value707 && right_value707 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0); }
            if(right_value710 && right_value710 != __result_obj__ && !__freed_obj__) { right_value710 = come_decrement_ref_count(right_value710, ((struct sNode*)right_value710)->finalize, ((struct sNode*)right_value710)->_protocol_obj, 1, 0, 0); } 
            if(right_value711 && right_value711 != __result_obj__ && !__freed_obj__) { right_value711 = come_decrement_ref_count(right_value711, (void*)0, (void*)0, 1, 0, 0); }
            __freed_obj__ = 0;
            return __result391__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value716=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("13op.c", 2843),((struct optional$2sNodephbool*)(right_value713=string_node_v12(buf,head,head_sline,info)))), "13op.c", 2843)),&__current_stack1__,(void*)method_block1_13opc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    if(right_value713 && right_value713 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0); }
    if(right_value716 && right_value716 != __result_obj__ && !__freed_obj__) { right_value716 = come_decrement_ref_count(right_value716, ((struct sNode*)right_value716)->finalize, ((struct sNode*)right_value716)->_protocol_obj, 1, 0, 0); } 
    __freed_obj__ = 0;
    __result395__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value718=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value717=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "13op.c", 2843)))),(struct sNode*)come_increment_ref_count(result_335),(_Bool)1)));
    if(result_335 && !__freed_obj__) { result_335 = come_decrement_ref_count(result_335, ((struct sNode*)result_335)->finalize, ((struct sNode*)result_335)->_protocol_obj, 0, 0, 0); } 
    if(right_value717 && right_value717 != __result_obj__ && !__freed_obj__) { right_value717 = come_decrement_ref_count(right_value717, (void*)0, (void*)0, 1, 0, 0); }
    __freed_obj__ = 0;
    return __result395__;
    __freed_obj__ = 0;
    if(result_335 && !__freed_obj__) { result_335 = come_decrement_ref_count(result_335, ((struct sNode*)result_335)->finalize, ((struct sNode*)result_335)->_protocol_obj, 0, 0, 0); } 
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional725;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional725=self!=((void*)0)&&((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 1))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional725) {
                if(((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 0))->sname && !__freed_obj__) { ((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 0))->sname = come_decrement_ref_count(((struct sNullNode*)come_null_check(self, "sNullNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional726;
struct sNullNode* __result385__;
void* right_value701;
struct sNullNode* result_333;
_Bool _if_conditional727;
_Bool _if_conditional728;
void* right_value702;
char* __dec_obj298;
struct sNullNode* __result386__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value701, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct sNullNode*));
memset(&right_value702, 0, sizeof(void*));
            if(_if_conditional726=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional726) {
                __result385__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result385__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_333=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value701=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3))));
            if(right_value701 && right_value701 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0); }
            __freed_obj__ = 0;
            if(_if_conditional727=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional727) {
                ((struct sNullNode*)come_null_check(result_333, "sNullNode_clone", 4))->sline=((struct sNullNode*)come_null_check(self, "sNullNode_clone", 4))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional728=self!=((void*)0)&&((struct sNullNode*)come_null_check(self, "sNullNode_clone", 6))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional728) {
                __dec_obj298=((struct sNullNode*)come_null_check(result_333, "sNullNode_clone", 5))->sname;
                ((struct sNullNode*)come_null_check(result_333, "sNullNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value702=string_clone(((struct sNullNode*)come_null_check(self, "sNullNode_clone", 5))->sname))));
                if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count(__dec_obj298, (void*)0, (void*)0, 0,0,0); }
                if(right_value702 && right_value702 != __result_obj__ && !__freed_obj__) { right_value702 = come_decrement_ref_count(right_value702, (void*)0, (void*)0, 1, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result386__ = __result_obj__ = result_333;
            if(result_333 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result386__;
            __freed_obj__ = 0;
            if(result_333 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct sNode* __dec_obj299;
struct optional$2sNodephbool* __result387__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            __dec_obj299=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
            if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0); }
            __freed_obj__ = 0;
            ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result387__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = 0;
            return __result387__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional729;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional729=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional729) {
                    if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional731;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional731=self!=((void*)0)&&((struct sNilNode*)come_null_check(self, "sNilNode_finalize", 1))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional731) {
                    if(((struct sNilNode*)come_null_check(self, "sNilNode_finalize", 0))->sname && !__freed_obj__) { ((struct sNilNode*)come_null_check(self, "sNilNode_finalize", 0))->sname = come_decrement_ref_count(((struct sNilNode*)come_null_check(self, "sNilNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional732;
struct sNilNode* __result389__;
void* right_value708;
struct sNilNode* result_334;
_Bool _if_conditional733;
_Bool _if_conditional734;
void* right_value709;
char* __dec_obj300;
struct sNilNode* __result390__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value708, 0, sizeof(void*));
memset(&result_334, 0, sizeof(struct sNilNode*));
memset(&right_value709, 0, sizeof(void*));
                if(_if_conditional732=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional732) {
                    __result389__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result389__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_334=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value708=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3))));
                if(right_value708 && right_value708 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value708, (void*)0, (void*)0, 0, 1, 0, 0); }
                __freed_obj__ = 0;
                if(_if_conditional733=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional733) {
                    ((struct sNilNode*)come_null_check(result_334, "sNilNode_clone", 4))->sline=((struct sNilNode*)come_null_check(self, "sNilNode_clone", 4))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional734=self!=((void*)0)&&((struct sNilNode*)come_null_check(self, "sNilNode_clone", 6))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional734) {
                    __dec_obj300=((struct sNilNode*)come_null_check(result_334, "sNilNode_clone", 5))->sname;
                    ((struct sNilNode*)come_null_check(result_334, "sNilNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value709=string_clone(((struct sNilNode*)come_null_check(self, "sNilNode_clone", 5))->sname))));
                    if(__dec_obj300) { __dec_obj300 = come_decrement_ref_count(__dec_obj300, (void*)0, (void*)0, 0,0,0); }
                    if(right_value709 && right_value709 != __result_obj__ && !__freed_obj__) { right_value709 = come_decrement_ref_count(right_value709, (void*)0, (void*)0, 1, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result390__ = __result_obj__ = result_334;
                if(result_334 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result390__;
                __freed_obj__ = 0;
                if(result_334 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
_Bool _if_conditional735;
_Bool _if_conditional736;
struct sNode* __result392__;
struct sNode* __result393__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional735=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional735) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional736=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional736) {
                __result392__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result392__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result393__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result393__;
        __freed_obj__ = 0;
}

void method_block1_13opc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* right_value714;
void* right_value715;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value714, 0, sizeof(void*));
memset(&right_value715, 0, sizeof(void*));
        if(right_value714 && right_value714 != __result_obj__ && !__freed_obj__) { right_value714 = come_decrement_ref_count(right_value714, (void*)0, (void*)0, 1, 0, 0); }
        if(right_value715 && right_value715 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0); }
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("13op.c", 2841), ((struct optional$2voidpbool*)(right_value715=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value714=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "13op.c", 2841))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
struct optional$2voidpbool* __result394__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
            __freed_obj__ = 0;
            ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
            __freed_obj__ = 0;
            __result394__ = __result_obj__ = self;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result394__;
            __freed_obj__ = 0;
            if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

