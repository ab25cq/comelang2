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
struct sPlusPlusNode
{
    struct sNode* mLeft;
    int sline;
    char* sname;
    _Bool mQuote;
};
struct sMinusMinusNode
{
    struct sNode* mLeft;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sPlusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMinusEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMultEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sDivEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sModEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLShifEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRShiftEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sXorEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sExpEqualNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

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

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info);

_Bool sMinusMinusNode_terminated();

char* sMinusMinusNode_kind();

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info);

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info);

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info);

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sPlusEqualNode_terminated();

char* sPlusEqualNode_kind();

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info);

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info);

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info);

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMinusEqualNode_terminated();

char* sMinusEqualNode_kind();

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info);

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info);

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info);

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultEqualNode_terminated();

char* sMultEqualNode_kind();

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info);

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info);

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info);

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivEqualNode_terminated();

char* sDivEqualNode_kind();

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info);

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info);

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info);

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModEqualNode_terminated();

char* sModEqualNode_kind();

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info);

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info);

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info);

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShifEqualNode_terminated();

char* sLShifEqualNode_kind();

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info);

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info);

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info);

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftEqualNode_terminated();

char* sRShiftEqualNode_kind();

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info);

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info);

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info);

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXorEqualNode_terminated();

char* sXorEqualNode_kind();

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info);

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info);

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info);

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrEqualNode_terminated();

char* sOrEqualNode_kind();

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info);

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info);

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info);

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndEqualNode_terminated();

char* sAndEqualNode_kind();

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info);

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info);

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info);

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

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

struct sPlusPlusNode* sPlusPlusNode_initialize(struct sPlusPlusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value10;
char* __dec_obj6;
void* right_value12;
struct sNode* __dec_obj7;
struct sPlusPlusNode* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&right_value12, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10;
    __freed_obj__ = 0;
    __dec_obj7=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value12=sNode_clone(left))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, ((struct sNode*)__dec_obj7)->finalize, ((struct sNode*)__dec_obj7)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { right_value12 = come_decrement_ref_count(right_value12, ((struct sNode*)right_value12)->finalize, ((struct sNode*)right_value12)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value12;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __result15__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result15__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional5;
struct sNode* __result13__;
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
struct sNode* __result14__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sNode*));
        if(_if_conditional5=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional5) {
            __result13__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result13__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_5=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
        if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, ((struct sNode*)right_value11)->finalize, ((struct sNode*)right_value11)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value11;
        __freed_obj__ = 0;
        if(_if_conditional6=self!=((void*)0)&&self->clone!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional6) {
            result_5->_protocol_obj=self->clone(self->_protocol_obj);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional7=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional7) {
            result_5->finalize=self->finalize;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional8=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional8) {
            result_5->clone=self->clone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional9=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional9) {
            result_5->compile=self->compile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional10=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional10) {
            result_5->sline=self->sline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional11=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional11) {
            result_5->sname=self->sname;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional12=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional12) {
            result_5->terminated=self->terminated;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional13=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional13) {
            result_5->kind=self->kind;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result14__ = __result_obj__ = result_5;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = 0;
        return __result14__;
        __freed_obj__ = 0;
        if(result_5 && !__freed_obj__) { result_5 = come_decrement_ref_count(result_5, ((struct sNode*)result_5)->finalize, ((struct sNode*)result_5)->_protocol_obj, 0, 0, 0); } 
}

_Bool sPlusPlusNode_terminated(){
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

char* sPlusPlusNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value13;
char* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value13, 0, sizeof(void*));
    __result17__ = __result_obj__ = ((char*)(right_value13=__builtin_string("sPlusPlusNode")));
    __freed_obj__ = 0;
    return __result17__;
    __freed_obj__ = 0;
}

