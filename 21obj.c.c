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
struct sNullNodeX
{
    int sline;
    char* sname;
};
struct sNewNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sImplementsNode
{
    struct sNode* obj_exp;
    struct sType* inf_type;
    int sline;
    char* sname;
};
struct optional$2tuple2$2charphsTypephphbool
{
    struct tuple2$2charphsTypeph* v1;
    _Bool v2;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sSizeOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode2
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode2
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignAsNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignAsExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sForceDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDelegateNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sShareNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sBorrowNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sCloneNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDupeNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDummyHeapNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCIncNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCDecNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sIsHeap
{
    struct sType* type;
    int sline;
    char* sname;
};
struct optional$2voidpbool
{
    void* v1;
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

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info);

_Bool sNullNodeX_terminated();

char* sNullNodeX_kind();

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info);

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info);

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

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
int sNewNode_sline(struct sNewNode* self, struct sInfo* info);

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info);

_Bool sNewNode_terminated();

char* sNewNode_kind();

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static char* optional$2charphbool_expect(struct optional$2charphbool* self);
static void optional$2charphboolp_finalize(struct optional$2charphbool* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info);

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info);

_Bool sImplementsNode_terminated();

char* sImplementsNode_kind();

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct optional$2tuple2$2charphsTypephphbool* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static struct optional$2tuple2$2charphsTypephphbool* optional$2tuple2$2charphsTypephphbool_initialize(struct optional$2tuple2$2charphsTypephphbool* self, struct tuple2$2charphsTypeph* v1, _Bool v2);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static void optional$2tuple2$2charphsTypephphboolp_finalize(struct optional$2tuple2$2charphsTypephphbool* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* optional$2tuple2$2charphsTypephphbool_value(struct optional$2tuple2$2charphsTypephphbool* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info);

_Bool sTrueNode_terminated();

char* sTrueNode_kind();

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated();

char* sFalseNode_kind();

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info);

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info);

_Bool sSizeOfNode_terminated();

char* sSizeOfNode_kind();

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info);

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info);

_Bool sSizeOfExpNode_terminated();

char* sSizeOfExpNode_kind();

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info);

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info);

_Bool sAlignOfNode_terminated();

char* sAlignOfNode_kind();

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info);

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info);

_Bool sAlignOfExpNode_terminated();

char* sAlignOfExpNode_kind();

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info);

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info);

_Bool sAlignOfNode2_terminated();

char* sAlignOfNode2_kind();

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info);

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info);

_Bool sAlignOfExpNode2_terminated();

char* sAlignOfExpNode2_kind();

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info);

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info);

_Bool sAlignAsNode_terminated();

char* sAlignAsNode_kind();

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info);

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info);

_Bool sAlignAsExpNode_terminated();

char* sAlignAsExpNode_kind();

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info);

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info);

_Bool sDeleteNode_terminated();

char* sDeleteNode_kind();

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info);

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info);

_Bool sForceDeleteNode_terminated();

char* sForceDeleteNode_kind();

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info);

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info);

_Bool sDelegateNode_terminated();

char* sDelegateNode_kind();

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

int sShareNode_sline(struct sShareNode* self, struct sInfo* info);

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info);

_Bool sShareNode_terminated();

char* sShareNode_kind();

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info);

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info);

_Bool sBorrowNode_terminated();

char* sBorrowNode_kind();

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info);

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info);

_Bool sCloneNode_terminated();

char* sCloneNode_kind();

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info);

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info);

_Bool sDupeNode_terminated();

char* sDupeNode_kind();

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info);

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info);

_Bool sDummyHeapNode_terminated();

char* sDummyHeapNode_kind();

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info);

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info);

_Bool sGCIncNode_terminated();

char* sGCIncNode_kind();

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info);

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info);

_Bool sGCDecNode_terminated();

char* sGCDecNode_kind();

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info);

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info);

_Bool sIsHeap_terminated();

char* sIsHeap_kind();

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2);
static void optional$2voidpboolp_finalize(struct optional$2voidpbool* self);
static int optional$2intbool_value(struct optional$2intbool* self);
static void optional$2intboolp_finalize(struct optional$2intbool* self);
static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2);
static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*));
void method_block1_21objc(struct __current_stack1__* parent);

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNodeX_finalize(struct sNullNodeX* self);
static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self);
struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
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







struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value0;
char* __dec_obj1;
struct sNullNodeX* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value0, 0, sizeof(void*));
    ((struct sNullNodeX*)come_null_check(self, "21obj.c", 12))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 12))->sline;
    __freed_obj__ = 0;
    __dec_obj1=((struct sNullNodeX*)come_null_check(self, "21obj.c", 13))->sname;
    ((struct sNullNodeX*)come_null_check(self, "21obj.c", 13))->sname=(char*)come_increment_ref_count(((char*)(right_value0=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 13))->sname))));
    if(__dec_obj1) { __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { right_value0 = come_decrement_ref_count(right_value0, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __result7__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result7__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNodeX_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result8__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result8__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result8__;
    __freed_obj__ = 0;
}

char* sNullNodeX_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value1;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value1, 0, sizeof(void*));
    __result9__ = __result_obj__ = ((char*)(right_value1=__builtin_string("sNullNodeX")));
    __freed_obj__ = 0;
    return __result9__;
    __freed_obj__ = 0;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result10__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result10__;
    __freed_obj__ = 0;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result11__ = ((struct sNullNodeX*)come_null_check(self, "21obj.c", 36))->sline;
    __freed_obj__ = 0;
    return __result11__;
    __freed_obj__ = 0;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value2;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value2, 0, sizeof(void*));
    __result12__ = __result_obj__ = ((char*)(right_value2=__builtin_string(((struct sNullNodeX*)come_null_check(self, "21obj.c", 41))->sname)));
    __freed_obj__ = 0;
    return __result12__;
    __freed_obj__ = 0;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value37;
struct sType* __dec_obj24;
void* right_value38;
char* __dec_obj25;
struct sNewNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value37, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
    __dec_obj24=((struct sNewNode*)come_null_check(self, "21obj.c", 53))->type;
    ((struct sNewNode*)come_null_check(self, "21obj.c", 53))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value37=sType_clone(type))));
    if(__dec_obj24) { come_call_finalizer(sType_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value37;
    __freed_obj__ = 0;
    ((struct sNewNode*)come_null_check(self, "21obj.c", 55))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 55))->sline;
    __freed_obj__ = 0;
    __dec_obj25=((struct sNewNode*)come_null_check(self, "21obj.c", 56))->sname;
    ((struct sNewNode*)come_null_check(self, "21obj.c", 56))->sname=(char*)come_increment_ref_count(((char*)(right_value38=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 56))->sname))));
    if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value38);
    if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { right_value38 = come_decrement_ref_count(right_value38, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value38;
    __freed_obj__ = 0;
    __result31__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result31__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional2;
struct sType* __result13__;
void* right_value3;
struct sType* result_0;
_Bool _if_conditional19;
_Bool _if_conditional20;
void* right_value6;
struct tuple1$1sTypeph* __dec_obj3;
_Bool _if_conditional24;
void* right_value7;
struct tuple1$1sTypeph* __dec_obj4;
_Bool _if_conditional25;
void* right_value8;
char* __dec_obj5;
_Bool _if_conditional26;
void* right_value15;
struct list$1sTypeph* __dec_obj9;
_Bool _if_conditional30;
void* right_value23;
struct list$1sNodeph* __dec_obj13;
_Bool _if_conditional43;
_Bool _if_conditional44;
void* right_value24;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional45;
void* right_value31;
struct list$1charph* __dec_obj18;
_Bool _if_conditional49;
void* right_value32;
struct tuple1$1sTypeph* __dec_obj19;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value33;
struct sNode* __dec_obj20;
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
_Bool _if_conditional75;
void* right_value34;
struct sNode* __dec_obj21;
_Bool _if_conditional76;
_Bool _if_conditional77;
_Bool _if_conditional78;
void* right_value35;
char* __dec_obj22;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
void* right_value36;
char* __dec_obj23;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value3, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct sType*));
memset(&right_value6, 0, sizeof(void*));
memset(&right_value7, 0, sizeof(void*));
memset(&right_value8, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&right_value34, 0, sizeof(void*));
memset(&right_value35, 0, sizeof(void*));
memset(&right_value36, 0, sizeof(void*));
        if(_if_conditional2=self==(void*)0,        __freed_obj__ = 0, 
        _if_conditional2) {
            __result13__ = __result_obj__ = (void*)0;
            __freed_obj__ = 0;
            return __result13__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        result_0=(struct sType*)come_increment_ref_count(((struct sType*)(right_value3=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
        if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value3;
        __freed_obj__ = 0;
        if(_if_conditional19=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional19) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 4))->mClass=((struct sType*)come_null_check(self, "sType_clone", 4))->mClass;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional20=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 6))->mNoSolvedGenericsType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional20) {
            __dec_obj3=((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 5))->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value6=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 5))->mNoSolvedGenericsType))));
            if(__dec_obj3) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
            if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value6;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional24=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 7))->mOriginalLoadVarType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional24) {
            __dec_obj4=((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 6))->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value7=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 6))->mOriginalLoadVarType))));
            if(__dec_obj4) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
            if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value7;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional25=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional25) {
            __dec_obj5=((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 7))->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value8=string_clone(((struct sType*)come_null_check(self, "sType_clone", 7))->mGenericsName))));
            if(__dec_obj5) { __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
            if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { right_value8 = come_decrement_ref_count(right_value8, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value8;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional26=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 9))->mGenericsTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional26) {
            __dec_obj9=((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 8))->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value15=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 8))->mGenericsTypes))));
            if(__dec_obj9) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional30=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 10))->mArrayNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional30) {
            __dec_obj13=((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 9))->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=list$1sNodephp_clone(((struct sType*)come_null_check(self, "sType_clone", 9))->mArrayNum))));
            if(__dec_obj13) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
            if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value23;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional43=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional43) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 10))->mOmitArrayNum=((struct sType*)come_null_check(self, "sType_clone", 10))->mOmitArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional44=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 12))->mParamTypes!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional44) {
            __dec_obj14=((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes;
            ((struct sType*)come_null_check(result_0, "sType_clone", 11))->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value24=list$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 11))->mParamTypes))));
            if(__dec_obj14) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
            if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value24;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional45=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 13))->mParamNames!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional45) {
            __dec_obj18=((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames;
            ((struct sType*)come_null_check(result_0, "sType_clone", 12))->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value31=list$1charphp_clone(((struct sType*)come_null_check(self, "sType_clone", 12))->mParamNames))));
            if(__dec_obj18) { come_call_finalizer(list$1charph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional49=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 14))->mResultType!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional49) {
            __dec_obj19=((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType;
            ((struct sType*)come_null_check(result_0, "sType_clone", 13))->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value32=tuple1$1sTypephp_clone(((struct sType*)come_null_check(self, "sType_clone", 13))->mResultType))));
            if(__dec_obj19) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
            if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value32;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional50=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional50) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 14))->mVarArgs=((struct sType*)come_null_check(self, "sType_clone", 14))->mVarArgs;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional51=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 16))->mAlignas!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional51) {
            __dec_obj20=((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas;
            ((struct sType*)come_null_check(result_0, "sType_clone", 15))->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value33=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 15))->mAlignas))));
            if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, ((struct sNode*)__dec_obj20)->finalize, ((struct sNode*)__dec_obj20)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
            if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, ((struct sNode*)right_value33)->finalize, ((struct sNode*)right_value33)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value33;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional52=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional52) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 16))->mUnsigned=((struct sType*)come_null_check(self, "sType_clone", 16))->mUnsigned;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional53=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional53) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 17))->mShort=((struct sType*)come_null_check(self, "sType_clone", 17))->mShort;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional54=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional54) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 18))->mLong=((struct sType*)come_null_check(self, "sType_clone", 18))->mLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional55=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional55) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 19))->mLongLong=((struct sType*)come_null_check(self, "sType_clone", 19))->mLongLong;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional56=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional56) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 20))->mConstant=((struct sType*)come_null_check(self, "sType_clone", 20))->mConstant;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional57=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional57) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 21))->mRegister=((struct sType*)come_null_check(self, "sType_clone", 21))->mRegister;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional58=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional58) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 22))->mVolatile=((struct sType*)come_null_check(self, "sType_clone", 22))->mVolatile;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional59=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional59) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 23))->mStatic=((struct sType*)come_null_check(self, "sType_clone", 23))->mStatic;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional60=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional60) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 24))->mExtern=((struct sType*)come_null_check(self, "sType_clone", 24))->mExtern;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional61=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional61) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 25))->mRestrict=((struct sType*)come_null_check(self, "sType_clone", 25))->mRestrict;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional62=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional62) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 26))->mImmutable=((struct sType*)come_null_check(self, "sType_clone", 26))->mImmutable;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional63=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional63) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 27))->mHeap=((struct sType*)come_null_check(self, "sType_clone", 27))->mHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional64=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional64) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 28))->mDummyHeap=((struct sType*)come_null_check(self, "sType_clone", 28))->mDummyHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional65=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional65) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 29))->mDelegate=((struct sType*)come_null_check(self, "sType_clone", 29))->mDelegate;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional66=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional66) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 30))->mShare=((struct sType*)come_null_check(self, "sType_clone", 30))->mShare;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional67=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional67) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 31))->mClone=((struct sType*)come_null_check(self, "sType_clone", 31))->mClone;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional68=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional68) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 32))->mNoHeap=((struct sType*)come_null_check(self, "sType_clone", 32))->mNoHeap;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional69=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional69) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 33))->mNoCallingDestructor=((struct sType*)come_null_check(self, "sType_clone", 33))->mNoCallingDestructor;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional70=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional70) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 34))->mRefference=((struct sType*)come_null_check(self, "sType_clone", 34))->mRefference;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional71=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional71) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 35))->mException=((struct sType*)come_null_check(self, "sType_clone", 35))->mException;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional72) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 36))->mPointerNum=((struct sType*)come_null_check(self, "sType_clone", 36))->mPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional73=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional73) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 37))->mOriginalTypeNamePointerNum=((struct sType*)come_null_check(self, "sType_clone", 37))->mOriginalTypeNamePointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional74=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional74) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 38))->mNoArrayPointerNum=((struct sType*)come_null_check(self, "sType_clone", 38))->mNoArrayPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional75=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 40))->mSizeNum!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional75) {
            __dec_obj21=((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum;
            ((struct sType*)come_null_check(result_0, "sType_clone", 39))->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value34=sNode_clone(((struct sType*)come_null_check(self, "sType_clone", 39))->mSizeNum))));
            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, ((struct sNode*)right_value34)->finalize, ((struct sNode*)right_value34)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value34;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional76=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional76) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 40))->mDynamicArrayNum=((struct sType*)come_null_check(self, "sType_clone", 40))->mDynamicArrayNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional77=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional77) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 41))->mTypeOfExpression=((struct sType*)come_null_check(self, "sType_clone", 41))->mTypeOfExpression;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional78=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalTypeName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional78) {
            __dec_obj22=((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 42))->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value35=string_clone(((struct sType*)come_null_check(self, "sType_clone", 42))->mOriginalTypeName))));
            if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count(__dec_obj22, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
            if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { right_value35 = come_decrement_ref_count(right_value35, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value35;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional79=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional79) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 43))->mOriginalPointerNum=((struct sType*)come_null_check(self, "sType_clone", 43))->mOriginalPointerNum;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional80=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional80) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 44))->mFunctionParam=((struct sType*)come_null_check(self, "sType_clone", 44))->mFunctionParam;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional81=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional81) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 45))->mAllocaValue=((struct sType*)come_null_check(self, "sType_clone", 45))->mAllocaValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional82=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional82) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 46))->mGenericsStruct=((struct sType*)come_null_check(self, "sType_clone", 46))->mGenericsStruct;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional83=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional83) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 47))->mSolvedGenericsName=((struct sType*)come_null_check(self, "sType_clone", 47))->mSolvedGenericsName;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional84=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional84) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 48))->mComeMemCore=((struct sType*)come_null_check(self, "sType_clone", 48))->mComeMemCore;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional85=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional85) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 49))->mInline=((struct sType*)come_null_check(self, "sType_clone", 49))->mInline;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional86=self!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional86) {
            ((struct sType*)come_null_check(result_0, "sType_clone", 50))->mNullValue=((struct sType*)come_null_check(self, "sType_clone", 50))->mNullValue;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional87=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_clone", 52))->mAsmName!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional87) {
            __dec_obj23=((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName;
            ((struct sType*)come_null_check(result_0, "sType_clone", 51))->mAsmName=(char*)come_increment_ref_count(((char*)(right_value36=string_clone(((struct sType*)come_null_check(self, "sType_clone", 51))->mAsmName))));
            if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count(__dec_obj23, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
            if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { right_value36 = come_decrement_ref_count(right_value36, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value36;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result30__ = __result_obj__ = result_0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result30__;
        __freed_obj__ = 0;
        if(result_0 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_0, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional3;
_Bool _if_conditional5;
_Bool _if_conditional6;
_Bool _if_conditional7;
_Bool _if_conditional9;
_Bool _if_conditional11;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional16;
_Bool _if_conditional17;
_Bool _if_conditional18;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional3=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 1))->mNoSolvedGenericsType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional3) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 0))->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional5=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 2))->mOriginalLoadVarType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional5) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 1))->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional6=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional6) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 2))->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional7=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 4))->mGenericsTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional7) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 3))->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional9=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 5))->mArrayNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional9) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 4))->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional11=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamTypes!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional11) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 5))->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional12=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 7))->mParamNames!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional12) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 6))->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional14=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 8))->mResultType!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional14) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,((struct sType*)come_null_check(self, "sType_finalize", 7))->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional15=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 9))->mAlignas!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional15) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 8))->mAlignas)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional16=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 10))->mSizeNum!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional16) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->finalize, ((struct sNode*)((struct sType*)come_null_check(self, "sType_finalize", 9))->mSizeNum)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional17=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 11))->mOriginalTypeName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional17) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 10))->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional18=self!=((void*)0)&&((struct sType*)come_null_check(self, "sType_finalize", 12))->mAsmName!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional18) {
                if(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName && !__freed_obj__) { ((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName = come_decrement_ref_count(((struct sType*)come_null_check(self, "sType_finalize", 11))->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional4=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional4) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional8=self!=((void*)0)&&((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional8) {
                                if(((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct list_item$1sTypeph*)come_null_check(self, "list_item$1sTypephp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
_Bool _if_conditional10;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional10=self!=((void*)0)&&((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional10) {
                                if(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->finalize, ((struct sNode*)((struct list_item$1sNodeph*)come_null_check(self, "list_item$1sNodephp_finalize", 0))->item)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional13=self!=((void*)0)&&((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 1))->item!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional13) {
                                if(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item && !__freed_obj__) { ((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item = come_decrement_ref_count(((struct list_item$1charph*)come_null_check(self, "list_item$1charphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional21;
struct tuple1$1sTypeph* __result14__;
void* right_value4;
struct tuple1$1sTypeph* result_7;
_Bool _if_conditional23;
void* right_value5;
struct sType* __dec_obj2;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value4, 0, sizeof(void*));
memset(&result_7, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value5, 0, sizeof(void*));
                if(_if_conditional21=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional21) {
                    __result14__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result14__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_7=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value4=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
                if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value4;
                __freed_obj__ = 0;
                if(_if_conditional23=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 5))->v1!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional23) {
                    __dec_obj2=((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1;
                    ((struct tuple1$1sTypeph*)come_null_check(result_7, "tuple1$1sTypephp_clone", 4))->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value5=sType_clone(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypephp_clone", 4))->v1))));
                    if(__dec_obj2) { come_call_finalizer(sType_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
                    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value5;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result15__ = __result_obj__ = result_7;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result15__;
                __freed_obj__ = 0;
                if(result_7 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_7, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional22;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional22=self!=((void*)0)&&((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional22) {
                        if(((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple1$1sTypeph*)come_null_check(self, "tuple1$1sTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional27;
struct list$1sTypeph* __result16__;
void* right_value9;
void* right_value10;
struct list$1sTypeph* result_8;
struct list_item$1sTypeph* it_9;
_Bool _while_condtional4;
void* right_value14;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value9, 0, sizeof(void*));
memset(&right_value10, 0, sizeof(void*));
memset(&result_8, 0, sizeof(struct list$1sTypeph*));
memset(&it_9, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value14, 0, sizeof(void*));
                if(_if_conditional27=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional27) {
                    __result16__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result16__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_8=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value10=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)come_null_check(((struct list$1sTypeph*)(right_value9=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
                if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value9;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value10);
                if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value10;
                __freed_obj__ = 0;
                it_9=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional4=it_9!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional4) {
                    list$1sTypeph_add(((struct list$1sTypeph*)come_null_check(result_8, "./comelang2.h", 192)),(struct sType*)come_increment_ref_count(((struct sType*)(right_value14=sType_clone(((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
                    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value14;
                    __freed_obj__ = 0;
                    it_9=((struct list_item$1sTypeph*)come_null_check(it_9, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result19__ = __result_obj__ = result_8;
                if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result19__;
                __freed_obj__ = 0;
                if(result_8 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_8, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional28;
void* right_value11;
struct list_item$1sTypeph* litem_10;
struct sType* __dec_obj6;
_Bool _if_conditional29;
void* right_value12;
struct list_item$1sTypeph* litem_11;
struct sType* __dec_obj7;
void* right_value13;
struct list_item$1sTypeph* litem_12;
struct sType* __dec_obj8;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&litem_10, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
memset(&litem_11, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value13, 0, sizeof(void*));
memset(&litem_12, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional28=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional28) {
                            litem_10=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value11=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                            if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value11;
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj6=((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item;
                            ((struct list_item$1sTypeph*)come_null_check(litem_10, "./comelang2.h", 206))->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_10;
                            __freed_obj__ = 0;
                            ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_10;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional29=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional29) {
                                litem_11=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value12=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                                if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value12;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 214))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj7=((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_11, "./comelang2.h", 216))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj7) { come_call_finalizer(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                                ((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_11;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_11;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_12=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value13=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
                                if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value13;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 224))->prev=((struct list$1sTypeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj8=((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item;
                                ((struct list_item$1sTypeph*)come_null_check(litem_12, "./comelang2.h", 226))->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj8) { come_call_finalizer(sType_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional31;
struct list$1sNodeph* __result20__;
void* right_value16;
void* right_value17;
struct list$1sNodeph* result_13;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional5;
void* right_value22;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sNodeph*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value22, 0, sizeof(void*));
                if(_if_conditional31=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional31) {
                    __result20__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result20__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_13=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value17=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)come_null_check(((struct list$1sNodeph*)(right_value16=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17;
                __freed_obj__ = 0;
                it_14=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional5=it_14!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional5) {
                    list$1sNodeph_add(((struct list$1sNodeph*)come_null_check(result_13, "./comelang2.h", 192)),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value22=sNode_clone(((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                    if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { right_value22 = come_decrement_ref_count(right_value22, ((struct sNode*)right_value22)->finalize, ((struct sNode*)right_value22)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value22;
                    __freed_obj__ = 0;
                    it_14=((struct list_item$1sNodeph*)come_null_check(it_14, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result25__ = __result_obj__ = result_13;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result25__;
                __freed_obj__ = 0;
                if(result_13 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional32;
void* right_value18;
struct list_item$1sNodeph* litem_15;
struct sNode* __dec_obj10;
_Bool _if_conditional33;
void* right_value19;
struct list_item$1sNodeph* litem_16;
struct sNode* __dec_obj11;
void* right_value20;
struct list_item$1sNodeph* litem_17;
struct sNode* __dec_obj12;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional32=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional32) {
                            litem_15=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value18=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18;
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj10=((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item;
                            ((struct list_item$1sNodeph*)come_null_check(litem_15, "./comelang2.h", 206))->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj10) { __dec_obj10 = come_decrement_ref_count(__dec_obj10, ((struct sNode*)__dec_obj10)->finalize, ((struct sNode*)__dec_obj10)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_15;
                            __freed_obj__ = 0;
                            ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 209))->head=litem_15;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional33=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional33) {
                                litem_16=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value19=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 214))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj11=((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_16, "./comelang2.h", 216))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj11) { __dec_obj11 = come_decrement_ref_count(__dec_obj11, ((struct sNode*)__dec_obj11)->finalize, ((struct sNode*)__dec_obj11)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_16;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_16;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_17=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value20=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 224))->prev=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj12=((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item;
                                ((struct list_item$1sNodeph*)come_null_check(litem_17, "./comelang2.h", 226))->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj12) { __dec_obj12 = come_decrement_ref_count(__dec_obj12, ((struct sNode*)__dec_obj12)->finalize, ((struct sNode*)__dec_obj12)->_protocol_obj, 0,0,0); }
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
                        __result22__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result22__;
                        __freed_obj__ = 0;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional34;
struct sNode* __result23__;
void* right_value21;
struct sNode* result_18;
_Bool _if_conditional35;
_Bool _if_conditional36;
_Bool _if_conditional37;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value21, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct sNode*));
                        if(_if_conditional34=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional34) {
                            __result23__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result23__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_18=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                        if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { right_value21 = come_decrement_ref_count(right_value21, ((struct sNode*)right_value21)->finalize, ((struct sNode*)right_value21)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value21;
                        __freed_obj__ = 0;
                        if(_if_conditional35=self!=((void*)0)&&((struct sNode*)come_null_check(self, "sNode_clone", 5))->clone!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional35) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 4))->_protocol_obj=((struct sNode*)come_null_check(self, "sNode_clone", 4))->clone(((struct sNode*)come_null_check(self, "sNode_clone", 4))->_protocol_obj);
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional36=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional36) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 5))->finalize=((struct sNode*)come_null_check(self, "sNode_clone", 5))->finalize;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional37=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional37) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 6))->clone=((struct sNode*)come_null_check(self, "sNode_clone", 6))->clone;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional38=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional38) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 7))->compile=((struct sNode*)come_null_check(self, "sNode_clone", 7))->compile;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional39=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional39) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 8))->sline=((struct sNode*)come_null_check(self, "sNode_clone", 8))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional40=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional40) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 9))->sname=((struct sNode*)come_null_check(self, "sNode_clone", 9))->sname;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional41=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional41) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 10))->terminated=((struct sNode*)come_null_check(self, "sNode_clone", 10))->terminated;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional42=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional42) {
                            ((struct sNode*)come_null_check(result_18, "sNode_clone", 11))->kind=((struct sNode*)come_null_check(self, "sNode_clone", 11))->kind;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result24__ = __result_obj__ = result_18;
                        if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 1, 0); } 
                        __freed_obj__ = 0;
                        return __result24__;
                        __freed_obj__ = 0;
                        if(result_18 && !__freed_obj__) { result_18 = come_decrement_ref_count(result_18, ((struct sNode*)result_18)->finalize, ((struct sNode*)result_18)->_protocol_obj, 0, 0, 0); } 
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
_Bool _if_conditional46;
struct list$1charph* __result26__;
void* right_value25;
void* right_value26;
struct list$1charph* result_19;
struct list_item$1charph* it_20;
_Bool _while_condtional6;
void* right_value30;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&right_value26, 0, sizeof(void*));
memset(&result_19, 0, sizeof(struct list$1charph*));
memset(&it_20, 0, sizeof(struct list_item$1charph*));
memset(&right_value30, 0, sizeof(void*));
                if(_if_conditional46=self==((void*)0),                __freed_obj__ = 0, 
                _if_conditional46) {
                    __result26__ = __result_obj__ = ((void*)0);
                    __freed_obj__ = 0;
                    return __result26__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_19=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value26=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)come_null_check(((struct list$1charph*)(right_value25=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 188))), "./comelang2.h", 188)))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value25;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value26;
                __freed_obj__ = 0;
                it_20=((struct list$1charph*)come_null_check(self, "./comelang2.h", 190))->head;
                __freed_obj__ = 0;
                while(_while_condtional6=it_20!=((void*)0),                __freed_obj__ = 0, 
                _while_condtional6) {
                    list$1charph_add(((struct list$1charph*)come_null_check(result_19, "./comelang2.h", 192)),(char*)come_increment_ref_count(((char*)(right_value30=string_clone(((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 192))->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                    if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value30;
                    __freed_obj__ = 0;
                    it_20=((struct list_item$1charph*)come_null_check(it_20, "./comelang2.h", 194))->next;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result29__ = __result_obj__ = result_19;
                if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result29__;
                __freed_obj__ = 0;
                if(result_19 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_19, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 150))->head=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 151))->tail=((void*)0);
                    __freed_obj__ = 0;
                    ((struct list$1charph*)come_null_check(self, "./comelang2.h", 152))->len=0;
                    __freed_obj__ = 0;
                    __result27__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result27__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional47;
void* right_value27;
struct list_item$1charph* litem_21;
char* __dec_obj15;
_Bool _if_conditional48;
void* right_value28;
struct list_item$1charph* litem_22;
char* __dec_obj16;
void* right_value29;
struct list_item$1charph* litem_23;
char* __dec_obj17;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1charph*));
memset(&right_value28, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1charph*));
memset(&right_value29, 0, sizeof(void*));
memset(&litem_23, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional47=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==0,                        __freed_obj__ = 0, 
                        _if_conditional47) {
                            litem_21=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value27=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 202))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                            if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value27;
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 204))->prev=((void*)0);
                            __freed_obj__ = 0;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 205))->next=((void*)0);
                            __freed_obj__ = 0;
                            __dec_obj15=((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item;
                            ((struct list_item$1charph*)come_null_check(litem_21, "./comelang2.h", 206))->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 208))->tail=litem_21;
                            __freed_obj__ = 0;
                            ((struct list$1charph*)come_null_check(self, "./comelang2.h", 209))->head=litem_21;
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional48=((struct list$1charph*)come_null_check(self, "./comelang2.h", 232))->len==1,                            __freed_obj__ = 0, 
                            _if_conditional48) {
                                litem_22=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value28=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                                if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value28;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 214))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 214))->head;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 215))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj16=((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item;
                                ((struct list_item$1charph*)come_null_check(litem_22, "./comelang2.h", 216))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = 0;
                                ((struct list$1charph*)come_null_check(self, "./comelang2.h", 218))->tail=litem_22;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(((struct list$1charph*)come_null_check(self, "./comelang2.h", 219))->head, "./comelang2.h", 219))->next=litem_22;
                                __freed_obj__ = 0;
                            }
                            else {
                                litem_23=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value29=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                                if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value29;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 224))->prev=((struct list$1charph*)come_null_check(self, "./comelang2.h", 224))->tail;
                                __freed_obj__ = 0;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 225))->next=((void*)0);
                                __freed_obj__ = 0;
                                __dec_obj17=((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item;
                                ((struct list_item$1charph*)come_null_check(litem_23, "./comelang2.h", 226))->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count(__dec_obj17, (void*)0, (void*)0, 0,0,0); }
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
                        __result28__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result28__;
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

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result32__ = ((struct sNewNode*)come_null_check(self, "21obj.c", 63))->sline;
    __freed_obj__ = 0;
    return __result32__;
    __freed_obj__ = 0;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value39;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value39, 0, sizeof(void*));
    __result33__ = __result_obj__ = ((char*)(right_value39=__builtin_string(((struct sNewNode*)come_null_check(self, "21obj.c", 68))->sname)));
    __freed_obj__ = 0;
    return __result33__;
    __freed_obj__ = 0;
}

_Bool sNewNode_terminated(){
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

char* sNewNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value40;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value40, 0, sizeof(void*));
    __result35__ = __result_obj__ = ((char*)(right_value40=__builtin_string("sNewNode")));
    __freed_obj__ = 0;
    return __result35__;
    __freed_obj__ = 0;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_24;
void* right_value41;
struct CVALUE* come_value_25;
void* right_value42;
void* right_value43;
struct buffer* num_string_26;
struct list$1sNodeph* o2_saved_27;
struct sNode* it_30;
_Bool _for_condtionalA1;
_Bool _if_conditional96;
_Bool __result43__;
void* right_value44;
struct CVALUE* cvalue_33;
void* right_value45;
void* right_value46;
struct sType* type2_34;
void* right_value47;
char* type_name_37;
void* right_value48;
void* right_value49;
char* __dec_obj26;
_Bool _if_conditional99;
void* right_value50;
char* __dec_obj27;
void* right_value51;
struct sType* __dec_obj28;
_Bool __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_24, 0, sizeof(struct sType*));
memset(&right_value41, 0, sizeof(void*));
memset(&come_value_25, 0, sizeof(struct CVALUE*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
memset(&num_string_26, 0, sizeof(struct buffer*));
memset(&o2_saved_27, 0, sizeof(struct list$1sNodeph*));
memset(&it_30, 0, sizeof(struct sNode*));
memset(&right_value44, 0, sizeof(void*));
memset(&cvalue_33, 0, sizeof(struct CVALUE*));
memset(&right_value45, 0, sizeof(void*));
memset(&right_value46, 0, sizeof(void*));
memset(&type2_34, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&type_name_37, 0, sizeof(char*));
memset(&right_value48, 0, sizeof(void*));
memset(&right_value49, 0, sizeof(void*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value51, 0, sizeof(void*));
    type_24=((struct sNewNode*)come_null_check(self, "21obj.c", 83))->type;
    __freed_obj__ = 0;
    come_value_25=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value41=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 85))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value41;
    __freed_obj__ = 0;
    num_string_26=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value42=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 87))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value42;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value43);
    if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value43;
    __freed_obj__ = 0;
    buffer_append_str(((struct buffer*)come_null_check(num_string_26, "21obj.c", 89)),"1");
    __freed_obj__ = 0;
    for(
    o2_saved_27=(struct list$1sNodeph*)come_increment_ref_count((((struct sType*)come_null_check(type_24, "21obj.c", 102))->mArrayNum)),it_30=list$1sNodeph_begin(((struct list$1sNodeph*)come_null_check((o2_saved_27), "21obj.c", 102))) ,    __freed_obj__ = 0, 
    0;    _for_condtionalA1=    !list$1sNodeph_end(((struct list$1sNodeph*)come_null_check((o2_saved_27), "21obj.c", 102))) ,    __freed_obj__ = 0, 
    _for_condtionalA1;    it_30=list$1sNodeph_next(((struct list$1sNodeph*)come_null_check((o2_saved_27), "21obj.c", 102))) ,    __freed_obj__ = 0, 
    0    ){
        if(_if_conditional96=!((struct sNode*)come_null_check(it_30, "21obj.c", 96))->compile(((struct sNode*)come_null_check(it_30, "21obj.c", 96))->_protocol_obj,info),        __freed_obj__ = 0, 
        _if_conditional96) {
            __result43__ = (_Bool)0;
            if(o2_saved_27 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_27, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_25 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_25, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_26 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_26, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            return __result43__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        cvalue_33=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value44=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
        if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value44;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        __freed_obj__ = 0;
        buffer_append_str(((struct buffer*)come_null_check(num_string_26, "21obj.c", 99)),((char*)(right_value45=xsprintf("*(%s)",((struct CVALUE*)come_null_check(cvalue_33, "21obj.c", 99))->c_value))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value45;
        __freed_obj__ = 0;
        if(cvalue_33 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,cvalue_33, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_27 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_27, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    type2_34=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type_24,((struct sInfo*)come_null_check(info, "21obj.c", 102))->generics_type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value46);
    if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value46;
    __freed_obj__ = 0;
    list$1sNodeph_reset(((struct list$1sNodeph*)come_null_check(((struct sType*)come_null_check(type2_34, "21obj.c", 109))->mArrayNum, "21obj.c", 109)));
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_37=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 111),((struct optional$2charphbool*)(right_value47=make_type_name_string(type2_34,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value47);
    if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value47;
    __freed_obj__ = 0;
    __dec_obj26=((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 113))->c_value;
    ((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 113))->c_value=(char*)come_increment_ref_count(((char*)(right_value49=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d)",type_name_37,type_name_37,((char*)(right_value48=buffer_to_string(((struct buffer*)come_null_check(num_string_26, "21obj.c", 113))))),((struct sInfo*)come_null_check(info, "21obj.c", 113))->sname,((struct sInfo*)come_null_check(info, "21obj.c", 113))->sline))));
    if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value48);
    if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value48;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { right_value49 = come_decrement_ref_count(right_value49, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value49;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_34, "21obj.c", 115))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_34, "21obj.c", 116))->mPointerNum++;
    __freed_obj__ = 0;
    if(_if_conditional99=((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_34, "21obj.c", 123))->mNoSolvedGenericsType, "21obj.c", 123))->v1,    __freed_obj__ = 0, 
    _if_conditional99) {
        ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_34, "21obj.c", 119))->mNoSolvedGenericsType, "21obj.c", 119))->v1, "21obj.c", 119))->mPointerNum++;
        __freed_obj__ = 0;
        ((struct sType*)come_null_check(((struct tuple1$1sTypeph*)come_null_check(((struct sType*)come_null_check(type2_34, "21obj.c", 120))->mNoSolvedGenericsType, "21obj.c", 120))->v1, "21obj.c", 120))->mHeap=(_Bool)1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __dec_obj27=((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 123))->c_value;
    ((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 123))->c_value=(char*)come_increment_ref_count(((char*)(right_value50=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 123))->c_value,(struct sType*)come_increment_ref_count(type2_34),info))));
    if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value50;
    __freed_obj__ = 0;
    __dec_obj28=((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 124))->type;
    ((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 124))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value51=sType_clone(type2_34))));
    if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value51;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 125))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_25, "21obj.c", 127))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 129))->stack, "21obj.c", 129)),(struct CVALUE*)come_increment_ref_count(come_value_25));
    __freed_obj__ = 0;
    __result47__ = (_Bool)1;
    if(come_value_25 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_26 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_26, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_34, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_37 && !__freed_obj__) { type_name_37 = come_decrement_ref_count(type_name_37, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result47__;
    __freed_obj__ = 0;
    if(come_value_25 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_26 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_26, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_34 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_34, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_37 && !__freed_obj__) { type_name_37 = come_decrement_ref_count(type_name_37, (void*)0, (void*)0, 0, 0, 0); }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional90;
_Bool _if_conditional91;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional90=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->c_value!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional90) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value && !__freed_obj__) { ((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value = come_decrement_ref_count(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 0))->c_value, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional91=self!=((void*)0)&&((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 2))->type!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional91) {
            if(((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct CVALUE*)come_null_check(self, "CVALUE_finalize", 1))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional92;
struct sNode* result_28;
struct sNode* __result36__;
_Bool _if_conditional93;
struct sNode* __result37__;
struct sNode* result_29;
struct sNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_28, 0, sizeof(struct sNode*));
memset(&result_29, 0, sizeof(struct sNode*));
        if(_if_conditional92=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional92) {
            __freed_obj__ = 0;
            memset(&result_28,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result36__ = __result_obj__ = result_28;
            __freed_obj__ = 0;
            return __result36__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->it=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 336))->head;
        __freed_obj__ = 0;
        if(_if_conditional93=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 342))->it,        __freed_obj__ = 0, 
        _if_conditional93) {
            __result37__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 339))->it, "./comelang2.h", 339))->item;
            __freed_obj__ = 0;
            return __result37__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_29,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result38__ = __result_obj__ = result_29;
        __freed_obj__ = 0;
        return __result38__;
        __freed_obj__ = 0;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result39__ = self==((void*)0)||((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 366))->it==((void*)0);
        __freed_obj__ = 0;
        return __result39__;
        __freed_obj__ = 0;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional94;
struct sNode* result_31;
struct sNode* __result40__;
_Bool _if_conditional95;
struct sNode* __result41__;
struct sNode* result_32;
struct sNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_31, 0, sizeof(struct sNode*));
memset(&result_32, 0, sizeof(struct sNode*));
        if(_if_conditional94=self==((void*)0),        __freed_obj__ = 0, 
        _if_conditional94) {
            __freed_obj__ = 0;
            memset(&result_31,0,sizeof(struct sNode*));
            __freed_obj__ = 0;
            __result40__ = __result_obj__ = result_31;
            __freed_obj__ = 0;
            return __result40__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it=((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 354))->it, "./comelang2.h", 354))->next;
        __freed_obj__ = 0;
        if(_if_conditional95=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 360))->it,        __freed_obj__ = 0, 
        _if_conditional95) {
            __result41__ = __result_obj__ = ((struct list_item$1sNodeph*)come_null_check(((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 357))->it, "./comelang2.h", 357))->item;
            __freed_obj__ = 0;
            return __result41__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __freed_obj__ = 0;
        memset(&result_32,0,sizeof(struct sNode*));
        __freed_obj__ = 0;
        __result42__ = __result_obj__ = result_32;
        __freed_obj__ = 0;
        return __result42__;
        __freed_obj__ = 0;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1sNodeph* it_35;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_36;
struct list$1sNodeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_35, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_36, 0, sizeof(struct list_item$1sNodeph*));
        it_35=((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 476))->head;
        __freed_obj__ = 0;
        while(_while_condtional7=it_35!=((void*)0),        __freed_obj__ = 0, 
        _while_condtional7) {
            prev_it_36=it_35;
            __freed_obj__ = 0;
            it_35=((struct list_item$1sNodeph*)come_null_check(it_35, "./comelang2.h", 479))->next;
            __freed_obj__ = 0;
            if(prev_it_36 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 483))->head=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 484))->tail=((void*)0);
        __freed_obj__ = 0;
        ((struct list$1sNodeph*)come_null_check(self, "./comelang2.h", 486))->len=0;
        __freed_obj__ = 0;
        __result44__ = __result_obj__ = self;
        __freed_obj__ = 0;
        return __result44__;
        __freed_obj__ = 0;
}

static char* optional$2charphbool_expect(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional97=!((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v2,        __freed_obj__ = 0, 
        _if_conditional97) {
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
        __result45__ = __result_obj__ = ((struct optional$2charphbool*)come_null_check(self, "./comelang2.h", 76))->v1;
        __freed_obj__ = 0;
        return __result45__;
        __freed_obj__ = 0;
}

static void optional$2charphboolp_finalize(struct optional$2charphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional98;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional98=self!=((void*)0)&&((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 1))->v1!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional98) {
            if(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2charphbool*)come_null_check(self, "optional$2charphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional100;
void* right_value52;
struct list_item$1CVALUEph* litem_38;
struct CVALUE* __dec_obj29;
_Bool _if_conditional102;
void* right_value53;
struct list_item$1CVALUEph* litem_39;
struct CVALUE* __dec_obj30;
void* right_value54;
struct list_item$1CVALUEph* litem_40;
struct CVALUE* __dec_obj31;
struct list$1CVALUEph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value52, 0, sizeof(void*));
memset(&litem_38, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value53, 0, sizeof(void*));
memset(&litem_39, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value54, 0, sizeof(void*));
memset(&litem_40, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional100=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==0,        __freed_obj__ = 0, 
        _if_conditional100) {
            litem_38=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value52=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 272))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
            if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value52;
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_38, "./comelang2.h", 274))->prev=((void*)0);
            __freed_obj__ = 0;
            ((struct list_item$1CVALUEph*)come_null_check(litem_38, "./comelang2.h", 275))->next=((void*)0);
            __freed_obj__ = 0;
            __dec_obj29=((struct list_item$1CVALUEph*)come_null_check(litem_38, "./comelang2.h", 276))->item;
            ((struct list_item$1CVALUEph*)come_null_check(litem_38, "./comelang2.h", 276))->item=(struct CVALUE*)come_increment_ref_count(item);
            if(__dec_obj29) { come_call_finalizer(CVALUE_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 278))->tail=litem_38;
            __freed_obj__ = 0;
            ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 279))->head=litem_38;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional102=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len==1,            __freed_obj__ = 0, 
            _if_conditional102) {
                litem_39=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value53=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_39, "./comelang2.h", 284))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 284))->head;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_39, "./comelang2.h", 285))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj30=((struct list_item$1CVALUEph*)come_null_check(litem_39, "./comelang2.h", 286))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_39, "./comelang2.h", 286))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj30) { come_call_finalizer(CVALUE_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 288))->tail=litem_39;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 289))->head, "./comelang2.h", 289))->next=litem_39;
                __freed_obj__ = 0;
            }
            else {
                litem_40=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value54=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_40, "./comelang2.h", 294))->prev=((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 294))->tail;
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(litem_40, "./comelang2.h", 295))->next=((void*)0);
                __freed_obj__ = 0;
                __dec_obj31=((struct list_item$1CVALUEph*)come_null_check(litem_40, "./comelang2.h", 296))->item;
                ((struct list_item$1CVALUEph*)come_null_check(litem_40, "./comelang2.h", 296))->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj31) { come_call_finalizer(CVALUE_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
                ((struct list_item$1CVALUEph*)come_null_check(((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 298))->tail, "./comelang2.h", 298))->next=litem_40;
                __freed_obj__ = 0;
                ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 299))->tail=litem_40;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        ((struct list$1CVALUEph*)come_null_check(self, "./comelang2.h", 302))->len++;
        __freed_obj__ = 0;
        __result46__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        __freed_obj__ = 0;
        return __result46__;
        __freed_obj__ = 0;
        if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional101;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional101=self!=((void*)0)&&((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 1))->item!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional101) {
                    if(((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,((struct list_item$1CVALUEph*)come_null_check(self, "list_item$1CVALUEphp_finalize", 0))->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

struct sNode* create_object(struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value55;
void* right_value56;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value60;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&right_value60, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 136);
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value56=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value55=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 136)))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNewNode_sline;
    _inf_value1->sname=(void*)sNewNode_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result50__ = __result_obj__ = ((struct sNode*)(right_value60=_inf_value1));
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value55;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value56);
    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value56;
    __freed_obj__ = 0;
    return __result50__;
    __freed_obj__ = 0;
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value61;
struct sNode* __dec_obj34;
void* right_value62;
struct sType* __dec_obj35;
void* right_value63;
char* __dec_obj36;
struct sImplementsNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
    __dec_obj34=((struct sImplementsNode*)come_null_check(self, "21obj.c", 149))->obj_exp;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 149))->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value61=sNode_clone(obj_exp))));
    if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
    if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, ((struct sNode*)right_value61)->finalize, ((struct sNode*)right_value61)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value61;
    __freed_obj__ = 0;
    __dec_obj35=((struct sImplementsNode*)come_null_check(self, "21obj.c", 150))->inf_type;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 150))->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value62=sType_clone(inf_type))));
    if(__dec_obj35) { come_call_finalizer(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
    if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value62;
    __freed_obj__ = 0;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 152))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 152))->sline;
    __freed_obj__ = 0;
    __dec_obj36=((struct sImplementsNode*)come_null_check(self, "21obj.c", 153))->sname;
    ((struct sImplementsNode*)come_null_check(self, "21obj.c", 153))->sname=(char*)come_increment_ref_count(((char*)(right_value63=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 153))->sname))));
    if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value63);
    if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value63;
    __freed_obj__ = 0;
    __result51__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj_exp && !__freed_obj__) { obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0); } 
    if(inf_type && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result51__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(obj_exp && !__freed_obj__) { obj_exp = come_decrement_ref_count(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0); } 
    if(inf_type && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result52__ = ((struct sImplementsNode*)come_null_check(self, "21obj.c", 160))->sline;
    __freed_obj__ = 0;
    return __result52__;
    __freed_obj__ = 0;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value64;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value64, 0, sizeof(void*));
    __result53__ = __result_obj__ = ((char*)(right_value64=__builtin_string(((struct sImplementsNode*)come_null_check(self, "21obj.c", 165))->sname)));
    __freed_obj__ = 0;
    return __result53__;
    __freed_obj__ = 0;
}

_Bool sImplementsNode_terminated(){
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

char* sImplementsNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value65;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value65, 0, sizeof(void*));
    __result55__ = __result_obj__ = ((char*)(right_value65=__builtin_string("sImplementsNode")));
    __freed_obj__ = 0;
    return __result55__;
    __freed_obj__ = 0;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value66;
struct sNode* obj_exp_42;
void* right_value67;
struct sType* inf_type_43;
_Bool _if_conditional112;
_Bool __result56__;
void* right_value68;
struct CVALUE* come_value_44;
void* right_value69;
struct sType* type_45;
struct sClass* klass_46;
void* right_value70;
struct CVALUE* come_value2_47;
void* right_value71;
struct sType* type2_48;
void* right_value72;
char* type_name_49;
void* right_value73;
char* type_name2_50;
static int inf_num_51=0;
void* right_value74;
char* buf_52;
void* right_value75;
char* buf2_53;
void* right_value76;
struct sType* typeX_54;
void* right_value77;
void* right_value78;
int i_55;
_Bool _for_condtionalA2;
void* right_value83;
struct tuple2$2charphsTypeph* multiple_assgin_var1;
char* name_60;
struct sType* field_type_61;
void* right_value84;
char* method_name_62;
void* right_value85;
char* __dec_obj38;
void* right_value86;
struct sType* type3_63;
void* right_value87;
struct sType* __dec_obj39;
void* right_value88;
char* __dec_obj40;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&obj_exp_42, 0, sizeof(struct sNode*));
memset(&right_value67, 0, sizeof(void*));
memset(&inf_type_43, 0, sizeof(struct sType*));
memset(&right_value68, 0, sizeof(void*));
memset(&come_value_44, 0, sizeof(struct CVALUE*));
memset(&right_value69, 0, sizeof(void*));
memset(&type_45, 0, sizeof(struct sType*));
memset(&klass_46, 0, sizeof(struct sClass*));
memset(&right_value70, 0, sizeof(void*));
memset(&come_value2_47, 0, sizeof(struct CVALUE*));
memset(&right_value71, 0, sizeof(void*));
memset(&type2_48, 0, sizeof(struct sType*));
memset(&right_value72, 0, sizeof(void*));
memset(&type_name_49, 0, sizeof(char*));
memset(&right_value73, 0, sizeof(void*));
memset(&type_name2_50, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&buf_52, 0, sizeof(char*));
memset(&right_value75, 0, sizeof(void*));
memset(&buf2_53, 0, sizeof(char*));
memset(&right_value76, 0, sizeof(void*));
memset(&typeX_54, 0, sizeof(struct sType*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&i_55, 0, sizeof(int));
memset(&right_value83, 0, sizeof(void*));
memset(&name_60, 0, sizeof(char*));
memset(&field_type_61, 0, sizeof(struct sType*));
memset(&name_60, 0, sizeof(char*));
memset(&field_type_61, 0, sizeof(struct sType*));
memset(&right_value84, 0, sizeof(void*));
memset(&method_name_62, 0, sizeof(char*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&type3_63, 0, sizeof(struct sType*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
    obj_exp_42=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value66=sNode_clone(((struct sImplementsNode*)come_null_check(self, "21obj.c", 180))->obj_exp))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
    if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, ((struct sNode*)right_value66)->finalize, ((struct sNode*)right_value66)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value66;
    __freed_obj__ = 0;
    inf_type_43=(struct sType*)come_increment_ref_count(((struct sType*)(right_value67=sType_clone(((struct sImplementsNode*)come_null_check(self, "21obj.c", 181))->inf_type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value67);
    if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value67;
    __freed_obj__ = 0;
    if(_if_conditional112=!((struct sNode*)come_null_check(obj_exp_42, "21obj.c", 187))->compile(((struct sNode*)come_null_check(obj_exp_42, "21obj.c", 187))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional112) {
        __result56__ = (_Bool)0;
        if(obj_exp_42 && !__freed_obj__) { obj_exp_42 = come_decrement_ref_count(obj_exp_42, ((struct sNode*)obj_exp_42)->finalize, ((struct sNode*)obj_exp_42)->_protocol_obj, 0, 0, 0); } 
        if(inf_type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = 0;
        return __result56__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_44=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value68=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value68);
    if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value68;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_45=(struct sType*)come_increment_ref_count(((struct sType*)(right_value69=sType_clone(((struct CVALUE*)come_null_check(come_value_44, "21obj.c", 190))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value69);
    if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value69;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_45, "21obj.c", 191))->mPointerNum--;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type_45, "21obj.c", 192))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    klass_46=((struct sType*)come_null_check(inf_type_43, "21obj.c", 194))->mClass;
    __freed_obj__ = 0;
    come_value2_47=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value70=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 196))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value70);
    if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value70;
    __freed_obj__ = 0;
    type2_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value71=sType_clone(inf_type_43))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value71);
    if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value71;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_49=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 200),((struct optional$2charphbool*)(right_value72=make_type_name_string(inf_type_43,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value72);
    if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[6] = right_value72;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name2_50=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 201),((struct optional$2charphbool*)(right_value73=make_type_name_string(type_45,(_Bool)0,(_Bool)1,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value73);
    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[7] = right_value73;
    __freed_obj__ = 0;
    __freed_obj__ = 0;
    buf_52=(char*)come_increment_ref_count(((char*)(right_value74=xsprintf("%s* _inf_value%d;\n",type_name_49,++inf_num_51))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value74);
    if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[8] = right_value74;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,buf_52);
    __freed_obj__ = 0;
    buf2_53=(char*)come_increment_ref_count(((char*)(right_value75=xsprintf("%s* _inf_obj_value%d;\n",type_name2_50,inf_num_51))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value75);
    if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[9] = right_value75;
    __freed_obj__ = 0;
    add_come_code_at_function_head(info,buf2_53);
    __freed_obj__ = 0;
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d);\n",inf_num_51,type_name_49,type_name_49,((struct sInfo*)come_null_check(info, "21obj.c", 210))->sname,((struct sInfo*)come_null_check(info, "21obj.c", 210))->sline);
    __freed_obj__ = 0;
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_51,((struct CVALUE*)come_null_check(come_value_44, "21obj.c", 211))->c_value);
    __freed_obj__ = 0;
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_51,inf_num_51);
    __freed_obj__ = 0;
    typeX_54=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(type_45))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value76);
    if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[10] = right_value76;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(typeX_54, "21obj.c", 215))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct tuple2$2sFunpcharph*)(right_value77=create_finalizer_automatically(typeX_54,"finalize",info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value77);
    if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[11] = right_value77;
    __freed_obj__ = 0;
    ((struct tuple2$2sFunpcharph*)(right_value78=create_cloner_automatically(typeX_54,"clone",info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value78);
    if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[12] = right_value78;
    __freed_obj__ = 0;
    for(
    i_55=1 ,    __freed_obj__ = 0, 
    0;    _for_condtionalA2=    i_55<list$1tuple2$2charphsTypephph_length(((struct list$1tuple2$2charphsTypephph*)come_null_check(((struct sClass*)come_null_check(klass_46, "21obj.c", 228))->mFields, "21obj.c", 228))) ,    __freed_obj__ = 0, 
    _for_condtionalA2;    i_55++ ,    __freed_obj__ = 0, 
    0    ){
        come_clear_stackframe();
        multiple_assgin_var1=optional$2tuple2$2charphsTypephphbool_value((come_push_stackframe("21obj.c", 221),((struct optional$2tuple2$2charphsTypephphbool*)(right_value83=list$1tuple2$2charphsTypephphp_operator_load_element(((struct sClass*)come_null_check(klass_46, "21obj.c", 221))->mFields,i_55)))));
        name_60=(char*)come_increment_ref_count(multiple_assgin_var1->v1);
        field_type_61=(struct sType*)come_increment_ref_count(multiple_assgin_var1->v2);
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphsTypephphboolp_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value83;
        __freed_obj__ = 0;
        method_name_62=(char*)come_increment_ref_count(((char*)(right_value84=create_method_name(type_45,(_Bool)0,name_60,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value84;
        __freed_obj__ = 0;
        add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_51,name_60,method_name_62);
        __freed_obj__ = 0;
        if(name_60 && !__freed_obj__) { name_60 = come_decrement_ref_count(name_60, (void*)0, (void*)0, 0, 0, 0); }
        if(field_type_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,field_type_61, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(method_name_62 && !__freed_obj__) { method_name_62 = come_decrement_ref_count(method_name_62, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __dec_obj38=((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 228))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 228))->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("_inf_value%d",inf_num_51))));
    if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 13, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[13] = right_value85;
    __freed_obj__ = 0;
    type3_63=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(inf_type_43))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 14, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[14] = right_value86;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_63, "21obj.c", 230))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type3_63, "21obj.c", 231))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(type2_48, "21obj.c", 232))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    __dec_obj39=((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 233))->type;
    ((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 233))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(type2_48))));
    if(__dec_obj39) { come_call_finalizer(sType_finalize,__dec_obj39, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 15, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[15] = right_value87;
    __freed_obj__ = 0;
    __dec_obj40=((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 234))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 234))->c_value=(char*)come_increment_ref_count(((char*)(right_value88=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 234))->c_value,(struct sType*)come_increment_ref_count(type3_63),info))));
    if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 16, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[16] = right_value88;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 235))->type, "21obj.c", 235))->mPointerNum++;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 236))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_47, "21obj.c", 238))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 240))->stack, "21obj.c", 240)),(struct CVALUE*)come_increment_ref_count(come_value2_47));
    __freed_obj__ = 0;
    __result63__ = (_Bool)1;
    if(obj_exp_42 && !__freed_obj__) { obj_exp_42 = come_decrement_ref_count(obj_exp_42, ((struct sNode*)obj_exp_42)->finalize, ((struct sNode*)obj_exp_42)->_protocol_obj, 0, 0, 0); } 
    if(inf_type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_44 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_45 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_47 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_47, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_49 && !__freed_obj__) { type_name_49 = come_decrement_ref_count(type_name_49, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name2_50 && !__freed_obj__) { type_name2_50 = come_decrement_ref_count(type_name2_50, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_52 && !__freed_obj__) { buf_52 = come_decrement_ref_count(buf_52, (void*)0, (void*)0, 0, 0, 0); }
    if(buf2_53 && !__freed_obj__) { buf2_53 = come_decrement_ref_count(buf2_53, (void*)0, (void*)0, 0, 0, 0); }
    if(typeX_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,typeX_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type3_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_63, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result63__;
    __freed_obj__ = 0;
    if(obj_exp_42 && !__freed_obj__) { obj_exp_42 = come_decrement_ref_count(obj_exp_42, ((struct sNode*)obj_exp_42)->finalize, ((struct sNode*)obj_exp_42)->_protocol_obj, 0, 0, 0); } 
    if(inf_type_43 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_43, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_44 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_44, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_45 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_45, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_47 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_47, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_48 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_48, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_49 && !__freed_obj__) { type_name_49 = come_decrement_ref_count(type_name_49, (void*)0, (void*)0, 0, 0, 0); }
    if(type_name2_50 && !__freed_obj__) { type_name2_50 = come_decrement_ref_count(type_name2_50, (void*)0, (void*)0, 0, 0, 0); }
    if(buf_52 && !__freed_obj__) { buf_52 = come_decrement_ref_count(buf_52, (void*)0, (void*)0, 0, 0, 0); }
    if(buf2_53 && !__freed_obj__) { buf2_53 = come_decrement_ref_count(buf2_53, (void*)0, (void*)0, 0, 0, 0); }
    if(typeX_54 && !__freed_obj__) { come_call_finalizer(sType_finalize,typeX_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type3_63 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_63, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional113=self!=((void*)0)&&((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 1))->v2!=((void*)0),        __freed_obj__ = 0, 
        _if_conditional113) {
            if(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 && !__freed_obj__) { ((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2 = come_decrement_ref_count(((struct tuple2$2sFunpcharph*)come_null_check(self, "tuple2$2sFunpcharphp_finalize", 0))->v2, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result57__ = ((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 410))->len;
        __freed_obj__ = 0;
        return __result57__;
        __freed_obj__ = 0;
}

static struct optional$2tuple2$2charphsTypephphbool* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional114;
struct list_item$1tuple2$2charphsTypephph* it_56;
int i_57;
_Bool _while_condtional8;
_Bool _if_conditional115;
void* right_value79;
void* right_value80;
struct optional$2tuple2$2charphsTypephphbool* __result59__;
struct tuple2$2charphsTypeph* default_value_58;
void* right_value81;
void* right_value82;
struct optional$2tuple2$2charphsTypephphbool* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_56, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_57, 0, sizeof(int));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&default_value_58, 0, sizeof(struct tuple2$2charphsTypeph*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
            if(_if_conditional114=position<0,            __freed_obj__ = 0, 
            _if_conditional114) {
                position+=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 735))->len;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            it_56=((struct list$1tuple2$2charphsTypephph*)come_null_check(self, "./comelang2.h", 738))->head;
            __freed_obj__ = 0;
            i_57=0;
            __freed_obj__ = 0;
            while(_while_condtional8=it_56!=((void*)0),            __freed_obj__ = 0, 
            _while_condtional8) {
                if(_if_conditional115=position==i_57,                __freed_obj__ = 0, 
                _if_conditional115) {
                    __result59__ = __result_obj__ = ((struct optional$2tuple2$2charphsTypephphbool*)(right_value80=optional$2tuple2$2charphsTypephphbool_initialize((struct optional$2tuple2$2charphsTypephphbool*)come_increment_ref_count(((struct optional$2tuple2$2charphsTypephphbool*)(right_value79=(struct optional$2tuple2$2charphsTypephphbool*)come_calloc(1, sizeof(struct optional$2tuple2$2charphsTypephphbool)*(1), "./comelang2.h", 742)))),(struct tuple2$2charphsTypeph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_56, "./comelang2.h", 742))->item),(_Bool)1)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                    if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value79;
                    __freed_obj__ = 0;
                    return __result59__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                it_56=((struct list_item$1tuple2$2charphsTypephph*)come_null_check(it_56, "./comelang2.h", 744))->next;
                __freed_obj__ = 0;
                i_57++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __freed_obj__ = 0;
            memset(&default_value_58,0,sizeof(struct tuple2$2charphsTypeph*));
            __freed_obj__ = 0;
            __result60__ = __result_obj__ = (come_save_stackframe("./comelang2.h", 750), ((struct optional$2tuple2$2charphsTypephphbool*)(right_value82=optional$2tuple2$2charphsTypephphbool_initialize(((struct optional$2tuple2$2charphsTypephphbool*)(right_value81=(struct optional$2tuple2$2charphsTypephphbool*)come_calloc(1, sizeof(struct optional$2tuple2$2charphsTypephphbool)*(1), "./comelang2.h", 750))),(struct tuple2$2charphsTypeph*)come_increment_ref_count(default_value_58),(_Bool)0))));
            if(default_value_58 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
            if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value81;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
            if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphsTypephphboolp_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value82;
            __freed_obj__ = 0;
            return __result60__;
            __freed_obj__ = 0;
            if(default_value_58 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct optional$2tuple2$2charphsTypephphbool* optional$2tuple2$2charphsTypephphbool_initialize(struct optional$2tuple2$2charphsTypephphbool* self, struct tuple2$2charphsTypeph* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct tuple2$2charphsTypeph* __dec_obj37;
struct optional$2tuple2$2charphsTypephphbool* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        __dec_obj37=((struct optional$2tuple2$2charphsTypephphbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                        ((struct optional$2tuple2$2charphsTypephphbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct tuple2$2charphsTypeph*)come_increment_ref_count(v1);
                        if(__dec_obj37) { come_call_finalizer(tuple2$2charphsTypeph_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                        ((struct optional$2tuple2$2charphsTypephphbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                        __freed_obj__ = 0;
                        __result58__ = __result_obj__ = self;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphsTypephphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result58__;
                        __freed_obj__ = 0;
                        if(self && !__freed_obj__) { come_call_finalizer(optional$2tuple2$2charphsTypephphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                        if(v1 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional116;
_Bool _if_conditional117;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional116=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional116) {
                                if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional117=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 2))->v2!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional117) {
                                if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypeph_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void optional$2tuple2$2charphsTypephphboolp_finalize(struct optional$2tuple2$2charphsTypephphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional118=self!=((void*)0)&&((struct optional$2tuple2$2charphsTypephphbool*)come_null_check(self, "optional$2tuple2$2charphsTypephphboolp_finalize", 1))->v1!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional118) {
                                if(((struct optional$2tuple2$2charphsTypephphbool*)come_null_check(self, "optional$2tuple2$2charphsTypephphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple2$2charphsTypephp_finalize,((struct optional$2tuple2$2charphsTypephphbool*)come_null_check(self, "optional$2tuple2$2charphsTypephphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional119=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v1!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional119) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 && !__freed_obj__) { ((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1 = come_decrement_ref_count(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional120=self!=((void*)0)&&((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 2))->v2!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional120) {
                                        if(((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2charphsTypeph*)come_null_check(self, "tuple2$2charphsTypephp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct tuple2$2charphsTypeph* optional$2tuple2$2charphsTypephphbool_value(struct optional$2tuple2$2charphsTypephphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional121;
struct tuple2$2charphsTypeph* default_value_59;
struct tuple2$2charphsTypeph* __result61__;
struct tuple2$2charphsTypeph* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_59, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional121=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional121) {
                __freed_obj__ = 0;
                memset(&default_value_59,0,sizeof(struct tuple2$2charphsTypeph*));
                __freed_obj__ = 0;
                __result61__ = __result_obj__ = default_value_59;
                __freed_obj__ = 0;
                return __result61__;
                __freed_obj__ = 0;
            }
            else {
                __result62__ = __result_obj__ = ((struct optional$2tuple2$2charphsTypephphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result62__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
char* __dec_obj41;
struct sTrueNode* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
    ((struct sTrueNode*)come_null_check(self, "21obj.c", 253))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 253))->sline;
    __freed_obj__ = 0;
    __dec_obj41=((struct sTrueNode*)come_null_check(self, "21obj.c", 254))->sname;
    ((struct sTrueNode*)come_null_check(self, "21obj.c", 254))->sname=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 254))->sname))));
    if(__dec_obj41) { __dec_obj41 = come_decrement_ref_count(__dec_obj41, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = 0;
    __result64__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result64__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result65__ = ((struct sTrueNode*)come_null_check(self, "21obj.c", 261))->sline;
    __freed_obj__ = 0;
    return __result65__;
    __freed_obj__ = 0;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value90;
char* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
    __result66__ = __result_obj__ = ((char*)(right_value90=__builtin_string(((struct sTrueNode*)come_null_check(self, "21obj.c", 266))->sname)));
    __freed_obj__ = 0;
    return __result66__;
    __freed_obj__ = 0;
}

_Bool sTrueNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result67__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result67__;
    __freed_obj__ = 0;
}

char* sTrueNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value91, 0, sizeof(void*));
    __result68__ = __result_obj__ = ((char*)(right_value91=__builtin_string("sTrueNode")));
    __freed_obj__ = 0;
    return __result68__;
    __freed_obj__ = 0;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value92;
struct CVALUE* come_value_64;
void* right_value93;
char* __dec_obj42;
void* right_value94;
void* right_value95;
struct sType* __dec_obj43;
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value92, 0, sizeof(void*));
memset(&come_value_64, 0, sizeof(struct CVALUE*));
memset(&right_value93, 0, sizeof(void*));
memset(&right_value94, 0, sizeof(void*));
memset(&right_value95, 0, sizeof(void*));
    come_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value92=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 281))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value92;
    __freed_obj__ = 0;
    __dec_obj42=((struct CVALUE*)come_null_check(come_value_64, "21obj.c", 283))->c_value;
    ((struct CVALUE*)come_null_check(come_value_64, "21obj.c", 283))->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("(_Bool)1"))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value93;
    __freed_obj__ = 0;
    __dec_obj43=((struct CVALUE*)come_null_check(come_value_64, "21obj.c", 284))->type;
    ((struct CVALUE*)come_null_check(come_value_64, "21obj.c", 284))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value94=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 284)))),"bool",(_Bool)0,info))));
    if(__dec_obj43) { come_call_finalizer(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value94;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value95;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_64, "21obj.c", 285))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_64, "21obj.c", 287))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 289))->stack, "21obj.c", 289)),(struct CVALUE*)come_increment_ref_count(come_value_64));
    __freed_obj__ = 0;
    __result69__ = (_Bool)1;
    if(come_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result69__;
    __freed_obj__ = 0;
    if(come_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
void* right_value97;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value100;
struct sNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value100, 0, sizeof(void*));
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 296);
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value97=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value96=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 296)))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sTrueNode_sline;
    _inf_value2->sname=(void*)sTrueNode_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result72__ = __result_obj__ = ((struct sNode*)(right_value100=_inf_value2));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value97;
    __freed_obj__ = 0;
    return __result72__;
    __freed_obj__ = 0;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value101;
char* __dec_obj45;
struct sFalseNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value101, 0, sizeof(void*));
    ((struct sFalseNode*)come_null_check(self, "21obj.c", 306))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 306))->sline;
    __freed_obj__ = 0;
    __dec_obj45=((struct sFalseNode*)come_null_check(self, "21obj.c", 307))->sname;
    ((struct sFalseNode*)come_null_check(self, "21obj.c", 307))->sname=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 307))->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { right_value101 = come_decrement_ref_count(right_value101, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value101;
    __freed_obj__ = 0;
    __result73__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result73__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = ((struct sFalseNode*)come_null_check(self, "21obj.c", 314))->sline;
    __freed_obj__ = 0;
    return __result74__;
    __freed_obj__ = 0;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value102, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value102=__builtin_string(((struct sFalseNode*)come_null_check(self, "21obj.c", 319))->sname)));
    __freed_obj__ = 0;
    return __result75__;
    __freed_obj__ = 0;
}

_Bool sFalseNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result76__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result76__;
    __freed_obj__ = 0;
}

char* sFalseNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value103, 0, sizeof(void*));
    __result77__ = __result_obj__ = ((char*)(right_value103=__builtin_string("sFalseNode")));
    __freed_obj__ = 0;
    return __result77__;
    __freed_obj__ = 0;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value104;
struct CVALUE* come_value_66;
void* right_value105;
char* __dec_obj46;
void* right_value106;
void* right_value107;
struct sType* __dec_obj47;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value104, 0, sizeof(void*));
memset(&come_value_66, 0, sizeof(struct CVALUE*));
memset(&right_value105, 0, sizeof(void*));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
    come_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value104=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 334))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value104;
    __freed_obj__ = 0;
    __dec_obj46=((struct CVALUE*)come_null_check(come_value_66, "21obj.c", 336))->c_value;
    ((struct CVALUE*)come_null_check(come_value_66, "21obj.c", 336))->c_value=(char*)come_increment_ref_count(((char*)(right_value105=xsprintf("(_Bool)0"))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value105;
    __freed_obj__ = 0;
    __dec_obj47=((struct CVALUE*)come_null_check(come_value_66, "21obj.c", 337))->type;
    ((struct CVALUE*)come_null_check(come_value_66, "21obj.c", 337))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value107=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value106=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 337)))),"bool",(_Bool)0,info))));
    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value106;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value107;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_66, "21obj.c", 338))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_66, "21obj.c", 340))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 342))->stack, "21obj.c", 342)),(struct CVALUE*)come_increment_ref_count(come_value_66));
    __freed_obj__ = 0;
    __result78__ = (_Bool)1;
    if(come_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result78__;
    __freed_obj__ = 0;
    if(come_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value108;
void* right_value109;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value112;
struct sNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value112, 0, sizeof(void*));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 349);
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value109=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value108=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 349)))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sFalseNode_sline;
    _inf_value3->sname=(void*)sFalseNode_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result81__ = __result_obj__ = ((struct sNode*)(right_value112=_inf_value3));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value108;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value109;
    __freed_obj__ = 0;
    return __result81__;
    __freed_obj__ = 0;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value113;
struct sType* __dec_obj49;
void* right_value114;
char* __dec_obj50;
struct sSizeOfNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
    __dec_obj49=((struct sSizeOfNode*)come_null_check(self, "21obj.c", 360))->type;
    ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 360))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_clone(type))));
    if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value113;
    __freed_obj__ = 0;
    ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 362))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 362))->sline;
    __freed_obj__ = 0;
    __dec_obj50=((struct sSizeOfNode*)come_null_check(self, "21obj.c", 363))->sname;
    ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 363))->sname=(char*)come_increment_ref_count(((char*)(right_value114=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 363))->sname))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value114;
    __freed_obj__ = 0;
    __result82__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result82__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result83__ = ((struct sSizeOfNode*)come_null_check(self, "21obj.c", 370))->sline;
    __freed_obj__ = 0;
    return __result83__;
    __freed_obj__ = 0;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    __result84__ = __result_obj__ = ((char*)(right_value115=__builtin_string(((struct sSizeOfNode*)come_null_check(self, "21obj.c", 375))->sname)));
    __freed_obj__ = 0;
    return __result84__;
    __freed_obj__ = 0;
}

_Bool sSizeOfNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result85__;
    __freed_obj__ = 0;
}

char* sSizeOfNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sSizeOfNode")));
    __freed_obj__ = 0;
    return __result86__;
    __freed_obj__ = 0;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_68;