_Bool sPlusPlusNode_compile(struct sPlusPlusNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_6;
_Bool _if_conditional16;
_Bool __result18__;
void* right_value14;
struct CVALUE* left_value_7;
struct sType* type_14;
char* fun_name_15;
_Bool calling_fun_16;
_Bool _if_conditional35;
_Bool _if_conditional36;
void* right_value15;
struct CVALUE* come_value_17;
void* right_value16;
char* __dec_obj8;
void* right_value50;
struct sType* __dec_obj31;
_Bool __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_6, 0, sizeof(struct sNode*));
memset(&right_value14, 0, sizeof(void*));
memset(&left_value_7, 0, sizeof(struct CVALUE*));
memset(&type_14, 0, sizeof(struct sType*));
memset(&fun_name_15, 0, sizeof(char*));
memset(&calling_fun_16, 0, sizeof(_Bool));
memset(&right_value15, 0, sizeof(void*));
memset(&come_value_17, 0, sizeof(struct CVALUE*));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
    left_6=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional16=!node_compile(left_6,info),    __freed_obj__ = 0, 
    _if_conditional16) {
        __result18__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result18__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value14=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_14=(struct sType*)come_increment_ref_count(left_value_7->type);
    __freed_obj__ = 0;
    fun_name_15="operator_plus_plus";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional35=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional35) {
        calling_fun_16=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_16=operator_overload_fun_self(type_14,fun_name_15,left_value_7,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional36=!calling_fun_16,    __freed_obj__ = 0, 
    _if_conditional36) {
        come_value_17=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value15=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 57))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
        if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value15;
        __freed_obj__ = 0;
        __dec_obj8=come_value_17->c_value;
        come_value_17->c_value=(char*)come_increment_ref_count(((char*)(right_value16=xsprintf("%s++",left_value_7->c_value))));
        if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value16);
        if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { right_value16 = come_decrement_ref_count(right_value16, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value16;
        __freed_obj__ = 0;
        __dec_obj31=come_value_17->type;
        come_value_17->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_clone(left_value_7->type))));
        if(__dec_obj31) { come_call_finalizer(sType_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value50;
        __freed_obj__ = 0;
        come_value_17->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_17));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_17->c_value);
        __freed_obj__ = 0;
        if(come_value_17 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_17, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result36__ = (_Bool)1;
    if(left_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_14 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_14, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result36__;
    __freed_obj__ = 0;
    if(left_value_7 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_7, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_14 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_14, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional17;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional17=self!=((void*)0)&&self->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional17) {
            if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional18=self!=((void*)0)&&self->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional18) {
            if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional19;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional25;
_Bool _if_conditional27;
_Bool _if_conditional28;
_Bool _if_conditional30;
_Bool _if_conditional31;
_Bool _if_conditional32;
_Bool _if_conditional33;
_Bool _if_conditional34;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional19=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional19) {
                    if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional21=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional21) {
                    if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional22=self!=((void*)0)&&self->mGenericsName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional22) {
                    if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional23=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional25=self!=((void*)0)&&self->mArrayNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional25) {
                    if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional27=self!=((void*)0)&&self->mParamTypes!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional27) {
                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional28=self!=((void*)0)&&self->mParamNames!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional28) {
                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional30=self!=((void*)0)&&self->mResultType!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional30) {
                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional31=self!=((void*)0)&&self->mAlignas!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional31) {
                    if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional32=self!=((void*)0)&&self->mSizeNum!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional32) {
                    if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional33=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional33) {
                    if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional34=self!=((void*)0)&&self->mAsmName!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional34) {
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
_Bool _if_conditional20;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional20=self!=((void*)0)&&self->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional20) {
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
struct list_item$1sTypeph* it_8;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_8, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sTypeph*));
                        it_8=self->head;
                        __freed_obj__ = 0;
                        while(_while_condtional1=it_8!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional1) {
                            prev_it_9=it_8;
                            __freed_obj__ = 0;
                            it_8=it_8->next;
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
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional24=self!=((void*)0)&&self->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional24) {
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
struct list_item$1sNodeph* it_10;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_10, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1sNodeph*));
                        it_10=self->head;
                        __freed_obj__ = 0;
                        while(_while_condtional2=it_10!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional2) {
                            prev_it_11=it_10;
                            __freed_obj__ = 0;
                            it_10=it_10->next;
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
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional26=self!=((void*)0)&&self->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional26) {
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
struct list_item$1charph* it_12;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_12, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1charph*));
                        it_12=self->head;
                        __freed_obj__ = 0;
                        while(_while_condtional3=it_12!=((void*)0),                        __freed_obj__ = 0, 
                        _while_condtional3) {
                            prev_it_13=it_12;
                            __freed_obj__ = 0;
                            it_12=it_12->next;
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
_Bool _if_conditional29;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional29=self!=((void*)0)&&self->item!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional29) {
                                    if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sType* sType_clone(struct sType* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional37;
struct sType* __result19__;
void* right_value17;
struct sType* result_18;
_Bool _if_conditional38;
_Bool _if_conditional39;
void* right_value20;
struct tuple1$1sTypeph* __dec_obj10;
_Bool _if_conditional43;
void* right_value21;
struct tuple1$1sTypeph* __dec_obj11;
_Bool _if_conditional44;
void* right_value22;
char* __dec_obj12;
_Bool _if_conditional45;
void* right_value29;
struct list$1sTypeph* __dec_obj16;
_Bool _if_conditional49;
void* right_value36;
struct list$1sNodeph* __dec_obj20;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value37;
struct list$1sTypeph* __dec_obj21;
_Bool _if_conditional55;
void* right_value44;
struct list$1charph* __dec_obj25;
_Bool _if_conditional59;
void* right_value45;
struct tuple1$1sTypeph* __dec_obj26;
_Bool _if_conditional60;
_Bool _if_conditional61;
void* right_value46;
struct sNode* __dec_obj27;
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
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value47;
struct sNode* __dec_obj28;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
void* right_value48;
char* __dec_obj29;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
_Bool _if_conditional95;
_Bool _if_conditional96;
_Bool _if_conditional97;
void* right_value49;
char* __dec_obj30;
struct sType* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value17, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sType*));
memset(&right_value20, 0, sizeof(void*));
memset(&right_value21, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value29, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value44, 0, sizeof(void*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
            if(_if_conditional37=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional37) {
                __result19__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_18=(struct sType*)come_increment_ref_count(((struct sType*)(right_value17=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
            if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value17;
            __freed_obj__ = 0;
            if(_if_conditional38=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional38) {
                result_18->mClass=self->mClass;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional39=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional39) {
                __dec_obj10=result_18->mNoSolvedGenericsType;
                result_18->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value20=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
                if(__dec_obj10) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value20;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional43=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional43) {
                __dec_obj11=result_18->mOriginalLoadVarType;
                result_18->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value21=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
                if(__dec_obj11) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional44=self!=((void*)0)&&self->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional44) {
                __dec_obj12=result_18->mGenericsName;
                result_18->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value22=string_clone(self->mGenericsName))));
                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional45=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional45) {
                __dec_obj16=result_18->mGenericsTypes;
                result_18->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value29=list$1sTypephp_clone(self->mGenericsTypes))));
                if(__dec_obj16) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value29;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional49=self!=((void*)0)&&self->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional49) {
                __dec_obj20=result_18->mArrayNum;
                result_18->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=list$1sNodephp_clone(self->mArrayNum))));
                if(__dec_obj20) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value36;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional53=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional53) {
                result_18->mOmitArrayNum=self->mOmitArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional54=self!=((void*)0)&&self->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional54) {
                __dec_obj21=result_18->mParamTypes;
                result_18->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=list$1sTypephp_clone(self->mParamTypes))));
                if(__dec_obj21) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj21, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value37;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional55=self!=((void*)0)&&self->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional55) {
                __dec_obj25=result_18->mParamNames;
                result_18->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=list$1charphp_clone(self->mParamNames))));
                if(__dec_obj25) { come_call_finalizer(list$1charph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
                if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value44;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional59=self!=((void*)0)&&self->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional59) {
                __dec_obj26=result_18->mResultType;
                result_18->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=tuple1$1sTypephp_clone(self->mResultType))));
                if(__dec_obj26) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
                if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value45;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional60=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional60) {
                result_18->mVarArgs=self->mVarArgs;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional61=self!=((void*)0)&&self->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional61) {
                __dec_obj27=result_18->mAlignas;
                result_18->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=sNode_clone(self->mAlignas))));
                if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
                if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { right_value46 = come_decrement_ref_count(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value46;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional62=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional62) {
                result_18->mUnsigned=self->mUnsigned;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional63=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional63) {
                result_18->mShort=self->mShort;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional64=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional64) {
                result_18->mLong=self->mLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional65=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional65) {
                result_18->mLongLong=self->mLongLong;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional66=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional66) {
                result_18->mConstant=self->mConstant;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional67=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional67) {
                result_18->mRegister=self->mRegister;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional68=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional68) {
                result_18->mVolatile=self->mVolatile;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional69=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional69) {
                result_18->mStatic=self->mStatic;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional70=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional70) {
                result_18->mExtern=self->mExtern;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional71=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional71) {
                result_18->mRestrict=self->mRestrict;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional72=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional72) {
                result_18->mImmutable=self->mImmutable;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional73=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional73) {
                result_18->mHeap=self->mHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional74=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional74) {
                result_18->mDummyHeap=self->mDummyHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional75=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional75) {
                result_18->mDelegate=self->mDelegate;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional76=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional76) {
                result_18->mShare=self->mShare;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional77=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional77) {
                result_18->mClone=self->mClone;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional78=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional78) {
                result_18->mNoHeap=self->mNoHeap;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional79=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional79) {
                result_18->mNoCallingDestructor=self->mNoCallingDestructor;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional80=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional80) {
                result_18->mRefference=self->mRefference;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional81=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional81) {
                result_18->mException=self->mException;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional82=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional82) {
                result_18->mPointerNum=self->mPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional83=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional83) {
                result_18->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional84=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional84) {
                result_18->mNoArrayPointerNum=self->mNoArrayPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional85=self!=((void*)0)&&self->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional85) {
                __dec_obj28=result_18->mSizeNum;
                result_18->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value47=sNode_clone(self->mSizeNum))));
                if(__dec_obj28) { __dec_obj28 = come_decrement_ref_count(__dec_obj28, ((struct sNode*)__dec_obj28)->finalize, ((struct sNode*)__dec_obj28)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
                if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, ((struct sNode*)right_value47)->finalize, ((struct sNode*)right_value47)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value47;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional86=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional86) {
                result_18->mDynamicArrayNum=self->mDynamicArrayNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional87=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional87) {
                result_18->mTypeOfExpression=self->mTypeOfExpression;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional88=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional88) {
                __dec_obj29=result_18->mOriginalTypeName;
                result_18->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(self->mOriginalTypeName))));
                if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
                if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value48;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional89=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional89) {
                result_18->mOriginalPointerNum=self->mOriginalPointerNum;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional90=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional90) {
                result_18->mFunctionParam=self->mFunctionParam;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional91=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional91) {
                result_18->mAllocaValue=self->mAllocaValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional92=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional92) {
                result_18->mGenericsStruct=self->mGenericsStruct;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional93=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional93) {
                result_18->mSolvedGenericsName=self->mSolvedGenericsName;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional94=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional94) {
                result_18->mComeMemCore=self->mComeMemCore;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional95=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional95) {
                result_18->mInline=self->mInline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional96=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional96) {
                result_18->mNullValue=self->mNullValue;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional97=self!=((void*)0)&&self->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional97) {
                __dec_obj30=result_18->mAsmName;
                result_18->mAsmName=(char*)come_increment_ref_count(((char*)(right_value49=string_clone(self->mAsmName))));
                if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
                if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value49;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result34__ = __result_obj__ = result_18;
            if(result_18 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result34__;
            __freed_obj__ = 0;
            if(result_18 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional40;
struct tuple1$1sTypeph* __result20__;
void* right_value18;
struct tuple1$1sTypeph* result_19;
_Bool _if_conditional42;
void* right_value19;
struct sType* __dec_obj9;
struct tuple1$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value19, 0, sizeof(void*));
                    if(_if_conditional40=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional40) {
                        __result20__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result20__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_19=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value18=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value18;
                    __freed_obj__ = 0;
                    if(_if_conditional42=self!=((void*)0)&&self->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional42) {
                        __dec_obj9=result_19->v1;
                        result_19->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_clone(self->v1))));
                        if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                        if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value19;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result21__ = __result_obj__ = result_19;
                    if(result_19 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result21__;
                    __freed_obj__ = 0;
                    if(result_19 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional41;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional41=self!=((void*)0)&&self->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
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
_Bool _if_conditional46;
struct list$1sTypeph* __result22__;
void* right_value23;
void* right_value24;
struct list$1sTypeph* result_20;
struct list_item$1sTypeph* it_21;
_Bool _while_condtional4;
void* right_value28;
struct list$1sTypeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_20, 0, sizeof(struct list$1sTypeph*));
memset(&it_21, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value28, 0, sizeof(void*));
                    if(_if_conditional46=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional46) {
                        __result22__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result22__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_20=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value23;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value24;
                    __freed_obj__ = 0;
                    it_21=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional4=it_21!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional4) {
                        list$1sTypeph_add(result_20,(struct sType*)come_increment_ref_count(((struct sType*)(right_value28=sType_clone(it_21->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
                        it_21=it_21->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result25__ = __result_obj__ = result_20;
                    if(result_20 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result25__;
                    __freed_obj__ = 0;
                    if(result_20 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_20, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        __freed_obj__ = 0;
                        self->tail=((void*)0);
                        __freed_obj__ = 0;
                        self->len=0;
                        __freed_obj__ = 0;
                        __result23__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result23__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
void* right_value25;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj13;
_Bool _if_conditional48;
void* right_value26;
struct list_item$1sTypeph* litem_23;
struct sType* __dec_obj14;
void* right_value27;
struct list_item$1sTypeph* litem_24;
struct sType* __dec_obj15;
struct list$1sTypeph* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_24, 0, sizeof(struct list_item$1sTypeph*));
                            if(_if_conditional47=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional47) {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value25;
                                __freed_obj__ = 0;
                                litem_22->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_22->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj13=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj13) { come_call_finalizer(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                self->tail=litem_22;
                                __freed_obj__ = 0;
                                self->head=litem_22;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional48=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional48) {
                                    litem_23=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                    if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value26;
                                    __freed_obj__ = 0;
                                    litem_23->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_23->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj14=litem_23->item;
                                    litem_23->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj14) { come_call_finalizer(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_23;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_23;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_24=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value27=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value27;
                                    __freed_obj__ = 0;
                                    litem_24->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_24->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj15=litem_24->item;
                                    litem_24->item=(struct sType*)come_increment_ref_count(item);
                                    if(__dec_obj15) { come_call_finalizer(sType_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                    self->tail->next=litem_24;
                                    __freed_obj__ = 0;
                                    self->tail=litem_24;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            self->len++;
                            __freed_obj__ = 0;
                            __result24__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result24__;
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
_Bool _if_conditional50;
struct list$1sNodeph* __result26__;
void* right_value30;
void* right_value31;
struct list$1sNodeph* result_25;
struct list_item$1sNodeph* it_26;
_Bool _while_condtional5;
void* right_value35;
struct list$1sNodeph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&result_25, 0, sizeof(struct list$1sNodeph*));
memset(&it_26, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value35, 0, sizeof(void*));
                    if(_if_conditional50=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional50) {
                        __result26__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result26__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_25=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value31=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value30;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value31);
                    if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value31;
                    __freed_obj__ = 0;
                    it_26=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional5=it_26!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional5) {
                        list$1sNodeph_add(result_25,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value35=sNode_clone(it_26->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                        if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, ((struct sNode*)right_value35)->finalize, ((struct sNode*)right_value35)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value35;
                        __freed_obj__ = 0;
                        it_26=it_26->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result29__ = __result_obj__ = result_25;
                    if(result_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result29__;
                    __freed_obj__ = 0;
                    if(result_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_25, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        __freed_obj__ = 0;
                        self->tail=((void*)0);
                        __freed_obj__ = 0;
                        self->len=0;
                        __freed_obj__ = 0;
                        __result27__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result27__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional51;
void* right_value32;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj17;
_Bool _if_conditional52;
void* right_value33;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj18;
void* right_value34;
struct list_item$1sNodeph* litem_29;
struct sNode* __dec_obj19;
struct list$1sNodeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value33, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value34, 0, sizeof(void*));
memset(&litem_29, 0, sizeof(struct list_item$1sNodeph*));
                            if(_if_conditional51=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional51) {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value32=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value32;
                                __freed_obj__ = 0;
                                litem_27->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_27->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj17=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_27;
                                __freed_obj__ = 0;
                                self->head=litem_27;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional52=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional52) {
                                    litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value33=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
                                    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value33;
                                    __freed_obj__ = 0;
                                    litem_28->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_28->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj18=litem_28->item;
                                    litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, ((struct sNode*)__dec_obj18)->finalize, ((struct sNode*)__dec_obj18)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_28;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_28;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_29=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value34=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                                    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value34;
                                    __freed_obj__ = 0;
                                    litem_29->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_29->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj19=litem_29->item;
                                    litem_29->item=(struct sNode*)come_increment_ref_count(item);
                                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, ((struct sNode*)__dec_obj19)->finalize, ((struct sNode*)__dec_obj19)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail->next=litem_29;
                                    __freed_obj__ = 0;
                                    self->tail=litem_29;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            self->len++;
                            __freed_obj__ = 0;
                            __result28__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = 0;
                            return __result28__;
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

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional56;
struct list$1charph* __result30__;
void* right_value38;
void* right_value39;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value43;
struct list$1charph* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
memset(&right_value43, 0, sizeof(void*));
                    if(_if_conditional56=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional56) {
                        __result30__ = __result_obj__ = ((void*)0);
                        __freed_obj__ = 0;
                        return __result30__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 193))))))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
                    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value38;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value39);
                    if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value39;
                    __freed_obj__ = 0;
                    it_31=self->head;
                    __freed_obj__ = 0;
                    while(_while_condtional6=it_31!=((void*)0),                    __freed_obj__ = 0, 
                    _while_condtional6) {
                        list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value43=string_clone(it_31->item)))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
                        if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value43;
                        __freed_obj__ = 0;
                        it_31=it_31->next;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result33__ = __result_obj__ = result_30;
                    if(result_30 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result33__;
                    __freed_obj__ = 0;
                    if(result_30 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        self->head=((void*)0);
                        __freed_obj__ = 0;
                        self->tail=((void*)0);
                        __freed_obj__ = 0;
                        self->len=0;
                        __freed_obj__ = 0;
                        __result31__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result31__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional57;
void* right_value40;
struct list_item$1charph* litem_32;
char* __dec_obj22;
_Bool _if_conditional58;
void* right_value41;
struct list_item$1charph* litem_33;
char* __dec_obj23;
void* right_value42;
struct list_item$1charph* litem_34;
char* __dec_obj24;
struct list$1charph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
memset(&right_value41, 0, sizeof(void*));
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
memset(&right_value42, 0, sizeof(void*));
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                            if(_if_conditional57=self->len==0,                            __freed_obj__ = 0, 
                            _if_conditional57) {
                                litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 207))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
                                if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value40;
                                __freed_obj__ = 0;
                                litem_32->prev=((void*)0);
                                __freed_obj__ = 0;
                                litem_32->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj22=litem_32->item;
                                litem_32->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                self->tail=litem_32;
                                __freed_obj__ = 0;
                                self->head=litem_32;
                                __freed_obj__ = 0;
                            }
                            else {
                                if(_if_conditional58=self->len==1,                                __freed_obj__ = 0, 
                                _if_conditional58) {
                                    litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value41=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 217))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value41;
                                    __freed_obj__ = 0;
                                    litem_33->prev=self->head;
                                    __freed_obj__ = 0;
                                    litem_33->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj23=litem_33->item;
                                    litem_33->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail=litem_33;
                                    __freed_obj__ = 0;
                                    self->head->next=litem_33;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value42=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 227))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
                                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value42;
                                    __freed_obj__ = 0;
                                    litem_34->prev=self->tail;
                                    __freed_obj__ = 0;
                                    litem_34->next=((void*)0);
                                    __freed_obj__ = 0;
                                    __dec_obj24=litem_34->item;
                                    litem_34->item=(char*)come_increment_ref_count(item);
                                    if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = 0;
                                    self->tail->next=litem_34;
                                    __freed_obj__ = 0;
                                    self->tail=litem_34;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            self->len++;
                            __freed_obj__ = 0;
                            __result32__ = __result_obj__ = self;
                            if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result32__;
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

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
void* right_value51;
struct list_item$1CVALUEph* litem_35;
struct CVALUE* __dec_obj32;
_Bool _if_conditional100;
void* right_value52;
struct list_item$1CVALUEph* litem_36;
struct CVALUE* __dec_obj33;
void* right_value53;
struct list_item$1CVALUEph* litem_37;
struct CVALUE* __dec_obj34;
struct list$1CVALUEph* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value51, 0, sizeof(void*));
memset(&litem_35, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_36, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_37, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional98=self->len==0,            __freed_obj__ = 0, 
            _if_conditional98) {
                litem_35=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value51=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 277))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value51;
                __freed_obj__ = 0;
                litem_35->prev=((void*)0);
                __freed_obj__ = 0;
                litem_35->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj32=litem_35->item;
                litem_35->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj32) { come_call_finalizer(CVALUE_finalize,__dec_obj32, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                self->tail=litem_35;
                __freed_obj__ = 0;
                self->head=litem_35;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional100=self->len==1,                __freed_obj__ = 0, 
                _if_conditional100) {
                    litem_36=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value52=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 287))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value52;
                    __freed_obj__ = 0;
                    litem_36->prev=self->head;
                    __freed_obj__ = 0;
                    litem_36->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj33=litem_36->item;
                    litem_36->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj33) { come_call_finalizer(CVALUE_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    self->tail=litem_36;
                    __freed_obj__ = 0;
                    self->head->next=litem_36;
                    __freed_obj__ = 0;
                }
                else {
                    litem_37=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value53=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 297))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                    if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value53;
                    __freed_obj__ = 0;
                    litem_37->prev=self->tail;
                    __freed_obj__ = 0;
                    litem_37->next=((void*)0);
                    __freed_obj__ = 0;
                    __dec_obj34=litem_37->item;
                    litem_37->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj34) { come_call_finalizer(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                    self->tail->next=litem_37;
                    __freed_obj__ = 0;
                    self->tail=litem_37;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            self->len++;
            __freed_obj__ = 0;
            __result35__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result35__;
            __freed_obj__ = 0;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional99;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional99=self!=((void*)0)&&self->item!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional99) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

int sPlusPlusNode_sline(struct sPlusPlusNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result37__ = self->sline;
    __freed_obj__ = 0;
    return __result37__;
    __freed_obj__ = 0;
}

char* sPlusPlusNode_sname(struct sPlusPlusNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value54;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value54, 0, sizeof(void*));
    __result38__ = __result_obj__ = ((char*)(right_value54=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result38__;
    __freed_obj__ = 0;
}

struct sMinusMinusNode* sMinusMinusNode_initialize(struct sMinusMinusNode* self, struct sNode* left, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value55;
char* __dec_obj35;
void* right_value56;
struct sNode* __dec_obj36;
struct sMinusMinusNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj35=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value55=__builtin_string(info->sname))));
    if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { right_value55 = come_decrement_ref_count(right_value55, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = 0;
    __dec_obj36=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value56=sNode_clone(left))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { right_value56 = come_decrement_ref_count(right_value56, ((struct sNode*)right_value56)->finalize, ((struct sNode*)right_value56)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value56;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __result39__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result39__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMinusMinusNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result40__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result40__;
    __freed_obj__ = 0;
}

char* sMinusMinusNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value57;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value57, 0, sizeof(void*));
    __result41__ = __result_obj__ = ((char*)(right_value57=__builtin_string("sMinusMinusNode")));
    __freed_obj__ = 0;
    return __result41__;
    __freed_obj__ = 0;
}

_Bool sMinusMinusNode_compile(struct sMinusMinusNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_38;
_Bool _if_conditional103;
_Bool __result42__;
void* right_value58;
struct CVALUE* left_value_39;
struct sType* type_40;
char* fun_name_41;
_Bool calling_fun_42;
_Bool _if_conditional104;
_Bool _if_conditional105;
void* right_value59;
struct CVALUE* come_value_43;
void* right_value60;
char* __dec_obj37;
void* right_value61;
struct sType* __dec_obj38;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_38, 0, sizeof(struct sNode*));
memset(&right_value58, 0, sizeof(void*));
memset(&left_value_39, 0, sizeof(struct CVALUE*));
memset(&type_40, 0, sizeof(struct sType*));
memset(&fun_name_41, 0, sizeof(char*));
memset(&calling_fun_42, 0, sizeof(_Bool));
memset(&right_value59, 0, sizeof(void*));
memset(&come_value_43, 0, sizeof(struct CVALUE*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
    left_38=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional103=!node_compile(left_38,info),    __freed_obj__ = 0, 
    _if_conditional103) {
        __result42__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result42__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_39=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value58=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value58;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_40=(struct sType*)come_increment_ref_count(left_value_39->type);
    __freed_obj__ = 0;
    fun_name_41="operator_minus_minus";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional104=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional104) {
        calling_fun_42=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_42=operator_overload_fun_self(type_40,fun_name_41,left_value_39,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional105=!calling_fun_42,    __freed_obj__ = 0, 
    _if_conditional105) {
        come_value_43=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value59=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 135))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value59;
        __freed_obj__ = 0;
        __dec_obj37=come_value_43->c_value;
        come_value_43->c_value=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("%s--",left_value_39->c_value))));
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
        if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value60;
        __freed_obj__ = 0;
        __dec_obj38=come_value_43->type;
        come_value_43->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(left_value_39->type))));
        if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value61;
        __freed_obj__ = 0;
        come_value_43->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_43));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_43->c_value);
        __freed_obj__ = 0;
        if(come_value_43 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result43__ = (_Bool)1;
    if(left_value_39 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result43__;
    __freed_obj__ = 0;
    if(left_value_39 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_39, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMinusMinusNode_sline(struct sMinusMinusNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result44__ = self->sline;
    __freed_obj__ = 0;
    return __result44__;
    __freed_obj__ = 0;
}

char* sMinusMinusNode_sname(struct sMinusMinusNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value62;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value62, 0, sizeof(void*));
    __result45__ = __result_obj__ = ((char*)(right_value62=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result45__;
    __freed_obj__ = 0;
}

struct sPlusEqualNode* sPlusEqualNode_initialize(struct sPlusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value63;
char* __dec_obj39;
void* right_value64;
struct sNode* __dec_obj40;
void* right_value65;
struct sNode* __dec_obj41;
struct sPlusEqualNode* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj39=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(info->sname))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value63;
    __freed_obj__ = 0;
    __dec_obj40=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value64=sNode_clone(left))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, ((struct sNode*)__dec_obj40)->finalize, ((struct sNode*)__dec_obj40)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value64);
    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, ((struct sNode*)right_value64)->finalize, ((struct sNode*)right_value64)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value64;
    __freed_obj__ = 0;
    __dec_obj41=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value65=sNode_clone(right))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, ((struct sNode*)__dec_obj41)->finalize, ((struct sNode*)__dec_obj41)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value65);
    if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, ((struct sNode*)right_value65)->finalize, ((struct sNode*)right_value65)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value65;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __result46__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result46__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sPlusEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result47__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
}

char* sPlusEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value66;
char* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
    __result48__ = __result_obj__ = ((char*)(right_value66=__builtin_string("sPlusEqualNode")));
    __freed_obj__ = 0;
    return __result48__;
    __freed_obj__ = 0;
}