void* right_value117;
struct CVALUE* come_value_69;
void* right_value118;
struct sType* type2_70;
void* right_value119;
char* type_name_71;
void* right_value120;
char* __dec_obj51;
void* right_value121;
void* right_value122;
struct sType* __dec_obj52;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_68, 0, sizeof(struct sType*));
memset(&right_value117, 0, sizeof(void*));
memset(&come_value_69, 0, sizeof(struct CVALUE*));
memset(&right_value118, 0, sizeof(void*));
memset(&type2_70, 0, sizeof(struct sType*));
memset(&right_value119, 0, sizeof(void*));
memset(&type_name_71, 0, sizeof(char*));
memset(&right_value120, 0, sizeof(void*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value122, 0, sizeof(void*));
    type_68=((struct sSizeOfNode*)come_null_check(self, "21obj.c", 390))->type;
    __freed_obj__ = 0;
    come_value_69=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 392))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    type2_70=(struct sType*)come_increment_ref_count(((struct sType*)(right_value118=solve_generics(type_68,((struct sInfo*)come_null_check(info, "21obj.c", 394))->generics_type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value118;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_71=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 396),((struct optional$2charphbool*)(right_value119=make_type_name_string(type2_70,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value119;
    __freed_obj__ = 0;
    __dec_obj51=((struct CVALUE*)come_null_check(come_value_69, "21obj.c", 398))->c_value;
    ((struct CVALUE*)come_null_check(come_value_69, "21obj.c", 398))->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("sizeof(%s)",type_name_71))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value120;
    __freed_obj__ = 0;
    __dec_obj52=((struct CVALUE*)come_null_check(come_value_69, "21obj.c", 399))->type;
    ((struct CVALUE*)come_null_check(come_value_69, "21obj.c", 399))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value121=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 399)))),"long",(_Bool)0,info))));
    if(__dec_obj52) { come_call_finalizer(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value121;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value122;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_69, "21obj.c", 400))->type, "21obj.c", 400))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_69, "21obj.c", 401))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_69, "21obj.c", 403))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 405))->stack, "21obj.c", 405)),(struct CVALUE*)come_increment_ref_count(come_value_69));
    __freed_obj__ = 0;
    __result87__ = (_Bool)1;
    if(come_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_70 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_71 && !__freed_obj__) { type_name_71 = come_decrement_ref_count(type_name_71, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result87__;
    __freed_obj__ = 0;
    if(come_value_69 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_69, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_70 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_71 && !__freed_obj__) { type_name_71 = come_decrement_ref_count(type_name_71, (void*)0, (void*)0, 0, 0, 0); }
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value123;
struct sNode* __dec_obj53;
void* right_value124;
char* __dec_obj54;
struct sSizeOfExpNode* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
    __dec_obj53=((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 418))->exp;
    ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 418))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value123=sNode_clone(exp))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
    if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, ((struct sNode*)right_value123)->finalize, ((struct sNode*)right_value123)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value123;
    __freed_obj__ = 0;
    ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 420))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 420))->sline;
    __freed_obj__ = 0;
    __dec_obj54=((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 421))->sname;
    ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 421))->sname=(char*)come_increment_ref_count(((char*)(right_value124=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 421))->sname))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value124;
    __freed_obj__ = 0;
    __result88__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result88__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result89__ = ((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 428))->sline;
    __freed_obj__ = 0;
    return __result89__;
    __freed_obj__ = 0;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value125;
char* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value125, 0, sizeof(void*));
    __result90__ = __result_obj__ = ((char*)(right_value125=__builtin_string(((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 433))->sname)));
    __freed_obj__ = 0;
    return __result90__;
    __freed_obj__ = 0;
}

_Bool sSizeOfExpNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result91__;
    __freed_obj__ = 0;
}

char* sSizeOfExpNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
    __result92__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sSizeOfExpNode")));
    __freed_obj__ = 0;
    return __result92__;
    __freed_obj__ = 0;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_72;
_Bool _if_conditional136;
_Bool __result93__;
void* right_value127;
struct CVALUE* come_value_73;
void* right_value128;
struct CVALUE* come_value2_74;
void* right_value129;
char* __dec_obj55;
void* right_value130;
void* right_value131;
struct sType* __dec_obj56;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_72, 0, sizeof(struct sNode*));
memset(&right_value127, 0, sizeof(void*));
memset(&come_value_73, 0, sizeof(struct CVALUE*));
memset(&right_value128, 0, sizeof(void*));
memset(&come_value2_74, 0, sizeof(struct CVALUE*));
memset(&right_value129, 0, sizeof(void*));
memset(&right_value130, 0, sizeof(void*));
memset(&right_value131, 0, sizeof(void*));
    exp_72=(struct sNode*)come_increment_ref_count(((struct sSizeOfExpNode*)come_null_check(self, "21obj.c", 448))->exp);
    __freed_obj__ = 0;
    if(_if_conditional136=!((struct sNode*)come_null_check(exp_72, "21obj.c", 454))->compile(((struct sNode*)come_null_check(exp_72, "21obj.c", 454))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional136) {
        __result93__ = (_Bool)0;
        if(exp_72 && !__freed_obj__) { exp_72 = come_decrement_ref_count(exp_72, ((struct sNode*)exp_72)->finalize, ((struct sNode*)exp_72)->_protocol_obj, 0, 0, 0); } 
        __freed_obj__ = 0;
        return __result93__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value2_74=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 457))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value128;
    __freed_obj__ = 0;
    __dec_obj55=((struct CVALUE*)come_null_check(come_value2_74, "21obj.c", 459))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_74, "21obj.c", 459))->c_value=(char*)come_increment_ref_count(((char*)(right_value129=xsprintf("sizeof(%s)",((struct CVALUE*)come_null_check(come_value_73, "21obj.c", 459))->c_value))));
    if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value129;
    __freed_obj__ = 0;
    __dec_obj56=((struct CVALUE*)come_null_check(come_value2_74, "21obj.c", 460))->type;
    ((struct CVALUE*)come_null_check(come_value2_74, "21obj.c", 460))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value130=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 460)))),"long",(_Bool)0,info))));
    if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value130;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value131;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_74, "21obj.c", 461))->type, "21obj.c", 461))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_74, "21obj.c", 462))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_74, "21obj.c", 464))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 466))->stack, "21obj.c", 466)),(struct CVALUE*)come_increment_ref_count(come_value2_74));
    __freed_obj__ = 0;
    __result94__ = (_Bool)1;
    if(exp_72 && !__freed_obj__) { exp_72 = come_decrement_ref_count(exp_72, ((struct sNode*)exp_72)->finalize, ((struct sNode*)exp_72)->_protocol_obj, 0, 0, 0); } 
    if(come_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result94__;
    __freed_obj__ = 0;
    if(exp_72 && !__freed_obj__) { exp_72 = come_decrement_ref_count(exp_72, ((struct sNode*)exp_72)->finalize, ((struct sNode*)exp_72)->_protocol_obj, 0, 0, 0); } 
    if(come_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_74 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value132;
struct sType* __dec_obj57;
void* right_value133;
char* __dec_obj58;
struct sAlignOfNode* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value133, 0, sizeof(void*));
    __dec_obj57=((struct sAlignOfNode*)come_null_check(self, "21obj.c", 479))->type;
    ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 479))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value132=sType_clone(type))));
    if(__dec_obj57) { come_call_finalizer(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value132;
    __freed_obj__ = 0;
    ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 481))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 481))->sline;
    __freed_obj__ = 0;
    __dec_obj58=((struct sAlignOfNode*)come_null_check(self, "21obj.c", 482))->sname;
    ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 482))->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 482))->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
    if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value133;
    __freed_obj__ = 0;
    __result95__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result95__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = ((struct sAlignOfNode*)come_null_check(self, "21obj.c", 489))->sline;
    __freed_obj__ = 0;
    return __result96__;
    __freed_obj__ = 0;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value134;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value134, 0, sizeof(void*));
    __result97__ = __result_obj__ = ((char*)(right_value134=__builtin_string(((struct sAlignOfNode*)come_null_check(self, "21obj.c", 494))->sname)));
    __freed_obj__ = 0;
    return __result97__;
    __freed_obj__ = 0;
}

_Bool sAlignOfNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result98__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result98__;
    __freed_obj__ = 0;
}

char* sAlignOfNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value135;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value135, 0, sizeof(void*));
    __result99__ = __result_obj__ = ((char*)(right_value135=__builtin_string("sAlignOfNode")));
    __freed_obj__ = 0;
    return __result99__;
    __freed_obj__ = 0;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_75;
void* right_value136;
struct CVALUE* come_value_76;
void* right_value137;
struct sType* type2_77;
void* right_value138;
char* type_name_78;
void* right_value139;
char* __dec_obj59;
void* right_value140;
void* right_value141;
struct sType* __dec_obj60;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_75, 0, sizeof(struct sType*));
memset(&right_value136, 0, sizeof(void*));
memset(&come_value_76, 0, sizeof(struct CVALUE*));
memset(&right_value137, 0, sizeof(void*));
memset(&type2_77, 0, sizeof(struct sType*));
memset(&right_value138, 0, sizeof(void*));
memset(&type_name_78, 0, sizeof(char*));
memset(&right_value139, 0, sizeof(void*));
memset(&right_value140, 0, sizeof(void*));
memset(&right_value141, 0, sizeof(void*));
    type_75=((struct sAlignOfNode*)come_null_check(self, "21obj.c", 509))->type;
    __freed_obj__ = 0;
    come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 511))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    type2_77=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=solve_generics(type_75,((struct sInfo*)come_null_check(info, "21obj.c", 513))->generics_type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value137;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_78=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 515),((struct optional$2charphbool*)(right_value138=make_type_name_string(type2_77,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value138;
    __freed_obj__ = 0;
    __dec_obj59=((struct CVALUE*)come_null_check(come_value_76, "21obj.c", 517))->c_value;
    ((struct CVALUE*)come_null_check(come_value_76, "21obj.c", 517))->c_value=(char*)come_increment_ref_count(((char*)(right_value139=xsprintf("_Alignof(%s)",type_name_78))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value139;
    __freed_obj__ = 0;
    __dec_obj60=((struct CVALUE*)come_null_check(come_value_76, "21obj.c", 518))->type;
    ((struct CVALUE*)come_null_check(come_value_76, "21obj.c", 518))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value140=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 518)))),"long",(_Bool)0,info))));
    if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value140;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value141;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_76, "21obj.c", 519))->type, "21obj.c", 519))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_76, "21obj.c", 520))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_76, "21obj.c", 522))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 524))->stack, "21obj.c", 524)),(struct CVALUE*)come_increment_ref_count(come_value_76));
    __freed_obj__ = 0;
    __result100__ = (_Bool)1;
    if(come_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_78 && !__freed_obj__) { type_name_78 = come_decrement_ref_count(type_name_78, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result100__;
    __freed_obj__ = 0;
    if(come_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_77 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_78 && !__freed_obj__) { type_name_78 = come_decrement_ref_count(type_name_78, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value142;
struct sNode* __dec_obj61;
void* right_value143;
char* __dec_obj62;
struct sAlignOfExpNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value143, 0, sizeof(void*));
    __dec_obj61=((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 537))->exp;
    ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 537))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value142=sNode_clone(exp))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, ((struct sNode*)right_value142)->finalize, ((struct sNode*)right_value142)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value142;
    __freed_obj__ = 0;
    ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 539))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 539))->sline;
    __freed_obj__ = 0;
    __dec_obj62=((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 540))->sname;
    ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 540))->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 540))->sname))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value143;
    __freed_obj__ = 0;
    __result101__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result101__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result102__ = ((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 547))->sline;
    __freed_obj__ = 0;
    return __result102__;
    __freed_obj__ = 0;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value144;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value144, 0, sizeof(void*));
    __result103__ = __result_obj__ = ((char*)(right_value144=__builtin_string(((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 552))->sname)));
    __freed_obj__ = 0;
    return __result103__;
    __freed_obj__ = 0;
}

_Bool sAlignOfExpNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result104__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result104__;
    __freed_obj__ = 0;
}

char* sAlignOfExpNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value145;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value145, 0, sizeof(void*));
    __result105__ = __result_obj__ = ((char*)(right_value145=__builtin_string("sAlignOfExpNode")));
    __freed_obj__ = 0;
    return __result105__;
    __freed_obj__ = 0;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_79;
_Bool _if_conditional141;
_Bool __result106__;
void* right_value146;
struct CVALUE* come_value_80;
void* right_value147;
struct CVALUE* come_value2_81;
void* right_value148;
char* __dec_obj63;
void* right_value149;
void* right_value150;
struct sType* __dec_obj64;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_79, 0, sizeof(struct sNode*));
memset(&right_value146, 0, sizeof(void*));
memset(&come_value_80, 0, sizeof(struct CVALUE*));
memset(&right_value147, 0, sizeof(void*));
memset(&come_value2_81, 0, sizeof(struct CVALUE*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
memset(&right_value150, 0, sizeof(void*));
    exp_79=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode*)come_null_check(self, "21obj.c", 567))->exp);
    __freed_obj__ = 0;
    if(_if_conditional141=!((struct sNode*)come_null_check(exp_79, "21obj.c", 573))->compile(((struct sNode*)come_null_check(exp_79, "21obj.c", 573))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional141) {
        __result106__ = (_Bool)0;
        if(exp_79 && !__freed_obj__) { exp_79 = come_decrement_ref_count(exp_79, ((struct sNode*)exp_79)->finalize, ((struct sNode*)exp_79)->_protocol_obj, 0, 0, 0); } 
        __freed_obj__ = 0;
        return __result106__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value146;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value2_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 576))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value147;
    __freed_obj__ = 0;
    __dec_obj63=((struct CVALUE*)come_null_check(come_value2_81, "21obj.c", 578))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_81, "21obj.c", 578))->c_value=(char*)come_increment_ref_count(((char*)(right_value148=xsprintf("_AlignOf(%s)",((struct CVALUE*)come_null_check(come_value_80, "21obj.c", 578))->c_value))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value148;
    __freed_obj__ = 0;
    __dec_obj64=((struct CVALUE*)come_null_check(come_value2_81, "21obj.c", 579))->type;
    ((struct CVALUE*)come_null_check(come_value2_81, "21obj.c", 579))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value149=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 579)))),"long",(_Bool)0,info))));
    if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value149;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value150;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_81, "21obj.c", 580))->type, "21obj.c", 580))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_81, "21obj.c", 581))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_81, "21obj.c", 583))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 585))->stack, "21obj.c", 585)),(struct CVALUE*)come_increment_ref_count(come_value2_81));
    __freed_obj__ = 0;
    __result107__ = (_Bool)1;
    if(exp_79 && !__freed_obj__) { exp_79 = come_decrement_ref_count(exp_79, ((struct sNode*)exp_79)->finalize, ((struct sNode*)exp_79)->_protocol_obj, 0, 0, 0); } 
    if(come_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result107__;
    __freed_obj__ = 0;
    if(exp_79 && !__freed_obj__) { exp_79 = come_decrement_ref_count(exp_79, ((struct sNode*)exp_79)->finalize, ((struct sNode*)exp_79)->_protocol_obj, 0, 0, 0); } 
    if(come_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value151;
struct sType* __dec_obj65;
void* right_value152;
char* __dec_obj66;
struct sAlignOfNode2* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value152, 0, sizeof(void*));
    __dec_obj65=((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 598))->type;
    ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 598))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(type))));
    if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value151;
    __freed_obj__ = 0;
    ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 600))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 600))->sline;
    __freed_obj__ = 0;
    __dec_obj66=((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 601))->sname;
    ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 601))->sname=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 601))->sname))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value152;
    __freed_obj__ = 0;
    __result108__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result108__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = ((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 608))->sline;
    __freed_obj__ = 0;
    return __result109__;
    __freed_obj__ = 0;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value153;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value153, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value153=__builtin_string(((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 613))->sname)));
    __freed_obj__ = 0;
    return __result110__;
    __freed_obj__ = 0;
}

_Bool sAlignOfNode2_terminated(){
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

char* sAlignOfNode2_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value154;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value154, 0, sizeof(void*));
    __result112__ = __result_obj__ = ((char*)(right_value154=__builtin_string("sAlignOfNode2")));
    __freed_obj__ = 0;
    return __result112__;
    __freed_obj__ = 0;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_82;
void* right_value155;
struct CVALUE* come_value_83;
void* right_value156;
struct sType* type2_84;
void* right_value157;
char* type_name_85;
void* right_value158;
char* __dec_obj67;
void* right_value159;
void* right_value160;
struct sType* __dec_obj68;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_82, 0, sizeof(struct sType*));
memset(&right_value155, 0, sizeof(void*));
memset(&come_value_83, 0, sizeof(struct CVALUE*));
memset(&right_value156, 0, sizeof(void*));
memset(&type2_84, 0, sizeof(struct sType*));
memset(&right_value157, 0, sizeof(void*));
memset(&type_name_85, 0, sizeof(char*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
memset(&right_value160, 0, sizeof(void*));
    type_82=((struct sAlignOfNode2*)come_null_check(self, "21obj.c", 628))->type;
    __freed_obj__ = 0;
    come_value_83=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value155=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 630))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155;
    __freed_obj__ = 0;
    type2_84=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=solve_generics(type_82,((struct sInfo*)come_null_check(info, "21obj.c", 632))->generics_type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value156;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_85=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 634),((struct optional$2charphbool*)(right_value157=make_type_name_string(type2_84,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value157;
    __freed_obj__ = 0;
    __dec_obj67=((struct CVALUE*)come_null_check(come_value_83, "21obj.c", 636))->c_value;
    ((struct CVALUE*)come_null_check(come_value_83, "21obj.c", 636))->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("__alignof__(%s)",type_name_85))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value158;
    __freed_obj__ = 0;
    __dec_obj68=((struct CVALUE*)come_null_check(come_value_83, "21obj.c", 637))->type;
    ((struct CVALUE*)come_null_check(come_value_83, "21obj.c", 637))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 637)))),"long",(_Bool)0,info))));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value159;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value160;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_83, "21obj.c", 638))->type, "21obj.c", 638))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_83, "21obj.c", 639))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_83, "21obj.c", 641))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 643))->stack, "21obj.c", 643)),(struct CVALUE*)come_increment_ref_count(come_value_83));
    __freed_obj__ = 0;
    __result113__ = (_Bool)1;
    if(come_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_85 && !__freed_obj__) { type_name_85 = come_decrement_ref_count(type_name_85, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result113__;
    __freed_obj__ = 0;
    if(come_value_83 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_84 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_85 && !__freed_obj__) { type_name_85 = come_decrement_ref_count(type_name_85, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value161;
struct sNode* __dec_obj69;
void* right_value162;
char* __dec_obj70;
struct sAlignOfExpNode2* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value162, 0, sizeof(void*));
    __dec_obj69=((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 656))->exp;
    ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 656))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value161=sNode_clone(exp))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 658))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 658))->sline;
    __freed_obj__ = 0;
    __dec_obj70=((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 659))->sname;
    ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 659))->sname=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 659))->sname))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value162;
    __freed_obj__ = 0;
    __result114__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result114__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = ((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 666))->sline;
    __freed_obj__ = 0;
    return __result115__;
    __freed_obj__ = 0;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value163;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
    __result116__ = __result_obj__ = ((char*)(right_value163=__builtin_string(((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 671))->sname)));
    __freed_obj__ = 0;
    return __result116__;
    __freed_obj__ = 0;
}

_Bool sAlignOfExpNode2_terminated(){
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

char* sAlignOfExpNode2_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value164, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value164=__builtin_string("sAlignOfExpNode2")));
    __freed_obj__ = 0;
    return __result118__;
    __freed_obj__ = 0;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_86;
_Bool _if_conditional146;
_Bool __result119__;
void* right_value165;
struct CVALUE* come_value_87;
void* right_value166;
struct CVALUE* come_value2_88;
void* right_value167;
char* __dec_obj71;
void* right_value168;
void* right_value169;
struct sType* __dec_obj72;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_86, 0, sizeof(struct sNode*));
memset(&right_value165, 0, sizeof(void*));
memset(&come_value_87, 0, sizeof(struct CVALUE*));
memset(&right_value166, 0, sizeof(void*));
memset(&come_value2_88, 0, sizeof(struct CVALUE*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    exp_86=(struct sNode*)come_increment_ref_count(((struct sAlignOfExpNode2*)come_null_check(self, "21obj.c", 686))->exp);
    __freed_obj__ = 0;
    if(_if_conditional146=!((struct sNode*)come_null_check(exp_86, "21obj.c", 692))->compile(((struct sNode*)come_null_check(exp_86, "21obj.c", 692))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional146) {
        __result119__ = (_Bool)0;
        if(exp_86 && !__freed_obj__) { exp_86 = come_decrement_ref_count(exp_86, ((struct sNode*)exp_86)->finalize, ((struct sNode*)exp_86)->_protocol_obj, 0, 0, 0); } 
        __freed_obj__ = 0;
        return __result119__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value165;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value2_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 695))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value166;
    __freed_obj__ = 0;
    __dec_obj71=((struct CVALUE*)come_null_check(come_value2_88, "21obj.c", 697))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_88, "21obj.c", 697))->c_value=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("__alignof__(%s)",((struct CVALUE*)come_null_check(come_value_87, "21obj.c", 697))->c_value))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value167;
    __freed_obj__ = 0;
    __dec_obj72=((struct CVALUE*)come_null_check(come_value2_88, "21obj.c", 698))->type;
    ((struct CVALUE*)come_null_check(come_value2_88, "21obj.c", 698))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value169=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value168=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 698)))),"long",(_Bool)0,info))));
    if(__dec_obj72) { come_call_finalizer(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value168;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value169;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_88, "21obj.c", 699))->type, "21obj.c", 699))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_88, "21obj.c", 700))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_88, "21obj.c", 702))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 704))->stack, "21obj.c", 704)),(struct CVALUE*)come_increment_ref_count(come_value2_88));
    __freed_obj__ = 0;
    __result120__ = (_Bool)1;
    if(exp_86 && !__freed_obj__) { exp_86 = come_decrement_ref_count(exp_86, ((struct sNode*)exp_86)->finalize, ((struct sNode*)exp_86)->_protocol_obj, 0, 0, 0); } 
    if(come_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_88 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result120__;
    __freed_obj__ = 0;
    if(exp_86 && !__freed_obj__) { exp_86 = come_decrement_ref_count(exp_86, ((struct sNode*)exp_86)->finalize, ((struct sNode*)exp_86)->_protocol_obj, 0, 0, 0); } 
    if(come_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_88 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_88, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value170;
struct sType* __dec_obj73;
void* right_value171;
char* __dec_obj74;
struct sAlignAsNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
memset(&right_value171, 0, sizeof(void*));
    __dec_obj73=((struct sAlignAsNode*)come_null_check(self, "21obj.c", 717))->type;
    ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 717))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(type))));
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170;
    __freed_obj__ = 0;
    ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 719))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 719))->sline;
    __freed_obj__ = 0;
    __dec_obj74=((struct sAlignAsNode*)come_null_check(self, "21obj.c", 720))->sname;
    ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 720))->sname=(char*)come_increment_ref_count(((char*)(right_value171=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 720))->sname))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { right_value171 = come_decrement_ref_count(right_value171, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value171;
    __freed_obj__ = 0;
    __result121__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result121__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = ((struct sAlignAsNode*)come_null_check(self, "21obj.c", 727))->sline;
    __freed_obj__ = 0;
    return __result122__;
    __freed_obj__ = 0;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value172;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value172, 0, sizeof(void*));
    __result123__ = __result_obj__ = ((char*)(right_value172=__builtin_string(((struct sAlignAsNode*)come_null_check(self, "21obj.c", 732))->sname)));
    __freed_obj__ = 0;
    return __result123__;
    __freed_obj__ = 0;
}

_Bool sAlignAsNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result124__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result124__;
    __freed_obj__ = 0;
}

char* sAlignAsNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value173;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
    __result125__ = __result_obj__ = ((char*)(right_value173=__builtin_string("sAlignAsNode")));
    __freed_obj__ = 0;
    return __result125__;
    __freed_obj__ = 0;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* type_89;
void* right_value174;
struct CVALUE* come_value_90;
void* right_value175;
struct sType* type2_91;
void* right_value176;
char* type_name_92;
void* right_value177;
char* __dec_obj75;
void* right_value178;
void* right_value179;
struct sType* __dec_obj76;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&type_89, 0, sizeof(struct sType*));
memset(&right_value174, 0, sizeof(void*));
memset(&come_value_90, 0, sizeof(struct CVALUE*));
memset(&right_value175, 0, sizeof(void*));
memset(&type2_91, 0, sizeof(struct sType*));
memset(&right_value176, 0, sizeof(void*));
memset(&type_name_92, 0, sizeof(char*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
    type_89=((struct sAlignAsNode*)come_null_check(self, "21obj.c", 747))->type;
    __freed_obj__ = 0;
    come_value_90=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value174=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 749))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174;
    __freed_obj__ = 0;
    type2_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=solve_generics(type_89,((struct sInfo*)come_null_check(info, "21obj.c", 751))->generics_type,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value175;
    __freed_obj__ = 0;
    come_clear_stackframe();
    type_name_92=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 753),((struct optional$2charphbool*)(right_value176=make_type_name_string(type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
    come_pop_stackframe();
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value176;
    __freed_obj__ = 0;
    __dec_obj75=((struct CVALUE*)come_null_check(come_value_90, "21obj.c", 755))->c_value;
    ((struct CVALUE*)come_null_check(come_value_90, "21obj.c", 755))->c_value=(char*)come_increment_ref_count(((char*)(right_value177=xsprintf("_Alignas(%s)",type_name_92))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value177;
    __freed_obj__ = 0;
    __dec_obj76=((struct CVALUE*)come_null_check(come_value_90, "21obj.c", 756))->type;
    ((struct CVALUE*)come_null_check(come_value_90, "21obj.c", 756))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value179=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value178=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 756)))),"long",(_Bool)0,info))));
    if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value178;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value179;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_90, "21obj.c", 757))->type, "21obj.c", 757))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value_90, "21obj.c", 758))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_90, "21obj.c", 760))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 762))->stack, "21obj.c", 762)),(struct CVALUE*)come_increment_ref_count(come_value_90));
    __freed_obj__ = 0;
    __result126__ = (_Bool)1;
    if(come_value_90 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_92 && !__freed_obj__) { type_name_92 = come_decrement_ref_count(type_name_92, (void*)0, (void*)0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result126__;
    __freed_obj__ = 0;
    if(come_value_90 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_92 && !__freed_obj__) { type_name_92 = come_decrement_ref_count(type_name_92, (void*)0, (void*)0, 0, 0, 0); }
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value180;
struct sNode* __dec_obj77;
void* right_value181;
char* __dec_obj78;
struct sAlignAsExpNode* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
memset(&right_value181, 0, sizeof(void*));
    __dec_obj77=((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 775))->exp;
    ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 775))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value180=sNode_clone(exp))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, ((struct sNode*)right_value180)->finalize, ((struct sNode*)right_value180)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 777))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 777))->sline;
    __freed_obj__ = 0;
    __dec_obj78=((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 778))->sname;
    ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 778))->sname=(char*)come_increment_ref_count(((char*)(right_value181=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 778))->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { right_value181 = come_decrement_ref_count(right_value181, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value181;
    __freed_obj__ = 0;
    __result127__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result127__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = ((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 785))->sline;
    __freed_obj__ = 0;
    return __result128__;
    __freed_obj__ = 0;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value182;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
    __result129__ = __result_obj__ = ((char*)(right_value182=__builtin_string(((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 790))->sname)));
    __freed_obj__ = 0;
    return __result129__;
    __freed_obj__ = 0;
}

_Bool sAlignAsExpNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result130__;
    __freed_obj__ = 0;
}

char* sAlignAsExpNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value183;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
    __result131__ = __result_obj__ = ((char*)(right_value183=__builtin_string("sAlignAsExpNode")));
    __freed_obj__ = 0;
    return __result131__;
    __freed_obj__ = 0;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* exp_93;
_Bool _if_conditional151;
_Bool __result132__;
void* right_value184;
struct CVALUE* come_value_94;
void* right_value185;
struct CVALUE* come_value2_95;
void* right_value186;
char* __dec_obj79;
void* right_value187;
void* right_value188;
struct sType* __dec_obj80;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&exp_93, 0, sizeof(struct sNode*));
memset(&right_value184, 0, sizeof(void*));
memset(&come_value_94, 0, sizeof(struct CVALUE*));
memset(&right_value185, 0, sizeof(void*));
memset(&come_value2_95, 0, sizeof(struct CVALUE*));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
    exp_93=(struct sNode*)come_increment_ref_count(((struct sAlignAsExpNode*)come_null_check(self, "21obj.c", 806))->exp);
    __freed_obj__ = 0;
    if(_if_conditional151=!((struct sNode*)come_null_check(exp_93, "21obj.c", 812))->compile(((struct sNode*)come_null_check(exp_93, "21obj.c", 812))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional151) {
        __result132__ = (_Bool)0;
        if(exp_93 && !__freed_obj__) { exp_93 = come_decrement_ref_count(exp_93, ((struct sNode*)exp_93)->finalize, ((struct sNode*)exp_93)->_protocol_obj, 0, 0, 0); } 
        __freed_obj__ = 0;
        return __result132__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value184=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    come_value2_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 815))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value185;
    __freed_obj__ = 0;
    __dec_obj79=((struct CVALUE*)come_null_check(come_value2_95, "21obj.c", 817))->c_value;
    ((struct CVALUE*)come_null_check(come_value2_95, "21obj.c", 817))->c_value=(char*)come_increment_ref_count(((char*)(right_value186=xsprintf("_Alignas(%s)",((struct CVALUE*)come_null_check(come_value_94, "21obj.c", 817))->c_value))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value186;
    __freed_obj__ = 0;
    __dec_obj80=((struct CVALUE*)come_null_check(come_value2_95, "21obj.c", 818))->type;
    ((struct CVALUE*)come_null_check(come_value2_95, "21obj.c", 818))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value187=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 818)))),"long",(_Bool)0,info))));
    if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value187;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value188;
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value2_95, "21obj.c", 819))->type, "21obj.c", 819))->mUnsigned=(_Bool)1;
    __freed_obj__ = 0;
    ((struct CVALUE*)come_null_check(come_value2_95, "21obj.c", 820))->var=((void*)0);
    __freed_obj__ = 0;
    add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value2_95, "21obj.c", 822))->c_value);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 824))->stack, "21obj.c", 824)),(struct CVALUE*)come_increment_ref_count(come_value2_95));
    __freed_obj__ = 0;
    __result133__ = (_Bool)1;
    if(exp_93 && !__freed_obj__) { exp_93 = come_decrement_ref_count(exp_93, ((struct sNode*)exp_93)->finalize, ((struct sNode*)exp_93)->_protocol_obj, 0, 0, 0); } 
    if(come_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result133__;
    __freed_obj__ = 0;
    if(exp_93 && !__freed_obj__) { exp_93 = come_decrement_ref_count(exp_93, ((struct sNode*)exp_93)->finalize, ((struct sNode*)exp_93)->_protocol_obj, 0, 0, 0); } 
    if(come_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_95, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value189;
struct sNode* __dec_obj81;
void* right_value190;
char* __dec_obj82;
struct sDeleteNode* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
memset(&right_value190, 0, sizeof(void*));
    __dec_obj81=((struct sDeleteNode*)come_null_check(self, "21obj.c", 837))->node;
    ((struct sDeleteNode*)come_null_check(self, "21obj.c", 837))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(node))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = 0;
    ((struct sDeleteNode*)come_null_check(self, "21obj.c", 839))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 839))->sline;
    __freed_obj__ = 0;
    __dec_obj82=((struct sDeleteNode*)come_null_check(self, "21obj.c", 840))->sname;
    ((struct sDeleteNode*)come_null_check(self, "21obj.c", 840))->sname=(char*)come_increment_ref_count(((char*)(right_value190=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 840))->sname))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value190;
    __freed_obj__ = 0;
    __result134__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result134__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result135__ = ((struct sDeleteNode*)come_null_check(self, "21obj.c", 847))->sline;
    __freed_obj__ = 0;
    return __result135__;
    __freed_obj__ = 0;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value191;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value191, 0, sizeof(void*));
    __result136__ = __result_obj__ = ((char*)(right_value191=__builtin_string(((struct sDeleteNode*)come_null_check(self, "21obj.c", 852))->sname)));
    __freed_obj__ = 0;
    return __result136__;
    __freed_obj__ = 0;
}

_Bool sDeleteNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result137__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result137__;
    __freed_obj__ = 0;
}

char* sDeleteNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value192;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
    __result138__ = __result_obj__ = ((char*)(right_value192=__builtin_string("sDeleteNode")));
    __freed_obj__ = 0;
    return __result138__;
    __freed_obj__ = 0;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_96;
_Bool _if_conditional154;
_Bool __result139__;
void* right_value193;
struct CVALUE* come_value_97;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_96, 0, sizeof(struct sNode*));
memset(&right_value193, 0, sizeof(void*));
memset(&come_value_97, 0, sizeof(struct CVALUE*));
    node_96=((struct sDeleteNode*)come_null_check(self, "21obj.c", 867))->node;
    __freed_obj__ = 0;
    if(_if_conditional154=!((struct sNode*)come_null_check(node_96, "21obj.c", 873))->compile(((struct sNode*)come_null_check(node_96, "21obj.c", 873))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional154) {
        __result139__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result139__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value193;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    free_object(((struct CVALUE*)come_null_check(come_value_97, "21obj.c", 876))->type,((struct CVALUE*)come_null_check(come_value_97, "21obj.c", 876))->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __freed_obj__ = 0;
    __result140__ = (_Bool)1;
    if(come_value_97 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result140__;
    __freed_obj__ = 0;
    if(come_value_97 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value194;
struct sNode* __dec_obj83;
void* right_value195;
char* __dec_obj84;
struct sForceDeleteNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
    __dec_obj83=((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 889))->node;
    ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 889))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNode_clone(node))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value194;
    __freed_obj__ = 0;
    ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 891))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 891))->sline;
    __freed_obj__ = 0;
    __dec_obj84=((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 892))->sname;
    ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 892))->sname=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 892))->sname))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value195;
    __freed_obj__ = 0;
    __result141__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result141__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result142__ = ((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 899))->sline;
    __freed_obj__ = 0;
    return __result142__;
    __freed_obj__ = 0;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value196;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
    __result143__ = __result_obj__ = ((char*)(right_value196=__builtin_string(((struct sForceDeleteNode*)come_null_check(self, "21obj.c", 904))->sname)));
    __freed_obj__ = 0;
    return __result143__;
    __freed_obj__ = 0;
}

_Bool sForceDeleteNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result144__;
    __freed_obj__ = 0;
}

char* sForceDeleteNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
    __result145__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sForceDeleteNode")));
    __freed_obj__ = 0;
    return __result145__;
    __freed_obj__ = 0;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_98;
_Bool _if_conditional157;
_Bool __result146__;
void* right_value198;
struct CVALUE* come_value_99;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_98, 0, sizeof(struct sNode*));
memset(&right_value198, 0, sizeof(void*));
memset(&come_value_99, 0, sizeof(struct CVALUE*));
    node_98=((struct sDeleteNode*)come_null_check(self, "21obj.c", 919))->node;
    __freed_obj__ = 0;
    if(_if_conditional157=!((struct sNode*)come_null_check(node_98, "21obj.c", 925))->compile(((struct sNode*)come_null_check(node_98, "21obj.c", 925))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional157) {
        __result146__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result146__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    free_object(((struct CVALUE*)come_null_check(come_value_99, "21obj.c", 928))->type,((struct CVALUE*)come_null_check(come_value_99, "21obj.c", 928))->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __freed_obj__ = 0;
    __result147__ = (_Bool)1;
    if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result147__;
    __freed_obj__ = 0;
    if(come_value_99 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value199;
struct sNode* __dec_obj85;
void* right_value200;
char* __dec_obj86;
struct sDelegateNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
memset(&right_value200, 0, sizeof(void*));
    __dec_obj85=((struct sDelegateNode*)come_null_check(self, "21obj.c", 941))->node;
    ((struct sDelegateNode*)come_null_check(self, "21obj.c", 941))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(node))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value199;
    __freed_obj__ = 0;
    ((struct sDelegateNode*)come_null_check(self, "21obj.c", 943))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 943))->sline;
    __freed_obj__ = 0;
    __dec_obj86=((struct sDelegateNode*)come_null_check(self, "21obj.c", 944))->sname;
    ((struct sDelegateNode*)come_null_check(self, "21obj.c", 944))->sname=(char*)come_increment_ref_count(((char*)(right_value200=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 944))->sname))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value200;
    __freed_obj__ = 0;
    __result148__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result148__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = ((struct sDelegateNode*)come_null_check(self, "21obj.c", 951))->sline;
    __freed_obj__ = 0;
    return __result149__;
    __freed_obj__ = 0;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value201;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value201, 0, sizeof(void*));
    __result150__ = __result_obj__ = ((char*)(right_value201=__builtin_string(((struct sDelegateNode*)come_null_check(self, "21obj.c", 956))->sname)));
    __freed_obj__ = 0;
    return __result150__;
    __freed_obj__ = 0;
}

_Bool sDelegateNode_terminated(){
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

char* sDelegateNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value202;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value202=__builtin_string("sDelegateNode")));
    __freed_obj__ = 0;
    return __result152__;
    __freed_obj__ = 0;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_100;
_Bool _if_conditional160;
_Bool __result153__;
void* right_value203;
struct CVALUE* come_value_101;
_Bool _if_conditional161;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_100, 0, sizeof(struct sNode*));
memset(&right_value203, 0, sizeof(void*));
memset(&come_value_101, 0, sizeof(struct CVALUE*));
    node_100=((struct sDelegateNode*)come_null_check(self, "21obj.c", 971))->node;
    __freed_obj__ = 0;
    if(_if_conditional160=!((struct sNode*)come_null_check(node_100, "21obj.c", 977))->compile(((struct sNode*)come_null_check(node_100, "21obj.c", 977))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional160) {
        __result153__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result153__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "21obj.c", 980))->type, "21obj.c", 980))->mDelegate=(_Bool)1;
    __freed_obj__ = 0;
    if(_if_conditional161=((struct CVALUE*)come_null_check(come_value_101, "21obj.c", 992))->var,    __freed_obj__ = 0, 
    _if_conditional161) {
        ((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_101, "21obj.c", 983))->var, "21obj.c", 983))->mType, "21obj.c", 983))->mDelegate=(_Bool)1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 992))->stack, "21obj.c", 992)),(struct CVALUE*)come_increment_ref_count(come_value_101));
    __freed_obj__ = 0;
    __result154__ = (_Bool)1;
    if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result154__;
    __freed_obj__ = 0;
    if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value204;
struct sNode* __dec_obj87;
void* right_value205;
char* __dec_obj88;
struct sShareNode* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
    __dec_obj87=((struct sShareNode*)come_null_check(self, "21obj.c", 1004))->node;
    ((struct sShareNode*)come_null_check(self, "21obj.c", 1004))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(node))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value204;
    __freed_obj__ = 0;
    ((struct sShareNode*)come_null_check(self, "21obj.c", 1006))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1006))->sline;
    __freed_obj__ = 0;
    __dec_obj88=((struct sShareNode*)come_null_check(self, "21obj.c", 1007))->sname;
    ((struct sShareNode*)come_null_check(self, "21obj.c", 1007))->sname=(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1007))->sname))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value205;
    __freed_obj__ = 0;
    __result155__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result155__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result156__ = ((struct sShareNode*)come_null_check(self, "21obj.c", 1014))->sline;
    __freed_obj__ = 0;
    return __result156__;
    __freed_obj__ = 0;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value206;
char* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value206, 0, sizeof(void*));
    __result157__ = __result_obj__ = ((char*)(right_value206=__builtin_string(((struct sShareNode*)come_null_check(self, "21obj.c", 1019))->sname)));
    __freed_obj__ = 0;
    return __result157__;
    __freed_obj__ = 0;
}

_Bool sShareNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result158__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result158__;
    __freed_obj__ = 0;
}

char* sShareNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value207;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
    __result159__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sShareNode")));
    __freed_obj__ = 0;
    return __result159__;
    __freed_obj__ = 0;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_102;
_Bool _if_conditional164;
_Bool __result160__;
void* right_value208;
struct CVALUE* come_value_103;
_Bool _if_conditional165;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_102, 0, sizeof(struct sNode*));
memset(&right_value208, 0, sizeof(void*));
memset(&come_value_103, 0, sizeof(struct CVALUE*));
    node_102=((struct sShareNode*)come_null_check(self, "21obj.c", 1034))->node;
    __freed_obj__ = 0;
    if(_if_conditional164=!((struct sNode*)come_null_check(node_102, "21obj.c", 1040))->compile(((struct sNode*)come_null_check(node_102, "21obj.c", 1040))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional164) {
        __result160__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result160__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value208;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_103, "21obj.c", 1043))->type, "21obj.c", 1043))->mShare=(_Bool)1;
    __freed_obj__ = 0;
    if(_if_conditional165=((struct CVALUE*)come_null_check(come_value_103, "21obj.c", 1049))->var,    __freed_obj__ = 0, 
    _if_conditional165) {
        ((struct sType*)come_null_check(((struct sVar*)come_null_check(((struct CVALUE*)come_null_check(come_value_103, "21obj.c", 1046))->var, "21obj.c", 1046))->mType, "21obj.c", 1046))->mShare=(_Bool)1;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1049))->stack, "21obj.c", 1049)),(struct CVALUE*)come_increment_ref_count(come_value_103));
    __freed_obj__ = 0;
    __result161__ = (_Bool)1;
    if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result161__;
    __freed_obj__ = 0;
    if(come_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value209;
struct sNode* __dec_obj89;
void* right_value210;
char* __dec_obj90;
struct sBorrowNode* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
memset(&right_value210, 0, sizeof(void*));
    __dec_obj89=((struct sBorrowNode*)come_null_check(self, "21obj.c", 1062))->node;
    ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1062))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(node))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value209;
    __freed_obj__ = 0;
    ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1064))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1064))->sline;
    __freed_obj__ = 0;
    __dec_obj90=((struct sBorrowNode*)come_null_check(self, "21obj.c", 1065))->sname;
    ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1065))->sname=(char*)come_increment_ref_count(((char*)(right_value210=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1065))->sname))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value210;
    __freed_obj__ = 0;
    __result162__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result162__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result163__ = ((struct sBorrowNode*)come_null_check(self, "21obj.c", 1072))->sline;
    __freed_obj__ = 0;
    return __result163__;
    __freed_obj__ = 0;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value211;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value211, 0, sizeof(void*));
    __result164__ = __result_obj__ = ((char*)(right_value211=__builtin_string(((struct sBorrowNode*)come_null_check(self, "21obj.c", 1077))->sname)));
    __freed_obj__ = 0;
    return __result164__;
    __freed_obj__ = 0;
}

_Bool sBorrowNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result165__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result165__;
    __freed_obj__ = 0;
}

char* sBorrowNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value212;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value212, 0, sizeof(void*));
    __result166__ = __result_obj__ = ((char*)(right_value212=__builtin_string("sBorrowNode")));
    __freed_obj__ = 0;
    return __result166__;
    __freed_obj__ = 0;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_104;
_Bool _if_conditional168;
_Bool __result167__;
void* right_value213;
struct CVALUE* come_value_105;
int right_value_id_106;
_Bool _if_conditional169;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_104, 0, sizeof(struct sNode*));
memset(&right_value213, 0, sizeof(void*));
memset(&come_value_105, 0, sizeof(struct CVALUE*));
memset(&right_value_id_106, 0, sizeof(int));
    node_104=((struct sBorrowNode*)come_null_check(self, "21obj.c", 1092))->node;
    __freed_obj__ = 0;
    if(_if_conditional168=!((struct sNode*)come_null_check(node_104, "21obj.c", 1098))->compile(((struct sNode*)come_null_check(node_104, "21obj.c", 1098))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional168) {
        __result167__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result167__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_105, "21obj.c", 1101))->type, "21obj.c", 1101))->mHeap=(_Bool)0;
    __freed_obj__ = 0;
    right_value_id_106=get_right_value_id_from_obj((char*)come_increment_ref_count(((struct CVALUE*)come_null_check(come_value_105, "21obj.c", 1103))->c_value));
    __freed_obj__ = 0;
    if(_if_conditional169=right_value_id_106!=-1,    __freed_obj__ = 0, 
    _if_conditional169) {
        remove_object_from_right_values(right_value_id_106,info);
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1109))->stack, "21obj.c", 1109)),(struct CVALUE*)come_increment_ref_count(come_value_105));
    __freed_obj__ = 0;
    __result168__ = (_Bool)1;
    if(come_value_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result168__;
    __freed_obj__ = 0;
    if(come_value_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value214;
struct sNode* __dec_obj91;
void* right_value215;
char* __dec_obj92;
struct sCloneNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
    __dec_obj91=((struct sCloneNode*)come_null_check(self, "21obj.c", 1122))->node;
    ((struct sCloneNode*)come_null_check(self, "21obj.c", 1122))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(node))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value214;
    __freed_obj__ = 0;
    ((struct sCloneNode*)come_null_check(self, "21obj.c", 1124))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1124))->sline;
    __freed_obj__ = 0;
    __dec_obj92=((struct sCloneNode*)come_null_check(self, "21obj.c", 1125))->sname;
    ((struct sCloneNode*)come_null_check(self, "21obj.c", 1125))->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1125))->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value215;
    __freed_obj__ = 0;
    __result169__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result169__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result170__ = ((struct sCloneNode*)come_null_check(self, "21obj.c", 1132))->sline;
    __freed_obj__ = 0;
    return __result170__;
    __freed_obj__ = 0;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value216;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value216, 0, sizeof(void*));
    __result171__ = __result_obj__ = ((char*)(right_value216=__builtin_string(((struct sCloneNode*)come_null_check(self, "21obj.c", 1137))->sname)));
    __freed_obj__ = 0;
    return __result171__;
    __freed_obj__ = 0;
}

_Bool sCloneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result172__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result172__;
    __freed_obj__ = 0;
}

char* sCloneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value217;
char* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
    __result173__ = __result_obj__ = ((char*)(right_value217=__builtin_string("sCloneNode")));
    __freed_obj__ = 0;
    return __result173__;
    __freed_obj__ = 0;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_107;
_Bool _if_conditional172;
_Bool __result174__;
void* right_value218;
struct CVALUE* left_value_108;
void* right_value219;
struct sType* left_type_109;
_Bool _if_conditional173;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value220;
struct CVALUE* come_value_110;
void* right_value221;
struct tuple2$2sTypephcharph* multiple_assgin_var2;
struct sType* result_type_111;
char* c_value_112;
char* __dec_obj93;
void* right_value222;
struct sType* __dec_obj94;
void* right_value223;
char* __dec_obj95;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_107, 0, sizeof(struct sNode*));
memset(&right_value218, 0, sizeof(void*));
memset(&left_value_108, 0, sizeof(struct CVALUE*));
memset(&right_value219, 0, sizeof(void*));
memset(&left_type_109, 0, sizeof(struct sType*));
memset(&right_value220, 0, sizeof(void*));
memset(&come_value_110, 0, sizeof(struct CVALUE*));
memset(&right_value221, 0, sizeof(void*));
memset(&result_type_111, 0, sizeof(struct sType*));
memset(&c_value_112, 0, sizeof(char*));
memset(&result_type_111, 0, sizeof(struct sType*));
memset(&c_value_112, 0, sizeof(char*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value223, 0, sizeof(void*));
    node_107=((struct sCloneNode*)come_null_check(self, "21obj.c", 1152))->node;
    __freed_obj__ = 0;
    if(_if_conditional172=!((struct sNode*)come_null_check(node_107, "21obj.c", 1158))->compile(((struct sNode*)come_null_check(node_107, "21obj.c", 1158))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional172) {
        __result174__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result174__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(left_value_108, "21obj.c", 1161))->type, "21obj.c", 1161))->mClone=(_Bool)1;
    __freed_obj__ = 0;
    left_type_109=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=sType_clone(((struct CVALUE*)come_null_check(left_value_108, "21obj.c", 1163))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value219;
    __freed_obj__ = 0;
    if(_if_conditional173=((struct sType*)come_null_check(left_type_109, "21obj.c", 1186))->mPointerNum==1&&string_operator_equals(((struct sClass*)come_null_check(((struct sType*)come_null_check(left_type_109, "21obj.c", 1186))->mClass, "21obj.c", 1186))->mName,"void")&&((struct sType*)come_null_check(left_type_109, "21obj.c", 1186))->mHeap==(_Bool)0,    __freed_obj__ = 0, 
    _if_conditional173) {
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1166))->stack, "21obj.c", 1166)),(struct CVALUE*)come_increment_ref_count(left_value_108));
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional174=((struct sType*)come_null_check(left_type_109, "21obj.c", 1186))->mPointerNum==0,        __freed_obj__ = 0, 
        _if_conditional174) {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1169))->stack, "21obj.c", 1169)),(struct CVALUE*)come_increment_ref_count(left_value_108));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional175=((struct sType*)come_null_check(left_type_109, "21obj.c", 1186))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional175) {
                come_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1172))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
                if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value220;
                __freed_obj__ = 0;
                multiple_assgin_var2=((struct tuple2$2sTypephcharph*)(right_value221=clone_object(left_type_109,((struct CVALUE*)come_null_check(left_value_108, "21obj.c", 1174))->c_value,info)));
                result_type_111=(struct sType*)come_increment_ref_count(multiple_assgin_var2->v1);
                c_value_112=(char*)come_increment_ref_count(multiple_assgin_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value221);
                if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value221;
                __freed_obj__ = 0;
                __dec_obj93=((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1175))->c_value;
                ((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1175))->c_value=(char*)come_increment_ref_count(c_value_112);
                if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                __dec_obj94=((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1176))->type;
                ((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1176))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(left_type_109))));
                if(__dec_obj94) { come_call_finalizer(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value222);
                if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value222;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1177))->type, "21obj.c", 1177))->mHeap=(_Bool)1;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1178))->type, "21obj.c", 1178))->mClone=(_Bool)1;
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1179))->var=((void*)0);
                __freed_obj__ = 0;
                __dec_obj95=((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1181))->c_value;
                ((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1181))->c_value=(char*)come_increment_ref_count(((char*)(right_value223=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_110, "21obj.c", 1181))->c_value,(struct sType*)come_increment_ref_count(left_type_109),info))));
                if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value223);
                if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { right_value223 = come_decrement_ref_count(right_value223, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value223;
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1183))->stack, "21obj.c", 1183)),(struct CVALUE*)come_increment_ref_count(come_value_110));
                __freed_obj__ = 0;
                if(come_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_111 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_111, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_112 && !__freed_obj__) { c_value_112 = come_decrement_ref_count(c_value_112, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result175__ = (_Bool)1;
    if(left_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result175__;
    __freed_obj__ = 0;
    if(left_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_109 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_109, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional176;
_Bool _if_conditional177;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional176=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional176) {
                        if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional177=self!=((void*)0)&&((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional177) {
                        if(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple2$2sTypephcharph*)come_null_check(self, "tuple2$2sTypephcharphp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value224;
struct sNode* __dec_obj96;
void* right_value225;
char* __dec_obj97;
struct sDupeNode* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    __dec_obj96=((struct sDupeNode*)come_null_check(self, "21obj.c", 1197))->node;
    ((struct sDupeNode*)come_null_check(self, "21obj.c", 1197))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(node))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value224;
    __freed_obj__ = 0;
    ((struct sDupeNode*)come_null_check(self, "21obj.c", 1199))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1199))->sline;
    __freed_obj__ = 0;
    __dec_obj97=((struct sDupeNode*)come_null_check(self, "21obj.c", 1200))->sname;
    ((struct sDupeNode*)come_null_check(self, "21obj.c", 1200))->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1200))->sname))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value225;
    __freed_obj__ = 0;
    __result176__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result176__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result177__ = ((struct sDupeNode*)come_null_check(self, "21obj.c", 1207))->sline;
    __freed_obj__ = 0;
    return __result177__;
    __freed_obj__ = 0;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value226;
char* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
    __result178__ = __result_obj__ = ((char*)(right_value226=__builtin_string(((struct sDupeNode*)come_null_check(self, "21obj.c", 1212))->sname)));
    __freed_obj__ = 0;
    return __result178__;
    __freed_obj__ = 0;
}

_Bool sDupeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result179__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result179__;
    __freed_obj__ = 0;
}

char* sDupeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value227;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
    __result180__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sDupeNode")));
    __freed_obj__ = 0;
    return __result180__;
    __freed_obj__ = 0;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_113;
_Bool _if_conditional180;
_Bool __result181__;
void* right_value228;
struct CVALUE* left_value_114;
void* right_value229;
struct sType* left_type_115;
_Bool _if_conditional181;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value230;
struct CVALUE* come_value_116;
void* right_value231;
struct tuple2$2sTypephcharph* multiple_assgin_var3;
struct sType* result_type_117;
char* c_value_118;
char* __dec_obj98;
void* right_value232;
struct sType* __dec_obj99;
void* right_value233;
char* __dec_obj100;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_113, 0, sizeof(struct sNode*));
memset(&right_value228, 0, sizeof(void*));
memset(&left_value_114, 0, sizeof(struct CVALUE*));
memset(&right_value229, 0, sizeof(void*));
memset(&left_type_115, 0, sizeof(struct sType*));
memset(&right_value230, 0, sizeof(void*));
memset(&come_value_116, 0, sizeof(struct CVALUE*));
memset(&right_value231, 0, sizeof(void*));
memset(&result_type_117, 0, sizeof(struct sType*));
memset(&c_value_118, 0, sizeof(char*));
memset(&result_type_117, 0, sizeof(struct sType*));
memset(&c_value_118, 0, sizeof(char*));
memset(&right_value232, 0, sizeof(void*));
memset(&right_value233, 0, sizeof(void*));
    node_113=((struct sDupeNode*)come_null_check(self, "21obj.c", 1227))->node;
    __freed_obj__ = 0;
    if(_if_conditional180=!((struct sNode*)come_null_check(node_113, "21obj.c", 1233))->compile(((struct sNode*)come_null_check(node_113, "21obj.c", 1233))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional180) {
        __result181__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result181__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    left_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    left_type_115=(struct sType*)come_increment_ref_count(((struct sType*)(right_value229=sType_clone(((struct CVALUE*)come_null_check(left_value_114, "21obj.c", 1236))->type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value229;
    __freed_obj__ = 0;
    if(_if_conditional181=((struct sType*)come_null_check(left_type_115, "21obj.c", 1258))->mPointerNum==0,    __freed_obj__ = 0, 
    _if_conditional181) {
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1239))->stack, "21obj.c", 1239)),(struct CVALUE*)come_increment_ref_count(left_value_114));
        __freed_obj__ = 0;
    }
    else {
        if(_if_conditional182=((struct sType*)come_null_check(left_type_115, "21obj.c", 1258))->mPointerNum>0&&((struct sType*)come_null_check(left_type_115, "21obj.c", 1258))->mHeap==(_Bool)0,        __freed_obj__ = 0, 
        _if_conditional182) {
            list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1242))->stack, "21obj.c", 1242)),(struct CVALUE*)come_increment_ref_count(left_value_114));
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional183=((struct sType*)come_null_check(left_type_115, "21obj.c", 1258))->mPointerNum>0,            __freed_obj__ = 0, 
            _if_conditional183) {
                come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1245))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
                if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value230;
                __freed_obj__ = 0;
                multiple_assgin_var3=((struct tuple2$2sTypephcharph*)(right_value231=clone_object(left_type_115,((struct CVALUE*)come_null_check(left_value_114, "21obj.c", 1247))->c_value,info)));
                result_type_117=(struct sType*)come_increment_ref_count(multiple_assgin_var3->v1);
                c_value_118=(char*)come_increment_ref_count(multiple_assgin_var3->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value231);
                if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sTypephcharphp_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value231;
                __freed_obj__ = 0;
                __dec_obj98=((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1248))->c_value;
                ((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1248))->c_value=(char*)come_increment_ref_count(c_value_118);
                if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = 0;
                __dec_obj99=((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1249))->type;
                ((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1249))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_type_115))));
                if(__dec_obj99) { come_call_finalizer(sType_finalize,__dec_obj99, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value232);
                if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value232;
                __freed_obj__ = 0;
                ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1250))->type, "21obj.c", 1250))->mHeap=(_Bool)1;
                __freed_obj__ = 0;
                ((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1251))->var=((void*)0);
                __freed_obj__ = 0;
                __dec_obj100=((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1253))->c_value;
                ((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1253))->c_value=(char*)come_increment_ref_count(((char*)(right_value233=append_object_to_right_values(((struct CVALUE*)come_null_check(come_value_116, "21obj.c", 1253))->c_value,(struct sType*)come_increment_ref_count(left_type_115),info))));
                if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value233);
                if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value233;
                __freed_obj__ = 0;
                list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1255))->stack, "21obj.c", 1255)),(struct CVALUE*)come_increment_ref_count(come_value_116));
                __freed_obj__ = 0;
                if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(result_type_117 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_117, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(c_value_118 && !__freed_obj__) { c_value_118 = come_decrement_ref_count(c_value_118, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result182__ = (_Bool)1;
    if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result182__;
    __freed_obj__ = 0;
    if(left_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(left_type_115 && !__freed_obj__) { come_call_finalizer(sType_finalize,left_type_115, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value234;
struct sNode* __dec_obj101;
void* right_value235;
char* __dec_obj102;
struct sDummyHeapNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value234, 0, sizeof(void*));
memset(&right_value235, 0, sizeof(void*));
    __dec_obj101=((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1269))->node;
    ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1269))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNode_clone(node))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { right_value234 = come_decrement_ref_count(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value234;
    __freed_obj__ = 0;
    ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1271))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1271))->sline;
    __freed_obj__ = 0;
    __dec_obj102=((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1272))->sname;
    ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1272))->sname=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1272))->sname))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value235;
    __freed_obj__ = 0;
    __result183__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result183__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result184__ = ((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1279))->sline;
    __freed_obj__ = 0;
    return __result184__;
    __freed_obj__ = 0;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value236;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value236, 0, sizeof(void*));
    __result185__ = __result_obj__ = ((char*)(right_value236=__builtin_string(((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1284))->sname)));
    __freed_obj__ = 0;
    return __result185__;
    __freed_obj__ = 0;
}

_Bool sDummyHeapNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result186__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result186__;
    __freed_obj__ = 0;
}

char* sDummyHeapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value237;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value237, 0, sizeof(void*));
    __result187__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sDummyHeapNode")));
    __freed_obj__ = 0;
    return __result187__;
    __freed_obj__ = 0;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_119;
_Bool _if_conditional186;
_Bool __result188__;
void* right_value238;
struct CVALUE* come_value_120;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_119, 0, sizeof(struct sNode*));
memset(&right_value238, 0, sizeof(void*));
memset(&come_value_120, 0, sizeof(struct CVALUE*));
    node_119=((struct sDummyHeapNode*)come_null_check(self, "21obj.c", 1299))->node;
    __freed_obj__ = 0;
    if(_if_conditional186=!((struct sNode*)come_null_check(node_119, "21obj.c", 1305))->compile(((struct sNode*)come_null_check(node_119, "21obj.c", 1305))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional186) {
        __result188__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result188__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value238;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    ((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_120, "21obj.c", 1308))->type, "21obj.c", 1308))->mHeap=(_Bool)1;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1310))->stack, "21obj.c", 1310)),(struct CVALUE*)come_increment_ref_count(come_value_120));
    __freed_obj__ = 0;
    __result189__ = (_Bool)1;
    if(come_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result189__;
    __freed_obj__ = 0;
    if(come_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value239;
struct sNode* __dec_obj103;
void* right_value240;
char* __dec_obj104;
struct sGCIncNode* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value239, 0, sizeof(void*));
memset(&right_value240, 0, sizeof(void*));
    __dec_obj103=((struct sGCIncNode*)come_null_check(self, "21obj.c", 1323))->node;
    ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1323))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=sNode_clone(node))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value239;
    __freed_obj__ = 0;
    ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1325))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1325))->sline;
    __freed_obj__ = 0;
    __dec_obj104=((struct sGCIncNode*)come_null_check(self, "21obj.c", 1326))->sname;
    ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1326))->sname=(char*)come_increment_ref_count(((char*)(right_value240=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1326))->sname))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value240;
    __freed_obj__ = 0;
    __result190__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result190__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result191__ = ((struct sGCIncNode*)come_null_check(self, "21obj.c", 1333))->sline;
    __freed_obj__ = 0;
    return __result191__;
    __freed_obj__ = 0;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value241;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value241, 0, sizeof(void*));
    __result192__ = __result_obj__ = ((char*)(right_value241=__builtin_string(((struct sGCIncNode*)come_null_check(self, "21obj.c", 1338))->sname)));
    __freed_obj__ = 0;
    return __result192__;
    __freed_obj__ = 0;
}

_Bool sGCIncNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result193__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result193__;
    __freed_obj__ = 0;
}

char* sGCIncNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value242;
char* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
    __result194__ = __result_obj__ = ((char*)(right_value242=__builtin_string("sGCIncNode")));
    __freed_obj__ = 0;
    return __result194__;
    __freed_obj__ = 0;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_121;
_Bool _if_conditional189;
_Bool __result195__;
void* right_value243;
struct CVALUE* come_value_122;
struct sType* type_123;
_Bool _if_conditional190;
void* right_value244;
char* type_name_124;
void* right_value245;
char* __dec_obj105;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_121, 0, sizeof(struct sNode*));
memset(&right_value243, 0, sizeof(void*));
memset(&come_value_122, 0, sizeof(struct CVALUE*));
memset(&type_123, 0, sizeof(struct sType*));
memset(&right_value244, 0, sizeof(void*));
memset(&type_name_124, 0, sizeof(char*));
memset(&right_value245, 0, sizeof(void*));
    node_121=((struct sGCIncNode*)come_null_check(self, "21obj.c", 1353))->node;
    __freed_obj__ = 0;
    if(_if_conditional189=!((struct sNode*)come_null_check(node_121, "21obj.c", 1359))->compile(((struct sNode*)come_null_check(node_121, "21obj.c", 1359))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional189) {
        __result195__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result195__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_123=((struct CVALUE*)come_null_check(come_value_122, "21obj.c", 1362))->type;
    __freed_obj__ = 0;
    if(_if_conditional190=((struct sType*)come_null_check(((struct CVALUE*)come_null_check(come_value_122, "21obj.c", 1369))->type, "21obj.c", 1369))->mHeap,    __freed_obj__ = 0, 
    _if_conditional190) {
        come_clear_stackframe();
        type_name_124=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 1365),((struct optional$2charphbool*)(right_value244=make_type_name_string(type_123,(_Bool)0,(_Bool)0,(_Bool)0,info))))));
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value244;
        __freed_obj__ = 0;
        __dec_obj105=((struct CVALUE*)come_null_check(come_value_122, "21obj.c", 1366))->c_value;
        ((struct CVALUE*)come_null_check(come_value_122, "21obj.c", 1366))->c_value=(char*)come_increment_ref_count(((char*)(right_value245=increment_ref_count_object(((struct CVALUE*)come_null_check(come_value_122, "21obj.c", 1366))->type,((struct CVALUE*)come_null_check(come_value_122, "21obj.c", 1366))->c_value,info))));
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value245);
        if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value245;
        __freed_obj__ = 0;
        if(type_name_124 && !__freed_obj__) { type_name_124 = come_decrement_ref_count(type_name_124, (void*)0, (void*)0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1369))->stack, "21obj.c", 1369)),(struct CVALUE*)come_increment_ref_count(come_value_122));
    __freed_obj__ = 0;
    __result196__ = (_Bool)1;
    if(come_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result196__;
    __freed_obj__ = 0;
    if(come_value_122 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value246;
struct sNode* __dec_obj106;
void* right_value247;
char* __dec_obj107;
struct sGCDecNode* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
    __dec_obj106=((struct sGCDecNode*)come_null_check(self, "21obj.c", 1382))->node;
    ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1382))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(node))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value246;
    __freed_obj__ = 0;
    ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1384))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1384))->sline;
    __freed_obj__ = 0;
    __dec_obj107=((struct sGCDecNode*)come_null_check(self, "21obj.c", 1385))->sname;
    ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1385))->sname=(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1385))->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value247;
    __freed_obj__ = 0;
    __result197__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result197__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result198__ = ((struct sGCDecNode*)come_null_check(self, "21obj.c", 1392))->sline;
    __freed_obj__ = 0;
    return __result198__;
    __freed_obj__ = 0;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value248;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value248, 0, sizeof(void*));
    __result199__ = __result_obj__ = ((char*)(right_value248=__builtin_string(((struct sGCDecNode*)come_null_check(self, "21obj.c", 1397))->sname)));
    __freed_obj__ = 0;
    return __result199__;
    __freed_obj__ = 0;
}

_Bool sGCDecNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result200__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result200__;
    __freed_obj__ = 0;
}

char* sGCDecNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value249;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
    __result201__ = __result_obj__ = ((char*)(right_value249=__builtin_string("sGCDecNode")));
    __freed_obj__ = 0;
    return __result201__;
    __freed_obj__ = 0;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* node_125;
_Bool _if_conditional193;
_Bool __result202__;
void* right_value250;
struct CVALUE* come_value_126;
struct sType* type_127;
_Bool __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_125, 0, sizeof(struct sNode*));
memset(&right_value250, 0, sizeof(void*));
memset(&come_value_126, 0, sizeof(struct CVALUE*));
memset(&type_127, 0, sizeof(struct sType*));
    node_125=((struct sGCDecNode*)come_null_check(self, "21obj.c", 1412))->node;
    __freed_obj__ = 0;
    if(_if_conditional193=!((struct sNode*)come_null_check(node_125, "21obj.c", 1418))->compile(((struct sNode*)come_null_check(node_125, "21obj.c", 1418))->_protocol_obj,info),    __freed_obj__ = 0, 
    _if_conditional193) {
        __result202__ = (_Bool)0;
        __freed_obj__ = 0;
        return __result202__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value250;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    __freed_obj__ = 0;
    type_127=((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1421))->type;
    __freed_obj__ = 0;
    decrement_ref_count_object(type_127,((struct CVALUE*)come_null_check(come_value_126, "21obj.c", 1423))->c_value,info,(_Bool)0);
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1425))->stack, "21obj.c", 1425)),(struct CVALUE*)come_increment_ref_count(come_value_126));
    __freed_obj__ = 0;
    __result203__ = (_Bool)1;
    if(come_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = 0;
    return __result203__;
    __freed_obj__ = 0;
    if(come_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value251;
struct sType* __dec_obj108;
void* right_value252;
char* __dec_obj109;
struct sIsHeap* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value252, 0, sizeof(void*));
    __dec_obj108=((struct sIsHeap*)come_null_check(self, "21obj.c", 1438))->type;
    ((struct sIsHeap*)come_null_check(self, "21obj.c", 1438))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(type))));
    if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value251;
    __freed_obj__ = 0;
    ((struct sIsHeap*)come_null_check(self, "21obj.c", 1440))->sline=((struct sInfo*)come_null_check(info, "21obj.c", 1440))->sline;
    __freed_obj__ = 0;
    __dec_obj109=((struct sIsHeap*)come_null_check(self, "21obj.c", 1441))->sname;
    ((struct sIsHeap*)come_null_check(self, "21obj.c", 1441))->sname=(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(((struct sInfo*)come_null_check(info, "21obj.c", 1441))->sname))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value252);
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value252;
    __freed_obj__ = 0;
    __result204__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
    __freed_obj__ = 0;
    return __result204__;
    __freed_obj__ = 0;
    if(self && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(type && !__freed_obj__) { come_call_finalizer(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result205__ = ((struct sIsHeap*)come_null_check(self, "21obj.c", 1448))->sline;
    __freed_obj__ = 0;
    return __result205__;
    __freed_obj__ = 0;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value253;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value253, 0, sizeof(void*));
    __result206__ = __result_obj__ = ((char*)(right_value253=__builtin_string(((struct sIsHeap*)come_null_check(self, "21obj.c", 1453))->sname)));
    __freed_obj__ = 0;
    return __result206__;
    __freed_obj__ = 0;
}

_Bool sIsHeap_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result207__ = (_Bool)0;
    __freed_obj__ = 0;
    return __result207__;
    __freed_obj__ = 0;
}

char* sIsHeap_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value254;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value254, 0, sizeof(void*));
    __result208__ = __result_obj__ = ((char*)(right_value254=__builtin_string("sIsHeap")));
    __freed_obj__ = 0;
    return __result208__;
    __freed_obj__ = 0;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sType* node_128;