_Bool sPlusEqualNode_compile(struct sPlusEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_44;
_Bool _if_conditional109;
_Bool __result49__;
void* right_value67;
struct CVALUE* left_value_45;
struct sNode* right_46;
_Bool _if_conditional110;
_Bool __result50__;
void* right_value68;
struct CVALUE* right_value_47;
struct sType* type_48;
char* fun_name_49;
_Bool calling_fun_50;
_Bool _if_conditional111;
_Bool _if_conditional112;
void* right_value69;
struct CVALUE* come_value_51;
void* right_value70;
char* __dec_obj42;
void* right_value71;
struct sType* __dec_obj43;
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_44, 0, sizeof(struct sNode*));
memset(&right_value67, 0, sizeof(void*));
memset(&left_value_45, 0, sizeof(struct CVALUE*));
memset(&right_46, 0, sizeof(struct sNode*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value_47, 0, sizeof(struct CVALUE*));
memset(&type_48, 0, sizeof(struct sType*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&calling_fun_50, 0, sizeof(_Bool));
memset(&right_value69, 0, sizeof(void*));
memset(&come_value_51, 0, sizeof(struct CVALUE*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
    left_44=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional109=!node_compile(left_44,info),    __freed_obj__ = 0, 
    _if_conditional109) {
        __result49__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result49__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_45=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value67=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value67;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_46=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional110=!node_compile(right_46,info),    __freed_obj__ = 0, 
    _if_conditional110) {
        __result50__ = (_Bool)0;
        if(left_value_45 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result50__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value68=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value68;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_48=(struct sType*)come_increment_ref_count(left_value_45->type);
    __freed_obj__ = 0;
    fun_name_49="operator_plus_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional111=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional111) {
        calling_fun_50=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_50=operator_overload_fun(type_48,fun_name_49,left_value_45,right_value_47,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional112=!calling_fun_50,    __freed_obj__ = 0, 
    _if_conditional112) {
        come_value_51=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value69=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 223))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value69;
        __freed_obj__ = 0;
        __dec_obj42=come_value_51->c_value;
        come_value_51->c_value=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s+=%s",left_value_45->c_value,right_value_47->c_value))));
        if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value70;
        __freed_obj__ = 0;
        __dec_obj43=come_value_51->type;
        come_value_51->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(left_value_45->type))));
        if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value71);
        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value71;
        __freed_obj__ = 0;
        come_value_51->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_51));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_51->c_value);
        __freed_obj__ = 0;
        if(come_value_51 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_51, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result51__ = (_Bool)1;
    if(left_value_45 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_47 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result51__;
    __freed_obj__ = 0;
    if(left_value_45 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_47 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_47, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_48, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sPlusEqualNode_sline(struct sPlusEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result52__ = self->sline;
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}

char* sPlusEqualNode_sname(struct sPlusEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value72;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value72, 0, sizeof(void*));
    __result53__ = __result_obj__ = ((char*)(right_value72=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
}

struct sMinusEqualNode* sMinusEqualNode_initialize(struct sMinusEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value73;
char* __dec_obj44;
void* right_value74;
struct sNode* __dec_obj45;
void* right_value75;
struct sNode* __dec_obj46;
struct sMinusEqualNode* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(info->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value73;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj45=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=sNode_clone(left))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, ((struct sNode*)__dec_obj45)->finalize, ((struct sNode*)__dec_obj45)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value74;
    __freed_obj__ = 0;
    __dec_obj46=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value75=sNode_clone(right))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, ((struct sNode*)right_value75)->finalize, ((struct sNode*)right_value75)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value75;
    __freed_obj__ = 0;
    __result54__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result54__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMinusEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result55__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
}

char* sMinusEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value76;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value76, 0, sizeof(void*));
    __result56__ = __result_obj__ = ((char*)(right_value76=__builtin_string("sPlusEqualNode")));
    __freed_obj__ = 0;
    return __result56__;
    __freed_obj__ = 0;
}

_Bool sMinusEqualNode_compile(struct sMinusEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_52;
_Bool _if_conditional116;
_Bool __result57__;
void* right_value77;
struct CVALUE* left_value_53;
struct sNode* right_54;
_Bool _if_conditional117;
_Bool __result58__;
void* right_value78;
struct CVALUE* right_value_55;
struct sType* type_56;
char* fun_name_57;
_Bool calling_fun_58;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value79;
struct CVALUE* come_value_59;
void* right_value80;
char* __dec_obj47;
void* right_value81;
struct sType* __dec_obj48;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_52, 0, sizeof(struct sNode*));
memset(&right_value77, 0, sizeof(void*));
memset(&left_value_53, 0, sizeof(struct CVALUE*));
memset(&right_54, 0, sizeof(struct sNode*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value_55, 0, sizeof(struct CVALUE*));
memset(&type_56, 0, sizeof(struct sType*));
memset(&fun_name_57, 0, sizeof(char*));
memset(&calling_fun_58, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&come_value_59, 0, sizeof(struct CVALUE*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
    left_52=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional116=!node_compile(left_52,info),    __freed_obj__ = 0, 
    _if_conditional116) {
        __result57__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value77=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value77;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_54=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional117=!node_compile(right_54,info),    __freed_obj__ = 0, 
    _if_conditional117) {
        __result58__ = (_Bool)0;
        if(left_value_53 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_53, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result58__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value78=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value78;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_56=(struct sType*)come_increment_ref_count(left_value_53->type);
    __freed_obj__ = 0;
    fun_name_57="operator_minus_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional118=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional118) {
        calling_fun_58=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_58=operator_overload_fun(type_56,fun_name_57,left_value_53,right_value_55,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional119=!calling_fun_58,    __freed_obj__ = 0, 
    _if_conditional119) {
        come_value_59=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value79=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 311))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79;
        __freed_obj__ = 0;
        __dec_obj47=come_value_59->c_value;
        come_value_59->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("%s-=%s",left_value_53->c_value,right_value_55->c_value))));
        if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value80;
        __freed_obj__ = 0;
        __dec_obj48=come_value_59->type;
        come_value_59->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(left_value_53->type))));
        if(__dec_obj48) { come_call_finalizer(sType_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value81;
        __freed_obj__ = 0;
        come_value_59->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_59));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_59->c_value);
        __freed_obj__ = 0;
        if(come_value_59 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result59__ = (_Bool)1;
    if(left_value_53 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result59__;
    __freed_obj__ = 0;
    if(left_value_53 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_56 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_56, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMinusEqualNode_sline(struct sMinusEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result60__ = self->sline;
    __freed_obj__ = 0;
    return __result60__;
    __freed_obj__ = 0;
}

char* sMinusEqualNode_sname(struct sMinusEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
    __result61__ = __result_obj__ = ((char*)(right_value82=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result61__;
    __freed_obj__ = 0;
}

struct sMultEqualNode* sMultEqualNode_initialize(struct sMultEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __dec_obj49;
void* right_value84;
struct sNode* __dec_obj50;
void* right_value85;
struct sNode* __dec_obj51;
struct sMultEqualNode* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value83=__builtin_string(info->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj50=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value84=sNode_clone(left))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, ((struct sNode*)right_value84)->finalize, ((struct sNode*)right_value84)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value84;
    __freed_obj__ = 0;
    __dec_obj51=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value85=sNode_clone(right))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, ((struct sNode*)right_value85)->finalize, ((struct sNode*)right_value85)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value85;
    __freed_obj__ = 0;
    __result62__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result62__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMultEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result63__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
}

char* sMultEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value86;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value86, 0, sizeof(void*));
    __result64__ = __result_obj__ = ((char*)(right_value86=__builtin_string("sMultEqualNode")));
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
}

_Bool sMultEqualNode_compile(struct sMultEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_60;
_Bool _if_conditional123;
_Bool __result65__;
void* right_value87;
struct CVALUE* left_value_61;
struct sNode* right_62;
_Bool _if_conditional124;
_Bool __result66__;
void* right_value88;
struct CVALUE* right_value_63;
struct sType* type_64;
char* fun_name_65;
_Bool calling_fun_66;
_Bool _if_conditional125;
_Bool _if_conditional126;
void* right_value89;
struct CVALUE* come_value_67;
void* right_value90;
char* __dec_obj52;
void* right_value91;
struct sType* __dec_obj53;
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_60, 0, sizeof(struct sNode*));
memset(&right_value87, 0, sizeof(void*));
memset(&left_value_61, 0, sizeof(struct CVALUE*));
memset(&right_62, 0, sizeof(struct sNode*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value_63, 0, sizeof(struct CVALUE*));
memset(&type_64, 0, sizeof(struct sType*));
memset(&fun_name_65, 0, sizeof(char*));
memset(&calling_fun_66, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&come_value_67, 0, sizeof(struct CVALUE*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value91, 0, sizeof(void*));
    left_60=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional123=!node_compile(left_60,info),    __freed_obj__ = 0, 
    _if_conditional123) {
        __result65__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result65__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_61=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value87=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value87;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_62=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional124=!node_compile(right_62,info),    __freed_obj__ = 0, 
    _if_conditional124) {
        __result66__ = (_Bool)0;
        if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result66__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_63=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value88=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value88;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_64=(struct sType*)come_increment_ref_count(left_value_61->type);
    __freed_obj__ = 0;
    fun_name_65="operator_mult_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional125=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional125) {
        calling_fun_66=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_66=operator_overload_fun(type_64,fun_name_65,left_value_61,right_value_63,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional126=!calling_fun_66,    __freed_obj__ = 0, 
    _if_conditional126) {
        come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value89=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 399))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
        __freed_obj__ = 0;
        __dec_obj52=come_value_67->c_value;
        come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value90=xsprintf("%s*=%s",left_value_61->c_value,right_value_63->c_value))));
        if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value90);
        if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value90;
        __freed_obj__ = 0;
        __dec_obj53=come_value_67->type;
        come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value91=sType_clone(left_value_61->type))));
        if(__dec_obj53) { come_call_finalizer(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value91);
        if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value91;
        __freed_obj__ = 0;
        come_value_67->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_67->c_value);
        __freed_obj__ = 0;
        if(come_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result67__ = (_Bool)1;
    if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_64 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
    if(left_value_61 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_63 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_64 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_64, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMultEqualNode_sline(struct sMultEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result68__ = self->sline;
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

char* sMultEqualNode_sname(struct sMultEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value92;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
    __result69__ = __result_obj__ = ((char*)(right_value92=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
}

struct sDivEqualNode* sDivEqualNode_initialize(struct sDivEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
char* __dec_obj54;
void* right_value94;
struct sNode* __dec_obj55;
void* right_value95;
struct sNode* __dec_obj56;
struct sDivEqualNode* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(info->sname))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj55=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value94=sNode_clone(left))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, ((struct sNode*)right_value94)->finalize, ((struct sNode*)right_value94)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value94;
    __freed_obj__ = 0;
    __dec_obj56=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value95=sNode_clone(right))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, ((struct sNode*)right_value95)->finalize, ((struct sNode*)right_value95)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value95;
    __freed_obj__ = 0;
    __result70__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result70__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sDivEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result71__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result71__;
    __freed_obj__ = 0;
}

char* sDivEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
    __result72__ = __result_obj__ = ((char*)(right_value96=__builtin_string("sDivEqualNode")));
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

_Bool sDivEqualNode_compile(struct sDivEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_68;
_Bool _if_conditional130;
_Bool __result73__;
void* right_value97;
struct CVALUE* left_value_69;
struct sNode* right_70;
_Bool _if_conditional131;
_Bool __result74__;
void* right_value98;
struct CVALUE* right_value_71;
struct sType* type_72;
char* fun_name_73;
_Bool calling_fun_74;
_Bool _if_conditional132;
_Bool _if_conditional133;
void* right_value99;
struct CVALUE* come_value_75;
void* right_value100;
char* __dec_obj57;
void* right_value101;
struct sType* __dec_obj58;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_68, 0, sizeof(struct sNode*));
memset(&right_value97, 0, sizeof(void*));
memset(&left_value_69, 0, sizeof(struct CVALUE*));
memset(&right_70, 0, sizeof(struct sNode*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value_71, 0, sizeof(struct CVALUE*));
memset(&type_72, 0, sizeof(struct sType*));
memset(&fun_name_73, 0, sizeof(char*));
memset(&calling_fun_74, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
memset(&come_value_75, 0, sizeof(struct CVALUE*));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
    left_68=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional130=!node_compile(left_68,info),    __freed_obj__ = 0, 
    _if_conditional130) {
        __result73__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result73__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_70=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional131=!node_compile(right_70,info),    __freed_obj__ = 0, 
    _if_conditional131) {
        __result74__ = (_Bool)0;
        if(left_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result74__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value98;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_72=(struct sType*)come_increment_ref_count(left_value_69->type);
    __freed_obj__ = 0;
    fun_name_73="operator_div_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional132=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional132) {
        calling_fun_74=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_74=operator_overload_fun(type_72,fun_name_73,left_value_69,right_value_71,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional133=!calling_fun_74,    __freed_obj__ = 0, 
    _if_conditional133) {
        come_value_75=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value99=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 487))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
        if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value99;
        __freed_obj__ = 0;
        __dec_obj57=come_value_75->c_value;
        come_value_75->c_value=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s/=%s",left_value_69->c_value,right_value_71->c_value))));
        if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value100);
        if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value100;
        __freed_obj__ = 0;
        __dec_obj58=come_value_75->type;
        come_value_75->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_clone(left_value_69->type))));
        if(__dec_obj58) { come_call_finalizer(sType_finalize,__dec_obj58, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value101);
        if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value101;
        __freed_obj__ = 0;
        come_value_75->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_75));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_75->c_value);
        __freed_obj__ = 0;
        if(come_value_75 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_75, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result75__ = (_Bool)1;
    if(left_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
    if(left_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_72 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_72, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sDivEqualNode_sline(struct sDivEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = self->sline;
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

char* sDivEqualNode_sname(struct sDivEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result77__ = __result_obj__ = ((char*)(right_value102=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

struct sModEqualNode* sModEqualNode_initialize(struct sModEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __dec_obj59;
void* right_value104;
struct sNode* __dec_obj60;
void* right_value105;
struct sNode* __dec_obj61;
struct sModEqualNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
memset(&right_value105, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(info->sname))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value104=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value104;
    __freed_obj__ = 0;
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value105=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, ((struct sNode*)right_value105)->finalize, ((struct sNode*)right_value105)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value105;
    __freed_obj__ = 0;
    __result78__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sModEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result79__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result79__;
    __freed_obj__ = 0;
}

char* sModEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
    __result80__ = __result_obj__ = ((char*)(right_value106=__builtin_string("sModEqualNode")));
    __freed_obj__ = 0;
    return __result80__;
    __freed_obj__ = 0;
}

_Bool sModEqualNode_compile(struct sModEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_76;
_Bool _if_conditional137;
_Bool __result81__;
void* right_value107;
struct CVALUE* left_value_77;
struct sNode* right_78;
_Bool _if_conditional138;
_Bool __result82__;
void* right_value108;
struct CVALUE* right_value_79;
struct sType* type_80;
char* fun_name_81;
_Bool calling_fun_82;
_Bool _if_conditional139;
_Bool _if_conditional140;
void* right_value109;
struct CVALUE* come_value_83;
void* right_value110;
char* __dec_obj62;
void* right_value111;
struct sType* __dec_obj63;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_76, 0, sizeof(struct sNode*));
memset(&right_value107, 0, sizeof(void*));
memset(&left_value_77, 0, sizeof(struct CVALUE*));
memset(&right_78, 0, sizeof(struct sNode*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value_79, 0, sizeof(struct CVALUE*));
memset(&type_80, 0, sizeof(struct sType*));
memset(&fun_name_81, 0, sizeof(char*));
memset(&calling_fun_82, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
memset(&come_value_83, 0, sizeof(struct CVALUE*));
memset(&right_value110, 0, sizeof(void*));
memset(&right_value111, 0, sizeof(void*));
    left_76=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional137=!node_compile(left_76,info),    __freed_obj__ = 0, 
    _if_conditional137) {
        __result81__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result81__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_78=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional138=!node_compile(right_78,info),    __freed_obj__ = 0, 
    _if_conditional138) {
        __result82__ = (_Bool)0;
        if(left_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result82__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value108=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_80=(struct sType*)come_increment_ref_count(left_value_77->type);
    __freed_obj__ = 0;
    fun_name_81="operator_mod_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional139=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional139) {
        calling_fun_82=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_82=operator_overload_fun(type_80,fun_name_81,left_value_77,right_value_79,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional140=!calling_fun_82,    __freed_obj__ = 0, 
    _if_conditional140) {
        come_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value109=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 575))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
        if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value109;
        __freed_obj__ = 0;
        __dec_obj62=come_value_83->c_value;
        come_value_83->c_value=(char*)come_increment_ref_count(((char*)(right_value110=xsprintf("%s%%=%s",left_value_77->c_value,right_value_79->c_value))));
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
        if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value110;
        __freed_obj__ = 0;
        __dec_obj63=come_value_83->type;
        come_value_83->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=sType_clone(left_value_77->type))));
        if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value111);
        if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value111;
        __freed_obj__ = 0;
        come_value_83->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_83));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_83->c_value);
        __freed_obj__ = 0;
        if(come_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result83__ = (_Bool)1;
    if(left_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_80 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
    if(left_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_80 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_80, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sModEqualNode_sline(struct sModEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result84__ = self->sline;
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

char* sModEqualNode_sname(struct sModEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value112;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
    __result85__ = __result_obj__ = ((char*)(right_value112=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

struct sLShifEqualNode* sLShifEqualNode_initialize(struct sLShifEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value113;
char* __dec_obj64;
void* right_value114;
struct sNode* __dec_obj65;
void* right_value115;
struct sNode* __dec_obj66;
struct sLShifEqualNode* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
memset(&right_value115, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj64=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(info->sname))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj65=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(left))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    __dec_obj66=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(right))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value115;
    __freed_obj__ = 0;
    __result86__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLShifEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result87__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
}

char* sLShifEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
    __result88__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sLShifEqualNode")));
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
}

_Bool sLShifEqualNode_compile(struct sLShifEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_84;
_Bool _if_conditional144;
_Bool __result89__;
void* right_value117;
struct CVALUE* left_value_85;
struct sNode* right_86;
_Bool _if_conditional145;
_Bool __result90__;
void* right_value118;
struct CVALUE* right_value_87;
struct sType* type_88;
char* fun_name_89;
_Bool calling_fun_90;
_Bool _if_conditional146;
_Bool _if_conditional147;
void* right_value119;
struct CVALUE* come_value_91;
void* right_value120;
char* __dec_obj67;
void* right_value121;
struct sType* __dec_obj68;
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_84, 0, sizeof(struct sNode*));
memset(&right_value117, 0, sizeof(void*));
memset(&left_value_85, 0, sizeof(struct CVALUE*));
memset(&right_86, 0, sizeof(struct sNode*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value_87, 0, sizeof(struct CVALUE*));
memset(&type_88, 0, sizeof(struct sType*));
memset(&fun_name_89, 0, sizeof(char*));
memset(&calling_fun_90, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
memset(&come_value_91, 0, sizeof(struct CVALUE*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
    left_84=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional144=!node_compile(left_84,info),    __freed_obj__ = 0, 
    _if_conditional144) {
        __result89__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result89__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_86=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional145=!node_compile(right_86,info),    __freed_obj__ = 0, 
    _if_conditional145) {
        __result90__ = (_Bool)0;
        if(left_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result90__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value118;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_88=(struct sType*)come_increment_ref_count(left_value_85->type);
    __freed_obj__ = 0;
    fun_name_89="operator_lshift_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional146=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional146) {
        calling_fun_90=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_90=operator_overload_fun(type_88,fun_name_89,left_value_85,right_value_87,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional147=!calling_fun_90,    __freed_obj__ = 0, 
    _if_conditional147) {
        come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 664))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
        if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value119;
        __freed_obj__ = 0;
        __dec_obj67=come_value_91->c_value;
        come_value_91->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s<<=%s",left_value_85->c_value,right_value_87->c_value))));
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value120;
        __freed_obj__ = 0;
        __dec_obj68=come_value_91->type;
        come_value_91->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(left_value_85->type))));
        if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value121;
        __freed_obj__ = 0;
        come_value_91->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_91));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_91->c_value);
        __freed_obj__ = 0;
        if(come_value_91 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result91__ = (_Bool)1;
    if(left_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
    if(left_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_88 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLShifEqualNode_sline(struct sLShifEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result92__ = self->sline;
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

char* sLShifEqualNode_sname(struct sLShifEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value122;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
    __result93__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result93__;
    __freed_obj__ = 0;
}

struct sRShiftEqualNode* sRShiftEqualNode_initialize(struct sRShiftEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value123;
char* __dec_obj69;
void* right_value124;
struct sNode* __dec_obj70;
void* right_value125;
struct sNode* __dec_obj71;
struct sRShiftEqualNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value123;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj70=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(left))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value124;
    __freed_obj__ = 0;
    __dec_obj71=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(right))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value125;
    __freed_obj__ = 0;
    __result94__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sRShiftEqualNode_terminated(){
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

char* sRShiftEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
    __result96__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sRShiftEqualNode")));
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

_Bool sRShiftEqualNode_compile(struct sRShiftEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_92;
_Bool _if_conditional151;
_Bool __result97__;
void* right_value127;
struct CVALUE* left_value_93;
struct sNode* right_94;
_Bool _if_conditional152;
_Bool __result98__;
void* right_value128;
struct CVALUE* right_value_95;
struct sType* type_96;
char* fun_name_97;
_Bool calling_fun_98;
_Bool _if_conditional153;
_Bool _if_conditional154;
void* right_value129;
struct CVALUE* come_value_99;
void* right_value130;
char* __dec_obj72;
void* right_value131;
struct sType* __dec_obj73;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_92, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&left_value_93, 0, sizeof(struct CVALUE*));
memset(&right_94, 0, sizeof(struct sNode*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value_95, 0, sizeof(struct CVALUE*));
memset(&type_96, 0, sizeof(struct sType*));
memset(&fun_name_97, 0, sizeof(char*));
memset(&calling_fun_98, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
memset(&come_value_99, 0, sizeof(struct CVALUE*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    left_92=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional151=!node_compile(left_92,info),    __freed_obj__ = 0, 
    _if_conditional151) {
        __result97__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result97__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_94=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional152=!node_compile(right_94,info),    __freed_obj__ = 0, 
    _if_conditional152) {
        __result98__ = (_Bool)0;
        if(left_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result98__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_96=(struct sType*)come_increment_ref_count(left_value_93->type);
    __freed_obj__ = 0;
    fun_name_97="operator_rshift_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional153=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional153) {
        calling_fun_98=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_98=operator_overload_fun(type_96,fun_name_97,left_value_93,right_value_95,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional154=!calling_fun_98,    __freed_obj__ = 0, 
    _if_conditional154) {
        come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 752))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
        if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value129;
        __freed_obj__ = 0;
        __dec_obj72=come_value_99->c_value;
        come_value_99->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s>>=%s",left_value_93->c_value,right_value_95->c_value))));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value130);
        if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value130;
        __freed_obj__ = 0;
        __dec_obj73=come_value_99->type;
        come_value_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(left_value_93->type))));
        if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value131;
        __freed_obj__ = 0;
        come_value_99->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_99));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_99->c_value);
        __freed_obj__ = 0;
        if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result99__ = (_Bool)1;
    if(left_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
    if(left_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_96 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_96, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRShiftEqualNode_sline(struct sRShiftEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result100__ = self->sline;
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
}

char* sRShiftEqualNode_sname(struct sRShiftEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value132;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
    __result101__ = __result_obj__ = ((char*)(right_value132=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
}

struct sXorEqualNode* sXorEqualNode_initialize(struct sXorEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value133;
char* __dec_obj74;
void* right_value134;
struct sNode* __dec_obj75;
void* right_value135;
struct sNode* __dec_obj76;
struct sXorEqualNode* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value133;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj75=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value134;
    __freed_obj__ = 0;
    __dec_obj76=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=sNode_clone(right))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value135;
    __freed_obj__ = 0;
    __result102__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sXorEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result103__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

char* sXorEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
    __result104__ = __result_obj__ = ((char*)(right_value136=__builtin_string("sXorEqualNode")));
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
}

_Bool sXorEqualNode_compile(struct sXorEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_100;
_Bool _if_conditional158;
_Bool __result105__;
void* right_value137;
struct CVALUE* left_value_101;
struct sNode* right_102;
_Bool _if_conditional159;
_Bool __result106__;
void* right_value138;
struct CVALUE* right_value_103;
struct sType* type_104;
char* fun_name_105;
_Bool calling_fun_106;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value139;
struct CVALUE* come_value_107;
void* right_value140;
char* __dec_obj77;
void* right_value141;
struct sType* __dec_obj78;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_100, 0, sizeof(struct sNode*));
memset(&right_value137, 0, sizeof(void*));
memset(&left_value_101, 0, sizeof(struct CVALUE*));
memset(&right_102, 0, sizeof(struct sNode*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value_103, 0, sizeof(struct CVALUE*));
memset(&type_104, 0, sizeof(struct sType*));
memset(&fun_name_105, 0, sizeof(char*));
memset(&calling_fun_106, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
memset(&come_value_107, 0, sizeof(struct CVALUE*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
    left_100=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional158=!node_compile(left_100,info),    __freed_obj__ = 0, 
    _if_conditional158) {
        __result105__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result105__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_102=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional159=!node_compile(right_102,info),    __freed_obj__ = 0, 
    _if_conditional159) {
        __result106__ = (_Bool)0;
        if(left_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value138;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_104=(struct sType*)come_increment_ref_count(left_value_101->type);
    __freed_obj__ = 0;
    fun_name_105="operator_xor_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional160=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional160) {
        calling_fun_106=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_106=operator_overload_fun(type_104,fun_name_105,left_value_101,right_value_103,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional161=!calling_fun_106,    __freed_obj__ = 0, 
    _if_conditional161) {
        come_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 840))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
        if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value139;
        __freed_obj__ = 0;
        __dec_obj77=come_value_107->c_value;
        come_value_107->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s^=%s",left_value_101->c_value,right_value_103->c_value))));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value140);
        if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value140;
        __freed_obj__ = 0;
        __dec_obj78=come_value_107->type;
        come_value_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(left_value_101->type))));
        if(__dec_obj78) { come_call_finalizer(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value141;
        __freed_obj__ = 0;
        come_value_107->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_107));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_107->c_value);
        __freed_obj__ = 0;
        if(come_value_107 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_107, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result107__ = (_Bool)1;
    if(left_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_104 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(left_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_104 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_104, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sXorEqualNode_sline(struct sXorEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result108__ = self->sline;
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
}

char* sXorEqualNode_sname(struct sXorEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value142;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
    __result109__ = __result_obj__ = ((char*)(right_value142=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

struct sOrEqualNode* sOrEqualNode_initialize(struct sOrEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value143;
char* __dec_obj79;
void* right_value144;
struct sNode* __dec_obj80;
void* right_value145;
struct sNode* __dec_obj81;
struct sOrEqualNode* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value143;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj80=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value144;
    __freed_obj__ = 0;
    __dec_obj81=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value145;
    __freed_obj__ = 0;
    __result110__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result111__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result111__;
    __freed_obj__ = 0;
}

char* sOrEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value146;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(right_value146=__builtin_string("sOrEqualNode")));
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
}

_Bool sOrEqualNode_compile(struct sOrEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_108;
_Bool _if_conditional165;
_Bool __result113__;
void* right_value147;
struct CVALUE* left_value_109;
struct sNode* right_110;
_Bool _if_conditional166;
_Bool __result114__;
void* right_value148;
struct CVALUE* right_value_111;
struct sType* type_112;
char* fun_name_113;
_Bool calling_fun_114;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value149;
struct CVALUE* come_value_115;
void* right_value150;
char* __dec_obj82;
void* right_value151;
struct sType* __dec_obj83;
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_108, 0, sizeof(struct sNode*));
memset(&right_value147, 0, sizeof(void*));
memset(&left_value_109, 0, sizeof(struct CVALUE*));
memset(&right_110, 0, sizeof(struct sNode*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value_111, 0, sizeof(struct CVALUE*));
memset(&type_112, 0, sizeof(struct sType*));
memset(&fun_name_113, 0, sizeof(char*));
memset(&calling_fun_114, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
memset(&come_value_115, 0, sizeof(struct CVALUE*));
memset(&right_value150, 0, sizeof(void*));
memset(&right_value151, 0, sizeof(void*));
    left_108=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional165=!node_compile(left_108,info),    __freed_obj__ = 0, 
    _if_conditional165) {
        __result113__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result113__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_110=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional166=!node_compile(right_110,info),    __freed_obj__ = 0, 
    _if_conditional166) {
        __result114__ = (_Bool)0;
        if(left_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result114__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value148;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_112=(struct sType*)come_increment_ref_count(left_value_109->type);
    __freed_obj__ = 0;
    fun_name_113="operator_or_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional167=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional167) {
        calling_fun_114=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_114=operator_overload_fun(type_112,fun_name_113,left_value_109,right_value_111,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional168=!calling_fun_114,    __freed_obj__ = 0, 
    _if_conditional168) {
        come_value_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 928))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value149;
        __freed_obj__ = 0;
        __dec_obj82=come_value_115->c_value;
        come_value_115->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s|=%s",left_value_109->c_value,right_value_111->c_value))));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value150;
        __freed_obj__ = 0;
        __dec_obj83=come_value_115->type;
        come_value_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(left_value_109->type))));
        if(__dec_obj83) { come_call_finalizer(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value151;
        __freed_obj__ = 0;
        come_value_115->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_115));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_115->c_value);
        __freed_obj__ = 0;
        if(come_value_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result115__ = (_Bool)1;
    if(left_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_112 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
    if(left_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_112 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_112, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrEqualNode_sline(struct sOrEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result116__ = self->sline;
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

char* sOrEqualNode_sname(struct sOrEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value152;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
    __result117__ = __result_obj__ = ((char*)(right_value152=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result117__;
    __freed_obj__ = 0;
}

struct sAndEqualNode* sAndEqualNode_initialize(struct sAndEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value153;
char* __dec_obj84;
void* right_value154;
struct sNode* __dec_obj85;
void* right_value155;
struct sNode* __dec_obj86;
struct sAndEqualNode* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(info->sname))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value153;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj85=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value154;
    __freed_obj__ = 0;
    __dec_obj86=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(right))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value155;
    __freed_obj__ = 0;
    __result118__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndEqualNode_terminated(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result119__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result119__;
    __freed_obj__ = 0;
}

char* sAndEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value156;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
    __result120__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sAndEqualNode")));
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
}

_Bool sAndEqualNode_compile(struct sAndEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_116;
_Bool _if_conditional172;
_Bool __result121__;
void* right_value157;
struct CVALUE* left_value_117;
struct sNode* right_118;
_Bool _if_conditional173;
_Bool __result122__;
void* right_value158;
struct CVALUE* right_value_119;
struct sType* type_120;
char* fun_name_121;
_Bool calling_fun_122;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value159;
struct CVALUE* come_value_123;
void* right_value160;
char* __dec_obj87;
void* right_value161;
struct sType* __dec_obj88;
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_116, 0, sizeof(struct sNode*));
memset(&right_value157, 0, sizeof(void*));
memset(&left_value_117, 0, sizeof(struct CVALUE*));
memset(&right_118, 0, sizeof(struct sNode*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value_119, 0, sizeof(struct CVALUE*));
memset(&type_120, 0, sizeof(struct sType*));
memset(&fun_name_121, 0, sizeof(char*));
memset(&calling_fun_122, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
memset(&come_value_123, 0, sizeof(struct CVALUE*));
memset(&right_value160, 0, sizeof(void*));
memset(&right_value161, 0, sizeof(void*));
    left_116=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional172=!node_compile(left_116,info),    __freed_obj__ = 0, 
    _if_conditional172) {
        __result121__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result121__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_118=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional173=!node_compile(right_118,info),    __freed_obj__ = 0, 
    _if_conditional173) {
        __result122__ = (_Bool)0;
        if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result122__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value158;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_120=(struct sType*)come_increment_ref_count(left_value_117->type);
    __freed_obj__ = 0;
    fun_name_121="operator_and_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional174=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional174) {
        calling_fun_122=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_122=operator_overload_fun(type_120,fun_name_121,left_value_117,right_value_119,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional175=!calling_fun_122,    __freed_obj__ = 0, 
    _if_conditional175) {
        come_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1016))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
        if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value159;
        __freed_obj__ = 0;
        __dec_obj87=come_value_123->c_value;
        come_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s&=%s",left_value_117->c_value,right_value_119->c_value))));
        if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value160);
        if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value160;
        __freed_obj__ = 0;
        __dec_obj88=come_value_123->type;
        come_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(left_value_117->type))));
        if(__dec_obj88) { come_call_finalizer(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value161;
        __freed_obj__ = 0;
        come_value_123->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_123));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_123->c_value);
        __freed_obj__ = 0;
        if(come_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result123__ = (_Bool)1;
    if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
    if(left_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_120 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndEqualNode_sline(struct sAndEqualNode* self, struct sInfo* info){
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

char* sAndEqualNode_sname(struct sAndEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value162;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

struct sExpEqualNode* sExpEqualNode_initialize(struct sExpEqualNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value163;
char* __dec_obj89;
void* right_value164;
struct sNode* __dec_obj90;
void* right_value165;
struct sNode* __dec_obj91;
struct sExpEqualNode* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
    self->sline=info->sline;
    __freed_obj__ = 0;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value163;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __freed_obj__ = 0;
    __dec_obj90=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value164;
    __freed_obj__ = 0;
    __dec_obj91=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=sNode_clone(right))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value165;
    __freed_obj__ = 0;
    __result126__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sExpEqualNode_terminated(){
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

char* sExpEqualNode_kind(){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value166;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
    __result128__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sExpEqualNode")));
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

_Bool sExpEqualNode_compile(struct sExpEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_124;
_Bool _if_conditional179;
_Bool __result129__;
void* right_value167;
struct CVALUE* left_value_125;
struct sNode* right_126;
_Bool _if_conditional180;
_Bool __result130__;
void* right_value168;
struct CVALUE* right_value_127;
struct sType* type_128;
char* fun_name_129;
_Bool calling_fun_130;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value169;
struct CVALUE* come_value_131;
void* right_value170;
char* __dec_obj92;
void* right_value171;
struct sType* __dec_obj93;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_124, 0, sizeof(struct sNode*));
memset(&right_value167, 0, sizeof(void*));
memset(&left_value_125, 0, sizeof(struct CVALUE*));
memset(&right_126, 0, sizeof(struct sNode*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value_127, 0, sizeof(struct CVALUE*));
memset(&type_128, 0, sizeof(struct sType*));
memset(&fun_name_129, 0, sizeof(char*));
memset(&calling_fun_130, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
memset(&come_value_131, 0, sizeof(struct CVALUE*));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
    left_124=self->mLeft;
    __freed_obj__ = 0;
    if(_if_conditional179=!node_compile(left_124,info),    __freed_obj__ = 0, 
    _if_conditional179) {
        __result129__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result129__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    right_126=self->mRight;
    __freed_obj__ = 0;
    if(_if_conditional180=!node_compile(right_126,info),    __freed_obj__ = 0, 
    _if_conditional180) {
        __result130__ = (_Bool)0;
        if(left_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result130__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    right_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value168;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_128=(struct sType*)come_increment_ref_count(left_value_125->type);
    __freed_obj__ = 0;
    fun_name_129="operator_exp_equal";
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    if(_if_conditional181=self->mQuote,    __freed_obj__ = 0, 
    _if_conditional181) {
        calling_fun_130=(_Bool)0;
        __freed_obj__ = 0;
    }
    else {
        calling_fun_130=operator_overload_fun(type_128,fun_name_129,left_value_125,right_value_127,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    if(_if_conditional182=!calling_fun_130,    __freed_obj__ = 0, 
    _if_conditional182) {
        come_value_131=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "19eq.c", 1104))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
        if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value169;
        __freed_obj__ = 0;
        __dec_obj92=come_value_131->c_value;
        come_value_131->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s=%s",left_value_125->c_value,right_value_127->c_value))));
        if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value170);
        if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value170;
        __freed_obj__ = 0;
        __dec_obj93=come_value_131->type;
        come_value_131->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_value_125->type))));
        if(__dec_obj93) { come_call_finalizer(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value171;
        __freed_obj__ = 0;
        come_value_131->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_131));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_131->c_value);
        __freed_obj__ = 0;
        if(come_value_131 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_131, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result131__ = (_Bool)1;
    if(left_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
    if(left_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_128, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sExpEqualNode_sline(struct sExpEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result132__ = self->sline;
    __freed_obj__ = 0;
    return __result132__;
    __freed_obj__ = 0;
}

char* sExpEqualNode_sname(struct sExpEqualNode* self, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value172;
char* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value172, 0, sizeof(void*));
    __result133__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
}

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
_Bool quote_132;
_Bool _if_conditional184;
void* right_value173;
void* right_value174;
struct sNode* _inf_value1;
struct sPlusPlusNode* _inf_obj_value1;
void* right_value178;
struct sNode* __result136__;
_Bool _if_conditional192;
_Bool quote_134;
_Bool _if_conditional193;
void* right_value179;
void* right_value180;
struct sNode* _inf_value2;
struct sMinusMinusNode* _inf_obj_value2;
void* right_value184;
struct sNode* __result139__;
_Bool _if_conditional201;
_Bool quote_136;
_Bool _if_conditional202;
void* right_value185;
struct sNode* right_node_137;
void* right_value186;
void* right_value187;
struct sNode* _inf_value3;
struct sPlusEqualNode* _inf_obj_value3;
void* right_value192;
struct sNode* __result142__;
_Bool _if_conditional212;
_Bool quote_139;
_Bool _if_conditional213;
void* right_value193;
struct sNode* right_node_140;
void* right_value194;
void* right_value195;
struct sNode* _inf_value4;
struct sMinusEqualNode* _inf_obj_value4;
void* right_value200;
struct sNode* __result145__;
_Bool _if_conditional223;
_Bool quote_142;
_Bool _if_conditional224;
void* right_value201;
struct sNode* right_node_143;
void* right_value202;
void* right_value203;
struct sNode* _inf_value5;
struct sMultEqualNode* _inf_obj_value5;
void* right_value208;
struct sNode* __result148__;
_Bool _if_conditional234;
_Bool quote_145;
_Bool _if_conditional235;
void* right_value209;
struct sNode* right_node_146;
void* right_value210;
void* right_value211;
struct sNode* _inf_value6;
struct sDivEqualNode* _inf_obj_value6;
void* right_value216;
struct sNode* __result151__;
_Bool _if_conditional245;
_Bool quote_148;
_Bool _if_conditional246;
void* right_value217;
struct sNode* right_node_149;
void* right_value218;
void* right_value219;
struct sNode* _inf_value7;
struct sModEqualNode* _inf_obj_value7;
void* right_value224;
struct sNode* __result154__;
_Bool _if_conditional256;
_Bool quote_151;
_Bool _if_conditional257;
void* right_value225;
struct sNode* right_node_152;
void* right_value226;
void* right_value227;
struct sNode* _inf_value8;
struct sLShifEqualNode* _inf_obj_value8;
void* right_value232;
struct sNode* __result157__;
_Bool _if_conditional267;
_Bool quote_154;
_Bool _if_conditional268;
void* right_value233;
struct sNode* right_node_155;
void* right_value234;
void* right_value235;
struct sNode* _inf_value9;
struct sRShiftEqualNode* _inf_obj_value9;
void* right_value240;
struct sNode* __result160__;
_Bool _if_conditional278;
_Bool quote_157;
_Bool _if_conditional279;
void* right_value241;
struct sNode* right_node_158;
void* right_value242;
void* right_value243;
struct sNode* _inf_value10;
struct sXorEqualNode* _inf_obj_value10;
void* right_value248;
struct sNode* __result163__;
_Bool _if_conditional289;
_Bool quote_160;
_Bool _if_conditional290;
void* right_value249;
struct sNode* right_node_161;
void* right_value250;
void* right_value251;
struct sNode* _inf_value11;
struct sAndEqualNode* _inf_obj_value11;
void* right_value256;
struct sNode* __result166__;
_Bool _if_conditional300;
_Bool quote_163;
_Bool _if_conditional301;
void* right_value257;
struct sNode* right_node_164;
void* right_value258;
void* right_value259;
struct sNode* _inf_value12;
struct sOrEqualNode* _inf_obj_value12;
void* right_value264;
struct sNode* __result169__;
_Bool _if_conditional311;
_Bool quote_166;
_Bool _if_conditional312;
void* right_value265;
struct sNode* right_node_167;
void* right_value266;
void* right_value267;
struct sNode* _inf_value13;
struct sExpEqualNode* _inf_obj_value13;
void* right_value272;
struct sNode* __result172__;
struct sNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&quote_132, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&quote_134, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
memset(&quote_136, 0, sizeof(_Bool));
memset(&right_value185, 0, sizeof(void*));
memset(&right_node_137, 0, sizeof(struct sNode*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value192, 0, sizeof(void*));
memset(&quote_139, 0, sizeof(_Bool));
memset(&right_value193, 0, sizeof(void*));
memset(&right_node_140, 0, sizeof(struct sNode*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
memset(&quote_142, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
memset(&right_node_143, 0, sizeof(struct sNode*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&quote_145, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
memset(&right_node_146, 0, sizeof(struct sNode*));
memset(&right_value210, 0, sizeof(void*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value216, 0, sizeof(void*));
memset(&quote_148, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
memset(&right_node_149, 0, sizeof(struct sNode*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
memset(&right_value224, 0, sizeof(void*));
memset(&quote_151, 0, sizeof(_Bool));
memset(&right_value225, 0, sizeof(void*));
memset(&right_node_152, 0, sizeof(struct sNode*));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value232, 0, sizeof(void*));
memset(&quote_154, 0, sizeof(_Bool));
memset(&right_value233, 0, sizeof(void*));
memset(&right_node_155, 0, sizeof(struct sNode*));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
memset(&quote_157, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
memset(&right_node_158, 0, sizeof(struct sNode*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&quote_160, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
memset(&right_node_161, 0, sizeof(struct sNode*));
memset(&right_value250, 0, sizeof(void*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value256, 0, sizeof(void*));
memset(&quote_163, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
memset(&right_node_164, 0, sizeof(struct sNode*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
memset(&quote_166, 0, sizeof(_Bool));
memset(&right_value265, 0, sizeof(void*));
memset(&right_node_167, 0, sizeof(struct sNode*));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value272, 0, sizeof(void*));
    if(_if_conditional183=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==43)||(*info->p==43&&*(info->p+1)==43),    __freed_obj__ = 0, 
    _if_conditional183) {
        __freed_obj__ = 0;
        if(_if_conditional184=*info->p==92,        __freed_obj__ = 0, 
        _if_conditional184) {
            info->p+=3;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            quote_132=(_Bool)1;
            __freed_obj__ = 0;
        }
        else {
            info->p+=2;
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            quote_132=(_Bool)0;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1143);
        _inf_obj_value1=come_increment_ref_count(((struct sPlusPlusNode*)(right_value174=sPlusPlusNode_initialize((struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value173=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "19eq.c", 1143)))),(struct sNode*)come_increment_ref_count(node),quote_132,info))));
        _inf_value1->_protocol_obj=_inf_obj_value1;
        _inf_value1->finalize=(void*)sPlusPlusNode_finalize;
        _inf_value1->clone=(void*)sPlusPlusNode_clone;
        _inf_value1->compile=(void*)sPlusPlusNode_compile;
        _inf_value1->sline=(void*)sPlusPlusNode_sline;
        _inf_value1->sname=(void*)sPlusPlusNode_sname;
        _inf_value1->terminated=(void*)sPlusPlusNode_terminated;
        _inf_value1->kind=(void*)sPlusPlusNode_kind;
        __result136__ = __result_obj__ = ((struct sNode*)(right_value178=_inf_value1));
        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value173;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value174;
        __freed_obj__ = 0;
        return __result136__;
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional192=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==45)||(*info->p==45&&*(info->p+1)==45),        __freed_obj__ = 0, 
        _if_conditional192) {
            __freed_obj__ = 0;
            if(_if_conditional193=*info->p==92,            __freed_obj__ = 0, 
            _if_conditional193) {
                info->p+=3;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                quote_134=(_Bool)1;
                __freed_obj__ = 0;
            }
            else {
                info->p+=2;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                quote_134=(_Bool)0;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1158);
            _inf_obj_value2=come_increment_ref_count(((struct sMinusMinusNode*)(right_value180=sMinusMinusNode_initialize((struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value179=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "19eq.c", 1158)))),(struct sNode*)come_increment_ref_count(node),quote_134,info))));
            _inf_value2->_protocol_obj=_inf_obj_value2;
            _inf_value2->finalize=(void*)sMinusMinusNode_finalize;
            _inf_value2->clone=(void*)sMinusMinusNode_clone;
            _inf_value2->compile=(void*)sMinusMinusNode_compile;
            _inf_value2->sline=(void*)sMinusMinusNode_sline;
            _inf_value2->sname=(void*)sMinusMinusNode_sname;
            _inf_value2->terminated=(void*)sMinusMinusNode_terminated;
            _inf_value2->kind=(void*)sMinusMinusNode_kind;
            __result139__ = __result_obj__ = ((struct sNode*)(right_value184=_inf_value2));
            if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
            if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value179;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value180);
            if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value180;
            __freed_obj__ = 0;
            return __result139__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional201=(*info->p==92&&*(info->p+1)==43&&*(info->p+2)==61)||(*info->p==43&&*(info->p+1)==61),            __freed_obj__ = 0, 
            _if_conditional201) {
                __freed_obj__ = 0;
                if(_if_conditional202=*info->p==92,                __freed_obj__ = 0, 
                _if_conditional202) {
                    info->p+=3;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    quote_136=(_Bool)1;
                    __freed_obj__ = 0;
                }
                else {
                    info->p+=2;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    quote_136=(_Bool)0;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                right_node_137=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
                if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value185;
                __freed_obj__ = 0;
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1175);
                _inf_obj_value3=come_increment_ref_count(((struct sPlusEqualNode*)(right_value187=sPlusEqualNode_initialize((struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value186=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "19eq.c", 1175)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_137),quote_136,info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sPlusEqualNode_finalize;
                _inf_value3->clone=(void*)sPlusEqualNode_clone;
                _inf_value3->compile=(void*)sPlusEqualNode_compile;
                _inf_value3->sline=(void*)sPlusEqualNode_sline;
                _inf_value3->sname=(void*)sPlusEqualNode_sname;
                _inf_value3->terminated=(void*)sPlusEqualNode_terminated;
                _inf_value3->kind=(void*)sPlusEqualNode_kind;
                __result142__ = __result_obj__ = ((struct sNode*)(right_value192=_inf_value3));
                if(right_node_137 && !__freed_obj__) { right_node_137 = come_decrement_ref_count(right_node_137, ((struct sNode*)right_node_137)->finalize, ((struct sNode*)right_node_137)->_protocol_obj, 0, 0, 0); } 
                if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value186);
                if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value186;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value187;
                __freed_obj__ = 0;
                return __result142__;
                __freed_obj__ = 0;
                if(right_node_137 && !__freed_obj__) { right_node_137 = come_decrement_ref_count(right_node_137, ((struct sNode*)right_node_137)->finalize, ((struct sNode*)right_node_137)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional212=(*info->p==92&&*(info->p+1)==45&&*(info->p+2)==61)||(*info->p==45&&*(info->p+1)==61),                __freed_obj__ = 0, 
                _if_conditional212) {
                    __freed_obj__ = 0;
                    if(_if_conditional213=*info->p==92,                    __freed_obj__ = 0, 
                    _if_conditional213) {
                        info->p+=3;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        quote_139=(_Bool)1;
                        __freed_obj__ = 0;
                    }
                    else {
                        info->p+=2;
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                        quote_139=(_Bool)0;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    right_node_140=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
                    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value193;
                    __freed_obj__ = 0;
                    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1192);
                    _inf_obj_value4=come_increment_ref_count(((struct sMinusEqualNode*)(right_value195=sMinusEqualNode_initialize((struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value194=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "19eq.c", 1192)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_140),quote_139,info))));
                    _inf_value4->_protocol_obj=_inf_obj_value4;
                    _inf_value4->finalize=(void*)sMinusEqualNode_finalize;
                    _inf_value4->clone=(void*)sMinusEqualNode_clone;
                    _inf_value4->compile=(void*)sMinusEqualNode_compile;
                    _inf_value4->sline=(void*)sMinusEqualNode_sline;
                    _inf_value4->sname=(void*)sMinusEqualNode_sname;
                    _inf_value4->terminated=(void*)sMinusEqualNode_terminated;
                    _inf_value4->kind=(void*)sMinusEqualNode_kind;
                    __result145__ = __result_obj__ = ((struct sNode*)(right_value200=_inf_value4));
                    if(right_node_140 && !__freed_obj__) { right_node_140 = come_decrement_ref_count(right_node_140, ((struct sNode*)right_node_140)->finalize, ((struct sNode*)right_node_140)->_protocol_obj, 0, 0, 0); } 
                    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value194);
                    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value194;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value195);
                    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value195;
                    __freed_obj__ = 0;
                    return __result145__;
                    __freed_obj__ = 0;
                    if(right_node_140 && !__freed_obj__) { right_node_140 = come_decrement_ref_count(right_node_140, ((struct sNode*)right_node_140)->finalize, ((struct sNode*)right_node_140)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional223=(*info->p==92&&*(info->p+1)==42&&*(info->p+2)==61)||(*info->p==42&&*(info->p+1)==61),                    __freed_obj__ = 0, 
                    _if_conditional223) {
                        __freed_obj__ = 0;
                        if(_if_conditional224=*info->p==92,                        __freed_obj__ = 0, 
                        _if_conditional224) {
                            info->p+=3;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            quote_142=(_Bool)1;
                            __freed_obj__ = 0;
                        }
                        else {
                            info->p+=2;
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                            quote_142=(_Bool)0;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        right_node_143=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value201=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
                        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, ((struct sNode*)right_value201)->finalize, ((struct sNode*)right_value201)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value201;
                        __freed_obj__ = 0;
                        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1209);
                        _inf_obj_value5=come_increment_ref_count(((struct sMultEqualNode*)(right_value203=sMultEqualNode_initialize((struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value202=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "19eq.c", 1209)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_143),quote_142,info))));
                        _inf_value5->_protocol_obj=_inf_obj_value5;
                        _inf_value5->finalize=(void*)sMultEqualNode_finalize;
                        _inf_value5->clone=(void*)sMultEqualNode_clone;
                        _inf_value5->compile=(void*)sMultEqualNode_compile;
                        _inf_value5->sline=(void*)sMultEqualNode_sline;
                        _inf_value5->sname=(void*)sMultEqualNode_sname;
                        _inf_value5->terminated=(void*)sMultEqualNode_terminated;
                        _inf_value5->kind=(void*)sMultEqualNode_kind;
                        __result148__ = __result_obj__ = ((struct sNode*)(right_value208=_inf_value5));
                        if(right_node_143 && !__freed_obj__) { right_node_143 = come_decrement_ref_count(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0, 0, 0); } 
                        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value202);
                        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value202;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value203);
                        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value203;
                        __freed_obj__ = 0;
                        return __result148__;
                        __freed_obj__ = 0;
                        if(right_node_143 && !__freed_obj__) { right_node_143 = come_decrement_ref_count(right_node_143, ((struct sNode*)right_node_143)->finalize, ((struct sNode*)right_node_143)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional234=(*info->p==92&&*(info->p+1)==47&&*(info->p+2)==61)||(*info->p==47&&*(info->p+1)==61),                        __freed_obj__ = 0, 
                        _if_conditional234) {
                            __freed_obj__ = 0;
                            if(_if_conditional235=*info->p==92,                            __freed_obj__ = 0, 
                            _if_conditional235) {
                                info->p+=3;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                quote_145=(_Bool)1;
                                __freed_obj__ = 0;
                            }
                            else {
                                info->p+=2;
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                                quote_145=(_Bool)0;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            right_node_146=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
                            if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value209;
                            __freed_obj__ = 0;
                            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1226);
                            _inf_obj_value6=come_increment_ref_count(((struct sDivEqualNode*)(right_value211=sDivEqualNode_initialize((struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value210=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "19eq.c", 1226)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_146),quote_145,info))));
                            _inf_value6->_protocol_obj=_inf_obj_value6;
                            _inf_value6->finalize=(void*)sDivEqualNode_finalize;
                            _inf_value6->clone=(void*)sDivEqualNode_clone;
                            _inf_value6->compile=(void*)sDivEqualNode_compile;
                            _inf_value6->sline=(void*)sDivEqualNode_sline;
                            _inf_value6->sname=(void*)sDivEqualNode_sname;
                            _inf_value6->terminated=(void*)sDivEqualNode_terminated;
                            _inf_value6->kind=(void*)sDivEqualNode_kind;
                            __result151__ = __result_obj__ = ((struct sNode*)(right_value216=_inf_value6));
                            if(right_node_146 && !__freed_obj__) { right_node_146 = come_decrement_ref_count(right_node_146, ((struct sNode*)right_node_146)->finalize, ((struct sNode*)right_node_146)->_protocol_obj, 0, 0, 0); } 
                            if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
                            if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value210;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value211);
                            if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value211;
                            __freed_obj__ = 0;
                            return __result151__;
                            __freed_obj__ = 0;
                            if(right_node_146 && !__freed_obj__) { right_node_146 = come_decrement_ref_count(right_node_146, ((struct sNode*)right_node_146)->finalize, ((struct sNode*)right_node_146)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional245=(*info->p==92&&*(info->p+1)==37&&*(info->p+2)==61)||(*info->p==37&&*(info->p+1)==61),                            __freed_obj__ = 0, 
                            _if_conditional245) {
                                __freed_obj__ = 0;
                                if(_if_conditional246=*info->p==92,                                __freed_obj__ = 0, 
                                _if_conditional246) {
                                    info->p+=3;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    quote_148=(_Bool)1;
                                    __freed_obj__ = 0;
                                }
                                else {
                                    info->p+=2;
                                    __freed_obj__ = 0;
                                    skip_spaces_and_lf(info);
                                    __freed_obj__ = 0;
                                    quote_148=(_Bool)0;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                right_node_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
                                if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value217;
                                __freed_obj__ = 0;
                                _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1244);
                                _inf_obj_value7=come_increment_ref_count(((struct sModEqualNode*)(right_value219=sModEqualNode_initialize((struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value218=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "19eq.c", 1244)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_149),quote_148,info))));
                                _inf_value7->_protocol_obj=_inf_obj_value7;
                                _inf_value7->finalize=(void*)sModEqualNode_finalize;
                                _inf_value7->clone=(void*)sModEqualNode_clone;
                                _inf_value7->compile=(void*)sModEqualNode_compile;
                                _inf_value7->sline=(void*)sModEqualNode_sline;
                                _inf_value7->sname=(void*)sModEqualNode_sname;
                                _inf_value7->terminated=(void*)sModEqualNode_terminated;
                                _inf_value7->kind=(void*)sModEqualNode_kind;
                                __result154__ = __result_obj__ = ((struct sNode*)(right_value224=_inf_value7));
                                if(right_node_149 && !__freed_obj__) { right_node_149 = come_decrement_ref_count(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0, 0, 0); } 
                                if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value218);
                                if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value218;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value219);
                                if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value219;
                                __freed_obj__ = 0;
                                return __result154__;
                                __freed_obj__ = 0;
                                if(right_node_149 && !__freed_obj__) { right_node_149 = come_decrement_ref_count(right_node_149, ((struct sNode*)right_node_149)->finalize, ((struct sNode*)right_node_149)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional256=(*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)==61)||(*info->p==60&&*(info->p+1)==60&&*(info->p+2)==61),                                __freed_obj__ = 0, 
                                _if_conditional256) {
                                    __freed_obj__ = 0;
                                    if(_if_conditional257=*info->p==92,                                    __freed_obj__ = 0, 
                                    _if_conditional257) {
                                        info->p+=4;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        quote_151=(_Bool)1;
                                        __freed_obj__ = 0;
                                    }
                                    else {
                                        info->p+=3;
                                        __freed_obj__ = 0;
                                        skip_spaces_and_lf(info);
                                        __freed_obj__ = 0;
                                        quote_151=(_Bool)0;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    right_node_152=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
                                    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value225;
                                    __freed_obj__ = 0;
                                    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1261);
                                    _inf_obj_value8=come_increment_ref_count(((struct sLShifEqualNode*)(right_value227=sLShifEqualNode_initialize((struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value226=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "19eq.c", 1261)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_152),quote_151,info))));
                                    _inf_value8->_protocol_obj=_inf_obj_value8;
                                    _inf_value8->finalize=(void*)sLShifEqualNode_finalize;
                                    _inf_value8->clone=(void*)sLShifEqualNode_clone;
                                    _inf_value8->compile=(void*)sLShifEqualNode_compile;
                                    _inf_value8->sline=(void*)sLShifEqualNode_sline;
                                    _inf_value8->sname=(void*)sLShifEqualNode_sname;
                                    _inf_value8->terminated=(void*)sLShifEqualNode_terminated;
                                    _inf_value8->kind=(void*)sLShifEqualNode_kind;
                                    __result157__ = __result_obj__ = ((struct sNode*)(right_value232=_inf_value8));
                                    if(right_node_152 && !__freed_obj__) { right_node_152 = come_decrement_ref_count(right_node_152, ((struct sNode*)right_node_152)->finalize, ((struct sNode*)right_node_152)->_protocol_obj, 0, 0, 0); } 
                                    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value226);
                                    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value226;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value227);
                                    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value227;
                                    __freed_obj__ = 0;
                                    return __result157__;
                                    __freed_obj__ = 0;
                                    if(right_node_152 && !__freed_obj__) { right_node_152 = come_decrement_ref_count(right_node_152, ((struct sNode*)right_node_152)->finalize, ((struct sNode*)right_node_152)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional267=(*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)==61)||(*info->p==62&&*(info->p+1)==62&&*(info->p+2)==61),                                    __freed_obj__ = 0, 
                                    _if_conditional267) {
                                        __freed_obj__ = 0;
                                        if(_if_conditional268=*info->p==92,                                        __freed_obj__ = 0, 
                                        _if_conditional268) {
                                            info->p+=4;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            quote_154=(_Bool)1;
                                            __freed_obj__ = 0;
                                        }
                                        else {
                                            info->p+=3;
                                            __freed_obj__ = 0;
                                            skip_spaces_and_lf(info);
                                            __freed_obj__ = 0;
                                            quote_154=(_Bool)0;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        right_node_155=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
                                        if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value233;
                                        __freed_obj__ = 0;
                                        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1278);
                                        _inf_obj_value9=come_increment_ref_count(((struct sRShiftEqualNode*)(right_value235=sRShiftEqualNode_initialize((struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value234=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "19eq.c", 1278)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_155),quote_154,info))));
                                        _inf_value9->_protocol_obj=_inf_obj_value9;
                                        _inf_value9->finalize=(void*)sRShiftEqualNode_finalize;
                                        _inf_value9->clone=(void*)sRShiftEqualNode_clone;
                                        _inf_value9->compile=(void*)sRShiftEqualNode_compile;
                                        _inf_value9->sline=(void*)sRShiftEqualNode_sline;
                                        _inf_value9->sname=(void*)sRShiftEqualNode_sname;
                                        _inf_value9->terminated=(void*)sRShiftEqualNode_terminated;
                                        _inf_value9->kind=(void*)sRShiftEqualNode_kind;
                                        __result160__ = __result_obj__ = ((struct sNode*)(right_value240=_inf_value9));
                                        if(right_node_155 && !__freed_obj__) { right_node_155 = come_decrement_ref_count(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0); } 
                                        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
                                        if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value234;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value235);
                                        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value235;
                                        __freed_obj__ = 0;
                                        return __result160__;
                                        __freed_obj__ = 0;
                                        if(right_node_155 && !__freed_obj__) { right_node_155 = come_decrement_ref_count(right_node_155, ((struct sNode*)right_node_155)->finalize, ((struct sNode*)right_node_155)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional278=(*info->p==92&&*(info->p+1)==94&&*(info->p+2)==61)||(*info->p==94&&*(info->p+1)==61),                                        __freed_obj__ = 0, 
                                        _if_conditional278) {
                                            __freed_obj__ = 0;
                                            if(_if_conditional279=*info->p==92,                                            __freed_obj__ = 0, 
                                            _if_conditional279) {
                                                info->p+=3;
                                                __freed_obj__ = 0;
                                                skip_spaces_and_lf(info);
                                                __freed_obj__ = 0;
                                                quote_157=(_Bool)1;
                                                __freed_obj__ = 0;
                                            }
                                            else {
                                                info->p+=2;
                                                __freed_obj__ = 0;
                                                skip_spaces_and_lf(info);
                                                __freed_obj__ = 0;
                                                quote_157=(_Bool)0;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            right_node_158=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value241=expression_v13(info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
                                            if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { right_value241 = come_decrement_ref_count(right_value241, ((struct sNode*)right_value241)->finalize, ((struct sNode*)right_value241)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value241;
                                            __freed_obj__ = 0;
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1295);
                                            _inf_obj_value10=come_increment_ref_count(((struct sXorEqualNode*)(right_value243=sXorEqualNode_initialize((struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value242=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "19eq.c", 1295)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_158),quote_157,info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sXorEqualNode_finalize;
                                            _inf_value10->clone=(void*)sXorEqualNode_clone;
                                            _inf_value10->compile=(void*)sXorEqualNode_compile;
                                            _inf_value10->sline=(void*)sXorEqualNode_sline;
                                            _inf_value10->sname=(void*)sXorEqualNode_sname;
                                            _inf_value10->terminated=(void*)sXorEqualNode_terminated;
                                            _inf_value10->kind=(void*)sXorEqualNode_kind;
                                            __result163__ = __result_obj__ = ((struct sNode*)(right_value248=_inf_value10));
                                            if(right_node_158 && !__freed_obj__) { right_node_158 = come_decrement_ref_count(right_node_158, ((struct sNode*)right_node_158)->finalize, ((struct sNode*)right_node_158)->_protocol_obj, 0, 0, 0); } 
                                            if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value242);
                                            if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value242;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value243);
                                            if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value243;
                                            __freed_obj__ = 0;
                                            return __result163__;
                                            __freed_obj__ = 0;
                                            if(right_node_158 && !__freed_obj__) { right_node_158 = come_decrement_ref_count(right_node_158, ((struct sNode*)right_node_158)->finalize, ((struct sNode*)right_node_158)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        else {
                                            if(_if_conditional289=(*info->p==92&&*(info->p+1)==38&&*(info->p+2)==61)||(*info->p==38&&*(info->p+1)==61),                                            __freed_obj__ = 0, 
                                            _if_conditional289) {
                                                __freed_obj__ = 0;
                                                if(_if_conditional290=*info->p==92,                                                __freed_obj__ = 0, 
                                                _if_conditional290) {
                                                    info->p+=3;
                                                    __freed_obj__ = 0;
                                                    skip_spaces_and_lf(info);
                                                    __freed_obj__ = 0;
                                                    quote_160=(_Bool)1;
                                                    __freed_obj__ = 0;
                                                }
                                                else {
                                                    info->p+=2;
                                                    __freed_obj__ = 0;
                                                    skip_spaces_and_lf(info);
                                                    __freed_obj__ = 0;
                                                    quote_160=(_Bool)0;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                right_node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
                                                if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value249;
                                                __freed_obj__ = 0;
                                                _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1312);
                                                _inf_obj_value11=come_increment_ref_count(((struct sAndEqualNode*)(right_value251=sAndEqualNode_initialize((struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value250=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "19eq.c", 1312)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_161),quote_160,info))));
                                                _inf_value11->_protocol_obj=_inf_obj_value11;
                                                _inf_value11->finalize=(void*)sAndEqualNode_finalize;
                                                _inf_value11->clone=(void*)sAndEqualNode_clone;
                                                _inf_value11->compile=(void*)sAndEqualNode_compile;
                                                _inf_value11->sline=(void*)sAndEqualNode_sline;
                                                _inf_value11->sname=(void*)sAndEqualNode_sname;
                                                _inf_value11->terminated=(void*)sAndEqualNode_terminated;
                                                _inf_value11->kind=(void*)sAndEqualNode_kind;
                                                __result166__ = __result_obj__ = ((struct sNode*)(right_value256=_inf_value11));
                                                if(right_node_161 && !__freed_obj__) { right_node_161 = come_decrement_ref_count(right_node_161, ((struct sNode*)right_node_161)->finalize, ((struct sNode*)right_node_161)->_protocol_obj, 0, 0, 0); } 
                                                if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value250);
                                                if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value250;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value251);
                                                if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[2] = right_value251;
                                                __freed_obj__ = 0;
                                                return __result166__;
                                                __freed_obj__ = 0;
                                                if(right_node_161 && !__freed_obj__) { right_node_161 = come_decrement_ref_count(right_node_161, ((struct sNode*)right_node_161)->finalize, ((struct sNode*)right_node_161)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional300=(*info->p==92&&*(info->p+1)==124&&*(info->p+2)==61)||(*info->p==124&&*(info->p+1)==61),                                                __freed_obj__ = 0, 
                                                _if_conditional300) {
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional301=*info->p==92,                                                    __freed_obj__ = 0, 
                                                    _if_conditional301) {
                                                        info->p+=3;
                                                        __freed_obj__ = 0;
                                                        skip_spaces_and_lf(info);
                                                        __freed_obj__ = 0;
                                                        quote_163=(_Bool)1;
                                                        __freed_obj__ = 0;
                                                    }
                                                    else {
                                                        info->p+=2;
                                                        __freed_obj__ = 0;
                                                        skip_spaces_and_lf(info);
                                                        __freed_obj__ = 0;
                                                        quote_163=(_Bool)0;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    right_node_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=expression_v13(info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
                                                    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value257;
                                                    __freed_obj__ = 0;
                                                    _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1329);
                                                    _inf_obj_value12=come_increment_ref_count(((struct sOrEqualNode*)(right_value259=sOrEqualNode_initialize((struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value258=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "19eq.c", 1329)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_164),quote_163,info))));
                                                    _inf_value12->_protocol_obj=_inf_obj_value12;
                                                    _inf_value12->finalize=(void*)sOrEqualNode_finalize;
                                                    _inf_value12->clone=(void*)sOrEqualNode_clone;
                                                    _inf_value12->compile=(void*)sOrEqualNode_compile;
                                                    _inf_value12->sline=(void*)sOrEqualNode_sline;
                                                    _inf_value12->sname=(void*)sOrEqualNode_sname;
                                                    _inf_value12->terminated=(void*)sOrEqualNode_terminated;
                                                    _inf_value12->kind=(void*)sOrEqualNode_kind;
                                                    __result169__ = __result_obj__ = ((struct sNode*)(right_value264=_inf_value12));
                                                    if(right_node_164 && !__freed_obj__) { right_node_164 = come_decrement_ref_count(right_node_164, ((struct sNode*)right_node_164)->finalize, ((struct sNode*)right_node_164)->_protocol_obj, 0, 0, 0); } 
                                                    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value258);
                                                    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value258;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value259);
                                                    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value259;
                                                    __freed_obj__ = 0;
                                                    return __result169__;
                                                    __freed_obj__ = 0;
                                                    if(right_node_164 && !__freed_obj__) { right_node_164 = come_decrement_ref_count(right_node_164, ((struct sNode*)right_node_164)->finalize, ((struct sNode*)right_node_164)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                else {
                                                    if(_if_conditional311=(*info->p==92&&*(info->p+1)==61&&*(info->p+2)!=61)||(*info->p==61&&*(info->p+1)!=61),                                                    __freed_obj__ = 0, 
                                                    _if_conditional311) {
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional312=*info->p==92,                                                        __freed_obj__ = 0, 
                                                        _if_conditional312) {
                                                            info->p+=2;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                            quote_166=(_Bool)1;
                                                            __freed_obj__ = 0;
                                                        }
                                                        else {
                                                            info->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                            quote_166=(_Bool)0;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        right_node_167=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=expression_v13(info))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
                                                        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value265;
                                                        __freed_obj__ = 0;
                                                        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "19eq.c", 1346);
                                                        _inf_obj_value13=come_increment_ref_count(((struct sExpEqualNode*)(right_value267=sExpEqualNode_initialize((struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value266=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "19eq.c", 1346)))),(struct sNode*)come_increment_ref_count(node),(struct sNode*)come_increment_ref_count(right_node_167),quote_166,info))));
                                                        _inf_value13->_protocol_obj=_inf_obj_value13;
                                                        _inf_value13->finalize=(void*)sExpEqualNode_finalize;
                                                        _inf_value13->clone=(void*)sExpEqualNode_clone;
                                                        _inf_value13->compile=(void*)sExpEqualNode_compile;
                                                        _inf_value13->sline=(void*)sExpEqualNode_sline;
                                                        _inf_value13->sname=(void*)sExpEqualNode_sname;
                                                        _inf_value13->terminated=(void*)sExpEqualNode_terminated;
                                                        _inf_value13->kind=(void*)sExpEqualNode_kind;
                                                        __result172__ = __result_obj__ = ((struct sNode*)(right_value272=_inf_value13));
                                                        if(right_node_167 && !__freed_obj__) { right_node_167 = come_decrement_ref_count(right_node_167, ((struct sNode*)right_node_167)->finalize, ((struct sNode*)right_node_167)->_protocol_obj, 0, 0, 0); } 
                                                        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value266);
                                                        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[1] = right_value266;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value267);
                                                        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[2] = right_value267;
                                                        __freed_obj__ = 0;
                                                        return __result172__;
                                                        __freed_obj__ = 0;
                                                        if(right_node_167 && !__freed_obj__) { right_node_167 = come_decrement_ref_count(right_node_167, ((struct sNode*)right_node_167)->finalize, ((struct sNode*)right_node_167)->_protocol_obj, 0, 0, 0); } 
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
    __result173__ = __result_obj__ = (struct sNode*)((void*)0);
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result173__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sPlusPlusNode_finalize(struct sPlusPlusNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional185;
_Bool _if_conditional186;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional185=self!=((void*)0)&&self->mLeft!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional185) {
                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional186=self!=((void*)0)&&self->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional186) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sPlusPlusNode* sPlusPlusNode_clone(struct sPlusPlusNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional187;
struct sPlusPlusNode* __result134__;
void* right_value175;
struct sPlusPlusNode* result_133;
_Bool _if_conditional188;
void* right_value176;
struct sNode* __dec_obj94;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value177;
char* __dec_obj95;
_Bool _if_conditional191;
struct sPlusPlusNode* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
memset(&result_133, 0, sizeof(struct sPlusPlusNode*));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
            if(_if_conditional187=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional187) {
                __result134__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result134__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_133=(struct sPlusPlusNode*)come_increment_ref_count(((struct sPlusPlusNode*)(right_value175=(struct sPlusPlusNode*)come_calloc(1, sizeof(struct sPlusPlusNode)*(1), "sPlusPlusNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
            if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value175;
            __freed_obj__ = 0;
            if(_if_conditional188=self!=((void*)0)&&self->mLeft!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional188) {
                __dec_obj94=result_133->mLeft;
                result_133->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value176=sNode_clone(self->mLeft))));
                if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
                if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, ((struct sNode*)right_value176)->finalize, ((struct sNode*)right_value176)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value176;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional189=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional189) {
                result_133->sline=self->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional190=self!=((void*)0)&&self->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional190) {
                __dec_obj95=result_133->sname;
                result_133->sname=(char*)come_increment_ref_count(((char*)(right_value177=string_clone(self->sname))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
                if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value177;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional191=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional191) {
                result_133->mQuote=self->mQuote;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result135__ = __result_obj__ = result_133;
            if(result_133 && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,result_133, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result135__;
            __freed_obj__ = 0;
            if(result_133 && !__freed_obj__) { come_call_finalizer(sPlusPlusNode_finalize,result_133, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMinusMinusNode_finalize(struct sMinusMinusNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional194;
_Bool _if_conditional195;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional194=self!=((void*)0)&&self->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional194) {
                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional195=self!=((void*)0)&&self->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional195) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sMinusMinusNode* sMinusMinusNode_clone(struct sMinusMinusNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional196;
struct sMinusMinusNode* __result137__;
void* right_value181;
struct sMinusMinusNode* result_135;
_Bool _if_conditional197;
void* right_value182;
struct sNode* __dec_obj96;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value183;
char* __dec_obj97;
struct sMinusMinusNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value181, 0, sizeof(void*));
memset(&result_135, 0, sizeof(struct sMinusMinusNode*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value183, 0, sizeof(void*));
                if(_if_conditional196=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional196) {
                    __result137__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result137__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_135=(struct sMinusMinusNode*)come_increment_ref_count(((struct sMinusMinusNode*)(right_value181=(struct sMinusMinusNode*)come_calloc(1, sizeof(struct sMinusMinusNode)*(1), "sMinusMinusNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
                if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value181;
                __freed_obj__ = 0;
                if(_if_conditional197=self!=((void*)0)&&self->mLeft!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional197) {
                    __dec_obj96=result_135->mLeft;
                    result_135->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value182=sNode_clone(self->mLeft))));
                    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
                    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, ((struct sNode*)right_value182)->finalize, ((struct sNode*)right_value182)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value182;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional198=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional198) {
                    result_135->mQuote=self->mQuote;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional199=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional199) {
                    result_135->sline=self->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional200=self!=((void*)0)&&self->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional200) {
                    __dec_obj97=result_135->sname;
                    result_135->sname=(char*)come_increment_ref_count(((char*)(right_value183=string_clone(self->sname))));
                    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
                    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value183;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result138__ = __result_obj__ = result_135;
                if(result_135 && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,result_135, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result138__;
                __freed_obj__ = 0;
                if(result_135 && !__freed_obj__) { come_call_finalizer(sMinusMinusNode_finalize,result_135, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sPlusEqualNode_finalize(struct sPlusEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional203;
_Bool _if_conditional204;
_Bool _if_conditional205;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional203=self!=((void*)0)&&self->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional203) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional204=self!=((void*)0)&&self->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional204) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional205=self!=((void*)0)&&self->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional205) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sPlusEqualNode* sPlusEqualNode_clone(struct sPlusEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional206;
struct sPlusEqualNode* __result140__;
void* right_value188;
struct sPlusEqualNode* result_138;
_Bool _if_conditional207;
void* right_value189;
struct sNode* __dec_obj98;
_Bool _if_conditional208;
void* right_value190;
struct sNode* __dec_obj99;
_Bool _if_conditional209;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value191;
char* __dec_obj100;
struct sPlusEqualNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value188, 0, sizeof(void*));
memset(&result_138, 0, sizeof(struct sPlusEqualNode*));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
memset(&right_value191, 0, sizeof(void*));
                    if(_if_conditional206=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional206) {
                        __result140__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result140__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_138=(struct sPlusEqualNode*)come_increment_ref_count(((struct sPlusEqualNode*)(right_value188=(struct sPlusEqualNode*)come_calloc(1, sizeof(struct sPlusEqualNode)*(1), "sPlusEqualNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value188;
                    __freed_obj__ = 0;
                    if(_if_conditional207=self!=((void*)0)&&self->mLeft!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional207) {
                        __dec_obj98=result_138->mLeft;
                        result_138->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(self->mLeft))));
                        if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
                        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value189;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional208=self!=((void*)0)&&self->mRight!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional208) {
                        __dec_obj99=result_138->mRight;
                        result_138->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value190=sNode_clone(self->mRight))));
                        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
                        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, ((struct sNode*)right_value190)->finalize, ((struct sNode*)right_value190)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value190;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional209=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional209) {
                        result_138->mQuote=self->mQuote;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional210=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional210) {
                        result_138->sline=self->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional211=self!=((void*)0)&&self->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional211) {
                        __dec_obj100=result_138->sname;
                        result_138->sname=(char*)come_increment_ref_count(((char*)(right_value191=string_clone(self->sname))));
                        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
                        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { right_value191 = come_decrement_ref_count(right_value191, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value191;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result141__ = __result_obj__ = result_138;
                    if(result_138 && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,result_138, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result141__;
                    __freed_obj__ = 0;
                    if(result_138 && !__freed_obj__) { come_call_finalizer(sPlusEqualNode_finalize,result_138, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMinusEqualNode_finalize(struct sMinusEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional214=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional214) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional215=self!=((void*)0)&&self->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional215) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional216) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sMinusEqualNode* sMinusEqualNode_clone(struct sMinusEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional217;
struct sMinusEqualNode* __result143__;
void* right_value196;
struct sMinusEqualNode* result_141;
_Bool _if_conditional218;
void* right_value197;
struct sNode* __dec_obj101;
_Bool _if_conditional219;
void* right_value198;
struct sNode* __dec_obj102;
_Bool _if_conditional220;
_Bool _if_conditional221;
_Bool _if_conditional222;
void* right_value199;
char* __dec_obj103;
struct sMinusEqualNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&result_141, 0, sizeof(struct sMinusEqualNode*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
                        if(_if_conditional217=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional217) {
                            __result143__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result143__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_141=(struct sMinusEqualNode*)come_increment_ref_count(((struct sMinusEqualNode*)(right_value196=(struct sMinusEqualNode*)come_calloc(1, sizeof(struct sMinusEqualNode)*(1), "sMinusEqualNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
                        if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value196;
                        __freed_obj__ = 0;
                        if(_if_conditional218=self!=((void*)0)&&self->mLeft!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional218) {
                            __dec_obj101=result_141->mLeft;
                            result_141->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(self->mLeft))));
                            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
                            if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value197;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional219=self!=((void*)0)&&self->mRight!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional219) {
                            __dec_obj102=result_141->mRight;
                            result_141->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(self->mRight))));
                            if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
                            if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value198;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional220=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional220) {
                            result_141->mQuote=self->mQuote;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional221=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional221) {
                            result_141->sline=self->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional222=self!=((void*)0)&&self->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional222) {
                            __dec_obj103=result_141->sname;
                            result_141->sname=(char*)come_increment_ref_count(((char*)(right_value199=string_clone(self->sname))));
                            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
                            if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value199;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result144__ = __result_obj__ = result_141;
                        if(result_141 && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result144__;
                        __freed_obj__ = 0;
                        if(result_141 && !__freed_obj__) { come_call_finalizer(sMinusEqualNode_finalize,result_141, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMultEqualNode_finalize(struct sMultEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional225=self!=((void*)0)&&self->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional225) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional226=self!=((void*)0)&&self->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional226) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional227) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sMultEqualNode* sMultEqualNode_clone(struct sMultEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
struct sMultEqualNode* __result146__;
void* right_value204;
struct sMultEqualNode* result_144;
_Bool _if_conditional229;
void* right_value205;
struct sNode* __dec_obj104;
_Bool _if_conditional230;
void* right_value206;
struct sNode* __dec_obj105;
_Bool _if_conditional231;
_Bool _if_conditional232;
_Bool _if_conditional233;
void* right_value207;
char* __dec_obj106;
struct sMultEqualNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sMultEqualNode*));
memset(&right_value205, 0, sizeof(void*));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
                            if(_if_conditional228=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional228) {
                                __result146__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result146__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_144=(struct sMultEqualNode*)come_increment_ref_count(((struct sMultEqualNode*)(right_value204=(struct sMultEqualNode*)come_calloc(1, sizeof(struct sMultEqualNode)*(1), "sMultEqualNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
                            if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value204;
                            __freed_obj__ = 0;
                            if(_if_conditional229=self!=((void*)0)&&self->mLeft!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional229) {
                                __dec_obj104=result_144->mLeft;
                                result_144->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(self->mLeft))));
                                if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
                                if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value205;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional230=self!=((void*)0)&&self->mRight!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional230) {
                                __dec_obj105=result_144->mRight;
                                result_144->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=sNode_clone(self->mRight))));
                                if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
                                if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value206;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional231=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional231) {
                                result_144->mQuote=self->mQuote;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional232=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional232) {
                                result_144->sline=self->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional233) {
                                __dec_obj106=result_144->sname;
                                result_144->sname=(char*)come_increment_ref_count(((char*)(right_value207=string_clone(self->sname))));
                                if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
                                if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value207;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result147__ = __result_obj__ = result_144;
                            if(result_144 && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result147__;
                            __freed_obj__ = 0;
                            if(result_144 && !__freed_obj__) { come_call_finalizer(sMultEqualNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDivEqualNode_finalize(struct sDivEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional236;
_Bool _if_conditional237;
_Bool _if_conditional238;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional236=self!=((void*)0)&&self->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional236) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional237=self!=((void*)0)&&self->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional237) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional238=self!=((void*)0)&&self->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional238) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sDivEqualNode* sDivEqualNode_clone(struct sDivEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional239;
struct sDivEqualNode* __result149__;
void* right_value212;
struct sDivEqualNode* result_147;
_Bool _if_conditional240;
void* right_value213;
struct sNode* __dec_obj107;
_Bool _if_conditional241;
void* right_value214;
struct sNode* __dec_obj108;
_Bool _if_conditional242;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value215;
char* __dec_obj109;
struct sDivEqualNode* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value212, 0, sizeof(void*));
memset(&result_147, 0, sizeof(struct sDivEqualNode*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
                                if(_if_conditional239=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional239) {
                                    __result149__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result149__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_147=(struct sDivEqualNode*)come_increment_ref_count(((struct sDivEqualNode*)(right_value212=(struct sDivEqualNode*)come_calloc(1, sizeof(struct sDivEqualNode)*(1), "sDivEqualNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
                                if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value212;
                                __freed_obj__ = 0;
                                if(_if_conditional240=self!=((void*)0)&&self->mLeft!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional240) {
                                    __dec_obj107=result_147->mLeft;
                                    result_147->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=sNode_clone(self->mLeft))));
                                    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
                                    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value213;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional241=self!=((void*)0)&&self->mRight!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional241) {
                                    __dec_obj108=result_147->mRight;
                                    result_147->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(self->mRight))));
                                    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
                                    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value214;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional242=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional242) {
                                    result_147->mQuote=self->mQuote;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional243=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional243) {
                                    result_147->sline=self->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional244) {
                                    __dec_obj109=result_147->sname;
                                    result_147->sname=(char*)come_increment_ref_count(((char*)(right_value215=string_clone(self->sname))));
                                    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
                                    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value215;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result150__ = __result_obj__ = result_147;
                                if(result_147 && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result150__;
                                __freed_obj__ = 0;
                                if(result_147 && !__freed_obj__) { come_call_finalizer(sDivEqualNode_finalize,result_147, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sModEqualNode_finalize(struct sModEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional247=self!=((void*)0)&&self->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional247) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional248=self!=((void*)0)&&self->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional248) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional249) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sModEqualNode* sModEqualNode_clone(struct sModEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional250;
struct sModEqualNode* __result152__;
void* right_value220;
struct sModEqualNode* result_150;
_Bool _if_conditional251;
void* right_value221;
struct sNode* __dec_obj110;
_Bool _if_conditional252;
void* right_value222;
struct sNode* __dec_obj111;
_Bool _if_conditional253;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value223;
char* __dec_obj112;
struct sModEqualNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct sModEqualNode*));
memset(&right_value221, 0, sizeof(void*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
                                    if(_if_conditional250=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional250) {
                                        __result152__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result152__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_150=(struct sModEqualNode*)come_increment_ref_count(((struct sModEqualNode*)(right_value220=(struct sModEqualNode*)come_calloc(1, sizeof(struct sModEqualNode)*(1), "sModEqualNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                                    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value220;
                                    __freed_obj__ = 0;
                                    if(_if_conditional251=self!=((void*)0)&&self->mLeft!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional251) {
                                        __dec_obj110=result_150->mLeft;
                                        result_150->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value221=sNode_clone(self->mLeft))));
                                        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
                                        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { right_value221 = come_decrement_ref_count(right_value221, ((struct sNode*)right_value221)->finalize, ((struct sNode*)right_value221)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value221;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional252=self!=((void*)0)&&self->mRight!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional252) {
                                        __dec_obj111=result_150->mRight;
                                        result_150->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value222=sNode_clone(self->mRight))));
                                        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
                                        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, ((struct sNode*)right_value222)->finalize, ((struct sNode*)right_value222)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value222;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional253=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional253) {
                                        result_150->mQuote=self->mQuote;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional254=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional254) {
                                        result_150->sline=self->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional255=self!=((void*)0)&&self->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional255) {
                                        __dec_obj112=result_150->sname;
                                        result_150->sname=(char*)come_increment_ref_count(((char*)(right_value223=string_clone(self->sname))));
                                        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
                                        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value223;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result153__ = __result_obj__ = result_150;
                                    if(result_150 && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result153__;
                                    __freed_obj__ = 0;
                                    if(result_150 && !__freed_obj__) { come_call_finalizer(sModEqualNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLShifEqualNode_finalize(struct sLShifEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional258=self!=((void*)0)&&self->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional258) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional259=self!=((void*)0)&&self->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional259) {
                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional260) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static struct sLShifEqualNode* sLShifEqualNode_clone(struct sLShifEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional261;
struct sLShifEqualNode* __result155__;
void* right_value228;
struct sLShifEqualNode* result_153;
_Bool _if_conditional262;
void* right_value229;
struct sNode* __dec_obj113;
_Bool _if_conditional263;
void* right_value230;
struct sNode* __dec_obj114;
_Bool _if_conditional264;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value231;
char* __dec_obj115;
struct sLShifEqualNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value228, 0, sizeof(void*));
memset(&result_153, 0, sizeof(struct sLShifEqualNode*));
memset(&right_value229, 0, sizeof(void*));
memset(&right_value230, 0, sizeof(void*));
memset(&right_value231, 0, sizeof(void*));
                                        if(_if_conditional261=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional261) {
                                            __result155__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result155__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_153=(struct sLShifEqualNode*)come_increment_ref_count(((struct sLShifEqualNode*)(right_value228=(struct sLShifEqualNode*)come_calloc(1, sizeof(struct sLShifEqualNode)*(1), "sLShifEqualNode_clone", 3))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
                                        if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value228;
                                        __freed_obj__ = 0;
                                        if(_if_conditional262=self!=((void*)0)&&self->mLeft!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional262) {
                                            __dec_obj113=result_153->mLeft;
                                            result_153->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=sNode_clone(self->mLeft))));
                                            if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
                                            if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value229;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional263=self!=((void*)0)&&self->mRight!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional263) {
                                            __dec_obj114=result_153->mRight;
                                            result_153->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=sNode_clone(self->mRight))));
                                            if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                                            if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value230;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional264=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional264) {
                                            result_153->mQuote=self->mQuote;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional265=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional265) {
                                            result_153->sline=self->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional266=self!=((void*)0)&&self->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional266) {
                                            __dec_obj115=result_153->sname;
                                            result_153->sname=(char*)come_increment_ref_count(((char*)(right_value231=string_clone(self->sname))));
                                            if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
                                            if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value231;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result156__ = __result_obj__ = result_153;
                                        if(result_153 && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result156__;
                                        __freed_obj__ = 0;
                                        if(result_153 && !__freed_obj__) { come_call_finalizer(sLShifEqualNode_finalize,result_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRShiftEqualNode_finalize(struct sRShiftEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional269;
_Bool _if_conditional270;
_Bool _if_conditional271;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional269=self!=((void*)0)&&self->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional269) {
                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional270=self!=((void*)0)&&self->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional270) {
                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional271=self!=((void*)0)&&self->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional271) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sRShiftEqualNode* sRShiftEqualNode_clone(struct sRShiftEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional272;
struct sRShiftEqualNode* __result158__;
void* right_value236;
struct sRShiftEqualNode* result_156;
_Bool _if_conditional273;
void* right_value237;
struct sNode* __dec_obj116;
_Bool _if_conditional274;
void* right_value238;
struct sNode* __dec_obj117;
_Bool _if_conditional275;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value239;
char* __dec_obj118;
struct sRShiftEqualNode* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value236, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct sRShiftEqualNode*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
                                            if(_if_conditional272=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional272) {
                                                __result158__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result158__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_156=(struct sRShiftEqualNode*)come_increment_ref_count(((struct sRShiftEqualNode*)(right_value236=(struct sRShiftEqualNode*)come_calloc(1, sizeof(struct sRShiftEqualNode)*(1), "sRShiftEqualNode_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
                                            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value236;
                                            __freed_obj__ = 0;
                                            if(_if_conditional273=self!=((void*)0)&&self->mLeft!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional273) {
                                                __dec_obj116=result_156->mLeft;
                                                result_156->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(self->mLeft))));
                                                if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
                                                if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value237;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional274=self!=((void*)0)&&self->mRight!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional274) {
                                                __dec_obj117=result_156->mRight;
                                                result_156->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(self->mRight))));
                                                if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
                                                if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value238;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional275=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional275) {
                                                result_156->mQuote=self->mQuote;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional276=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional276) {
                                                result_156->sline=self->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional277) {
                                                __dec_obj118=result_156->sname;
                                                result_156->sname=(char*)come_increment_ref_count(((char*)(right_value239=string_clone(self->sname))));
                                                if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
                                                if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value239;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result159__ = __result_obj__ = result_156;
                                            if(result_156 && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result159__;
                                            __freed_obj__ = 0;
                                            if(result_156 && !__freed_obj__) { come_call_finalizer(sRShiftEqualNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sXorEqualNode_finalize(struct sXorEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional280;
_Bool _if_conditional281;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional280=self!=((void*)0)&&self->mLeft!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional280) {
                                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional281=self!=((void*)0)&&self->mRight!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional281) {
                                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional282) {
                                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sXorEqualNode* sXorEqualNode_clone(struct sXorEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional283;
struct sXorEqualNode* __result161__;
void* right_value244;
struct sXorEqualNode* result_159;
_Bool _if_conditional284;
void* right_value245;
struct sNode* __dec_obj119;
_Bool _if_conditional285;
void* right_value246;
struct sNode* __dec_obj120;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value247;
char* __dec_obj121;
struct sXorEqualNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value244, 0, sizeof(void*));
memset(&result_159, 0, sizeof(struct sXorEqualNode*));
memset(&right_value245, 0, sizeof(void*));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
                                                if(_if_conditional283=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional283) {
                                                    __result161__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result161__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_159=(struct sXorEqualNode*)come_increment_ref_count(((struct sXorEqualNode*)(right_value244=(struct sXorEqualNode*)come_calloc(1, sizeof(struct sXorEqualNode)*(1), "sXorEqualNode_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
                                                if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value244;
                                                __freed_obj__ = 0;
                                                if(_if_conditional284=self!=((void*)0)&&self->mLeft!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional284) {
                                                    __dec_obj119=result_159->mLeft;
                                                    result_159->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(self->mLeft))));
                                                    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                                                    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value245;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional285=self!=((void*)0)&&self->mRight!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional285) {
                                                    __dec_obj120=result_159->mRight;
                                                    result_159->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(self->mRight))));
                                                    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                                                    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value246;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional286=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional286) {
                                                    result_159->mQuote=self->mQuote;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional287=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional287) {
                                                    result_159->sline=self->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional288) {
                                                    __dec_obj121=result_159->sname;
                                                    result_159->sname=(char*)come_increment_ref_count(((char*)(right_value247=string_clone(self->sname))));
                                                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                                                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value247;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result162__ = __result_obj__ = result_159;
                                                if(result_159 && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result162__;
                                                __freed_obj__ = 0;
                                                if(result_159 && !__freed_obj__) { come_call_finalizer(sXorEqualNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAndEqualNode_finalize(struct sAndEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional291=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional291) {
                                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional292=self!=((void*)0)&&self->mRight!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional292) {
                                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional293) {
                                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static struct sAndEqualNode* sAndEqualNode_clone(struct sAndEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
struct sAndEqualNode* __result164__;
void* right_value252;
struct sAndEqualNode* result_162;
_Bool _if_conditional295;
void* right_value253;
struct sNode* __dec_obj122;
_Bool _if_conditional296;
void* right_value254;
struct sNode* __dec_obj123;
_Bool _if_conditional297;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value255;
char* __dec_obj124;
struct sAndEqualNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value252, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sAndEqualNode*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
                                                    if(_if_conditional294=self==(void*)0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional294) {
                                                        __result164__ = __result_obj__ = (void*)0;
                                                        __freed_obj__ = 0;
                                                        return __result164__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    result_162=(struct sAndEqualNode*)come_increment_ref_count(((struct sAndEqualNode*)(right_value252=(struct sAndEqualNode*)come_calloc(1, sizeof(struct sAndEqualNode)*(1), "sAndEqualNode_clone", 3))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
                                                    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value252;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional295=self!=((void*)0)&&self->mLeft!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional295) {
                                                        __dec_obj122=result_162->mLeft;
                                                        result_162->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(self->mLeft))));
                                                        if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
                                                        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value253;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional296=self!=((void*)0)&&self->mRight!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional296) {
                                                        __dec_obj123=result_162->mRight;
                                                        result_162->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(self->mRight))));
                                                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
                                                        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value254;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional297=self!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional297) {
                                                        result_162->mQuote=self->mQuote;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional298=self!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional298) {
                                                        result_162->sline=self->sline;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional299=self!=((void*)0)&&self->sname!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional299) {
                                                        __dec_obj124=result_162->sname;
                                                        result_162->sname=(char*)come_increment_ref_count(((char*)(right_value255=string_clone(self->sname))));
                                                        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
                                                        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value255;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    __result165__ = __result_obj__ = result_162;
                                                    if(result_162 && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result165__;
                                                    __freed_obj__ = 0;
                                                    if(result_162 && !__freed_obj__) { come_call_finalizer(sAndEqualNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sOrEqualNode_finalize(struct sOrEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional302;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional302=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional302) {
                                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional303=self!=((void*)0)&&self->mRight!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional303) {
                                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional304=self!=((void*)0)&&self->sname!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional304) {
                                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct sOrEqualNode* sOrEqualNode_clone(struct sOrEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
struct sOrEqualNode* __result167__;
void* right_value260;
struct sOrEqualNode* result_165;
_Bool _if_conditional306;
void* right_value261;
struct sNode* __dec_obj125;
_Bool _if_conditional307;
void* right_value262;
struct sNode* __dec_obj126;
_Bool _if_conditional308;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value263;
char* __dec_obj127;
struct sOrEqualNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value260, 0, sizeof(void*));
memset(&result_165, 0, sizeof(struct sOrEqualNode*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value263, 0, sizeof(void*));
                                                        if(_if_conditional305=self==(void*)0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional305) {
                                                            __result167__ = __result_obj__ = (void*)0;
                                                            __freed_obj__ = 0;
                                                            return __result167__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        result_165=(struct sOrEqualNode*)come_increment_ref_count(((struct sOrEqualNode*)(right_value260=(struct sOrEqualNode*)come_calloc(1, sizeof(struct sOrEqualNode)*(1), "sOrEqualNode_clone", 3))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
                                                        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value260;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional306=self!=((void*)0)&&self->mLeft!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional306) {
                                                            __dec_obj125=result_165->mLeft;
                                                            result_165->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value261=sNode_clone(self->mLeft))));
                                                            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
                                                            if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, ((struct sNode*)right_value261)->finalize, ((struct sNode*)right_value261)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[0] = right_value261;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional307=self!=((void*)0)&&self->mRight!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional307) {
                                                            __dec_obj126=result_165->mRight;
                                                            result_165->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value262=sNode_clone(self->mRight))));
                                                            if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
                                                            if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, ((struct sNode*)right_value262)->finalize, ((struct sNode*)right_value262)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[0] = right_value262;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional308=self!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional308) {
                                                            result_165->mQuote=self->mQuote;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional309=self!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional309) {
                                                            result_165->sline=self->sline;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional310=self!=((void*)0)&&self->sname!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional310) {
                                                            __dec_obj127=result_165->sname;
                                                            result_165->sname=(char*)come_increment_ref_count(((char*)(right_value263=string_clone(self->sname))));
                                                            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
                                                            if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value263;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __result168__ = __result_obj__ = result_165;
                                                        if(result_165 && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result168__;
                                                        __freed_obj__ = 0;
                                                        if(result_165 && !__freed_obj__) { come_call_finalizer(sOrEqualNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sExpEqualNode_finalize(struct sExpEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
_Bool _if_conditional314;
_Bool _if_conditional315;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional313=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional313) {
                                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional314=self!=((void*)0)&&self->mRight!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional314) {
                                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional315=self!=((void*)0)&&self->sname!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional315) {
                                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
}

static struct sExpEqualNode* sExpEqualNode_clone(struct sExpEqualNode* self){
char* __caller_sname_stack__;
int __caller_sline_stack__;
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional316;
struct sExpEqualNode* __result170__;
void* right_value268;
struct sExpEqualNode* result_168;
_Bool _if_conditional317;
void* right_value269;
struct sNode* __dec_obj128;
_Bool _if_conditional318;
void* right_value270;
struct sNode* __dec_obj129;
_Bool _if_conditional319;
_Bool _if_conditional320;
_Bool _if_conditional321;
void* right_value271;
char* __dec_obj130;
struct sExpEqualNode* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value268, 0, sizeof(void*));
memset(&result_168, 0, sizeof(struct sExpEqualNode*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value271, 0, sizeof(void*));
                                                            if(_if_conditional316=self==(void*)0,                                                            __freed_obj__ = 0, 
                                                            _if_conditional316) {
                                                                __result170__ = __result_obj__ = (void*)0;
                                                                __freed_obj__ = 0;
                                                                return __result170__;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            result_168=(struct sExpEqualNode*)come_increment_ref_count(((struct sExpEqualNode*)(right_value268=(struct sExpEqualNode*)come_calloc(1, sizeof(struct sExpEqualNode)*(1), "sExpEqualNode_clone", 3))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
                                                            if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value268;
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional317=self!=((void*)0)&&self->mLeft!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional317) {
                                                                __dec_obj128=result_168->mLeft;
                                                                result_168->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=sNode_clone(self->mLeft))));
                                                                if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
                                                                if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value269;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional318=self!=((void*)0)&&self->mRight!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional318) {
                                                                __dec_obj129=result_168->mRight;
                                                                result_168->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value270=sNode_clone(self->mRight))));
                                                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
                                                                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, ((struct sNode*)right_value270)->finalize, ((struct sNode*)right_value270)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value270;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional319=self!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional319) {
                                                                result_168->mQuote=self->mQuote;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional320=self!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional320) {
                                                                result_168->sline=self->sline;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional321=self!=((void*)0)&&self->sname!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional321) {
                                                                __dec_obj130=result_168->sname;
                                                                result_168->sname=(char*)come_increment_ref_count(((char*)(right_value271=string_clone(self->sname))));
                                                                if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
                                                                if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { right_value271 = come_decrement_ref_count(right_value271, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value271;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            __result171__ = __result_obj__ = result_168;
                                                            if(result_168 && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            __freed_obj__ = 0;
                                                            return __result171__;
                                                            __freed_obj__ = 0;
                                                            if(result_168 && !__freed_obj__) { come_call_finalizer(sExpEqualNode_finalize,result_168, (void*)0, (void*)0, 0, 0, 0, 0); }
}