_Bool _if_conditional196;
void* right_value255;
struct CVALUE* come_value_129;
void* right_value256;
char* __dec_obj110;
void* right_value257;
void* right_value258;
struct sType* __dec_obj111;
void* right_value259;
struct CVALUE* come_value_130;
void* right_value260;
char* __dec_obj112;
void* right_value261;
void* right_value262;
struct sType* __dec_obj113;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&node_128, 0, sizeof(struct sType*));
memset(&right_value255, 0, sizeof(void*));
memset(&come_value_129, 0, sizeof(struct CVALUE*));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
memset(&come_value_130, 0, sizeof(struct CVALUE*));
memset(&right_value260, 0, sizeof(void*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value262, 0, sizeof(void*));
    node_128=((struct sIsHeap*)come_null_check(self, "21obj.c", 1468))->type;
    __freed_obj__ = 0;
    if(_if_conditional196=((struct sType*)come_null_check(((struct sIsHeap*)come_null_check(self, "21obj.c", 1493))->type, "21obj.c", 1493))->mHeap,    __freed_obj__ = 0, 
    _if_conditional196) {
        come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value255=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1471))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value255;
        __freed_obj__ = 0;
        __dec_obj110=((struct CVALUE*)come_null_check(come_value_129, "21obj.c", 1473))->c_value;
        ((struct CVALUE*)come_null_check(come_value_129, "21obj.c", 1473))->c_value=(char*)come_increment_ref_count(((char*)(right_value256=xsprintf("1"))));
        if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value256);
        if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value256;
        __freed_obj__ = 0;
        __dec_obj111=((struct CVALUE*)come_null_check(come_value_129, "21obj.c", 1474))->type;
        ((struct CVALUE*)come_null_check(come_value_129, "21obj.c", 1474))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value258=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value257=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1474)))),"int",(_Bool)0,info))));
        if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value257;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value258;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_129, "21obj.c", 1475))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1477))->stack, "21obj.c", 1477)),(struct CVALUE*)come_increment_ref_count(come_value_129));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_129, "21obj.c", 1479))->c_value);
        __freed_obj__ = 0;
        if(come_value_129 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1482))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value259;
        __freed_obj__ = 0;
        __dec_obj112=((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1484))->c_value;
        ((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1484))->c_value=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("0"))));
        if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value260;
        __freed_obj__ = 0;
        __dec_obj113=((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1485))->type;
        ((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1485))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value262=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value261=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1485)))),"int",(_Bool)0,info))));
        if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value261;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value262;
        __freed_obj__ = 0;
        ((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1486))->var=((void*)0);
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(((struct list$1CVALUEph*)come_null_check(((struct sInfo*)come_null_check(info, "21obj.c", 1488))->stack, "21obj.c", 1488)),(struct CVALUE*)come_increment_ref_count(come_value_130));
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",((struct CVALUE*)come_null_check(come_value_130, "21obj.c", 1490))->c_value);
        __freed_obj__ = 0;
        if(come_value_130 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __freed_obj__ = 0;
    __result209__ = (_Bool)1;
    __freed_obj__ = 0;
    return __result209__;
    __freed_obj__ = 0;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
void* right_value263;
struct tuple3$3sTypephcharphbool* multiple_assgin_var4;
struct sType* type_132;
char* name_133;
_Bool err_134;
_Bool _if_conditional202;
void* right_value264;
void* right_value265;
struct sNode* __result213__;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value266;
struct sType* inf_type_135;
void* right_value267;
struct sNode* node_136;
void* right_value268;
void* right_value269;
void* right_value270;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value275;
void* right_value276;
void* right_value277;
struct sNode* __result219__;
void* right_value278;
void* right_value279;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value283;
struct sNode* obj_140;
void* right_value284;
char* fun_name_141;
void* right_value285;
void* right_value286;
void* right_value287;
void* right_value288;
struct sNode* __result222__;
void* right_value289;
void* right_value290;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value294;
void* right_value295;
void* right_value296;
struct sNode* __result225__;
_Bool _if_conditional227;
void* right_value297;
void* right_value298;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value301;
void* right_value302;
void* right_value303;
struct sNode* __result228__;
_Bool _if_conditional232;
void* right_value304;
void* right_value305;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value308;
void* right_value309;
void* right_value310;
struct sNode* __result231__;
_Bool _if_conditional237;
void* right_value311;
struct sNode* node_145;
void* right_value312;
void* right_value313;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value317;
void* right_value318;
void* right_value319;
struct sNode* __result234__;
_Bool _if_conditional244;
void* right_value320;
struct sNode* node_147;
void* right_value321;
void* right_value322;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value326;
void* right_value327;
void* right_value328;
struct sNode* __result237__;
_Bool _if_conditional251;
void* right_value329;
struct sNode* node_149;
void* right_value330;
void* right_value331;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value335;
void* right_value336;
void* right_value337;
struct sNode* __result240__;
_Bool _if_conditional258;
void* right_value338;
struct sNode* node_151;
void* right_value339;
void* right_value340;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value344;
void* right_value345;
void* right_value346;
struct sNode* __result243__;
_Bool _if_conditional265;
void* right_value347;
struct sNode* node_153;
void* right_value348;
void* right_value349;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value353;
void* right_value354;
void* right_value355;
struct sNode* __result246__;
_Bool _if_conditional272;
void* right_value356;
struct sNode* node_155;
void* right_value357;
void* right_value358;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value362;
void* right_value363;
void* right_value364;
struct sNode* __result249__;
_Bool _if_conditional279;
void* right_value365;
struct sNode* node_157;
void* right_value366;
void* right_value367;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value371;
void* right_value372;
void* right_value373;
struct sNode* __result252__;
_Bool _if_conditional286;
void* right_value374;
struct sNode* node_159;
void* right_value375;
void* right_value376;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value380;
void* right_value381;
void* right_value382;
struct sNode* __result255__;
_Bool _if_conditional293;
void* right_value383;
struct sNode* node_161;
void* right_value384;
void* right_value385;
void* right_value386;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value390;
void* right_value391;
void* right_value392;
struct sNode* __result258__;
_Bool _if_conditional300;
void* right_value393;
struct sNode* node_163;
void* right_value394;
void* right_value395;
void* right_value396;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value400;
void* right_value401;
void* right_value402;
struct sNode* __result261__;
_Bool _if_conditional307;
void* right_value403;
struct tuple3$3sTypephcharphbool* multiple_assgin_var5;
struct sType* param_type_165;
char* param_name_166;
_Bool err_167;
_Bool _if_conditional308;
void* right_value404;
void* right_value405;
struct sNode* __result262__;
void* right_value406;
struct sType* type2_168;
void* right_value407;
void* right_value408;
void* right_value409;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value413;
void* right_value414;
void* right_value415;
struct sNode* __result265__;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value416;
void* right_value417;
struct sNode* _inf_value20;
struct sNullNodeX* _inf_obj_value20;
void* right_value420;
void* right_value421;
void* right_value422;
struct sNode* __result268__;
_Bool _if_conditional321;
_Bool _if_conditional322;
void* right_value423;
struct sNode* node_171;
void* right_value424;
void* right_value425;
struct sNode* __result269__;
void* right_value426;
void* right_value427;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value430;
void* right_value431;
void* right_value432;
struct sNode* __result272__;
_Bool _if_conditional327;
void* right_value433;
void* right_value434;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value437;
void* right_value438;
void* right_value439;
struct sNode* __result275__;
_Bool _if_conditional332;
void* right_value440;
void* right_value441;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value444;
void* right_value445;
void* right_value446;
struct sNode* __result278__;
_Bool _if_conditional337;
void* right_value447;
void* right_value448;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value451;
void* right_value452;
void* right_value453;
struct sNode* __result281__;
_Bool _if_conditional342;
void* right_value454;
void* right_value455;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value458;
void* right_value459;
void* right_value460;
struct sNode* __result284__;
void* right_value461;
void* right_value462;
struct sNode* __result285__;
_Bool _if_conditional347;
void* right_value463;
_Bool is_type_name_flag_177;
char* p_178;
int sline_179;
_Bool _if_conditional348;
void* right_value464;
char* word_180;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value465;
struct tuple3$3sTypephcharphbool* multiple_assgin_var6;
struct sType* type_181;
char* name_182;
_Bool err_183;
_Bool _if_conditional351;
void* right_value466;
void* right_value467;
struct sNode* __result286__;
void* right_value468;
void* right_value469;
void* right_value470;
struct sNode* _inf_value26;
struct sSizeOfNode* _inf_obj_value26;
void* right_value474;
void* right_value475;
void* right_value476;
struct sNode* __result289__;
void* right_value477;
struct sNode* exp_185;
void* right_value478;
void* right_value479;
void* right_value480;
struct sNode* _inf_value27;
struct sSizeOfExpNode* _inf_obj_value27;
void* right_value484;
void* right_value485;
void* right_value486;
struct sNode* __result292__;
_Bool _if_conditional364;
void* right_value487;
_Bool is_type_name_flag_187;
char* p_188;
int sline_189;
_Bool _if_conditional365;
void* right_value488;
char* word_190;
_Bool _if_conditional366;
_Bool _if_conditional367;
void* right_value489;
struct tuple3$3sTypephcharphbool* multiple_assgin_var7;
struct sType* type_191;
char* name_192;
_Bool err_193;
_Bool _if_conditional368;
void* right_value490;
void* right_value491;
struct sNode* __result293__;
void* right_value492;
void* right_value493;
void* right_value494;
struct sNode* _inf_value28;
struct sAlignOfNode* _inf_obj_value28;
void* right_value498;
void* right_value499;
void* right_value500;
struct sNode* __result296__;
void* right_value501;
struct sNode* exp_195;
void* right_value502;
void* right_value503;
void* right_value504;
struct sNode* _inf_value29;
struct sAlignOfExpNode* _inf_obj_value29;
void* right_value508;
void* right_value509;
void* right_value510;
struct sNode* __result299__;
_Bool _if_conditional381;
void* right_value511;
_Bool is_type_name_flag_197;
char* p_198;
int sline_199;
_Bool _if_conditional382;
void* right_value512;
char* word_200;
_Bool _if_conditional383;
_Bool _if_conditional384;
void* right_value513;
struct tuple3$3sTypephcharphbool* multiple_assgin_var8;
struct sType* type_201;
char* name_202;
_Bool err_203;
_Bool _if_conditional385;
void* right_value514;
void* right_value515;
struct sNode* __result300__;
void* right_value516;
void* right_value517;
void* right_value518;
struct sNode* _inf_value30;
struct sAlignOfNode2* _inf_obj_value30;
void* right_value522;
void* right_value523;
void* right_value524;
struct sNode* __result303__;
void* right_value525;
struct sNode* exp_205;
void* right_value526;
void* right_value527;
void* right_value528;
struct sNode* _inf_value31;
struct sAlignOfExpNode2* _inf_obj_value31;
void* right_value532;
void* right_value533;
void* right_value534;
struct sNode* __result306__;
_Bool _if_conditional398;
void* right_value535;
_Bool is_type_name_flag_207;
char* p_208;
int sline_209;
_Bool _if_conditional399;
void* right_value536;
char* word_210;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value537;
struct tuple3$3sTypephcharphbool* multiple_assgin_var9;
struct sType* type_211;
char* name_212;
_Bool err_213;
_Bool _if_conditional402;
void* right_value538;
void* right_value539;
struct sNode* __result307__;
void* right_value540;
void* right_value541;
void* right_value542;
struct sNode* _inf_value32;
struct sAlignAsNode* _inf_obj_value32;
void* right_value546;
void* right_value547;
void* right_value548;
struct sNode* __result310__;
void* right_value549;
struct sNode* exp_215;
void* right_value550;
void* right_value551;
void* right_value552;
struct sNode* _inf_value33;
struct sAlignAsExpNode* _inf_obj_value33;
void* right_value556;
void* right_value557;
void* right_value558;
struct sNode* __result313__;
void* right_value559;
struct __current_stack1__ __current_stack1__;
void* right_value562;
struct sNode* result_217;
void* right_value563;
void* right_value564;
struct sNode* __result316__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&type_132, 0, sizeof(struct sType*));
memset(&name_133, 0, sizeof(char*));
memset(&err_134, 0, sizeof(_Bool));
memset(&type_132, 0, sizeof(struct sType*));
memset(&name_133, 0, sizeof(char*));
memset(&err_134, 0, sizeof(_Bool));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
memset(&right_value266, 0, sizeof(void*));
memset(&inf_type_135, 0, sizeof(struct sType*));
memset(&right_value267, 0, sizeof(void*));
memset(&node_136, 0, sizeof(struct sNode*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
memset(&right_value270, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
memset(&right_value283, 0, sizeof(void*));
memset(&obj_140, 0, sizeof(struct sNode*));
memset(&right_value284, 0, sizeof(void*));
memset(&fun_name_141, 0, sizeof(char*));
memset(&right_value285, 0, sizeof(void*));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
memset(&right_value290, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
memset(&right_value310, 0, sizeof(void*));
memset(&right_value311, 0, sizeof(void*));
memset(&node_145, 0, sizeof(struct sNode*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
memset(&right_value320, 0, sizeof(void*));
memset(&node_147, 0, sizeof(struct sNode*));
memset(&right_value321, 0, sizeof(void*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&node_149, 0, sizeof(struct sNode*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value335, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_value338, 0, sizeof(void*));
memset(&node_151, 0, sizeof(struct sNode*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&node_153, 0, sizeof(struct sNode*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&node_155, 0, sizeof(struct sNode*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_value365, 0, sizeof(void*));
memset(&node_157, 0, sizeof(struct sNode*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&node_159, 0, sizeof(struct sNode*));
memset(&right_value375, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value383, 0, sizeof(void*));
memset(&node_161, 0, sizeof(struct sNode*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value392, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&node_163, 0, sizeof(struct sNode*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_value403, 0, sizeof(void*));
memset(&param_type_165, 0, sizeof(struct sType*));
memset(&param_name_166, 0, sizeof(char*));
memset(&err_167, 0, sizeof(_Bool));
memset(&param_type_165, 0, sizeof(struct sType*));
memset(&param_name_166, 0, sizeof(char*));
memset(&err_167, 0, sizeof(_Bool));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_value406, 0, sizeof(void*));
memset(&type2_168, 0, sizeof(struct sType*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value416, 0, sizeof(void*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_value423, 0, sizeof(void*));
memset(&node_171, 0, sizeof(struct sNode*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value425, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_value458, 0, sizeof(void*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
memset(&right_value463, 0, sizeof(void*));
memset(&is_type_name_flag_177, 0, sizeof(_Bool));
memset(&p_178, 0, sizeof(char*));
memset(&sline_179, 0, sizeof(int));
memset(&right_value464, 0, sizeof(void*));
memset(&word_180, 0, sizeof(char*));
memset(&right_value465, 0, sizeof(void*));
memset(&type_181, 0, sizeof(struct sType*));
memset(&name_182, 0, sizeof(char*));
memset(&err_183, 0, sizeof(_Bool));
memset(&type_181, 0, sizeof(struct sType*));
memset(&name_182, 0, sizeof(char*));
memset(&err_183, 0, sizeof(_Bool));
memset(&right_value466, 0, sizeof(void*));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value474, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&right_value476, 0, sizeof(void*));
memset(&right_value477, 0, sizeof(void*));
memset(&exp_185, 0, sizeof(struct sNode*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
memset(&is_type_name_flag_187, 0, sizeof(_Bool));
memset(&p_188, 0, sizeof(char*));
memset(&sline_189, 0, sizeof(int));
memset(&right_value488, 0, sizeof(void*));
memset(&word_190, 0, sizeof(char*));
memset(&right_value489, 0, sizeof(void*));
memset(&type_191, 0, sizeof(struct sType*));
memset(&name_192, 0, sizeof(char*));
memset(&err_193, 0, sizeof(_Bool));
memset(&type_191, 0, sizeof(struct sType*));
memset(&name_192, 0, sizeof(char*));
memset(&err_193, 0, sizeof(_Bool));
memset(&right_value490, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&right_value493, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value498, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
memset(&exp_195, 0, sizeof(struct sNode*));
memset(&right_value502, 0, sizeof(void*));
memset(&right_value503, 0, sizeof(void*));
memset(&right_value504, 0, sizeof(void*));
memset(&right_value508, 0, sizeof(void*));
memset(&right_value509, 0, sizeof(void*));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&is_type_name_flag_197, 0, sizeof(_Bool));
memset(&p_198, 0, sizeof(char*));
memset(&sline_199, 0, sizeof(int));
memset(&right_value512, 0, sizeof(void*));
memset(&word_200, 0, sizeof(char*));
memset(&right_value513, 0, sizeof(void*));
memset(&type_201, 0, sizeof(struct sType*));
memset(&name_202, 0, sizeof(char*));
memset(&err_203, 0, sizeof(_Bool));
memset(&type_201, 0, sizeof(struct sType*));
memset(&name_202, 0, sizeof(char*));
memset(&err_203, 0, sizeof(_Bool));
memset(&right_value514, 0, sizeof(void*));
memset(&right_value515, 0, sizeof(void*));
memset(&right_value516, 0, sizeof(void*));
memset(&right_value517, 0, sizeof(void*));
memset(&right_value518, 0, sizeof(void*));
memset(&right_value522, 0, sizeof(void*));
memset(&right_value523, 0, sizeof(void*));
memset(&right_value524, 0, sizeof(void*));
memset(&right_value525, 0, sizeof(void*));
memset(&exp_205, 0, sizeof(struct sNode*));
memset(&right_value526, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&right_value528, 0, sizeof(void*));
memset(&right_value532, 0, sizeof(void*));
memset(&right_value533, 0, sizeof(void*));
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&is_type_name_flag_207, 0, sizeof(_Bool));
memset(&p_208, 0, sizeof(char*));
memset(&sline_209, 0, sizeof(int));
memset(&right_value536, 0, sizeof(void*));
memset(&word_210, 0, sizeof(char*));
memset(&right_value537, 0, sizeof(void*));
memset(&type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&type_211, 0, sizeof(struct sType*));
memset(&name_212, 0, sizeof(char*));
memset(&err_213, 0, sizeof(_Bool));
memset(&right_value538, 0, sizeof(void*));
memset(&right_value539, 0, sizeof(void*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_value541, 0, sizeof(void*));
memset(&right_value542, 0, sizeof(void*));
memset(&right_value546, 0, sizeof(void*));
memset(&right_value547, 0, sizeof(void*));
memset(&right_value548, 0, sizeof(void*));
memset(&right_value549, 0, sizeof(void*));
memset(&exp_215, 0, sizeof(struct sNode*));
memset(&right_value550, 0, sizeof(void*));
memset(&right_value551, 0, sizeof(void*));
memset(&right_value552, 0, sizeof(void*));
memset(&right_value556, 0, sizeof(void*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&__current_stack1__, 0, sizeof(struct __current_stack1__));
memset(&right_value562, 0, sizeof(void*));
memset(&result_217, 0, sizeof(struct sNode*));
memset(&right_value563, 0, sizeof(void*));
memset(&right_value564, 0, sizeof(void*));
    if(_if_conditional197=charp_operator_equals(buf,"new"),    __freed_obj__ = 0, 
    _if_conditional197) {
        come_clear_stackframe();
        multiple_assgin_var4=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("21obj.c", 1499),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value263=parse_type(info,(_Bool)0,(_Bool)1)))));
        type_132=(struct sType*)come_increment_ref_count(multiple_assgin_var4->v1);
        name_133=(char*)come_increment_ref_count(multiple_assgin_var4->v2);
        err_134=multiple_assgin_var4->v3;
        come_pop_stackframe();
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value263;
        __freed_obj__ = 0;
        if(_if_conditional202=!err_134,        __freed_obj__ = 0, 
        _if_conditional202) {
            err_msg(info,"parse_type failed");
            __freed_obj__ = 0;
            __result213__ = __result_obj__ = (come_save_stackframe("21obj.c", 1502), ((struct optional$2voidpbool*)(right_value265=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value264=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1502))),((void*)0),(_Bool)0))));
            if(type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_133 && !__freed_obj__) { name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
            if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value264;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value265);
            if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value265;
            __freed_obj__ = 0;
            return __result213__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(_if_conditional203=*((struct sInfo*)come_null_check(info, "21obj.c", 1528))->p==40,        __freed_obj__ = 0, 
        _if_conditional203) {
            if(_if_conditional204=((struct sClass*)come_null_check(((struct sType*)come_null_check(type_132, "21obj.c", 1524))->mClass, "21obj.c", 1524))->mProtocol,            __freed_obj__ = 0, 
            _if_conditional204) {
                ((struct sInfo*)come_null_check(info, "21obj.c", 1507))->p++;
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                inf_type_135=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(type_132))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
                if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value266;
                __freed_obj__ = 0;
                node_136=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=expression_v13(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
                if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[1] = right_value267;
                __freed_obj__ = 0;
                come_clear_stackframe();
                optional$2intbool_value((come_push_stackframe("21obj.c", 1514),((struct optional$2intbool*)(right_value268=expected_next_character(41,info)))));
                come_pop_stackframe();
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value268);
                if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value268;
                __freed_obj__ = 0;
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1516);
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value270=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value269=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1516)))),(struct sNode*)come_increment_ref_count(node_136),(struct sType*)come_increment_ref_count(inf_type_135),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result219__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value277=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value276=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1516)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=_inf_value4))),(_Bool)1)));
                if(inf_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_136 && !__freed_obj__) { node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0, 0); } 
                if(type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_133 && !__freed_obj__) { name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value269);
                if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value269;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value270);
                if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[4] = right_value270;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value275);
                if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[5] = right_value275;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value276);
                if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value276;
                __freed_obj__ = 0;
                return __result219__;
                __freed_obj__ = 0;
                if(inf_type_135 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_135, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(node_136 && !__freed_obj__) { node_136 = come_decrement_ref_count(node_136, ((struct sNode*)node_136)->finalize, ((struct sNode*)node_136)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1519);
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value279=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value278=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1519)))),(struct sType*)come_increment_ref_count(type_132),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_140=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=_inf_value5)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
                if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value278;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value279);
                if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value279;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value283);
                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value283;
                __freed_obj__ = 0;
                fun_name_141=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string("initialize"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value284);
                if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value284;
                __freed_obj__ = 0;
                __result222__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value288=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value287=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1522)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=sNode_clone(obj_140)))),(char*)come_increment_ref_count(fun_name_141),info)))),(_Bool)1)));
                if(obj_140 && !__freed_obj__) { obj_140 = come_decrement_ref_count(obj_140, ((struct sNode*)obj_140)->finalize, ((struct sNode*)obj_140)->_protocol_obj, 0, 0, 0); } 
                if(fun_name_141 && !__freed_obj__) { fun_name_141 = come_decrement_ref_count(fun_name_141, (void*)0, (void*)0, 0, 0, 0); }
                if(type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(name_133 && !__freed_obj__) { name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value285);
                if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[4] = right_value285;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value286);
                if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[5] = right_value286;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value287);
                if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[6] = right_value287;
                __freed_obj__ = 0;
                return __result222__;
                __freed_obj__ = 0;
                if(obj_140 && !__freed_obj__) { obj_140 = come_decrement_ref_count(obj_140, ((struct sNode*)obj_140)->finalize, ((struct sNode*)obj_140)->_protocol_obj, 0, 0, 0); } 
                if(fun_name_141 && !__freed_obj__) { fun_name_141 = come_decrement_ref_count(fun_name_141, (void*)0, (void*)0, 0, 0, 0); }
            }
            __freed_obj__ = 0;
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1526);
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value290=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value289=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1526)))),(struct sType*)come_increment_ref_count(type_132),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result225__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value296=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value295=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1526)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=_inf_value6))),(_Bool)1)));
            if(type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(name_133 && !__freed_obj__) { name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
            if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value289;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value290);
            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value290;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value294);
            if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value294;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value295);
            if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value295;
            __freed_obj__ = 0;
            return __result225__;
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        if(type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name_133 && !__freed_obj__) { name_133 = come_decrement_ref_count(name_133, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        if(_if_conditional227=charp_operator_equals(buf,"true"),        __freed_obj__ = 0, 
        _if_conditional227) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1530);
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value298=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value297=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1530)))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result228__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value303=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value302=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1530)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value301=_inf_value7))),(_Bool)1)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
            if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value297;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value298);
            if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value298;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value301);
            if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, ((struct sNode*)right_value301)->finalize, ((struct sNode*)right_value301)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value301;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value302);
            if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value302;
            __freed_obj__ = 0;
            return __result228__;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional232=charp_operator_equals(buf,"false"),            __freed_obj__ = 0, 
            _if_conditional232) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1533);
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value305=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value304=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1533)))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result231__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value310=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value309=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1533)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=_inf_value8))),(_Bool)1)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
                if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value304;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value305);
                if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value305;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value308);
                if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value308;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value309);
                if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[3] = right_value309;
                __freed_obj__ = 0;
                return __result231__;
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional237=charp_operator_equals(buf,"delete"),                __freed_obj__ = 0, 
                _if_conditional237) {
                    node_145=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=expression_v13(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
                    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value311;
                    __freed_obj__ = 0;
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1538);
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value313=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value312=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1538)))),(struct sNode*)come_increment_ref_count(node_145),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result234__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value319=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value318=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1538)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=_inf_value9))),(_Bool)1)));
                    if(node_145 && !__freed_obj__) { node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value312);
                    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value312;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value313);
                    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value313;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value317);
                    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value317;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value318);
                    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[4] = right_value318;
                    __freed_obj__ = 0;
                    return __result234__;
                    __freed_obj__ = 0;
                    if(node_145 && !__freed_obj__) { node_145 = come_decrement_ref_count(node_145, ((struct sNode*)node_145)->finalize, ((struct sNode*)node_145)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional244=charp_operator_equals(buf,"force_delete"),                    __freed_obj__ = 0, 
                    _if_conditional244) {
                        node_147=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value320=expression_v13(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
                        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, ((struct sNode*)right_value320)->finalize, ((struct sNode*)right_value320)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value320;
                        __freed_obj__ = 0;
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1543);
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value322=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value321=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1543)))),(struct sNode*)come_increment_ref_count(node_147),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result237__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value328=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value327=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1543)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=_inf_value10))),(_Bool)1)));
                        if(node_147 && !__freed_obj__) { node_147 = come_decrement_ref_count(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value321);
                        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value321;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value322);
                        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value322;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value326);
                        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value326;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value327);
                        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[4] = right_value327;
                        __freed_obj__ = 0;
                        return __result237__;
                        __freed_obj__ = 0;
                        if(node_147 && !__freed_obj__) { node_147 = come_decrement_ref_count(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional251=charp_operator_equals(buf,"borrow"),                        __freed_obj__ = 0, 
                        _if_conditional251) {
                            node_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=expression_v13(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
                            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value329;
                            __freed_obj__ = 0;
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1549);
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value331=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value330=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1549)))),(struct sNode*)come_increment_ref_count(node_149),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result240__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value337=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value336=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1549)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=_inf_value11))),(_Bool)1)));
                            if(node_149 && !__freed_obj__) { node_149 = come_decrement_ref_count(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
                            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value330;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value331);
                            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value331;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value335);
                            if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { right_value335 = come_decrement_ref_count(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value335;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value336);
                            if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[4] = right_value336;
                            __freed_obj__ = 0;
                            return __result240__;
                            __freed_obj__ = 0;
                            if(node_149 && !__freed_obj__) { node_149 = come_decrement_ref_count(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional258=charp_operator_equals(buf,"delegate"),                            __freed_obj__ = 0, 
                            _if_conditional258) {
                                node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=expression_v13(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
                                if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value338;
                                __freed_obj__ = 0;
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1554);
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value340=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value339=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1554)))),(struct sNode*)come_increment_ref_count(node_151),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result243__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value346=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value345=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1554)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=_inf_value12))),(_Bool)1)));
                                if(node_151 && !__freed_obj__) { node_151 = come_decrement_ref_count(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value339);
                                if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value339;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value340);
                                if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value340;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value344);
                                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[3] = right_value344;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value345);
                                if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[4] = right_value345;
                                __freed_obj__ = 0;
                                return __result243__;
                                __freed_obj__ = 0;
                                if(node_151 && !__freed_obj__) { node_151 = come_decrement_ref_count(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional265=charp_operator_equals(buf,"share"),                                __freed_obj__ = 0, 
                                _if_conditional265) {
                                    node_153=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value347=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value347;
                                    __freed_obj__ = 0;
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1559);
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value349=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value348=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1559)))),(struct sNode*)come_increment_ref_count(node_153),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result246__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value355=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value354=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1559)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=_inf_value13))),(_Bool)1)));
                                    if(node_153 && !__freed_obj__) { node_153 = come_decrement_ref_count(node_153, ((struct sNode*)node_153)->finalize, ((struct sNode*)node_153)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value348);
                                    if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value348;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value349);
                                    if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value349;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value353);
                                    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[3] = right_value353;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value354);
                                    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[4] = right_value354;
                                    __freed_obj__ = 0;
                                    return __result246__;
                                    __freed_obj__ = 0;
                                    if(node_153 && !__freed_obj__) { node_153 = come_decrement_ref_count(node_153, ((struct sNode*)node_153)->finalize, ((struct sNode*)node_153)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional272=charp_operator_equals(buf,"clone"),                                    __freed_obj__ = 0, 
                                    _if_conditional272) {
                                        node_155=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                                        if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value356;
                                        __freed_obj__ = 0;
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1564);
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value358=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value357=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1564)))),(struct sNode*)come_increment_ref_count(node_155),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result249__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value364=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value363=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1564)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=_inf_value14))),(_Bool)1)));
                                        if(node_155 && !__freed_obj__) { node_155 = come_decrement_ref_count(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value357);
                                        if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value357;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value358);
                                        if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value358;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value362);
                                        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[3] = right_value362;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value363);
                                        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[4] = right_value363;
                                        __freed_obj__ = 0;
                                        return __result249__;
                                        __freed_obj__ = 0;
                                        if(node_155 && !__freed_obj__) { node_155 = come_decrement_ref_count(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional279=charp_operator_equals(buf,"dupe"),                                        __freed_obj__ = 0, 
                                        _if_conditional279) {
                                            node_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=expression_v13(info))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                                            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value365;
                                            __freed_obj__ = 0;
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1569);
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value367=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value366=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1569)))),(struct sNode*)come_increment_ref_count(node_157),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result252__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value373=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value372=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1569)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=_inf_value15))),(_Bool)1)));
                                            if(node_157 && !__freed_obj__) { node_157 = come_decrement_ref_count(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value366);
                                            if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value366;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value367);
                                            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[2] = right_value367;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value371);
                                            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[3] = right_value371;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value372);
                                            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[4] = right_value372;
                                            __freed_obj__ = 0;
                                            return __result252__;
                                            __freed_obj__ = 0;
                                            if(node_157 && !__freed_obj__) { node_157 = come_decrement_ref_count(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        else {
                                            if(_if_conditional286=charp_operator_equals(buf,"dummy_heap"),                                            __freed_obj__ = 0, 
                                            _if_conditional286) {
                                                node_159=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                                                if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value374;
                                                __freed_obj__ = 0;
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1574);
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value376=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value375=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1574)))),(struct sNode*)come_increment_ref_count(node_159),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result255__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value382=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value381=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1574)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=_inf_value16))),(_Bool)1)));
                                                if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value375);
                                                if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[1] = right_value375;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value376);
                                                if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[2] = right_value376;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value380);
                                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[3] = right_value380;
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value381);
                                                if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[4] = right_value381;
                                                __freed_obj__ = 0;
                                                return __result255__;
                                                __freed_obj__ = 0;
                                                if(node_159 && !__freed_obj__) { node_159 = come_decrement_ref_count(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional293=charp_operator_equals(buf,"gc_inc")&&*((struct sInfo*)come_null_check(info, "21obj.c", 1829))->p==40,                                                __freed_obj__ = 0, 
                                                _if_conditional293) {
                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1577))->p++;
                                                    __freed_obj__ = 0;
                                                    skip_spaces_and_lf(info);
                                                    __freed_obj__ = 0;
                                                    node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=expression_v13(info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value383);
                                                    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value383;
                                                    __freed_obj__ = 0;
                                                    come_clear_stackframe();
                                                    optional$2intbool_value((come_push_stackframe("21obj.c", 1582),((struct optional$2intbool*)(right_value384=expected_next_character(41,info)))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value384);
                                                    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[1] = right_value384;
                                                    __freed_obj__ = 0;
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1584);
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value386=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value385=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1584)))),(struct sNode*)come_increment_ref_count(node_161),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result258__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value392=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value391=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1584)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value390=_inf_value17))),(_Bool)1)));
                                                    if(node_161 && !__freed_obj__) { node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value385);
                                                    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[2] = right_value385;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value386);
                                                    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[3] = right_value386;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value390);
                                                    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[4] = right_value390;
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value391);
                                                    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[5] = right_value391;
                                                    __freed_obj__ = 0;
                                                    return __result258__;
                                                    __freed_obj__ = 0;
                                                    if(node_161 && !__freed_obj__) { node_161 = come_decrement_ref_count(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0); } 
                                                }
                                                else {
                                                    if(_if_conditional300=charp_operator_equals(buf,"gc_dec")&&*((struct sInfo*)come_null_check(info, "21obj.c", 1829))->p==40,                                                    __freed_obj__ = 0, 
                                                    _if_conditional300) {
                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1587))->p++;
                                                        __freed_obj__ = 0;
                                                        skip_spaces_and_lf(info);
                                                        __freed_obj__ = 0;
                                                        node_163=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=expression_v13(info))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value393);
                                                        if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value393;
                                                        __freed_obj__ = 0;
                                                        come_clear_stackframe();
                                                        optional$2intbool_value((come_push_stackframe("21obj.c", 1592),((struct optional$2intbool*)(right_value394=expected_next_character(41,info)))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value394);
                                                        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[1] = right_value394;
                                                        __freed_obj__ = 0;
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1594);
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value396=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value395=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1594)))),(struct sNode*)come_increment_ref_count(node_163),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result261__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value402=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value401=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1594)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value400=_inf_value18))),(_Bool)1)));
                                                        if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value395);
                                                        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[2] = right_value395;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value396);
                                                        if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[3] = right_value396;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value400);
                                                        if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { right_value400 = come_decrement_ref_count(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[4] = right_value400;
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value401);
                                                        if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[5] = right_value401;
                                                        __freed_obj__ = 0;
                                                        return __result261__;
                                                        __freed_obj__ = 0;
                                                        if(node_163 && !__freed_obj__) { node_163 = come_decrement_ref_count(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional307=charp_operator_equals(buf,"isheap")&&*((struct sInfo*)come_null_check(info, "21obj.c", 1829))->p==40,                                                        __freed_obj__ = 0, 
                                                        _if_conditional307) {
                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1597))->p++;
                                                            __freed_obj__ = 0;
                                                            skip_spaces_and_lf(info);
                                                            __freed_obj__ = 0;
                                                            come_clear_stackframe();
                                                            multiple_assgin_var5=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("21obj.c", 1600),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value403=parse_type(info,(_Bool)0,(_Bool)1)))));
                                                            param_type_165=(struct sType*)come_increment_ref_count(multiple_assgin_var5->v1);
                                                            param_name_166=(char*)come_increment_ref_count(multiple_assgin_var5->v2);
                                                            err_167=multiple_assgin_var5->v3;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                                                            if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value403;
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional308=!err_167,                                                            __freed_obj__ = 0, 
                                                            _if_conditional308) {
                                                                err_msg(info,"parse_type failed");
                                                                __freed_obj__ = 0;
                                                                __result262__ = __result_obj__ = (come_save_stackframe("21obj.c", 1603), ((struct optional$2voidpbool*)(right_value405=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value404=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1603))),((void*)0),(_Bool)0))));
                                                                if(param_type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                if(param_name_166 && !__freed_obj__) { param_name_166 = come_decrement_ref_count(param_name_166, (void*)0, (void*)0, 0, 0, 0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value404);
                                                                if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value404;
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value405);
                                                                if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[1] = right_value405;
                                                                __freed_obj__ = 0;
                                                                return __result262__;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            type2_168=(struct sType*)come_increment_ref_count(((struct sType*)(right_value406=solve_generics(param_type_165,((struct sInfo*)come_null_check(info, "21obj.c", 1606))->generics_type,info))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value406);
                                                            if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[1] = right_value406;
                                                            __freed_obj__ = 0;
                                                            come_clear_stackframe();
                                                            optional$2intbool_value((come_push_stackframe("21obj.c", 1608),((struct optional$2intbool*)(right_value407=expected_next_character(41,info)))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value407);
                                                            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[2] = right_value407;
                                                            __freed_obj__ = 0;
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1610);
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value409=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value408=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1610)))),(struct sType*)come_increment_ref_count(type2_168),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result265__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value415=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value414=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1610)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=_inf_value19))),(_Bool)1)));
                                                            if(param_type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            if(param_name_166 && !__freed_obj__) { param_name_166 = come_decrement_ref_count(param_name_166, (void*)0, (void*)0, 0, 0, 0); }
                                                            if(type2_168 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_168, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value408);
                                                            if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[3] = right_value408;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value409);
                                                            if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[4] = right_value409;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value413);
                                                            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[5] = right_value413;
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value414);
                                                            if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { right_value414 = come_decrement_ref_count(right_value414, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[6] = right_value414;
                                                            __freed_obj__ = 0;
                                                            return __result265__;
                                                            __freed_obj__ = 0;
                                                            if(param_type_165 && !__freed_obj__) { come_call_finalizer(sType_finalize,param_type_165, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                            if(param_name_166 && !__freed_obj__) { param_name_166 = come_decrement_ref_count(param_name_166, (void*)0, (void*)0, 0, 0, 0); }
                                                            if(type2_168 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_168, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                        }
                                                        else {
                                                            if(_if_conditional315=charp_operator_equals(buf,"using"),                                                            __freed_obj__ = 0, 
                                                            _if_conditional315) {
                                                                if(_if_conditional316=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1667))->p,"comelang",strlen("comelang"))==0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional316) {
                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1614))->p+=strlen("comelang");
                                                                    __freed_obj__ = 0;
                                                                    skip_spaces_and_lf(info);
                                                                    __freed_obj__ = 0;
                                                                    gComeC=(_Bool)0;
                                                                    __freed_obj__ = 0;
                                                                    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1619);
                                                                    _inf_obj_value20=come_increment_ref_count(((struct sNullNodeX*)(right_value417=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value416=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1619)))),info))));
                                                                    _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                    _inf_value20->finalize=(void*)sNullNodeX_finalize;
                                                                    _inf_value20->clone=(void*)sNullNodeX_clone;
                                                                    _inf_value20->compile=(void*)sNullNodeX_compile;
                                                                    _inf_value20->sline=(void*)sNullNodeX_sline;
                                                                    _inf_value20->sname=(void*)sNullNodeX_sname;
                                                                    _inf_value20->terminated=(void*)sNullNodeX_terminated;
                                                                    _inf_value20->kind=(void*)sNullNodeX_kind;
                                                                    __result268__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value422=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value421=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1619)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=_inf_value20))),(_Bool)1)));
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                                                                    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value416;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value417);
                                                                    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[1] = right_value417;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value420);
                                                                    if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0); } 
                                                                    __right_value_freed_obj[2] = right_value420;
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value421);
                                                                    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[3] = right_value421;
                                                                    __freed_obj__ = 0;
                                                                    return __result268__;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional321=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1667))->p,"c",strlen("c"))==0||memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1667))->p,"C",strlen("C"))==0,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional321) {
                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1622))->p+=strlen("c");
                                                                        __freed_obj__ = 0;
                                                                        skip_spaces_and_lf(info);
                                                                        __freed_obj__ = 0;
                                                                        gComeC=(_Bool)1;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional322=*((struct sInfo*)come_null_check(info, "21obj.c", 1637))->p==123,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional322) {
                                                                            node_171=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value423=parse_normal_block(info))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value423);
                                                                            if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { right_value423 = come_decrement_ref_count(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[0] = right_value423;
                                                                            __freed_obj__ = 0;
                                                                            gComeC=(_Bool)0;
                                                                            __freed_obj__ = 0;
                                                                            __result269__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value425=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value424=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1632)))),(struct sNode*)come_increment_ref_count(node_171),(_Bool)1)));
                                                                            if(node_171 && !__freed_obj__) { node_171 = come_decrement_ref_count(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0, 0); } 
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value424);
                                                                            if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { right_value424 = come_decrement_ref_count(right_value424, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value424;
                                                                            __freed_obj__ = 0;
                                                                            return __result269__;
                                                                            __freed_obj__ = 0;
                                                                            if(node_171 && !__freed_obj__) { node_171 = come_decrement_ref_count(node_171, ((struct sNode*)node_171)->finalize, ((struct sNode*)node_171)->_protocol_obj, 0, 0, 0); } 
                                                                        }
                                                                        else {
                                                                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1635);
                                                                            _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value427=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value426=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1635)))),info))));
                                                                            _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                            _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                            __result272__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value432=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value431=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1635)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=_inf_value21))),(_Bool)1)));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value426);
                                                                            if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value426;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value427);
                                                                            if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value427;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value430);
                                                                            if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[2] = right_value430;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value431);
                                                                            if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[3] = right_value431;
                                                                            __freed_obj__ = 0;
                                                                            return __result272__;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional327=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1667))->p,"gc",strlen("gc"))==0,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional327) {
                                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1639))->p+=strlen("gc");
                                                                            __freed_obj__ = 0;
                                                                            skip_spaces_and_lf(info);
                                                                            __freed_obj__ = 0;
                                                                            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1642);
                                                                            _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value434=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value433=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1642)))),info))));
                                                                            _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                            _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                            __result275__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value439=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value438=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1642)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=_inf_value22))),(_Bool)1)));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                                                                            if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value433;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value434);
                                                                            if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value434;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value437);
                                                                            if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[2] = right_value437;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value438);
                                                                            if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { right_value438 = come_decrement_ref_count(right_value438, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[3] = right_value438;
                                                                            __freed_obj__ = 0;
                                                                            return __result275__;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional332=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1667))->p,"no-gc",strlen("no-gc"))==0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional332) {
                                                                                ((struct sInfo*)come_null_check(info, "21obj.c", 1645))->p+=strlen("no-gc");
                                                                                __freed_obj__ = 0;
                                                                                skip_spaces_and_lf(info);
                                                                                __freed_obj__ = 0;
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1649);
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value441=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value440=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1649)))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result278__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value446=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value445=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1649)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=_inf_value23))),(_Bool)1)));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
                                                                                if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value440;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value441);
                                                                                if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value441;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value444);
                                                                                if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { right_value444 = come_decrement_ref_count(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[2] = right_value444;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value445);
                                                                                if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { right_value445 = come_decrement_ref_count(right_value445, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[3] = right_value445;
                                                                                __freed_obj__ = 0;
                                                                                return __result278__;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional337=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1667))->p,"unsafe",strlen("unsafe"))==0,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional337) {
                                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1652))->p+=strlen("unsafe");
                                                                                    __freed_obj__ = 0;
                                                                                    skip_spaces_and_lf(info);
                                                                                    __freed_obj__ = 0;
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1655);
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value448=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value447=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1655)))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result281__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value453=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value452=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1655)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=_inf_value24))),(_Bool)1)));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                                                                                    if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value447;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value448);
                                                                                    if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[1] = right_value448;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value451);
                                                                                    if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { right_value451 = come_decrement_ref_count(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[2] = right_value451;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value452);
                                                                                    if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[3] = right_value452;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result281__;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional342=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1667))->p,"no-null-check",strlen("no-null-check"))==0,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional342) {
                                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1658))->p+=strlen("no-null-check");
                                                                                        __freed_obj__ = 0;
                                                                                        skip_spaces_and_lf(info);
                                                                                        __freed_obj__ = 0;
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1661);
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value455=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value454=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1661)))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result284__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value460=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value459=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1661)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value458=_inf_value25))),(_Bool)1)));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
                                                                                        if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value454;
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value455);
                                                                                        if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[1] = right_value455;
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value458);
                                                                                        if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { right_value458 = come_decrement_ref_count(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0); } 
                                                                                        __right_value_freed_obj[2] = right_value458;
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value459);
                                                                                        if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { right_value459 = come_decrement_ref_count(right_value459, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[3] = right_value459;
                                                                                        __freed_obj__ = 0;
                                                                                        return __result284__;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    else {
                                                                                        err_msg(info,"invalid using");
                                                                                        __freed_obj__ = 0;
                                                                                        __result285__ = __result_obj__ = (come_save_stackframe("21obj.c", 1665), ((struct optional$2voidpbool*)(right_value462=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value461=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1665))),((void*)0),(_Bool)0))));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value461);
                                                                                        if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { right_value461 = come_decrement_ref_count(right_value461, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value461;
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value462);
                                                                                        if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[1] = right_value462;
                                                                                        __freed_obj__ = 0;
                                                                                        return __result285__;
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
                                                            else {
                                                                if(_if_conditional347=charp_operator_equals(buf,"sizeof"),                                                                __freed_obj__ = 0, 
                                                                _if_conditional347) {
                                                                    come_clear_stackframe();
                                                                    optional$2intbool_value((come_push_stackframe("21obj.c", 1669),((struct optional$2intbool*)(right_value463=expected_next_character(40,info)))));
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value463);
                                                                    if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value463;
                                                                    __freed_obj__ = 0;
                                                                    is_type_name_flag_177=(_Bool)0;
                                                                    __freed_obj__ = 0;
                                                                    {
                                                                        p_178=((struct sInfo*)come_null_check(info, "21obj.c", 1674))->p;
                                                                        __freed_obj__ = 0;
                                                                        sline_179=((struct sInfo*)come_null_check(info, "21obj.c", 1675))->sline;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional348=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1685))->p)||*((struct sInfo*)come_null_check(info, "21obj.c", 1685))->p==95,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional348) {
                                                                            come_clear_stackframe();
                                                                            word_180=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 1678),((struct optional$2charphbool*)(right_value464=parse_word(info))))));
                                                                            come_pop_stackframe();
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value464);
                                                                            if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value464;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional349=is_type_name(word_180,info),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional349) {
                                                                                is_type_name_flag_177=(_Bool)1;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(word_180 && !__freed_obj__) { word_180 = come_decrement_ref_count(word_180, (void*)0, (void*)0, 0, 0, 0); }
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1685))->p=p_178;
                                                                        __freed_obj__ = 0;
                                                                        ((struct sInfo*)come_null_check(info, "21obj.c", 1686))->sline=sline_179;
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                    if(_if_conditional350=is_type_name_flag_177,                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional350) {
                                                                        come_clear_stackframe();
                                                                        multiple_assgin_var6=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("21obj.c", 1690),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value465=parse_type(info,(_Bool)0,(_Bool)1)))));
                                                                        type_181=(struct sType*)come_increment_ref_count(multiple_assgin_var6->v1);
                                                                        name_182=(char*)come_increment_ref_count(multiple_assgin_var6->v2);
                                                                        err_183=multiple_assgin_var6->v3;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value465);
                                                                        if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value465;
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional351=!err_183,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional351) {
                                                                            err_msg(info,"parse type");
                                                                            __freed_obj__ = 0;
                                                                            __result286__ = __result_obj__ = (come_save_stackframe("21obj.c", 1693), ((struct optional$2voidpbool*)(right_value467=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value466=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1693))),((void*)0),(_Bool)0))));
                                                                            if(type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_182 && !__freed_obj__) { name_182 = come_decrement_ref_count(name_182, (void*)0, (void*)0, 0, 0, 0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value466);
                                                                            if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { right_value466 = come_decrement_ref_count(right_value466, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value466;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value467);
                                                                            if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value467;
                                                                            __freed_obj__ = 0;
                                                                            return __result286__;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                        come_clear_stackframe();
                                                                        optional$2intbool_value((come_push_stackframe("21obj.c", 1696),((struct optional$2intbool*)(right_value468=expected_next_character(41,info)))));
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value468);
                                                                        if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[1] = right_value468;
                                                                        __freed_obj__ = 0;
                                                                        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1698);
                                                                        _inf_obj_value26=come_increment_ref_count(((struct sSizeOfNode*)(right_value470=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value469=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1698)))),(struct sType*)come_increment_ref_count(type_181),info))));
                                                                        _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                        _inf_value26->finalize=(void*)sSizeOfNode_finalize;
                                                                        _inf_value26->clone=(void*)sSizeOfNode_clone;
                                                                        _inf_value26->compile=(void*)sSizeOfNode_compile;
                                                                        _inf_value26->sline=(void*)sSizeOfNode_sline;
                                                                        _inf_value26->sname=(void*)sSizeOfNode_sname;
                                                                        _inf_value26->terminated=(void*)sSizeOfNode_terminated;
                                                                        _inf_value26->kind=(void*)sSizeOfNode_kind;
                                                                        __result289__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value476=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value475=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1698)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value474=_inf_value26))),(_Bool)1)));
                                                                        if(type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        if(name_182 && !__freed_obj__) { name_182 = come_decrement_ref_count(name_182, (void*)0, (void*)0, 0, 0, 0); }
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value469);
                                                                        if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[2] = right_value469;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value470);
                                                                        if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[3] = right_value470;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value474);
                                                                        if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { right_value474 = come_decrement_ref_count(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0); } 
                                                                        __right_value_freed_obj[4] = right_value474;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value475);
                                                                        if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { right_value475 = come_decrement_ref_count(right_value475, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[5] = right_value475;
                                                                        __freed_obj__ = 0;
                                                                        return __result289__;
                                                                        __freed_obj__ = 0;
                                                                        if(type_181 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                        if(name_182 && !__freed_obj__) { name_182 = come_decrement_ref_count(name_182, (void*)0, (void*)0, 0, 0, 0); }
                                                                    }
                                                                    else {
                                                                        exp_185=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value477=expression_v13(info))));
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value477);
                                                                        if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { right_value477 = come_decrement_ref_count(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0); } 
                                                                        __right_value_freed_obj[0] = right_value477;
                                                                        __freed_obj__ = 0;
                                                                        come_clear_stackframe();
                                                                        optional$2intbool_value((come_push_stackframe("21obj.c", 1703),((struct optional$2intbool*)(right_value478=expected_next_character(41,info)))));
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value478);
                                                                        if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[1] = right_value478;
                                                                        __freed_obj__ = 0;
                                                                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1705);
                                                                        _inf_obj_value27=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value480=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value479=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1705)))),(struct sNode*)come_increment_ref_count(exp_185),info))));
                                                                        _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                        _inf_value27->finalize=(void*)sSizeOfExpNode_finalize;
                                                                        _inf_value27->clone=(void*)sSizeOfExpNode_clone;
                                                                        _inf_value27->compile=(void*)sSizeOfExpNode_compile;
                                                                        _inf_value27->sline=(void*)sSizeOfExpNode_sline;
                                                                        _inf_value27->sname=(void*)sSizeOfExpNode_sname;
                                                                        _inf_value27->terminated=(void*)sSizeOfExpNode_terminated;
                                                                        _inf_value27->kind=(void*)sSizeOfExpNode_kind;
                                                                        __result292__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value486=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value485=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1705)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=_inf_value27))),(_Bool)1)));
                                                                        if(exp_185 && !__freed_obj__) { exp_185 = come_decrement_ref_count(exp_185, ((struct sNode*)exp_185)->finalize, ((struct sNode*)exp_185)->_protocol_obj, 0, 0, 0); } 
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value479);
                                                                        if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[2] = right_value479;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value480);
                                                                        if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[3] = right_value480;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value484);
                                                                        if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0); } 
                                                                        __right_value_freed_obj[4] = right_value484;
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value485);
                                                                        if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { right_value485 = come_decrement_ref_count(right_value485, (void*)0, (void*)0, 1, 0, 0); }
                                                                        __right_value_freed_obj[5] = right_value485;
                                                                        __freed_obj__ = 0;
                                                                        return __result292__;
                                                                        __freed_obj__ = 0;
                                                                        if(exp_185 && !__freed_obj__) { exp_185 = come_decrement_ref_count(exp_185, ((struct sNode*)exp_185)->finalize, ((struct sNode*)exp_185)->_protocol_obj, 0, 0, 0); } 
                                                                    }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                else {
                                                                    if(_if_conditional364=charp_operator_equals(buf,"_Alignof"),                                                                    __freed_obj__ = 0, 
                                                                    _if_conditional364) {
                                                                        come_clear_stackframe();
                                                                        optional$2intbool_value((come_push_stackframe("21obj.c", 1709),((struct optional$2intbool*)(right_value487=expected_next_character(40,info)))));
                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value487);
                                                                        if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                        __right_value_freed_obj[0] = right_value487;
                                                                        __freed_obj__ = 0;
                                                                        is_type_name_flag_187=(_Bool)0;
                                                                        __freed_obj__ = 0;
                                                                        {
                                                                            p_188=((struct sInfo*)come_null_check(info, "21obj.c", 1714))->p;
                                                                            __freed_obj__ = 0;
                                                                            sline_189=((struct sInfo*)come_null_check(info, "21obj.c", 1715))->sline;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional365=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1725))->p)||*((struct sInfo*)come_null_check(info, "21obj.c", 1725))->p==95,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional365) {
                                                                                come_clear_stackframe();
                                                                                word_190=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 1718),((struct optional$2charphbool*)(right_value488=parse_word(info))))));
                                                                                come_pop_stackframe();
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value488);
                                                                                if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value488;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional366=is_type_name(word_190,info),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional366) {
                                                                                    is_type_name_flag_187=(_Bool)1;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(word_190 && !__freed_obj__) { word_190 = come_decrement_ref_count(word_190, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1725))->p=p_188;
                                                                            __freed_obj__ = 0;
                                                                            ((struct sInfo*)come_null_check(info, "21obj.c", 1726))->sline=sline_189;
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                        if(_if_conditional367=is_type_name_flag_187,                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional367) {
                                                                            come_clear_stackframe();
                                                                            multiple_assgin_var7=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("21obj.c", 1730),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value489=parse_type(info,(_Bool)0,(_Bool)1)))));
                                                                            type_191=(struct sType*)come_increment_ref_count(multiple_assgin_var7->v1);
                                                                            name_192=(char*)come_increment_ref_count(multiple_assgin_var7->v2);
                                                                            err_193=multiple_assgin_var7->v3;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
                                                                            if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value489;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional368=!err_193,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional368) {
                                                                                err_msg(info,"parse type");
                                                                                __freed_obj__ = 0;
                                                                                __result293__ = __result_obj__ = (come_save_stackframe("21obj.c", 1733), ((struct optional$2voidpbool*)(right_value491=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value490=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1733))),((void*)0),(_Bool)0))));
                                                                                if(type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_192 && !__freed_obj__) { name_192 = come_decrement_ref_count(name_192, (void*)0, (void*)0, 0, 0, 0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value490);
                                                                                if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { right_value490 = come_decrement_ref_count(right_value490, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value490;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value491);
                                                                                if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value491;
                                                                                __freed_obj__ = 0;
                                                                                return __result293__;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            come_clear_stackframe();
                                                                            optional$2intbool_value((come_push_stackframe("21obj.c", 1736),((struct optional$2intbool*)(right_value492=expected_next_character(41,info)))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value492);
                                                                            if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value492;
                                                                            __freed_obj__ = 0;
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1738);
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sAlignOfNode*)(right_value494=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value493=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1738)))),(struct sType*)come_increment_ref_count(type_191),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sAlignOfNode_finalize;
                                                                            _inf_value28->clone=(void*)sAlignOfNode_clone;
                                                                            _inf_value28->compile=(void*)sAlignOfNode_compile;
                                                                            _inf_value28->sline=(void*)sAlignOfNode_sline;
                                                                            _inf_value28->sname=(void*)sAlignOfNode_sname;
                                                                            _inf_value28->terminated=(void*)sAlignOfNode_terminated;
                                                                            _inf_value28->kind=(void*)sAlignOfNode_kind;
                                                                            __result296__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value500=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value499=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1738)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value498=_inf_value28))),(_Bool)1)));
                                                                            if(type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_192 && !__freed_obj__) { name_192 = come_decrement_ref_count(name_192, (void*)0, (void*)0, 0, 0, 0); }
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value493);
                                                                            if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[2] = right_value493;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value494);
                                                                            if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[3] = right_value494;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value498);
                                                                            if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { right_value498 = come_decrement_ref_count(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[4] = right_value498;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value499);
                                                                            if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { right_value499 = come_decrement_ref_count(right_value499, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[5] = right_value499;
                                                                            __freed_obj__ = 0;
                                                                            return __result296__;
                                                                            __freed_obj__ = 0;
                                                                            if(type_191 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_191, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                            if(name_192 && !__freed_obj__) { name_192 = come_decrement_ref_count(name_192, (void*)0, (void*)0, 0, 0, 0); }
                                                                        }
                                                                        else {
                                                                            exp_195=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value501=expression_v13(info))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value501);
                                                                            if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { right_value501 = come_decrement_ref_count(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[0] = right_value501;
                                                                            __freed_obj__ = 0;
                                                                            come_clear_stackframe();
                                                                            optional$2intbool_value((come_push_stackframe("21obj.c", 1743),((struct optional$2intbool*)(right_value502=expected_next_character(41,info)))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value502);
                                                                            if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[1] = right_value502;
                                                                            __freed_obj__ = 0;
                                                                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1745);
                                                                            _inf_obj_value29=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value504=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value503=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1745)))),(struct sNode*)come_increment_ref_count(exp_195),info))));
                                                                            _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                            _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
                                                                            _inf_value29->clone=(void*)sAlignOfExpNode_clone;
                                                                            _inf_value29->compile=(void*)sAlignOfExpNode_compile;
                                                                            _inf_value29->sline=(void*)sAlignOfExpNode_sline;
                                                                            _inf_value29->sname=(void*)sAlignOfExpNode_sname;
                                                                            _inf_value29->terminated=(void*)sAlignOfExpNode_terminated;
                                                                            _inf_value29->kind=(void*)sAlignOfExpNode_kind;
                                                                            __result299__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value510=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value509=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1745)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=_inf_value29))),(_Bool)1)));
                                                                            if(exp_195 && !__freed_obj__) { exp_195 = come_decrement_ref_count(exp_195, ((struct sNode*)exp_195)->finalize, ((struct sNode*)exp_195)->_protocol_obj, 0, 0, 0); } 
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value503);
                                                                            if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[2] = right_value503;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value504);
                                                                            if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[3] = right_value504;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value508);
                                                                            if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                                                            __right_value_freed_obj[4] = right_value508;
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value509);
                                                                            if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { right_value509 = come_decrement_ref_count(right_value509, (void*)0, (void*)0, 1, 0, 0); }
                                                                            __right_value_freed_obj[5] = right_value509;
                                                                            __freed_obj__ = 0;
                                                                            return __result299__;
                                                                            __freed_obj__ = 0;
                                                                            if(exp_195 && !__freed_obj__) { exp_195 = come_decrement_ref_count(exp_195, ((struct sNode*)exp_195)->finalize, ((struct sNode*)exp_195)->_protocol_obj, 0, 0, 0); } 
                                                                        }
                                                                        __freed_obj__ = 0;
                                                                    }
                                                                    else {
                                                                        if(_if_conditional381=charp_operator_equals(buf,"__alignof__"),                                                                        __freed_obj__ = 0, 
                                                                        _if_conditional381) {
                                                                            come_clear_stackframe();
                                                                            optional$2intbool_value((come_push_stackframe("21obj.c", 1749),((struct optional$2intbool*)(right_value511=expected_next_character(40,info)))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value511);
                                                                            if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value511;
                                                                            __freed_obj__ = 0;
                                                                            is_type_name_flag_197=(_Bool)0;
                                                                            __freed_obj__ = 0;
                                                                            {
                                                                                p_198=((struct sInfo*)come_null_check(info, "21obj.c", 1754))->p;
                                                                                __freed_obj__ = 0;
                                                                                sline_199=((struct sInfo*)come_null_check(info, "21obj.c", 1755))->sline;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional382=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1765))->p)||*((struct sInfo*)come_null_check(info, "21obj.c", 1765))->p==95,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional382) {
                                                                                    come_clear_stackframe();
                                                                                    word_200=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 1758),((struct optional$2charphbool*)(right_value512=parse_word(info))))));
                                                                                    come_pop_stackframe();
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value512);
                                                                                    if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value512;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional383=is_type_name(word_200,info),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional383) {
                                                                                        is_type_name_flag_197=(_Bool)1;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    if(word_200 && !__freed_obj__) { word_200 = come_decrement_ref_count(word_200, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "21obj.c", 1765))->p=p_198;
                                                                                __freed_obj__ = 0;
                                                                                ((struct sInfo*)come_null_check(info, "21obj.c", 1766))->sline=sline_199;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional384=is_type_name_flag_197,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional384) {
                                                                                come_clear_stackframe();
                                                                                multiple_assgin_var8=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("21obj.c", 1770),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value513=parse_type(info,(_Bool)0,(_Bool)1)))));
                                                                                type_201=(struct sType*)come_increment_ref_count(multiple_assgin_var8->v1);
                                                                                name_202=(char*)come_increment_ref_count(multiple_assgin_var8->v2);
                                                                                err_203=multiple_assgin_var8->v3;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value513);
                                                                                if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value513;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional385=!err_203,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional385) {
                                                                                    err_msg(info,"parse type");
                                                                                    __freed_obj__ = 0;
                                                                                    __result300__ = __result_obj__ = (come_save_stackframe("21obj.c", 1773), ((struct optional$2voidpbool*)(right_value515=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value514=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1773))),((void*)0),(_Bool)0))));
                                                                                    if(type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_202 && !__freed_obj__) { name_202 = come_decrement_ref_count(name_202, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value514);
                                                                                    if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { right_value514 = come_decrement_ref_count(right_value514, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value514;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value515);
                                                                                    if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[1] = right_value515;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result300__;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                come_clear_stackframe();
                                                                                optional$2intbool_value((come_push_stackframe("21obj.c", 1776),((struct optional$2intbool*)(right_value516=expected_next_character(41,info)))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value516);
                                                                                if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value516;
                                                                                __freed_obj__ = 0;
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1778);
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sAlignOfNode2*)(right_value518=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value517=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1778)))),(struct sType*)come_increment_ref_count(type_201),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
                                                                                _inf_value30->clone=(void*)sAlignOfNode2_clone;
                                                                                _inf_value30->compile=(void*)sAlignOfNode2_compile;
                                                                                _inf_value30->sline=(void*)sAlignOfNode2_sline;
                                                                                _inf_value30->sname=(void*)sAlignOfNode2_sname;
                                                                                _inf_value30->terminated=(void*)sAlignOfNode2_terminated;
                                                                                _inf_value30->kind=(void*)sAlignOfNode2_kind;
                                                                                __result303__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value524=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value523=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1778)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value522=_inf_value30))),(_Bool)1)));
                                                                                if(type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_202 && !__freed_obj__) { name_202 = come_decrement_ref_count(name_202, (void*)0, (void*)0, 0, 0, 0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value517);
                                                                                if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[2] = right_value517;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value518);
                                                                                if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[3] = right_value518;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value522);
                                                                                if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { right_value522 = come_decrement_ref_count(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[4] = right_value522;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value523);
                                                                                if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { right_value523 = come_decrement_ref_count(right_value523, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[5] = right_value523;
                                                                                __freed_obj__ = 0;
                                                                                return __result303__;
                                                                                __freed_obj__ = 0;
                                                                                if(type_201 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_201, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                if(name_202 && !__freed_obj__) { name_202 = come_decrement_ref_count(name_202, (void*)0, (void*)0, 0, 0, 0); }
                                                                            }
                                                                            else {
                                                                                exp_205=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=expression_v13(info))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value525);
                                                                                if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { right_value525 = come_decrement_ref_count(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[0] = right_value525;
                                                                                __freed_obj__ = 0;
                                                                                come_clear_stackframe();
                                                                                optional$2intbool_value((come_push_stackframe("21obj.c", 1783),((struct optional$2intbool*)(right_value526=expected_next_character(41,info)))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value526);
                                                                                if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[1] = right_value526;
                                                                                __freed_obj__ = 0;
                                                                                _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1785);
                                                                                _inf_obj_value31=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value528=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value527=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1785)))),(struct sNode*)come_increment_ref_count(exp_205),info))));
                                                                                _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
                                                                                _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
                                                                                _inf_value31->sline=(void*)sAlignOfExpNode2_sline;
                                                                                _inf_value31->sname=(void*)sAlignOfExpNode2_sname;
                                                                                _inf_value31->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
                                                                                __result306__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value534=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value533=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1785)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value532=_inf_value31))),(_Bool)1)));
                                                                                if(exp_205 && !__freed_obj__) { exp_205 = come_decrement_ref_count(exp_205, ((struct sNode*)exp_205)->finalize, ((struct sNode*)exp_205)->_protocol_obj, 0, 0, 0); } 
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value527);
                                                                                if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[2] = right_value527;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value528);
                                                                                if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[3] = right_value528;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value532);
                                                                                if(right_value532 && right_value532 != __result_obj__ && !__freed_obj__) { right_value532 = come_decrement_ref_count(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[4] = right_value532;
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value533);
                                                                                if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { right_value533 = come_decrement_ref_count(right_value533, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[5] = right_value533;
                                                                                __freed_obj__ = 0;
                                                                                return __result306__;
                                                                                __freed_obj__ = 0;
                                                                                if(exp_205 && !__freed_obj__) { exp_205 = come_decrement_ref_count(exp_205, ((struct sNode*)exp_205)->finalize, ((struct sNode*)exp_205)->_protocol_obj, 0, 0, 0); } 
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional398=charp_operator_equals(buf,"_Alignas"),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional398) {
                                                                                come_clear_stackframe();
                                                                                optional$2intbool_value((come_push_stackframe("21obj.c", 1789),((struct optional$2intbool*)(right_value535=expected_next_character(40,info)))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value535);
                                                                                if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value535;
                                                                                __freed_obj__ = 0;
                                                                                is_type_name_flag_207=(_Bool)0;
                                                                                __freed_obj__ = 0;
                                                                                {
                                                                                    p_208=((struct sInfo*)come_null_check(info, "21obj.c", 1794))->p;
                                                                                    __freed_obj__ = 0;
                                                                                    sline_209=((struct sInfo*)come_null_check(info, "21obj.c", 1795))->sline;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional399=xisalpha(*((struct sInfo*)come_null_check(info, "21obj.c", 1805))->p)||*((struct sInfo*)come_null_check(info, "21obj.c", 1805))->p==95,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional399) {
                                                                                        come_clear_stackframe();
                                                                                        word_210=(char*)come_increment_ref_count(optional$2charphbool_expect((come_push_stackframe("21obj.c", 1798),((struct optional$2charphbool*)(right_value536=parse_word(info))))));
                                                                                        come_pop_stackframe();
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value536);
                                                                                        if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2charphboolp_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value536;
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional400=is_type_name(word_210,info),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional400) {
                                                                                            is_type_name_flag_207=(_Bool)1;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(word_210 && !__freed_obj__) { word_210 = come_decrement_ref_count(word_210, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1805))->p=p_208;
                                                                                    __freed_obj__ = 0;
                                                                                    ((struct sInfo*)come_null_check(info, "21obj.c", 1806))->sline=sline_209;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional401=is_type_name_flag_207,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional401) {
                                                                                    come_clear_stackframe();
                                                                                    multiple_assgin_var9=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("21obj.c", 1810),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value537=parse_type(info,(_Bool)0,(_Bool)1)))));
                                                                                    type_211=(struct sType*)come_increment_ref_count(multiple_assgin_var9->v1);
                                                                                    name_212=(char*)come_increment_ref_count(multiple_assgin_var9->v2);
                                                                                    err_213=multiple_assgin_var9->v3;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value537);
                                                                                    if(right_value537 && right_value537 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value537;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional402=!err_213,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional402) {
                                                                                        err_msg(info,"parse type");
                                                                                        __freed_obj__ = 0;
                                                                                        __result307__ = __result_obj__ = (come_save_stackframe("21obj.c", 1813), ((struct optional$2voidpbool*)(right_value539=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value538=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1813))),((void*)0),(_Bool)0))));
                                                                                        if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        if(name_212 && !__freed_obj__) { name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value538);
                                                                                        if(right_value538 && right_value538 != __result_obj__ && !__freed_obj__) { right_value538 = come_decrement_ref_count(right_value538, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value538;
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value539);
                                                                                        if(right_value539 && right_value539 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[1] = right_value539;
                                                                                        __freed_obj__ = 0;
                                                                                        return __result307__;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    come_clear_stackframe();
                                                                                    optional$2intbool_value((come_push_stackframe("21obj.c", 1816),((struct optional$2intbool*)(right_value540=expected_next_character(41,info)))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value540);
                                                                                    if(right_value540 && right_value540 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[1] = right_value540;
                                                                                    __freed_obj__ = 0;
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1818);
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignAsNode*)(right_value542=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value541=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1818)))),(struct sType*)come_increment_ref_count(type_211),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignAsNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignAsNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignAsNode_compile;
                                                                                    _inf_value32->sline=(void*)sAlignAsNode_sline;
                                                                                    _inf_value32->sname=(void*)sAlignAsNode_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignAsNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignAsNode_kind;
                                                                                    __result310__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value548=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value547=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1818)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=_inf_value32))),(_Bool)1)));
                                                                                    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_212 && !__freed_obj__) { name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value541);
                                                                                    if(right_value541 && right_value541 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[2] = right_value541;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value542);
                                                                                    if(right_value542 && right_value542 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[3] = right_value542;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value546);
                                                                                    if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { right_value546 = come_decrement_ref_count(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[4] = right_value546;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value547);
                                                                                    if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { right_value547 = come_decrement_ref_count(right_value547, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[5] = right_value547;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result310__;
                                                                                    __freed_obj__ = 0;
                                                                                    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    if(name_212 && !__freed_obj__) { name_212 = come_decrement_ref_count(name_212, (void*)0, (void*)0, 0, 0, 0); }
                                                                                }
                                                                                else {
                                                                                    exp_215=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=expression_v13(info))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value549);
                                                                                    if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { right_value549 = come_decrement_ref_count(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[0] = right_value549;
                                                                                    __freed_obj__ = 0;
                                                                                    come_clear_stackframe();
                                                                                    optional$2intbool_value((come_push_stackframe("21obj.c", 1823),((struct optional$2intbool*)(right_value550=expected_next_character(41,info)))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value550);
                                                                                    if(right_value550 && right_value550 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2intboolp_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[1] = right_value550;
                                                                                    __freed_obj__ = 0;
                                                                                    _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1825);
                                                                                    _inf_obj_value33=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value552=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value551=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1825)))),(struct sNode*)come_increment_ref_count(exp_215),info))));
                                                                                    _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                    _inf_value33->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                    _inf_value33->clone=(void*)sAlignAsExpNode_clone;
                                                                                    _inf_value33->compile=(void*)sAlignAsExpNode_compile;
                                                                                    _inf_value33->sline=(void*)sAlignAsExpNode_sline;
                                                                                    _inf_value33->sname=(void*)sAlignAsExpNode_sname;
                                                                                    _inf_value33->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                    _inf_value33->kind=(void*)sAlignAsExpNode_kind;
                                                                                    __result313__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value558=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value557=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1825)))),(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=_inf_value33))),(_Bool)1)));
                                                                                    if(exp_215 && !__freed_obj__) { exp_215 = come_decrement_ref_count(exp_215, ((struct sNode*)exp_215)->finalize, ((struct sNode*)exp_215)->_protocol_obj, 0, 0, 0); } 
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value551);
                                                                                    if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[2] = right_value551;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value552);
                                                                                    if(right_value552 && right_value552 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[3] = right_value552;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value556);
                                                                                    if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[4] = right_value556;
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value557);
                                                                                    if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { right_value557 = come_decrement_ref_count(right_value557, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[5] = right_value557;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result313__;
                                                                                    __freed_obj__ = 0;
                                                                                    if(exp_215 && !__freed_obj__) { exp_215 = come_decrement_ref_count(exp_215, ((struct sNode*)exp_215)->finalize, ((struct sNode*)exp_215)->_protocol_obj, 0, 0, 0); } 
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
    come_clear_stackframe();
    __current_stack1__.buf = &buf;
    __current_stack1__.head = &head;
    __current_stack1__.head_sline = &head_sline;
    __current_stack1__.info = &info;
    result_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value562=optional$2sNodephbool_catch(((struct optional$2sNodephbool*)come_null_check((come_push_stackframe("21obj.c", 1833),((struct optional$2sNodephbool*)(right_value559=string_node_v20(buf,head,head_sline,info)))), "21obj.c", 1833)),&__current_stack1__,(void*)method_block1_21objc))));
                        if(__current_stack1__.__method_block_result_kind__ == 3)
                    {
                        return (struct sNode*)__current_stack1__.__method_block_return_value__;
                    }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value559);
    if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value559;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value562);
    if(right_value562 && right_value562 != __result_obj__ && !__freed_obj__) { right_value562 = come_decrement_ref_count(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value562;
    __freed_obj__ = 0;
    __result316__ = __result_obj__ = ((struct optional$2sNodephbool*)(right_value564=optional$2sNodephbool_initialize((struct optional$2sNodephbool*)come_increment_ref_count(((struct optional$2sNodephbool*)(right_value563=(struct optional$2sNodephbool*)come_calloc(1, sizeof(struct optional$2sNodephbool)*(1), "21obj.c", 1833)))),(struct sNode*)come_increment_ref_count(result_217),(_Bool)1)));
    if(result_217 && !__freed_obj__) { result_217 = come_decrement_ref_count(result_217, ((struct sNode*)result_217)->finalize, ((struct sNode*)result_217)->_protocol_obj, 0, 0, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value563);
    if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { right_value563 = come_decrement_ref_count(right_value563, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value563;
    __freed_obj__ = 0;
    return __result316__;
    __freed_obj__ = 0;
    if(result_217 && !__freed_obj__) { result_217 = come_decrement_ref_count(result_217, ((struct sNode*)result_217)->finalize, ((struct sNode*)result_217)->_protocol_obj, 0, 0, 0); } 
}

static struct tuple3$3sTypephcharphbool* optional$2tuple3$3sTypephcharphboolphbool_value(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional198;
struct tuple3$3sTypephcharphbool* default_value_131;
struct tuple3$3sTypephcharphbool* __result210__;
struct tuple3$3sTypephcharphbool* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_131, 0, sizeof(struct tuple3$3sTypephcharphbool*));
            if(_if_conditional198=self==((void*)0),            __freed_obj__ = 0, 
            _if_conditional198) {
                __freed_obj__ = 0;
                memset(&default_value_131,0,sizeof(struct tuple3$3sTypephcharphbool*));
                __freed_obj__ = 0;
                __result210__ = __result_obj__ = default_value_131;
                __freed_obj__ = 0;
                return __result210__;
                __freed_obj__ = 0;
            }
            else {
                __result211__ = __result_obj__ = ((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                __freed_obj__ = 0;
                return __result211__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void optional$2tuple3$3sTypephcharphboolphboolp_finalize(struct optional$2tuple3$3sTypephcharphboolphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional199;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional199=self!=((void*)0)&&((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 1))->v1!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional199) {
                if(((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(tuple3$3sTypephcharphboolp_finalize,((struct optional$2tuple3$3sTypephcharphboolphbool*)come_null_check(self, "optional$2tuple3$3sTypephcharphboolphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional200;
_Bool _if_conditional201;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional200=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v1!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional200) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 0))->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional201=self!=((void*)0)&&((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 2))->v2!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional201) {
                        if(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 && !__freed_obj__) { ((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2 = come_decrement_ref_count(((struct tuple3$3sTypephcharphbool*)come_null_check(self, "tuple3$3sTypephcharphboolp_finalize", 1))->v2, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct optional$2voidpbool* optional$2voidpbool_initialize(struct optional$2voidpbool* self, void* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2voidpbool* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 38))->v1=v1;
                __freed_obj__ = 0;
                ((struct optional$2voidpbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                __freed_obj__ = 0;
                __result212__ = __result_obj__ = self;
                if(self && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result212__;
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

static int optional$2intbool_value(struct optional$2intbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional205;
int default_value_137;
int __result214__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_137, 0, sizeof(int));
                    if(_if_conditional205=self==((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional205) {
                        __freed_obj__ = 0;
                        memset(&default_value_137,0,sizeof(int));
                        __freed_obj__ = 0;
                        __result214__ = default_value_137;
                        __freed_obj__ = 0;
                        return __result214__;
                        __freed_obj__ = 0;
                    }
                    else {
                        __result215__ = ((struct optional$2intbool*)come_null_check(self, "./comelang2.h", 65))->v1;
                        __freed_obj__ = 0;
                        return __result215__;
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

static struct optional$2sNodephbool* optional$2sNodephbool_initialize(struct optional$2sNodephbool* self, struct sNode* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj117;
struct optional$2sNodephbool* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj117=((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1;
                    ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 38))->v1=(struct sNode*)come_increment_ref_count(v1);
                    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = 0;
                    ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 39))->v2=v2;
                    __freed_obj__ = 0;
                    __result218__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
                    __freed_obj__ = 0;
                    return __result218__;
                    __freed_obj__ = 0;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sNodephboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { v1 = come_decrement_ref_count(v1, ((struct sNode*)v1)->finalize, ((struct sNode*)v1)->_protocol_obj, 0, 1, 0); } 
}

static void optional$2sNodephboolp_finalize(struct optional$2sNodephbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional214;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional214=self!=((void*)0)&&((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 1))->v1!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional214) {
                            if(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 && !__freed_obj__) { ((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1 = come_decrement_ref_count(((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->finalize, ((struct sNode*)((struct optional$2sNodephbool*)come_null_check(self, "optional$2sNodephboolp_finalize", 0))->v1)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional221;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional221=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional221) {
                    if(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional222=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 2))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional222) {
                    if(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->sname && !__freed_obj__) { ((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->sname = come_decrement_ref_count(((struct sNewNode*)come_null_check(self, "sNewNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional223;
struct sNewNode* __result223__;
void* right_value291;
struct sNewNode* result_142;
_Bool _if_conditional224;
void* right_value292;
struct sType* __dec_obj120;
_Bool _if_conditional225;
_Bool _if_conditional226;
void* right_value293;
char* __dec_obj121;
struct sNewNode* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value291, 0, sizeof(void*));
memset(&result_142, 0, sizeof(struct sNewNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value293, 0, sizeof(void*));
                if(_if_conditional223=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional223) {
                    __result223__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result223__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_142=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value291=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
                if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value291;
                __freed_obj__ = 0;
                if(_if_conditional224=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_clone", 5))->type!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional224) {
                    __dec_obj120=((struct sNewNode*)come_null_check(result_142, "sNewNode_clone", 4))->type;
                    ((struct sNewNode*)come_null_check(result_142, "sNewNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_clone(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 4))->type))));
                    if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
                    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value292;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional225=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional225) {
                    ((struct sNewNode*)come_null_check(result_142, "sNewNode_clone", 5))->sline=((struct sNewNode*)come_null_check(self, "sNewNode_clone", 5))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional226=self!=((void*)0)&&((struct sNewNode*)come_null_check(self, "sNewNode_clone", 7))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional226) {
                    __dec_obj121=((struct sNewNode*)come_null_check(result_142, "sNewNode_clone", 6))->sname;
                    ((struct sNewNode*)come_null_check(result_142, "sNewNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value293=string_clone(((struct sNewNode*)come_null_check(self, "sNewNode_clone", 6))->sname))));
                    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
                    if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value293;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result224__ = __result_obj__ = result_142;
                if(result_142 && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,result_142, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result224__;
                __freed_obj__ = 0;
                if(result_142 && !__freed_obj__) { come_call_finalizer(sNewNode_finalize,result_142, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional228;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional228=self!=((void*)0)&&((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 1))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional228) {
                    if(((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0))->sname && !__freed_obj__) { ((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0))->sname = come_decrement_ref_count(((struct sTrueNode*)come_null_check(self, "sTrueNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional229;
struct sTrueNode* __result226__;
void* right_value299;
struct sTrueNode* result_143;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value300;
char* __dec_obj122;
struct sTrueNode* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value299, 0, sizeof(void*));
memset(&result_143, 0, sizeof(struct sTrueNode*));
memset(&right_value300, 0, sizeof(void*));
                if(_if_conditional229=self==(void*)0,                __freed_obj__ = 0, 
                _if_conditional229) {
                    __result226__ = __result_obj__ = (void*)0;
                    __freed_obj__ = 0;
                    return __result226__;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                result_143=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value299=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
                if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value299;
                __freed_obj__ = 0;
                if(_if_conditional230=self!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional230) {
                    ((struct sTrueNode*)come_null_check(result_143, "sTrueNode_clone", 4))->sline=((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 4))->sline;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                if(_if_conditional231=self!=((void*)0)&&((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 6))->sname!=((void*)0),                __freed_obj__ = 0, 
                _if_conditional231) {
                    __dec_obj122=((struct sTrueNode*)come_null_check(result_143, "sTrueNode_clone", 5))->sname;
                    ((struct sTrueNode*)come_null_check(result_143, "sTrueNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value300=string_clone(((struct sTrueNode*)come_null_check(self, "sTrueNode_clone", 5))->sname))));
                    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
                    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value300;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
                __result227__ = __result_obj__ = result_143;
                if(result_143 && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,result_143, (void*)0, (void*)0, 0, 0, 1, 0); }
                __freed_obj__ = 0;
                return __result227__;
                __freed_obj__ = 0;
                if(result_143 && !__freed_obj__) { come_call_finalizer(sTrueNode_finalize,result_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional233=self!=((void*)0)&&((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 1))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional233) {
                        if(((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0))->sname && !__freed_obj__) { ((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0))->sname = come_decrement_ref_count(((struct sFalseNode*)come_null_check(self, "sFalseNode_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional234;
struct sFalseNode* __result229__;
void* right_value306;
struct sFalseNode* result_144;
_Bool _if_conditional235;
_Bool _if_conditional236;
void* right_value307;
char* __dec_obj123;
struct sFalseNode* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
memset(&result_144, 0, sizeof(struct sFalseNode*));
memset(&right_value307, 0, sizeof(void*));
                    if(_if_conditional234=self==(void*)0,                    __freed_obj__ = 0, 
                    _if_conditional234) {
                        __result229__ = __result_obj__ = (void*)0;
                        __freed_obj__ = 0;
                        return __result229__;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    result_144=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value306=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
                    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value306;
                    __freed_obj__ = 0;
                    if(_if_conditional235=self!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional235) {
                        ((struct sFalseNode*)come_null_check(result_144, "sFalseNode_clone", 4))->sline=((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 4))->sline;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    if(_if_conditional236=self!=((void*)0)&&((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 6))->sname!=((void*)0),                    __freed_obj__ = 0, 
                    _if_conditional236) {
                        __dec_obj123=((struct sFalseNode*)come_null_check(result_144, "sFalseNode_clone", 5))->sname;
                        ((struct sFalseNode*)come_null_check(result_144, "sFalseNode_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value307=string_clone(((struct sFalseNode*)come_null_check(self, "sFalseNode_clone", 5))->sname))));
                        if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
                        if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value307;
                        __freed_obj__ = 0;
                    }
                    __freed_obj__ = 0;
                    __result230__ = __result_obj__ = result_144;
                    if(result_144 && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0); }
                    __freed_obj__ = 0;
                    return __result230__;
                    __freed_obj__ = 0;
                    if(result_144 && !__freed_obj__) { come_call_finalizer(sFalseNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional238;
_Bool _if_conditional239;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional238=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->node!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional238) {
                            if(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node && !__freed_obj__) { ((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node = come_decrement_ref_count(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node, ((struct sNode*)((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional239=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 2))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional239) {
                            if(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional240;
struct sDeleteNode* __result232__;
void* right_value314;
struct sDeleteNode* result_146;
_Bool _if_conditional241;
void* right_value315;
struct sNode* __dec_obj124;
_Bool _if_conditional242;
_Bool _if_conditional243;
void* right_value316;
char* __dec_obj125;
struct sDeleteNode* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value314, 0, sizeof(void*));
memset(&result_146, 0, sizeof(struct sDeleteNode*));
memset(&right_value315, 0, sizeof(void*));
memset(&right_value316, 0, sizeof(void*));
                        if(_if_conditional240=self==(void*)0,                        __freed_obj__ = 0, 
                        _if_conditional240) {
                            __result232__ = __result_obj__ = (void*)0;
                            __freed_obj__ = 0;
                            return __result232__;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        result_146=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value314=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
                        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value314;
                        __freed_obj__ = 0;
                        if(_if_conditional241=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 5))->node!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional241) {
                            __dec_obj124=((struct sDeleteNode*)come_null_check(result_146, "sDeleteNode_clone", 4))->node;
                            ((struct sDeleteNode*)come_null_check(result_146, "sDeleteNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 4))->node))));
                            if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
                            if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value315;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional242=self!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional242) {
                            ((struct sDeleteNode*)come_null_check(result_146, "sDeleteNode_clone", 5))->sline=((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 5))->sline;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        if(_if_conditional243=self!=((void*)0)&&((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 7))->sname!=((void*)0),                        __freed_obj__ = 0, 
                        _if_conditional243) {
                            __dec_obj125=((struct sDeleteNode*)come_null_check(result_146, "sDeleteNode_clone", 6))->sname;
                            ((struct sDeleteNode*)come_null_check(result_146, "sDeleteNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value316=string_clone(((struct sDeleteNode*)come_null_check(self, "sDeleteNode_clone", 6))->sname))));
                            if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
                            if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value316;
                            __freed_obj__ = 0;
                        }
                        __freed_obj__ = 0;
                        __result233__ = __result_obj__ = result_146;
                        if(result_146 && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0); }
                        __freed_obj__ = 0;
                        return __result233__;
                        __freed_obj__ = 0;
                        if(result_146 && !__freed_obj__) { come_call_finalizer(sDeleteNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional245;
_Bool _if_conditional246;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional245=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->node!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional245) {
                                if(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node && !__freed_obj__) { ((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node = come_decrement_ref_count(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node, ((struct sNode*)((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional246=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 2))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional246) {
                                if(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->sname && !__freed_obj__) { ((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->sname = come_decrement_ref_count(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional247;
struct sForceDeleteNode* __result235__;
void* right_value323;
struct sForceDeleteNode* result_148;
_Bool _if_conditional248;
void* right_value324;
struct sNode* __dec_obj126;
_Bool _if_conditional249;
_Bool _if_conditional250;
void* right_value325;
char* __dec_obj127;
struct sForceDeleteNode* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value323, 0, sizeof(void*));
memset(&result_148, 0, sizeof(struct sForceDeleteNode*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
                            if(_if_conditional247=self==(void*)0,                            __freed_obj__ = 0, 
                            _if_conditional247) {
                                __result235__ = __result_obj__ = (void*)0;
                                __freed_obj__ = 0;
                                return __result235__;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            result_148=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value323=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
                            if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value323;
                            __freed_obj__ = 0;
                            if(_if_conditional248=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 5))->node!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional248) {
                                __dec_obj126=((struct sForceDeleteNode*)come_null_check(result_148, "sForceDeleteNode_clone", 4))->node;
                                ((struct sForceDeleteNode*)come_null_check(result_148, "sForceDeleteNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 4))->node))));
                                if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
                                if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value324;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional249=self!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional249) {
                                ((struct sForceDeleteNode*)come_null_check(result_148, "sForceDeleteNode_clone", 5))->sline=((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 5))->sline;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            if(_if_conditional250=self!=((void*)0)&&((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 7))->sname!=((void*)0),                            __freed_obj__ = 0, 
                            _if_conditional250) {
                                __dec_obj127=((struct sForceDeleteNode*)come_null_check(result_148, "sForceDeleteNode_clone", 6))->sname;
                                ((struct sForceDeleteNode*)come_null_check(result_148, "sForceDeleteNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value325=string_clone(((struct sForceDeleteNode*)come_null_check(self, "sForceDeleteNode_clone", 6))->sname))));
                                if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
                                if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value325;
                                __freed_obj__ = 0;
                            }
                            __freed_obj__ = 0;
                            __result236__ = __result_obj__ = result_148;
                            if(result_148 && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 1, 0); }
                            __freed_obj__ = 0;
                            return __result236__;
                            __freed_obj__ = 0;
                            if(result_148 && !__freed_obj__) { come_call_finalizer(sForceDeleteNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional252;
_Bool _if_conditional253;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional252=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->node!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional252) {
                                    if(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node && !__freed_obj__) { ((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node = come_decrement_ref_count(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node, ((struct sNode*)((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional253=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 2))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional253) {
                                    if(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->sname && !__freed_obj__) { ((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->sname = come_decrement_ref_count(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional254;
struct sBorrowNode* __result238__;
void* right_value332;
struct sBorrowNode* result_150;
_Bool _if_conditional255;
void* right_value333;
struct sNode* __dec_obj128;
_Bool _if_conditional256;
_Bool _if_conditional257;
void* right_value334;
char* __dec_obj129;
struct sBorrowNode* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value332, 0, sizeof(void*));
memset(&result_150, 0, sizeof(struct sBorrowNode*));
memset(&right_value333, 0, sizeof(void*));
memset(&right_value334, 0, sizeof(void*));
                                if(_if_conditional254=self==(void*)0,                                __freed_obj__ = 0, 
                                _if_conditional254) {
                                    __result238__ = __result_obj__ = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result238__;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                result_150=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value332=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
                                if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value332;
                                __freed_obj__ = 0;
                                if(_if_conditional255=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 5))->node!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional255) {
                                    __dec_obj128=((struct sBorrowNode*)come_null_check(result_150, "sBorrowNode_clone", 4))->node;
                                    ((struct sBorrowNode*)come_null_check(result_150, "sBorrowNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=sNode_clone(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 4))->node))));
                                    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
                                    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value333;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional256=self!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional256) {
                                    ((struct sBorrowNode*)come_null_check(result_150, "sBorrowNode_clone", 5))->sline=((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 5))->sline;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                if(_if_conditional257=self!=((void*)0)&&((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 7))->sname!=((void*)0),                                __freed_obj__ = 0, 
                                _if_conditional257) {
                                    __dec_obj129=((struct sBorrowNode*)come_null_check(result_150, "sBorrowNode_clone", 6))->sname;
                                    ((struct sBorrowNode*)come_null_check(result_150, "sBorrowNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value334=string_clone(((struct sBorrowNode*)come_null_check(self, "sBorrowNode_clone", 6))->sname))));
                                    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
                                    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value334;
                                    __freed_obj__ = 0;
                                }
                                __freed_obj__ = 0;
                                __result239__ = __result_obj__ = result_150;
                                if(result_150 && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0); }
                                __freed_obj__ = 0;
                                return __result239__;
                                __freed_obj__ = 0;
                                if(result_150 && !__freed_obj__) { come_call_finalizer(sBorrowNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional259;
_Bool _if_conditional260;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional259=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->node!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional259) {
                                        if(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node && !__freed_obj__) { ((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node = come_decrement_ref_count(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node, ((struct sNode*)((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional260=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 2))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional260) {
                                        if(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional261;
struct sDelegateNode* __result241__;
void* right_value341;
struct sDelegateNode* result_152;
_Bool _if_conditional262;
void* right_value342;
struct sNode* __dec_obj130;
_Bool _if_conditional263;
_Bool _if_conditional264;
void* right_value343;
char* __dec_obj131;
struct sDelegateNode* __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value341, 0, sizeof(void*));
memset(&result_152, 0, sizeof(struct sDelegateNode*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value343, 0, sizeof(void*));
                                    if(_if_conditional261=self==(void*)0,                                    __freed_obj__ = 0, 
                                    _if_conditional261) {
                                        __result241__ = __result_obj__ = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result241__;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    result_152=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value341=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
                                    if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value341;
                                    __freed_obj__ = 0;
                                    if(_if_conditional262=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 5))->node!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional262) {
                                        __dec_obj130=((struct sDelegateNode*)come_null_check(result_152, "sDelegateNode_clone", 4))->node;
                                        ((struct sDelegateNode*)come_null_check(result_152, "sDelegateNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=sNode_clone(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 4))->node))));
                                        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342);
                                        if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { right_value342 = come_decrement_ref_count(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value342;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional263=self!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional263) {
                                        ((struct sDelegateNode*)come_null_check(result_152, "sDelegateNode_clone", 5))->sline=((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 5))->sline;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    if(_if_conditional264=self!=((void*)0)&&((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 7))->sname!=((void*)0),                                    __freed_obj__ = 0, 
                                    _if_conditional264) {
                                        __dec_obj131=((struct sDelegateNode*)come_null_check(result_152, "sDelegateNode_clone", 6))->sname;
                                        ((struct sDelegateNode*)come_null_check(result_152, "sDelegateNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value343=string_clone(((struct sDelegateNode*)come_null_check(self, "sDelegateNode_clone", 6))->sname))));
                                        if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value343);
                                        if(right_value343 && right_value343 != __result_obj__ && !__freed_obj__) { right_value343 = come_decrement_ref_count(right_value343, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value343;
                                        __freed_obj__ = 0;
                                    }
                                    __freed_obj__ = 0;
                                    __result242__ = __result_obj__ = result_152;
                                    if(result_152 && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    __freed_obj__ = 0;
                                    return __result242__;
                                    __freed_obj__ = 0;
                                    if(result_152 && !__freed_obj__) { come_call_finalizer(sDelegateNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional266;
_Bool _if_conditional267;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional266=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->node!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional266) {
                                            if(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node && !__freed_obj__) { ((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node = come_decrement_ref_count(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node, ((struct sNode*)((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional267=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 2))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional267) {
                                            if(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->sname && !__freed_obj__) { ((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->sname = come_decrement_ref_count(((struct sShareNode*)come_null_check(self, "sShareNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional268;
struct sShareNode* __result244__;
void* right_value350;
struct sShareNode* result_154;
_Bool _if_conditional269;
void* right_value351;
struct sNode* __dec_obj132;
_Bool _if_conditional270;
_Bool _if_conditional271;
void* right_value352;
char* __dec_obj133;
struct sShareNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value350, 0, sizeof(void*));
memset(&result_154, 0, sizeof(struct sShareNode*));
memset(&right_value351, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
                                        if(_if_conditional268=self==(void*)0,                                        __freed_obj__ = 0, 
                                        _if_conditional268) {
                                            __result244__ = __result_obj__ = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result244__;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        result_154=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value350=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value350);
                                        if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value350;
                                        __freed_obj__ = 0;
                                        if(_if_conditional269=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_clone", 5))->node!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional269) {
                                            __dec_obj132=((struct sShareNode*)come_null_check(result_154, "sShareNode_clone", 4))->node;
                                            ((struct sShareNode*)come_null_check(result_154, "sShareNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value351=sNode_clone(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 4))->node))));
                                            if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
                                            if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { right_value351 = come_decrement_ref_count(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value351;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional270=self!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional270) {
                                            ((struct sShareNode*)come_null_check(result_154, "sShareNode_clone", 5))->sline=((struct sShareNode*)come_null_check(self, "sShareNode_clone", 5))->sline;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        if(_if_conditional271=self!=((void*)0)&&((struct sShareNode*)come_null_check(self, "sShareNode_clone", 7))->sname!=((void*)0),                                        __freed_obj__ = 0, 
                                        _if_conditional271) {
                                            __dec_obj133=((struct sShareNode*)come_null_check(result_154, "sShareNode_clone", 6))->sname;
                                            ((struct sShareNode*)come_null_check(result_154, "sShareNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value352=string_clone(((struct sShareNode*)come_null_check(self, "sShareNode_clone", 6))->sname))));
                                            if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
                                            if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value352;
                                            __freed_obj__ = 0;
                                        }
                                        __freed_obj__ = 0;
                                        __result245__ = __result_obj__ = result_154;
                                        if(result_154 && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,result_154, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        __freed_obj__ = 0;
                                        return __result245__;
                                        __freed_obj__ = 0;
                                        if(result_154 && !__freed_obj__) { come_call_finalizer(sShareNode_finalize,result_154, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional273;
_Bool _if_conditional274;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional273=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->node!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional273) {
                                                if(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node && !__freed_obj__) { ((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node = come_decrement_ref_count(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node, ((struct sNode*)((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional274=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 2))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional274) {
                                                if(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->sname && !__freed_obj__) { ((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->sname = come_decrement_ref_count(((struct sCloneNode*)come_null_check(self, "sCloneNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional275;
struct sCloneNode* __result247__;
void* right_value359;
struct sCloneNode* result_156;
_Bool _if_conditional276;
void* right_value360;
struct sNode* __dec_obj134;
_Bool _if_conditional277;
_Bool _if_conditional278;
void* right_value361;
char* __dec_obj135;
struct sCloneNode* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value359, 0, sizeof(void*));
memset(&result_156, 0, sizeof(struct sCloneNode*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
                                            if(_if_conditional275=self==(void*)0,                                            __freed_obj__ = 0, 
                                            _if_conditional275) {
                                                __result247__ = __result_obj__ = (void*)0;
                                                __freed_obj__ = 0;
                                                return __result247__;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            result_156=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value359=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                                            if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value359;
                                            __freed_obj__ = 0;
                                            if(_if_conditional276=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 5))->node!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional276) {
                                                __dec_obj134=((struct sCloneNode*)come_null_check(result_156, "sCloneNode_clone", 4))->node;
                                                ((struct sCloneNode*)come_null_check(result_156, "sCloneNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=sNode_clone(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 4))->node))));
                                                if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
                                                if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value360;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional277=self!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional277) {
                                                ((struct sCloneNode*)come_null_check(result_156, "sCloneNode_clone", 5))->sline=((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 5))->sline;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            if(_if_conditional278=self!=((void*)0)&&((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 7))->sname!=((void*)0),                                            __freed_obj__ = 0, 
                                            _if_conditional278) {
                                                __dec_obj135=((struct sCloneNode*)come_null_check(result_156, "sCloneNode_clone", 6))->sname;
                                                ((struct sCloneNode*)come_null_check(result_156, "sCloneNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(((struct sCloneNode*)come_null_check(self, "sCloneNode_clone", 6))->sname))));
                                                if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                                                if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value361;
                                                __freed_obj__ = 0;
                                            }
                                            __freed_obj__ = 0;
                                            __result248__ = __result_obj__ = result_156;
                                            if(result_156 && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            __freed_obj__ = 0;
                                            return __result248__;
                                            __freed_obj__ = 0;
                                            if(result_156 && !__freed_obj__) { come_call_finalizer(sCloneNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional280;
_Bool _if_conditional281;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional280=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->node!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional280) {
                                                    if(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node && !__freed_obj__) { ((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node = come_decrement_ref_count(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node, ((struct sNode*)((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional281=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 2))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional281) {
                                                    if(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDupeNode*)come_null_check(self, "sDupeNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional282;
struct sDupeNode* __result250__;
void* right_value368;
struct sDupeNode* result_158;
_Bool _if_conditional283;
void* right_value369;
struct sNode* __dec_obj136;
_Bool _if_conditional284;
_Bool _if_conditional285;
void* right_value370;
char* __dec_obj137;
struct sDupeNode* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value368, 0, sizeof(void*));
memset(&result_158, 0, sizeof(struct sDupeNode*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                                                if(_if_conditional282=self==(void*)0,                                                __freed_obj__ = 0, 
                                                _if_conditional282) {
                                                    __result250__ = __result_obj__ = (void*)0;
                                                    __freed_obj__ = 0;
                                                    return __result250__;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                result_158=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value368=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                                                if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value368;
                                                __freed_obj__ = 0;
                                                if(_if_conditional283=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 5))->node!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional283) {
                                                    __dec_obj136=((struct sDupeNode*)come_null_check(result_158, "sDupeNode_clone", 4))->node;
                                                    ((struct sDupeNode*)come_null_check(result_158, "sDupeNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 4))->node))));
                                                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                                    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value369;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional284=self!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional284) {
                                                    ((struct sDupeNode*)come_null_check(result_158, "sDupeNode_clone", 5))->sline=((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 5))->sline;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                if(_if_conditional285=self!=((void*)0)&&((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 7))->sname!=((void*)0),                                                __freed_obj__ = 0, 
                                                _if_conditional285) {
                                                    __dec_obj137=((struct sDupeNode*)come_null_check(result_158, "sDupeNode_clone", 6))->sname;
                                                    ((struct sDupeNode*)come_null_check(result_158, "sDupeNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(((struct sDupeNode*)come_null_check(self, "sDupeNode_clone", 6))->sname))));
                                                    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                                                    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value370;
                                                    __freed_obj__ = 0;
                                                }
                                                __freed_obj__ = 0;
                                                __result251__ = __result_obj__ = result_158;
                                                if(result_158 && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                __freed_obj__ = 0;
                                                return __result251__;
                                                __freed_obj__ = 0;
                                                if(result_158 && !__freed_obj__) { come_call_finalizer(sDupeNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional287;
_Bool _if_conditional288;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                    if(_if_conditional287=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->node!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional287) {
                                                        if(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node && !__freed_obj__) { ((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node = come_decrement_ref_count(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node, ((struct sNode*)((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional288=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 2))->sname!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional288) {
                                                        if(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->sname && !__freed_obj__) { ((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->sname = come_decrement_ref_count(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
struct sDummyHeapNode* __result253__;
void* right_value377;
struct sDummyHeapNode* result_160;
_Bool _if_conditional290;
void* right_value378;
struct sNode* __dec_obj138;
_Bool _if_conditional291;
_Bool _if_conditional292;
void* right_value379;
char* __dec_obj139;
struct sDummyHeapNode* __result254__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value377, 0, sizeof(void*));
memset(&result_160, 0, sizeof(struct sDummyHeapNode*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
                                                    if(_if_conditional289=self==(void*)0,                                                    __freed_obj__ = 0, 
                                                    _if_conditional289) {
                                                        __result253__ = __result_obj__ = (void*)0;
                                                        __freed_obj__ = 0;
                                                        return __result253__;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    result_160=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value377=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
                                                    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value377;
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional290=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 5))->node!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional290) {
                                                        __dec_obj138=((struct sDummyHeapNode*)come_null_check(result_160, "sDummyHeapNode_clone", 4))->node;
                                                        ((struct sDummyHeapNode*)come_null_check(result_160, "sDummyHeapNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=sNode_clone(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 4))->node))));
                                                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                                                        if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                                                        __right_value_freed_obj[0] = right_value378;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional291=self!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional291) {
                                                        ((struct sDummyHeapNode*)come_null_check(result_160, "sDummyHeapNode_clone", 5))->sline=((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 5))->sline;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    if(_if_conditional292=self!=((void*)0)&&((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 7))->sname!=((void*)0),                                                    __freed_obj__ = 0, 
                                                    _if_conditional292) {
                                                        __dec_obj139=((struct sDummyHeapNode*)come_null_check(result_160, "sDummyHeapNode_clone", 6))->sname;
                                                        ((struct sDummyHeapNode*)come_null_check(result_160, "sDummyHeapNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value379=string_clone(((struct sDummyHeapNode*)come_null_check(self, "sDummyHeapNode_clone", 6))->sname))));
                                                        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
                                                        if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, (void*)0, (void*)0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value379;
                                                        __freed_obj__ = 0;
                                                    }
                                                    __freed_obj__ = 0;
                                                    __result254__ = __result_obj__ = result_160;
                                                    if(result_160 && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                    __freed_obj__ = 0;
                                                    return __result254__;
                                                    __freed_obj__ = 0;
                                                    if(result_160 && !__freed_obj__) { come_call_finalizer(sDummyHeapNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional294;
_Bool _if_conditional295;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                        if(_if_conditional294=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->node!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional294) {
                                                            if(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node && !__freed_obj__) { ((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node = come_decrement_ref_count(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node, ((struct sNode*)((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional295=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 2))->sname!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional295) {
                                                            if(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->sname && !__freed_obj__) { ((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->sname = come_decrement_ref_count(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional296;
struct sGCIncNode* __result256__;
void* right_value387;
struct sGCIncNode* result_162;
_Bool _if_conditional297;
void* right_value388;
struct sNode* __dec_obj140;
_Bool _if_conditional298;
_Bool _if_conditional299;
void* right_value389;
char* __dec_obj141;
struct sGCIncNode* __result257__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value387, 0, sizeof(void*));
memset(&result_162, 0, sizeof(struct sGCIncNode*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value389, 0, sizeof(void*));
                                                        if(_if_conditional296=self==(void*)0,                                                        __freed_obj__ = 0, 
                                                        _if_conditional296) {
                                                            __result256__ = __result_obj__ = (void*)0;
                                                            __freed_obj__ = 0;
                                                            return __result256__;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        result_162=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value387=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3))));
                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
                                                        if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                        __right_value_freed_obj[0] = right_value387;
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional297=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 5))->node!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional297) {
                                                            __dec_obj140=((struct sGCIncNode*)come_null_check(result_162, "sGCIncNode_clone", 4))->node;
                                                            ((struct sGCIncNode*)come_null_check(result_162, "sGCIncNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=sNode_clone(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 4))->node))));
                                                            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
                                                            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
                                                            __right_value_freed_obj[0] = right_value388;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional298=self!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional298) {
                                                            ((struct sGCIncNode*)come_null_check(result_162, "sGCIncNode_clone", 5))->sline=((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 5))->sline;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        if(_if_conditional299=self!=((void*)0)&&((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 7))->sname!=((void*)0),                                                        __freed_obj__ = 0, 
                                                        _if_conditional299) {
                                                            __dec_obj141=((struct sGCIncNode*)come_null_check(result_162, "sGCIncNode_clone", 6))->sname;
                                                            ((struct sGCIncNode*)come_null_check(result_162, "sGCIncNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(((struct sGCIncNode*)come_null_check(self, "sGCIncNode_clone", 6))->sname))));
                                                            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
                                                            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, (void*)0, (void*)0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value389;
                                                            __freed_obj__ = 0;
                                                        }
                                                        __freed_obj__ = 0;
                                                        __result257__ = __result_obj__ = result_162;
                                                        if(result_162 && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                        __freed_obj__ = 0;
                                                        return __result257__;
                                                        __freed_obj__ = 0;
                                                        if(result_162 && !__freed_obj__) { come_call_finalizer(sGCIncNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional301;
_Bool _if_conditional302;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                            if(_if_conditional301=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->node!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional301) {
                                                                if(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node && !__freed_obj__) { ((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node = come_decrement_ref_count(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node, ((struct sNode*)((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node)->finalize, ((struct sNode*)((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 0))->node)->_protocol_obj, 0, 0, 0); } 
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional302=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 2))->sname!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional302) {
                                                                if(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->sname && !__freed_obj__) { ((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->sname = come_decrement_ref_count(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
struct sGCDecNode* __result259__;
void* right_value397;
struct sGCDecNode* result_164;
_Bool _if_conditional304;
void* right_value398;
struct sNode* __dec_obj142;
_Bool _if_conditional305;
_Bool _if_conditional306;
void* right_value399;
char* __dec_obj143;
struct sGCDecNode* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value397, 0, sizeof(void*));
memset(&result_164, 0, sizeof(struct sGCDecNode*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
                                                            if(_if_conditional303=self==(void*)0,                                                            __freed_obj__ = 0, 
                                                            _if_conditional303) {
                                                                __result259__ = __result_obj__ = (void*)0;
                                                                __freed_obj__ = 0;
                                                                return __result259__;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            result_164=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value397=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3))));
                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                                                            if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                            __right_value_freed_obj[0] = right_value397;
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional304=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 5))->node!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional304) {
                                                                __dec_obj142=((struct sGCDecNode*)come_null_check(result_164, "sGCDecNode_clone", 4))->node;
                                                                ((struct sGCDecNode*)come_null_check(result_164, "sGCDecNode_clone", 4))->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 4))->node))));
                                                                if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
                                                                if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value398;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional305=self!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional305) {
                                                                ((struct sGCDecNode*)come_null_check(result_164, "sGCDecNode_clone", 5))->sline=((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 5))->sline;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            if(_if_conditional306=self!=((void*)0)&&((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 7))->sname!=((void*)0),                                                            __freed_obj__ = 0, 
                                                            _if_conditional306) {
                                                                __dec_obj143=((struct sGCDecNode*)come_null_check(result_164, "sGCDecNode_clone", 6))->sname;
                                                                ((struct sGCDecNode*)come_null_check(result_164, "sGCDecNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value399=string_clone(((struct sGCDecNode*)come_null_check(self, "sGCDecNode_clone", 6))->sname))));
                                                                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
                                                                if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, (void*)0, (void*)0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value399;
                                                                __freed_obj__ = 0;
                                                            }
                                                            __freed_obj__ = 0;
                                                            __result260__ = __result_obj__ = result_164;
                                                            if(result_164 && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                            __freed_obj__ = 0;
                                                            return __result260__;
                                                            __freed_obj__ = 0;
                                                            if(result_164 && !__freed_obj__) { come_call_finalizer(sGCDecNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional309;
_Bool _if_conditional310;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                if(_if_conditional309=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->type!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _if_conditional309) {
                                                                    if(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional310=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 2))->sname!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _if_conditional310) {
                                                                    if(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->sname && !__freed_obj__) { ((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->sname = come_decrement_ref_count(((struct sIsHeap*)come_null_check(self, "sIsHeap_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional311;
struct sIsHeap* __result263__;
void* right_value410;
struct sIsHeap* result_169;
_Bool _if_conditional312;
void* right_value411;
struct sType* __dec_obj144;
_Bool _if_conditional313;
_Bool _if_conditional314;
void* right_value412;
char* __dec_obj145;
struct sIsHeap* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value410, 0, sizeof(void*));
memset(&result_169, 0, sizeof(struct sIsHeap*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
                                                                if(_if_conditional311=self==(void*)0,                                                                __freed_obj__ = 0, 
                                                                _if_conditional311) {
                                                                    __result263__ = __result_obj__ = (void*)0;
                                                                    __freed_obj__ = 0;
                                                                    return __result263__;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                result_169=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value410=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value410);
                                                                if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                __right_value_freed_obj[0] = right_value410;
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional312=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 5))->type!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _if_conditional312) {
                                                                    __dec_obj144=((struct sIsHeap*)come_null_check(result_169, "sIsHeap_clone", 4))->type;
                                                                    ((struct sIsHeap*)come_null_check(result_169, "sIsHeap_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value411=sType_clone(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 4))->type))));
                                                                    if(__dec_obj144) { come_call_finalizer(sType_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
                                                                    if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value411;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional313=self!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _if_conditional313) {
                                                                    ((struct sIsHeap*)come_null_check(result_169, "sIsHeap_clone", 5))->sline=((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 5))->sline;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                if(_if_conditional314=self!=((void*)0)&&((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 7))->sname!=((void*)0),                                                                __freed_obj__ = 0, 
                                                                _if_conditional314) {
                                                                    __dec_obj145=((struct sIsHeap*)come_null_check(result_169, "sIsHeap_clone", 6))->sname;
                                                                    ((struct sIsHeap*)come_null_check(result_169, "sIsHeap_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value412=string_clone(((struct sIsHeap*)come_null_check(self, "sIsHeap_clone", 6))->sname))));
                                                                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                                                                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, (void*)0, (void*)0, 1, 0, 0); }
                                                                    __right_value_freed_obj[0] = right_value412;
                                                                    __freed_obj__ = 0;
                                                                }
                                                                __freed_obj__ = 0;
                                                                __result264__ = __result_obj__ = result_169;
                                                                if(result_169 && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,result_169, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                __freed_obj__ = 0;
                                                                return __result264__;
                                                                __freed_obj__ = 0;
                                                                if(result_169 && !__freed_obj__) { come_call_finalizer(sIsHeap_finalize,result_169, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional352;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                            if(_if_conditional352=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->type!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional352) {
                                                                                if(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional353=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 2))->sname!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional353) {
                                                                                if(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional354;
struct sSizeOfNode* __result287__;
void* right_value471;
struct sSizeOfNode* result_184;
_Bool _if_conditional355;
void* right_value472;
struct sType* __dec_obj152;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value473;
char* __dec_obj153;
struct sSizeOfNode* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value471, 0, sizeof(void*));
memset(&result_184, 0, sizeof(struct sSizeOfNode*));
memset(&right_value472, 0, sizeof(void*));
memset(&right_value473, 0, sizeof(void*));
                                                                            if(_if_conditional354=self==(void*)0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional354) {
                                                                                __result287__ = __result_obj__ = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                                return __result287__;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            result_184=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value471=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value471);
                                                                            if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value471;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional355=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 5))->type!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional355) {
                                                                                __dec_obj152=((struct sSizeOfNode*)come_null_check(result_184, "sSizeOfNode_clone", 4))->type;
                                                                                ((struct sSizeOfNode*)come_null_check(result_184, "sSizeOfNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value472=sType_clone(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 4))->type))));
                                                                                if(__dec_obj152) { come_call_finalizer(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value472);
                                                                                if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value472;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional356=self!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional356) {
                                                                                ((struct sSizeOfNode*)come_null_check(result_184, "sSizeOfNode_clone", 5))->sline=((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 5))->sline;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional357=self!=((void*)0)&&((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 7))->sname!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional357) {
                                                                                __dec_obj153=((struct sSizeOfNode*)come_null_check(result_184, "sSizeOfNode_clone", 6))->sname;
                                                                                ((struct sSizeOfNode*)come_null_check(result_184, "sSizeOfNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value473=string_clone(((struct sSizeOfNode*)come_null_check(self, "sSizeOfNode_clone", 6))->sname))));
                                                                                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value473);
                                                                                if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { right_value473 = come_decrement_ref_count(right_value473, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value473;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            __result288__ = __result_obj__ = result_184;
                                                                            if(result_184 && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                            __freed_obj__ = 0;
                                                                            return __result288__;
                                                                            __freed_obj__ = 0;
                                                                            if(result_184 && !__freed_obj__) { come_call_finalizer(sSizeOfNode_finalize,result_184, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional358;
_Bool _if_conditional359;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                            if(_if_conditional358=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->exp!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional358) {
                                                                                if(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp && !__freed_obj__) { ((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp = come_decrement_ref_count(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp, ((struct sNode*)((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional359=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 2))->sname!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional359) {
                                                                                if(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->sname && !__freed_obj__) { ((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->sname = come_decrement_ref_count(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional360;
struct sSizeOfExpNode* __result290__;
void* right_value481;
struct sSizeOfExpNode* result_186;
_Bool _if_conditional361;
void* right_value482;
struct sNode* __dec_obj154;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value483;
char* __dec_obj155;
struct sSizeOfExpNode* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value481, 0, sizeof(void*));
memset(&result_186, 0, sizeof(struct sSizeOfExpNode*));
memset(&right_value482, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
                                                                            if(_if_conditional360=self==(void*)0,                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional360) {
                                                                                __result290__ = __result_obj__ = (void*)0;
                                                                                __freed_obj__ = 0;
                                                                                return __result290__;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            result_186=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value481=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3))));
                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value481);
                                                                            if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                            __right_value_freed_obj[0] = right_value481;
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional361=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 5))->exp!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional361) {
                                                                                __dec_obj154=((struct sSizeOfExpNode*)come_null_check(result_186, "sSizeOfExpNode_clone", 4))->exp;
                                                                                ((struct sSizeOfExpNode*)come_null_check(result_186, "sSizeOfExpNode_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=sNode_clone(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 4))->exp))));
                                                                                if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value482);
                                                                                if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0); } 
                                                                                __right_value_freed_obj[0] = right_value482;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional362=self!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional362) {
                                                                                ((struct sSizeOfExpNode*)come_null_check(result_186, "sSizeOfExpNode_clone", 5))->sline=((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 5))->sline;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            if(_if_conditional363=self!=((void*)0)&&((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 7))->sname!=((void*)0),                                                                            __freed_obj__ = 0, 
                                                                            _if_conditional363) {
                                                                                __dec_obj155=((struct sSizeOfExpNode*)come_null_check(result_186, "sSizeOfExpNode_clone", 6))->sname;
                                                                                ((struct sSizeOfExpNode*)come_null_check(result_186, "sSizeOfExpNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value483=string_clone(((struct sSizeOfExpNode*)come_null_check(self, "sSizeOfExpNode_clone", 6))->sname))));
                                                                                if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value483);
                                                                                if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, (void*)0, (void*)0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value483;
                                                                                __freed_obj__ = 0;
                                                                            }
                                                                            __freed_obj__ = 0;
                                                                            __result291__ = __result_obj__ = result_186;
                                                                            if(result_186 && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                            __freed_obj__ = 0;
                                                                            return __result291__;
                                                                            __freed_obj__ = 0;
                                                                            if(result_186 && !__freed_obj__) { come_call_finalizer(sSizeOfExpNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional369;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional369=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->type!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional369) {
                                                                                    if(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional370=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 2))->sname!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional370) {
                                                                                    if(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional371;
struct sAlignOfNode* __result294__;
void* right_value495;
struct sAlignOfNode* result_194;
_Bool _if_conditional372;
void* right_value496;
struct sType* __dec_obj156;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value497;
char* __dec_obj157;
struct sAlignOfNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value495, 0, sizeof(void*));
memset(&result_194, 0, sizeof(struct sAlignOfNode*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
                                                                                if(_if_conditional371=self==(void*)0,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional371) {
                                                                                    __result294__ = __result_obj__ = (void*)0;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result294__;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                result_194=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value495=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value495);
                                                                                if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value495;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional372=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 5))->type!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional372) {
                                                                                    __dec_obj156=((struct sAlignOfNode*)come_null_check(result_194, "sAlignOfNode_clone", 4))->type;
                                                                                    ((struct sAlignOfNode*)come_null_check(result_194, "sAlignOfNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value496=sType_clone(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 4))->type))));
                                                                                    if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value496);
                                                                                    if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value496;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional373=self!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional373) {
                                                                                    ((struct sAlignOfNode*)come_null_check(result_194, "sAlignOfNode_clone", 5))->sline=((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 5))->sline;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional374=self!=((void*)0)&&((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 7))->sname!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional374) {
                                                                                    __dec_obj157=((struct sAlignOfNode*)come_null_check(result_194, "sAlignOfNode_clone", 6))->sname;
                                                                                    ((struct sAlignOfNode*)come_null_check(result_194, "sAlignOfNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value497=string_clone(((struct sAlignOfNode*)come_null_check(self, "sAlignOfNode_clone", 6))->sname))));
                                                                                    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value497);
                                                                                    if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { right_value497 = come_decrement_ref_count(right_value497, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value497;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                __result295__ = __result_obj__ = result_194;
                                                                                if(result_194 && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,result_194, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                __freed_obj__ = 0;
                                                                                return __result295__;
                                                                                __freed_obj__ = 0;
                                                                                if(result_194 && !__freed_obj__) { come_call_finalizer(sAlignOfNode_finalize,result_194, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional375;
_Bool _if_conditional376;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                if(_if_conditional375=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->exp!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional375) {
                                                                                    if(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp && !__freed_obj__) { ((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp = come_decrement_ref_count(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp, ((struct sNode*)((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional376=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 2))->sname!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional376) {
                                                                                    if(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional377;
struct sAlignOfExpNode* __result297__;
void* right_value505;
struct sAlignOfExpNode* result_196;
_Bool _if_conditional378;
void* right_value506;
struct sNode* __dec_obj158;
_Bool _if_conditional379;
_Bool _if_conditional380;
void* right_value507;
char* __dec_obj159;
struct sAlignOfExpNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value505, 0, sizeof(void*));
memset(&result_196, 0, sizeof(struct sAlignOfExpNode*));
memset(&right_value506, 0, sizeof(void*));
memset(&right_value507, 0, sizeof(void*));
                                                                                if(_if_conditional377=self==(void*)0,                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional377) {
                                                                                    __result297__ = __result_obj__ = (void*)0;
                                                                                    __freed_obj__ = 0;
                                                                                    return __result297__;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                result_196=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value505=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3))));
                                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value505);
                                                                                if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                __right_value_freed_obj[0] = right_value505;
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional378=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 5))->exp!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional378) {
                                                                                    __dec_obj158=((struct sAlignOfExpNode*)come_null_check(result_196, "sAlignOfExpNode_clone", 4))->exp;
                                                                                    ((struct sAlignOfExpNode*)come_null_check(result_196, "sAlignOfExpNode_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value506=sNode_clone(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 4))->exp))));
                                                                                    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value506);
                                                                                    if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { right_value506 = come_decrement_ref_count(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0); } 
                                                                                    __right_value_freed_obj[0] = right_value506;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional379=self!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional379) {
                                                                                    ((struct sAlignOfExpNode*)come_null_check(result_196, "sAlignOfExpNode_clone", 5))->sline=((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 5))->sline;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                if(_if_conditional380=self!=((void*)0)&&((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 7))->sname!=((void*)0),                                                                                __freed_obj__ = 0, 
                                                                                _if_conditional380) {
                                                                                    __dec_obj159=((struct sAlignOfExpNode*)come_null_check(result_196, "sAlignOfExpNode_clone", 6))->sname;
                                                                                    ((struct sAlignOfExpNode*)come_null_check(result_196, "sAlignOfExpNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value507=string_clone(((struct sAlignOfExpNode*)come_null_check(self, "sAlignOfExpNode_clone", 6))->sname))));
                                                                                    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, (void*)0, (void*)0, 0,0,0); }
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value507);
                                                                                    if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, (void*)0, (void*)0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value507;
                                                                                    __freed_obj__ = 0;
                                                                                }
                                                                                __freed_obj__ = 0;
                                                                                __result298__ = __result_obj__ = result_196;
                                                                                if(result_196 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,result_196, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                __freed_obj__ = 0;
                                                                                return __result298__;
                                                                                __freed_obj__ = 0;
                                                                                if(result_196 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode_finalize,result_196, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional386;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                    if(_if_conditional386=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->type!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional386) {
                                                                                        if(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional387=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 2))->sname!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional387) {
                                                                                        if(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional388;
struct sAlignOfNode2* __result301__;
void* right_value519;
struct sAlignOfNode2* result_204;
_Bool _if_conditional389;
void* right_value520;
struct sType* __dec_obj160;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value521;
char* __dec_obj161;
struct sAlignOfNode2* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value519, 0, sizeof(void*));
memset(&result_204, 0, sizeof(struct sAlignOfNode2*));
memset(&right_value520, 0, sizeof(void*));
memset(&right_value521, 0, sizeof(void*));
                                                                                    if(_if_conditional388=self==(void*)0,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional388) {
                                                                                        __result301__ = __result_obj__ = (void*)0;
                                                                                        __freed_obj__ = 0;
                                                                                        return __result301__;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    result_204=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value519=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value519);
                                                                                    if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value519;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional389=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 5))->type!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional389) {
                                                                                        __dec_obj160=((struct sAlignOfNode2*)come_null_check(result_204, "sAlignOfNode2_clone", 4))->type;
                                                                                        ((struct sAlignOfNode2*)come_null_check(result_204, "sAlignOfNode2_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value520=sType_clone(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 4))->type))));
                                                                                        if(__dec_obj160) { come_call_finalizer(sType_finalize,__dec_obj160, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value520);
                                                                                        if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value520;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional390=self!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional390) {
                                                                                        ((struct sAlignOfNode2*)come_null_check(result_204, "sAlignOfNode2_clone", 5))->sline=((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 5))->sline;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional391=self!=((void*)0)&&((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 7))->sname!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional391) {
                                                                                        __dec_obj161=((struct sAlignOfNode2*)come_null_check(result_204, "sAlignOfNode2_clone", 6))->sname;
                                                                                        ((struct sAlignOfNode2*)come_null_check(result_204, "sAlignOfNode2_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value521=string_clone(((struct sAlignOfNode2*)come_null_check(self, "sAlignOfNode2_clone", 6))->sname))));
                                                                                        if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value521);
                                                                                        if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { right_value521 = come_decrement_ref_count(right_value521, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value521;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    __result302__ = __result_obj__ = result_204;
                                                                                    if(result_204 && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,result_204, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    return __result302__;
                                                                                    __freed_obj__ = 0;
                                                                                    if(result_204 && !__freed_obj__) { come_call_finalizer(sAlignOfNode2_finalize,result_204, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional392;
_Bool _if_conditional393;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                    if(_if_conditional392=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->exp!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional392) {
                                                                                        if(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp && !__freed_obj__) { ((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp = come_decrement_ref_count(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional393=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 2))->sname!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional393) {
                                                                                        if(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
struct sAlignOfExpNode2* __result304__;
void* right_value529;
struct sAlignOfExpNode2* result_206;
_Bool _if_conditional395;
void* right_value530;
struct sNode* __dec_obj162;
_Bool _if_conditional396;
_Bool _if_conditional397;
void* right_value531;
char* __dec_obj163;
struct sAlignOfExpNode2* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value529, 0, sizeof(void*));
memset(&result_206, 0, sizeof(struct sAlignOfExpNode2*));
memset(&right_value530, 0, sizeof(void*));
memset(&right_value531, 0, sizeof(void*));
                                                                                    if(_if_conditional394=self==(void*)0,                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional394) {
                                                                                        __result304__ = __result_obj__ = (void*)0;
                                                                                        __freed_obj__ = 0;
                                                                                        return __result304__;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    result_206=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value529=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3))));
                                                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value529);
                                                                                    if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                    __right_value_freed_obj[0] = right_value529;
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional395=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 5))->exp!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional395) {
                                                                                        __dec_obj162=((struct sAlignOfExpNode2*)come_null_check(result_206, "sAlignOfExpNode2_clone", 4))->exp;
                                                                                        ((struct sAlignOfExpNode2*)come_null_check(result_206, "sAlignOfExpNode2_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value530=sNode_clone(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 4))->exp))));
                                                                                        if(__dec_obj162) { __dec_obj162 = come_decrement_ref_count(__dec_obj162, ((struct sNode*)__dec_obj162)->finalize, ((struct sNode*)__dec_obj162)->_protocol_obj, 0,0,0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value530);
                                                                                        if(right_value530 && right_value530 != __result_obj__ && !__freed_obj__) { right_value530 = come_decrement_ref_count(right_value530, ((struct sNode*)right_value530)->finalize, ((struct sNode*)right_value530)->_protocol_obj, 1, 0, 0); } 
                                                                                        __right_value_freed_obj[0] = right_value530;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional396=self!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional396) {
                                                                                        ((struct sAlignOfExpNode2*)come_null_check(result_206, "sAlignOfExpNode2_clone", 5))->sline=((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 5))->sline;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    if(_if_conditional397=self!=((void*)0)&&((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 7))->sname!=((void*)0),                                                                                    __freed_obj__ = 0, 
                                                                                    _if_conditional397) {
                                                                                        __dec_obj163=((struct sAlignOfExpNode2*)come_null_check(result_206, "sAlignOfExpNode2_clone", 6))->sname;
                                                                                        ((struct sAlignOfExpNode2*)come_null_check(result_206, "sAlignOfExpNode2_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value531=string_clone(((struct sAlignOfExpNode2*)come_null_check(self, "sAlignOfExpNode2_clone", 6))->sname))));
                                                                                        if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count(__dec_obj163, (void*)0, (void*)0, 0,0,0); }
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value531);
                                                                                        if(right_value531 && right_value531 != __result_obj__ && !__freed_obj__) { right_value531 = come_decrement_ref_count(right_value531, (void*)0, (void*)0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value531;
                                                                                        __freed_obj__ = 0;
                                                                                    }
                                                                                    __freed_obj__ = 0;
                                                                                    __result305__ = __result_obj__ = result_206;
                                                                                    if(result_206 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,result_206, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                    __freed_obj__ = 0;
                                                                                    return __result305__;
                                                                                    __freed_obj__ = 0;
                                                                                    if(result_206 && !__freed_obj__) { come_call_finalizer(sAlignOfExpNode2_finalize,result_206, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                        if(_if_conditional403=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->type!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional403) {
                                                                                            if(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0))->type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 0))->type, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional404=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 2))->sname!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional404) {
                                                                                            if(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional405;
struct sAlignAsNode* __result308__;
void* right_value543;
struct sAlignAsNode* result_214;
_Bool _if_conditional406;
void* right_value544;
struct sType* __dec_obj164;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value545;
char* __dec_obj165;
struct sAlignAsNode* __result309__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value543, 0, sizeof(void*));
memset(&result_214, 0, sizeof(struct sAlignAsNode*));
memset(&right_value544, 0, sizeof(void*));
memset(&right_value545, 0, sizeof(void*));
                                                                                        if(_if_conditional405=self==(void*)0,                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional405) {
                                                                                            __result308__ = __result_obj__ = (void*)0;
                                                                                            __freed_obj__ = 0;
                                                                                            return __result308__;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        result_214=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value543=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3))));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value543);
                                                                                        if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value543;
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional406=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 5))->type!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional406) {
                                                                                            __dec_obj164=((struct sAlignAsNode*)come_null_check(result_214, "sAlignAsNode_clone", 4))->type;
                                                                                            ((struct sAlignAsNode*)come_null_check(result_214, "sAlignAsNode_clone", 4))->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value544=sType_clone(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 4))->type))));
                                                                                            if(__dec_obj164) { come_call_finalizer(sType_finalize,__dec_obj164, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value544);
                                                                                            if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value544;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional407=self!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional407) {
                                                                                            ((struct sAlignAsNode*)come_null_check(result_214, "sAlignAsNode_clone", 5))->sline=((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 5))->sline;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional408=self!=((void*)0)&&((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 7))->sname!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional408) {
                                                                                            __dec_obj165=((struct sAlignAsNode*)come_null_check(result_214, "sAlignAsNode_clone", 6))->sname;
                                                                                            ((struct sAlignAsNode*)come_null_check(result_214, "sAlignAsNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value545=string_clone(((struct sAlignAsNode*)come_null_check(self, "sAlignAsNode_clone", 6))->sname))));
                                                                                            if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count(__dec_obj165, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value545);
                                                                                            if(right_value545 && right_value545 != __result_obj__ && !__freed_obj__) { right_value545 = come_decrement_ref_count(right_value545, (void*)0, (void*)0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value545;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        __result309__ = __result_obj__ = result_214;
                                                                                        if(result_214 && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,result_214, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                        __freed_obj__ = 0;
                                                                                        return __result309__;
                                                                                        __freed_obj__ = 0;
                                                                                        if(result_214 && !__freed_obj__) { come_call_finalizer(sAlignAsNode_finalize,result_214, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional409;
_Bool _if_conditional410;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                                                        if(_if_conditional409=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->exp!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional409) {
                                                                                            if(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp && !__freed_obj__) { ((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp = come_decrement_ref_count(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp, ((struct sNode*)((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp)->finalize, ((struct sNode*)((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 0))->exp)->_protocol_obj, 0, 0, 0); } 
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional410=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 2))->sname!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional410) {
                                                                                            if(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->sname && !__freed_obj__) { ((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->sname = come_decrement_ref_count(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_finalize", 1))->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional411;
struct sAlignAsExpNode* __result311__;
void* right_value553;
struct sAlignAsExpNode* result_216;
_Bool _if_conditional412;
void* right_value554;
struct sNode* __dec_obj166;
_Bool _if_conditional413;
_Bool _if_conditional414;
void* right_value555;
char* __dec_obj167;
struct sAlignAsExpNode* __result312__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value553, 0, sizeof(void*));
memset(&result_216, 0, sizeof(struct sAlignAsExpNode*));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
                                                                                        if(_if_conditional411=self==(void*)0,                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional411) {
                                                                                            __result311__ = __result_obj__ = (void*)0;
                                                                                            __freed_obj__ = 0;
                                                                                            return __result311__;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        result_216=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value553=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3))));
                                                                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value553);
                                                                                        if(right_value553 && right_value553 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                                                        __right_value_freed_obj[0] = right_value553;
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional412=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 5))->exp!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional412) {
                                                                                            __dec_obj166=((struct sAlignAsExpNode*)come_null_check(result_216, "sAlignAsExpNode_clone", 4))->exp;
                                                                                            ((struct sAlignAsExpNode*)come_null_check(result_216, "sAlignAsExpNode_clone", 4))->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=sNode_clone(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 4))->exp))));
                                                                                            if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value554);
                                                                                            if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { right_value554 = come_decrement_ref_count(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0); } 
                                                                                            __right_value_freed_obj[0] = right_value554;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional413=self!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional413) {
                                                                                            ((struct sAlignAsExpNode*)come_null_check(result_216, "sAlignAsExpNode_clone", 5))->sline=((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 5))->sline;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        if(_if_conditional414=self!=((void*)0)&&((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 7))->sname!=((void*)0),                                                                                        __freed_obj__ = 0, 
                                                                                        _if_conditional414) {
                                                                                            __dec_obj167=((struct sAlignAsExpNode*)come_null_check(result_216, "sAlignAsExpNode_clone", 6))->sname;
                                                                                            ((struct sAlignAsExpNode*)come_null_check(result_216, "sAlignAsExpNode_clone", 6))->sname=(char*)come_increment_ref_count(((char*)(right_value555=string_clone(((struct sAlignAsExpNode*)come_null_check(self, "sAlignAsExpNode_clone", 6))->sname))));
                                                                                            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count(__dec_obj167, (void*)0, (void*)0, 0,0,0); }
                                                                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value555);
                                                                                            if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { right_value555 = come_decrement_ref_count(right_value555, (void*)0, (void*)0, 1, 0, 0); }
                                                                                            __right_value_freed_obj[0] = right_value555;
                                                                                            __freed_obj__ = 0;
                                                                                        }
                                                                                        __freed_obj__ = 0;
                                                                                        __result312__ = __result_obj__ = result_216;
                                                                                        if(result_216 && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                                                        __freed_obj__ = 0;
                                                                                        return __result312__;
                                                                                        __freed_obj__ = 0;
                                                                                        if(result_216 && !__freed_obj__) { come_call_finalizer(sAlignAsExpNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* optional$2sNodephbool_catch(struct optional$2sNodephbool* self, void* parent, void (*block)(void*)){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional415;
_Bool _if_conditional416;
struct sNode* __result314__;
struct sNode* __result315__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional415=!((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v2,        __freed_obj__ = 0, 
        _if_conditional415) {
            block(parent);
            __freed_obj__ = 0;
            if(_if_conditional416=((struct sDummyCurrentStack*)come_null_check(((struct sDummyCurrentStack*)parent), "./comelang2.h", 52))->__method_block_result_kind__!=0,            __freed_obj__ = 0, 
            _if_conditional416) {
                __result314__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 50))->v1;
                __freed_obj__ = 0;
                return __result314__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        __result315__ = __result_obj__ = ((struct optional$2sNodephbool*)come_null_check(self, "./comelang2.h", 54))->v1;
        __freed_obj__ = 0;
        return __result315__;
        __freed_obj__ = 0;
}

void method_block1_21objc(struct __current_stack1__* parent){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value560;
void* right_value561;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value560, 0, sizeof(void*));
memset(&right_value561, 0, sizeof(void*));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value560);
        if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { right_value560 = come_decrement_ref_count(right_value560, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value560;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value561);
        if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value561;
        __freed_obj__ = 0;
                    ((struct __current_stack1__*) parent)->__method_block_result_kind__ = 3;
            ((struct __current_stack1__*) parent)->__method_block_return_value__ = (struct optional$2voidpbool*)come_increment_ref_count((come_save_stackframe("21obj.c", 1831), ((struct optional$2voidpbool*)(right_value561=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value560=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1831))),((void*)0),(_Bool)0)))));
        return;        __freed_obj__ = 0;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional417;
_Bool _if_conditional418;
_Bool _if_conditional419;
_Bool _if_conditional420;
_Bool _if_conditional421;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value565;
void* right_value566;
struct sNode* __result317__;
void* right_value567;
void* right_value568;
struct sNode* _inf_value34;
struct sNullNodeX* _inf_obj_value34;
void* right_value571;
struct sNode* __result320__;
void* right_value572;
void* right_value573;
struct sNode* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value565, 0, sizeof(void*));
memset(&right_value566, 0, sizeof(void*));
memset(&right_value567, 0, sizeof(void*));
memset(&right_value568, 0, sizeof(void*));
memset(&right_value571, 0, sizeof(void*));
memset(&right_value572, 0, sizeof(void*));
memset(&right_value573, 0, sizeof(void*));
    if(_if_conditional417=string_operator_equals(buf,"using"),    __freed_obj__ = 0, 
    _if_conditional417) {
        if(_if_conditional418=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"comelang",strlen("comelang"))==0,        __freed_obj__ = 0, 
        _if_conditional418) {
            ((struct sInfo*)come_null_check(info, "21obj.c", 1840))->p+=strlen("comelang");
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
            gComeC=(_Bool)0;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional419=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"c",strlen("c"))==0||memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"C",strlen("C"))==0,            __freed_obj__ = 0, 
            _if_conditional419) {
                ((struct sInfo*)come_null_check(info, "21obj.c", 1846))->p+=strlen("c");
                __freed_obj__ = 0;
                skip_spaces_and_lf(info);
                __freed_obj__ = 0;
                if(_if_conditional420=*((struct sInfo*)come_null_check(info, "21obj.c", 1862))->p==123,                __freed_obj__ = 0, 
                _if_conditional420) {
                    ((struct sInfo*)come_null_check(info, "21obj.c", 1850))->p++;
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                    gComeC=(_Bool)1;
                    __freed_obj__ = 0;
                    transpile_toplevel((_Bool)1,info);
                    __freed_obj__ = 0;
                    gComeC=(_Bool)0;
                    __freed_obj__ = 0;
                }
                else {
                    gComeC=(_Bool)1;
                    __freed_obj__ = 0;
                }
                __freed_obj__ = 0;
            }
            else {
                if(_if_conditional421=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"gc",strlen("gc"))==0,                __freed_obj__ = 0, 
                _if_conditional421) {
                    ((struct sInfo*)come_null_check(info, "21obj.c", 1864))->p+=strlen("gc");
                    __freed_obj__ = 0;
                    skip_spaces_and_lf(info);
                    __freed_obj__ = 0;
                }
                else {
                    if(_if_conditional422=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"no-gc",strlen("no-gc"))==0,                    __freed_obj__ = 0, 
                    _if_conditional422) {
                        ((struct sInfo*)come_null_check(info, "21obj.c", 1868))->p+=strlen("no-gc");
                        __freed_obj__ = 0;
                        skip_spaces_and_lf(info);
                        __freed_obj__ = 0;
                    }
                    else {
                        if(_if_conditional423=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"unsafe",strlen("unsafe"))==0,                        __freed_obj__ = 0, 
                        _if_conditional423) {
                            ((struct sInfo*)come_null_check(info, "21obj.c", 1872))->p+=strlen("unsafe");
                            __freed_obj__ = 0;
                            skip_spaces_and_lf(info);
                            __freed_obj__ = 0;
                        }
                        else {
                            if(_if_conditional424=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1884))->p,"no-null-check",strlen("no-null-check"))==0,                            __freed_obj__ = 0, 
                            _if_conditional424) {
                                ((struct sInfo*)come_null_check(info, "21obj.c", 1876))->p+=strlen("no-null-check");
                                __freed_obj__ = 0;
                                skip_spaces_and_lf(info);
                                __freed_obj__ = 0;
                            }
                            else {
                                err_msg(info,"invalid using");
                                __freed_obj__ = 0;
                                __result317__ = __result_obj__ = (come_save_stackframe("21obj.c", 1881), ((struct optional$2voidpbool*)(right_value566=optional$2voidpbool_initialize(((struct optional$2voidpbool*)(right_value565=(struct optional$2voidpbool*)come_calloc(1, sizeof(struct optional$2voidpbool)*(1), "21obj.c", 1881))),((void*)0),(_Bool)0))));
                                if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value565);
                                if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { right_value565 = come_decrement_ref_count(right_value565, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value565;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value566);
                                if(right_value566 && right_value566 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2voidpboolp_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value566;
                                __freed_obj__ = 0;
                                return __result317__;
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
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1884);
        _inf_obj_value34=come_increment_ref_count(((struct sNullNodeX*)(right_value568=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value567=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1884)))),info))));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sNullNodeX_finalize;
        _inf_value34->clone=(void*)sNullNodeX_clone;
        _inf_value34->compile=(void*)sNullNodeX_compile;
        _inf_value34->sline=(void*)sNullNodeX_sline;
        _inf_value34->sname=(void*)sNullNodeX_sname;
        _inf_value34->terminated=(void*)sNullNodeX_terminated;
        _inf_value34->kind=(void*)sNullNodeX_kind;
        __result320__ = __result_obj__ = ((struct sNode*)(right_value571=_inf_value34));
        if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value567);
        if(right_value567 && right_value567 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value567;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value568);
        if(right_value568 && right_value568 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value568;
        __freed_obj__ = 0;
        return __result320__;
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result321__ = __result_obj__ = ((struct sNode*)(right_value573=top_level_v93((char*)come_increment_ref_count(((char*)(right_value572=__builtin_string(buf)))),head,head_sline,info)));
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value572);
    if(right_value572 && right_value572 != __result_obj__ && !__freed_obj__) { right_value572 = come_decrement_ref_count(right_value572, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value572;
    __freed_obj__ = 0;
    return __result321__;
    __freed_obj__ = 0;
    if(buf && !__freed_obj__) { buf = come_decrement_ref_count(buf, (void*)0, (void*)0, 0, 1, 0); }
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional425=self!=((void*)0)&&((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 1))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional425) {
                if(((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 0))->sname && !__freed_obj__) { ((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 0))->sname = come_decrement_ref_count(((struct sNullNodeX*)come_null_check(self, "sNullNodeX_finalize", 0))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional426;
struct sNullNodeX* __result318__;
void* right_value569;
struct sNullNodeX* result_218;
_Bool _if_conditional427;
_Bool _if_conditional428;
void* right_value570;
char* __dec_obj168;
struct sNullNodeX* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value569, 0, sizeof(void*));
memset(&result_218, 0, sizeof(struct sNullNodeX*));
memset(&right_value570, 0, sizeof(void*));
            if(_if_conditional426=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional426) {
                __result318__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result318__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_218=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value569=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value569);
            if(right_value569 && right_value569 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value569;
            __freed_obj__ = 0;
            if(_if_conditional427=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional427) {
                ((struct sNullNodeX*)come_null_check(result_218, "sNullNodeX_clone", 4))->sline=((struct sNullNodeX*)come_null_check(self, "sNullNodeX_clone", 4))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional428=self!=((void*)0)&&((struct sNullNodeX*)come_null_check(self, "sNullNodeX_clone", 6))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional428) {
                __dec_obj168=((struct sNullNodeX*)come_null_check(result_218, "sNullNodeX_clone", 5))->sname;
                ((struct sNullNodeX*)come_null_check(result_218, "sNullNodeX_clone", 5))->sname=(char*)come_increment_ref_count(((char*)(right_value570=string_clone(((struct sNullNodeX*)come_null_check(self, "sNullNodeX_clone", 5))->sname))));
                if(__dec_obj168) { __dec_obj168 = come_decrement_ref_count(__dec_obj168, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value570);
                if(right_value570 && right_value570 != __result_obj__ && !__freed_obj__) { right_value570 = come_decrement_ref_count(right_value570, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value570;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result319__ = __result_obj__ = result_218;
            if(result_218 && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,result_218, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result319__;
            __freed_obj__ = 0;
            if(result_218 && !__freed_obj__) { come_call_finalizer(sNullNodeX_finalize,result_218, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional429;
void* right_value574;
struct tuple3$3sTypephcharphbool* multiple_assgin_var10;
struct sType* type3_219;
char* name2_220;
_Bool err_221;
_Bool _if_conditional430;
void* right_value575;
struct sType* inf_type_222;
void* right_value576;
void* right_value577;
struct sNode* _inf_value35;
struct sImplementsNode* _inf_obj_value35;
void* right_value582;
struct sNode* __result324__;
_Bool _if_conditional439;
_Bool _while_condtional9;
void* right_value583;
struct sNode* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value574, 0, sizeof(void*));
memset(&type3_219, 0, sizeof(struct sType*));
memset(&name2_220, 0, sizeof(char*));
memset(&err_221, 0, sizeof(_Bool));
memset(&type3_219, 0, sizeof(struct sType*));
memset(&name2_220, 0, sizeof(char*));
memset(&err_221, 0, sizeof(_Bool));
memset(&right_value575, 0, sizeof(void*));
memset(&inf_type_222, 0, sizeof(struct sType*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_value577, 0, sizeof(void*));
memset(&right_value582, 0, sizeof(void*));
memset(&right_value583, 0, sizeof(void*));
    if(_if_conditional429=memcmp(((struct sInfo*)come_null_check(info, "21obj.c", 1914))->p,"implements",strlen("implements"))==0,    __freed_obj__ = 0, 
    _if_conditional429) {
        ((struct sInfo*)come_null_check(info, "21obj.c", 1893))->p+=strlen("implements");
        __freed_obj__ = 0;
        skip_spaces_and_lf(info);
        __freed_obj__ = 0;
        come_clear_stackframe();
        multiple_assgin_var10=optional$2tuple3$3sTypephcharphboolphbool_value((come_push_stackframe("21obj.c", 1896),((struct optional$2tuple3$3sTypephcharphboolphbool*)(right_value574=parse_type(info,(_Bool)0,(_Bool)1)))));
        type3_219=(struct sType*)come_increment_ref_count(multiple_assgin_var10->v1);
        name2_220=(char*)come_increment_ref_count(multiple_assgin_var10->v2);
        err_221=multiple_assgin_var10->v3;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value574);
        if(right_value574 && right_value574 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2tuple3$3sTypephcharphboolphboolp_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value574;
        __freed_obj__ = 0;
        if(_if_conditional430=!err_221,        __freed_obj__ = 0, 
        _if_conditional430) {
            printf("%s %d: parse_type failed\n",((struct sInfo*)come_null_check(info, "21obj.c", 1898))->sname,((struct sInfo*)come_null_check(info, "21obj.c", 1898))->sline);
            __freed_obj__ = 0;
            exit(2);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
        inf_type_222=(struct sType*)come_increment_ref_count(((struct sType*)(right_value575=sType_clone(type3_219))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value575);
        if(right_value575 && right_value575 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value575;
        __freed_obj__ = 0;
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1904);
        _inf_obj_value35=come_increment_ref_count(((struct sImplementsNode*)(right_value577=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value576=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1904)))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_222),info))));
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sImplementsNode_finalize;
        _inf_value35->clone=(void*)sImplementsNode_clone;
        _inf_value35->compile=(void*)sImplementsNode_compile;
        _inf_value35->sline=(void*)sImplementsNode_sline;
        _inf_value35->sname=(void*)sImplementsNode_sname;
        _inf_value35->terminated=(void*)sImplementsNode_terminated;
        _inf_value35->kind=(void*)sImplementsNode_kind;
        __result324__ = __result_obj__ = ((struct sNode*)(right_value582=_inf_value35));
        if(type3_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name2_220 && !__freed_obj__) { name2_220 = come_decrement_ref_count(name2_220, (void*)0, (void*)0, 0, 0, 0); }
        if(inf_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value576);
        if(right_value576 && right_value576 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value576;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value577);
        if(right_value577 && right_value577 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value577;
        __freed_obj__ = 0;
        return __result324__;
        __freed_obj__ = 0;
        if(type3_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_219, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(name2_220 && !__freed_obj__) { name2_220 = come_decrement_ref_count(name2_220, (void*)0, (void*)0, 0, 0, 0); }
        if(inf_type_222 && !__freed_obj__) { come_call_finalizer(sType_finalize,inf_type_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional439=*((struct sInfo*)come_null_check(info, "21obj.c", 1914))->p==64,        __freed_obj__ = 0, 
        _if_conditional439) {
            ((struct sInfo*)come_null_check(info, "21obj.c", 1907))->p++;
            __freed_obj__ = 0;
            while(_while_condtional9=xisalnum(*((struct sInfo*)come_null_check(info, "21obj.c", 1911))->p)||*((struct sInfo*)come_null_check(info, "21obj.c", 1911))->p==95,            __freed_obj__ = 0, 
            _while_condtional9) {
                ((struct sInfo*)come_null_check(info, "21obj.c", 1909))->p++;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            skip_spaces_and_lf(info);
            __freed_obj__ = 0;
        }
        __freed_obj__ = 0;
    }
    __freed_obj__ = 0;
    __result325__ = __result_obj__ = ((struct sNode*)(right_value583=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = 0;
    return __result325__;
    __freed_obj__ = 0;
    if(node && !__freed_obj__) { node = come_decrement_ref_count(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional431=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1))->obj_exp!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional431) {
                if(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp && !__freed_obj__) { ((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp = come_decrement_ref_count(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp, ((struct sNode*)((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp)->finalize, ((struct sNode*)((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 0))->obj_exp)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional432=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->inf_type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional432) {
                if(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1))->inf_type && !__freed_obj__) { come_call_finalizer(sType_finalize,((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 1))->inf_type, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional433=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 3))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional433) {
                if(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->sname && !__freed_obj__) { ((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->sname = come_decrement_ref_count(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_finalize", 2))->sname, (void*)0, (void*)0, 0, 0, 0); }
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional434;
struct sImplementsNode* __result322__;
void* right_value578;
struct sImplementsNode* result_223;
_Bool _if_conditional435;
void* right_value579;
struct sNode* __dec_obj169;
_Bool _if_conditional436;
void* right_value580;
struct sType* __dec_obj170;
_Bool _if_conditional437;
_Bool _if_conditional438;
void* right_value581;
char* __dec_obj171;
struct sImplementsNode* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value578, 0, sizeof(void*));
memset(&result_223, 0, sizeof(struct sImplementsNode*));
memset(&right_value579, 0, sizeof(void*));
memset(&right_value580, 0, sizeof(void*));
memset(&right_value581, 0, sizeof(void*));
            if(_if_conditional434=self==(void*)0,            __freed_obj__ = 0, 
            _if_conditional434) {
                __result322__ = __result_obj__ = (void*)0;
                __freed_obj__ = 0;
                return __result322__;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            result_223=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value578=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value578);
            if(right_value578 && right_value578 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value578;
            __freed_obj__ = 0;
            if(_if_conditional435=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 5))->obj_exp!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional435) {
                __dec_obj169=((struct sImplementsNode*)come_null_check(result_223, "sImplementsNode_clone", 4))->obj_exp;
                ((struct sImplementsNode*)come_null_check(result_223, "sImplementsNode_clone", 4))->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value579=sNode_clone(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 4))->obj_exp))));
                if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value579);
                if(right_value579 && right_value579 != __result_obj__ && !__freed_obj__) { right_value579 = come_decrement_ref_count(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value579;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional436=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 6))->inf_type!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional436) {
                __dec_obj170=((struct sImplementsNode*)come_null_check(result_223, "sImplementsNode_clone", 5))->inf_type;
                ((struct sImplementsNode*)come_null_check(result_223, "sImplementsNode_clone", 5))->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value580=sType_clone(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 5))->inf_type))));
                if(__dec_obj170) { come_call_finalizer(sType_finalize,__dec_obj170, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value580);
                if(right_value580 && right_value580 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value580;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional437=self!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional437) {
                ((struct sImplementsNode*)come_null_check(result_223, "sImplementsNode_clone", 6))->sline=((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 6))->sline;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            if(_if_conditional438=self!=((void*)0)&&((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 8))->sname!=((void*)0),            __freed_obj__ = 0, 
            _if_conditional438) {
                __dec_obj171=((struct sImplementsNode*)come_null_check(result_223, "sImplementsNode_clone", 7))->sname;
                ((struct sImplementsNode*)come_null_check(result_223, "sImplementsNode_clone", 7))->sname=(char*)come_increment_ref_count(((char*)(right_value581=string_clone(((struct sImplementsNode*)come_null_check(self, "sImplementsNode_clone", 7))->sname))));
                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value581);
                if(right_value581 && right_value581 != __result_obj__ && !__freed_obj__) { right_value581 = come_decrement_ref_count(right_value581, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value581;
                __freed_obj__ = 0;
            }
            __freed_obj__ = 0;
            __result323__ = __result_obj__ = result_223;
            if(result_223 && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,result_223, (void*)0, (void*)0, 0, 0, 1, 0); }
            __freed_obj__ = 0;
            return __result323__;
            __freed_obj__ = 0;
            if(result_223 && !__freed_obj__) { come_call_finalizer(sImplementsNode_finalize,result_223, (void*)0, (void*)0, 0, 0, 0, 0); }
}

